#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Moth

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_Moth.AnimBP_Moth_C
// 0x02A0 (0x0560 - 0x02C0)
class UAnimBP_Moth_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0320(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0348(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x03C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x03F8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0478(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x04A8(0x00B0)()
	bool                                          IsIdle;                                            // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AnimBP_Moth(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_Moth_C">();
	}
	static class UAnimBP_Moth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_Moth_C>();
	}
};
static_assert(alignof(UAnimBP_Moth_C) == 0x000010, "Wrong alignment on UAnimBP_Moth_C");
static_assert(sizeof(UAnimBP_Moth_C) == 0x000560, "Wrong size on UAnimBP_Moth_C");
static_assert(offsetof(UAnimBP_Moth_C, UberGraphFrame) == 0x0002C0, "Member 'UAnimBP_Moth_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UAnimBP_Moth_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_TransitionResult_1) == 0x0002F8, "Member 'UAnimBP_Moth_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_TransitionResult) == 0x000320, "Member 'UAnimBP_Moth_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_SequencePlayer_1) == 0x000348, "Member 'UAnimBP_Moth_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_StateResult_1) == 0x0003C8, "Member 'UAnimBP_Moth_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_SequencePlayer) == 0x0003F8, "Member 'UAnimBP_Moth_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_StateResult) == 0x000478, "Member 'UAnimBP_Moth_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, AnimGraphNode_StateMachine) == 0x0004A8, "Member 'UAnimBP_Moth_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAnimBP_Moth_C, IsIdle) == 0x000558, "Member 'UAnimBP_Moth_C::IsIdle' has a wrong offset!");

}

