#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Spectator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Spectator.BP_Spectator_C
// 0x0060 (0x02E0 - 0x0280)
class ABP_Spectator_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetInteractionComponent*            WidgetInteraction;                                 // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*            WidgetInteraction1;                                // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*             R_MotionController;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*             L_MotionController;                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        MotionControllers;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         SpectatingIndex;                                   // 0x02C8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABPCharacter_Demo_C*                    Target;                                            // 0x02D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSwitch;                                         // 0x02D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Spectator(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UpdateSpectating(const class FString& Spectating);
	void SpectatePreviousPlayer();
	void SpectateNextPlayer();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_0(float AxisValue);
	void InpActEvt_Settings_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Secondary_K2Node_InputActionEvent_2(const struct FKey& Key);
	void SpectatePrevious();
	void SpectateNext();
	void SpectateIndex(int32 SpectateIndex_0);
	void SetupWidget(bool DesiredSize, float Scale);
	void ToggleWidgetInteraction(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Spectator_C">();
	}
	static class ABP_Spectator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Spectator_C>();
	}
};
static_assert(alignof(ABP_Spectator_C) == 0x000008, "Wrong alignment on ABP_Spectator_C");
static_assert(sizeof(ABP_Spectator_C) == 0x0002E0, "Wrong size on ABP_Spectator_C");
static_assert(offsetof(ABP_Spectator_C, UberGraphFrame) == 0x000280, "Member 'ABP_Spectator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, WidgetInteraction) == 0x000288, "Member 'ABP_Spectator_C::WidgetInteraction' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, WidgetInteraction1) == 0x000290, "Member 'ABP_Spectator_C::WidgetInteraction1' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, R_MotionController) == 0x000298, "Member 'ABP_Spectator_C::R_MotionController' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, L_MotionController) == 0x0002A0, "Member 'ABP_Spectator_C::L_MotionController' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, MotionControllers) == 0x0002A8, "Member 'ABP_Spectator_C::MotionControllers' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, Widget) == 0x0002B0, "Member 'ABP_Spectator_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, SpringArm) == 0x0002B8, "Member 'ABP_Spectator_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, Camera) == 0x0002C0, "Member 'ABP_Spectator_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, SpectatingIndex) == 0x0002C8, "Member 'ABP_Spectator_C::SpectatingIndex' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, Target) == 0x0002D0, "Member 'ABP_Spectator_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_Spectator_C, CanSwitch) == 0x0002D8, "Member 'ABP_Spectator_C::CanSwitch' has a wrong offset!");

}

