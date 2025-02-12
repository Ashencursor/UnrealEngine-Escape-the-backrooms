#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SecurityPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SecurityPopup.UI_SecurityPopup_C
// 0x0030 (0x0290 - 0x0260)
class UUI_SecurityPopup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                              CheckBox_112;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                OkButton;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_83;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_592;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_SecurityPopup(int32 EntryPoint);
	void Construct();
	void BndEvt__UI_SecurityPopup_OkButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_SecurityPopup_RunButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CheckFont();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SecurityPopup_C">();
	}
	static class UUI_SecurityPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SecurityPopup_C>();
	}
};
static_assert(alignof(UUI_SecurityPopup_C) == 0x000008, "Wrong alignment on UUI_SecurityPopup_C");
static_assert(sizeof(UUI_SecurityPopup_C) == 0x000290, "Wrong size on UUI_SecurityPopup_C");
static_assert(offsetof(UUI_SecurityPopup_C, UberGraphFrame) == 0x000260, "Member 'UUI_SecurityPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SecurityPopup_C, CheckBox_112) == 0x000268, "Member 'UUI_SecurityPopup_C::CheckBox_112' has a wrong offset!");
static_assert(offsetof(UUI_SecurityPopup_C, OkButton) == 0x000270, "Member 'UUI_SecurityPopup_C::OkButton' has a wrong offset!");
static_assert(offsetof(UUI_SecurityPopup_C, TextBlock_2) == 0x000278, "Member 'UUI_SecurityPopup_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UUI_SecurityPopup_C, TextBlock_83) == 0x000280, "Member 'UUI_SecurityPopup_C::TextBlock_83' has a wrong offset!");
static_assert(offsetof(UUI_SecurityPopup_C, TextBlock_592) == 0x000288, "Member 'UUI_SecurityPopup_C::TextBlock_592' has a wrong offset!");

}

