#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerCard_UI

#include "Basic.hpp"

#include "PlayerCard_UI_classes.hpp"
#include "PlayerCard_UI_parameters.hpp"


namespace SDK
{

// Function PlayerCard_UI.PlayerCard_UI_C.ExecuteUbergraph_PlayerCard_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerCard_UI_C::ExecuteUbergraph_PlayerCard_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCard_UI_C", "ExecuteUbergraph_PlayerCard_UI");

	Params::PlayerCard_UI_C_ExecuteUbergraph_PlayerCard_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCard_UI.PlayerCard_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerCard_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCard_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCard_UI.PlayerCard_UI_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerCard_UI_C::SetName(const class FText& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCard_UI_C", "SetName");

	Params::PlayerCard_UI_C_SetName Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCard_UI.PlayerCard_UI_C.GetLevelColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerCard_UI_C::GetLevelColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCard_UI_C", "GetLevelColor");

	Params::PlayerCard_UI_C_GetLevelColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}

}
