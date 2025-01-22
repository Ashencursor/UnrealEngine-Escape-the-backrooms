#pragma once
#include <Windows.h>
#include <d3d11.h>
#include "../dependencies/kiero/kiero.h"

namespace Hooks
{
	class DX11Hook {
	private:
		// Special members, private to prevent instantiation 
		DX11Hook() = default;
		//~DX11Hook() { shutdown(); }

		// Delete so nobody can create another instance of the class
		DX11Hook(const DX11Hook&) = delete;
		DX11Hook& operator=(const DX11Hook&) = delete;

		// For this class, users to hook
	public:
		static DX11Hook& getInstance() {
			static DX11Hook instance;
			return instance;
		}
		bool initialize();
		void shutdown();
	};
}