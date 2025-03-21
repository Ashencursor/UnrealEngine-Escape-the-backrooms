#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Smiler

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_Smiler.AnimBP_Smiler_C.ExecuteUbergraph_AnimBP_Smiler
// 0x0030 (0x0030 - 0x0000)
struct AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler) == 0x000008, "Wrong alignment on AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler");
static_assert(sizeof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler) == 0x000030, "Wrong size on AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler");
static_assert(offsetof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler, EntryPoint) == 0x000000, "Member 'AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler::EntryPoint' has a wrong offset!");
static_assert(offsetof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler, CallFunc_GetVelocity_ReturnValue) == 0x000010, "Member 'AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler, CallFunc_VSize_ReturnValue) == 0x000020, "Member 'AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000024, "Member 'AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler, K2Node_Event_DeltaTimeX) == 0x000028, "Member 'AnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler::K2Node_Event_DeltaTimeX' has a wrong offset!");

// Function AnimBP_Smiler.AnimBP_Smiler_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AnimBP_Smiler_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_Smiler_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AnimBP_Smiler_C_BlueprintUpdateAnimation");
static_assert(sizeof(AnimBP_Smiler_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AnimBP_Smiler_C_BlueprintUpdateAnimation");
static_assert(offsetof(AnimBP_Smiler_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AnimBP_Smiler_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AnimBP_Smiler.AnimBP_Smiler_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_Smiler_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_Smiler_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_Smiler_C_AnimGraph");
static_assert(sizeof(AnimBP_Smiler_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_Smiler_C_AnimGraph");
static_assert(offsetof(AnimBP_Smiler_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AnimBP_Smiler_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

