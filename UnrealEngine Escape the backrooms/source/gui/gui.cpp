#include "gui.h"
#include <d3d11.h>
#include <iostream>
#include "../config/config.h"
#include "dx11.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// static initialization



// Hook rendering stuff
bool Gui::D3D11Hook::initialize()
{
    if (kiero::init(kiero::RenderType::D3D11) != kiero::Status::Success) {
        std::cerr << "[-] Failed to initialize Kiero!" << std::endl;
        return false;
    }

    // Hook Present and ResizeBuffers
	kiero::bind(8, reinterpret_cast<void**>(&oPresent), +[](IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags) {
		return Callback::Present::hkPresent(pSwapChain, SyncInterval, Flags);
		});				// Index 8 is Present
    kiero::bind(13, reinterpret_cast<void**>(&oResizeBuffers), +[](IDXGISwapChain* swapChain, UINT count, UINT width, UINT height, DXGI_FORMAT format, UINT flags) -> HRESULT {
		return Callback::ResizeBuffers::hkResizeBuffers(swapChain, count, width, height, format, flags);
		});				// Index 13 is ResizeBuffers

    return true;
}
void Gui::initImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(D3D11Resources::hwnd);
	ImGui_ImplDX11_Init(D3D11Resources::pDevice, D3D11Resources::pContext);
}

void Gui::D3D11Hook::shutdown() {
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	kiero::shutdown();
}

void Gui::RenderMenu()
{
	ImGui::Begin("UnrealEngine ETB Cheat(F9 to close menu, DELETE to exit)");
	

	// FOV Changer
	ImGui::Checkbox("Fov Changer", &Config::fov_changer);
	if (Config::fov_changer)
		ImGui::SliderFloat("Fov Value", &Config::fov_value, 0.0f, 180.0f);
	else Config::fov_value = 90.0f;

	ImGui::End();
}

void Gui::RenderCustomCursor() {
	// Get the current position of the system cursor
	GetCursorPos(&Gui::cursor_pos);
	ScreenToClient(D3D11Resources::hwnd, &Gui::cursor_pos);

	// Draw a small black rectangle at the cursor position
	ImVec2 rectStart = ImVec2(Gui::cursor_pos.x, Gui::cursor_pos.y);
	ImVec2 rectEnd = ImVec2(Gui::cursor_pos.x + 10, Gui::cursor_pos.y + 10);

	ImGui::GetForegroundDrawList()->AddRectFilled(rectStart, rectEnd, IM_COL32(0, 0, 0, 255)); // Black rectangle
}