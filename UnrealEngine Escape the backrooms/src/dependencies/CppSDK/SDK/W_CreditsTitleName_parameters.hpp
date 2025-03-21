#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CreditsTitleName

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_CreditsTitleName.W_CreditsTitleName_C.ExecuteUbergraph_W_CreditsTitleName
// 0x0020 (0x0020 - 0x0000)
struct W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName) == 0x000008, "Wrong alignment on W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName");
static_assert(sizeof(W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName) == 0x000020, "Wrong size on W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName");
static_assert(offsetof(W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName, EntryPoint) == 0x000000, "Member 'W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName, K2Node_MakeStruct_Margin) == 0x000004, "Member 'W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName, K2Node_Event_IsDesignTime) == 0x000014, "Member 'W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000018, "Member 'W_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

// Function W_CreditsTitleName.W_CreditsTitleName_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_CreditsTitleName_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_CreditsTitleName_C_PreConstruct) == 0x000001, "Wrong alignment on W_CreditsTitleName_C_PreConstruct");
static_assert(sizeof(W_CreditsTitleName_C_PreConstruct) == 0x000001, "Wrong size on W_CreditsTitleName_C_PreConstruct");
static_assert(offsetof(W_CreditsTitleName_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_CreditsTitleName_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

