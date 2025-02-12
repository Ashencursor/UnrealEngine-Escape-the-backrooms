#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MySaveGame

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "S_LevelStats_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MySaveGame.BP_MySaveGame_C
// 0x0080 (0x00A8 - 0x0028)
class UBP_MySaveGame_C final : public USaveGame
{
public:
	TArray<struct FS_LevelStats>                  LevelStats;                                        // 0x0028(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          HasSeenCutscene;                                   // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HasSeenEndscene;                                   // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         SingleplayerSaves;                                 // 0x0040(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         EasySaves;                                         // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         NormalSaves;                                       // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         HardSaves;                                         // 0x0070(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         NightmareSaves;                                    // 0x0080(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          HubUnlocked;                                       // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentGameBuild;                                  // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         DocumentsFound;                                    // 0x0098(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MySaveGame_C">();
	}
	static class UBP_MySaveGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MySaveGame_C>();
	}
};
static_assert(alignof(UBP_MySaveGame_C) == 0x000008, "Wrong alignment on UBP_MySaveGame_C");
static_assert(sizeof(UBP_MySaveGame_C) == 0x0000A8, "Wrong size on UBP_MySaveGame_C");
static_assert(offsetof(UBP_MySaveGame_C, LevelStats) == 0x000028, "Member 'UBP_MySaveGame_C::LevelStats' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, HasSeenCutscene) == 0x000038, "Member 'UBP_MySaveGame_C::HasSeenCutscene' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, HasSeenEndscene) == 0x000039, "Member 'UBP_MySaveGame_C::HasSeenEndscene' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, SingleplayerSaves) == 0x000040, "Member 'UBP_MySaveGame_C::SingleplayerSaves' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, EasySaves) == 0x000050, "Member 'UBP_MySaveGame_C::EasySaves' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, NormalSaves) == 0x000060, "Member 'UBP_MySaveGame_C::NormalSaves' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, HardSaves) == 0x000070, "Member 'UBP_MySaveGame_C::HardSaves' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, NightmareSaves) == 0x000080, "Member 'UBP_MySaveGame_C::NightmareSaves' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, HubUnlocked) == 0x000090, "Member 'UBP_MySaveGame_C::HubUnlocked' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, CurrentGameBuild) == 0x000094, "Member 'UBP_MySaveGame_C::CurrentGameBuild' has a wrong offset!");
static_assert(offsetof(UBP_MySaveGame_C, DocumentsFound) == 0x000098, "Member 'UBP_MySaveGame_C::DocumentsFound' has a wrong offset!");

}

