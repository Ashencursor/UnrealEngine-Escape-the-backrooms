#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChunkActor

#include "Basic.hpp"

#include "BP_ChunkActor_classes.hpp"
#include "BP_ChunkActor_parameters.hpp"


namespace SDK
{

// Function BP_ChunkActor.BP_ChunkActor_C.ExecuteUbergraph_BP_ChunkActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChunkActor_C::ExecuteUbergraph_BP_ChunkActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChunkActor_C", "ExecuteUbergraph_BP_ChunkActor");

	Params::BP_ChunkActor_C_ExecuteUbergraph_BP_ChunkActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChunkActor.BP_ChunkActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChunkActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChunkActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChunkActor.BP_ChunkActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChunkActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChunkActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

