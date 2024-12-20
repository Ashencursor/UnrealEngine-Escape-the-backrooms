#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DroppedItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Backrooms_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ST_Item_structs.hpp"
#include "EN_ItemRarity_structs.hpp"


namespace SDK::Params
{

// Function BP_DroppedItem.BP_DroppedItem_C.ExecuteUbergraph_BP_DroppedItem
// 0x01A0 (0x01A0 - 0x0000)
struct BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                   K2Node_DynamicCast_AsBP_My_Game_Instance;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUD_DroppedItem_C*                     K2Node_DynamicCast_AsHUD_Dropped_Item;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_4;                            // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0xC];                                       // 0x0084(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_Item                               CallFunc_GetDataTableRowFromName_OutRow;           // 0x0090(0x00A0)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_ItemRarity                                 Temp_byte_Variable;                                // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MyGameInstance_C*                   K2Node_DynamicCast_AsBP_My_Game_Instance_1;        // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0154(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0168(0x0028)()
	EEventType                                    K2Node_CustomEvent_EventType;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Enable;                               // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem) == 0x000010, "Wrong alignment on BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem");
static_assert(sizeof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem) == 0x0001A0, "Wrong size on BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, EntryPoint) == 0x000000, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, Temp_struct_Variable) == 0x000010, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_DynamicCast_AsBP_My_Game_Instance) == 0x000020, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_DynamicCast_AsBP_My_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, Temp_struct_Variable_1) == 0x00002C, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00003C, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, Temp_struct_Variable_2) == 0x000040, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, CallFunc_GetWidget_ReturnValue) == 0x000050, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_DynamicCast_AsHUD_Dropped_Item) == 0x000058, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_DynamicCast_AsHUD_Dropped_Item' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, Temp_struct_Variable_3) == 0x000064, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, Temp_struct_Variable_4) == 0x000074, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, CallFunc_GetDataTableRowFromName_OutRow) == 0x000090, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000130, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, CallFunc_GetGameInstance_ReturnValue_1) == 0x000138, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, Temp_byte_Variable) == 0x000140, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_DynamicCast_AsBP_My_Game_Instance_1) == 0x000148, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_DynamicCast_AsBP_My_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_DynamicCast_bSuccess_2) == 0x000150, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_Select_Default) == 0x000154, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000164, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_MakeStruct_SlateColor) == 0x000168, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_CustomEvent_EventType) == 0x000190, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_CustomEvent_EventType' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem, K2Node_Event_Enable) == 0x000191, "Member 'BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem::K2Node_Event_Enable' has a wrong offset!");

// Function BP_DroppedItem.BP_DroppedItem_C.ToggleEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_DroppedItem_C_ToggleEvent final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DroppedItem_C_ToggleEvent) == 0x000001, "Wrong alignment on BP_DroppedItem_C_ToggleEvent");
static_assert(sizeof(BP_DroppedItem_C_ToggleEvent) == 0x000001, "Wrong size on BP_DroppedItem_C_ToggleEvent");
static_assert(offsetof(BP_DroppedItem_C_ToggleEvent, Enable) == 0x000000, "Member 'BP_DroppedItem_C_ToggleEvent::Enable' has a wrong offset!");

// Function BP_DroppedItem.BP_DroppedItem_C.OnEventLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_DroppedItem_C_OnEventLoaded final
{
public:
	EEventType                                    EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DroppedItem_C_OnEventLoaded) == 0x000001, "Wrong alignment on BP_DroppedItem_C_OnEventLoaded");
static_assert(sizeof(BP_DroppedItem_C_OnEventLoaded) == 0x000001, "Wrong size on BP_DroppedItem_C_OnEventLoaded");
static_assert(offsetof(BP_DroppedItem_C_OnEventLoaded, EventType) == 0x000000, "Member 'BP_DroppedItem_C_OnEventLoaded::EventType' has a wrong offset!");

}

