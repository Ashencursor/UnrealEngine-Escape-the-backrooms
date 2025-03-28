#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DroppedItem

#include "Basic.hpp"

#include "BP_DroppedItem_classes.hpp"
#include "BP_DroppedItem_parameters.hpp"


namespace SDK
{

// Function BP_DroppedItem.BP_DroppedItem_C.ExecuteUbergraph_BP_DroppedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_C::ExecuteUbergraph_BP_DroppedItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "ExecuteUbergraph_BP_DroppedItem");

	Params::BP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppedItem.BP_DroppedItem_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_C::ToggleEvent(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "ToggleEvent");

	Params::BP_DroppedItem_C_ToggleEvent Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppedItem.BP_DroppedItem_C.OnEventLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EEventType                              EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_C::OnEventLoaded(EEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "OnEventLoaded");

	Params::BP_DroppedItem_C_OnEventLoaded Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppedItem.BP_DroppedItem_C.OnBeginFocus
// (Event, Public, BlueprintEvent)

void ABP_DroppedItem_C::OnBeginFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "OnBeginFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DroppedItem.BP_DroppedItem_C.OnEndFocus
// (Event, Public, BlueprintEvent)

void ABP_DroppedItem_C::OnEndFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "OnEndFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DroppedItem.BP_DroppedItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DroppedItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DroppedItem.BP_DroppedItem_C.CollisionOff
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_DroppedItem_C::CollisionOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "CollisionOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DroppedItem.BP_DroppedItem_C.CollisionOn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_DroppedItem_C::CollisionOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "CollisionOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DroppedItem.BP_DroppedItem_C.ExamineModeOff
// (BlueprintCallable, BlueprintEvent)

void ABP_DroppedItem_C::ExamineModeOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "ExamineModeOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DroppedItem.BP_DroppedItem_C.ExamineModeOn
// (BlueprintCallable, BlueprintEvent)

void ABP_DroppedItem_C::ExamineModeOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppedItem_C", "ExamineModeOn");

	UObject::ProcessEvent(Func, nullptr);
}

}

