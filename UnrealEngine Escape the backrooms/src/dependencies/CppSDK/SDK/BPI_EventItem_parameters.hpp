#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EventItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_EventItem.BPI_EventItem_C.ToggleEvent
// 0x0001 (0x0001 - 0x0000)
struct BPI_EventItem_C_ToggleEvent final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_EventItem_C_ToggleEvent) == 0x000001, "Wrong alignment on BPI_EventItem_C_ToggleEvent");
static_assert(sizeof(BPI_EventItem_C_ToggleEvent) == 0x000001, "Wrong size on BPI_EventItem_C_ToggleEvent");
static_assert(offsetof(BPI_EventItem_C_ToggleEvent, Enable) == 0x000000, "Member 'BPI_EventItem_C_ToggleEvent::Enable' has a wrong offset!");

}

