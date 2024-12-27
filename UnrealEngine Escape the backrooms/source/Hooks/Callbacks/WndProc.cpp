#include "../callbacks.h"
#include "../../gui/gui.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

LRESULT __stdcall Callback::WndProc::hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
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