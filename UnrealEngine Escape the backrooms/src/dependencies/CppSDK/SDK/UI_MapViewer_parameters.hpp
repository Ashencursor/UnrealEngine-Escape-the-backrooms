#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MapViewer

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "S_LevelStats_structs.hpp"
#include "S_HubLevels_structs.hpp"
#include "S_LevelIntel_structs.hpp"


namespace SDK::Params
{

// Function UI_MapViewer.UI_MapViewer_C.ExecuteUbergraph_UI_MapViewer
// 0x0180 (0x0180 - 0x0000)
struct UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMP_GameState_C*                        K2Node_DynamicCast_AsMP_Game_State;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_HubLevels                           CallFunc_Map_Find_Value;                           // 0x0058(0x0010)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_LevelStats                          CallFunc_Array_Get_Item;                           // 0x0070(0x0038)(ContainsInstancedReference, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTime_ReturnValue;                      // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_CustomEvent_Texture;                        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_LevelIntel                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0118(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0168(0x0018)()
};
static_assert(alignof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer) == 0x000008, "Wrong alignment on UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer");
static_assert(sizeof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer) == 0x000180, "Wrong size on UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, EntryPoint) == 0x000000, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, Temp_int_Array_Index_Variable) == 0x000030, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_GetGameState_ReturnValue) == 0x000040, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, K2Node_DynamicCast_AsMP_Game_State) == 0x000048, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::K2Node_DynamicCast_AsMP_Game_State' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Map_Find_Value) == 0x000058, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Map_Find_ReturnValue) == 0x000068, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Array_Get_Item) == 0x000070, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_GetTime_ReturnValue) == 0x0000A8, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_GetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C8, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Array_Length_ReturnValue) == 0x0000E8, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, K2Node_CustomEvent_Texture) == 0x0000F0, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Replace_ReturnValue) == 0x000100, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Conv_StringToName_ReturnValue) == 0x000110, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_GetDataTableRowFromName_OutRow) == 0x000118, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000160, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000168, "Member 'UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function UI_MapViewer.UI_MapViewer_C.SetImage
// 0x0008 (0x0008 - 0x0000)
struct UI_MapViewer_C_SetImage final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MapViewer_C_SetImage) == 0x000008, "Wrong alignment on UI_MapViewer_C_SetImage");
static_assert(sizeof(UI_MapViewer_C_SetImage) == 0x000008, "Wrong size on UI_MapViewer_C_SetImage");
static_assert(offsetof(UI_MapViewer_C_SetImage, Texture) == 0x000000, "Member 'UI_MapViewer_C_SetImage::Texture' has a wrong offset!");

// Function UI_MapViewer.UI_MapViewer_C.GetTime
// 0x0090 (0x0090 - 0x0000)
struct UI_MapViewer_C_GetTime final
{
public:
	float                                         Time_0;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_RoundedTime_TimeOut;                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MapViewer_C_GetTime) == 0x000008, "Wrong alignment on UI_MapViewer_C_GetTime");
static_assert(sizeof(UI_MapViewer_C_GetTime) == 0x000090, "Wrong size on UI_MapViewer_C_GetTime");
static_assert(offsetof(UI_MapViewer_C_GetTime, Time_0) == 0x000000, "Member 'UI_MapViewer_C_GetTime::Time_0' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, ReturnValue) == 0x000008, "Member 'UI_MapViewer_C_GetTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_RoundedTime_TimeOut) == 0x000018, "Member 'UI_MapViewer_C_GetTime::CallFunc_RoundedTime_TimeOut' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_Split_LeftS) == 0x000028, "Member 'UI_MapViewer_C_GetTime::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_Split_RightS) == 0x000038, "Member 'UI_MapViewer_C_GetTime::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_Split_ReturnValue) == 0x000048, "Member 'UI_MapViewer_C_GetTime::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'UI_MapViewer_C_GetTime::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_GetSubstring_ReturnValue) == 0x000060, "Member 'UI_MapViewer_C_GetTime::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000070, "Member 'UI_MapViewer_C_GetTime::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_GetTime, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000080, "Member 'UI_MapViewer_C_GetTime::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function UI_MapViewer.UI_MapViewer_C.RoundedTime
// 0x0038 (0x0038 - 0x0000)
struct UI_MapViewer_C_RoundedTime final
{
public:
	float                                         TimeIn;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Timeout;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MapViewer_C_RoundedTime) == 0x000008, "Wrong alignment on UI_MapViewer_C_RoundedTime");
static_assert(sizeof(UI_MapViewer_C_RoundedTime) == 0x000038, "Wrong size on UI_MapViewer_C_RoundedTime");
static_assert(offsetof(UI_MapViewer_C_RoundedTime, TimeIn) == 0x000000, "Member 'UI_MapViewer_C_RoundedTime::TimeIn' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_RoundedTime, Timeout) == 0x000008, "Member 'UI_MapViewer_C_RoundedTime::Timeout' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_RoundedTime, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'UI_MapViewer_C_RoundedTime::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_RoundedTime, CallFunc_Round_ReturnValue) == 0x00001C, "Member 'UI_MapViewer_C_RoundedTime::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_RoundedTime, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'UI_MapViewer_C_RoundedTime::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_RoundedTime, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'UI_MapViewer_C_RoundedTime::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_RoundedTime, CallFunc_Conv_FloatToString_ReturnValue) == 0x000028, "Member 'UI_MapViewer_C_RoundedTime::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");

// Function UI_MapViewer.UI_MapViewer_C.CheckFont
// 0x0070 (0x0070 - 0x0000)
struct UI_MapViewer_C_CheckFont final
{
public:
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0000(0x0058)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentCulture_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MapViewer_C_CheckFont) == 0x000008, "Wrong alignment on UI_MapViewer_C_CheckFont");
static_assert(sizeof(UI_MapViewer_C_CheckFont) == 0x000070, "Wrong size on UI_MapViewer_C_CheckFont");
static_assert(offsetof(UI_MapViewer_C_CheckFont, K2Node_MakeStruct_SlateFontInfo) == 0x000000, "Member 'UI_MapViewer_C_CheckFont::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_CheckFont, CallFunc_GetCurrentCulture_ReturnValue) == 0x000058, "Member 'UI_MapViewer_C_CheckFont::CallFunc_GetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MapViewer_C_CheckFont, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000068, "Member 'UI_MapViewer_C_CheckFont::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

}

