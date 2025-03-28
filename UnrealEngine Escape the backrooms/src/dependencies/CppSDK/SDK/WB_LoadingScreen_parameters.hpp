#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_LoadingScreen

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_LoadingScreen.WB_LoadingScreen_C.ExecuteUbergraph_WB_LoadingScreen
// 0x0088 (0x0088 - 0x0000)
struct WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0058)(HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentCulture_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen) == 0x000008, "Wrong alignment on WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen");
static_assert(sizeof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen) == 0x000088, "Wrong size on WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen");
static_assert(offsetof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen, EntryPoint) == 0x000000, "Member 'WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen, K2Node_Event_IsDesignTime) == 0x000060, "Member 'WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen, CallFunc_GetCurrentCulture_ReturnValue) == 0x000068, "Member 'WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen::CallFunc_GetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000080, "Member 'WB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WB_LoadingScreen.WB_LoadingScreen_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_LoadingScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_LoadingScreen_C_PreConstruct) == 0x000001, "Wrong alignment on WB_LoadingScreen_C_PreConstruct");
static_assert(sizeof(WB_LoadingScreen_C_PreConstruct) == 0x000001, "Wrong size on WB_LoadingScreen_C_PreConstruct");
static_assert(offsetof(WB_LoadingScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_LoadingScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

