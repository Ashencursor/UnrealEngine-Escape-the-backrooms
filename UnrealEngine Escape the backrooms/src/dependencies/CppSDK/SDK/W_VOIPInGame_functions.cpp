#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VOIPInGame

#include "Basic.hpp"

#include "W_VOIPInGame_classes.hpp"
#include "W_VOIPInGame_parameters.hpp"


namespace SDK
{

// Function W_VOIPInGame.W_VOIPInGame_C.ExecuteUbergraph_W_VOIPInGame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIPInGame_C::ExecuteUbergraph_W_VOIPInGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VOIPInGame_C", "ExecuteUbergraph_W_VOIPInGame");

	Params::W_VOIPInGame_C_ExecuteUbergraph_W_VOIPInGame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_VOIPInGame.W_VOIPInGame_C.SetVOIPIconVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activated_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_VOIPInGame_C::SetVOIPIconVisibility(bool Activated_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VOIPInGame_C", "SetVOIPIconVisibility");

	Params::W_VOIPInGame_C_SetVOIPIconVisibility Parms{};

	Parms.Activated_ = Activated_;

	UObject::ProcessEvent(Func, &Parms);
}

}

