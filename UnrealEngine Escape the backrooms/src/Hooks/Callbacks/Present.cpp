#include "../callbacks.h"
#include <Windows.h>
#include "../../gui/gui.h"
#include "../dx11Hook.h"
#include "../../globals.h"
#include <iostream>
#include "../../cheats/Cheat.h"

HRESULT __stdcall Callback::Present::hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!Gui::shutdown)
	{
		if (!Gui::is_setup)
		{
			if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&Gui::DX11Resources::pDevice)))
			{
#ifdef _DEBUG
				std::cout << "[...] hkPresent(), initialization\n"; 
#endif
				// Initialize DX11 resources
				Gui::DX11Resources::pDevice->GetImmediateContext(&Gui::DX11Resources::pContext);

				DXGI_SWAP_CHAIN_DESC sd;
				pSwapChain->GetDesc(&sd);
				Gui::DX11Resources::hwnd = sd.OutputWindow;

				ID3D11Texture2D* pBackBuffer;
				pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
				Gui::DX11Resources::pDevice->CreateRenderTargetView(pBackBuffer, nullptr, &Gui::DX11Resources::pRenderTargetView);
				pBackBuffer->Release();

				Callback::WndProc::oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtrA(Gui::DX11Resources::hwnd, GWLP_WNDPROC, reinterpret_cast<uintptr_t>(Callback::WndProc::hkWndProc)));

				Gui::initImGui();
				Gui::is_setup = true;
			}
			else 
			{
				return oPresent(pSwapChain, SyncInterval, Flags);
			}
		}
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		
		// Cheat stuff
		Cheat::Tick();
		/*ABOVE THIS CODE IS AN ISSUE WHICH CAUSES A CRASH, MOST LIKELY DUE TO THREADS MIXING UP OR SOMETHING...???*/
		if (Gui::is_active) {
			Gui::Tick();
		}
		
		ImGui::Render();
		Gui::DX11Resources::pContext->OMSetRenderTargets(1, &Gui::DX11Resources::pRenderTargetView, nullptr);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}
	else 
	{
#ifdef _DEBUG
		std::cout << "[...] hkPresent(), shutdown\n";
#endif

		Gui::destoryImGui();
		/*	
		When I dont use kiero at some point I'll change this to only unhook from hkPresent, preventing any further calls
		to this else statement. At that point its expected to have my own functions kiero impliments but they will be more modular.
		*/
		Hooks::DX11Hook::getInstance().shutdown();
		Cheat::shutdown = true;
	}
	return oPresent(pSwapChain, SyncInterval, Flags);
}