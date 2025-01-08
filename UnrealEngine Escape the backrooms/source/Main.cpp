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

    // UE info
    /* Functions returning "static" instances */
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld(); 
    /* Getting the PlayerController, World, OwningGameInstance, ... should all be checked not to be nullptr! */
    SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

    do
    {
        // Main functionality below

    } while (!Globals::g_uninject);// While uninject is false run the main loop(although I dont nececarly have to bc hooking functions does the job itself
    
    //!!!!!!!!!!!!!!! LOOK INTO WHY THE CODE BELOW STOPED ERRORS WHEN CLOSING THE GAME AND PRESSING DELETE TO UNINJECT
    fclose(stdout);
    fclose(stdin);
    fclose(stderr);
    FreeConsole();
    FreeLibraryAndExitThread(Globals::g_hModule, 0);
    // Make sure program is fully shutdown before returning
    std::cout << "uninjected\n";
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, nullptr, 0, nullptr);
        break;
    }
    
    return TRUE;
}