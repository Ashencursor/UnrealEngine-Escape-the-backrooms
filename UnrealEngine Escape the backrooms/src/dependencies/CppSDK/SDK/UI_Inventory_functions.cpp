#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Inventory

#include "Basic.hpp"

#include "UI_Inventory_classes.hpp"
#include "UI_Inventory_parameters.hpp"


namespace SDK
{

// Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_C::ExecuteUbergraph_UI_Inventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "ExecuteUbergraph_UI_Inventory");

	Params::UI_Inventory_C_ExecuteUbergraph_UI_Inventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Inventory.UI_Inventory_C.UpdateInventory
// (BlueprintCallable, BlueprintEvent)

void UUI_Inventory_C::UpdateInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "UpdateInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Inventory.UI_Inventory_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Inventory_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Inventory.UI_Inventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "Tick");

	Params::UI_Inventory_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Inventory.UI_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Inventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Inventory.UI_Inventory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Inventory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "OnKeyDown");

	Params::UI_Inventory_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.GetIconPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                     Panel                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_C::GetIconPanel(int32 Index_0, class UPanelWidget** Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "GetIconPanel");

	Params::UI_Inventory_C_GetIconPanel Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Panel != nullptr)
		*Panel = Parms.Panel;
}


// Function UI_Inventory.UI_Inventory_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_Inventory_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "OnDrop");

	Params::UI_Inventory_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.CheckFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_C::CheckFont()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "CheckFont");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Inventory.UI_Inventory_C.InputDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    KeyDown                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Inventory_C::InputDown(const struct FKey& Key, bool* KeyDown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_C", "InputDown");

	Params::UI_Inventory_C_InputDown Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (KeyDown != nullptr)
		*KeyDown = Parms.KeyDown;
}

}

