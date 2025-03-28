#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_ShouldMove

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_ShouldMove.BTDecorator_ShouldMove_C
// 0x0000 (0x00A0 - 0x00A0)
class BTDecorator_ShouldMove::UBTDecorator_ShouldMove_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass BTDecorator_ShouldMove.BTDecorator_ShouldMove_C", true, "BTDecorator_ShouldMove_C">();
	}
	static class BTDecorator_ShouldMove::UBTDecorator_ShouldMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<BTDecorator_ShouldMove::UBTDecorator_ShouldMove_C>();
	}
};
static_assert(alignof(BTDecorator_ShouldMove::UBTDecorator_ShouldMove_C) == 0x000008, "Wrong alignment on BTDecorator_ShouldMove::UBTDecorator_ShouldMove_C");
static_assert(sizeof(BTDecorator_ShouldMove::UBTDecorator_ShouldMove_C) == 0x0000A0, "Wrong size on BTDecorator_ShouldMove::UBTDecorator_ShouldMove_C");

}

