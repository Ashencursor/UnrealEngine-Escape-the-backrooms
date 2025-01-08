#include "gui.h"
#include <d3d11.h>
#include <iostream>
#include "../config/config.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// static initialization



// Hook rendering stuff
void Gui::initImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(DX11Resources::hwnd);
	ImGui_ImplDX11_Init(DX11Resources::pDevice, DX11Resources::pContext);
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
	ScreenToClient(DX11Resources::hwnd, &Gui::cursor_pos);

	// Draw a small black rectangle at the cursor position
	ImVec2 rectStart = ImVec2(Gui::cursor_pos.x, Gui::cursor_pos.y);
	ImVec2 rectEnd = ImVec2(Gui::cursor_pos.x + 10, Gui::cursor_pos.y + 10);

	ImGui::GetForegroundDrawList()->AddRectFilled(rectStart, rectEnd, IM_COL32(0, 0, 0, 255)); // Black rectangle
}