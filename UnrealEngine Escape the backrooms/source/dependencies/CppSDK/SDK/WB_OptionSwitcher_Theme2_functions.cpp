#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_OptionSwitcher_Theme2

#include "Basic.hpp"

#include "WB_OptionSwitcher_Theme2_classes.hpp"
#include "WB_OptionSwitcher_Theme2_parameters.hpp"


namespace SDK
{

// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.OnOptionSwitched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedOption_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_OptionSwitcher_Theme2_C::OnOptionSwitched__DelegateSignature(const class FString& SelectedOption_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "OnOptionSwitched__DelegateSignature");

	Params::WB_OptionSwitcher_Theme2_C_OnOptionSwitched__DelegateSignature Parms{};

	Parms.SelectedOption_0 = std::move(SelectedOption_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.ExecuteUbergraph_WB_OptionSwitcher_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_OptionSwitcher_Theme2_C::ExecuteUbergraph_WB_OptionSwitcher_Theme2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "ExecuteUbergraph_WB_OptionSwitcher_Theme2");

	Params::WB_OptionSwitcher_Theme2_C_ExecuteUbergraph_WB_OptionSwitcher_Theme2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_OptionSwitcher_Theme2_C::BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_OptionSwitcher_Theme2_C::BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_OptionSwitcher_Theme2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_OptionSwitcher_Theme2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "PreConstruct");

	Params::WB_OptionSwitcher_Theme2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.Switch_Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Decrease_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_OptionSwitcher_Theme2_C::Switch_Option(bool Decrease_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "Switch_Option");

	Params::WB_OptionSwitcher_Theme2_C_Switch_Option Parms{};

	Parms.Decrease_ = Decrease_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.Set_SelectedOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedOption_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_OptionSwitcher_Theme2_C::Set_SelectedOption(const class FString& SelectedOption_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "Set_SelectedOption");

	Params::WB_OptionSwitcher_Theme2_C_Set_SelectedOption Parms{};

	Parms.SelectedOption_0 = std::move(SelectedOption_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_OptionSwitcher_Theme2_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_OptionSwitcher_Theme2_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}

}
