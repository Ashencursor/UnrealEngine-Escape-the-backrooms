#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_HUD

#include "Basic.hpp"

#include "AdvancedSessions_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Lobby_HUD.Lobby_HUD_C.ExecuteUbergraph_Lobby_HUD
// 0x00A0 (0x00A0 - 0x0000)
struct Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_LaunchingGame_;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobby_GM_C*                            K2Node_DynamicCast_AsLobby_GM;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0068(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EBlueprintResultSwitch                        CallFunc_ShowInviteUI_Result;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD) == 0x000008, "Wrong alignment on Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD");
static_assert(sizeof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD) == 0x0000A0, "Wrong size on Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, EntryPoint) == 0x000000, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, Temp_int_Variable) == 0x000004, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, K2Node_CustomEvent_LaunchingGame_) == 0x000009, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::K2Node_CustomEvent_LaunchingGame_' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_IsServer_ReturnValue) == 0x000048, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_GetGameMode_ReturnValue) == 0x000050, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, K2Node_DynamicCast_AsLobby_GM) == 0x000058, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::K2Node_DynamicCast_AsLobby_GM' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_GetText_ReturnValue) == 0x000068, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_GetPlayerController_ReturnValue) == 0x000080, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_Conv_TextToString_ReturnValue) == 0x000088, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, CallFunc_ShowInviteUI_Result) == 0x000098, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::CallFunc_ShowInviteUI_Result' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD, K2Node_SwitchEnum_CmpSuccess) == 0x000099, "Member 'Lobby_HUD_C_ExecuteUbergraph_Lobby_HUD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Lobby_HUD.Lobby_HUD_C.Toggle_Launchevent
// 0x0001 (0x0001 - 0x0000)
struct Lobby_HUD_C_Toggle_Launchevent final
{
public:
	bool                                          LaunchingGame__0;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_HUD_C_Toggle_Launchevent) == 0x000001, "Wrong alignment on Lobby_HUD_C_Toggle_Launchevent");
static_assert(sizeof(Lobby_HUD_C_Toggle_Launchevent) == 0x000001, "Wrong size on Lobby_HUD_C_Toggle_Launchevent");
static_assert(offsetof(Lobby_HUD_C_Toggle_Launchevent, LaunchingGame__0) == 0x000000, "Member 'Lobby_HUD_C_Toggle_Launchevent::LaunchingGame__0' has a wrong offset!");

// Function Lobby_HUD.Lobby_HUD_C.Update_LobbyStatus_Indicator
// 0x0020 (0x0020 - 0x0000)
struct Lobby_HUD_C_Update_LobbyStatus_Indicator final
{
public:
	ESlateVisibility                              CircularThrobber_Visibility;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LobbyStatus_Text_0;                                // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Lobby_HUD_C_Update_LobbyStatus_Indicator) == 0x000008, "Wrong alignment on Lobby_HUD_C_Update_LobbyStatus_Indicator");
static_assert(sizeof(Lobby_HUD_C_Update_LobbyStatus_Indicator) == 0x000020, "Wrong size on Lobby_HUD_C_Update_LobbyStatus_Indicator");
static_assert(offsetof(Lobby_HUD_C_Update_LobbyStatus_Indicator, CircularThrobber_Visibility) == 0x000000, "Member 'Lobby_HUD_C_Update_LobbyStatus_Indicator::CircularThrobber_Visibility' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Update_LobbyStatus_Indicator, LobbyStatus_Text_0) == 0x000008, "Member 'Lobby_HUD_C_Update_LobbyStatus_Indicator::LobbyStatus_Text_0' has a wrong offset!");

// Function Lobby_HUD.Lobby_HUD_C.SetServerName
// 0x0028 (0x0028 - 0x0000)
struct Lobby_HUD_C_SetServerName final
{
public:
	class FString                                 ServerName;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(Lobby_HUD_C_SetServerName) == 0x000008, "Wrong alignment on Lobby_HUD_C_SetServerName");
static_assert(sizeof(Lobby_HUD_C_SetServerName) == 0x000028, "Wrong size on Lobby_HUD_C_SetServerName");
static_assert(offsetof(Lobby_HUD_C_SetServerName, ServerName) == 0x000000, "Member 'Lobby_HUD_C_SetServerName::ServerName' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_SetServerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'Lobby_HUD_C_SetServerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Lobby_HUD.Lobby_HUD_C.Init_Casts
// 0x0048 (0x0048 - 0x0000)
struct Lobby_HUD_C_Init_Casts final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobby_PlayerController_C*              K2Node_DynamicCast_AsLobby_Player_Controller;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobbyPS_C*                             K2Node_DynamicCast_AsLobby_PS;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobby_GS_C*                            K2Node_DynamicCast_AsLobby_GS;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_HUD_C_Init_Casts) == 0x000008, "Wrong alignment on Lobby_HUD_C_Init_Casts");
static_assert(sizeof(Lobby_HUD_C_Init_Casts) == 0x000048, "Wrong size on Lobby_HUD_C_Init_Casts");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'Lobby_HUD_C_Init_Casts::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'Lobby_HUD_C_Init_Casts::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, K2Node_DynamicCast_AsLobby_Player_Controller) == 0x000010, "Member 'Lobby_HUD_C_Init_Casts::K2Node_DynamicCast_AsLobby_Player_Controller' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Lobby_HUD_C_Init_Casts::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, K2Node_DynamicCast_AsLobby_PS) == 0x000020, "Member 'Lobby_HUD_C_Init_Casts::K2Node_DynamicCast_AsLobby_PS' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'Lobby_HUD_C_Init_Casts::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, CallFunc_GetGameState_ReturnValue) == 0x000030, "Member 'Lobby_HUD_C_Init_Casts::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, K2Node_DynamicCast_AsLobby_GS) == 0x000038, "Member 'Lobby_HUD_C_Init_Casts::K2Node_DynamicCast_AsLobby_GS' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_Init_Casts, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'Lobby_HUD_C_Init_Casts::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function Lobby_HUD.Lobby_HUD_C.SetServerCode
// 0x0028 (0x0028 - 0x0000)
struct Lobby_HUD_C_SetServerCode final
{
public:
	class FString                                 ServerCode_0;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(Lobby_HUD_C_SetServerCode) == 0x000008, "Wrong alignment on Lobby_HUD_C_SetServerCode");
static_assert(sizeof(Lobby_HUD_C_SetServerCode) == 0x000028, "Wrong size on Lobby_HUD_C_SetServerCode");
static_assert(offsetof(Lobby_HUD_C_SetServerCode, ServerCode_0) == 0x000000, "Member 'Lobby_HUD_C_SetServerCode::ServerCode_0' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_SetServerCode, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'Lobby_HUD_C_SetServerCode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Lobby_HUD.Lobby_HUD_C.ShowMicIcon
// 0x0060 (0x0060 - 0x0000)
struct Lobby_HUD_C_ShowMicIcon final
{
public:
	struct FBPUniqueNetId                         UniqueId;                                          // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_VOIPIndicator_C*                     CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetID_UniqueNetId;               // 0x0038(0x0020)()
	bool                                          CallFunc_EqualEqual_UNetIDUnetID_ReturnValue;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_HUD_C_ShowMicIcon) == 0x000008, "Wrong alignment on Lobby_HUD_C_ShowMicIcon");
static_assert(sizeof(Lobby_HUD_C_ShowMicIcon) == 0x000060, "Wrong size on Lobby_HUD_C_ShowMicIcon");
static_assert(offsetof(Lobby_HUD_C_ShowMicIcon, UniqueId) == 0x000000, "Member 'Lobby_HUD_C_ShowMicIcon::UniqueId' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ShowMicIcon, CallFunc_Create_ReturnValue) == 0x000020, "Member 'Lobby_HUD_C_ShowMicIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ShowMicIcon, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'Lobby_HUD_C_ShowMicIcon::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ShowMicIcon, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'Lobby_HUD_C_ShowMicIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ShowMicIcon, CallFunc_GetUniqueNetID_UniqueNetId) == 0x000038, "Member 'Lobby_HUD_C_ShowMicIcon::CallFunc_GetUniqueNetID_UniqueNetId' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_ShowMicIcon, CallFunc_EqualEqual_UNetIDUnetID_ReturnValue) == 0x000058, "Member 'Lobby_HUD_C_ShowMicIcon::CallFunc_EqualEqual_UNetIDUnetID_ReturnValue' has a wrong offset!");

// Function Lobby_HUD.Lobby_HUD_C.HideMicIcon
// 0x00A0 (0x00A0 - 0x0000)
struct Lobby_HUD_C_HideMicIcon final
{
public:
	struct FBPUniqueNetId                         UniqueId;                                          // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetID_UniqueNetId;               // 0x0048(0x0020)()
	bool                                          CallFunc_EqualEqual_UNetIDUnetID_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_VOIPIndicator_C*                     K2Node_DynamicCast_AsW_VOIPIndicator;              // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_UNetIDUnetID_ReturnValue_1;    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_HUD_C_HideMicIcon) == 0x000008, "Wrong alignment on Lobby_HUD_C_HideMicIcon");
static_assert(sizeof(Lobby_HUD_C_HideMicIcon) == 0x0000A0, "Wrong size on Lobby_HUD_C_HideMicIcon");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, UniqueId) == 0x000000, "Member 'Lobby_HUD_C_HideMicIcon::UniqueId' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, Temp_bool_True_if_break_was_hit_Variable) == 0x000020, "Member 'Lobby_HUD_C_HideMicIcon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, Temp_int_Array_Index_Variable) == 0x000024, "Member 'Lobby_HUD_C_HideMicIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'Lobby_HUD_C_HideMicIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_HasAnyChildren_ReturnValue) == 0x000040, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_GetUniqueNetID_UniqueNetId) == 0x000048, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_GetUniqueNetID_UniqueNetId' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_EqualEqual_UNetIDUnetID_ReturnValue) == 0x000068, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_EqualEqual_UNetIDUnetID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_GetAllChildren_ReturnValue) == 0x000070, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_Array_Get_Item) == 0x000080, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, K2Node_DynamicCast_AsW_VOIPIndicator) == 0x000090, "Member 'Lobby_HUD_C_HideMicIcon::K2Node_DynamicCast_AsW_VOIPIndicator' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'Lobby_HUD_C_HideMicIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000099, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_RemoveChild_ReturnValue) == 0x00009A, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_BooleanAND_ReturnValue) == 0x00009B, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_HUD_C_HideMicIcon, CallFunc_EqualEqual_UNetIDUnetID_ReturnValue_1) == 0x00009C, "Member 'Lobby_HUD_C_HideMicIcon::CallFunc_EqualEqual_UNetIDUnetID_ReturnValue_1' has a wrong offset!");

}
