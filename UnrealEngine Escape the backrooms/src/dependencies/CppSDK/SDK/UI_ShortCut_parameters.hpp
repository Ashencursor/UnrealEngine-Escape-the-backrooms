#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShortCut

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ShortCut.UI_ShortCut_C.ExecuteUbergraph_UI_ShortCut
// 0x00E8 (0x00E8 - 0x0000)
struct UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0058)(HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBox*                               K2Node_DynamicCast_AsWrap_Box;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ShortCut_C*                         K2Node_DynamicCast_AsUI_Short_Cut;                 // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBI_ComputersEvents_C> K2Node_DynamicCast_AsBI_Computers_Events;          // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentCulture_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut) == 0x000008, "Wrong alignment on UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut");
static_assert(sizeof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut) == 0x0000E8, "Wrong size on UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, EntryPoint) == 0x000000, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000060, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, Temp_bool_Has_Been_Initd_Variable) == 0x000061, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_GetParent_ReturnValue) == 0x000070, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, K2Node_DynamicCast_AsWrap_Box) == 0x000078, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::K2Node_DynamicCast_AsWrap_Box' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, Temp_bool_IsClosed_Variable) == 0x000081, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_GetAllChildren_ReturnValue) == 0x000088, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_Array_Get_Item) == 0x000098, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, K2Node_DynamicCast_AsUI_Short_Cut) == 0x0000A8, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::K2Node_DynamicCast_AsUI_Short_Cut' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_Less_IntInt_ReturnValue) == 0x0000B1, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, K2Node_DynamicCast_AsBI_Computers_Events) == 0x0000B8, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::K2Node_DynamicCast_AsBI_Computers_Events' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_Not_PreBool_ReturnValue) == 0x0000C9, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_GetCurrentCulture_ReturnValue) == 0x0000D0, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_GetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000E0, "Member 'UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

}
