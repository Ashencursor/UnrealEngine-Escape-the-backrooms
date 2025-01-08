#include "../callbacks.h"
#include "../../gui/gui.h"
#include "../../globals.h"
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

LRESULT __stdcall Callback::WndProc::hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (Gui::is_setup) 
	{
		/*The function below only works if ImGui is active and rendering, so ImGui::Begin/end*/
		// Pass the message to ImGui's handler first
		ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);




		// Handle Imgui toggle
		if (uMsg == WM_KEYUP && wParam == VK_F9)
		{
			Gui::is_active = !Gui::is_active;
			ShowCursor(Gui::is_active ? FALSE : TRUE);
			return 0; // Mark as handled
		}
		if (uMsg == WM_KEYUP && wParam == VK_DELETE)
		{
			Globals::g_uninject = !Globals::g_uninject;
		}
		// If menu is open we stop game from getting input
		if (Gui::is_active) 
		{
			return true;
		}
	}
	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}