#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Button_Basic

#include "Basic.hpp"

#include "EModifierKeys_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Button_Basic.WBP_Button_Basic_C
// 0x0310 (0x0570 - 0x0260)
class UWBP_Button_Basic_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ButtonText;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                KeyboardButton;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   CurrentText;                                       // 0x0278(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   LowercaseText;                                     // 0x0290(0x0018)(Edit, BlueprintVisible)
	class FText                                   UppercaseText;                                     // 0x02A8(0x0018)(Edit, BlueprintVisible)
	class UWidgetInteractionComponent*            WidgetInteractor;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ButtonPressed;                                     // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   SecondaryText;                                     // 0x02D8(0x0018)(Edit, BlueprintVisible)
	EModifierKeys                                 ModifierKey;                                       // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseCustomStyle;                                   // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F2[0x6];                                      // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           CustomStyle;                                       // 0x02F8(0x0278)(Edit, BlueprintVisible)

public:
	void ButtonPressed__DelegateSignature(const class FText& ButtonText_0, EModifierKeys Modifier);
	void ExecuteUbergraph_WBP_Button_Basic(int32 EntryPoint);
	void SendKeyboardText();
	void Shift();
	void Space();
	void SymbolLock();
	void SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent);
	void CapsLock();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ChangeTextCasing();
	void SetButtonText(const class FText& TextToUse);
	void ChangeTextToSymbols();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Button_Basic_C">();
	}
	static class UWBP_Button_Basic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Button_Basic_C>();
	}
};
static_assert(alignof(UWBP_Button_Basic_C) == 0x000008, "Wrong alignment on UWBP_Button_Basic_C");
static_assert(sizeof(UWBP_Button_Basic_C) == 0x000570, "Wrong size on UWBP_Button_Basic_C");
static_assert(offsetof(UWBP_Button_Basic_C, UberGraphFrame) == 0x000260, "Member 'UWBP_Button_Basic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, ButtonText) == 0x000268, "Member 'UWBP_Button_Basic_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, KeyboardButton) == 0x000270, "Member 'UWBP_Button_Basic_C::KeyboardButton' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, CurrentText) == 0x000278, "Member 'UWBP_Button_Basic_C::CurrentText' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, LowercaseText) == 0x000290, "Member 'UWBP_Button_Basic_C::LowercaseText' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, UppercaseText) == 0x0002A8, "Member 'UWBP_Button_Basic_C::UppercaseText' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, WidgetInteractor) == 0x0002C0, "Member 'UWBP_Button_Basic_C::WidgetInteractor' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, ButtonPressed) == 0x0002C8, "Member 'UWBP_Button_Basic_C::ButtonPressed' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, SecondaryText) == 0x0002D8, "Member 'UWBP_Button_Basic_C::SecondaryText' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, ModifierKey) == 0x0002F0, "Member 'UWBP_Button_Basic_C::ModifierKey' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, bUseCustomStyle) == 0x0002F1, "Member 'UWBP_Button_Basic_C::bUseCustomStyle' has a wrong offset!");
static_assert(offsetof(UWBP_Button_Basic_C, CustomStyle) == 0x0002F8, "Member 'UWBP_Button_Basic_C::CustomStyle' has a wrong offset!");

}

