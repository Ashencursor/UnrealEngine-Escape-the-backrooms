#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_CanMove

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTDecorator_CanMove.BTDecorator_CanMove_C.PerformConditionCheckAI
// 0x0038 (0x0038 - 0x0000)
struct BTDecorator_CanMove_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Hound_C*                            K2Node_DynamicCast_AsBP_Hound;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Moth_C*                             K2Node_DynamicCast_AsBP_Moth;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTDecorator_CanMove_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTDecorator_CanMove_C_PerformConditionCheckAI");
static_assert(sizeof(BTDecorator_CanMove_C_PerformConditionCheckAI) == 0x000038, "Wrong size on BTDecorator_CanMove_C_PerformConditionCheckAI");
static_assert(offsetof(BTDecorator_CanMove_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTDecorator_CanMove_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTDecorator_CanMove_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTDecorator_CanMove_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTDecorator_CanMove_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTDecorator_CanMove_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTDecorator_CanMove_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBP_Hound) == 0x000018, "Member 'BTDecorator_CanMove_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBP_Hound' has a wrong offset!");
static_assert(offsetof(BTDecorator_CanMove_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTDecorator_CanMove_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTDecorator_CanMove_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBP_Moth) == 0x000028, "Member 'BTDecorator_CanMove_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBP_Moth' has a wrong offset!");
static_assert(offsetof(BTDecorator_CanMove_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BTDecorator_CanMove_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
