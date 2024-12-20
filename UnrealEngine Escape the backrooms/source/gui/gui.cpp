#include "gui.h"
#include <d3d11.h>
#include <iostream>
#include "config.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// static initialization






HRESULT __stdcall Gui::D3D11Hook::hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!Gui::is_setup)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);

			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			hwnd = sd.OutputWindow;

			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &pRenderTargetView);
			pBackBuffer->Release();

			oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(+[](HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)->LRESULT {
				return D3D11Hook::getInstance().hkWndProc(hWnd, uMsg, wParam, lParam);
			})));

			initImGui();
			Gui::is_setup = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (Gui::is_active) {
		RenderCustomCursor();
		RenderMenu();
	}

	ImGui::Render();

	pContext->OMSetRenderTargets(1, &pRenderTargetView, nullptr);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}


HRESULT __stdcall Gui::D3D11Hook::hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
    return oResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

LRESULT __stdcall Gui::D3D11Hook::hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (Gui::is_active) {
		if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
			return true;
		// Can stop the in game mouse from moving
		if (uMsg == WM_MOUSEMOVE || uMsg == WM_LBUTTONDOWN || uMsg == WM_RBUTTONDOWN) {
			// Let ImGui handle the mouse input instead of the game
			return 0; // Return 0 to stop the game from handling the input
		}
	}

	switch (uMsg)
	{
	case WM_KEYUP:
		if (wParam == VK_F9)
		{
			// Handle F9 key release
			Gui::is_active = !Gui::is_active;
			ShowCursor(Gui::is_active ? FALSE : TRUE);
		}
		break;
	}
	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

// Hook rendering stuff
bool Gui::D3D11Hook::initialize()
{
    if (kiero::init(kiero::RenderType::D3D11) != kiero::Status::Success) {
        std::cerr << "[-] Failed to initialize Kiero!" << std::endl;
        return false;
    }

    // Hook Present and ResizeBuffers
	kiero::bind(8, reinterpret_cast<void**>(&oPresent), +[](IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags) {
		return getInstance().hkPresent(pSwapChain, SyncInterval, Flags);
		});				// Index 8 is Present
    kiero::bind(13, reinterpret_cast<void**>(&oResizeBuffers), +[](IDXGISwapChain* swapChain, UINT count, UINT width, UINT height, DXGI_FORMAT format, UINT flags) -> HRESULT {
		return D3D11Hook::getInstance().hkResizeBuffers(swapChain, count, width, height, format, flags);
		});				// Index 13 is ResizeBuffers

    return true;
}

void Gui::D3D11Hook::initImGui()
{
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(pDevice, pContext);
}

void Gui::D3D11Hook::shutdown() {
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

    kiero::shutdown();
}

void Gui::D3D11Hook::RenderMenu()
{
	ImGui::Begin("UnrealEngine ETB Cheat(F9 to close menu, DELETE to exit)");
	

	// FOV Changer
	ImGui::Checkbox("Fov Changer", &Config::fov_changer);
	if (Config::fov_changer)
		ImGui::SliderFloat("Fov Value", &Config::fov_value, 0.0f, 180.0f);
	else Config::fov_value = 90.0f;

	ImGui::End();
}

void Gui::D3D11Hook::RenderCustomCursor() {
	// Get the current position of the system cursor
	GetCursorPos(&Gui::cursor_pos);
	ScreenToClient(hwnd, &Gui::cursor_pos);

	// Draw a small black rectangle at the cursor position
	ImVec2 rectStart = ImVec2(Gui::cursor_pos.x, Gui::cursor_pos.y);
	ImVec2 rectEnd = ImVec2(Gui::cursor_pos.x + 10, Gui::cursor_pos.y + 10);

	ImGui::GetForegroundDrawList()->AddRectFilled(rectStart, rectEnd, IM_COL32(0, 0, 0, 255)); // Black rectangle
}