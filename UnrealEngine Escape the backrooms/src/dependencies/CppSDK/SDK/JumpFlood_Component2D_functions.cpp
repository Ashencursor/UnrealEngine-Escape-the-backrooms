#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JumpFlood_Component2D

#include "Basic.hpp"

#include "JumpFlood_Component2D_classes.hpp"
#include "JumpFlood_Component2D_parameters.hpp"


namespace SDK
{

// Function JumpFlood_Component2D.JumpFlood_Component2D_C.ExecuteUbergraph_JumpFlood_Component2D
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJumpFlood_Component2D_C::ExecuteUbergraph_JumpFlood_Component2D(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpFlood_Component2D_C", "ExecuteUbergraph_JumpFlood_Component2D");

	Params::JumpFlood_Component2D_C_ExecuteUbergraph_JumpFlood_Component2D Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JumpFlood_Component2D.JumpFlood_Component2D_C.Assign RenderTargets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           RTA_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RTB_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJumpFlood_Component2D_C::Assign_RenderTargets(class UTextureRenderTarget2D* RTA_0, class UTextureRenderTarget2D* RTB_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpFlood_Component2D_C", "Assign RenderTargets");

	Params::JumpFlood_Component2D_C_Assign_RenderTargets Parms{};

	Parms.RTA_0 = RTA_0;
	Parms.RTB_0 = RTB_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JumpFlood_Component2D.JumpFlood_Component2D_C.JumpFlood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           SeedRT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SceneCaptureZ                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Curl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseDepth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Z_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJumpFlood_Component2D_C::JumpFlood(class UTextureRenderTarget2D* SeedRT, float SceneCaptureZ, const struct FLinearColor& Curl, bool UseDepth, float Z_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpFlood_Component2D_C", "JumpFlood");

	Params::JumpFlood_Component2D_C_JumpFlood Parms{};

	Parms.SeedRT = SeedRT;
	Parms.SceneCaptureZ = SceneCaptureZ;
	Parms.Curl = std::move(Curl);
	Parms.UseDepth = UseDepth;
	Parms.Z_Location = Z_Location;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JumpFlood_Component2D.JumpFlood_Component2D_C.SingleJumpStep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Result_RT                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJumpFlood_Component2D_C::SingleJumpStep(class UTextureRenderTarget2D** Result_RT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpFlood_Component2D_C", "SingleJumpStep");

	Params::JumpFlood_Component2D_C_SingleJumpStep Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result_RT != nullptr)
		*Result_RT = Parms.Result_RT;
}


// Function JumpFlood_Component2D.JumpFlood_Component2D_C.FindEdges
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           SeedRT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CaptureZ                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Curl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseDepth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Z_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           Result_RT                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJumpFlood_Component2D_C::FindEdges(class UTextureRenderTarget2D* SeedRT, float CaptureZ, const struct FLinearColor& Curl, bool UseDepth, float Z_Location, class UTextureRenderTarget2D** Result_RT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpFlood_Component2D_C", "FindEdges");

	Params::JumpFlood_Component2D_C_FindEdges Parms{};

	Parms.SeedRT = SeedRT;
	Parms.CaptureZ = CaptureZ;
	Parms.Curl = std::move(Curl);
	Parms.UseDepth = UseDepth;
	Parms.Z_Location = Z_Location;

	UObject::ProcessEvent(Func, &Parms);

	if (Result_RT != nullptr)
		*Result_RT = Parms.Result_RT;
}


// Function JumpFlood_Component2D.JumpFlood_Component2D_C.FindEdges_Debug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           SeedRT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CaptureZ                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Curl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           DestRT                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ZOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJumpFlood_Component2D_C::FindEdges_Debug(class UTextureRenderTarget2D* SeedRT, float CaptureZ, const struct FLinearColor& Curl, class UTextureRenderTarget2D* DestRT, float ZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpFlood_Component2D_C", "FindEdges_Debug");

	Params::JumpFlood_Component2D_C_FindEdges_Debug Parms{};

	Parms.SeedRT = SeedRT;
	Parms.CaptureZ = CaptureZ;
	Parms.Curl = std::move(Curl);
	Parms.DestRT = DestRT;
	Parms.ZOffset = ZOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JumpFlood_Component2D.JumpFlood_Component2D_C.SingleBlurStep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Result_RT                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJumpFlood_Component2D_C::SingleBlurStep(class UTextureRenderTarget2D** Result_RT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpFlood_Component2D_C", "SingleBlurStep");

	Params::JumpFlood_Component2D_C_SingleBlurStep Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result_RT != nullptr)
		*Result_RT = Parms.Result_RT;
}

}
