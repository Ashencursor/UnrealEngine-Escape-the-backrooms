#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuFlickering

#include "Basic.hpp"

#include "BP_MenuFlickering_classes.hpp"
#include "BP_MenuFlickering_parameters.hpp"


namespace SDK
{

// Function BP_MenuFlickering.BP_MenuFlickering_C.Flicker__FinishedFunc
// (BlueprintEvent)

void ABP_MenuFlickering_C::Flicker__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuFlickering_C", "Flicker__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuFlickering.BP_MenuFlickering_C.Flicker__UpdateFunc
// (BlueprintEvent)

void ABP_MenuFlickering_C::Flicker__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuFlickering_C", "Flicker__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuFlickering.BP_MenuFlickering_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuFlickering_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuFlickering_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuFlickering.BP_MenuFlickering_C.ExecuteUbergraph_BP_MenuFlickering
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuFlickering_C::ExecuteUbergraph_BP_MenuFlickering(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuFlickering_C", "ExecuteUbergraph_BP_MenuFlickering");

	Params::BP_MenuFlickering_C_ExecuteUbergraph_BP_MenuFlickering Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
