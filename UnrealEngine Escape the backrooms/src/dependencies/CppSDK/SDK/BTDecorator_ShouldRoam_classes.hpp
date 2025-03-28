#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_ShouldRoam

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_ShouldRoam.BTDecorator_ShouldRoam_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTDecorator_ShouldRoam_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDecorator_ShouldRoam_C">();
	}
	static class UBTDecorator_ShouldRoam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_ShouldRoam_C>();
	}
};
static_assert(alignof(UBTDecorator_ShouldRoam_C) == 0x000008, "Wrong alignment on UBTDecorator_ShouldRoam_C");
static_assert(sizeof(UBTDecorator_ShouldRoam_C) == 0x0000A0, "Wrong size on UBTDecorator_ShouldRoam_C");

}

