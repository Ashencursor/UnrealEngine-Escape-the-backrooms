#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MenuActor.BP_MenuActor_C
// 0x00E0 (0x0360 - 0x0280)
class ABP_MenuActor_C final : public APawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                       Widget;                                            // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Keyboard;                                          // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*             MotionController;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*             MotionController1;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*            WidgetInteraction1;                                // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*            WidgetInteraction;                                 // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SmoothMove_Alpha_71DC4F2C4FC90E5CAD63AD8598EB1D51; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SmoothMove__Direction_71DC4F2C4FC90E5CAD63AD8598EB1D51; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CD[0x3];                                      // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SmoothMove;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Keyboard_Basic_C*                  WBP_Keyboard_Basic;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             MenuTransform;                                     // 0x02E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UNiagaraComponent*                      LeftBeam;                                          // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      RightBeam;                                         // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             StartTransform;                                    // 0x0320(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABP_VRMenu_C*                           Menu;                                              // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHeldLeft;                                        // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHeldRight;                                       // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MenuActor(int32 EntryPoint);
	void HeldRight(bool Down);
	void HeldLeft(bool Down);
	void CloseWarning();
	void MoveTo();
	void ToggleKeyboard(bool Hide);
	void CloseSettings();
	void OpenSettings();
	void ReceiveBeginPlay();
	void InpActEvt_Secondary_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Secondary_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_4(const struct FKey& Key);
	void SmoothMove__UpdateFunc();
	void SmoothMove__FinishedFunc();
	void RefreshFocus();
	void ToggleWidgetInteraction();
	void Update_Beam();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MenuActor_C">();
	}
	static class ABP_MenuActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MenuActor_C>();
	}
};
static_assert(alignof(ABP_MenuActor_C) == 0x000010, "Wrong alignment on ABP_MenuActor_C");
static_assert(sizeof(ABP_MenuActor_C) == 0x000360, "Wrong size on ABP_MenuActor_C");
static_assert(offsetof(ABP_MenuActor_C, UberGraphFrame) == 0x000280, "Member 'ABP_MenuActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, Widget) == 0x000288, "Member 'ABP_MenuActor_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, Keyboard) == 0x000290, "Member 'ABP_MenuActor_C::Keyboard' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, MotionController) == 0x000298, "Member 'ABP_MenuActor_C::MotionController' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, MotionController1) == 0x0002A0, "Member 'ABP_MenuActor_C::MotionController1' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, Camera) == 0x0002A8, "Member 'ABP_MenuActor_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, Scene) == 0x0002B0, "Member 'ABP_MenuActor_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, WidgetInteraction1) == 0x0002B8, "Member 'ABP_MenuActor_C::WidgetInteraction1' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, WidgetInteraction) == 0x0002C0, "Member 'ABP_MenuActor_C::WidgetInteraction' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, SmoothMove_Alpha_71DC4F2C4FC90E5CAD63AD8598EB1D51) == 0x0002C8, "Member 'ABP_MenuActor_C::SmoothMove_Alpha_71DC4F2C4FC90E5CAD63AD8598EB1D51' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, SmoothMove__Direction_71DC4F2C4FC90E5CAD63AD8598EB1D51) == 0x0002CC, "Member 'ABP_MenuActor_C::SmoothMove__Direction_71DC4F2C4FC90E5CAD63AD8598EB1D51' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, SmoothMove) == 0x0002D0, "Member 'ABP_MenuActor_C::SmoothMove' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, WBP_Keyboard_Basic) == 0x0002D8, "Member 'ABP_MenuActor_C::WBP_Keyboard_Basic' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, MenuTransform) == 0x0002E0, "Member 'ABP_MenuActor_C::MenuTransform' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, LeftBeam) == 0x000310, "Member 'ABP_MenuActor_C::LeftBeam' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, RightBeam) == 0x000318, "Member 'ABP_MenuActor_C::RightBeam' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, StartTransform) == 0x000320, "Member 'ABP_MenuActor_C::StartTransform' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, Menu) == 0x000350, "Member 'ABP_MenuActor_C::Menu' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, IsHeldLeft) == 0x000358, "Member 'ABP_MenuActor_C::IsHeldLeft' has a wrong offset!");
static_assert(offsetof(ABP_MenuActor_C, IsHeldRight) == 0x000359, "Member 'ABP_MenuActor_C::IsHeldRight' has a wrong offset!");

}
