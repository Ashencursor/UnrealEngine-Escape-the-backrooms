#include "../callbacks.h"
#include <Windows.h>
#include "../../gui/gui.h"


HRESULT __stdcall Callback::Present::hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!Gui::is_setup)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&Gui::DX11Resources::pDevice)))
		{
			Gui::DX11Resources::pDevice->GetImmediateContext(&Gui::DX11Resources::pContext);

			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			Gui::DX11Resources::hwnd = sd.OutputWindow;

			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			Gui::DX11Resources::pDevice->CreateRenderTargetView(pBackBuffer, NULL, &Gui::DX11Resources::pRenderTargetView);
			pBackBuffer->Release();

			Callback::WndProc::oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(Gui::DX11Resources::hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(+[](HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)->LRESULT {
				return Callback::WndProc::hkWndProc(hWnd, uMsg, wParam, lParam);
				})));

			Gui::initImGui();
			Gui::is_setup = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (Gui::is_active) {
		Gui::RenderCustomCursor();
		Gui::RenderMenu();
	}

	ImGui::Render();

	Gui::DX11Resources::pContext->OMSetRenderTargets(1, &Gui::DX11Resources::pRenderTargetView, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}