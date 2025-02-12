#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item

#include "Basic.hpp"

#include "Backrooms_structs.hpp"


namespace SDK::Params
{

// Function BP_Item.BP_Item_C.ExecuteUbergraph_BP_Item
// 0x0098 (0x0098 - 0x0000)
struct BP_Item_C_ExecuteUbergraph_BP_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetComponentsByTag_ReturnValue;           // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPCharacter_Demo_C*                    K2Node_DynamicCast_AsBPCharacter_Demo;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFancyCharacter*                        K2Node_CustomEvent_Player;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEventType                                    K2Node_CustomEvent_EventType;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MyGameInstance_C*                   K2Node_DynamicCast_AsBP_My_Game_Instance;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_Enable;                               // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                   K2Node_DynamicCast_AsBP_My_Game_Instance_1;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Item_C_ExecuteUbergraph_BP_Item) == 0x000008, "Wrong alignment on BP_Item_C_ExecuteUbergraph_BP_Item");
static_assert(sizeof(BP_Item_C_ExecuteUbergraph_BP_Item) == 0x000098, "Wrong size on BP_Item_C_ExecuteUbergraph_BP_Item");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, EntryPoint) == 0x000000, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_GetComponentsByTag_ReturnValue) == 0x000020, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_DynamicCast_AsBPCharacter_Demo) == 0x000040, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_DynamicCast_AsBPCharacter_Demo' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_CustomEvent_Player) == 0x000050, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_GetGameInstance_ReturnValue) == 0x000060, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_CustomEvent_EventType) == 0x000068, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_CustomEvent_EventType' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_DynamicCast_AsBP_My_Game_Instance) == 0x000070, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_DynamicCast_AsBP_My_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_Event_Enable) == 0x000079, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_Event_Enable' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00007A, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_GetGameInstance_ReturnValue_1) == 0x000080, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_DynamicCast_AsBP_My_Game_Instance_1) == 0x000088, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_DynamicCast_AsBP_My_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, K2Node_DynamicCast_bSuccess_2) == 0x000090, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Item_C_ExecuteUbergraph_BP_Item, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000091, "Member 'BP_Item_C_ExecuteUbergraph_BP_Item::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_Item.BP_Item_C.ToggleEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_Item_C_ToggleEvent final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Item_C_ToggleEvent) == 0x000001, "Wrong alignment on BP_Item_C_ToggleEvent");
static_assert(sizeof(BP_Item_C_ToggleEvent) == 0x000001, "Wrong size on BP_Item_C_ToggleEvent");
static_assert(offsetof(BP_Item_C_ToggleEvent, Enable) == 0x000000, "Member 'BP_Item_C_ToggleEvent::Enable' has a wrong offset!");

// Function BP_Item.BP_Item_C.OnEventLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_Item_C_OnEventLoaded final
{
public:
	EEventType                                    EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Item_C_OnEventLoaded) == 0x000001, "Wrong alignment on BP_Item_C_OnEventLoaded");
static_assert(sizeof(BP_Item_C_OnEventLoaded) == 0x000001, "Wrong size on BP_Item_C_OnEventLoaded");
static_assert(offsetof(BP_Item_C_OnEventLoaded, EventType) == 0x000000, "Member 'BP_Item_C_OnEventLoaded::EventType' has a wrong offset!");

// Function BP_Item.BP_Item_C.OnFinishConsume
// 0x0008 (0x0008 - 0x0000)
struct BP_Item_C_OnFinishConsume final
{
public:
	class AFancyCharacter*                        Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Item_C_OnFinishConsume) == 0x000008, "Wrong alignment on BP_Item_C_OnFinishConsume");
static_assert(sizeof(BP_Item_C_OnFinishConsume) == 0x000008, "Wrong size on BP_Item_C_OnFinishConsume");
static_assert(offsetof(BP_Item_C_OnFinishConsume, Player) == 0x000000, "Member 'BP_Item_C_OnFinishConsume::Player' has a wrong offset!");

// Function BP_Item.BP_Item_C.SetMaterial
// 0x0002 (0x0002 - 0x0000)
struct BP_Item_C_SetMaterial final
{
public:
	bool                                          EnabledFOV;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Item_C_SetMaterial) == 0x000001, "Wrong alignment on BP_Item_C_SetMaterial");
static_assert(sizeof(BP_Item_C_SetMaterial) == 0x000002, "Wrong size on BP_Item_C_SetMaterial");
static_assert(offsetof(BP_Item_C_SetMaterial, EnabledFOV) == 0x000000, "Member 'BP_Item_C_SetMaterial::EnabledFOV' has a wrong offset!");
static_assert(offsetof(BP_Item_C_SetMaterial, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_Item_C_SetMaterial::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

