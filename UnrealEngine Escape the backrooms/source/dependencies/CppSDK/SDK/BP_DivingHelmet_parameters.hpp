#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DivingHelmet

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_DivingHelmet.BP_DivingHelmet_C.ExecuteUbergraph_BP_DivingHelmet
// 0x0020 (0x0020 - 0x0000)
struct BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Player;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet) == 0x000008, "Wrong alignment on BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet");
static_assert(sizeof(BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet) == 0x000020, "Wrong size on BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet");
static_assert(offsetof(BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet, EntryPoint) == 0x000000, "Member 'BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet, K2Node_CustomEvent_Player) == 0x000008, "Member 'BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'BP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_DivingHelmet.BP_DivingHelmet_C.UpdateLight
// 0x0008 (0x0008 - 0x0000)
struct BP_DivingHelmet_C_UpdateLight final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DivingHelmet_C_UpdateLight) == 0x000008, "Wrong alignment on BP_DivingHelmet_C_UpdateLight");
static_assert(sizeof(BP_DivingHelmet_C_UpdateLight) == 0x000008, "Wrong size on BP_DivingHelmet_C_UpdateLight");
static_assert(offsetof(BP_DivingHelmet_C_UpdateLight, Player) == 0x000000, "Member 'BP_DivingHelmet_C_UpdateLight::Player' has a wrong offset!");

}
