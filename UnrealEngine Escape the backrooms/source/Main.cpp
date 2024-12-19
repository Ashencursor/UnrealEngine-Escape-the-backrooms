#include <Windows.h>
#include <iostream>
#include "dependencies/kiero/kiero.h"
#include "gui/gui.h"

//#include "dependencies/CppSDK/SDK/Engine_classes.hpp"

// Basic.cpp was added to the VS project
// Engine_functions.cpp was added to the VS project

DWORD MainThread(HMODULE Module)
{
    /* Code to open a console window */
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);

    // Setup Hooks
    Gui::D3D11Hook& DirectXHook = Gui::D3D11Hook::getInstance();
    DirectXHook.initialize();

    do
    {
        if (GetAsyncKeyState(VK_INSERT) & 1) {
            break;
        }
    } while (true);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
        break;
    case DLL_PROCESS_DETACH:
        kiero::shutdown();
        break;
    }

    return TRUE;
}