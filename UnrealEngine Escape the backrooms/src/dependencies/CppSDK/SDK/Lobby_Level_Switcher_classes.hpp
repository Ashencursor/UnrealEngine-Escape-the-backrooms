#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Level_Switcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_Difficulty_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lobby_Level_Switcher.Lobby_Level_Switcher_C
// 0x0088 (0x02E8 - 0x0260)
class ULobby_Level_Switcher_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Left_Btn;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Right_Btn;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_27;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Left_Btn;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Right_Btn;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 SelectedOption;                                    // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Allow_OptionLooping_;                              // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLevelSwitched;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         Options;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible)
	float                                         Widget_Width;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Left_Btn_Width;                                    // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Right_Btn_Width;                                   // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Widget_Height;                                     // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Font_Size;                                         // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Difficulty                                  Difficulty;                                        // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnLevelSwitched__DelegateSignature(const class FString& SelectedOption_0);
	void ExecuteUbergraph_Lobby_Level_Switcher(int32 EntryPoint);
	void CanClose();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void UpdateOptions();
	void Refresh();
	void Switch_Option(bool Decrease_);
	void Set_SelectedOption(const class FString& SelectedOption_0);
	void Setup();
	void Set_OptionButtons_Visibility(bool ShowOptionButtons_);
	class FText GetTime(float Time);
	void RoundedTime(float Time, class FString* RoundedTime_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_Level_Switcher_C">();
	}
	static class ULobby_Level_Switcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobby_Level_Switcher_C>();
	}
};
static_assert(alignof(ULobby_Level_Switcher_C) == 0x000008, "Wrong alignment on ULobby_Level_Switcher_C");
static_assert(sizeof(ULobby_Level_Switcher_C) == 0x0002E8, "Wrong size on ULobby_Level_Switcher_C");
static_assert(offsetof(ULobby_Level_Switcher_C, UberGraphFrame) == 0x000260, "Member 'ULobby_Level_Switcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Left_Btn) == 0x000268, "Member 'ULobby_Level_Switcher_C::Left_Btn' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Right_Btn) == 0x000270, "Member 'ULobby_Level_Switcher_C::Right_Btn' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, SizeBox_27) == 0x000278, "Member 'ULobby_Level_Switcher_C::SizeBox_27' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, SizeBox_Left_Btn) == 0x000280, "Member 'ULobby_Level_Switcher_C::SizeBox_Left_Btn' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, SizeBox_Right_Btn) == 0x000288, "Member 'ULobby_Level_Switcher_C::SizeBox_Right_Btn' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, TextBlock) == 0x000290, "Member 'ULobby_Level_Switcher_C::TextBlock' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, SelectedOption) == 0x000298, "Member 'ULobby_Level_Switcher_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Allow_OptionLooping_) == 0x0002A8, "Member 'ULobby_Level_Switcher_C::Allow_OptionLooping_' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, OnLevelSwitched) == 0x0002B0, "Member 'ULobby_Level_Switcher_C::OnLevelSwitched' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Options) == 0x0002C0, "Member 'ULobby_Level_Switcher_C::Options' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Widget_Width) == 0x0002D0, "Member 'ULobby_Level_Switcher_C::Widget_Width' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Left_Btn_Width) == 0x0002D4, "Member 'ULobby_Level_Switcher_C::Left_Btn_Width' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Right_Btn_Width) == 0x0002D8, "Member 'ULobby_Level_Switcher_C::Right_Btn_Width' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Widget_Height) == 0x0002DC, "Member 'ULobby_Level_Switcher_C::Widget_Height' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Font_Size) == 0x0002E0, "Member 'ULobby_Level_Switcher_C::Font_Size' has a wrong offset!");
static_assert(offsetof(ULobby_Level_Switcher_C, Difficulty) == 0x0002E4, "Member 'ULobby_Level_Switcher_C::Difficulty' has a wrong offset!");

}

