#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_RoamLocation

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_RoamLocation.BTTask_RoamLocation_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTTask_RoamLocation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 RoamLocation;                                      // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_RoamLocation(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_RoamLocation_C">();
	}
	static class UBTTask_RoamLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RoamLocation_C>();
	}
};
static_assert(alignof(UBTTask_RoamLocation_C) == 0x000008, "Wrong alignment on UBTTask_RoamLocation_C");
static_assert(sizeof(UBTTask_RoamLocation_C) == 0x0000D8, "Wrong size on UBTTask_RoamLocation_C");
static_assert(offsetof(UBTTask_RoamLocation_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_RoamLocation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_RoamLocation_C, RoamLocation) == 0x0000B0, "Member 'UBTTask_RoamLocation_C::RoamLocation' has a wrong offset!");

}
