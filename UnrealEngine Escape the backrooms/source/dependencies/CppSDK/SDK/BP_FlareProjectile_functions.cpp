#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlareProjectile

#include "Basic.hpp"

#include "BP_FlareProjectile_classes.hpp"
#include "BP_FlareProjectile_parameters.hpp"


namespace SDK
{

// Function BP_FlareProjectile.BP_FlareProjectile_C.ExecuteUbergraph_BP_FlareProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareProjectile_C::ExecuteUbergraph_BP_FlareProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareProjectile_C", "ExecuteUbergraph_BP_FlareProjectile");

	Params::BP_FlareProjectile_C_ExecuteUbergraph_BP_FlareProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareProjectile.BP_FlareProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareProjectile_C", "ReceiveTick");

	Params::BP_FlareProjectile_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareProjectile.BP_FlareProjectile_C.Fade__Explode__EventFunc
// (BlueprintEvent)

void ABP_FlareProjectile_C::Fade__Explode__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareProjectile_C", "Fade__Explode__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlareProjectile.BP_FlareProjectile_C.Fade__UpdateFunc
// (BlueprintEvent)

void ABP_FlareProjectile_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareProjectile_C", "Fade__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlareProjectile.BP_FlareProjectile_C.Fade__FinishedFunc
// (BlueprintEvent)

void ABP_FlareProjectile_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareProjectile_C", "Fade__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
