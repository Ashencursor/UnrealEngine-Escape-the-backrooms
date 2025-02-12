#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_Teleport

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BTTask_Teleport.BTTask_Teleport_C.ExecuteUbergraph_BTTask_Teleport
// 0x00B0 (0x00B0 - 0x0000)
struct BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0024(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport) == 0x000008, "Wrong alignment on BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport");
static_assert(sizeof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport) == 0x0000B0, "Wrong size on BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport");
static_assert(offsetof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport, EntryPoint) == 0x000000, "Member 'BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport, K2Node_Event_OwnerController) == 0x000008, "Member 'BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000018, "Member 'BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000024, "Member 'BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000AC, "Member 'BTTask_Teleport_C_ExecuteUbergraph_BTTask_Teleport::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BTTask_Teleport.BTTask_Teleport_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_Teleport_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Teleport_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_Teleport_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_Teleport_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_Teleport_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_Teleport_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_Teleport_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_Teleport_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_Teleport_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

