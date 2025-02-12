#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VRMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VRMenu.BP_VRMenu_C.ExecuteUbergraph_BP_VRMenu
// 0x0038 (0x0038 - 0x0000)
struct BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_MainMenu_C*                          K2Node_DynamicCast_AsW_Main_Menu;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu) == 0x000008, "Wrong alignment on BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu");
static_assert(sizeof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu) == 0x000038, "Wrong size on BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu");
static_assert(offsetof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu, EntryPoint) == 0x000000, "Member 'BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu, CallFunc_GetWidget_ReturnValue) == 0x000018, "Member 'BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu, CallFunc_IsHeadMountedDisplayEnabled_ReturnValue) == 0x000020, "Member 'BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu::CallFunc_IsHeadMountedDisplayEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu, K2Node_DynamicCast_AsW_Main_Menu) == 0x000028, "Member 'BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu::K2Node_DynamicCast_AsW_Main_Menu' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_VRMenu_C_ExecuteUbergraph_BP_VRMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_VRMenu.BP_VRMenu_C.RefreshFocus
// 0x0028 (0x0028 - 0x0000)
struct BP_VRMenu_C_RefreshFocus final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MainMenu_C*                          K2Node_DynamicCast_AsW_Main_Menu;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VRMenu_C_RefreshFocus) == 0x000008, "Wrong alignment on BP_VRMenu_C_RefreshFocus");
static_assert(sizeof(BP_VRMenu_C_RefreshFocus) == 0x000028, "Wrong size on BP_VRMenu_C_RefreshFocus");
static_assert(offsetof(BP_VRMenu_C_RefreshFocus, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BP_VRMenu_C_RefreshFocus::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_RefreshFocus, CallFunc_GetPlayerController_ReturnValue_1) == 0x000008, "Member 'BP_VRMenu_C_RefreshFocus::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_RefreshFocus, CallFunc_GetWidget_ReturnValue) == 0x000010, "Member 'BP_VRMenu_C_RefreshFocus::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_RefreshFocus, K2Node_DynamicCast_AsW_Main_Menu) == 0x000018, "Member 'BP_VRMenu_C_RefreshFocus::K2Node_DynamicCast_AsW_Main_Menu' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_RefreshFocus, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_VRMenu_C_RefreshFocus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VRMenu_C_RefreshFocus, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_VRMenu_C_RefreshFocus::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

