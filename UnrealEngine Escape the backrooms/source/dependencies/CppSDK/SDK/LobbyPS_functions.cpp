#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPS

#include "Basic.hpp"

#include "LobbyPS_classes.hpp"
#include "LobbyPS_parameters.hpp"


namespace SDK
{

// Function LobbyPS.LobbyPS_C.ExecuteUbergraph_LobbyPS
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyPS_C::ExecuteUbergraph_LobbyPS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "ExecuteUbergraph_LobbyPS");

	Params::LobbyPS_C_ExecuteUbergraph_LobbyPS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyPS.LobbyPS_C.OC_Init
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ALobbyPS_C::OC_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "OC_Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPS.LobbyPS_C.SR_Toggle_Ready_Status
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ALobbyPS_C::SR_Toggle_Ready_Status()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "SR_Toggle_Ready_Status");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPS.LobbyPS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyPS_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPS.LobbyPS_C.Set_ReadyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReadyStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::Set_ReadyStatus(bool ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "Set_ReadyStatus");

	Params::LobbyPS_C_Set_ReadyStatus Parms{};

	Parms.ReadyStatus = ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyPS.LobbyPS_C.Get_ReadyStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReadyStatus                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::Get_ReadyStatus(bool* ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "Get_ReadyStatus");

	Params::LobbyPS_C_Get_ReadyStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReadyStatus != nullptr)
		*ReadyStatus = Parms.ReadyStatus;
}


// Function LobbyPS.LobbyPS_C.ToggleReadyStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyPS_C::ToggleReadyStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "ToggleReadyStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPS.LobbyPS_C.OnRep_Player_UserProfile_OR
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyPS_C::OnRep_Player_UserProfile_OR()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "OnRep_Player_UserProfile_OR");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPS.LobbyPS_C.OnRep_Player_ConnectionInfo_OR
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyPS_C::OnRep_Player_ConnectionInfo_OR()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "OnRep_Player_ConnectionInfo_OR");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyPS.LobbyPS_C.Load_Player_ConnectionInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Client_ReadyStatus                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::Load_Player_ConnectionInfo(bool Client_ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyPS_C", "Load_Player_ConnectionInfo");

	Params::LobbyPS_C_Load_Player_ConnectionInfo Parms{};

	Parms.Client_ReadyStatus = Client_ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}
