#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Inventory_ItemToolTip_Row

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "EN_ItemRarity_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C
// 0x0030 (0x0290 - 0x0260)
class UUI_Inventory_ItemToolTip_Row_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Txt_Name;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Rarity;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Name_0;                                            // 0x0278(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_UI_Inventory_ItemToolTip_Row(int32 EntryPoint);
	void Init(EN_ItemRarity Rarity);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Inventory_ItemToolTip_Row_C">();
	}
	static class UUI_Inventory_ItemToolTip_Row_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Inventory_ItemToolTip_Row_C>();
	}
};
static_assert(alignof(UUI_Inventory_ItemToolTip_Row_C) == 0x000008, "Wrong alignment on UUI_Inventory_ItemToolTip_Row_C");
static_assert(sizeof(UUI_Inventory_ItemToolTip_Row_C) == 0x000290, "Wrong size on UUI_Inventory_ItemToolTip_Row_C");
static_assert(offsetof(UUI_Inventory_ItemToolTip_Row_C, UberGraphFrame) == 0x000260, "Member 'UUI_Inventory_ItemToolTip_Row_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Inventory_ItemToolTip_Row_C, Txt_Name) == 0x000268, "Member 'UUI_Inventory_ItemToolTip_Row_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UUI_Inventory_ItemToolTip_Row_C, Txt_Rarity) == 0x000270, "Member 'UUI_Inventory_ItemToolTip_Row_C::Txt_Rarity' has a wrong offset!");
static_assert(offsetof(UUI_Inventory_ItemToolTip_Row_C, Name_0) == 0x000278, "Member 'UUI_Inventory_ItemToolTip_Row_C::Name_0' has a wrong offset!");

}
