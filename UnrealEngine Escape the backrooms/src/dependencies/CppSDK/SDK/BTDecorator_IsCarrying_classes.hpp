#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_IsCarrying

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_IsCarrying.BTDecorator_IsCarrying_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTDecorator_IsCarrying_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDecorator_IsCarrying_C">();
	}
	static class UBTDecorator_IsCarrying_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_IsCarrying_C>();
	}
};
static_assert(alignof(UBTDecorator_IsCarrying_C) == 0x000008, "Wrong alignment on UBTDecorator_IsCarrying_C");
static_assert(sizeof(UBTDecorator_IsCarrying_C) == 0x0000A0, "Wrong size on UBTDecorator_IsCarrying_C");

}
