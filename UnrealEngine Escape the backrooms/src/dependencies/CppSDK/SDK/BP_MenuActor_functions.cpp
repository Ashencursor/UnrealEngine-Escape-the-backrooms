#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuActor

#include "Basic.hpp"

#include "BP_MenuActor_classes.hpp"
#include "BP_MenuActor_parameters.hpp"


namespace SDK
{

// Function BP_MenuActor.BP_MenuActor_C.ExecuteUbergraph_BP_MenuActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuActor_C::ExecuteUbergraph_BP_MenuActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "ExecuteUbergraph_BP_MenuActor");

	Params::BP_MenuActor_C_ExecuteUbergraph_BP_MenuActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.HeldRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Down                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MenuActor_C::HeldRight(bool Down)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "HeldRight");

	Params::BP_MenuActor_C_HeldRight Parms{};

	Parms.Down = Down;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.HeldLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Down                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MenuActor_C::HeldLeft(bool Down)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "HeldLeft");

	Params::BP_MenuActor_C_HeldLeft Parms{};

	Parms.Down = Down;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.CloseWarning
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuActor_C::CloseWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "CloseWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.MoveTo
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuActor_C::MoveTo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "MoveTo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.ToggleKeyboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MenuActor_C::ToggleKeyboard(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "ToggleKeyboard");

	Params::BP_MenuActor_C_ToggleKeyboard Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.CloseSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuActor_C::CloseSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "CloseSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.OpenSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuActor_C::OpenSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "OpenSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.InpActEvt_Secondary_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuActor_C::InpActEvt_Secondary_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "InpActEvt_Secondary_K2Node_InputActionEvent_0");

	Params::BP_MenuActor_C_InpActEvt_Secondary_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.InpActEvt_Secondary_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuActor_C::InpActEvt_Secondary_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "InpActEvt_Secondary_K2Node_InputActionEvent_1");

	Params::BP_MenuActor_C_InpActEvt_Secondary_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.InpActEvt_Interact_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuActor_C::InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "InpActEvt_Interact_K2Node_InputActionEvent_2");

	Params::BP_MenuActor_C_InpActEvt_Interact_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.InpActEvt_Use_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuActor_C::InpActEvt_Use_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "InpActEvt_Use_K2Node_InputActionEvent_3");

	Params::BP_MenuActor_C_InpActEvt_Use_K2Node_InputActionEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.InpActEvt_Use_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MenuActor_C::InpActEvt_Use_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "InpActEvt_Use_K2Node_InputActionEvent_4");

	Params::BP_MenuActor_C_InpActEvt_Use_K2Node_InputActionEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuActor.BP_MenuActor_C.SmoothMove__UpdateFunc
// (BlueprintEvent)

void ABP_MenuActor_C::SmoothMove__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "SmoothMove__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.SmoothMove__FinishedFunc
// (BlueprintEvent)

void ABP_MenuActor_C::SmoothMove__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "SmoothMove__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.RefreshFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuActor_C::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "RefreshFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.ToggleWidgetInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuActor_C::ToggleWidgetInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "ToggleWidgetInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuActor.BP_MenuActor_C.Update Beam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MenuActor_C::Update_Beam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuActor_C", "Update Beam");

	UObject::ProcessEvent(Func, nullptr);
}

}

