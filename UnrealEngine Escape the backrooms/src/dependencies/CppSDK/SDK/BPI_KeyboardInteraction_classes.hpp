#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_KeyboardInteraction

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_KeyboardInteraction.BPI_KeyboardInteraction_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_KeyboardInteraction_C final : public IInterface
{
public:
	void CapsLock();
	void SendKeyboardText();
	void Shift();
	void Space();
	void SymbolLock();
	void SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_KeyboardInteraction_C">();
	}
	static class IBPI_KeyboardInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_KeyboardInteraction_C>();
	}
};
static_assert(alignof(IBPI_KeyboardInteraction_C) == 0x000008, "Wrong alignment on IBPI_KeyboardInteraction_C");
static_assert(sizeof(IBPI_KeyboardInteraction_C) == 0x000028, "Wrong size on IBPI_KeyboardInteraction_C");

}
