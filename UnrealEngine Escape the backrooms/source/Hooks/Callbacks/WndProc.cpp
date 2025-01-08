#include "../callbacks.h"
#include "../../gui/gui.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

LRESULT __stdcall Callback::WndProc::hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	/*The function below only works if ImGui is active and rendering, so ImGui::Begin/end*/
	// Pass the message to ImGui's handler first
	if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam)) {
		// If ImGui handled the message, return immediately
		return true;
	}


	// Handle Imgui toggle
	if (uMsg == WM_KEYUP && wParam == VK_F9)
	{
		Gui::is_active = !Gui::is_active;
		ShowCursor(Gui::is_active ? FALSE : TRUE);
		return 0; // Mark as handled
	}

	// If menu is open we stop game from getting input
	if (Gui::is_active) {
		return 0;
	}

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}