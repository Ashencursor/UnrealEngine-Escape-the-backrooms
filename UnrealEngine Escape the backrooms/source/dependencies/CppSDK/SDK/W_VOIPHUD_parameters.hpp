#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VOIPHUD

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function W_VOIPHUD.W_VOIPHUD_C.ExecuteUbergraph_W_VOIPHUD
// 0x000C (0x000C - 0x0000)
struct W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Activated_;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD) == 0x000004, "Wrong alignment on W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD");
static_assert(sizeof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD) == 0x00000C, "Wrong size on W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD");
static_assert(offsetof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD, EntryPoint) == 0x000000, "Member 'W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD, K2Node_CustomEvent_Activated_) == 0x000004, "Member 'W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD::K2Node_CustomEvent_Activated_' has a wrong offset!");
static_assert(offsetof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD, Temp_bool_Variable) == 0x000005, "Member 'W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD, Temp_byte_Variable) == 0x000006, "Member 'W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD, Temp_byte_Variable_1) == 0x000007, "Member 'W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD, K2Node_Select_Default) == 0x000008, "Member 'W_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD::K2Node_Select_Default' has a wrong offset!");

// Function W_VOIPHUD.W_VOIPHUD_C.SetVOIPIconVisibility
// 0x0001 (0x0001 - 0x0000)
struct W_VOIPHUD_C_SetVOIPIconVisibility final
{
public:
	bool                                          Activated_;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_VOIPHUD_C_SetVOIPIconVisibility) == 0x000001, "Wrong alignment on W_VOIPHUD_C_SetVOIPIconVisibility");
static_assert(sizeof(W_VOIPHUD_C_SetVOIPIconVisibility) == 0x000001, "Wrong size on W_VOIPHUD_C_SetVOIPIconVisibility");
static_assert(offsetof(W_VOIPHUD_C_SetVOIPIconVisibility, Activated_) == 0x000000, "Member 'W_VOIPHUD_C_SetVOIPIconVisibility::Activated_' has a wrong offset!");

}
