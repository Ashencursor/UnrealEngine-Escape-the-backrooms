#pragma once
#include "Windows.h"
#include "../dependencies/imgui/imgui_impl_dx11.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include "../dependencies/kiero/kiero.h"
#include <d3d11.h>
#include "../Hooks/callbacks.h"



namespace Gui
{
	inline bool is_setup = false;
	inline bool is_active = false;
	inline POINT cursor_pos{};

	void initImGui();
	void RenderMenu();
	void RenderCustomCursor();
}
