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

	class D3D11Hook {
	private:
		// Hooked stuff
		
		// For D3D11

		// Storing addresses of original functions
		WNDPROC										oWndProc;
		Callback::Present::Present_t				oPresent;
		Callback::ResizeBuffers::ResizeBuffers_t	oResizeBuffers; // Original ResizeBuffers function pointer
	
		// ImGui
		

		// Special members, private to prevent instantiation 
		D3D11Hook() = default;
		~D3D11Hook() { shutdown(); }

		// Delete so nobody can create another instance of the class
		D3D11Hook(const D3D11Hook&) = delete;
		D3D11Hook& operator=(const D3D11Hook&) = delete;
		
		// For this class, users to hook
	public:
		static D3D11Hook& getInstance() {
			static D3D11Hook instance;
			return instance;
		}
		bool initialize();
		void shutdown();
	};
}
