#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DroppedItem_Jelly

#include "Basic.hpp"

#include "Backrooms_structs.hpp"


namespace SDK::Params
{

// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.ExecuteUbergraph_BP_DroppedItem_Jelly
// 0x0030 (0x0030 - 0x0000)
struct BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Enable;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEventType                                    K2Node_Event_EventType;                            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly) == 0x000008, "Wrong alignment on BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly");
static_assert(sizeof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly) == 0x000030, "Wrong size on BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, EntryPoint) == 0x000000, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, Temp_bool_Variable) == 0x000004, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, CallFunc_SetStaticMesh_ReturnValue) == 0x000005, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, Temp_object_Variable) == 0x000008, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, Temp_object_Variable_1) == 0x000010, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, K2Node_Event_Enable) == 0x000018, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::K2Node_Event_Enable' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, K2Node_Event_EventType) == 0x000019, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, K2Node_Select_Default) == 0x000020, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000028, "Member 'BP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");

// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.OnEventLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_DroppedItem_Jelly_C_OnEventLoaded final
{
public:
	EEventType                                    EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DroppedItem_Jelly_C_OnEventLoaded) == 0x000001, "Wrong alignment on BP_DroppedItem_Jelly_C_OnEventLoaded");
static_assert(sizeof(BP_DroppedItem_Jelly_C_OnEventLoaded) == 0x000001, "Wrong size on BP_DroppedItem_Jelly_C_OnEventLoaded");
static_assert(offsetof(BP_DroppedItem_Jelly_C_OnEventLoaded, EventType) == 0x000000, "Member 'BP_DroppedItem_Jelly_C_OnEventLoaded::EventType' has a wrong offset!");

// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.ToggleEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_DroppedItem_Jelly_C_ToggleEvent final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DroppedItem_Jelly_C_ToggleEvent) == 0x000001, "Wrong alignment on BP_DroppedItem_Jelly_C_ToggleEvent");
static_assert(sizeof(BP_DroppedItem_Jelly_C_ToggleEvent) == 0x000001, "Wrong size on BP_DroppedItem_Jelly_C_ToggleEvent");
static_assert(offsetof(BP_DroppedItem_Jelly_C_ToggleEvent, Enable) == 0x000000, "Member 'BP_DroppedItem_Jelly_C_ToggleEvent::Enable' has a wrong offset!");

}
