#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MapViewer

#include "Basic.hpp"

#include "UI_MapViewer_classes.hpp"
#include "UI_MapViewer_parameters.hpp"


namespace SDK
{

// Function UI_MapViewer.UI_MapViewer_C.ExecuteUbergraph_UI_MapViewer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MapViewer_C::ExecuteUbergraph_UI_MapViewer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MapViewer_C", "ExecuteUbergraph_UI_MapViewer");

	Params::UI_MapViewer_C_ExecuteUbergraph_UI_MapViewer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MapViewer.UI_MapViewer_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MapViewer_C::SetImage(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MapViewer_C", "SetImage");

	Params::UI_MapViewer_C_SetImage Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MapViewer.UI_MapViewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MapViewer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MapViewer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MapViewer.UI_MapViewer_C.LoadLevelStats
// (BlueprintCallable, BlueprintEvent)

void UUI_MapViewer_C::LoadLevelStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MapViewer_C", "LoadLevelStats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_MapViewer.UI_MapViewer_C.GetTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Time_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_MapViewer_C::GetTime(float Time_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MapViewer_C", "GetTime");

	Params::UI_MapViewer_C_GetTime Parms{};

	Parms.Time_0 = Time_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_MapViewer.UI_MapViewer_C.RoundedTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   TimeIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Timeout                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UUI_MapViewer_C::RoundedTime(float TimeIn, class FString* Timeout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MapViewer_C", "RoundedTime");

	Params::UI_MapViewer_C_RoundedTime Parms{};

	Parms.TimeIn = TimeIn;

	UObject::ProcessEvent(Func, &Parms);

	if (Timeout != nullptr)
		*Timeout = std::move(Parms.Timeout);
}


// Function UI_MapViewer.UI_MapViewer_C.CheckFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MapViewer_C::CheckFont()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MapViewer_C", "CheckFont");

	UObject::ProcessEvent(Func, nullptr);
}

}
