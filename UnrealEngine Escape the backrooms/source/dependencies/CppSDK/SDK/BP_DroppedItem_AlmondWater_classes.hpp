#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DroppedItem_AlmondWater

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Backrooms_structs.hpp"
#include "BP_DroppedItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C
// 0x0008 (0x0278 - 0x0270)
class ABP_DroppedItem_AlmondWater_C final : public ABP_DroppedItem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DroppedItem_AlmondWater_C;       // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_DroppedItem_AlmondWater(int32 EntryPoint);
	void OnEventLoaded(EEventType EventType);
	void ToggleEvent(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DroppedItem_AlmondWater_C">();
	}
	static class ABP_DroppedItem_AlmondWater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DroppedItem_AlmondWater_C>();
	}
};
static_assert(alignof(ABP_DroppedItem_AlmondWater_C) == 0x000008, "Wrong alignment on ABP_DroppedItem_AlmondWater_C");
static_assert(sizeof(ABP_DroppedItem_AlmondWater_C) == 0x000278, "Wrong size on ABP_DroppedItem_AlmondWater_C");
static_assert(offsetof(ABP_DroppedItem_AlmondWater_C, UberGraphFrame_BP_DroppedItem_AlmondWater_C) == 0x000270, "Member 'ABP_DroppedItem_AlmondWater_C::UberGraphFrame_BP_DroppedItem_AlmondWater_C' has a wrong offset!");

}
