#include "gui/gui.h"
#include "globals.h"
#include <cstdio>
#include <iostream>


void dllunload()
{
	Gui::shutdown = true;

	while (Gui::shutdown)
	{
		Sleep(10);
	}


	std::cout << "[...] Execution at dllunload()\n";
	Sleep(1000);

	//!!!!!!!!!!!!!!! LOOK INTO WHY THE CODE BELOW STOPED ERRORS WHEN CLOSING THE GAME AND PRESSING DELETE TO UNINJECT
	fclose(stdout);
	fclose(stdin);
	FreeConsole();
	FreeLibraryAndExitThread(Globals::g_hModule, 0);
}