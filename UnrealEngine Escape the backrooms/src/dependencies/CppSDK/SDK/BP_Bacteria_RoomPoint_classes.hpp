#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bacteria_RoomPoint

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bacteria_RoomPoint.BP_Bacteria_RoomPoint_C
// 0x0010 (0x0230 - 0x0220)
class ABP_Bacteria_RoomPoint_C final : public AActor
{
public:
	class USphereComponent*                       Sphere;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bacteria_RoomPoint_C">();
	}
	static class ABP_Bacteria_RoomPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bacteria_RoomPoint_C>();
	}
};
static_assert(alignof(ABP_Bacteria_RoomPoint_C) == 0x000008, "Wrong alignment on ABP_Bacteria_RoomPoint_C");
static_assert(sizeof(ABP_Bacteria_RoomPoint_C) == 0x000230, "Wrong size on ABP_Bacteria_RoomPoint_C");
static_assert(offsetof(ABP_Bacteria_RoomPoint_C, Sphere) == 0x000220, "Member 'ABP_Bacteria_RoomPoint_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Bacteria_RoomPoint_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_Bacteria_RoomPoint_C::DefaultSceneRoot' has a wrong offset!");

}

