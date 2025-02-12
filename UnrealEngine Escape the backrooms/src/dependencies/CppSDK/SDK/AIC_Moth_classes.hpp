#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Moth

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_Moth.AIC_Moth_C
// 0x0040 (0x0368 - 0x0328)
class AAIC_Moth_C final : public AAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                  PawnSensing;                                       // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          BTAsset;                                           // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CanSeeKey;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target;                                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   IsRetreated;                                       // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   IsWarning;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayAmount;                                       // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_Moth(int32 EntryPoint);
	void ResetSensing();
	void OnSensedPlayer(class ABPCharacter_Demo_C* Player);
	void ResetAggressive();
	void BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature(class APawn* Instigator_0, const struct FVector& Location, float Volume);
	void TriggerAggressive(class ABPCharacter_Demo_C* Target_0);
	void Retreat();
	void BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn_0);
	void Setup_AI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_Moth_C">();
	}
	static class AAIC_Moth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_Moth_C>();
	}
};
static_assert(alignof(AAIC_Moth_C) == 0x000008, "Wrong alignment on AAIC_Moth_C");
static_assert(sizeof(AAIC_Moth_C) == 0x000368, "Wrong size on AAIC_Moth_C");
static_assert(offsetof(AAIC_Moth_C, UberGraphFrame) == 0x000328, "Member 'AAIC_Moth_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAIC_Moth_C, PawnSensing) == 0x000330, "Member 'AAIC_Moth_C::PawnSensing' has a wrong offset!");
static_assert(offsetof(AAIC_Moth_C, BTAsset) == 0x000338, "Member 'AAIC_Moth_C::BTAsset' has a wrong offset!");
static_assert(offsetof(AAIC_Moth_C, CanSeeKey) == 0x000340, "Member 'AAIC_Moth_C::CanSeeKey' has a wrong offset!");
static_assert(offsetof(AAIC_Moth_C, Target) == 0x000348, "Member 'AAIC_Moth_C::Target' has a wrong offset!");
static_assert(offsetof(AAIC_Moth_C, IsRetreated) == 0x000350, "Member 'AAIC_Moth_C::IsRetreated' has a wrong offset!");
static_assert(offsetof(AAIC_Moth_C, IsWarning) == 0x000358, "Member 'AAIC_Moth_C::IsWarning' has a wrong offset!");
static_assert(offsetof(AAIC_Moth_C, DelayAmount) == 0x000360, "Member 'AAIC_Moth_C::DelayAmount' has a wrong offset!");

}

