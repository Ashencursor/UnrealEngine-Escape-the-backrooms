#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_FOV_Theme2

#include "Basic.hpp"

#include "WB_FOV_Theme2_classes.hpp"
#include "WB_FOV_Theme2_parameters.hpp"


namespace SDK
{

// Function WB_FOV_Theme2.WB_FOV_Theme2_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_FOV_Theme2_C::OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_FOV_Theme2_C", "OnValueChanged__DelegateSignature");

	Params::WB_FOV_Theme2_C_OnValueChanged__DelegateSignature Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_FOV_Theme2.WB_FOV_Theme2_C.OnMouseCaptureEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_FOV_Theme2_C::OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_FOV_Theme2_C", "OnMouseCaptureEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_FOV_Theme2.WB_FOV_Theme2_C.ExecuteUbergraph_WB_FOV_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_FOV_Theme2_C::ExecuteUbergraph_WB_FOV_Theme2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_FOV_Theme2_C", "ExecuteUbergraph_WB_FOV_Theme2");

	Params::WB_FOV_Theme2_C_ExecuteUbergraph_WB_FOV_Theme2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_FOV_Theme2.WB_FOV_Theme2_C.BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UWB_FOV_Theme2_C::BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_FOV_Theme2_C", "BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_FOV_Theme2.WB_FOV_Theme2_C.BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_FOV_Theme2_C::BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_FOV_Theme2_C", "BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::WB_FOV_Theme2_C_BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_FOV_Theme2.WB_FOV_Theme2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_FOV_Theme2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_FOV_Theme2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_FOV_Theme2.WB_FOV_Theme2_C.Set_SliderValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_FOV_Theme2_C::Set_SliderValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_FOV_Theme2_C", "Set_SliderValue");

	Params::WB_FOV_Theme2_C_Set_SliderValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

