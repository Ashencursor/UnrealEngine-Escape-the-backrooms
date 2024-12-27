#include "../callbacks.h"
#include <Windows.h>
#include "../../gui/dx11.h"
#include "../../gui/gui.h"


HRESULT __stdcall Callback::Present::hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!Gui::is_setup)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&D3D11Resources::pDevice)))
		{
			D3D11Resources::pDevice->GetImmediateContext(&D3D11Resources::pContext);

			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			D3D11Resources::hwnd = sd.OutputWindow;

			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			D3D11Resources::pDevice->CreateRenderTargetView(pBackBuffer, NULL, &D3D11Resources::pRenderTargetView);
			pBackBuffer->Release();

			Callback::WndProc::oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(D3D11Resources::hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(+[](HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)->LRESULT {
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

	D3D11Resources::pContext->OMSetRenderTargets(1, &D3D11Resources::pRenderTargetView, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}