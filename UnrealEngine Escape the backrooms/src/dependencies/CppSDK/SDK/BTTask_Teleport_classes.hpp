#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_Teleport

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_Teleport.BTTask_Teleport_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTTask_Teleport_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Location;                                          // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_Teleport(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_Teleport_C">();
	}
	static class UBTTask_Teleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_Teleport_C>();
	}
};
static_assert(alignof(UBTTask_Teleport_C) == 0x000008, "Wrong alignment on UBTTask_Teleport_C");
static_assert(sizeof(UBTTask_Teleport_C) == 0x0000D8, "Wrong size on UBTTask_Teleport_C");
static_assert(offsetof(UBTTask_Teleport_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_Teleport_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_Teleport_C, Location) == 0x0000B0, "Member 'UBTTask_Teleport_C::Location' has a wrong offset!");

}
