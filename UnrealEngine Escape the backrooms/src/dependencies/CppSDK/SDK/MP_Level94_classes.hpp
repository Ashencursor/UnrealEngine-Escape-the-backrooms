#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_Level94

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MP_GameMode_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MP_Level94.MP_Level94_C
// 0x0070 (0x03D8 - 0x0368)
class AMP_Level94_C final : public AMP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MP_Level94_C;                       // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsNight;                                           // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class ABPCharacter_Demo_C*>       PlayerMap;                                         // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                RetreatLocation;                                   // 0x03C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MP_Level94(int32 EntryPoint);
	void RemoveAnimations();
	void OnQueryFinish(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
	void SpawnAnimations();
	void UserConstructionScript();
	void LoadCheckpoints();
	void ReceiveBeginPlay();
	void OnPlayerSpawn(class ABPCharacter_Demo_C* Player);
	class AActor* ChoosePlayerStart(class AController* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MP_Level94_C">();
	}
	static class AMP_Level94_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMP_Level94_C>();
	}
};
static_assert(alignof(AMP_Level94_C) == 0x000008, "Wrong alignment on AMP_Level94_C");
static_assert(sizeof(AMP_Level94_C) == 0x0003D8, "Wrong size on AMP_Level94_C");
static_assert(offsetof(AMP_Level94_C, UberGraphFrame_MP_Level94_C) == 0x000368, "Member 'AMP_Level94_C::UberGraphFrame_MP_Level94_C' has a wrong offset!");
static_assert(offsetof(AMP_Level94_C, IsNight) == 0x000370, "Member 'AMP_Level94_C::IsNight' has a wrong offset!");
static_assert(offsetof(AMP_Level94_C, PlayerMap) == 0x000378, "Member 'AMP_Level94_C::PlayerMap' has a wrong offset!");
static_assert(offsetof(AMP_Level94_C, RetreatLocation) == 0x0003C8, "Member 'AMP_Level94_C::RetreatLocation' has a wrong offset!");

}

