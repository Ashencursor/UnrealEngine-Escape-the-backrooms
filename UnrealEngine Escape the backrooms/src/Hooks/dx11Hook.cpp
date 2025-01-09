#include "dx11Hook.h"
#include "../dependencies/kiero/kiero.h"
#include <iostream>
#include "callbacks.h"
#include "../dependencies/imgui/imgui_impl_dx11.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include "../gui/gui.h"
#include "../globals.h"

// Hook rendering stuff
bool Hooks::DX11Hook::initialize()
{
	if (kiero::init(kiero::RenderType::D3D11) != kiero::Status::Success) 
	{
		std::cout << "[-] Failed to initialize Kiero!" << std::endl;
		return false;
	}

	// Hook Present and ResizeBuffers
	kiero::bind(8, reinterpret_cast<void**>(&Callback::Present::oPresent), Callback::Present::hkPresent);				// Index 8 is Present
	kiero::bind(13, reinterpret_cast<void**>(&Callback::ResizeBuffers::oResizeBuffers), Callback::ResizeBuffers::hkResizeBuffers);				// Index 13 is ResizeBuffers

	return true;
}

void Hooks::DX11Hook::shutdown() 
{
	std::cout << "[...] DX11Hook::shutdown(), Shutting down cheat\n";

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

	// UnHook
	kiero::shutdown();
	if (!SetWindowLongPtrA(Gui::DX11Resources::hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(Callback::WndProc::oWndProc))) {
		std::cout << "[-] Failed to set original wndproc\n";
	}
	else
	{
		std::cout << "[+] Sucsessfully to set original wndproc\n";
	}
	Gui::is_setup = false;
	Gui::shutdown = false;
}