#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ambience_Manager

#include "Basic.hpp"

#include "BP_Ambience_Manager_classes.hpp"
#include "BP_Ambience_Manager_parameters.hpp"


namespace SDK
{

// Function BP_Ambience_Manager.BP_Ambience_Manager_C.ExecuteUbergraph_BP_Ambience_Manager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ambience_Manager_C::ExecuteUbergraph_BP_Ambience_Manager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "ExecuteUbergraph_BP_Ambience_Manager");

	Params::BP_Ambience_Manager_C_ExecuteUbergraph_BP_Ambience_Manager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ambience_Manager.BP_Ambience_Manager_C.ExitHouse
// (BlueprintCallable, BlueprintEvent)

void ABP_Ambience_Manager_C::ExitHouse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "ExitHouse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ambience_Manager.BP_Ambience_Manager_C.EnterHouse
// (BlueprintCallable, BlueprintEvent)

void ABP_Ambience_Manager_C::EnterHouse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "EnterHouse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ambience_Manager.BP_Ambience_Manager_C.ResetAmbience
// (BlueprintCallable, BlueprintEvent)

void ABP_Ambience_Manager_C::ResetAmbience()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "ResetAmbience");

	UObject::ProcessEvent(Func, nullptr);
}

}
