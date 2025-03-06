#include "gui.h"
#include <d3d11.h>
#include <dxgi.h>
#include <iostream>
#include "../config/config.h"
#include "../defines.h"
#include "../dependencies/CppSDK/SDK/Engine_parameters.hpp"
#include "../cheats/game/game.h"


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
		if (ImGui::TabItemButton("Windows"))
		{
			Gui::tab = 3;
		}
	}
	ImGui::EndTabBar();
}
void menuAimbotTab() 
{

}
void menuVisualsTab() 
{
	ImGui::Checkbox("ESP", &Config::ESP);
	if (Config::ESP)
	{
		ImGui::Checkbox("Box ESP(3d)", &Config::box3DESP);
		// Call functions or something that will draw boxes onto the ABC_DroppedItems
		if (Config::box3DESP)
		{

		}

	}
}
// FIC AND ORGINIZE THIS SHIT
void menuExploitsTab()
{
	SDK::APlayerController* PC = Game::getPC();
	auto* MovementComponent = PC->Character->CharacterMovement;
	// FOV
	ImGui::Checkbox("Fov Changer", &Config::fov_changer);
	if (Config::fov_changer) {
		ImGui::SliderFloat("Fov Value", &Config::fov_value, 0.0f, 180.0f);
		PC->FOV(Config::fov_value);
	}
	else Config::fov_value = 90.0f;

	// SpeedHack
	ImGui::Checkbox("Speed Hack(walking only)", &Config::speed_hack);
	if (Config::speed_hack)
	{
		ImGui::SliderFloat("Walk Speed Value", &Config::walk_speed, 0.0f, 10000.0f);
		if (MovementComponent)
		{
			MovementComponent->MaxWalkSpeedCrouched = Config::walk_speed;
			MovementComponent->MaxAcceleration = Config::walk_speed;
			MovementComponent->MaxWalkSpeed = Config::walk_speed;
		}
	}

	// Lags shit out
	// FLYING
	/*ImGui::Checkbox("Fly Hack", &Config::fly);
	if (Config::fly)
	{
		ImGui::SliderFloat("Fly Speed Value", &Config::fly_speed, 0.0f, 10000.0f);
		if (MovementComponent)
		{
			MovementComponent->MaxFlySpeed = Config::fly_speed;
			MovementComponent->SetMovementMode(SDK::EMovementMode::MOVE_Flying, 0);
		}
	}
	else
	{
		//MovementComponent->SetMovementMode(SDK::EMovementMode::MOVE_Walking, 0);
	}
	//Gravity
	ImGui::Checkbox("Gravity Scale", &Config::gravity);
	if (Config::gravity)
	{
		ImGui::SliderFloat("Gravity Scale Value(.17 recommended)", &Config::gravity_pull, 0.0f, 1.0f);
		if (MovementComponent)
		{
			MovementComponent->GravityScale = Config::gravity_pull;
		}
	}
	else
	{
		Config::gravity_pull = 1.0f;
	}
	*/
}
void menuWindowsTab()
{
	ImGui::Checkbox("All Items Window", &Config::items_window);
	ImGui::Checkbox("Dropped Items Window", &Config::dropped_items_window);
}

void Gui::renderMainMenu() 
{
#ifdef _DEBUG
	std::cout << "[...] renderMainMenu()\n";
#endif
	ImGui::Begin("UnrealEngine ETB Cheat(F9 to close menu, DELETE to exit)");
	renderCustomCursor();
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
	case 3:
		menuWindowsTab();
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

	ImGui::GetForegroundDrawList()->AddRectFilled(rectStart, rectEnd, IM_COL32_WHITE); // Black rectangle
}


// Forward declare functions for Tick() use
void allDroppedItems();
void droppedItems();

void Gui::Tick()
{
	renderMainMenu();

	// Update player info and make sure its all valid. 
	if (Config::items_window)
	{
		allDroppedItems();
	}
	if (Config::dropped_items_window)
	{
		droppedItems();
	}
}