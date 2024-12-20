#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerStats_UI

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerStats_UI.PlayerStats_UI_C.ExecuteUbergraph_PlayerStats_UI
// 0x0028 (0x0028 - 0x0000)
struct PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerById_PlayerState;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMP_GameMode_C*                         K2Node_DynamicCast_AsMP_Game_Mode;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetKickButtonVisibility_ReturnValue;      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI) == 0x000008, "Wrong alignment on PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI");
static_assert(sizeof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI) == 0x000028, "Wrong size on PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI");
static_assert(offsetof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI, EntryPoint) == 0x000000, "Member 'PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI, CallFunc_GetPlayerById_PlayerState) == 0x000008, "Member 'PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI::CallFunc_GetPlayerById_PlayerState' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI, CallFunc_GetGameMode_ReturnValue) == 0x000010, "Member 'PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI, K2Node_DynamicCast_AsMP_Game_Mode) == 0x000018, "Member 'PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI::K2Node_DynamicCast_AsMP_Game_Mode' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI, CallFunc_GetKickButtonVisibility_ReturnValue) == 0x000021, "Member 'PlayerStats_UI_C_ExecuteUbergraph_PlayerStats_UI::CallFunc_GetKickButtonVisibility_ReturnValue' has a wrong offset!");

// Function PlayerStats_UI.PlayerStats_UI_C.Update Killed
// 0x0160 (0x0160 - 0x0000)
struct PlayerStats_UI_C_Update_Killed final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0028(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0050(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00D8(0x0088)()
};
static_assert(alignof(PlayerStats_UI_C_Update_Killed) == 0x000008, "Wrong alignment on PlayerStats_UI_C_Update_Killed");
static_assert(sizeof(PlayerStats_UI_C_Update_Killed) == 0x000160, "Wrong size on PlayerStats_UI_C_Update_Killed");
static_assert(offsetof(PlayerStats_UI_C_Update_Killed, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'PlayerStats_UI_C_Update_Killed::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_Update_Killed, K2Node_MakeStruct_SlateColor_1) == 0x000028, "Member 'PlayerStats_UI_C_Update_Killed::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_Update_Killed, K2Node_MakeStruct_SlateBrush) == 0x000050, "Member 'PlayerStats_UI_C_Update_Killed::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_Update_Killed, K2Node_MakeStruct_SlateBrush_1) == 0x0000D8, "Member 'PlayerStats_UI_C_Update_Killed::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");

// Function PlayerStats_UI.PlayerStats_UI_C.GetPingText
// 0x0030 (0x0030 - 0x0000)
struct PlayerStats_UI_C_GetPingText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_ByteToText_ReturnValue;              // 0x0018(0x0018)()
};
static_assert(alignof(PlayerStats_UI_C_GetPingText) == 0x000008, "Wrong alignment on PlayerStats_UI_C_GetPingText");
static_assert(sizeof(PlayerStats_UI_C_GetPingText) == 0x000030, "Wrong size on PlayerStats_UI_C_GetPingText");
static_assert(offsetof(PlayerStats_UI_C_GetPingText, ReturnValue) == 0x000000, "Member 'PlayerStats_UI_C_GetPingText::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPingText, CallFunc_Conv_ByteToText_ReturnValue) == 0x000018, "Member 'PlayerStats_UI_C_GetPingText::CallFunc_Conv_ByteToText_ReturnValue' has a wrong offset!");

// Function PlayerStats_UI.PlayerStats_UI_C.GetKickButtonVisibility
// 0x0020 (0x0020 - 0x0000)
struct PlayerStats_UI_C_GetKickButtonVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           CallFunc_GetPlayerById_PlayerState;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerStats_UI_C_GetKickButtonVisibility) == 0x000008, "Wrong alignment on PlayerStats_UI_C_GetKickButtonVisibility");
static_assert(sizeof(PlayerStats_UI_C_GetKickButtonVisibility) == 0x000020, "Wrong size on PlayerStats_UI_C_GetKickButtonVisibility");
static_assert(offsetof(PlayerStats_UI_C_GetKickButtonVisibility, ReturnValue) == 0x000000, "Member 'PlayerStats_UI_C_GetKickButtonVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetKickButtonVisibility, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'PlayerStats_UI_C_GetKickButtonVisibility::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetKickButtonVisibility, CallFunc_GetPlayerById_PlayerState) == 0x000010, "Member 'PlayerStats_UI_C_GetKickButtonVisibility::CallFunc_GetPlayerById_PlayerState' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetKickButtonVisibility, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'PlayerStats_UI_C_GetKickButtonVisibility::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetKickButtonVisibility, CallFunc_IsServer_ReturnValue) == 0x000019, "Member 'PlayerStats_UI_C_GetKickButtonVisibility::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function PlayerStats_UI.PlayerStats_UI_C.GetPlayerById
// 0x0038 (0x0038 - 0x0000)
struct PlayerStats_UI_C_GetPlayerById final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerStats_UI_C_GetPlayerById) == 0x000008, "Wrong alignment on PlayerStats_UI_C_GetPlayerById");
static_assert(sizeof(PlayerStats_UI_C_GetPlayerById) == 0x000038, "Wrong size on PlayerStats_UI_C_GetPlayerById");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, PlayerState) == 0x000000, "Member 'PlayerStats_UI_C_GetPlayerById::PlayerState' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, Temp_int_Array_Index_Variable) == 0x000008, "Member 'PlayerStats_UI_C_GetPlayerById::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'PlayerStats_UI_C_GetPlayerById::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'PlayerStats_UI_C_GetPlayerById::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'PlayerStats_UI_C_GetPlayerById::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'PlayerStats_UI_C_GetPlayerById::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, CallFunc_Array_Get_Item) == 0x000028, "Member 'PlayerStats_UI_C_GetPlayerById::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'PlayerStats_UI_C_GetPlayerById::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerStats_UI_C_GetPlayerById, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000031, "Member 'PlayerStats_UI_C_GetPlayerById::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

