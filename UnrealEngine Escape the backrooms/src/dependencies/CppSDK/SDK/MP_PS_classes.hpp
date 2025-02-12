#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_PS

#include "Basic.hpp"

#include "S_PlayerConnectionInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "Team_structs.hpp"
#include "E_HeadsetType_structs.hpp"
#include "S_UserProfile_structs.hpp"
#include "Backrooms_classes.hpp"
#include "AdvancedSessions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_PS.MP_PS_C
// 0x0058 (0x0390 - 0x0338)
class AMP_PS_C final : public AFancyPlayerState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Points;                                            // 0x0348(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	ETeam                                         Team;                                              // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PlayerConnectionInfo                PlayerConnection;                                  // 0x0350(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FS_UserProfile                         UserInfo;                                          // 0x0358(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          HasFlashlight;                                     // 0x0370(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Items_Rep;                                         // 0x0378(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                         LastSave;                                          // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_HeadsetType                                 HeadsetType;                                       // 0x038C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MP_PS(int32 EntryPoint);
	void SRV_SetHeadsetType(E_HeadsetType HeadsetType_0);
	void RefreshPlayer();
	void SRV_AddSanity(float Amount);
	void SaveInventory(const TArray<class FName>& Inventory);
	void SetInventoryItem(int32 Index_0, class FName Name_0);
	void OnKillPlayer();
	void LoadPlayerStats();
	void SavePlayerStats();
	void ReceiveCopyProperties(class APlayerState* NewPlayerState);
	void SR_Update_Player_UserProfile(const struct FS_UserProfile& Player_UserProfile);
	void SR_Update_Player_ConnectionInfo(const struct FS_PlayerConnectionInfo& Player_ConnectionInfo);
	void OnRep_Kills();
	void OnRep_Points();
	void OnRep_PlayerConnection();
	void OnRep_Player_ConnectionInfo_OR();
	void OnRep_Player_UserProfile_OR();
	void OnRep_UserInfo();
	void Load_Player_UserProfile();
	void Load_Player_ConnectionInfo(bool Client_ReadyStatus);
	void SavePlayer(bool ForceSave);
	void LoadPlayer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_PS_C">();
	}
	static class AMP_PS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_PS_C>();
	}
};
static_assert(alignof(AMP_PS_C) == 0x000008, "Wrong alignment on AMP_PS_C");
static_assert(sizeof(AMP_PS_C) == 0x000390, "Wrong size on AMP_PS_C");
static_assert(offsetof(AMP_PS_C, UberGraphFrame) == 0x000338, "Member 'AMP_PS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, DefaultSceneRoot) == 0x000340, "Member 'AMP_PS_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, Points) == 0x000348, "Member 'AMP_PS_C::Points' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, Team) == 0x00034C, "Member 'AMP_PS_C::Team' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, PlayerConnection) == 0x000350, "Member 'AMP_PS_C::PlayerConnection' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, UserInfo) == 0x000358, "Member 'AMP_PS_C::UserInfo' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, HasFlashlight) == 0x000370, "Member 'AMP_PS_C::HasFlashlight' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, Items_Rep) == 0x000378, "Member 'AMP_PS_C::Items_Rep' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, LastSave) == 0x000388, "Member 'AMP_PS_C::LastSave' has a wrong offset!");
static_assert(offsetof(AMP_PS_C, HeadsetType) == 0x00038C, "Member 'AMP_PS_C::HeadsetType' has a wrong offset!");

}

