#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Card_UI

#include "Basic.hpp"


namespace SDK::Params
{

// Function Card_UI.Card_UI_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct Card_UI_C_SetName final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Card_UI_C_SetName) == 0x000008, "Wrong alignment on Card_UI_C_SetName");
static_assert(sizeof(Card_UI_C_SetName) == 0x000018, "Wrong size on Card_UI_C_SetName");
static_assert(offsetof(Card_UI_C_SetName, Name_0) == 0x000000, "Member 'Card_UI_C_SetName::Name_0' has a wrong offset!");

}

