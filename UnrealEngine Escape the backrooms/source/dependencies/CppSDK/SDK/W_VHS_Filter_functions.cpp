#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VHS_Filter

#include "Basic.hpp"

#include "W_VHS_Filter_classes.hpp"
#include "W_VHS_Filter_parameters.hpp"


namespace SDK
{

// Function W_VHS_Filter.W_VHS_Filter_C.ExecuteUbergraph_W_VHS_Filter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VHS_Filter_C::ExecuteUbergraph_W_VHS_Filter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "ExecuteUbergraph_W_VHS_Filter");

	Params::W_VHS_Filter_C_ExecuteUbergraph_W_VHS_Filter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_VHS_Filter.W_VHS_Filter_C.BndEvt__Button_No_K2Node_ComponentBoundEvent_236_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_VHS_Filter_C::BndEvt__Button_No_K2Node_ComponentBoundEvent_236_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "BndEvt__Button_No_K2Node_ComponentBoundEvent_236_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VHS_Filter.W_VHS_Filter_C.BndEvt__Button_Yes_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_VHS_Filter_C::BndEvt__Button_Yes_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "BndEvt__Button_Yes_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VHS_Filter.W_VHS_Filter_C.ShowVHSWidget
// (BlueprintCallable, BlueprintEvent)

void UW_VHS_Filter_C::ShowVHSWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "ShowVHSWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VHS_Filter.W_VHS_Filter_C.RefreshFocus
// (BlueprintCallable, BlueprintEvent)

void UW_VHS_Filter_C::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "RefreshFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VHS_Filter.W_VHS_Filter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VHS_Filter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "Tick");

	Params::W_VHS_Filter_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_VHS_Filter.W_VHS_Filter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_VHS_Filter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_VHS_Filter.W_VHS_Filter_C.CustomNavigation_Left
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_VHS_Filter_C::CustomNavigation_Left(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "CustomNavigation_Left");

	Params::W_VHS_Filter_C_CustomNavigation_Left Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_VHS_Filter.W_VHS_Filter_C.CustomNavigation_Right
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_VHS_Filter_C::CustomNavigation_Right(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "CustomNavigation_Right");

	Params::W_VHS_Filter_C_CustomNavigation_Right Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_VHS_Filter.W_VHS_Filter_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_VHS_Filter_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "OnMouseButtonUp");

	Params::W_VHS_Filter_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_VHS_Filter.W_VHS_Filter_C.CustomNavigation_Up
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_VHS_Filter_C::CustomNavigation_Up(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "CustomNavigation_Up");

	Params::W_VHS_Filter_C_CustomNavigation_Up Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_VHS_Filter.W_VHS_Filter_C.CustomNavigation_Down
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_VHS_Filter_C::CustomNavigation_Down(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_VHS_Filter_C", "CustomNavigation_Down");

	Params::W_VHS_Filter_C_CustomNavigation_Down Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

