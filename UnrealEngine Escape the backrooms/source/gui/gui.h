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
	static bool isSetup = false;

	class D3D11Hook {
	private:
		// Hooked stuff
		static HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
		static HRESULT __stdcall hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
		static LRESULT __stdcall hkWndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


		// For D3D11
		static HWND hwnd;
		static ID3D11Device* pDevice;
		static ID3D11DeviceContext* pContext;
		static ID3D11RenderTargetView* pRenderTargetView;

		// Storing addresses of original functions
		static WNDPROC oWndProc;
		static Present oPresent;
		static ResizeBuffers oResizeBuffers; // Original ResizeBuffers function pointer

		// Special members 
		D3D11Hook();
		~D3D11Hook();

		// ImGui
		static void initImGui();
	public:
		static bool initialize();
		static void shutdown();
	};
}