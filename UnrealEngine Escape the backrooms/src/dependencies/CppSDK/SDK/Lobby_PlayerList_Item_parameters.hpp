#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_PlayerList_Item

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.ExecuteUbergraph_Lobby_PlayerList_Item
// 0x0004 (0x0004 - 0x0000)
struct Lobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item) == 0x000004, "Wrong alignment on Lobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item");
static_assert(sizeof(Lobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item) == 0x000004, "Wrong size on Lobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item");
static_assert(offsetof(Lobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item, EntryPoint) == 0x000000, "Member 'Lobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item::EntryPoint' has a wrong offset!");

// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_ReadyStatus
// 0x0030 (0x0030 - 0x0000)
struct Lobby_PlayerList_Item_C_Set_ReadyStatus final
{
public:
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0000(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0018(0x0018)()
};
static_assert(alignof(Lobby_PlayerList_Item_C_Set_ReadyStatus) == 0x000008, "Wrong alignment on Lobby_PlayerList_Item_C_Set_ReadyStatus");
static_assert(sizeof(Lobby_PlayerList_Item_C_Set_ReadyStatus) == 0x000030, "Wrong size on Lobby_PlayerList_Item_C_Set_ReadyStatus");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_ReadyStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x000000, "Member 'Lobby_PlayerList_Item_C_Set_ReadyStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_ReadyStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000018, "Member 'Lobby_PlayerList_Item_C_Set_ReadyStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_KickButton
// 0x0001 (0x0001 - 0x0000)
struct Lobby_PlayerList_Item_C_Set_KickButton final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_PlayerList_Item_C_Set_KickButton) == 0x000001, "Wrong alignment on Lobby_PlayerList_Item_C_Set_KickButton");
static_assert(sizeof(Lobby_PlayerList_Item_C_Set_KickButton) == 0x000001, "Wrong size on Lobby_PlayerList_Item_C_Set_KickButton");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_KickButton, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'Lobby_PlayerList_Item_C_Set_KickButton::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Username
// 0x0018 (0x0018 - 0x0000)
struct Lobby_PlayerList_Item_C_Set_Username final
{
public:
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0000(0x0018)()
};
static_assert(alignof(Lobby_PlayerList_Item_C_Set_Username) == 0x000008, "Wrong alignment on Lobby_PlayerList_Item_C_Set_Username");
static_assert(sizeof(Lobby_PlayerList_Item_C_Set_Username) == 0x000018, "Wrong size on Lobby_PlayerList_Item_C_Set_Username");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_Username, CallFunc_Conv_StringToText_ReturnValue) == 0x000000, "Member 'Lobby_PlayerList_Item_C_Set_Username::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Avatar
// 0x001C (0x001C - 0x0000)
struct Lobby_PlayerList_Item_C_Set_Avatar final
{
public:
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_PlayerList_Item_C_Set_Avatar) == 0x000004, "Wrong alignment on Lobby_PlayerList_Item_C_Set_Avatar");
static_assert(sizeof(Lobby_PlayerList_Item_C_Set_Avatar) == 0x00001C, "Wrong size on Lobby_PlayerList_Item_C_Set_Avatar");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_Avatar, K2Node_MakeStruct_LinearColor) == 0x000000, "Member 'Lobby_PlayerList_Item_C_Set_Avatar::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_Avatar, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Lobby_PlayerList_Item_C_Set_Avatar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_Avatar, CallFunc_Blueprint_GetSizeX_ReturnValue) == 0x000014, "Member 'Lobby_PlayerList_Item_C_Set_Avatar::CallFunc_Blueprint_GetSizeX_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_Avatar, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'Lobby_PlayerList_Item_C_Set_Avatar::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.KickPlayer
// 0x0018 (0x0018 - 0x0000)
struct Lobby_PlayerList_Item_C_KickPlayer final
{
public:
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABase_GM_C*                             K2Node_DynamicCast_AsBase_GM;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_PlayerList_Item_C_KickPlayer) == 0x000008, "Wrong alignment on Lobby_PlayerList_Item_C_KickPlayer");
static_assert(sizeof(Lobby_PlayerList_Item_C_KickPlayer) == 0x000018, "Wrong size on Lobby_PlayerList_Item_C_KickPlayer");
static_assert(offsetof(Lobby_PlayerList_Item_C_KickPlayer, CallFunc_GetGameMode_ReturnValue) == 0x000000, "Member 'Lobby_PlayerList_Item_C_KickPlayer::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_PlayerList_Item_C_KickPlayer, K2Node_DynamicCast_AsBase_GM) == 0x000008, "Member 'Lobby_PlayerList_Item_C_KickPlayer::K2Node_DynamicCast_AsBase_GM' has a wrong offset!");
static_assert(offsetof(Lobby_PlayerList_Item_C_KickPlayer, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Lobby_PlayerList_Item_C_KickPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Speaking
// 0x0001 (0x0001 - 0x0000)
struct Lobby_PlayerList_Item_C_Set_Speaking final
{
public:
	bool                                          IsSpeaking;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_PlayerList_Item_C_Set_Speaking) == 0x000001, "Wrong alignment on Lobby_PlayerList_Item_C_Set_Speaking");
static_assert(sizeof(Lobby_PlayerList_Item_C_Set_Speaking) == 0x000001, "Wrong size on Lobby_PlayerList_Item_C_Set_Speaking");
static_assert(offsetof(Lobby_PlayerList_Item_C_Set_Speaking, IsSpeaking) == 0x000000, "Member 'Lobby_PlayerList_Item_C_Set_Speaking::IsSpeaking' has a wrong offset!");

}

