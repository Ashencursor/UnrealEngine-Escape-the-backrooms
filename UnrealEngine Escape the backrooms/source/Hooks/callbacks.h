#pragma once
#include <Windows.h>
#include <d3d11.h>


// Namespace to hold functions to hook. Setup:
// - inline vars to hold the adr of the original function
// - functions that will be called in place of the original function

// This helps orginize the code, putting the hooks and callbacks in one area, while other important information like a D3D11 hook, which preforms the process of hooking present and
// resizebuffers, will be independent asnd orginized. 

namespace Callback
{
	namespace Present {
		typedef HRESULT(__stdcall* Present_t)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
		
		inline bool uninject = false;
		inline Present_t oPresent = nullptr;
		HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
	}
	namespace ResizeBuffers {
		typedef HRESULT(__stdcall* ResizeBuffers_t)(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);

		inline ResizeBuffers_t oResizeBuffers = nullptr;
		HRESULT __stdcall hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
	}
	namespace WndProc {
		inline WNDPROC oWndProc = nullptr;
		LRESULT __stdcall hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	}
}