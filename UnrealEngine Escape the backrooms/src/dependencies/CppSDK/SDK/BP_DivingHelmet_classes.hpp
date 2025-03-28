#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DivingHelmet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DivingHelmet.BP_DivingHelmet_C
// 0x0028 (0x0248 - 0x0220)
class ABP_DivingHelmet_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    SpotLight;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DivingHelmet(int32 EntryPoint);
	void UpdateLight(class AActor* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DivingHelmet_C">();
	}
	static class ABP_DivingHelmet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DivingHelmet_C>();
	}
};
static_assert(alignof(ABP_DivingHelmet_C) == 0x000008, "Wrong alignment on ABP_DivingHelmet_C");
static_assert(sizeof(ABP_DivingHelmet_C) == 0x000248, "Wrong size on ABP_DivingHelmet_C");
static_assert(offsetof(ABP_DivingHelmet_C, UberGraphFrame) == 0x000220, "Member 'ABP_DivingHelmet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DivingHelmet_C, SpotLight) == 0x000228, "Member 'ABP_DivingHelmet_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_DivingHelmet_C, SpringArm) == 0x000230, "Member 'ABP_DivingHelmet_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_DivingHelmet_C, StaticMesh) == 0x000238, "Member 'ABP_DivingHelmet_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DivingHelmet_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_DivingHelmet_C::DefaultSceneRoot' has a wrong offset!");

}

