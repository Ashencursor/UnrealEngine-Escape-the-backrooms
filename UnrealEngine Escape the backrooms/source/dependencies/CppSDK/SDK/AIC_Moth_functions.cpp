#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_Moth

#include "Basic.hpp"

#include "AIC_Moth_classes.hpp"
#include "AIC_Moth_parameters.hpp"


namespace SDK
{

// Function AIC_Moth.AIC_Moth_C.ExecuteUbergraph_AIC_Moth
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Moth_C::ExecuteUbergraph_AIC_Moth(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "ExecuteUbergraph_AIC_Moth");

	Params::AIC_Moth_C_ExecuteUbergraph_AIC_Moth Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Moth.AIC_Moth_C.ResetSensing
// (BlueprintCallable, BlueprintEvent)

void AAIC_Moth_C::ResetSensing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "ResetSensing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Moth.AIC_Moth_C.OnSensedPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Moth_C::OnSensedPlayer(class ABPCharacter_Demo_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "OnSensedPlayer");

	Params::AIC_Moth_C_OnSensedPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Moth.AIC_Moth_C.ResetAggressive
// (BlueprintCallable, BlueprintEvent)

void AAIC_Moth_C::ResetAggressive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "ResetAggressive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Moth.AIC_Moth_C.BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class APawn*                            Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Moth_C::BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature(class APawn* Instigator_0, const struct FVector& Location, float Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature");

	Params::AIC_Moth_C_BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature Parms{};

	Parms.Instigator_0 = Instigator_0;
	Parms.Location = std::move(Location);
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Moth.AIC_Moth_C.TriggerAggressive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Target_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Moth_C::TriggerAggressive(class ABPCharacter_Demo_C* Target_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "TriggerAggressive");

	Params::AIC_Moth_C_TriggerAggressive Parms{};

	Parms.Target_0 = Target_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Moth.AIC_Moth_C.Retreat
// (BlueprintCallable, BlueprintEvent)

void AAIC_Moth_C::Retreat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "Retreat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_Moth.AIC_Moth_C.BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                            Pawn_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Moth_C::BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::AIC_Moth_C_BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_Moth.AIC_Moth_C.Setup AI
// (BlueprintCallable, BlueprintEvent)

void AAIC_Moth_C::Setup_AI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_Moth_C", "Setup AI");

	UObject::ProcessEvent(Func, nullptr);
}

}
