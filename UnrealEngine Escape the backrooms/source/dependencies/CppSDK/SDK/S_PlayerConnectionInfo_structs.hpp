#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_PlayerConnectionInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_PlayerConnectionInfo.S_PlayerConnectionInfo
// 0x0008 (0x0008 - 0x0000)
struct FS_PlayerConnectionInfo final
{
public:
	bool                                          IsHost_10_3FC99F694E5E76E4EEE351B9C00314E7;        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsReady_11_196B8B30405ECFA7AC5EA788C3D67361;       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerId_13_6EE1F3D1450321FE9DC17FBD84182FDB;      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_PlayerConnectionInfo) == 0x000004, "Wrong alignment on FS_PlayerConnectionInfo");
static_assert(sizeof(FS_PlayerConnectionInfo) == 0x000008, "Wrong size on FS_PlayerConnectionInfo");
static_assert(offsetof(FS_PlayerConnectionInfo, IsHost_10_3FC99F694E5E76E4EEE351B9C00314E7) == 0x000000, "Member 'FS_PlayerConnectionInfo::IsHost_10_3FC99F694E5E76E4EEE351B9C00314E7' has a wrong offset!");
static_assert(offsetof(FS_PlayerConnectionInfo, IsReady_11_196B8B30405ECFA7AC5EA788C3D67361) == 0x000001, "Member 'FS_PlayerConnectionInfo::IsReady_11_196B8B30405ECFA7AC5EA788C3D67361' has a wrong offset!");
static_assert(offsetof(FS_PlayerConnectionInfo, PlayerId_13_6EE1F3D1450321FE9DC17FBD84182FDB) == 0x000004, "Member 'FS_PlayerConnectionInfo::PlayerId_13_6EE1F3D1450321FE9DC17FBD84182FDB' has a wrong offset!");

}
