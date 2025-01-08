#include <Windows.h>
#include <iostream>
#include "dependencies/kiero/kiero.h"
#include "gui/gui.h"
#include "dependencies/CppSDK/SDK/Engine_classes.hpp"
#include "config/config.h"
#include "Hooks/dx11Hook.h"
#include "globals.h"

// Basic.cpp was added to the VS project
// Engine_functions.cpp was added to the VS project
void createConsole() 
{
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);
}
void MainThread()
{
    createConsole();

    // Setup Hooks
    Hooks::DX11Hook& DirectXHook = Hooks::DX11Hook::getInstance();
    DirectXHook.initialize();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    DisableThreadLibraryCalls(Globals::g_hModule);

    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, nullptr, 0, nullptr);
        break;
    }
    return TRUE;
}