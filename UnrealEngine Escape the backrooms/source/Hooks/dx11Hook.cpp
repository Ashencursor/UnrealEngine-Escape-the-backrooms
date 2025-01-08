#include "dx11Hook.h"
#include "../dependencies/kiero/kiero.h"
#include <iostream>
#include "callbacks.h"
#include "../dependencies/imgui/imgui_impl_dx11.h"
#include "../dependencies/imgui/imgui_impl_win32.h"


// Hook rendering stuff
bool Hooks::DX11Hook::initialize()
{
	if (kiero::init(kiero::RenderType::D3D11) != kiero::Status::Success) {
		std::cerr << "[-] Failed to initialize Kiero!" << std::endl;
		return false;
	}

	// Hook Present and ResizeBuffers
	kiero::bind(8, reinterpret_cast<void**>(&Callback::Present::oPresent), +[](IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags) {
		return Callback::Present::hkPresent(pSwapChain, SyncInterval, Flags);
		});				// Index 8 is Present
	kiero::bind(13, reinterpret_cast<void**>(&Callback::ResizeBuffers::oResizeBuffers), +[](IDXGISwapChain* swapChain, UINT count, UINT width, UINT height, DXGI_FORMAT format, UINT flags) -> HRESULT {
		return Callback::ResizeBuffers::hkResizeBuffers(swapChain, count, width, height, format, flags);
		});				// Index 13 is ResizeBuffers

	return true;
}

void Hooks::DX11Hook::shutdown() {
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	kiero::shutdown();
}