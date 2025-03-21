#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WalkieTalkie_Display

#include "Basic.hpp"

#include "BP_WalkieTalkie_Display_classes.hpp"
#include "BP_WalkieTalkie_Display_parameters.hpp"


namespace SDK
{

// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WalkieTalkie_Display_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.Construct Core
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WalkieTalkie_Display_C::Construct_Core()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "Construct Core");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.Construct Update
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WalkieTalkie_Display_C::Construct_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "Construct Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WalkieTalkie_Display_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.SetLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WalkieTalkie_Display_C::SetLength()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "SetLength");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.SetSegmentType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WalkieTalkie_Display_C::SetSegmentType(class UPrimitiveComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "SetSegmentType");

	Params::BP_WalkieTalkie_Display_C_SetSegmentType Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.MaterialSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WalkieTalkie_Display_C::MaterialSettings(class UMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "MaterialSettings");

	Params::BP_WalkieTalkie_Display_C_MaterialSettings Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WalkieTalkie_Display.BP_WalkieTalkie_Display_C.SetDisplayValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Value_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_WalkieTalkie_Display_C::SetDisplayValue(class UMeshComponent* Mesh, const class FString& Value_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WalkieTalkie_Display_C", "SetDisplayValue");

	Params::BP_WalkieTalkie_Display_C_SetDisplayValue Parms{};

	Parms.Mesh = Mesh;
	Parms.Value_0 = std::move(Value_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

