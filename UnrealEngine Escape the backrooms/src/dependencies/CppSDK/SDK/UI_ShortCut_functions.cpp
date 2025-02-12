#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShortCut

#include "Basic.hpp"

#include "UI_ShortCut_classes.hpp"
#include "UI_ShortCut_parameters.hpp"


namespace SDK
{

// Function UI_ShortCut.UI_ShortCut_C.ExecuteUbergraph_UI_ShortCut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShortCut_C::ExecuteUbergraph_UI_ShortCut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ShortCut_C", "ExecuteUbergraph_UI_ShortCut");

	Params::UI_ShortCut_C_ExecuteUbergraph_UI_ShortCut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ShortCut.UI_ShortCut_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ShortCut_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ShortCut_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ShortCut.UI_ShortCut_C.BndEvt__UI_ShortCut_Click_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ShortCut_C::BndEvt__UI_ShortCut_Click_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ShortCut_C", "BndEvt__UI_ShortCut_Click_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ShortCut.UI_ShortCut_C.BndEvt__Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ShortCut_C::BndEvt__Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ShortCut_C", "BndEvt__Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

