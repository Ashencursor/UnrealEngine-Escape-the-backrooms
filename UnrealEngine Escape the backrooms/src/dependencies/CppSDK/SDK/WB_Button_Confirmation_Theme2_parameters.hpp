#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Button_Confirmation_Theme2

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.ExecuteUbergraph_WB_Button_Confirmation_Theme2
// 0x0008 (0x0008 - 0x0000)
struct WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2) == 0x000004, "Wrong alignment on WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2");
static_assert(sizeof(WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2) == 0x000008, "Wrong size on WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2, EntryPoint) == 0x000000, "Member 'WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_Button_Confirmation_Theme2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Button_Confirmation_Theme2_C_PreConstruct) == 0x000001, "Wrong alignment on WB_Button_Confirmation_Theme2_C_PreConstruct");
static_assert(sizeof(WB_Button_Confirmation_Theme2_C_PreConstruct) == 0x000001, "Wrong size on WB_Button_Confirmation_Theme2_C_PreConstruct");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_Button_Confirmation_Theme2_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Set_ButtonStyle
// 0x0460 (0x0460 - 0x0000)
struct WB_Button_Confirmation_Theme2_C_Set_ButtonStyle final
{
public:
	class UTexture2D*                             Normal_Image_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Hovered_Image_0;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Pressed_Image_0;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FontColor;                                         // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FSlateBrush                            CallFunc_Get_SlateBrush_SlateBrush;                // 0x0050(0x0088)()
	struct FSlateBrush                            CallFunc_Get_SlateBrush_SlateBrush_1;              // 0x00D8(0x0088)()
	struct FSlateBrush                            CallFunc_Get_SlateBrush_SlateBrush_2;              // 0x0160(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x01E8(0x0278)()
};
static_assert(alignof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle) == 0x000008, "Wrong alignment on WB_Button_Confirmation_Theme2_C_Set_ButtonStyle");
static_assert(sizeof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle) == 0x000460, "Wrong size on WB_Button_Confirmation_Theme2_C_Set_ButtonStyle");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, Normal_Image_0) == 0x000000, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::Normal_Image_0' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, Hovered_Image_0) == 0x000008, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::Hovered_Image_0' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, Pressed_Image_0) == 0x000010, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::Pressed_Image_0' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, FontColor) == 0x000018, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::FontColor' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, CallFunc_Get_SlateBrush_SlateBrush) == 0x000050, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::CallFunc_Get_SlateBrush_SlateBrush' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, CallFunc_Get_SlateBrush_SlateBrush_1) == 0x0000D8, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::CallFunc_Get_SlateBrush_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, CallFunc_Get_SlateBrush_SlateBrush_2) == 0x000160, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::CallFunc_Get_SlateBrush_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonStyle, K2Node_MakeStruct_ButtonStyle) == 0x0001E8, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonStyle::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Set_ButtonSize
// 0x0010 (0x0010 - 0x0000)
struct WB_Button_Confirmation_Theme2_C_Set_ButtonSize final
{
public:
	float                                         CallFunc_BreakVector2D_X;                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Button_Confirmation_Theme2_C_Set_ButtonSize) == 0x000004, "Wrong alignment on WB_Button_Confirmation_Theme2_C_Set_ButtonSize");
static_assert(sizeof(WB_Button_Confirmation_Theme2_C_Set_ButtonSize) == 0x000010, "Wrong size on WB_Button_Confirmation_Theme2_C_Set_ButtonSize");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonSize, CallFunc_BreakVector2D_X) == 0x000000, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonSize, CallFunc_BreakVector2D_Y) == 0x000004, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonSize, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonSize::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Set_ButtonSize, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00000C, "Member 'WB_Button_Confirmation_Theme2_C_Set_ButtonSize::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Get_SlateBrush
// 0x0130 (0x0130 - 0x0000)
struct WB_Button_Confirmation_Theme2_C_Get_SlateBrush final
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            SlateBrush;                                        // 0x0008(0x0088)(Parm, OutParm)
	int32                                         CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Blueprint_GetSizeY_ReturnValue;           // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00A8(0x0088)()
};
static_assert(alignof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush) == 0x000008, "Wrong alignment on WB_Button_Confirmation_Theme2_C_Get_SlateBrush");
static_assert(sizeof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush) == 0x000130, "Wrong size on WB_Button_Confirmation_Theme2_C_Get_SlateBrush");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, Image) == 0x000000, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::Image' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, SlateBrush) == 0x000008, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::SlateBrush' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, CallFunc_Blueprint_GetSizeX_ReturnValue) == 0x000090, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::CallFunc_Blueprint_GetSizeX_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, CallFunc_Blueprint_GetSizeY_ReturnValue) == 0x000094, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::CallFunc_Blueprint_GetSizeY_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000098, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00009C, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, CallFunc_MakeVector2D_ReturnValue) == 0x0000A0, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Button_Confirmation_Theme2_C_Get_SlateBrush, K2Node_MakeStruct_SlateBrush) == 0x0000A8, "Member 'WB_Button_Confirmation_Theme2_C_Get_SlateBrush::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

}
