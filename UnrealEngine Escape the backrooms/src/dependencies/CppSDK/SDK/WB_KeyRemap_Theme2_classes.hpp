#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_KeyRemap_Theme2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C
// 0x0020 (0x0280 - 0x0260)
class UWB_KeyRemap_Theme2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInputKeySelector*                      InputKeySelector;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         KeyInput_Index;                                    // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InputAction_Name;                                  // 0x0274(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_KeyRemap_Theme2(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_KeyRemap_Theme2_C">();
	}
	static class UWB_KeyRemap_Theme2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_KeyRemap_Theme2_C>();
	}
};
static_assert(alignof(UWB_KeyRemap_Theme2_C) == 0x000008, "Wrong alignment on UWB_KeyRemap_Theme2_C");
static_assert(sizeof(UWB_KeyRemap_Theme2_C) == 0x000280, "Wrong size on UWB_KeyRemap_Theme2_C");
static_assert(offsetof(UWB_KeyRemap_Theme2_C, UberGraphFrame) == 0x000260, "Member 'UWB_KeyRemap_Theme2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_KeyRemap_Theme2_C, InputKeySelector) == 0x000268, "Member 'UWB_KeyRemap_Theme2_C::InputKeySelector' has a wrong offset!");
static_assert(offsetof(UWB_KeyRemap_Theme2_C, KeyInput_Index) == 0x000270, "Member 'UWB_KeyRemap_Theme2_C::KeyInput_Index' has a wrong offset!");
static_assert(offsetof(UWB_KeyRemap_Theme2_C, InputAction_Name) == 0x000274, "Member 'UWB_KeyRemap_Theme2_C::InputAction_Name' has a wrong offset!");

}

