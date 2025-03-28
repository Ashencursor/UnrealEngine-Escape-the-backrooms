#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Disguised_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FootstepActionsEnum_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK::Params
{

// Function Disguised_AnimBP.Disguised_AnimBP_C.ExecuteUbergraph_Disguised_AnimBP
// 0x0040 (0x0040 - 0x0000)
struct Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalculateDirection_ReturnValue;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP) == 0x000008, "Wrong alignment on Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP");
static_assert(sizeof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP) == 0x000040, "Wrong size on Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, EntryPoint) == 0x000000, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_IsLocallyControlled_ReturnValue) == 0x000010, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000011, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000012, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, K2Node_Event_DeltaTimeX) == 0x000014, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x000018, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000020, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_GetVelocity_ReturnValue) == 0x00002C, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_CalculateDirection_ReturnValue) == 0x000038, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_CalculateDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP, CallFunc_VSize_ReturnValue) == 0x00003C, "Member 'Disguised_AnimBP_C_ExecuteUbergraph_Disguised_AnimBP::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function Disguised_AnimBP.Disguised_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct Disguised_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Disguised_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Disguised_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Disguised_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Disguised_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Disguised_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Disguised_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function Disguised_AnimBP.Disguised_AnimBP_C.Footstep
// 0x02C8 (0x02C8 - 0x0000)
struct Disguised_AnimBP_C_Footstep final
{
public:
	EFootstepActionsEnum                          FootstepType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors;            // 0x0038(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors_1;          // 0x0048(0x0010)(ReferenceParm)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_2;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit;                 // 0x0060(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingle_OutHit_1;               // 0x0184(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingle_ReturnValue_1;          // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x020E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20F[0x1];                                      // 0x020F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0218(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0224(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0230(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x023C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0274(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0280(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_3;            // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPhysicalSurface                              Temp_byte_Variable;                                // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29A[0x6];                                      // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default;                             // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              Temp_byte_Variable_1;                              // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default_1;                           // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue_1;       // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Disguised_AnimBP_C_Footstep) == 0x000008, "Wrong alignment on Disguised_AnimBP_C_Footstep");
static_assert(sizeof(Disguised_AnimBP_C_Footstep) == 0x0002C8, "Wrong size on Disguised_AnimBP_C_Footstep");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, FootstepType) == 0x000000, "Member 'Disguised_AnimBP_C_Footstep::FootstepType' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'Disguised_AnimBP_C_Footstep::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x000020, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000028, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_GetAllActorsWithTag_OutActors) == 0x000038, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_GetAllActorsWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_GetAllActorsWithTag_OutActors_1) == 0x000048, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_GetAllActorsWithTag_OutActors_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_TryGetPawnOwner_ReturnValue_2) == 0x000058, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_TryGetPawnOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_SphereTraceSingle_OutHit) == 0x000060, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_SphereTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_SphereTraceSingle_ReturnValue) == 0x0000E8, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_SphereTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000EC, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0000F8, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_bBlockingHit) == 0x000104, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_bInitialOverlap) == 0x000105, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Time) == 0x000108, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Distance) == 0x00010C, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Location) == 0x000110, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_ImpactPoint) == 0x00011C, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Normal) == 0x000128, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_ImpactNormal) == 0x000134, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_PhysMat) == 0x000140, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitActor) == 0x000148, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitComponent) == 0x000150, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitBoneName) == 0x000158, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitItem) == 0x000160, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_ElementIndex) == 0x000164, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_FaceIndex) == 0x000168, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_TraceStart) == 0x00016C, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_TraceEnd) == 0x000178, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_SphereTraceSingle_OutHit_1) == 0x000184, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_SphereTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_SphereTraceSingle_ReturnValue_1) == 0x00020C, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_SphereTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_bBlockingHit_1) == 0x00020D, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x00020E, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Time_1) == 0x000210, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Distance_1) == 0x000214, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Location_1) == 0x000218, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000224, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_Normal_1) == 0x000230, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_ImpactNormal_1) == 0x00023C, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_PhysMat_1) == 0x000248, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitActor_1) == 0x000250, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitComponent_1) == 0x000258, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitBoneName_1) == 0x000260, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_HitItem_1) == 0x000268, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_ElementIndex_1) == 0x00026C, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_FaceIndex_1) == 0x000270, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_TraceStart_1) == 0x000274, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_BreakHitResult_TraceEnd_1) == 0x000280, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_TryGetPawnOwner_ReturnValue_3) == 0x000290, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_TryGetPawnOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_IsValid_ReturnValue) == 0x000298, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, Temp_byte_Variable) == 0x000299, "Member 'Disguised_AnimBP_C_Footstep::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, K2Node_Select_Default) == 0x0002A0, "Member 'Disguised_AnimBP_C_Footstep::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, Temp_byte_Variable_1) == 0x0002A8, "Member 'Disguised_AnimBP_C_Footstep::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0002B0, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, K2Node_Select_Default_1) == 0x0002B8, "Member 'Disguised_AnimBP_C_Footstep::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Disguised_AnimBP_C_Footstep, CallFunc_SpawnSoundAtLocation_ReturnValue_1) == 0x0002C0, "Member 'Disguised_AnimBP_C_Footstep::CallFunc_SpawnSoundAtLocation_ReturnValue_1' has a wrong offset!");

// Function Disguised_AnimBP.Disguised_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Disguised_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Disguised_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Disguised_AnimBP_C_AnimGraph");
static_assert(sizeof(Disguised_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Disguised_AnimBP_C_AnimGraph");
static_assert(offsetof(Disguised_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Disguised_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

