#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RefreshWaterBodies

#include "Basic.hpp"

#include "BP_RefreshWaterBodies_classes.hpp"
#include "BP_RefreshWaterBodies_parameters.hpp"


namespace SDK
{

// Function BP_RefreshWaterBodies.BP_RefreshWaterBodies_C.ExecuteUbergraph_BP_RefreshWaterBodies
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RefreshWaterBodies_C::ExecuteUbergraph_BP_RefreshWaterBodies(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RefreshWaterBodies_C", "ExecuteUbergraph_BP_RefreshWaterBodies");

	Params::BP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RefreshWaterBodies.BP_RefreshWaterBodies_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RefreshWaterBodies_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RefreshWaterBodies_C", "ReceiveActorBeginOverlap");

	Params::BP_RefreshWaterBodies_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

}
