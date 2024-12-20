#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractiveGrassManager_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass InteractiveGrassManager_BP.InteractiveGrassManager_BP_C
// 0x00B8 (0x02D8 - 0x0220)
class AInteractiveGrassManager_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Icon;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrengthChanger_Multi_C3C4D7E84F596148E4C0609D15288382; // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            WindStrengthChanger__Direction_C3C4D7E84F596148E4C0609D15288382; // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23D[0x3];                                      // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     WindStrengthChanger;                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindDirectionChanger_Multi_9C34F595444C0F6BF631DAB82A6B23DF; // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            WindDirectionChanger__Direction_9C34F595444C0F6BF631DAB82A6B23DF; // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     WindDirectionChanger;                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WindDirection;                                     // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength;                                      // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  UnivMaterialInteractionChannels;                   // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	int32                                         CurrentDispInteractingActors;                      // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         MaxDisplacementInteractingActors;                  // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewWindTextureRotationAngle;                       // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         NewWindTextureRotationValue;                       // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         PreviousWindStrength;                              // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         DirectionChangeDuration;                           // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StrengthChangeDuration;                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFoliageInstancedStaticMeshComponent*   FoliageComponent;                                  // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FoliageChunkSize;                                  // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FoliageChunkDeactivateRadius;                      // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AInteractiveFoliageChunk_BP_C*>  InteractiveFoliageChunks;                          // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         FoliageChunkDetectionInterval;                     // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FoliageChunkDeactivateInterval;                    // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriginalCloudShadowOpacity;                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UINTERACTIVE_FoliageComp_BP_C*>  ComponentsToSpawnWith;                             // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_InteractiveGrassManager_BP(int32 EntryPoint);
	void SmoothlyChangeWindStrength(float NewStrength);
	void SmoothlyChangeWindDirection(const struct FVector& NewDirection);
	void ReceiveBeginPlay();
	void WindStrengthChanger__Change__EventFunc();
	void WindStrengthChanger__UpdateFunc();
	void WindStrengthChanger__FinishedFunc();
	void WindDirectionChanger__ChangeDirection__EventFunc();
	void WindDirectionChanger__UpdateFunc();
	void WindDirectionChanger__FinishedFunc();
	void SpawnFoliage(bool SpawnUnderCursor, const struct FVector& LocationIfNotUnderCursor, const struct FVector& NormalIfNotUnderCursor, const struct FVector& MinScale, const struct FVector& MaxScale, const struct FFoliageToSpawn_Struct& FoliageToSpawn, bool FromCluster, bool ClusterLastIndex);
	void SpawnFoliageCluster(const struct FVector& CenterLocation, float SizeX_, float SizeY_, float Density_, float NonUniformDistribution, const struct FFoliageToSpawn_Struct& FoliageToSpawn, const struct FVector& MinScale, const struct FVector& MaxScale, bool UseGrassSpawnAreas, class AGrassSpawnArea_BP_C* GrassSpawnArea);
	void GetFreeMaterialInteractionChannel(bool* Found, int32* FoundChannel);
	void FreeUpMaterialInteractionChannel(int32 NrOfChannel);
	void DistanceToViewTarget(const struct FVector& FromLocation, float* Distance);
	void AddFoliageChunkActor(const struct FVector& ChunkCenter, class UINTERACTIVE_FoliageComp_BP_C* SourceComponent, bool ReplaceWithSourceComponent, bool LeaveDefaultComponent, class AInteractiveFoliageChunk_BP_C** AddedChunk);
	void PopulateMapWithGrass();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractiveGrassManager_BP_C">();
	}
	static class AInteractiveGrassManager_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteractiveGrassManager_BP_C>();
	}
};
static_assert(alignof(AInteractiveGrassManager_BP_C) == 0x000008, "Wrong alignment on AInteractiveGrassManager_BP_C");
static_assert(sizeof(AInteractiveGrassManager_BP_C) == 0x0002D8, "Wrong size on AInteractiveGrassManager_BP_C");
static_assert(offsetof(AInteractiveGrassManager_BP_C, UberGraphFrame) == 0x000220, "Member 'AInteractiveGrassManager_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, Icon) == 0x000228, "Member 'AInteractiveGrassManager_BP_C::Icon' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, DefaultSceneRoot) == 0x000230, "Member 'AInteractiveGrassManager_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindStrengthChanger_Multi_C3C4D7E84F596148E4C0609D15288382) == 0x000238, "Member 'AInteractiveGrassManager_BP_C::WindStrengthChanger_Multi_C3C4D7E84F596148E4C0609D15288382' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindStrengthChanger__Direction_C3C4D7E84F596148E4C0609D15288382) == 0x00023C, "Member 'AInteractiveGrassManager_BP_C::WindStrengthChanger__Direction_C3C4D7E84F596148E4C0609D15288382' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindStrengthChanger) == 0x000240, "Member 'AInteractiveGrassManager_BP_C::WindStrengthChanger' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindDirectionChanger_Multi_9C34F595444C0F6BF631DAB82A6B23DF) == 0x000248, "Member 'AInteractiveGrassManager_BP_C::WindDirectionChanger_Multi_9C34F595444C0F6BF631DAB82A6B23DF' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindDirectionChanger__Direction_9C34F595444C0F6BF631DAB82A6B23DF) == 0x00024C, "Member 'AInteractiveGrassManager_BP_C::WindDirectionChanger__Direction_9C34F595444C0F6BF631DAB82A6B23DF' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindDirectionChanger) == 0x000250, "Member 'AInteractiveGrassManager_BP_C::WindDirectionChanger' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindDirection) == 0x000258, "Member 'AInteractiveGrassManager_BP_C::WindDirection' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, WindStrength) == 0x000264, "Member 'AInteractiveGrassManager_BP_C::WindStrength' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, UnivMaterialInteractionChannels) == 0x000268, "Member 'AInteractiveGrassManager_BP_C::UnivMaterialInteractionChannels' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, CurrentDispInteractingActors) == 0x000278, "Member 'AInteractiveGrassManager_BP_C::CurrentDispInteractingActors' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, MaxDisplacementInteractingActors) == 0x00027C, "Member 'AInteractiveGrassManager_BP_C::MaxDisplacementInteractingActors' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, NewWindTextureRotationAngle) == 0x000280, "Member 'AInteractiveGrassManager_BP_C::NewWindTextureRotationAngle' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, NewWindTextureRotationValue) == 0x000284, "Member 'AInteractiveGrassManager_BP_C::NewWindTextureRotationValue' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, PreviousWindStrength) == 0x000288, "Member 'AInteractiveGrassManager_BP_C::PreviousWindStrength' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, DirectionChangeDuration) == 0x00028C, "Member 'AInteractiveGrassManager_BP_C::DirectionChangeDuration' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, StrengthChangeDuration) == 0x000290, "Member 'AInteractiveGrassManager_BP_C::StrengthChangeDuration' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, FoliageComponent) == 0x000298, "Member 'AInteractiveGrassManager_BP_C::FoliageComponent' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, FoliageChunkSize) == 0x0002A0, "Member 'AInteractiveGrassManager_BP_C::FoliageChunkSize' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, FoliageChunkDeactivateRadius) == 0x0002A4, "Member 'AInteractiveGrassManager_BP_C::FoliageChunkDeactivateRadius' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, InteractiveFoliageChunks) == 0x0002A8, "Member 'AInteractiveGrassManager_BP_C::InteractiveFoliageChunks' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, FoliageChunkDetectionInterval) == 0x0002B8, "Member 'AInteractiveGrassManager_BP_C::FoliageChunkDetectionInterval' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, FoliageChunkDeactivateInterval) == 0x0002BC, "Member 'AInteractiveGrassManager_BP_C::FoliageChunkDeactivateInterval' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, OriginalCloudShadowOpacity) == 0x0002C0, "Member 'AInteractiveGrassManager_BP_C::OriginalCloudShadowOpacity' has a wrong offset!");
static_assert(offsetof(AInteractiveGrassManager_BP_C, ComponentsToSpawnWith) == 0x0002C8, "Member 'AInteractiveGrassManager_BP_C::ComponentsToSpawnWith' has a wrong offset!");

}

