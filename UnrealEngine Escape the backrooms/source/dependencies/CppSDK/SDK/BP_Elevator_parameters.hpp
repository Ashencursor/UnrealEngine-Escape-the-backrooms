#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Elevator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Elevator.BP_Elevator_C.ExecuteUbergraph_BP_Elevator
// 0x0194 (0x0194 - 0x0000)
struct BP_Elevator_C_ExecuteUbergraph_BP_Elevator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x002C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorLocalOffset_SweepHitResult;    // 0x00EC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_2;                          // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Down;                           // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator) == 0x000004, "Wrong alignment on BP_Elevator_C_ExecuteUbergraph_BP_Elevator");
static_assert(sizeof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator) == 0x000194, "Wrong size on BP_Elevator_C_ExecuteUbergraph_BP_Elevator");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, EntryPoint) == 0x000000, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X) == 0x000010, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y) == 0x000014, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z) == 0x000018, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Lerp_ReturnValue) == 0x00001C, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_MakeVector_ReturnValue) == 0x000020, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x00002C, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000B4, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, K2Node_Event_DeltaSeconds) == 0x0000B8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000BC, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_SelectFloat_ReturnValue) == 0x0000C0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000C4, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000C8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_MakeVector_ReturnValue_1) == 0x0000D4, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_1) == 0x0000E0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_1) == 0x0000E4, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_1) == 0x0000E8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_AddActorLocalOffset_SweepHitResult) == 0x0000EC, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_AddActorLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000174, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000180, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_2) == 0x000184, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_2) == 0x000188, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_2) == 0x00018C, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Less_FloatFloat_ReturnValue) == 0x000190, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, K2Node_CustomEvent_Down) == 0x000191, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::K2Node_CustomEvent_Down' has a wrong offset!");

// Function BP_Elevator.BP_Elevator_C.MoveElevator
// 0x0001 (0x0001 - 0x0000)
struct BP_Elevator_C_MoveElevator final
{
public:
	bool                                          Down;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Elevator_C_MoveElevator) == 0x000001, "Wrong alignment on BP_Elevator_C_MoveElevator");
static_assert(sizeof(BP_Elevator_C_MoveElevator) == 0x000001, "Wrong size on BP_Elevator_C_MoveElevator");
static_assert(offsetof(BP_Elevator_C_MoveElevator, Down) == 0x000000, "Member 'BP_Elevator_C_MoveElevator::Down' has a wrong offset!");

// Function BP_Elevator.BP_Elevator_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Elevator_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Elevator_C_ReceiveTick");
static_assert(sizeof(BP_Elevator_C_ReceiveTick) == 0x000004, "Wrong size on BP_Elevator_C_ReceiveTick");
static_assert(offsetof(BP_Elevator_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Elevator_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

