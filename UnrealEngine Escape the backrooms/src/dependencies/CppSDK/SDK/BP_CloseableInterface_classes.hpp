#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CloseableInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CloseableInterface.BP_CloseableInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBP_CloseableInterface_C final : public IInterface
{
public:
	void CanClose();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CloseableInterface_C">();
	}
	static class IBP_CloseableInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_CloseableInterface_C>();
	}
};
static_assert(alignof(IBP_CloseableInterface_C) == 0x000008, "Wrong alignment on IBP_CloseableInterface_C");
static_assert(sizeof(IBP_CloseableInterface_C) == 0x000028, "Wrong size on IBP_CloseableInterface_C");

}

