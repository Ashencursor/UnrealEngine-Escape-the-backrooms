#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VOIPAnim

#include "Basic.hpp"

#include "W_VOIPAnim_classes.hpp"
#include "W_VOIPAnim_parameters.hpp"


namespace SDK
{

// Function W_VOIPAnim.W_VOIPAnim_C.ExecuteUbergraph_W_VOIPAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIPAnim_C::ExecuteUbergraph_W_VOIPAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VOIPAnim_C", "ExecuteUbergraph_W_VOIPAnim");

	Params::W_VOIPAnim_C_ExecuteUbergraph_W_VOIPAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_VOIPAnim.W_VOIPAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_VOIPAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VOIPAnim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

