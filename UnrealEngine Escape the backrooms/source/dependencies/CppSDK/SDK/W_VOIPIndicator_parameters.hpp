#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VOIPIndicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_VOIPIndicator.W_VOIPIndicator_C.ExecuteUbergraph_W_VOIPIndicator
// 0x0030 (0x0030 - 0x0000)
struct W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestSteamFriendInfo_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSteamPersonaName_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator) == 0x000008, "Wrong alignment on W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator");
static_assert(sizeof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator) == 0x000030, "Wrong size on W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, EntryPoint) == 0x000000, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_RequestSteamFriendInfo_ReturnValue) == 0x000004, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_RequestSteamFriendInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_GetSteamPersonaName_ReturnValue) == 0x000008, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_GetSteamPersonaName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'W_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
