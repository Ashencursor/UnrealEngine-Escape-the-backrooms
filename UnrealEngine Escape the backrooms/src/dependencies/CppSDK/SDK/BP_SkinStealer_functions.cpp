#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkinStealer

#include "Basic.hpp"

#include "BP_SkinStealer_classes.hpp"
#include "BP_SkinStealer_parameters.hpp"


namespace SDK
{

// Function BP_SkinStealer.BP_SkinStealer_C.ExecuteUbergraph_BP_SkinStealer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkinStealer_C::ExecuteUbergraph_BP_SkinStealer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "ExecuteUbergraph_BP_SkinStealer");

	Params::BP_SkinStealer_C_ExecuteUbergraph_BP_SkinStealer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.MC_Material
// (BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::MC_Material()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "MC_Material");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.ToggleSprint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSprinting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkinStealer_C::ToggleSprint(bool IsSprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "ToggleSprint");

	Params::BP_SkinStealer_C_ToggleSprint Parms{};

	Parms.IsSprinting = IsSprinting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.Dissolve
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::Dissolve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "Dissolve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.UpdateEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::UpdateEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "UpdateEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.MC_KillAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkinStealer_C::MC_KillAnimation(class ABPCharacter_Demo_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "MC_KillAnimation");

	Params::BP_SkinStealer_C_MC_KillAnimation Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.Jumpscare
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkinStealer_C::Jumpscare(class ABPCharacter_Demo_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "Jumpscare");

	Params::BP_SkinStealer_C_Jumpscare Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkinStealer_C::BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_SkinStealer_C_BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkinStealer_C::BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_SkinStealer_C_BndEvt__BP_SkinStealer_KillPlayer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.BndEvt__BP_SkinStealer_DisguiseBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkinStealer_C::BndEvt__BP_SkinStealer_DisguiseBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "BndEvt__BP_SkinStealer_DisguiseBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_SkinStealer_C_BndEvt__BP_SkinStealer_DisguiseBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.MC_Jumpscare
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::MC_Jumpscare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "MC_Jumpscare");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.AttackPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkinStealer_C::AttackPlayer(class ABPCharacter_Demo_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "AttackPlayer");

	Params::BP_SkinStealer_C_AttackPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.StopSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::StopSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "StopSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.StartSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::StartSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "StartSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkinStealer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.SprintSpeed__UpdateFunc
// (BlueprintEvent)

void ABP_SkinStealer_C::SprintSpeed__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "SprintSpeed__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.SprintSpeed__FinishedFunc
// (BlueprintEvent)

void ABP_SkinStealer_C::SprintSpeed__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "SprintSpeed__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.DissolvePlayer__UpdateFunc
// (BlueprintEvent)

void ABP_SkinStealer_C::DissolvePlayer__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "DissolvePlayer__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.DissolvePlayer__FinishedFunc
// (BlueprintEvent)

void ABP_SkinStealer_C::DissolvePlayer__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "DissolvePlayer__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.LookAtEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkinStealer_C::LookAtEntity(class ABPCharacter_Demo_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "LookAtEntity");

	Params::BP_SkinStealer_C_LookAtEntity Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkinStealer.BP_SkinStealer_C.StopMovement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::StopMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "StopMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.OnRep_IsDisguised
// (BlueprintCallable, BlueprintEvent)

void ABP_SkinStealer_C::OnRep_IsDisguised()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "OnRep_IsDisguised");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkinStealer.BP_SkinStealer_C.CanSeePlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanSee                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkinStealer_C::CanSeePlayer(class ABPCharacter_Demo_C* Target, bool* CanSee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkinStealer_C", "CanSeePlayer");

	Params::BP_SkinStealer_C_CanSeePlayer Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (CanSee != nullptr)
		*CanSee = Parms.CanSee;
}

}
