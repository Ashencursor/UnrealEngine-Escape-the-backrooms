#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_MapSelection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_Difficulty_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lobby_MapSelection.Lobby_MapSelection_C
// 0x0108 (0x0368 - 0x0260)
class ULobby_MapSelection_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               DescriptionBox;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Difficulty_Description_Text;                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DifficultySwitcherBox;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameMode_Description_Text;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_DifficultySwitcher_C*            Lobby_DifficultySwitcher;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_Level_Switcher_C*                Lobby_Level_Switcher_C_0;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_Name_Box_C*                      Lobby_Name_Box_C_1;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_Save_Switcher_C*                 Lobby_Save_Switcher;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Map_Image;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapName_Text;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MapSwitcherBox;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               NameBox;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SaveSwitcherBox;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Error;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Time;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Show_MapSwitcher_;                                 // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Selected_Option;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSwitched_Map;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Show_DifficultySwitcher;                           // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Show_SaveGameSwitcher;                             // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30A[0x6];                                      // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SaveName;                                          // 0x0310(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         CharacterArray;                                    // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSwitched_Save;                                   // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SlotName;                                          // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSwitched_Difficulty;                             // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSwitched_Map__DelegateSignature(const class FString& Selected_Map);
	void OnSwitched_Save__DelegateSignature(const class FString& SaveName_0);
	void OnSwitched_Difficulty__DelegateSignature(E_Difficulty Difficulty);
	void ExecuteUbergraph_Lobby_MapSelection(int32 EntryPoint);
	void BndEvt__Lobby_MapSelection_Lobby_Name_Box_C_1_K2Node_ComponentBoundEvent_0_OnNameSwitched__DelegateSignature(const class FText& SelectedOption);
	void BndEvt__Lobby_MapSelection_Lobby_DifficultySwitcher_K2Node_ComponentBoundEvent_0_OnDifficultySwitched__DelegateSignature(const class FString& SelectedOption);
	void BndEvt__Lobby_MapSelection_Lobby_Save_Switcher_K2Node_ComponentBoundEvent_4_OnSaveSwitched__DelegateSignature(const class FString& SelectedOption);
	void CanClose();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Lobby_MapSelection_Lobby_Level_Switcher_C_0_K2Node_ComponentBoundEvent_3_OnLevelSwitched__DelegateSignature(const class FString& SelectedOption);
	void Setup();
	void Set_Selected_Map(const class FString& MapName, bool CallDelegate_);
	void Set_OptionButtons_Visibility();
	void Set_DifficultyButtons_Visibility();
	void Set_Selected_Difficulty(const class FString& Difficulty, bool CallDelegate_);
	void Set_Selected_Level(const class FString& Level, bool CallDelegate_);
	void Set_Selected_Save(const class FString& Slot_0, bool CallDelegate_);
	void RoundedTime(float Time_0, class FString* RoundedTime_0);
	class FText GetTime(float Time_0);
	void GetMapFromName(const class FString& Name_0, class UTexture** Image);
	void GetLevelFromName(const class FString& Name_0, class FName* LevelName);
	void ResetLevelSelection(E_Difficulty Difficulty);
	void Set_SaveButtons_Visibility();
	void Set_SaveName_Visibility();
	void CheckName(bool* IsValid);
	void CheckFont();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_MapSelection_C">();
	}
	static class ULobby_MapSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobby_MapSelection_C>();
	}
};
static_assert(alignof(ULobby_MapSelection_C) == 0x000008, "Wrong alignment on ULobby_MapSelection_C");
static_assert(sizeof(ULobby_MapSelection_C) == 0x000368, "Wrong size on ULobby_MapSelection_C");
static_assert(offsetof(ULobby_MapSelection_C, UberGraphFrame) == 0x000260, "Member 'ULobby_MapSelection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, DescriptionBox) == 0x000268, "Member 'ULobby_MapSelection_C::DescriptionBox' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Difficulty_Description_Text) == 0x000270, "Member 'ULobby_MapSelection_C::Difficulty_Description_Text' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, DifficultySwitcherBox) == 0x000278, "Member 'ULobby_MapSelection_C::DifficultySwitcherBox' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, GameMode_Description_Text) == 0x000280, "Member 'ULobby_MapSelection_C::GameMode_Description_Text' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Lobby_DifficultySwitcher) == 0x000288, "Member 'ULobby_MapSelection_C::Lobby_DifficultySwitcher' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Lobby_Level_Switcher_C_0) == 0x000290, "Member 'ULobby_MapSelection_C::Lobby_Level_Switcher_C_0' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Lobby_Name_Box_C_1) == 0x000298, "Member 'ULobby_MapSelection_C::Lobby_Name_Box_C_1' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Lobby_Save_Switcher) == 0x0002A0, "Member 'ULobby_MapSelection_C::Lobby_Save_Switcher' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Map_Image) == 0x0002A8, "Member 'ULobby_MapSelection_C::Map_Image' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, MapName_Text) == 0x0002B0, "Member 'ULobby_MapSelection_C::MapName_Text' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, MapSwitcherBox) == 0x0002B8, "Member 'ULobby_MapSelection_C::MapSwitcherBox' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, NameBox) == 0x0002C0, "Member 'ULobby_MapSelection_C::NameBox' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, SaveSwitcherBox) == 0x0002C8, "Member 'ULobby_MapSelection_C::SaveSwitcherBox' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, TextBlock_Error) == 0x0002D0, "Member 'ULobby_MapSelection_C::TextBlock_Error' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Time) == 0x0002D8, "Member 'ULobby_MapSelection_C::Time' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Show_MapSwitcher_) == 0x0002E0, "Member 'ULobby_MapSelection_C::Show_MapSwitcher_' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Selected_Option) == 0x0002E8, "Member 'ULobby_MapSelection_C::Selected_Option' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, OnSwitched_Map) == 0x0002F8, "Member 'ULobby_MapSelection_C::OnSwitched_Map' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Show_DifficultySwitcher) == 0x000308, "Member 'ULobby_MapSelection_C::Show_DifficultySwitcher' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, Show_SaveGameSwitcher) == 0x000309, "Member 'ULobby_MapSelection_C::Show_SaveGameSwitcher' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, SaveName) == 0x000310, "Member 'ULobby_MapSelection_C::SaveName' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, CharacterArray) == 0x000328, "Member 'ULobby_MapSelection_C::CharacterArray' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, OnSwitched_Save) == 0x000338, "Member 'ULobby_MapSelection_C::OnSwitched_Save' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, SlotName) == 0x000348, "Member 'ULobby_MapSelection_C::SlotName' has a wrong offset!");
static_assert(offsetof(ULobby_MapSelection_C, OnSwitched_Difficulty) == 0x000358, "Member 'ULobby_MapSelection_C::OnSwitched_Difficulty' has a wrong offset!");

}

