#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_AlmondBottle

#include "Basic.hpp"

#include "BP_Item_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Item_AlmondBottle.BP_Item_AlmondBottle_C
// 0x0008 (0x0260 - 0x0258)
class ABP_Item_AlmondBottle_C final : public ABP_Item_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetMaterial(bool EnabledFOV);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_AlmondBottle_C">();
	}
	static class ABP_Item_AlmondBottle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_AlmondBottle_C>();
	}
};
static_assert(alignof(ABP_Item_AlmondBottle_C) == 0x000008, "Wrong alignment on ABP_Item_AlmondBottle_C");
static_assert(sizeof(ABP_Item_AlmondBottle_C) == 0x000260, "Wrong size on ABP_Item_AlmondBottle_C");
static_assert(offsetof(ABP_Item_AlmondBottle_C, StaticMesh) == 0x000258, "Member 'ABP_Item_AlmondBottle_C::StaticMesh' has a wrong offset!");

}

