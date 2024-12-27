#include <Windows.h>
#include <iostream>
#include "dependencies/kiero/kiero.h"
#include "gui/gui.h"
#include "dependencies/CppSDK/SDK/Engine_classes.hpp"
#include "config/config.h"

// Basic.cpp was added to the VS project
// Engine_functions.cpp was added to the VS project
void createConsole() {
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);
}
DWORD MainThread(HMODULE Module)
{
    createConsole();

    // Setup Hooks
    Gui::D3D11Hook& DirectXHook = Gui::D3D11Hook::getInstance();
    DirectXHook.initialize();

    // UE info
    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld(); 
    /* Getting the PlayerController, World, OwningGameInstance, ... should all be checked not to be nullptr! */
    SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

    do
    {
        if (GetAsyncKeyState(VK_DELETE) & 1) {
            break;
        }

        // Main functionality below
        MyController->FOV(Config::fov_value);
    } while (true);

    // Make sure program is fully shutdown before returning
    bool finished = false;
    do {
        Gui::D3D11Hook::getInstance().shutdown();
    } while (!finished);

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, nullptr);
        break;
    }

    return TRUE;
}