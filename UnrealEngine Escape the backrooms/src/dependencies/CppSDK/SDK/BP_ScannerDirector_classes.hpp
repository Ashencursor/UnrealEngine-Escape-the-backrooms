#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScannerDirector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Backrooms_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ScannerDirector.BP_ScannerDirector_C
// 0x0038 (0x02E0 - 0x02A8)
class ABP_ScannerDirector_C final : public AMotionScannerDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalSpawned;                                      // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               LIDARDotsMat;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DotScaleFactorSK;                                  // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkelMeshCollisionUVROF;                            // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanRunSKCollisionUV;                               // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              UVData;                                            // 0x02D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DotScaleFactor;                                    // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ScannerDirector(int32 EntryPoint);
	void MC_LidarDot(const struct FHitResult& HitResult, const struct FColor& Color);
	void ClearRenderTargets();
	void ReceiveBeginPlay();
	void CheckForExistingRT(class AActor* HitActor, class UPrimitiveComponent* HitComponent, class UTextureRenderTarget2D** RenderTarget);
	void FixUVStretching(const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, int32 FaceIndex, const struct FVector2D& HitUVLocation, float* FixedSize, struct FVector* FixedStretch);
	void InitializeMaterials();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ScannerDirector_C">();
	}
	static class ABP_ScannerDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ScannerDirector_C>();
	}
};
static_assert(alignof(ABP_ScannerDirector_C) == 0x000008, "Wrong alignment on ABP_ScannerDirector_C");
static_assert(sizeof(ABP_ScannerDirector_C) == 0x0002E0, "Wrong size on ABP_ScannerDirector_C");
static_assert(offsetof(ABP_ScannerDirector_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_ScannerDirector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_ScannerDirector_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, TotalSpawned) == 0x0002B8, "Member 'ABP_ScannerDirector_C::TotalSpawned' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, LIDARDotsMat) == 0x0002C0, "Member 'ABP_ScannerDirector_C::LIDARDotsMat' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, DotScaleFactorSK) == 0x0002C8, "Member 'ABP_ScannerDirector_C::DotScaleFactorSK' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, SkelMeshCollisionUVROF) == 0x0002CC, "Member 'ABP_ScannerDirector_C::SkelMeshCollisionUVROF' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, CanRunSKCollisionUV) == 0x0002D0, "Member 'ABP_ScannerDirector_C::CanRunSKCollisionUV' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, UVData) == 0x0002D4, "Member 'ABP_ScannerDirector_C::UVData' has a wrong offset!");
static_assert(offsetof(ABP_ScannerDirector_C, DotScaleFactor) == 0x0002DC, "Member 'ABP_ScannerDirector_C::DotScaleFactor' has a wrong offset!");

}
