#pragma once
#include <Windows.h>
#include <unordered_map>
#include <string>

// namespace is just sorta setting up a structure of hooks I might define in the future. 
namespace Hooks
{
	// experimental class, most info of hooks held in callbacks
	class HookManager
	{
	private:
		// Stuff to prevent outside class initialization
		HookManager() = default;
		HookManager(const HookManager&) = delete;
		HookManager& operator=(const HookManager&) = delete;
		// map to hold hooks info
		//					func_name	func_addr
		std::unordered_map<std::string, uintptr_t> hooks;
	public:
		static HookManager& getInstance() {
			static HookManager instance;
			return instance;
		}
	};

	// Functions to register, enable, disable, remove, and shutdown hooks.
	void initMinhook();
	bool hook(void* target, void* detour, void** original);
	bool enable(void* target);
	bool disable(void* target);
}