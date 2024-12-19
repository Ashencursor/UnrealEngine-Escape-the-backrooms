#pragma once
#include "Windows.h"
#include "../dependencies/imgui/imgui_impl_dx11.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include "../dependencies/kiero/kiero.h"
#include <d3d11.h>



namespace Gui
{
	typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
	typedef HRESULT(__stdcall* ResizeBuffers)(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
	inline bool isSetup = false;

	class D3D11Hook {
	private:
		// Hooked stuff
		HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
		HRESULT __stdcall hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
		LRESULT __stdcall hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

		// For D3D11
		HWND hwnd;
		ID3D11Device* pDevice;
		ID3D11DeviceContext* pContext;
		ID3D11RenderTargetView* pRenderTargetView;

		// Storing addresses of original functions
		WNDPROC oWndProc;
		Present oPresent;
		ResizeBuffers oResizeBuffers; // Original ResizeBuffers function pointer
	
		// ImGui
		void initImGui();

		// Special members, private to prevent instantiation 
		D3D11Hook();
		~D3D11Hook();

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

