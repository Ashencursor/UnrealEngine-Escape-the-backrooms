#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlareGun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FlareGun.BP_FlareGun_C.ExecuteUbergraph_BP_FlareGun
// 0x0100 (0x0100 - 0x0000)
struct BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPCharacter_Demo_C*                    K2Node_DynamicCast_AsBPCharacter_Demo;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FlareProjectile_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun) == 0x000010, "Wrong alignment on BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun");
static_assert(sizeof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun) == 0x000100, "Wrong size on BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, EntryPoint) == 0x000000, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_DynamicCast_AsBPCharacter_Demo) == 0x000010, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_DynamicCast_AsBPCharacter_Demo' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000030, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_IsLocallyControlled_ReturnValue) == 0x000038, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CustomEvent_NotifyName_4) == 0x00003C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CustomEvent_NotifyName_3) == 0x000044, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CreateDelegate_OutputDelegate_2) == 0x00005C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CustomEvent_NotifyName_2) == 0x00006C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CustomEvent_NotifyName_1) == 0x000074, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CreateDelegate_OutputDelegate_3) == 0x00007C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CreateDelegate_OutputDelegate_4) == 0x00008C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, K2Node_CustomEvent_NotifyName) == 0x00009C, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, Temp_name_Variable) == 0x0000A4, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0000B0, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E0, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0000E8, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F0, "Member 'BP_FlareGun_C_ExecuteUbergraph_BP_FlareGun::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_FlareGun.BP_FlareGun_C.OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5
// 0x0008 (0x0008 - 0x0000)
struct BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000004, "Wrong alignment on BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(sizeof(BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000008, "Wrong size on BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(offsetof(BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5, NotifyName) == 0x000000, "Member 'BP_FlareGun_C_OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5::NotifyName' has a wrong offset!");

// Function BP_FlareGun.BP_FlareGun_C.OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5
// 0x0008 (0x0008 - 0x0000)
struct BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000004, "Wrong alignment on BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(sizeof(BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000008, "Wrong size on BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(offsetof(BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5, NotifyName) == 0x000000, "Member 'BP_FlareGun_C_OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5::NotifyName' has a wrong offset!");

// Function BP_FlareGun.BP_FlareGun_C.OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5
// 0x0008 (0x0008 - 0x0000)
struct BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000004, "Wrong alignment on BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(sizeof(BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000008, "Wrong size on BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(offsetof(BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5, NotifyName) == 0x000000, "Member 'BP_FlareGun_C_OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5::NotifyName' has a wrong offset!");

// Function BP_FlareGun.BP_FlareGun_C.OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5
// 0x0008 (0x0008 - 0x0000)
struct BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000004, "Wrong alignment on BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(sizeof(BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000008, "Wrong size on BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(offsetof(BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5, NotifyName) == 0x000000, "Member 'BP_FlareGun_C_OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5::NotifyName' has a wrong offset!");

// Function BP_FlareGun.BP_FlareGun_C.OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5
// 0x0008 (0x0008 - 0x0000)
struct BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000004, "Wrong alignment on BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(sizeof(BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5) == 0x000008, "Wrong size on BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5");
static_assert(offsetof(BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5, NotifyName) == 0x000000, "Member 'BP_FlareGun_C_OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5::NotifyName' has a wrong offset!");

}

