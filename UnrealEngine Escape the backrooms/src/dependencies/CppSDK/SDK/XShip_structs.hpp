#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XShip

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct XShip.RepXShipMovement
// 0x0030 (0x0030 - 0x0000)
struct FRepXShipMovement final
{
public:
	struct FVector_NetQuantize                    LinearVelocity;                                    // 0x0000(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                    AngularVelocity;                                   // 0x000C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                    Location;                                          // 0x0018(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRepXShipMovement) == 0x000004, "Wrong alignment on FRepXShipMovement");
static_assert(sizeof(FRepXShipMovement) == 0x000030, "Wrong size on FRepXShipMovement");
static_assert(offsetof(FRepXShipMovement, LinearVelocity) == 0x000000, "Member 'FRepXShipMovement::LinearVelocity' has a wrong offset!");
static_assert(offsetof(FRepXShipMovement, AngularVelocity) == 0x00000C, "Member 'FRepXShipMovement::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FRepXShipMovement, Location) == 0x000018, "Member 'FRepXShipMovement::Location' has a wrong offset!");
static_assert(offsetof(FRepXShipMovement, Rotation) == 0x000024, "Member 'FRepXShipMovement::Rotation' has a wrong offset!");

// ScriptStruct XShip.XShipEngine
// 0x0024 (0x0024 - 0x0000)
struct FXShipEngine final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ForceRelativeLocation;                             // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WaterCheckRelativeLocation;                        // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EngineForwardForce;                                // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EngineBackwardForce;                               // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FXShipEngine) == 0x000004, "Wrong alignment on FXShipEngine");
static_assert(sizeof(FXShipEngine) == 0x000024, "Wrong size on FXShipEngine");
static_assert(offsetof(FXShipEngine, bEnabled) == 0x000000, "Member 'FXShipEngine::bEnabled' has a wrong offset!");
static_assert(offsetof(FXShipEngine, ForceRelativeLocation) == 0x000004, "Member 'FXShipEngine::ForceRelativeLocation' has a wrong offset!");
static_assert(offsetof(FXShipEngine, WaterCheckRelativeLocation) == 0x000010, "Member 'FXShipEngine::WaterCheckRelativeLocation' has a wrong offset!");
static_assert(offsetof(FXShipEngine, EngineForwardForce) == 0x00001C, "Member 'FXShipEngine::EngineForwardForce' has a wrong offset!");
static_assert(offsetof(FXShipEngine, EngineBackwardForce) == 0x000020, "Member 'FXShipEngine::EngineBackwardForce' has a wrong offset!");

// ScriptStruct XShip.XShipFloater
// 0x0010 (0x0010 - 0x0000)
struct FXShipFloater final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                RelativeLocation;                                  // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FXShipFloater) == 0x000004, "Wrong alignment on FXShipFloater");
static_assert(sizeof(FXShipFloater) == 0x000010, "Wrong size on FXShipFloater");
static_assert(offsetof(FXShipFloater, bEnabled) == 0x000000, "Member 'FXShipFloater::bEnabled' has a wrong offset!");
static_assert(offsetof(FXShipFloater, RelativeLocation) == 0x000004, "Member 'FXShipFloater::RelativeLocation' has a wrong offset!");

}
