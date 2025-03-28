#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_PoolRooms

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MP_GameMode_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_PoolRooms.MP_PoolRooms_C
// 0x0010 (0x0378 - 0x0368)
class AMP_PoolRooms_C final : public AMP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MP_PoolRooms_C;                     // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CurrentSpawnIndex;                                 // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MP_PoolRooms(int32 EntryPoint);
	void CheckPlayer();
	void CheckWater();
	void DarkRoomsSubtitle();
	void OnPlayerSpawn(class ABPCharacter_Demo_C* Player);
	void ReceiveBeginPlay();
	class AActor* ChoosePlayerStart(class AController* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_PoolRooms_C">();
	}
	static class AMP_PoolRooms_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_PoolRooms_C>();
	}
};
static_assert(alignof(AMP_PoolRooms_C) == 0x000008, "Wrong alignment on AMP_PoolRooms_C");
static_assert(sizeof(AMP_PoolRooms_C) == 0x000378, "Wrong size on AMP_PoolRooms_C");
static_assert(offsetof(AMP_PoolRooms_C, UberGraphFrame_MP_PoolRooms_C) == 0x000368, "Member 'AMP_PoolRooms_C::UberGraphFrame_MP_PoolRooms_C' has a wrong offset!");
static_assert(offsetof(AMP_PoolRooms_C, CurrentSpawnIndex) == 0x000370, "Member 'AMP_PoolRooms_C::CurrentSpawnIndex' has a wrong offset!");

}

