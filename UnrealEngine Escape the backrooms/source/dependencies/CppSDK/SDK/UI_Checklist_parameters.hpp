#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Checklist

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Checklist.UI_Checklist_C.ExecuteUbergraph_UI_Checklist
// 0x0018 (0x0018 - 0x0000)
struct UI_Checklist_C_ExecuteUbergraph_UI_Checklist final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Checklist_Item_C*                   K2Node_CustomEvent_ChecklistEntry;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Checklist_C_ExecuteUbergraph_UI_Checklist) == 0x000008, "Wrong alignment on UI_Checklist_C_ExecuteUbergraph_UI_Checklist");
static_assert(sizeof(UI_Checklist_C_ExecuteUbergraph_UI_Checklist) == 0x000018, "Wrong size on UI_Checklist_C_ExecuteUbergraph_UI_Checklist");
static_assert(offsetof(UI_Checklist_C_ExecuteUbergraph_UI_Checklist, EntryPoint) == 0x000000, "Member 'UI_Checklist_C_ExecuteUbergraph_UI_Checklist::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_ExecuteUbergraph_UI_Checklist, K2Node_CustomEvent_ChecklistEntry) == 0x000008, "Member 'UI_Checklist_C_ExecuteUbergraph_UI_Checklist::K2Node_CustomEvent_ChecklistEntry' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_ExecuteUbergraph_UI_Checklist, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'UI_Checklist_C_ExecuteUbergraph_UI_Checklist::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function UI_Checklist.UI_Checklist_C.AddItem
// 0x0008 (0x0008 - 0x0000)
struct UI_Checklist_C_AddItem final
{
public:
	class UUI_Checklist_Item_C*                   ChecklistEntry;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Checklist_C_AddItem) == 0x000008, "Wrong alignment on UI_Checklist_C_AddItem");
static_assert(sizeof(UI_Checklist_C_AddItem) == 0x000008, "Wrong size on UI_Checklist_C_AddItem");
static_assert(offsetof(UI_Checklist_C_AddItem, ChecklistEntry) == 0x000000, "Member 'UI_Checklist_C_AddItem::ChecklistEntry' has a wrong offset!");

// Function UI_Checklist.UI_Checklist_C.GetSurvivorsText
// 0x0090 (0x0090 - 0x0000)
struct UI_Checklist_C_GetSurvivorsText final
{
public:
	class UBP_New_SaveGame_C*                     SaveGame;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Checklist_Item_C*                   CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_New_SaveGame_C*                     CallFunc_CreateSaveGameObject_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_Map_Find_Value;                           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_New_SaveGame_C*                     K2Node_DynamicCast_AsBP_New_Save_Game;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Checklist_C_GetSurvivorsText) == 0x000008, "Wrong alignment on UI_Checklist_C_GetSurvivorsText");
static_assert(sizeof(UI_Checklist_C_GetSurvivorsText) == 0x000090, "Wrong size on UI_Checklist_C_GetSurvivorsText");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, SaveGame) == 0x000000, "Member 'UI_Checklist_C_GetSurvivorsText::SaveGame' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UI_Checklist_C_GetSurvivorsText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UI_Checklist_C_GetSurvivorsText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_CreateSaveGameObject_ReturnValue) == 0x000020, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_CreateSaveGameObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Map_Keys_Keys) == 0x000028, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_DoesSaveGameExist_ReturnValue) == 0x000038, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_DoesSaveGameExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Array_Get_Item) == 0x000040, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Map_Find_Value) == 0x000068, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Map_Find_ReturnValue) == 0x000069, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000070, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'UI_Checklist_C_GetSurvivorsText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, K2Node_DynamicCast_AsBP_New_Save_Game) == 0x000080, "Member 'UI_Checklist_C_GetSurvivorsText::K2Node_DynamicCast_AsBP_New_Save_Game' has a wrong offset!");
static_assert(offsetof(UI_Checklist_C_GetSurvivorsText, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'UI_Checklist_C_GetSurvivorsText::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
