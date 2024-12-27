#include "../callbacks.h"


HRESULT __stdcall Callback::ResizeBuffers::hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
    return oResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}