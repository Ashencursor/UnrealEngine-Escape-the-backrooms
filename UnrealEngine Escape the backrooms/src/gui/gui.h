#pragma once
#include "Windows.h"
#include "../dependencies/imgui/imgui_impl_dx11.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include "../dependencies/kiero/kiero.h"
#include <d3d11.h>
#include "../Hooks/callbacks.h"



namespace Gui
{
	namespace DX11Resources
	{
		inline HWND hwnd;
		inline ID3D11Device* pDevice;
		inline ID3D11DeviceContext* pContext;
		inline ID3D11RenderTargetView* pRenderTargetView;

		inline void** swapChainVFT = nullptr;
	}
	inline bool shutdown = false;
	inline bool is_setup = false;
	inline bool is_active = false;
	inline int tab = 0;
	inline POINT cursor_pos{};

	void initImGui();
	void destoryImGui();
	void renderMainMenu();
	void renderCustomCursor();
}
