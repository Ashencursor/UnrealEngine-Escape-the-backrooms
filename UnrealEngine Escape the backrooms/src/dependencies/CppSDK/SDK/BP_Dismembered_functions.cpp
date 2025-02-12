#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Dismembered

#include "Basic.hpp"

#include "BP_Dismembered_classes.hpp"
#include "BP_Dismembered_parameters.hpp"


namespace SDK
{

// Function BP_Dismembered.BP_Dismembered_C.ExecuteUbergraph_BP_Dismembered
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Dismembered_C::ExecuteUbergraph_BP_Dismembered(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dismembered_C", "ExecuteUbergraph_BP_Dismembered");

	Params::BP_Dismembered_C_ExecuteUbergraph_BP_Dismembered Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dismembered.BP_Dismembered_C.MC_Sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Dismembered_C::MC_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dismembered_C", "MC_Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dismembered.BP_Dismembered_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Dismembered_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dismembered_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dismembered.BP_Dismembered_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Dismembered_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dismembered_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

