#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Climb_Shake2

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Climb_Shake2.BP_Climb_Shake2_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_Climb_Shake2_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Climb_Shake2_C">();
	}
	static class UBP_Climb_Shake2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Climb_Shake2_C>();
	}
};
static_assert(alignof(UBP_Climb_Shake2_C) == 0x000010, "Wrong alignment on UBP_Climb_Shake2_C");
static_assert(sizeof(UBP_Climb_Shake2_C) == 0x0001B0, "Wrong size on UBP_Climb_Shake2_C");

}
