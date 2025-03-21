#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DroppedItem_Jelly

#include "Basic.hpp"

#include "BP_DroppedItem_Jelly_classes.hpp"
#include "BP_DroppedItem_Jelly_parameters.hpp"


namespace SDK
{

// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.ExecuteUbergraph_BP_DroppedItem_Jelly
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_Jelly_C::ExecuteUbergraph_BP_DroppedItem_Jelly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_Jelly_C", "ExecuteUbergraph_BP_DroppedItem_Jelly");

	Params::BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.OnEventLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EEventType                              EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_Jelly_C::OnEventLoaded(EEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_Jelly_C", "OnEventLoaded");

	Params::BP_DroppedItem_Jelly_C_OnEventLoaded Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_Jelly_C::ToggleEvent(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_Jelly_C", "ToggleEvent");

	Params::BP_DroppedItem_Jelly_C_ToggleEvent Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

