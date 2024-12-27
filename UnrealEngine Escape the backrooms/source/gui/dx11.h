#pragma once
#include <d3d11.h>
#include <Windows.h>


// Will get d3d11 information which will be used by gui.h and d3d11hook
namespace D3D11Resources
{
	inline HWND hwnd;
	inline ID3D11Device* pDevice;
	inline ID3D11DeviceContext* pContext;
	inline ID3D11RenderTargetView* pRenderTargetView;

	inline void** swapChainVFT = nullptr;
}