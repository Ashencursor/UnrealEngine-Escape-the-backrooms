#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_AlmondBottle

#include "Basic.hpp"

#include "BP_Item_AlmondBottle_classes.hpp"
#include "BP_Item_AlmondBottle_parameters.hpp"


namespace SDK
{

// Function BP_Item_AlmondBottle.BP_Item_AlmondBottle_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EnabledFOV                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_AlmondBottle_C::SetMaterial(bool EnabledFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_AlmondBottle_C", "SetMaterial");

	Params::BP_Item_AlmondBottle_C_SetMaterial Parms{};

	Parms.EnabledFOV = EnabledFOV;

	UObject::ProcessEvent(Func, &Parms);
}

}
