#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Chainsaw

#include "Basic.hpp"

#include "BP_Item_Chainsaw_classes.hpp"
#include "BP_Item_Chainsaw_parameters.hpp"


namespace SDK
{

// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.ExecuteUbergraph_BP_Item_Chainsaw
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::ExecuteUbergraph_BP_Item_Chainsaw(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "ExecuteUbergraph_BP_Item_Chainsaw");

	Params::BP_Item_Chainsaw_C_ExecuteUbergraph_BP_Item_Chainsaw Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Item_Chainsaw_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OC_Trace
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Item_Chainsaw_C::OC_Trace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OC_Trace");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.PlayAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Item_Chainsaw_C::PlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "PlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.Damage_SERVER
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFancyCharacter*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::Damage_SERVER(class UObject* Target, class AFancyCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "Damage_SERVER");

	Params::BP_Item_Chainsaw_C_Damage_SERVER Parms{};

	Parms.Target = Target;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnCompleted_FBCA7ED7436A8ED7C154A2B37E6C3659
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnCompleted_FBCA7ED7436A8ED7C154A2B37E6C3659(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnCompleted_FBCA7ED7436A8ED7C154A2B37E6C3659");

	Params::BP_Item_Chainsaw_C_OnCompleted_FBCA7ED7436A8ED7C154A2B37E6C3659 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnBlendOut_FBCA7ED7436A8ED7C154A2B37E6C3659
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnBlendOut_FBCA7ED7436A8ED7C154A2B37E6C3659(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnBlendOut_FBCA7ED7436A8ED7C154A2B37E6C3659");

	Params::BP_Item_Chainsaw_C_OnBlendOut_FBCA7ED7436A8ED7C154A2B37E6C3659 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnInterrupted_FBCA7ED7436A8ED7C154A2B37E6C3659
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnInterrupted_FBCA7ED7436A8ED7C154A2B37E6C3659(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnInterrupted_FBCA7ED7436A8ED7C154A2B37E6C3659");

	Params::BP_Item_Chainsaw_C_OnInterrupted_FBCA7ED7436A8ED7C154A2B37E6C3659 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnNotifyBegin_FBCA7ED7436A8ED7C154A2B37E6C3659
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnNotifyBegin_FBCA7ED7436A8ED7C154A2B37E6C3659(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnNotifyBegin_FBCA7ED7436A8ED7C154A2B37E6C3659");

	Params::BP_Item_Chainsaw_C_OnNotifyBegin_FBCA7ED7436A8ED7C154A2B37E6C3659 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnNotifyEnd_FBCA7ED7436A8ED7C154A2B37E6C3659
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnNotifyEnd_FBCA7ED7436A8ED7C154A2B37E6C3659(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnNotifyEnd_FBCA7ED7436A8ED7C154A2B37E6C3659");

	Params::BP_Item_Chainsaw_C_OnNotifyEnd_FBCA7ED7436A8ED7C154A2B37E6C3659 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnCompleted_702F9C624045D5D1016E778DEB923CD4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnCompleted_702F9C624045D5D1016E778DEB923CD4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnCompleted_702F9C624045D5D1016E778DEB923CD4");

	Params::BP_Item_Chainsaw_C_OnCompleted_702F9C624045D5D1016E778DEB923CD4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnBlendOut_702F9C624045D5D1016E778DEB923CD4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnBlendOut_702F9C624045D5D1016E778DEB923CD4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnBlendOut_702F9C624045D5D1016E778DEB923CD4");

	Params::BP_Item_Chainsaw_C_OnBlendOut_702F9C624045D5D1016E778DEB923CD4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnInterrupted_702F9C624045D5D1016E778DEB923CD4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnInterrupted_702F9C624045D5D1016E778DEB923CD4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnInterrupted_702F9C624045D5D1016E778DEB923CD4");

	Params::BP_Item_Chainsaw_C_OnInterrupted_702F9C624045D5D1016E778DEB923CD4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnNotifyBegin_702F9C624045D5D1016E778DEB923CD4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnNotifyBegin_702F9C624045D5D1016E778DEB923CD4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnNotifyBegin_702F9C624045D5D1016E778DEB923CD4");

	Params::BP_Item_Chainsaw_C_OnNotifyBegin_702F9C624045D5D1016E778DEB923CD4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.OnNotifyEnd_702F9C624045D5D1016E778DEB923CD4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Chainsaw_C::OnNotifyEnd_702F9C624045D5D1016E778DEB923CD4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "OnNotifyEnd_702F9C624045D5D1016E778DEB923CD4");

	Params::BP_Item_Chainsaw_C_OnNotifyEnd_702F9C624045D5D1016E778DEB923CD4 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.Recoil__UpdateFunc
// (BlueprintEvent)

void ABP_Item_Chainsaw_C::Recoil__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "Recoil__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.Recoil__FinishedFunc
// (BlueprintEvent)

void ABP_Item_Chainsaw_C::Recoil__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "Recoil__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.UseItem
// (BlueprintCallable, BlueprintEvent)

void ABP_Item_Chainsaw_C::UseItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "UseItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Item_Chainsaw.BP_Item_Chainsaw_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EnabledFOV                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_Chainsaw_C::SetMaterial(bool EnabledFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Item_Chainsaw_C", "SetMaterial");

	Params::BP_Item_Chainsaw_C_SetMaterial Parms{};

	Parms.EnabledFOV = EnabledFOV;

	UObject::ProcessEvent(Func, &Parms);
}

}
