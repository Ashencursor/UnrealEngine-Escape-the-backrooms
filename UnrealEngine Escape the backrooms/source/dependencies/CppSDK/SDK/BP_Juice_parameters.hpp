#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Juice

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Juice.BP_Juice_C.ExecuteUbergraph_BP_Juice
// 0x0170 (0x0170 - 0x0000)
struct BP_Juice_C_ExecuteUbergraph_BP_Juice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFancyCharacter*                        K2Node_DynamicCast_AsFancy_Character;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A2[0x6];                                       // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x00C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPCharacter_Demo_C*                    K2Node_DynamicCast_AsBPCharacter_Demo;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMP_PS_C*                               K2Node_DynamicCast_AsMP_PS;                        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Juice_C_ExecuteUbergraph_BP_Juice) == 0x000008, "Wrong alignment on BP_Juice_C_ExecuteUbergraph_BP_Juice");
static_assert(sizeof(BP_Juice_C_ExecuteUbergraph_BP_Juice) == 0x000170, "Wrong size on BP_Juice_C_ExecuteUbergraph_BP_Juice");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, EntryPoint) == 0x000000, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CustomEvent_NotifyName_4) == 0x000010, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CustomEvent_NotifyName_3) == 0x000028, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CustomEvent_NotifyName_2) == 0x000040, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CustomEvent_NotifyName_1) == 0x000058, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CreateDelegate_OutputDelegate_3) == 0x000060, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CustomEvent_NotifyName) == 0x000070, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_CreateDelegate_OutputDelegate_4) == 0x000078, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, Temp_name_Variable) == 0x000088, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_GetAttachParentActor_ReturnValue) == 0x000090, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_DynamicCast_AsFancy_Character) == 0x000098, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_DynamicCast_AsFancy_Character' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_IsLocallyControlled_ReturnValue) == 0x0000A1, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000A8, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_MakeVector_ReturnValue) == 0x0000B4, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000C0, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, CallFunc_GetOwner_ReturnValue) == 0x000148, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_DynamicCast_AsBPCharacter_Demo) == 0x000150, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_DynamicCast_AsBPCharacter_Demo' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_DynamicCast_AsMP_PS) == 0x000160, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_DynamicCast_AsMP_PS' has a wrong offset!");
static_assert(offsetof(BP_Juice_C_ExecuteUbergraph_BP_Juice, K2Node_DynamicCast_bSuccess_2) == 0x000168, "Member 'BP_Juice_C_ExecuteUbergraph_BP_Juice::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function BP_Juice.BP_Juice_C.OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0
// 0x0008 (0x0008 - 0x0000)
struct BP_Juice_C_OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Juice_C_OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000004, "Wrong alignment on BP_Juice_C_OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(sizeof(BP_Juice_C_OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000008, "Wrong size on BP_Juice_C_OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(offsetof(BP_Juice_C_OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0, NotifyName) == 0x000000, "Member 'BP_Juice_C_OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0::NotifyName' has a wrong offset!");

// Function BP_Juice.BP_Juice_C.OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0
// 0x0008 (0x0008 - 0x0000)
struct BP_Juice_C_OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Juice_C_OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000004, "Wrong alignment on BP_Juice_C_OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(sizeof(BP_Juice_C_OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000008, "Wrong size on BP_Juice_C_OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(offsetof(BP_Juice_C_OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0, NotifyName) == 0x000000, "Member 'BP_Juice_C_OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0::NotifyName' has a wrong offset!");

// Function BP_Juice.BP_Juice_C.OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0
// 0x0008 (0x0008 - 0x0000)
struct BP_Juice_C_OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Juice_C_OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000004, "Wrong alignment on BP_Juice_C_OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(sizeof(BP_Juice_C_OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000008, "Wrong size on BP_Juice_C_OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(offsetof(BP_Juice_C_OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0, NotifyName) == 0x000000, "Member 'BP_Juice_C_OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0::NotifyName' has a wrong offset!");

// Function BP_Juice.BP_Juice_C.OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0
// 0x0008 (0x0008 - 0x0000)
struct BP_Juice_C_OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Juice_C_OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000004, "Wrong alignment on BP_Juice_C_OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(sizeof(BP_Juice_C_OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000008, "Wrong size on BP_Juice_C_OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(offsetof(BP_Juice_C_OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0, NotifyName) == 0x000000, "Member 'BP_Juice_C_OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0::NotifyName' has a wrong offset!");

// Function BP_Juice.BP_Juice_C.OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0
// 0x0008 (0x0008 - 0x0000)
struct BP_Juice_C_OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Juice_C_OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000004, "Wrong alignment on BP_Juice_C_OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(sizeof(BP_Juice_C_OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0) == 0x000008, "Wrong size on BP_Juice_C_OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0");
static_assert(offsetof(BP_Juice_C_OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0, NotifyName) == 0x000000, "Member 'BP_Juice_C_OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0::NotifyName' has a wrong offset!");

// Function BP_Juice.BP_Juice_C.SetMaterial
// 0x0001 (0x0001 - 0x0000)
struct BP_Juice_C_SetMaterial final
{
public:
	bool                                          EnabledFOV;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Juice_C_SetMaterial) == 0x000001, "Wrong alignment on BP_Juice_C_SetMaterial");
static_assert(sizeof(BP_Juice_C_SetMaterial) == 0x000001, "Wrong size on BP_Juice_C_SetMaterial");
static_assert(offsetof(BP_Juice_C_SetMaterial, EnabledFOV) == 0x000000, "Member 'BP_Juice_C_SetMaterial::EnabledFOV' has a wrong offset!");

}
