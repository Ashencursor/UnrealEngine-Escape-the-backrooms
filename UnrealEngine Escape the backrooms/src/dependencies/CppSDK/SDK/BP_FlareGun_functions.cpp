#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlareGun

#include "Basic.hpp"

#include "BP_FlareGun_classes.hpp"
#include "BP_FlareGun_parameters.hpp"


namespace SDK
{

// Function BP_FlareGun.BP_FlareGun_C.ExecuteUbergraph_BP_FlareGun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareGun_C::ExecuteUbergraph_BP_FlareGun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "ExecuteUbergraph_BP_FlareGun");

	Params::BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareGun.BP_FlareGun_C.MC_Fire
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_FlareGun_C::MC_Fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "MC_Fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlareGun.BP_FlareGun_C.OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareGun_C::OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5");

	Params::BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareGun.BP_FlareGun_C.OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareGun_C::OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5");

	Params::BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareGun.BP_FlareGun_C.OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareGun_C::OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5");

	Params::BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareGun.BP_FlareGun_C.OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareGun_C::OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5");

	Params::BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareGun.BP_FlareGun_C.OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlareGun_C::OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5");

	Params::BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlareGun.BP_FlareGun_C.UseItem
// (BlueprintCallable, BlueprintEvent)

void ABP_FlareGun_C::UseItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlareGun_C", "UseItem");

	UObject::ProcessEvent(Func, nullptr);
}

}
