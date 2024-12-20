#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VRCharacter_Demo

#include "Basic.hpp"

#include "BPCharacter_Demo_classes.hpp"
#include "OpenInputPlugin_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FootstepActionsEnum_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VRCharacter_Demo.VRCharacter_Demo_C
// 0x0390 (0x0E50 - 0x0AC0)
class AVRCharacter_Demo_C final : public ABPCharacter_Demo_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_VRCharacter_Demo_C;                 // 0x0AC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGripMotionControllerComponent*         RightGrip;                                         // 0x0AC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGripMotionControllerComponent*         LeftGrip;                                          // 0x0AD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        StandingPoint;                                     // 0x0AD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*            WidgetInteraction1;                                // 0x0AE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*            WidgetInteraction;                                 // 0x0AE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        VRRoot;                                            // 0x0AF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_3_0_Scale_9F7FE2EA46D19A33530589BA0A9EC988; // 0x0B00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_3_0_Z_9F7FE2EA46D19A33530589BA0A9EC988;   // 0x0B04(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_3_0__Direction_9F7FE2EA46D19A33530589BA0A9EC988; // 0x0B08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B09[0x7];                                      // 0x0B09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_3_0;                                      // 0x0B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMotionControllers;                              // 0x0B18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B19[0x3];                                      // 0x0B19(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CameraLoc;                                         // 0x0B1C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B28[0x8];                                      // 0x0B28(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CameraTransform;                                   // 0x0B30(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             NewTransform;                                      // 0x0B60(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         YawTurn;                                           // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastHMDLoc;                                        // 0x0B94(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HMDDelta;                                          // 0x0BA0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BAC[0x4];                                      // 0x0BAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      LeftBeam;                                          // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      RightBeam;                                         // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LastHMDRot;                                        // 0x0BC0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               HMDDeltaRot;                                       // 0x0BCC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Grab_Right_Hand;                                   // 0x0BD8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Grab_Left_Hand;                                    // 0x0BD9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BDA[0x2];                                      // 0x0BDA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameraPitch;                                       // 0x0BDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Temp1;                                             // 0x0BE0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Temp2;                                             // 0x0C10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C14[0xC];                                      // 0x0C14(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBPOpenVRActionInfo                    LeftActionInput;                                   // 0x0C20(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBPOpenVRActionInfo                    RightActionInput;                                  // 0x0D10(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   LeftGesture;                                       // 0x0E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightGesture;                                      // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             RepTransform;                                      // 0x0E10(0x0030)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          IsCrouching;                                       // 0x0E40(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E41[0x3];                                      // 0x0E41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VRMultiplier;                                      // 0x0E44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VRCharacter_Demo(int32 EntryPoint);
	void StopCrouch();
	void InpAxisEvt_VRTurn_X_K2Node_InputAxisEvent_4(float AxisValue);
	void UpdateGrips();
	void OpenSettings();
	void UpdateGesture(bool IsRightHand, class FName Gesture);
	void InpAxisEvt_VRMove_X_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_VRMove_Y_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue);
	void Alter_Finger_Curl_State_MC(bool Left_hand__, bool Value);
	void Alter_Finger_Curl_State(bool Left_hand__, bool Value);
	void StartInteracting(bool Enable);
	void ShowRightArm();
	void ShowLeftArm();
	void InpActEvt_Secondary_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Secondary_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ResetVR_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Inventory_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_10(const struct FKey& Key);
	void Timeline_3_0__UpdateFunc();
	void Timeline_3_0__FinishedFunc();
	void SetupWidget(bool DesiredSize, float Scale);
	void ToggleWidgetInteraction(bool Enable);
	void UpdatePlayerCamera();
	void Update_Beam();
	void TickGesture();
	void RemoveVHS();
	void InitHMD();
	void TickHMD();
	void OnRep_RepTransform();
	void OnBalance();
	void StopBalance();
	void StartBalance(bool Direction, bool First);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
	void ShowInteractText(const class FText& Text);
	void ChangeCrosshairVisibility(bool IsVisible);
	void CreateLegs();
	void ReceiveBeginPlay();
	void OnPossess();
	void KillClient();
	void AddHeat();
	void StopFear();
	void Fear(const struct FHE_Fear& Param_Fear_0);
	void UpdateFOV();
	void HideLeftArm(bool Hide);
	void HideRightArm(bool Hide);
	void TryPickup();
	void ReceiveTick(float DeltaSeconds);
	void SpawnEquipItem_SERVER(class UClass* ItemClass);
	void InpActEvt_Crouch_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_11(const struct FKey& Key);
	void UserConstructionScript();
	void SetPostProcessing(float Chromatic_Distance, float Tracking_Noise_Level, float Signal_Distortion_Intensity, float Color_Tornado_Intensity, float Warp_Belt_Intensity, float Screen_Hop_Frequency, float Random_Horizontal_Offset_Frequency, float Screen_Hop_Intensity, float Random_Horizontal_Offset_Strength);
	void Toggle_Post_Processing(bool Activated);
	void CheckStamina();
	void Headshake(EFootstepActionsEnum FootstepType);
	void ToggleVHS();
	void ToggleCrosshair(bool IsVisible);
	void CheckFlashlight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VRCharacter_Demo_C">();
	}
	static class AVRCharacter_Demo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVRCharacter_Demo_C>();
	}
};
static_assert(alignof(AVRCharacter_Demo_C) == 0x000010, "Wrong alignment on AVRCharacter_Demo_C");
static_assert(sizeof(AVRCharacter_Demo_C) == 0x000E50, "Wrong size on AVRCharacter_Demo_C");
static_assert(offsetof(AVRCharacter_Demo_C, UberGraphFrame_VRCharacter_Demo_C) == 0x000AC0, "Member 'AVRCharacter_Demo_C::UberGraphFrame_VRCharacter_Demo_C' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, RightGrip) == 0x000AC8, "Member 'AVRCharacter_Demo_C::RightGrip' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, LeftGrip) == 0x000AD0, "Member 'AVRCharacter_Demo_C::LeftGrip' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, StandingPoint) == 0x000AD8, "Member 'AVRCharacter_Demo_C::StandingPoint' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, WidgetInteraction1) == 0x000AE0, "Member 'AVRCharacter_Demo_C::WidgetInteraction1' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, WidgetInteraction) == 0x000AE8, "Member 'AVRCharacter_Demo_C::WidgetInteraction' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Widget) == 0x000AF0, "Member 'AVRCharacter_Demo_C::Widget' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, VRRoot) == 0x000AF8, "Member 'AVRCharacter_Demo_C::VRRoot' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Timeline_3_0_Scale_9F7FE2EA46D19A33530589BA0A9EC988) == 0x000B00, "Member 'AVRCharacter_Demo_C::Timeline_3_0_Scale_9F7FE2EA46D19A33530589BA0A9EC988' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Timeline_3_0_Z_9F7FE2EA46D19A33530589BA0A9EC988) == 0x000B04, "Member 'AVRCharacter_Demo_C::Timeline_3_0_Z_9F7FE2EA46D19A33530589BA0A9EC988' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Timeline_3_0__Direction_9F7FE2EA46D19A33530589BA0A9EC988) == 0x000B08, "Member 'AVRCharacter_Demo_C::Timeline_3_0__Direction_9F7FE2EA46D19A33530589BA0A9EC988' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Timeline_3_0) == 0x000B10, "Member 'AVRCharacter_Demo_C::Timeline_3_0' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, UseMotionControllers) == 0x000B18, "Member 'AVRCharacter_Demo_C::UseMotionControllers' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, CameraLoc) == 0x000B1C, "Member 'AVRCharacter_Demo_C::CameraLoc' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, CameraTransform) == 0x000B30, "Member 'AVRCharacter_Demo_C::CameraTransform' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, NewTransform) == 0x000B60, "Member 'AVRCharacter_Demo_C::NewTransform' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, YawTurn) == 0x000B90, "Member 'AVRCharacter_Demo_C::YawTurn' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, LastHMDLoc) == 0x000B94, "Member 'AVRCharacter_Demo_C::LastHMDLoc' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, HMDDelta) == 0x000BA0, "Member 'AVRCharacter_Demo_C::HMDDelta' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, LeftBeam) == 0x000BB0, "Member 'AVRCharacter_Demo_C::LeftBeam' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, RightBeam) == 0x000BB8, "Member 'AVRCharacter_Demo_C::RightBeam' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, LastHMDRot) == 0x000BC0, "Member 'AVRCharacter_Demo_C::LastHMDRot' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, HMDDeltaRot) == 0x000BCC, "Member 'AVRCharacter_Demo_C::HMDDeltaRot' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Grab_Right_Hand) == 0x000BD8, "Member 'AVRCharacter_Demo_C::Grab_Right_Hand' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Grab_Left_Hand) == 0x000BD9, "Member 'AVRCharacter_Demo_C::Grab_Left_Hand' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, CameraPitch) == 0x000BDC, "Member 'AVRCharacter_Demo_C::CameraPitch' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Temp1) == 0x000BE0, "Member 'AVRCharacter_Demo_C::Temp1' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, Temp2) == 0x000C10, "Member 'AVRCharacter_Demo_C::Temp2' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, LeftActionInput) == 0x000C20, "Member 'AVRCharacter_Demo_C::LeftActionInput' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, RightActionInput) == 0x000D10, "Member 'AVRCharacter_Demo_C::RightActionInput' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, LeftGesture) == 0x000E00, "Member 'AVRCharacter_Demo_C::LeftGesture' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, RightGesture) == 0x000E08, "Member 'AVRCharacter_Demo_C::RightGesture' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, RepTransform) == 0x000E10, "Member 'AVRCharacter_Demo_C::RepTransform' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, IsCrouching) == 0x000E40, "Member 'AVRCharacter_Demo_C::IsCrouching' has a wrong offset!");
static_assert(offsetof(AVRCharacter_Demo_C, VRMultiplier) == 0x000E44, "Member 'AVRCharacter_Demo_C::VRMultiplier' has a wrong offset!");

}

