#pragma once
#include <wtypes.h>
#include <Windows.h>

namespace Globals
{
	inline HMODULE g_hModule = nullptr;
	inline bool is_cleanup_done = false;
	inline HANDLE hThread = nullptr;
}