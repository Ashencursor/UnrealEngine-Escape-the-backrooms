#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_Arms_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Player_Arms_AnimBP.Player_Arms_AnimBP_C
// 0x0480 (0x0740 - 0x02C0)
class UPlayer_Arms_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02F8(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0340(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0408(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0430(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x04B0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x04E0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0560(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0590(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05C0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0640(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0670(0x00B0)()
	class UAnimSequence*                          Idle;                                              // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClimbing;                                        // 0x0728(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSwimming;                                        // 0x0729(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72A[0x2];                                      // 0x072A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Speed;                                             // 0x072C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasHelmet;                                         // 0x0730(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Player_Arms_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Arms_AnimBP_AnimGraphNode_TransitionResult_8699A91E48B3736D2128929695722D82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Arms_AnimBP_AnimGraphNode_TransitionResult_16E3ABE84F7D62D8D7FB399653E20E36();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Player_Arms_AnimBP_C">();
	}
	static class UPlayer_Arms_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayer_Arms_AnimBP_C>();
	}
};
static_assert(alignof(UPlayer_Arms_AnimBP_C) == 0x000010, "Wrong alignment on UPlayer_Arms_AnimBP_C");
static_assert(sizeof(UPlayer_Arms_AnimBP_C) == 0x000740, "Wrong size on UPlayer_Arms_AnimBP_C");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UPlayer_Arms_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_Slot) == 0x0002F8, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000340, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000368, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000390, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0003B8, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0003E0, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000408, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000430, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0004B0, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0004E0, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000560, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000590, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0005C0, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_StateResult) == 0x000640, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, AnimGraphNode_StateMachine) == 0x000670, "Member 'UPlayer_Arms_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, Idle) == 0x000720, "Member 'UPlayer_Arms_AnimBP_C::Idle' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, IsClimbing) == 0x000728, "Member 'UPlayer_Arms_AnimBP_C::IsClimbing' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, IsSwimming) == 0x000729, "Member 'UPlayer_Arms_AnimBP_C::IsSwimming' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, Speed) == 0x00072C, "Member 'UPlayer_Arms_AnimBP_C::Speed' has a wrong offset!");
static_assert(offsetof(UPlayer_Arms_AnimBP_C, HasHelmet) == 0x000730, "Member 'UPlayer_Arms_AnimBP_C::HasHelmet' has a wrong offset!");

}
