#include "gui.h"
#include <d3d11.h>
#include <dxgi.h>
#include <iostream>
#include "../config/config.h"
#include "../defines.h"


void Gui::initImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(DX11Resources::hwnd);
	ImGui_ImplDX11_Init(DX11Resources::pDevice, DX11Resources::pContext);
}

void Gui::destoryImGui()
{
#ifdef _DEBUG
	std::cout << "[...] destoryImGui()\n";
#endif
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();
}


void menuTabBar() 
{
	if (ImGui::BeginTabBar("Tabs")) 
	{
		if (ImGui::TabItemButton("Aimbot")) 
		{
			Gui::tab = 0;
		}
		if (ImGui::TabItemButton("Visuals")) 
		{
			Gui::tab = 1;
		}
		if (ImGui::TabItemButton("Exploits")) 
		{
			Gui::tab = 2;
		}
	}
	ImGui::EndTabBar();
}
void menuAimbotTab() 
{

}
void menuVisualsTab() 
{

}
void menuExploitsTab()
{
	// FOV
	ImGui::Checkbox("Fov Changer", &Config::fov_changer);
	if (Config::fov_changer)
		ImGui::SliderFloat("Fov Value", &Config::fov_value, 0.0f, 180.0f);
	else Config::fov_value = 90.0f;

}
void Gui::renderMainMenu() 
{
#ifdef _DEBUG
	std::cout << "[...] renderMainMenu()\n";
#endif
	ImGui::Begin("UnrealEngine ETB Cheat(F9 to close menu, DELETE to exit)");
	menuTabBar();
	switch (Gui::tab) 
	{
	case 0:
		menuAimbotTab();
		break;
	case 1:
		menuVisualsTab();
		break;
	case 2:
		menuExploitsTab();
		break;
	default:
		Gui::tab = 0;
		break;
	}
	ImGui::End();
}

void Gui::renderCustomCursor() 
{
	// Get the current position of the system cursor
	GetCursorPos(&Gui::cursor_pos);
	ScreenToClient(DX11Resources::hwnd, &Gui::cursor_pos);

	// Draw a small black rectangle at the cursor position
	ImVec2 rectStart = ImVec2(Gui::cursor_pos.x, Gui::cursor_pos.y);
	ImVec2 rectEnd = ImVec2(Gui::cursor_pos.x + 10, Gui::cursor_pos.y + 10);

	ImGui::GetForegroundDrawList()->AddRectFilled(rectStart, rectEnd, IM_COL32(0, 0, 0, 255)); // Black rectangle
}

