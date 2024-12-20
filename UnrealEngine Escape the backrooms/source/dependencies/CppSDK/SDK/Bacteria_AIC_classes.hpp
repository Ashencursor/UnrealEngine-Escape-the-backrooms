#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bacteria_AIC

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bacteria_AIC.Bacteria_AIC_C
// 0x0038 (0x0360 - 0x0328)
class ABacteria_AIC_C final : public AAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                  PawnSensing;                                       // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          BTAsset;                                           // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CanSeeKey;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Target;                                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ShouldTeleport;                                    // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayAmount;                                       // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Bacteria_AIC(int32 EntryPoint);
	void OnQueryFinish(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
	void SetChase();
	void SetCanTeleport();
	void BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn_0);
	void Setup_AI(class UBehaviorTree* Behavior_Tree);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bacteria_AIC_C">();
	}
	static class ABacteria_AIC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABacteria_AIC_C>();
	}
};
static_assert(alignof(ABacteria_AIC_C) == 0x000008, "Wrong alignment on ABacteria_AIC_C");
static_assert(sizeof(ABacteria_AIC_C) == 0x000360, "Wrong size on ABacteria_AIC_C");
static_assert(offsetof(ABacteria_AIC_C, UberGraphFrame) == 0x000328, "Member 'ABacteria_AIC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABacteria_AIC_C, PawnSensing) == 0x000330, "Member 'ABacteria_AIC_C::PawnSensing' has a wrong offset!");
static_assert(offsetof(ABacteria_AIC_C, BTAsset) == 0x000338, "Member 'ABacteria_AIC_C::BTAsset' has a wrong offset!");
static_assert(offsetof(ABacteria_AIC_C, CanSeeKey) == 0x000340, "Member 'ABacteria_AIC_C::CanSeeKey' has a wrong offset!");
static_assert(offsetof(ABacteria_AIC_C, Target) == 0x000348, "Member 'ABacteria_AIC_C::Target' has a wrong offset!");
static_assert(offsetof(ABacteria_AIC_C, ShouldTeleport) == 0x000350, "Member 'ABacteria_AIC_C::ShouldTeleport' has a wrong offset!");
static_assert(offsetof(ABacteria_AIC_C, DelayAmount) == 0x000358, "Member 'ABacteria_AIC_C::DelayAmount' has a wrong offset!");

}

