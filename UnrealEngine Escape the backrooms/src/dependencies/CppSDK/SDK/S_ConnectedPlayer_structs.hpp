#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ConnectedPlayer

#include "Basic.hpp"

#include "S_UserProfile_structs.hpp"
#include "S_PlayerConnectionInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_ConnectedPlayer.S_ConnectedPlayer
// 0x0020 (0x0020 - 0x0000)
struct FS_ConnectedPlayer final
{
public:
	struct FS_UserProfile                         UserProfile_4_7E9B386343601B60624B19910376420A;    // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_PlayerConnectionInfo                PlayerConnectionInfo_5_DE76351A4287099A938520953C624C20; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_ConnectedPlayer) == 0x000008, "Wrong alignment on FS_ConnectedPlayer");
static_assert(sizeof(FS_ConnectedPlayer) == 0x000020, "Wrong size on FS_ConnectedPlayer");
static_assert(offsetof(FS_ConnectedPlayer, UserProfile_4_7E9B386343601B60624B19910376420A) == 0x000000, "Member 'FS_ConnectedPlayer::UserProfile_4_7E9B386343601B60624B19910376420A' has a wrong offset!");
static_assert(offsetof(FS_ConnectedPlayer, PlayerConnectionInfo_5_DE76351A4287099A938520953C624C20) == 0x000018, "Member 'FS_ConnectedPlayer::PlayerConnectionInfo_5_DE76351A4287099A938520953C624C20' has a wrong offset!");

}

