#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Invemtory_DropItem

#include "Basic.hpp"

#include "UI_Invemtory_DropItem_classes.hpp"
#include "UI_Invemtory_DropItem_parameters.hpp"


namespace SDK
{

// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.ExecuteUbergraph_UI_Invemtory_DropItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Invemtory_DropItem_C::ExecuteUbergraph_UI_Invemtory_DropItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "ExecuteUbergraph_UI_Invemtory_DropItem");

	Params::UI_Invemtory_DropItem_C_ExecuteUbergraph_UI_Invemtory_DropItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.BndEvt__UI_Invemtory_DropItem_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Invemtory_DropItem_C::BndEvt__UI_Invemtory_DropItem_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "BndEvt__UI_Invemtory_DropItem_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.BndEvt__UI_Invemtory_DropItem_Btn_DropItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Invemtory_DropItem_C::BndEvt__UI_Invemtory_DropItem_Btn_DropItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "BndEvt__UI_Invemtory_DropItem_Btn_DropItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Invemtory_DropItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Invemtory_DropItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Invemtory_DropItem_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "OnMouseButtonDown_0");

	Params::UI_Invemtory_DropItem_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

