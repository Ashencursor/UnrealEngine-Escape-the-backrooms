#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Button_LeaveGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Button_LeaveGame.WB_Button_LeaveGame_C
// 0x0020 (0x0280 - 0x0260)
class UWB_Button_LeaveGame_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_WB_Button_LeaveGame(int32 EntryPoint);
	void BndEvt__WB_Button_Close_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Button_LeaveGame_C">();
	}
	static class UWB_Button_LeaveGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Button_LeaveGame_C>();
	}
};
static_assert(alignof(UWB_Button_LeaveGame_C) == 0x000008, "Wrong alignment on UWB_Button_LeaveGame_C");
static_assert(sizeof(UWB_Button_LeaveGame_C) == 0x000280, "Wrong size on UWB_Button_LeaveGame_C");
static_assert(offsetof(UWB_Button_LeaveGame_C, UberGraphFrame) == 0x000260, "Member 'UWB_Button_LeaveGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Button_LeaveGame_C, Button) == 0x000268, "Member 'UWB_Button_LeaveGame_C::Button' has a wrong offset!");
static_assert(offsetof(UWB_Button_LeaveGame_C, OnClicked) == 0x000270, "Member 'UWB_Button_LeaveGame_C::OnClicked' has a wrong offset!");

}

