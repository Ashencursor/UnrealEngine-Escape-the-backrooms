#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScannerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Backrooms_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ScannerComponent.BP_ScannerComponent_C
// 0x0018 (0x0178 - 0x0160)
class UBP_ScannerComponent_C final : public UMotionScannerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*               DMI_Scanner;                                       // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWaveScannerEnabled;                               // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_ScannerComponent(int32 EntryPoint);
	void UpdateMaterial(bool UseFOV);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void StartWaveEvent();
	void EndWaveEvent();
	void SetWavePosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ScannerComponent_C">();
	}
	static class UBP_ScannerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ScannerComponent_C>();
	}
};
static_assert(alignof(UBP_ScannerComponent_C) == 0x000008, "Wrong alignment on UBP_ScannerComponent_C");
static_assert(sizeof(UBP_ScannerComponent_C) == 0x000178, "Wrong size on UBP_ScannerComponent_C");
static_assert(offsetof(UBP_ScannerComponent_C, UberGraphFrame) == 0x000160, "Member 'UBP_ScannerComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ScannerComponent_C, DMI_Scanner) == 0x000168, "Member 'UBP_ScannerComponent_C::DMI_Scanner' has a wrong offset!");
static_assert(offsetof(UBP_ScannerComponent_C, bWaveScannerEnabled) == 0x000170, "Member 'UBP_ScannerComponent_C::bWaveScannerEnabled' has a wrong offset!");

}
