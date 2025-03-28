#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Keyboard_Basic

#include "Basic.hpp"

#include "WBP_Keyboard_Basic_classes.hpp"
#include "WBP_Keyboard_Basic_parameters.hpp"


namespace SDK
{

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.EnterButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TextToSend                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Keyboard_Basic_C::EnterButtonPressed__DelegateSignature(const class FText& TextToSend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "EnterButtonPressed__DelegateSignature");

	Params::WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature Parms{};

	Parms.TextToSend = std::move(TextToSend);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.WebBrowserButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Keyboard_Basic_C::WebBrowserButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "WebBrowserButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.ExecuteUbergraph_WBP_Keyboard_Basic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::ExecuteUbergraph_WBP_Keyboard_Basic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "ExecuteUbergraph_WBP_Keyboard_Basic");

	Params::WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SetComponentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetInteractionComponent*      WidgetInteractionComponent                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SetComponentReference");

	Params::WBP_Keyboard_Basic_C_SetComponentReference Parms{};

	Parms.WidgetInteractionComponent = WidgetInteractionComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// EModifierKeys                           Modifier                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::ButtonPressed(const class FText& ButtonText, EModifierKeys Modifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "ButtonPressed");

	Params::WBP_Keyboard_Basic_C_ButtonPressed Parms{};

	Parms.ButtonText = std::move(ButtonText);
	Parms.Modifier = Modifier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.KeyboardButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonTextToUse                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// EModifierKeys                           ModifierKeyToUse                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::KeyboardButtonPressed(const class FText& ButtonTextToUse, EModifierKeys ModifierKeyToUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "KeyboardButtonPressed");

	Params::WBP_Keyboard_Basic_C_KeyboardButtonPressed Parms{};

	Parms.ButtonTextToUse = std::move(ButtonTextToUse);
	Parms.ModifierKeyToUse = ModifierKeyToUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Keyboard_Basic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SymbolLock
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Keyboard_Basic_C::SymbolLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SymbolLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.Space
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Keyboard_Basic_C::Space()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "Space");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.Shift
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Keyboard_Basic_C::Shift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "Shift");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SendKeyboardText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Keyboard_Basic_C::SendKeyboardText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SendKeyboardText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.CapsLock
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Keyboard_Basic_C::CapsLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "CapsLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.DetermineButtonFunctionality
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// EModifierKeys                           ModifierKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::DetermineButtonFunctionality(const class FText& ButtonText, EModifierKeys ModifierKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "DetermineButtonFunctionality");

	Params::WBP_Keyboard_Basic_C_DetermineButtonFunctionality Parms{};

	Parms.ButtonText = std::move(ButtonText);
	Parms.ModifierKey = ModifierKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SendButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonTextToSend                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Keyboard_Basic_C::SendButtonText(const class FText& ButtonTextToSend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SendButtonText");

	Params::WBP_Keyboard_Basic_C_SendButtonText Parms{};

	Parms.ButtonTextToSend = std::move(ButtonTextToSend);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.UseModifierButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EModifierKeys                           ModifierToUse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::UseModifierButton(EModifierKeys ModifierToUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "UseModifierButton");

	Params::WBP_Keyboard_Basic_C_UseModifierButton Parms{};

	Parms.ModifierToUse = ModifierToUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SetButtonArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Keyboard_Basic_C::SetButtonArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SetButtonArray");

	UObject::ProcessEvent(Func, nullptr);
}

}

