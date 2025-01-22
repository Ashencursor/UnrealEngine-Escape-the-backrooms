#include "hooks.h"
#include "../dependencies/minhook/include/MinHook.h"
#include <iostream>

void Hooks::initMinhook()
{
	MH_Initialize();
}

bool Hooks::hook(void* target, void* detour, void** original)
{
	if (MH_CreateHook(target, detour, original) != MH_OK ) {
		std::cout << "Failed to create hook\n";
		return false;
	}
	return true;
}

bool Hooks::enable(void* target)
{
	if (MH_EnableHook(target) != MH_OK) {
		std::cout << "Failed to enable hook\n";
		return false;
	}
	return true;
}

bool Hooks::disable(void* target)
{
	if (MH_DisableHook(target) != MH_OK) {
		std::cout << "Failed to disable hook\n";
		return false;
	}
	return true;
}

