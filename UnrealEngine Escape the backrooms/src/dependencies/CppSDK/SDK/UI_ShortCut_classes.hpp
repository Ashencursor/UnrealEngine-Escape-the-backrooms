#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShortCut

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ShortCut.UI_ShortCut_C
// 0x0078 (0x02D8 - 0x0260)
class UUI_ShortCut_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Click;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoImage;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextName;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Desktop_C*                          Desktop;                                           // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Program_ID;                                        // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Prog;                                              // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Image__if_applicable_;                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text__if_applicable_;                              // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Sound__if_applicable_;                             // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFileMediaSource*                       Media__if_applicable_;                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Level_Name__if_applicable_;                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsLocked;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_ShortCut(int32 EntryPoint);
	void Construct();
	void BndEvt__UI_ShortCut_Click_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ShortCut_C">();
	}
	static class UUI_ShortCut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ShortCut_C>();
	}
};
static_assert(alignof(UUI_ShortCut_C) == 0x000008, "Wrong alignment on UUI_ShortCut_C");
static_assert(sizeof(UUI_ShortCut_C) == 0x0002D8, "Wrong size on UUI_ShortCut_C");
static_assert(offsetof(UUI_ShortCut_C, UberGraphFrame) == 0x000260, "Member 'UUI_ShortCut_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Click) == 0x000268, "Member 'UUI_ShortCut_C::Click' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, LogoImage) == 0x000270, "Member 'UUI_ShortCut_C::LogoImage' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, TextName) == 0x000278, "Member 'UUI_ShortCut_C::TextName' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Desktop) == 0x000280, "Member 'UUI_ShortCut_C::Desktop' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Program_ID) == 0x000288, "Member 'UUI_ShortCut_C::Program_ID' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Prog) == 0x00028C, "Member 'UUI_ShortCut_C::Prog' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Image__if_applicable_) == 0x000290, "Member 'UUI_ShortCut_C::Image__if_applicable_' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Text__if_applicable_) == 0x000298, "Member 'UUI_ShortCut_C::Text__if_applicable_' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Sound__if_applicable_) == 0x0002B0, "Member 'UUI_ShortCut_C::Sound__if_applicable_' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Media__if_applicable_) == 0x0002B8, "Member 'UUI_ShortCut_C::Media__if_applicable_' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, Level_Name__if_applicable_) == 0x0002C0, "Member 'UUI_ShortCut_C::Level_Name__if_applicable_' has a wrong offset!");
static_assert(offsetof(UUI_ShortCut_C, IsLocked) == 0x0002D0, "Member 'UUI_ShortCut_C::IsLocked' has a wrong offset!");

}
