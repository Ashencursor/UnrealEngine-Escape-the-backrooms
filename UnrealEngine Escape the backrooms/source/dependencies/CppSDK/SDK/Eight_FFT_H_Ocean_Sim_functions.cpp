#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Eight_FFT_H_Ocean_Sim

#include "Basic.hpp"

#include "Eight_FFT_H_Ocean_Sim_classes.hpp"
#include "Eight_FFT_H_Ocean_Sim_parameters.hpp"


namespace SDK
{

// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.ExecuteUbergraph_8_FFT_H_Ocean_Sim
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::ExecuteUbergraph_8_FFT_H_Ocean_Sim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "ExecuteUbergraph_8_FFT_H_Ocean_Sim");

	Params::Eight_FFT_H_Ocean_Sim_C_ExecuteUbergraph_8_FFT_H_Ocean_Sim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.Pause
// (BlueprintCallable, BlueprintEvent)

void AEight_FFT_H_Ocean_Sim_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "Pause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.Live Ocean
// (BlueprintCallable, BlueprintEvent)

void AEight_FFT_H_Ocean_Sim_C::Live_Ocean()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "Live Ocean");

	UObject::ProcessEvent(Func, nullptr);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.BndEvt__Activation Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::BndEvt__Activation_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "BndEvt__Activation Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::Eight_FFT_H_Ocean_Sim_C_BndEvt__Activation_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.BndEvt__Activation Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEight_FFT_H_Ocean_Sim_C::BndEvt__Activation_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "BndEvt__Activation Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Eight_FFT_H_Ocean_Sim_C_BndEvt__Activation_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.BndEvt__SimCapturte Volume_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::BndEvt__SimCapturte_Volume_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "BndEvt__SimCapturte Volume_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	Params::Eight_FFT_H_Ocean_Sim_C_BndEvt__SimCapturte_Volume_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.BndEvt__SimCapturte Volume_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEight_FFT_H_Ocean_Sim_C::BndEvt__SimCapturte_Volume_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "BndEvt__SimCapturte Volume_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Eight_FFT_H_Ocean_Sim_C_BndEvt__SimCapturte_Volume_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.BndEvt__Buoyancy Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::BndEvt__Buoyancy_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "BndEvt__Buoyancy Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::Eight_FFT_H_Ocean_Sim_C_BndEvt__Buoyancy_Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.BndEvt__Buoyancy Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEight_FFT_H_Ocean_Sim_C::BndEvt__Buoyancy_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "BndEvt__Buoyancy Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Eight_FFT_H_Ocean_Sim_C_BndEvt__Buoyancy_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "ReceiveTick");

	Params::Eight_FFT_H_Ocean_Sim_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEight_FFT_H_Ocean_Sim_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEight_FFT_H_Ocean_Sim_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.Get Height RT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           HeightRT                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::Get_Height_RT(int32 Index_0, class UTextureRenderTarget2D** HeightRT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "Get Height RT");

	Params::Eight_FFT_H_Ocean_Sim_C_Get_Height_RT Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (HeightRT != nullptr)
		*HeightRT = Parms.HeightRT;
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.GetLastHeight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentHeightIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumFramesOld                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           HeightRT                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::GetLastHeight(int32 CurrentHeightIndex, int32 NumFramesOld, class UTextureRenderTarget2D** HeightRT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "GetLastHeight");

	Params::Eight_FFT_H_Ocean_Sim_C_GetLastHeight Parms{};

	Parms.CurrentHeightIndex = CurrentHeightIndex;
	Parms.NumFramesOld = NumFramesOld;

	UObject::ProcessEvent(Func, &Parms);

	if (HeightRT != nullptr)
		*HeightRT = Parms.HeightRT;
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.FFT_Calculator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           Spectrum_Input                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           Final_Write                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::FFT_Calculator(class UTextureRenderTarget2D* Spectrum_Input, class UTextureRenderTarget2D* Final_Write)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "FFT_Calculator");

	Params::Eight_FFT_H_Ocean_Sim_C_FFT_Calculator Parms{};

	Parms.Spectrum_Input = Spectrum_Input;
	Parms.Final_Write = Final_Write;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.POV Tracker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          POV_Location_0                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          POV_Forward_Vector_0                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::POV_Tracker(struct FVector* POV_Location_0, struct FVector* POV_Forward_Vector_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "POV Tracker");

	Params::Eight_FFT_H_Ocean_Sim_C_POV_Tracker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (POV_Location_0 != nullptr)
		*POV_Location_0 = std::move(Parms.POV_Location_0);

	if (POV_Forward_Vector_0 != nullptr)
		*POV_Forward_Vector_0 = std::move(Parms.POV_Forward_Vector_0);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.GetHeightAtComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              ActorComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::GetHeightAtComponent(class UPrimitiveComponent* ActorComponent, struct FVector* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "GetHeightAtComponent");

	Params::Eight_FFT_H_Ocean_Sim_C_GetHeightAtComponent Parms{};

	Parms.ActorComponent = ActorComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = std::move(Parms.Height);
}


// Function 8_FFT_H_Ocean_Sim.8_FFT_H_Ocean_Sim_C.GetHeightAtLoc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              C                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          L                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEight_FFT_H_Ocean_Sim_C::GetHeightAtLoc(class UPrimitiveComponent* C, struct FVector* L)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("8_FFT_H_Ocean_Sim_C", "GetHeightAtLoc");

	Params::Eight_FFT_H_Ocean_Sim_C_GetHeightAtLoc Parms{};

	Parms.C = C;

	UObject::ProcessEvent(Func, &Parms);

	if (L != nullptr)
		*L = std::move(Parms.L);
}

}
