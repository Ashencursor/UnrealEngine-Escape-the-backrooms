#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndCutscene_UI

#include "Basic.hpp"

#include "EndCutscene_UI_classes.hpp"
#include "EndCutscene_UI_parameters.hpp"


namespace SDK
{

// Function EndCutscene_UI.EndCutscene_UI_C.ExecuteUbergraph_EndCutscene_UI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEndCutscene_UI_C::ExecuteUbergraph_EndCutscene_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndCutscene_UI_C", "ExecuteUbergraph_EndCutscene_UI");

	Params::EndCutscene_UI_C_ExecuteUbergraph_EndCutscene_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndCutscene_UI.EndCutscene_UI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEndCutscene_UI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndCutscene_UI_C", "PreConstruct");

	Params::EndCutscene_UI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndCutscene_UI.EndCutscene_UI_C.OnFinish
// (BlueprintCallable, BlueprintEvent)

void UEndCutscene_UI_C::OnFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndCutscene_UI_C", "OnFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndCutscene_UI.EndCutscene_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEndCutscene_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndCutscene_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
