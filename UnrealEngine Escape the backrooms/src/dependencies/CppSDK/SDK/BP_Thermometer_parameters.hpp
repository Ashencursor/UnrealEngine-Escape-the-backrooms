#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Thermometer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Thermometer.BP_Thermometer_C.ExecuteUbergraph_BP_Thermometer
// 0x0060 (0x0060 - 0x0000)
struct BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Thermometer_Display_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer) == 0x000010, "Wrong alignment on BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer");
static_assert(sizeof(BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer) == 0x000060, "Wrong size on BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer");
static_assert(offsetof(BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer, EntryPoint) == 0x000000, "Member 'BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000048, "Member 'BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer, CallFunc_FinishSpawningActor_ReturnValue) == 0x000050, "Member 'BP_Thermometer_C_ExecuteUbergraph_BP_Thermometer::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_Thermometer.BP_Thermometer_C.OnRep_Temperature
// 0x0048 (0x0048 - 0x0000)
struct BP_Thermometer_C_OnRep_Temperature final
{
public:
	class FString                                 Value;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Thermometer_C_OnRep_Temperature) == 0x000008, "Wrong alignment on BP_Thermometer_C_OnRep_Temperature");
static_assert(sizeof(BP_Thermometer_C_OnRep_Temperature) == 0x000048, "Wrong size on BP_Thermometer_C_OnRep_Temperature");
static_assert(offsetof(BP_Thermometer_C_OnRep_Temperature, Value) == 0x000000, "Member 'BP_Thermometer_C_OnRep_Temperature::Value' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_OnRep_Temperature, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'BP_Thermometer_C_OnRep_Temperature::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_OnRep_Temperature, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'BP_Thermometer_C_OnRep_Temperature::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_OnRep_Temperature, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_Thermometer_C_OnRep_Temperature::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_OnRep_Temperature, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000038, "Member 'BP_Thermometer_C_OnRep_Temperature::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_Thermometer.BP_Thermometer_C.SetMaterial
// 0x0058 (0x0058 - 0x0000)
struct BP_Thermometer_C_SetMaterial final
{
public:
	bool                                          EnabledFOV;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0020(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Thermometer_Display_C*              K2Node_DynamicCast_AsBP_Thermometer_Display;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Thermometer_C_SetMaterial) == 0x000008, "Wrong alignment on BP_Thermometer_C_SetMaterial");
static_assert(sizeof(BP_Thermometer_C_SetMaterial) == 0x000058, "Wrong size on BP_Thermometer_C_SetMaterial");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, EnabledFOV) == 0x000000, "Member 'BP_Thermometer_C_SetMaterial::EnabledFOV' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Thermometer_C_SetMaterial::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, Temp_int_Variable) == 0x00000C, "Member 'BP_Thermometer_C_SetMaterial::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_Thermometer_C_SetMaterial::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_GetAttachedActors_OutActors) == 0x000020, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, K2Node_DynamicCast_AsBP_Thermometer_Display) == 0x000038, "Member 'BP_Thermometer_C_SetMaterial::K2Node_DynamicCast_AsBP_Thermometer_Display' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_Thermometer_C_SetMaterial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Thermometer_C_SetMaterial, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'BP_Thermometer_C_SetMaterial::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

