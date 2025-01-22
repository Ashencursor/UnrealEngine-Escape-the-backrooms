#pragma once
#include <Windows.h>
#include <unordered_map>
#include <string>

// namespace is just sorta setting up a structure of hooks I might define in the future. 
namespace Hooks
{
	// Functions to register, enable, disable, remove, and shutdown hooks.
	void initMinhook();
	bool hook(void* target, void* detour, void** original);
	bool enable(void* target);
	bool disable(void* target);
}