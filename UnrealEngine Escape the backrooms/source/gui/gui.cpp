#include "gui.h"
#include <d3d11.h>
#include <iostream>

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// static initialization
ID3D11Device* Gui::D3D11Hook::pDevice = nullptr;
ID3D11DeviceContext* Gui::D3D11Hook::pContext = nullptr;
ID3D11RenderTargetView* Gui::D3D11Hook::pRenderTargetView = nullptr;
HWND Gui::D3D11Hook::hwnd = nullptr;


/*Error: 
unresolved external symbol "private: static __int64 (__cdecl* Gui::D3D11Hook::oWndProc)(struct HWND__ *,unsigned int,unsigned __int64,__int64)" (?oWndProc@D3D11Hook@Gui@@0P6A_JPEAUHWND__@@I_K_J@ZEA)
*/
WNDPROC Gui::D3D11Hook::oWndProc = nullptr;
Gui::Present Gui::D3D11Hook::oPresent = nullptr;
Gui::ResizeBuffers Gui::D3D11Hook::oResizeBuffers = nullptr;


HRESULT __stdcall Gui::D3D11Hook::hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!isSetup)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			hwnd = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &pRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(hwnd, GWLP_WNDPROC, (LONG_PTR)hkWndProc);
			initImGui();
			isSetup = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	ImGui::Begin("ImGui Window");
	ImGui::End();
	std::cout << "Rendering\n";
	ImGui::Render();

	pContext->OMSetRenderTargets(1, &pRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}

HRESULT __stdcall Gui::D3D11Hook::hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
    return oResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

LRESULT __stdcall Gui::D3D11Hook::hkWndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(Gui::D3D11Hook::oWndProc, hWnd, uMsg, wParam, lParam);
}

// Constructor/Destructor
Gui::D3D11Hook::D3D11Hook() {}
Gui::D3D11Hook::~D3D11Hook() { shutdown(); }

bool Gui::D3D11Hook::initialize()
{
    if (kiero::init(kiero::RenderType::D3D11) != kiero::Status::Success) {
        std::cerr << "Failed to initialize Kiero!" << std::endl;
        return false;
    }

    // Hook Present and ResizeBuffers
    kiero::bind(8, reinterpret_cast<void**>(&oPresent), hkPresent);						// Index 8 is Present
    kiero::bind(13, reinterpret_cast<void**>(&oResizeBuffers), hkResizeBuffers);        // Index 8 is Present

    return true;
}

void Gui::D3D11Hook::initImGui()
{
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(pDevice, pContext);
}

void Gui::D3D11Hook::shutdown() {
    kiero::shutdown();
}
