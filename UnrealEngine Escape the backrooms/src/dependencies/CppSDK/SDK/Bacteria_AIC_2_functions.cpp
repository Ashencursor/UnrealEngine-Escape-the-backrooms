#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bacteria_AIC_2

#include "Basic.hpp"

#include "Bacteria_AIC_2_classes.hpp"
#include "Bacteria_AIC_2_parameters.hpp"


namespace SDK
{

// Function Bacteria_AIC_2.Bacteria_AIC_2_C.ExecuteUbergraph_Bacteria_AIC_2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_AIC_2_C::ExecuteUbergraph_Bacteria_AIC_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "ExecuteUbergraph_Bacteria_AIC_2");

	Params::Bacteria_AIC_2_C_ExecuteUbergraph_Bacteria_AIC_2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_AIC_2.Bacteria_AIC_2_C.SetCanTeleport
// (BlueprintCallable, BlueprintEvent)

void ABacteria_AIC_2_C::SetCanTeleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "SetCanTeleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_AIC_2.Bacteria_AIC_2_C.BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                            Pawn_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_AIC_2_C::BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::Bacteria_AIC_2_C_BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_AIC_2.Bacteria_AIC_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABacteria_AIC_2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
