#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NoClip

#include "Basic.hpp"

#include "NoClip_classes.hpp"
#include "NoClip_parameters.hpp"


namespace SDK
{

// Function NoClip.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void NoClip::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NoClip.SequenceDirector_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void NoClip::USequenceDirector_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NoClip.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)

void NoClip::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	UObject::ProcessEvent(Func, nullptr);
}

}
