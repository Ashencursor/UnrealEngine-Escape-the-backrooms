#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MP_GameState

#include "Basic.hpp"

#include "MP_GameState_classes.hpp"
#include "MP_GameState_parameters.hpp"


namespace SDK
{

// Function MP_GameState.MP_GameState_C.ExecuteUbergraph_MP_GameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_GameState_C::ExecuteUbergraph_MP_GameState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_GameState_C", "ExecuteUbergraph_MP_GameState");

	Params::MP_GameState_C_ExecuteUbergraph_MP_GameState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MP_GameState.MP_GameState_C.SetMEGUnlocked
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AMP_GameState_C::SetMEGUnlocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_GameState_C", "SetMEGUnlocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_GameState.MP_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMP_GameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_GameState_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MP_GameState.MP_GameState_C.Generate Encrypted Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AMP_GameState_C::Generate_Encrypted_Name(const class FText& Level, class FString* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_GameState_C", "Generate Encrypted Name");

	Params::MP_GameState_C_Generate_Encrypted_Name Parms{};

	Parms.Level = std::move(Level);

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function MP_GameState.MP_GameState_C.GenerateUUID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMP_GameState_C::GenerateUUID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MP_GameState_C", "GenerateUUID");

	UObject::ProcessEvent(Func, nullptr);
}

}
