#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RopeZone

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_RopeZone.BP_RopeZone_C.ExecuteUbergraph_BP_RopeZone
// 0x0490 (0x0490 - 0x0000)
struct BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_Event_Character;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPCharacter_Demo_C*                    K2Node_DynamicCast_AsBPCharacter_Demo;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0xF];                                       // 0x0041(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x00EC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_175[0x3];                                      // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x01A8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_232[0x6];                                      // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0238(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0248(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0254(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0260(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x026C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0278(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue_1;        // 0x0284(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0290(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x031C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0328(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x0334(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0340(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x034C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5[0x3];                                      // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_2;     // 0x03D8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_2;        // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_461[0x3];                                      // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0464(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D[0x3];                                      // 0x047D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0480(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x048D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x048E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x048F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone) == 0x000010, "Wrong alignment on BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone");
static_assert(sizeof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone) == 0x000490, "Wrong size on BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, EntryPoint) == 0x000000, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakTransform_Location) == 0x000008, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakTransform_Rotation) == 0x000014, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakTransform_Scale) == 0x000020, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, K2Node_Event_Character) == 0x000030, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::K2Node_Event_Character' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, K2Node_DynamicCast_AsBPCharacter_Demo) == 0x000038, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::K2Node_DynamicCast_AsBPCharacter_Demo' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_GetActorForwardVector_ReturnValue) == 0x00008C, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000098, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000A4, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B0, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000BC, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_FindLookAtRotation_ReturnValue) == 0x0000C8, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakRotator_Roll) == 0x0000D4, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakRotator_Pitch) == 0x0000D8, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakRotator_Yaw) == 0x0000DC, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_MakeRotator_ReturnValue) == 0x0000E0, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x0000EC, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000174, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakTransform_Location_1) == 0x000178, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakTransform_Rotation_1) == 0x000184, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakTransform_Scale_1) == 0x000190, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_VLerp_ReturnValue) == 0x00019C, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001A8, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000230, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_IsValid_ReturnValue) == 0x000231, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, K2Node_MakeArray_Array) == 0x000238, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000248, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_GetActorRightVector_ReturnValue) == 0x000254, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000260, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x00026C, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000278, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_GetActorRightVector_ReturnValue_1) == 0x000284, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_GetActorRightVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_LineTraceSingle_OutHit) == 0x000290, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_LineTraceSingle_ReturnValue) == 0x000318, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x00031C, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000328, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000334, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000340, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x00034C, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x0003D4, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocation_SweepHitResult_2) == 0x0003D8, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorLocation_ReturnValue_2) == 0x000460, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000464, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakRotator_Roll_1) == 0x000470, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakRotator_Pitch_1) == 0x000474, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BreakRotator_Yaw_1) == 0x000478, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Not_PreBool_ReturnValue) == 0x00047C, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_MakeRotator_ReturnValue_1) == 0x000480, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_K2_SetActorRotation_ReturnValue) == 0x00048C, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_IsValid_ReturnValue_1) == 0x00048D, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_Not_PreBool_ReturnValue_1) == 0x00048E, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone, CallFunc_BooleanAND_ReturnValue) == 0x00048F, "Member 'BP_RopeZone_C_ExecuteUbergraph_BP_RopeZone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_RopeZone.BP_RopeZone_C.OnActorUsed
// 0x0008 (0x0008 - 0x0000)
struct BP_RopeZone_C_OnActorUsed final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RopeZone_C_OnActorUsed) == 0x000008, "Wrong alignment on BP_RopeZone_C_OnActorUsed");
static_assert(sizeof(BP_RopeZone_C_OnActorUsed) == 0x000008, "Wrong size on BP_RopeZone_C_OnActorUsed");
static_assert(offsetof(BP_RopeZone_C_OnActorUsed, Character) == 0x000000, "Member 'BP_RopeZone_C_OnActorUsed::Character' has a wrong offset!");

}
