#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Checklist_Item

#include "Basic.hpp"

#include "UI_Checklist_Item_classes.hpp"
#include "UI_Checklist_Item_parameters.hpp"


namespace SDK
{

// Function UI_Checklist_Item.UI_Checklist_Item_C.ExecuteUbergraph_UI_Checklist_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Checklist_Item_C::ExecuteUbergraph_UI_Checklist_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Checklist_Item_C", "ExecuteUbergraph_UI_Checklist_Item");

	Params::UI_Checklist_Item_C_ExecuteUbergraph_UI_Checklist_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Checklist_Item.UI_Checklist_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Checklist_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Checklist_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
