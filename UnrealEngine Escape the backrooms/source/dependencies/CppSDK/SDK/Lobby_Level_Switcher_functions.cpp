#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Level_Switcher

#include "Basic.hpp"

#include "Lobby_Level_Switcher_classes.hpp"
#include "Lobby_Level_Switcher_parameters.hpp"


namespace SDK
{

// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.OnLevelSwitched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedOption_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULobby_Level_Switcher_C::OnLevelSwitched__DelegateSignature(const class FString& SelectedOption_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "OnLevelSwitched__DelegateSignature");

	Params::Lobby_Level_Switcher_C_OnLevelSwitched__DelegateSignature Parms{};

	Parms.SelectedOption_0 = std::move(SelectedOption_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.ExecuteUbergraph_Lobby_Level_Switcher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobby_Level_Switcher_C::ExecuteUbergraph_Lobby_Level_Switcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "ExecuteUbergraph_Lobby_Level_Switcher");

	Params::Lobby_Level_Switcher_C_ExecuteUbergraph_Lobby_Level_Switcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)

void ULobby_Level_Switcher_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "CanClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_Level_Switcher_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "PreConstruct");

	Params::Lobby_Level_Switcher_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobby_Level_Switcher_C::BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULobby_Level_Switcher_C::BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.UpdateOptions
// (BlueprintCallable, BlueprintEvent)

void ULobby_Level_Switcher_C::UpdateOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "UpdateOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void ULobby_Level_Switcher_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.Switch_Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Decrease_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_Level_Switcher_C::Switch_Option(bool Decrease_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "Switch_Option");

	Params::Lobby_Level_Switcher_C_Switch_Option Parms{};

	Parms.Decrease_ = Decrease_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.Set_SelectedOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedOption_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULobby_Level_Switcher_C::Set_SelectedOption(const class FString& SelectedOption_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "Set_SelectedOption");

	Params::Lobby_Level_Switcher_C_Set_SelectedOption Parms{};

	Parms.SelectedOption_0 = std::move(SelectedOption_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobby_Level_Switcher_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.Set_OptionButtons_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowOptionButtons_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_Level_Switcher_C::Set_OptionButtons_Visibility(bool ShowOptionButtons_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "Set_OptionButtons_Visibility");

	Params::Lobby_Level_Switcher_C_Set_OptionButtons_Visibility Parms{};

	Parms.ShowOptionButtons_ = ShowOptionButtons_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.GetTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ULobby_Level_Switcher_C::GetTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "GetTime");

	Params::Lobby_Level_Switcher_C_GetTime Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Lobby_Level_Switcher.Lobby_Level_Switcher_C.RoundedTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           RoundedTime_0                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ULobby_Level_Switcher_C::RoundedTime(float Time, class FString* RoundedTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Level_Switcher_C", "RoundedTime");

	Params::Lobby_Level_Switcher_C_RoundedTime Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (RoundedTime_0 != nullptr)
		*RoundedTime_0 = std::move(Parms.RoundedTime_0);
}

}
