#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bacteria_BP

#include "Basic.hpp"

#include "Bacteria_BP_classes.hpp"
#include "Bacteria_BP_parameters.hpp"


namespace SDK
{

// Function Bacteria_BP.Bacteria_BP_C.ExecuteUbergraph_Bacteria_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::ExecuteUbergraph_Bacteria_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "ExecuteUbergraph_Bacteria_BP");

	Params::Bacteria_BP_C_ExecuteUbergraph_Bacteria_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_BP.Bacteria_BP_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAudioComponentPlayState                PlayState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::OnStateChanged(EAudioComponentPlayState PlayState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "OnStateChanged");

	Params::Bacteria_BP_C_OnStateChanged Parms{};

	Parms.PlayState = PlayState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_BP.Bacteria_BP_C.SetupWorldShakes
// (BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::SetupWorldShakes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "SetupWorldShakes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.MC_KillAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::MC_KillAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "MC_KillAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.MC_KillSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::MC_KillSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "MC_KillSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.AttackPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::AttackPlayer(class ABPCharacter_Demo_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "AttackPlayer");

	Params::Bacteria_BP_C_AttackPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_BP.Bacteria_BP_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "ReceiveActorEndOverlap");

	Params::Bacteria_BP_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_BP.Bacteria_BP_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "ReceiveActorBeginOverlap");

	Params::Bacteria_BP_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_BP.Bacteria_BP_C.FaceClosestPlayer
// (BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::FaceClosestPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "FaceClosestPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.StopSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::StopSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "StopSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.StartSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::StartSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "StartSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABacteria_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.CalcLookAtRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::CalcLookAtRotation(class AActor* MyActor, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "CalcLookAtRotation");

	Params::Bacteria_BP_C_CalcLookAtRotation Parms{};

	Parms.MyActor = MyActor;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_BP.Bacteria_BP_C.SetNewSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewSpeed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::SetNewSpeed(int32 Count, float* NewSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "SetNewSpeed");

	Params::Bacteria_BP_C_SetNewSpeed Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

	if (NewSpeed != nullptr)
		*NewSpeed = Parms.NewSpeed;
}


// Function Bacteria_BP.Bacteria_BP_C.UpdateSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::UpdateSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "UpdateSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.UpdateTeleport
// (Public, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::UpdateTeleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "UpdateTeleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.GetClosestPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Closest                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::GetClosestPlayer(class ABPCharacter_Demo_C** Closest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "GetClosestPlayer");

	Params::Bacteria_BP_C_GetClosestPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Closest != nullptr)
		*Closest = Parms.Closest;
}


// Function Bacteria_BP.Bacteria_BP_C.LookAtEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_BP_C::LookAtEntity(class ABPCharacter_Demo_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "LookAtEntity");

	Params::Bacteria_BP_C_LookAtEntity Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bacteria_BP.Bacteria_BP_C.StopMovement
// (Public, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::StopMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "StopMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.ResetPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::ResetPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "ResetPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bacteria_BP.Bacteria_BP_C.CheckShakeTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABacteria_BP_C::CheckShakeTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bacteria_BP_C", "CheckShakeTime");

	UObject::ProcessEvent(Func, nullptr);
}

}
