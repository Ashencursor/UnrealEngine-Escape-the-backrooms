#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GarageDoor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_GarageDoor.BP_GarageDoor_C.ExecuteUbergraph_BP_GarageDoor
// 0x00A8 (0x00A8 - 0x0000)
struct BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0014(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_Event_Character;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor) == 0x000008, "Wrong alignment on BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor");
static_assert(sizeof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor) == 0x0000A8, "Wrong size on BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor");
static_assert(offsetof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor, EntryPoint) == 0x000000, "Member 'BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor, Temp_bool_Variable) == 0x000010, "Member 'BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000014, "Member 'BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor, K2Node_Event_Character) == 0x0000A0, "Member 'BP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor::K2Node_Event_Character' has a wrong offset!");

// Function BP_GarageDoor.BP_GarageDoor_C.OnActorUsed
// 0x0008 (0x0008 - 0x0000)
struct BP_GarageDoor_C_OnActorUsed final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GarageDoor_C_OnActorUsed) == 0x000008, "Wrong alignment on BP_GarageDoor_C_OnActorUsed");
static_assert(sizeof(BP_GarageDoor_C_OnActorUsed) == 0x000008, "Wrong size on BP_GarageDoor_C_OnActorUsed");
static_assert(offsetof(BP_GarageDoor_C_OnActorUsed, Character) == 0x000000, "Member 'BP_GarageDoor_C_OnActorUsed::Character' has a wrong offset!");

}
