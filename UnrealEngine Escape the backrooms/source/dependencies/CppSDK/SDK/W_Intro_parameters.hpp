#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Intro

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function W_Intro.W_Intro_C.ExecuteUbergraph_W_Intro
// 0x0020 (0x0020 - 0x0000)
struct W_Intro_C_ExecuteUbergraph_W_Intro final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_NormalClose_;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Intro_C_ExecuteUbergraph_W_Intro) == 0x000008, "Wrong alignment on W_Intro_C_ExecuteUbergraph_W_Intro");
static_assert(sizeof(W_Intro_C_ExecuteUbergraph_W_Intro) == 0x000020, "Wrong size on W_Intro_C_ExecuteUbergraph_W_Intro");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, EntryPoint) == 0x000000, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_IsHeadMountedDisplayEnabled_ReturnValue) == 0x000004, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_IsHeadMountedDisplayEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, K2Node_Event_IsDesignTime) == 0x000006, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, K2Node_Event_NormalClose_) == 0x000007, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::K2Node_Event_NormalClose_' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1) == 0x000019, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001A, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Intro_C_ExecuteUbergraph_W_Intro, CallFunc_BooleanAND_ReturnValue_1) == 0x00001B, "Member 'W_Intro_C_ExecuteUbergraph_W_Intro::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function W_Intro.W_Intro_C.CloseIntro
// 0x0001 (0x0001 - 0x0000)
struct W_Intro_C_CloseIntro final
{
public:
	bool                                          NormalClose_;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Intro_C_CloseIntro) == 0x000001, "Wrong alignment on W_Intro_C_CloseIntro");
static_assert(sizeof(W_Intro_C_CloseIntro) == 0x000001, "Wrong size on W_Intro_C_CloseIntro");
static_assert(offsetof(W_Intro_C_CloseIntro, NormalClose_) == 0x000000, "Member 'W_Intro_C_CloseIntro::NormalClose_' has a wrong offset!");

// Function W_Intro.W_Intro_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Intro_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Intro_C_PreConstruct) == 0x000001, "Wrong alignment on W_Intro_C_PreConstruct");
static_assert(sizeof(W_Intro_C_PreConstruct) == 0x000001, "Wrong size on W_Intro_C_PreConstruct");
static_assert(offsetof(W_Intro_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Intro_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Intro.W_Intro_C.RemoveToolTipsInGame
// 0x0028 (0x0028 - 0x0000)
struct W_Intro_C_RemoveToolTipsInGame final
{
public:
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0010(0x0018)()
};
static_assert(alignof(W_Intro_C_RemoveToolTipsInGame) == 0x000008, "Wrong alignment on W_Intro_C_RemoveToolTipsInGame");
static_assert(sizeof(W_Intro_C_RemoveToolTipsInGame) == 0x000028, "Wrong size on W_Intro_C_RemoveToolTipsInGame");
static_assert(offsetof(W_Intro_C_RemoveToolTipsInGame, K2Node_MakeArray_Array) == 0x000000, "Member 'W_Intro_C_RemoveToolTipsInGame::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_Intro_C_RemoveToolTipsInGame, CallFunc_Format_ReturnValue) == 0x000010, "Member 'W_Intro_C_RemoveToolTipsInGame::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function W_Intro.W_Intro_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct W_Intro_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(W_Intro_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on W_Intro_C_OnMouseButtonDown");
static_assert(sizeof(W_Intro_C_OnMouseButtonDown) == 0x000218, "Wrong size on W_Intro_C_OnMouseButtonDown");
static_assert(offsetof(W_Intro_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'W_Intro_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Intro_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'W_Intro_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(W_Intro_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'W_Intro_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'W_Intro_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function W_Intro.W_Intro_C.OnKeyUp
// 0x01E0 (0x01E0 - 0x0000)
struct W_Intro_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0128(0x00B8)()
};
static_assert(alignof(W_Intro_C_OnKeyUp) == 0x000008, "Wrong alignment on W_Intro_C_OnKeyUp");
static_assert(sizeof(W_Intro_C_OnKeyUp) == 0x0001E0, "Wrong size on W_Intro_C_OnKeyUp");
static_assert(offsetof(W_Intro_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'W_Intro_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Intro_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'W_Intro_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(W_Intro_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'W_Intro_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000128, "Member 'W_Intro_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function W_Intro.W_Intro_C.CheckFont
// 0x00C8 (0x00C8 - 0x0000)
struct W_Intro_C_CheckFont final
{
public:
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0000(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo_1;                 // 0x0058(0x0058)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentCulture_ReturnValue;            // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StriStri_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Intro_C_CheckFont) == 0x000008, "Wrong alignment on W_Intro_C_CheckFont");
static_assert(sizeof(W_Intro_C_CheckFont) == 0x0000C8, "Wrong size on W_Intro_C_CheckFont");
static_assert(offsetof(W_Intro_C_CheckFont, K2Node_MakeStruct_SlateFontInfo) == 0x000000, "Member 'W_Intro_C_CheckFont::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(W_Intro_C_CheckFont, K2Node_MakeStruct_SlateFontInfo_1) == 0x000058, "Member 'W_Intro_C_CheckFont::K2Node_MakeStruct_SlateFontInfo_1' has a wrong offset!");
static_assert(offsetof(W_Intro_C_CheckFont, CallFunc_GetCurrentCulture_ReturnValue) == 0x0000B0, "Member 'W_Intro_C_CheckFont::CallFunc_GetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_CheckFont, CallFunc_NotEqual_StriStri_ReturnValue) == 0x0000C0, "Member 'W_Intro_C_CheckFont::CallFunc_NotEqual_StriStri_ReturnValue' has a wrong offset!");

// Function W_Intro.W_Intro_C.Get_TextBlock_Skip_1_Visibility_0
// 0x0003 (0x0003 - 0x0000)
struct W_Intro_C_Get_TextBlock_Skip_1_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_Intro_C_Get_TextBlock_Skip_1_Visibility_0) == 0x000001, "Wrong alignment on W_Intro_C_Get_TextBlock_Skip_1_Visibility_0");
static_assert(sizeof(W_Intro_C_Get_TextBlock_Skip_1_Visibility_0) == 0x000003, "Wrong size on W_Intro_C_Get_TextBlock_Skip_1_Visibility_0");
static_assert(offsetof(W_Intro_C_Get_TextBlock_Skip_1_Visibility_0, ReturnValue) == 0x000000, "Member 'W_Intro_C_Get_TextBlock_Skip_1_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_Get_TextBlock_Skip_1_Visibility_0, CallFunc_IsHeadMountedDisplayEnabled_ReturnValue) == 0x000001, "Member 'W_Intro_C_Get_TextBlock_Skip_1_Visibility_0::CallFunc_IsHeadMountedDisplayEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Intro_C_Get_TextBlock_Skip_1_Visibility_0, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'W_Intro_C_Get_TextBlock_Skip_1_Visibility_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
