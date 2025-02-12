#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Liquid_Pain

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Liquid_Pain.BP_Liquid_Pain_C.ExecuteUbergraph_BP_Liquid_Pain
// 0x0160 (0x0160 - 0x0000)
struct BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFancyCharacter*                        K2Node_DynamicCast_AsFancy_Character;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue_1;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPCharacter_Demo_C*                    K2Node_DynamicCast_AsBPCharacter_Demo;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x00D0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain) == 0x000008, "Wrong alignment on BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain");
static_assert(sizeof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain) == 0x000160, "Wrong size on BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, EntryPoint) == 0x000000, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, Temp_name_Variable) == 0x00007C, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, Temp_bool_Has_Been_Initd_Variable) == 0x000084, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, Temp_bool_IsClosed_Variable) == 0x000085, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_GetAttachParentActor_ReturnValue) == 0x000088, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_DynamicCast_AsFancy_Character) == 0x000090, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_DynamicCast_AsFancy_Character' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_IsLocallyControlled_ReturnValue) == 0x000099, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000A0, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_GetAttachParentActor_ReturnValue_1) == 0x0000B0, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_GetAttachParentActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_DynamicCast_AsBPCharacter_Demo) == 0x0000B8, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_DynamicCast_AsBPCharacter_Demo' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_MakeVector_ReturnValue) == 0x0000C4, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000D0, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain, CallFunc_SpawnSound2D_ReturnValue) == 0x000158, "Member 'BP_Liquid_Pain_C_ExecuteUbergraph_BP_Liquid_Pain::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");

// Function BP_Liquid_Pain.BP_Liquid_Pain_C.OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5
// 0x0008 (0x0008 - 0x0000)
struct BP_Liquid_Pain_C_OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Liquid_Pain_C_OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000004, "Wrong alignment on BP_Liquid_Pain_C_OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(sizeof(BP_Liquid_Pain_C_OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000008, "Wrong size on BP_Liquid_Pain_C_OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(offsetof(BP_Liquid_Pain_C_OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5, NotifyName) == 0x000000, "Member 'BP_Liquid_Pain_C_OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5::NotifyName' has a wrong offset!");

// Function BP_Liquid_Pain.BP_Liquid_Pain_C.OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5
// 0x0008 (0x0008 - 0x0000)
struct BP_Liquid_Pain_C_OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Liquid_Pain_C_OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000004, "Wrong alignment on BP_Liquid_Pain_C_OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(sizeof(BP_Liquid_Pain_C_OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000008, "Wrong size on BP_Liquid_Pain_C_OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(offsetof(BP_Liquid_Pain_C_OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5, NotifyName) == 0x000000, "Member 'BP_Liquid_Pain_C_OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5::NotifyName' has a wrong offset!");

// Function BP_Liquid_Pain.BP_Liquid_Pain_C.OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5
// 0x0008 (0x0008 - 0x0000)
struct BP_Liquid_Pain_C_OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Liquid_Pain_C_OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000004, "Wrong alignment on BP_Liquid_Pain_C_OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(sizeof(BP_Liquid_Pain_C_OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000008, "Wrong size on BP_Liquid_Pain_C_OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(offsetof(BP_Liquid_Pain_C_OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5, NotifyName) == 0x000000, "Member 'BP_Liquid_Pain_C_OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5::NotifyName' has a wrong offset!");

// Function BP_Liquid_Pain.BP_Liquid_Pain_C.OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5
// 0x0008 (0x0008 - 0x0000)
struct BP_Liquid_Pain_C_OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Liquid_Pain_C_OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000004, "Wrong alignment on BP_Liquid_Pain_C_OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(sizeof(BP_Liquid_Pain_C_OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000008, "Wrong size on BP_Liquid_Pain_C_OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(offsetof(BP_Liquid_Pain_C_OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5, NotifyName) == 0x000000, "Member 'BP_Liquid_Pain_C_OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5::NotifyName' has a wrong offset!");

// Function BP_Liquid_Pain.BP_Liquid_Pain_C.OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5
// 0x0008 (0x0008 - 0x0000)
struct BP_Liquid_Pain_C_OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Liquid_Pain_C_OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000004, "Wrong alignment on BP_Liquid_Pain_C_OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(sizeof(BP_Liquid_Pain_C_OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5) == 0x000008, "Wrong size on BP_Liquid_Pain_C_OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5");
static_assert(offsetof(BP_Liquid_Pain_C_OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5, NotifyName) == 0x000000, "Member 'BP_Liquid_Pain_C_OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5::NotifyName' has a wrong offset!");

// Function BP_Liquid_Pain.BP_Liquid_Pain_C.SetMaterial
// 0x0001 (0x0001 - 0x0000)
struct BP_Liquid_Pain_C_SetMaterial final
{
public:
	bool                                          EnabledFOV;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Liquid_Pain_C_SetMaterial) == 0x000001, "Wrong alignment on BP_Liquid_Pain_C_SetMaterial");
static_assert(sizeof(BP_Liquid_Pain_C_SetMaterial) == 0x000001, "Wrong size on BP_Liquid_Pain_C_SetMaterial");
static_assert(offsetof(BP_Liquid_Pain_C_SetMaterial, EnabledFOV) == 0x000000, "Member 'BP_Liquid_Pain_C_SetMaterial::EnabledFOV' has a wrong offset!");

}

