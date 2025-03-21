#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SignIn

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_SignIn.UI_SignIn_C.ExecuteUbergraph_UI_SignIn
// 0x0068 (0x0068 - 0x0000)
struct UI_SignIn_C_ExecuteUbergraph_UI_SignIn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	bool                                          CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Computer_C*                         K2Node_DynamicCast_AsBP_Computer;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Desktop_C*                          CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn) == 0x000008, "Wrong alignment on UI_SignIn_C_ExecuteUbergraph_UI_SignIn");
static_assert(sizeof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn) == 0x000068, "Wrong size on UI_SignIn_C_ExecuteUbergraph_UI_SignIn");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, EntryPoint) == 0x000000, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue) == 0x000020, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000030, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_GetPlayerPawn_ReturnValue) == 0x000038, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000040, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, K2Node_DynamicCast_AsBP_Computer) == 0x000048, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::K2Node_DynamicCast_AsBP_Computer' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SignIn_C_ExecuteUbergraph_UI_SignIn, CallFunc_Create_ReturnValue) == 0x000060, "Member 'UI_SignIn_C_ExecuteUbergraph_UI_SignIn::CallFunc_Create_ReturnValue' has a wrong offset!");

}

