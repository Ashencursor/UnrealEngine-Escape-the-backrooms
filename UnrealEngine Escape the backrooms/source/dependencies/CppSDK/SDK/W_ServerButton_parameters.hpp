#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ServerButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_ServerButton.W_ServerButton_C.ExecuteUbergraph_W_ServerButton
// 0x02F8 (0x02F8 - 0x0000)
struct W_ServerButton_C_ExecuteUbergraph_W_ServerButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0058(0x0018)()
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A6[0x2];                                       // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00A8(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x00E0(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0150(0x0070)(ConstParm)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetServerName_ReturnValue;                // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxPlayers_ReturnValue;                // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01F8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0238(0x0018)()
	int32                                         CallFunc_GetCurrentPlayers_ReturnValue;            // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0258(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0298(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02A8(0x0018)()
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                   K2Node_DynamicCast_AsBP_My_Game_Instance;          // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x3];                                      // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                   K2Node_DynamicCast_AsBP_My_Game_Instance_1;        // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton) == 0x000008, "Wrong alignment on W_ServerButton_C_ExecuteUbergraph_W_ServerButton");
static_assert(sizeof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton) == 0x0002F8, "Wrong size on W_ServerButton_C_ExecuteUbergraph_W_ServerButton");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, EntryPoint) == 0x000000, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_MakeArray_Array) == 0x000048, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Format_ReturnValue) == 0x000058, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Add_FloatFloat_ReturnValue) == 0x000070, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000074, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_FClamp_ReturnValue) == 0x000078, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_FClamp_ReturnValue_1) == 0x00007C, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_MakeStruct_Margin) == 0x000080, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000090, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_MakeStruct_Margin_1) == 0x000094, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000A4, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_Event_IsDesignTime) == 0x0000A5, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_Event_MyGeometry) == 0x0000A8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_Event_MouseEvent_1) == 0x0000E0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_Event_MouseEvent) == 0x000150, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_DynamicCast_AsHorizontal_Box_Slot) == 0x0001C0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_DynamicCast_AsHorizontal_Box_Slot' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_DynamicCast_bSuccess) == 0x0001C8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_GetServerName_ReturnValue) == 0x0001D0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_GetServerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_GetMaxPlayers_ReturnValue) == 0x0001E0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_GetMaxPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Concat_StrStr_ReturnValue) == 0x0001E8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001F8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000238, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_GetCurrentPlayers_ReturnValue) == 0x000250, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_GetCurrentPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_MakeStruct_FormatArgumentData_2) == 0x000258, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_MakeArray_Array_1) == 0x000298, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Format_ReturnValue_1) == 0x0002A8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_GetGameInstance_ReturnValue) == 0x0002C0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_DynamicCast_AsBP_My_Game_Instance) == 0x0002C8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_DynamicCast_AsBP_My_Game_Instance' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_DynamicCast_bSuccess_1) == 0x0002D0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, Temp_int_Variable) == 0x0002D4, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Greater_IntInt_ReturnValue) == 0x0002D8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_Add_IntInt_ReturnValue) == 0x0002DC, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, CallFunc_GetGameInstance_ReturnValue_1) == 0x0002E0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_DynamicCast_AsBP_My_Game_Instance_1) == 0x0002E8, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_DynamicCast_AsBP_My_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_ExecuteUbergraph_W_ServerButton, K2Node_DynamicCast_bSuccess_2) == 0x0002F0, "Member 'W_ServerButton_C_ExecuteUbergraph_W_ServerButton::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function W_ServerButton.W_ServerButton_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct W_ServerButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_ServerButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on W_ServerButton_C_OnMouseLeave");
static_assert(sizeof(W_ServerButton_C_OnMouseLeave) == 0x000070, "Wrong size on W_ServerButton_C_OnMouseLeave");
static_assert(offsetof(W_ServerButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'W_ServerButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function W_ServerButton.W_ServerButton_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct W_ServerButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_ServerButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on W_ServerButton_C_OnMouseEnter");
static_assert(sizeof(W_ServerButton_C_OnMouseEnter) == 0x0000A8, "Wrong size on W_ServerButton_C_OnMouseEnter");
static_assert(offsetof(W_ServerButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'W_ServerButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'W_ServerButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function W_ServerButton.W_ServerButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_ServerButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_ServerButton_C_PreConstruct) == 0x000001, "Wrong alignment on W_ServerButton_C_PreConstruct");
static_assert(sizeof(W_ServerButton_C_PreConstruct) == 0x000001, "Wrong size on W_ServerButton_C_PreConstruct");
static_assert(offsetof(W_ServerButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_ServerButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_ServerButton.W_ServerButton_C.CustomNavigation_Left
// 0x0010 (0x0010 - 0x0000)
struct W_ServerButton_C_CustomNavigation_Left final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ServerButton_C_CustomNavigation_Left) == 0x000008, "Wrong alignment on W_ServerButton_C_CustomNavigation_Left");
static_assert(sizeof(W_ServerButton_C_CustomNavigation_Left) == 0x000010, "Wrong size on W_ServerButton_C_CustomNavigation_Left");
static_assert(offsetof(W_ServerButton_C_CustomNavigation_Left, Navigation_0) == 0x000000, "Member 'W_ServerButton_C_CustomNavigation_Left::Navigation_0' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_CustomNavigation_Left, ReturnValue) == 0x000008, "Member 'W_ServerButton_C_CustomNavigation_Left::ReturnValue' has a wrong offset!");

// Function W_ServerButton.W_ServerButton_C.CustomNavigation_Up
// 0x0010 (0x0010 - 0x0000)
struct W_ServerButton_C_CustomNavigation_Up final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ServerButton_C_CustomNavigation_Up) == 0x000008, "Wrong alignment on W_ServerButton_C_CustomNavigation_Up");
static_assert(sizeof(W_ServerButton_C_CustomNavigation_Up) == 0x000010, "Wrong size on W_ServerButton_C_CustomNavigation_Up");
static_assert(offsetof(W_ServerButton_C_CustomNavigation_Up, Navigation_0) == 0x000000, "Member 'W_ServerButton_C_CustomNavigation_Up::Navigation_0' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_CustomNavigation_Up, ReturnValue) == 0x000008, "Member 'W_ServerButton_C_CustomNavigation_Up::ReturnValue' has a wrong offset!");

// Function W_ServerButton.W_ServerButton_C.CustomNavigation_Down
// 0x0010 (0x0010 - 0x0000)
struct W_ServerButton_C_CustomNavigation_Down final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ServerButton_C_CustomNavigation_Down) == 0x000008, "Wrong alignment on W_ServerButton_C_CustomNavigation_Down");
static_assert(sizeof(W_ServerButton_C_CustomNavigation_Down) == 0x000010, "Wrong size on W_ServerButton_C_CustomNavigation_Down");
static_assert(offsetof(W_ServerButton_C_CustomNavigation_Down, Navigation_0) == 0x000000, "Member 'W_ServerButton_C_CustomNavigation_Down::Navigation_0' has a wrong offset!");
static_assert(offsetof(W_ServerButton_C_CustomNavigation_Down, ReturnValue) == 0x000008, "Member 'W_ServerButton_C_CustomNavigation_Down::ReturnValue' has a wrong offset!");

}
