#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Roaming_Smiler

#include "Basic.hpp"

#include "BP_Roaming_Smiler_classes.hpp"
#include "BP_Roaming_Smiler_parameters.hpp"


namespace SDK
{

// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.ExecuteUbergraph_BP_Roaming_Smiler
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Roaming_Smiler_C::ExecuteUbergraph_BP_Roaming_Smiler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "ExecuteUbergraph_BP_Roaming_Smiler");

	Params::BP_Roaming_Smiler_C_ExecuteUbergraph_BP_Roaming_Smiler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "FadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.BndEvt__Bacteria_Roaming_BP_KillPlayer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Roaming_Smiler_C::BndEvt__Bacteria_Roaming_BP_KillPlayer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "BndEvt__Bacteria_Roaming_BP_KillPlayer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Roaming_Smiler_C_BndEvt__Bacteria_Roaming_BP_KillPlayer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.FindTeleportLocation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::FindTeleportLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "FindTeleportLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.OnQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Roaming_Smiler_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "OnQueryFinished");

	Params::BP_Roaming_Smiler_C_OnQueryFinished Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.ResetSpotted
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::ResetSpotted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "ResetSpotted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.OnSpotted
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::OnSpotted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "OnSpotted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.ToggleSprint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSprinting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Roaming_Smiler_C::ToggleSprint(bool IsSprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "ToggleSprint");

	Params::BP_Roaming_Smiler_C_ToggleSprint Parms{};

	Parms.IsSprinting = IsSprinting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.MC_Jumpscare
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::MC_Jumpscare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "MC_Jumpscare");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.AttackPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Roaming_Smiler_C::AttackPlayer(class ABPCharacter_Demo_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "AttackPlayer");

	Params::BP_Roaming_Smiler_C_AttackPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Roaming_Smiler_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.Fade__UpdateFunc
// (BlueprintEvent)

void ABP_Roaming_Smiler_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "Fade__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.Fade__FinishedFunc
// (BlueprintEvent)

void ABP_Roaming_Smiler_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "Fade__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_Roaming_Smiler_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_Roaming_Smiler_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.lookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Roaming_Smiler_C::LookAt(class ABPCharacter_Demo_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "lookAt");

	Params::BP_Roaming_Smiler_C_LookAt Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.StopMovement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::StopMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "StopMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.LookAtPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Roaming_Smiler_C::LookAtPlayer(class ABPCharacter_Demo_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "LookAtPlayer");

	Params::BP_Roaming_Smiler_C_LookAtPlayer Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.CanSeePlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABPCharacter_Demo_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanSee                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Roaming_Smiler_C::CanSeePlayer(class ABPCharacter_Demo_C* Target, bool* CanSee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "CanSeePlayer");

	Params::BP_Roaming_Smiler_C_CanSeePlayer Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (CanSee != nullptr)
		*CanSee = Parms.CanSee;
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.CheckPlayersTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::CheckPlayersTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "CheckPlayersTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Roaming_Smiler.BP_Roaming_Smiler_C.OnRep_IsVisible
// (BlueprintCallable, BlueprintEvent)

void ABP_Roaming_Smiler_C::OnRep_IsVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Roaming_Smiler_C", "OnRep_IsVisible");

	UObject::ProcessEvent(Func, nullptr);
}

}
