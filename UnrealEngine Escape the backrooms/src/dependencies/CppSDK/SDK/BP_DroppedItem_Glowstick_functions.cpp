#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DroppedItem_Glowstick

#include "Basic.hpp"

#include "BP_DroppedItem_Glowstick_classes.hpp"
#include "BP_DroppedItem_Glowstick_parameters.hpp"


namespace SDK
{

// Function BP_DroppedItem_Glowstick.BP_DroppedItem_Glowstick_C.ExecuteUbergraph_BP_DroppedItem_Glowstick
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_Glowstick_C::ExecuteUbergraph_BP_DroppedItem_Glowstick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_Glowstick_C", "ExecuteUbergraph_BP_DroppedItem_Glowstick");

	Params::BP_DroppedItem_Glowstick_C_ExecuteUbergraph_BP_DroppedItem_Glowstick Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppedItem_Glowstick.BP_DroppedItem_Glowstick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DroppedItem_Glowstick_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_Glowstick_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DroppedItem_Glowstick.BP_DroppedItem_Glowstick_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_DroppedItem_Glowstick_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_Glowstick_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

}

