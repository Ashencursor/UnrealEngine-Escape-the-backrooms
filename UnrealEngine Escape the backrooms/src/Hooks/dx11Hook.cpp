#include <iostream>
#include "dx11Hook.h"
#include "../dependencies/kiero/kiero.h"
#include "callbacks.h"
#include "../dependencies/imgui/imgui_impl_dx11.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include "../gui/gui.h"
#include "../globals.h"
#include "../defines.h"
#include "../Hooks/hooks.h"
#include "../dependencies/minhook/include/MinHook.h"
static void** swapChainVFT = nullptr;

// Get SwapChainVFT for the var above for this file to initialize it's hooks necessary for rendering dx11 
void** getSwapChainVFT() 
{
	HWND hwnd = GetConsoleWindow(); // Dummy window for example
	IDXGISwapChain* pSwapChain = nullptr;
	ID3D11Device* pDevice = nullptr;
	ID3D11DeviceContext* pContext = nullptr;

	DXGI_SWAP_CHAIN_DESC scd = {};
	scd.BufferCount = 1;
	scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	scd.OutputWindow = hwnd;
	scd.SampleDesc.Count = 1;
	scd.Windowed = TRUE;
	scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	HRESULT hr = D3D11CreateDeviceAndSwapChain(
		nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		0,
		nullptr,
		0,
		D3D11_SDK_VERSION,
		&scd,
		&pSwapChain,
		&pDevice,
		nullptr,
		&pContext
	);

	if (FAILED(hr)) {
		std::cerr << "Failed to create device and swap chain: 0x" << std::hex << hr << std::endl;
		return nullptr;
	}

	void** vft = *(void***)pSwapChain;
	pSwapChain->Release();
	pDevice->Release();
	pContext->Release();
	return vft;
}
// Hook rendering stuff
bool Hooks::DX11Hook::initialize()
{
	swapChainVFT = getSwapChainVFT();

	// Hook Present and ResizeBuffers
	//Minhook stuff
	Hooks::initMinhook();

	Hooks::hook(swapChainVFT[8], Callback::Present::hkPresent, reinterpret_cast<void**>(&Callback::Present::oPresent));
	Hooks::enable(swapChainVFT[8]);

	Hooks::hook(swapChainVFT[13], Callback::ResizeBuffers::hkResizeBuffers, reinterpret_cast<void**>(&Callback::ResizeBuffers::oResizeBuffers));
	Hooks::enable(swapChainVFT[13]);

	return true;
}

void Hooks::DX11Hook::shutdown() 
{
#ifdef _DEBUG
	std::cout << "[...] DX11Hook::shutdown(), Shutting down cheat\n";
#endif
	// Destroy dx11 resources
	if (Gui::DX11Resources::pRenderTargetView)
	{
		Gui::DX11Resources::pRenderTargetView->Release();
		Gui::DX11Resources::pRenderTargetView = nullptr;
	}
	if (Gui::DX11Resources::pContext)
	{
		Gui::DX11Resources::pContext->Release();
		Gui::DX11Resources::pContext = nullptr;
	}
	if (Gui::DX11Resources::pDevice)
	{
		Gui::DX11Resources::pDevice->Release();
		Gui::DX11Resources::pDevice = nullptr;
	}
	// UnHook all hooks
	MH_DisableHook(MH_ALL_HOOKS);

	MH_RemoveHook(MH_ALL_HOOKS);

	if (!SetWindowLongPtrA(Gui::DX11Resources::hwnd, GWLP_WNDPROC, reinterpret_cast<uintptr_t>(Callback::WndProc::oWndProc))) {
		std::cout << "[-] Failed to set original wndproc\n";
	}
	else
	{
		std::cout << "[+] Sucsessfully to set original wndproc\n";
	}
	Gui::is_setup = false;
	Gui::shutdown = false;
}