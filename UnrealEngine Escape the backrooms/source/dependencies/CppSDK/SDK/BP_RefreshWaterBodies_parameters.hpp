#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RefreshWaterBodies

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_RefreshWaterBodies.BP_RefreshWaterBodies_C.ExecuteUbergraph_BP_RefreshWaterBodies
// 0x0028 (0x0028 - 0x0000)
struct BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FluidSim_01_C*                      CallFunc_GetActorOfClass_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPCharacter_Demo_C*                    K2Node_DynamicCast_AsBPCharacter_Demo;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies) == 0x000008, "Wrong alignment on BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies");
static_assert(sizeof(BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies) == 0x000028, "Wrong size on BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies");
static_assert(offsetof(BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies, EntryPoint) == 0x000000, "Member 'BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies, K2Node_Event_OtherActor) == 0x000008, "Member 'BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies, CallFunc_GetActorOfClass_ReturnValue) == 0x000010, "Member 'BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies, K2Node_DynamicCast_AsBPCharacter_Demo) == 0x000018, "Member 'BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies::K2Node_DynamicCast_AsBPCharacter_Demo' has a wrong offset!");
static_assert(offsetof(BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_RefreshWaterBodies.BP_RefreshWaterBodies_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}
