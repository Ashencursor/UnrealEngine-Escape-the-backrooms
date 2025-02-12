#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LobbyActor

#include "Basic.hpp"

#include "BP_LobbyActor_classes.hpp"
#include "BP_LobbyActor_parameters.hpp"


namespace SDK
{

// Function BP_LobbyActor.BP_LobbyActor_C.ExecuteUbergraph_BP_LobbyActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyActor_C::ExecuteUbergraph_BP_LobbyActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "ExecuteUbergraph_BP_LobbyActor");

	Params::BP_LobbyActor_C_ExecuteUbergraph_BP_LobbyActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyActor.BP_LobbyActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LobbyActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LobbyActor.BP_LobbyActor_C.ToggleKeyboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LobbyActor_C::ToggleKeyboard(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "ToggleKeyboard");

	Params::BP_LobbyActor_C_ToggleKeyboard Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyActor.BP_LobbyActor_C.CloseSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_LobbyActor_C::CloseSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "CloseSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LobbyActor.BP_LobbyActor_C.OpenSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_LobbyActor_C::OpenSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "OpenSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LobbyActor.BP_LobbyActor_C.InpActEvt_Secondary_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_LobbyActor_C::InpActEvt_Secondary_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "InpActEvt_Secondary_K2Node_InputActionEvent_0");

	Params::BP_LobbyActor_C_InpActEvt_Secondary_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyActor.BP_LobbyActor_C.InpActEvt_Secondary_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_LobbyActor_C::InpActEvt_Secondary_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "InpActEvt_Secondary_K2Node_InputActionEvent_1");

	Params::BP_LobbyActor_C_InpActEvt_Secondary_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyActor.BP_LobbyActor_C.InpActEvt_Interact_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_LobbyActor_C::InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "InpActEvt_Interact_K2Node_InputActionEvent_2");

	Params::BP_LobbyActor_C_InpActEvt_Interact_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyActor.BP_LobbyActor_C.InpActEvt_Use_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_LobbyActor_C::InpActEvt_Use_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "InpActEvt_Use_K2Node_InputActionEvent_3");

	Params::BP_LobbyActor_C_InpActEvt_Use_K2Node_InputActionEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyActor.BP_LobbyActor_C.InpActEvt_Use_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_LobbyActor_C::InpActEvt_Use_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "InpActEvt_Use_K2Node_InputActionEvent_4");

	Params::BP_LobbyActor_C_InpActEvt_Use_K2Node_InputActionEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyActor.BP_LobbyActor_C.RefreshFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyActor_C::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "RefreshFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LobbyActor.BP_LobbyActor_C.ToggleWidgetInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LobbyActor_C::ToggleWidgetInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "ToggleWidgetInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LobbyActor.BP_LobbyActor_C.Update Beam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LobbyActor_C::Update_Beam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyActor_C", "Update Beam");

	UObject::ProcessEvent(Func, nullptr);
}

}

