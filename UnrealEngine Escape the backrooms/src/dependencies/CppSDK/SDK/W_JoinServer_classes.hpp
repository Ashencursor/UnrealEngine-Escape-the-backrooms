#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_JoinServer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_JoinServer.W_JoinServer_C
// 0x0058 (0x02B8 - 0x0260)
class UW_JoinServer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_No;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Yes;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Code;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NoFocus;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_YesFocus;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_70;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_C*                          MainMenuRef;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ServerCode;                                        // 0x02A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_W_JoinServer(int32 EntryPoint);
	void BndEvt__W_CreateServer_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_236_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature();
	void ShowJoinServer();
	void RefreshFocus();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	class UWidget* CustomNavigation_Left(EUINavigation Navigation_0);
	class UWidget* CustomNavigation_Right(EUINavigation Navigation_0);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	class UWidget* CustomNavigation_Up(EUINavigation Navigation_0);
	class UWidget* CustomNavigation_Down(EUINavigation Navigation_0);
	void Check_Server_Name();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_JoinServer_C">();
	}
	static class UW_JoinServer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_JoinServer_C>();
	}
};
static_assert(alignof(UW_JoinServer_C) == 0x000008, "Wrong alignment on UW_JoinServer_C");
static_assert(sizeof(UW_JoinServer_C) == 0x0002B8, "Wrong size on UW_JoinServer_C");
static_assert(offsetof(UW_JoinServer_C, UberGraphFrame) == 0x000260, "Member 'UW_JoinServer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, Button_No) == 0x000268, "Member 'UW_JoinServer_C::Button_No' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, Button_Yes) == 0x000270, "Member 'UW_JoinServer_C::Button_Yes' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, EditableTextBox_Code) == 0x000278, "Member 'UW_JoinServer_C::EditableTextBox_Code' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, Image_NoFocus) == 0x000280, "Member 'UW_JoinServer_C::Image_NoFocus' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, Image_YesFocus) == 0x000288, "Member 'UW_JoinServer_C::Image_YesFocus' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, SizeBox_70) == 0x000290, "Member 'UW_JoinServer_C::SizeBox_70' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, MainMenuRef) == 0x000298, "Member 'UW_JoinServer_C::MainMenuRef' has a wrong offset!");
static_assert(offsetof(UW_JoinServer_C, ServerCode) == 0x0002A0, "Member 'UW_JoinServer_C::ServerCode' has a wrong offset!");

}

