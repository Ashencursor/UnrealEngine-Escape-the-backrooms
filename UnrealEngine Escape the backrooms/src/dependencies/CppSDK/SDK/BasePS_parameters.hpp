#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasePS

#include "Basic.hpp"

#include "E_HeadsetType_structs.hpp"
#include "S_UserProfile_structs.hpp"
#include "AdvancedSessions_structs.hpp"
#include "S_PlayerConnectionInfo_structs.hpp"


namespace SDK::Params
{

// Function BasePS.BasePS_C.ExecuteUbergraph_BasePS
// 0x00B8 (0x00B8 - 0x0000)
struct BasePS_C_ExecuteUbergraph_BasePS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x0008(0x0020)()
	class FString                                 CallFunc_UniqueNetIdToString_String;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_UserProfile                         K2Node_CustomEvent_Player_UserProfile;             // 0x0058(0x0018)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_PlayerConnectionInfo                K2Node_CustomEvent_Player_ConnectionInfo;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_HeadsetType                                 K2Node_CustomEvent_HeadsetType;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PlayerId;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                   K2Node_DynamicCast_AsBP_My_Game_Instance;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BasePS_C_ExecuteUbergraph_BasePS) == 0x000008, "Wrong alignment on BasePS_C_ExecuteUbergraph_BasePS");
static_assert(sizeof(BasePS_C_ExecuteUbergraph_BasePS) == 0x0000B8, "Wrong size on BasePS_C_ExecuteUbergraph_BasePS");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, EntryPoint) == 0x000000, "Member 'BasePS_C_ExecuteUbergraph_BasePS::EntryPoint' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId) == 0x000008, "Member 'BasePS_C_ExecuteUbergraph_BasePS::CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, CallFunc_UniqueNetIdToString_String) == 0x000028, "Member 'BasePS_C_ExecuteUbergraph_BasePS::CallFunc_UniqueNetIdToString_String' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BasePS_C_ExecuteUbergraph_BasePS::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000048, "Member 'BasePS_C_ExecuteUbergraph_BasePS::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, K2Node_CustomEvent_Player_UserProfile) == 0x000058, "Member 'BasePS_C_ExecuteUbergraph_BasePS::K2Node_CustomEvent_Player_UserProfile' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, K2Node_CustomEvent_Player_ConnectionInfo) == 0x000070, "Member 'BasePS_C_ExecuteUbergraph_BasePS::K2Node_CustomEvent_Player_ConnectionInfo' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, K2Node_CustomEvent_HeadsetType) == 0x000078, "Member 'BasePS_C_ExecuteUbergraph_BasePS::K2Node_CustomEvent_HeadsetType' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, K2Node_CustomEvent_PlayerId) == 0x00007C, "Member 'BasePS_C_ExecuteUbergraph_BasePS::K2Node_CustomEvent_PlayerId' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, CallFunc_GetGameInstance_ReturnValue) == 0x000080, "Member 'BasePS_C_ExecuteUbergraph_BasePS::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000088, "Member 'BasePS_C_ExecuteUbergraph_BasePS::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, K2Node_DynamicCast_AsBP_My_Game_Instance) == 0x000098, "Member 'BasePS_C_ExecuteUbergraph_BasePS::K2Node_DynamicCast_AsBP_My_Game_Instance' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BasePS_C_ExecuteUbergraph_BasePS::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BasePS_C_ExecuteUbergraph_BasePS, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A8, "Member 'BasePS_C_ExecuteUbergraph_BasePS::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BasePS.BasePS_C.SR_LoadHeadset
// 0x0008 (0x0008 - 0x0000)
struct BasePS_C_SR_LoadHeadset final
{
public:
	E_HeadsetType                                 HeadsetType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerId_0;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasePS_C_SR_LoadHeadset) == 0x000004, "Wrong alignment on BasePS_C_SR_LoadHeadset");
static_assert(sizeof(BasePS_C_SR_LoadHeadset) == 0x000008, "Wrong size on BasePS_C_SR_LoadHeadset");
static_assert(offsetof(BasePS_C_SR_LoadHeadset, HeadsetType) == 0x000000, "Member 'BasePS_C_SR_LoadHeadset::HeadsetType' has a wrong offset!");
static_assert(offsetof(BasePS_C_SR_LoadHeadset, PlayerId_0) == 0x000004, "Member 'BasePS_C_SR_LoadHeadset::PlayerId_0' has a wrong offset!");

// Function BasePS.BasePS_C.SR_Update_Player_ConnectionInfo
// 0x0008 (0x0008 - 0x0000)
struct BasePS_C_SR_Update_Player_ConnectionInfo final
{
public:
	struct FS_PlayerConnectionInfo                Player_ConnectionInfo;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasePS_C_SR_Update_Player_ConnectionInfo) == 0x000004, "Wrong alignment on BasePS_C_SR_Update_Player_ConnectionInfo");
static_assert(sizeof(BasePS_C_SR_Update_Player_ConnectionInfo) == 0x000008, "Wrong size on BasePS_C_SR_Update_Player_ConnectionInfo");
static_assert(offsetof(BasePS_C_SR_Update_Player_ConnectionInfo, Player_ConnectionInfo) == 0x000000, "Member 'BasePS_C_SR_Update_Player_ConnectionInfo::Player_ConnectionInfo' has a wrong offset!");

// Function BasePS.BasePS_C.SR_Update_Player_UserProfile
// 0x0018 (0x0018 - 0x0000)
struct BasePS_C_SR_Update_Player_UserProfile final
{
public:
	struct FS_UserProfile                         Player_UserProfile;                                // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(BasePS_C_SR_Update_Player_UserProfile) == 0x000008, "Wrong alignment on BasePS_C_SR_Update_Player_UserProfile");
static_assert(sizeof(BasePS_C_SR_Update_Player_UserProfile) == 0x000018, "Wrong size on BasePS_C_SR_Update_Player_UserProfile");
static_assert(offsetof(BasePS_C_SR_Update_Player_UserProfile, Player_UserProfile) == 0x000000, "Member 'BasePS_C_SR_Update_Player_UserProfile::Player_UserProfile' has a wrong offset!");

// Function BasePS.BasePS_C.Load_Player_ConnectionInfo
// 0x0018 (0x0018 - 0x0000)
struct BasePS_C_Load_Player_ConnectionInfo final
{
public:
	bool                                          Client_ReadyStatus;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PlayerConnectionInfo                K2Node_MakeStruct_S_PlayerConnectionInfo;          // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PlayerConnectionInfo                K2Node_MakeStruct_S_PlayerConnectionInfo_1;        // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BasePS_C_Load_Player_ConnectionInfo) == 0x000004, "Wrong alignment on BasePS_C_Load_Player_ConnectionInfo");
static_assert(sizeof(BasePS_C_Load_Player_ConnectionInfo) == 0x000018, "Wrong size on BasePS_C_Load_Player_ConnectionInfo");
static_assert(offsetof(BasePS_C_Load_Player_ConnectionInfo, Client_ReadyStatus) == 0x000000, "Member 'BasePS_C_Load_Player_ConnectionInfo::Client_ReadyStatus' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_ConnectionInfo, K2Node_MakeStruct_S_PlayerConnectionInfo) == 0x000004, "Member 'BasePS_C_Load_Player_ConnectionInfo::K2Node_MakeStruct_S_PlayerConnectionInfo' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_ConnectionInfo, K2Node_MakeStruct_S_PlayerConnectionInfo_1) == 0x00000C, "Member 'BasePS_C_Load_Player_ConnectionInfo::K2Node_MakeStruct_S_PlayerConnectionInfo_1' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_ConnectionInfo, CallFunc_IsServer_ReturnValue) == 0x000014, "Member 'BasePS_C_Load_Player_ConnectionInfo::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function BasePS.BasePS_C.Load_Player_UserProfile
// 0x0078 (0x0078 - 0x0000)
struct BasePS_C_Load_Player_UserProfile final
{
public:
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_UserProfile                         K2Node_MakeStruct_S_UserProfile;                   // 0x0010(0x0018)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FBPUniqueNetId                         CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x0028(0x0020)()
	EBlueprintAsyncResultSwitch                   CallFunc_GetSteamFriendAvatar_Result;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetSteamFriendAvatar_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_UserProfile                         K2Node_MakeStruct_S_UserProfile_1;                 // 0x0060(0x0018)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(BasePS_C_Load_Player_UserProfile) == 0x000008, "Wrong alignment on BasePS_C_Load_Player_UserProfile");
static_assert(sizeof(BasePS_C_Load_Player_UserProfile) == 0x000078, "Wrong size on BasePS_C_Load_Player_UserProfile");
static_assert(offsetof(BasePS_C_Load_Player_UserProfile, CallFunc_GetPlayerName_ReturnValue) == 0x000000, "Member 'BasePS_C_Load_Player_UserProfile::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_UserProfile, K2Node_MakeStruct_S_UserProfile) == 0x000010, "Member 'BasePS_C_Load_Player_UserProfile::K2Node_MakeStruct_S_UserProfile' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_UserProfile, CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId) == 0x000028, "Member 'BasePS_C_Load_Player_UserProfile::CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_UserProfile, CallFunc_GetSteamFriendAvatar_Result) == 0x000048, "Member 'BasePS_C_Load_Player_UserProfile::CallFunc_GetSteamFriendAvatar_Result' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_UserProfile, CallFunc_GetSteamFriendAvatar_ReturnValue) == 0x000050, "Member 'BasePS_C_Load_Player_UserProfile::CallFunc_GetSteamFriendAvatar_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_UserProfile, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'BasePS_C_Load_Player_UserProfile::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BasePS_C_Load_Player_UserProfile, K2Node_MakeStruct_S_UserProfile_1) == 0x000060, "Member 'BasePS_C_Load_Player_UserProfile::K2Node_MakeStruct_S_UserProfile_1' has a wrong offset!");

// Function BasePS.BasePS_C.Load_Player_Headset
// 0x0001 (0x0001 - 0x0000)
struct BasePS_C_Load_Player_Headset final
{
public:
	bool                                          CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BasePS_C_Load_Player_Headset) == 0x000001, "Wrong alignment on BasePS_C_Load_Player_Headset");
static_assert(sizeof(BasePS_C_Load_Player_Headset) == 0x000001, "Wrong size on BasePS_C_Load_Player_Headset");
static_assert(offsetof(BasePS_C_Load_Player_Headset, CallFunc_IsHeadMountedDisplayEnabled_ReturnValue) == 0x000000, "Member 'BasePS_C_Load_Player_Headset::CallFunc_IsHeadMountedDisplayEnabled_ReturnValue' has a wrong offset!");

}
