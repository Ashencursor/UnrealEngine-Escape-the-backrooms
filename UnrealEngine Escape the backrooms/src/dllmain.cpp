#include <Windows.h>
#include <iostream>
#include "dependencies/kiero/kiero.h"
#include "gui/gui.h"
#include "dependencies/CppSDK/SDK/Engine_classes.hpp"
#include "config/config.h"
#include "Hooks/dx11Hook.h"
#include "globals.h"
#include "cheats/Cheat.h"

void createConsole() 
{
    AllocConsole();
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
}
void MainThread()
{
    createConsole();

    // Setup Hooks
    Hooks::DX11Hook& DirectXHook = Hooks::DX11Hook::getInstance();
    DirectXHook.initialize();

    // Main loop
    while (!Gui::shutdown) {
        Sleep(10);
    }
    Sleep(1000);// Let hkPresent finish up before terminating this all.

    fclose(stdout);
    fclose(stdin);
    FreeConsole();
    FreeLibraryAndExitThread(Globals::g_hModule, 0);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    DisableThreadLibraryCalls(Globals::g_hModule);

    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, nullptr, 0, nullptr);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}