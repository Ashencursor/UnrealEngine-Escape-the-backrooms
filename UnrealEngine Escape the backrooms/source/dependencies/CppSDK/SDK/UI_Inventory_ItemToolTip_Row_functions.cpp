#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Inventory_ItemToolTip_Row

#include "Basic.hpp"

#include "UI_Inventory_ItemToolTip_Row_classes.hpp"
#include "UI_Inventory_ItemToolTip_Row_parameters.hpp"


namespace SDK
{

// Function UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C.ExecuteUbergraph_UI_Inventory_ItemToolTip_Row
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_ItemToolTip_Row_C::ExecuteUbergraph_UI_Inventory_ItemToolTip_Row(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_Row_C", "ExecuteUbergraph_UI_Inventory_ItemToolTip_Row");

	Params::UI_Inventory_ItemToolTip_Row_C_ExecuteUbergraph_UI_Inventory_ItemToolTip_Row Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EN_ItemRarity                           Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_ItemToolTip_Row_C::Init(EN_ItemRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_Row_C", "Init");

	Params::UI_Inventory_ItemToolTip_Row_C_Init Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Inventory_ItemToolTip_Row_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_Row_C", "PreConstruct");

	Params::UI_Inventory_ItemToolTip_Row_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
