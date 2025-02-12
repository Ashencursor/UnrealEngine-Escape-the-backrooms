#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Diving_Helmet

#include "Basic.hpp"

#include "BP_Diving_Helmet_classes.hpp"
#include "BP_Diving_Helmet_parameters.hpp"


namespace SDK
{

// Function BP_Diving_Helmet.BP_Diving_Helmet_C.ExecuteUbergraph_BP_Diving_Helmet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Diving_Helmet_C::ExecuteUbergraph_BP_Diving_Helmet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "ExecuteUbergraph_BP_Diving_Helmet");

	Params::BP_Diving_Helmet_C_ExecuteUbergraph_BP_Diving_Helmet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.SRV_EquipHelmet
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Diving_Helmet_C::SRV_EquipHelmet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "SRV_EquipHelmet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.PlayAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Diving_Helmet_C::PlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "PlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.OnCompleted_3FE3233945D5FF790518F1ADBD2F23FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Diving_Helmet_C::OnCompleted_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "OnCompleted_3FE3233945D5FF790518F1ADBD2F23FC");

	Params::BP_Diving_Helmet_C_OnCompleted_3FE3233945D5FF790518F1ADBD2F23FC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.OnBlendOut_3FE3233945D5FF790518F1ADBD2F23FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Diving_Helmet_C::OnBlendOut_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "OnBlendOut_3FE3233945D5FF790518F1ADBD2F23FC");

	Params::BP_Diving_Helmet_C_OnBlendOut_3FE3233945D5FF790518F1ADBD2F23FC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.OnInterrupted_3FE3233945D5FF790518F1ADBD2F23FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Diving_Helmet_C::OnInterrupted_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "OnInterrupted_3FE3233945D5FF790518F1ADBD2F23FC");

	Params::BP_Diving_Helmet_C_OnInterrupted_3FE3233945D5FF790518F1ADBD2F23FC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.OnNotifyBegin_3FE3233945D5FF790518F1ADBD2F23FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Diving_Helmet_C::OnNotifyBegin_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "OnNotifyBegin_3FE3233945D5FF790518F1ADBD2F23FC");

	Params::BP_Diving_Helmet_C_OnNotifyBegin_3FE3233945D5FF790518F1ADBD2F23FC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.OnNotifyEnd_3FE3233945D5FF790518F1ADBD2F23FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Diving_Helmet_C::OnNotifyEnd_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "OnNotifyEnd_3FE3233945D5FF790518F1ADBD2F23FC");

	Params::BP_Diving_Helmet_C_OnNotifyEnd_3FE3233945D5FF790518F1ADBD2F23FC Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.Shift__UpdateFunc
// (BlueprintEvent)

void ABP_Diving_Helmet_C::Shift__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "Shift__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.Shift__FinishedFunc
// (BlueprintEvent)

void ABP_Diving_Helmet_C::Shift__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "Shift__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Diving_Helmet.BP_Diving_Helmet_C.UseItem
// (BlueprintCallable, BlueprintEvent)

void ABP_Diving_Helmet_C::UseItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Diving_Helmet_C", "UseItem");

	UObject::ProcessEvent(Func, nullptr);
}

}

