#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_PlaySound

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTTask_PlaySound.BTTask_PlaySound_C.ExecuteUbergraph_BTTask_PlaySound
// 0x0038 (0x0038 - 0x0000)
struct BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound) == 0x000008, "Wrong alignment on BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound");
static_assert(sizeof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound) == 0x000038, "Wrong size on BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound");
static_assert(offsetof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound, EntryPoint) == 0x000000, "Member 'BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound, K2Node_CustomEvent_Location) == 0x000004, "Member 'BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000010, "Member 'BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound, K2Node_Event_OwnerController) == 0x000018, "Member 'BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound, K2Node_Event_ControlledPawn) == 0x000020, "Member 'BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BTTask_PlaySound_C_ExecuteUbergraph_BTTask_PlaySound::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function BTTask_PlaySound.BTTask_PlaySound_C.MC_PlaySound
// 0x000C (0x000C - 0x0000)
struct BTTask_PlaySound_C_MC_PlaySound final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_PlaySound_C_MC_PlaySound) == 0x000004, "Wrong alignment on BTTask_PlaySound_C_MC_PlaySound");
static_assert(sizeof(BTTask_PlaySound_C_MC_PlaySound) == 0x00000C, "Wrong size on BTTask_PlaySound_C_MC_PlaySound");
static_assert(offsetof(BTTask_PlaySound_C_MC_PlaySound, Location) == 0x000000, "Member 'BTTask_PlaySound_C_MC_PlaySound::Location' has a wrong offset!");

// Function BTTask_PlaySound.BTTask_PlaySound_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_PlaySound_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_PlaySound_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_PlaySound_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_PlaySound_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_PlaySound_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_PlaySound_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_PlaySound_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_PlaySound_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_PlaySound_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

