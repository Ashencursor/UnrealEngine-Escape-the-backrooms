#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Name_Box

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lobby_Name_Box.Lobby_Name_Box_C
// 0x0028 (0x0288 - 0x0260)
class ULobby_Name_Box_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       EditableTextBox_Name;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNameSwitched;                                    // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnNameSwitched__DelegateSignature(const class FText& SelectedOption);
	void ExecuteUbergraph_Lobby_Name_Box(int32 EntryPoint);
	void BndEvt__Lobby_Name_Box_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void CanClose();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_Name_Box_C">();
	}
	static class ULobby_Name_Box_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobby_Name_Box_C>();
	}
};
static_assert(alignof(ULobby_Name_Box_C) == 0x000008, "Wrong alignment on ULobby_Name_Box_C");
static_assert(sizeof(ULobby_Name_Box_C) == 0x000288, "Wrong size on ULobby_Name_Box_C");
static_assert(offsetof(ULobby_Name_Box_C, UberGraphFrame) == 0x000260, "Member 'ULobby_Name_Box_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobby_Name_Box_C, EditableTextBox_Name) == 0x000268, "Member 'ULobby_Name_Box_C::EditableTextBox_Name' has a wrong offset!");
static_assert(offsetof(ULobby_Name_Box_C, SizeBox) == 0x000270, "Member 'ULobby_Name_Box_C::SizeBox' has a wrong offset!");
static_assert(offsetof(ULobby_Name_Box_C, OnNameSwitched) == 0x000278, "Member 'ULobby_Name_Box_C::OnNameSwitched' has a wrong offset!");

}

