#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Inventory_SlotPanel

#include "Basic.hpp"

#include "ST_Item_structs.hpp"


namespace SDK::Params
{

// Function UI_Inventory_SlotPanel.UI_Inventory_SlotPanel_C.ExecuteUbergraph_UI_Inventory_SlotPanel
// 0x00C0 (0x00C0 - 0x0000)
struct UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Item;                           // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_Item                               CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x00A0)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel) == 0x000010, "Wrong alignment on UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel");
static_assert(sizeof(UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel) == 0x0000C0, "Wrong size on UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel");
static_assert(offsetof(UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel, EntryPoint) == 0x000000, "Member 'UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel, K2Node_CustomEvent_Item) == 0x000004, "Member 'UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B0, "Member 'UI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function UI_Inventory_SlotPanel.UI_Inventory_SlotPanel_C.SetIcon
// 0x0008 (0x0008 - 0x0000)
struct UI_Inventory_SlotPanel_C_SetIcon final
{
public:
	class FName                                   Item_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Inventory_SlotPanel_C_SetIcon) == 0x000004, "Wrong alignment on UI_Inventory_SlotPanel_C_SetIcon");
static_assert(sizeof(UI_Inventory_SlotPanel_C_SetIcon) == 0x000008, "Wrong size on UI_Inventory_SlotPanel_C_SetIcon");
static_assert(offsetof(UI_Inventory_SlotPanel_C_SetIcon, Item_0) == 0x000000, "Member 'UI_Inventory_SlotPanel_C_SetIcon::Item_0' has a wrong offset!");

}

