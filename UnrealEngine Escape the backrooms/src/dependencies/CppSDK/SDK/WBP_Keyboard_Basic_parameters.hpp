#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Keyboard_Basic

#include "Basic.hpp"

#include "EModifierKeys_structs.hpp"


namespace SDK::Params
{

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.EnterButtonPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature final
{
public:
	class FText                                   TextToSend;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature");
static_assert(sizeof(WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature) == 0x000018, "Wrong size on WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature");
static_assert(offsetof(WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature, TextToSend) == 0x000000, "Member 'WBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature::TextToSend' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.ExecuteUbergraph_WBP_Keyboard_Basic
// 0x0078 (0x0078 - 0x0000)
struct WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FText ButtonText, EModifierKeys Modifier)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_ButtonTextToUse;                // 0x0020(0x0018)()
	EModifierKeys                                 K2Node_CustomEvent_ModifierKeyToUse;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Button_Basic_C*                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ButtonText;                     // 0x0050(0x0018)()
	EModifierKeys                                 K2Node_CustomEvent_Modifier;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetInteractionComponent*            K2Node_Event_WidgetInteractionComponent;           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic");
static_assert(sizeof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic) == 0x000078, "Wrong size on WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, EntryPoint) == 0x000000, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, K2Node_CustomEvent_ButtonTextToUse) == 0x000020, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::K2Node_CustomEvent_ButtonTextToUse' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, K2Node_CustomEvent_ModifierKeyToUse) == 0x000038, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::K2Node_CustomEvent_ModifierKeyToUse' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, K2Node_CustomEvent_ButtonText) == 0x000050, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::K2Node_CustomEvent_ButtonText' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, K2Node_CustomEvent_Modifier) == 0x000068, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::K2Node_CustomEvent_Modifier' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic, K2Node_Event_WidgetInteractionComponent) == 0x000070, "Member 'WBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic::K2Node_Event_WidgetInteractionComponent' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SetComponentReference
// 0x0008 (0x0008 - 0x0000)
struct WBP_Keyboard_Basic_C_SetComponentReference final
{
public:
	class UWidgetInteractionComponent*            WidgetInteractionComponent;                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Keyboard_Basic_C_SetComponentReference) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_SetComponentReference");
static_assert(sizeof(WBP_Keyboard_Basic_C_SetComponentReference) == 0x000008, "Wrong size on WBP_Keyboard_Basic_C_SetComponentReference");
static_assert(offsetof(WBP_Keyboard_Basic_C_SetComponentReference, WidgetInteractionComponent) == 0x000000, "Member 'WBP_Keyboard_Basic_C_SetComponentReference::WidgetInteractionComponent' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.ButtonPressed
// 0x0020 (0x0020 - 0x0000)
struct WBP_Keyboard_Basic_C_ButtonPressed final
{
public:
	class FText                                   ButtonText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EModifierKeys                                 Modifier;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Keyboard_Basic_C_ButtonPressed) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_ButtonPressed");
static_assert(sizeof(WBP_Keyboard_Basic_C_ButtonPressed) == 0x000020, "Wrong size on WBP_Keyboard_Basic_C_ButtonPressed");
static_assert(offsetof(WBP_Keyboard_Basic_C_ButtonPressed, ButtonText) == 0x000000, "Member 'WBP_Keyboard_Basic_C_ButtonPressed::ButtonText' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_ButtonPressed, Modifier) == 0x000018, "Member 'WBP_Keyboard_Basic_C_ButtonPressed::Modifier' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.KeyboardButtonPressed
// 0x0020 (0x0020 - 0x0000)
struct WBP_Keyboard_Basic_C_KeyboardButtonPressed final
{
public:
	class FText                                   ButtonTextToUse;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EModifierKeys                                 ModifierKeyToUse;                                  // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Keyboard_Basic_C_KeyboardButtonPressed) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_KeyboardButtonPressed");
static_assert(sizeof(WBP_Keyboard_Basic_C_KeyboardButtonPressed) == 0x000020, "Wrong size on WBP_Keyboard_Basic_C_KeyboardButtonPressed");
static_assert(offsetof(WBP_Keyboard_Basic_C_KeyboardButtonPressed, ButtonTextToUse) == 0x000000, "Member 'WBP_Keyboard_Basic_C_KeyboardButtonPressed::ButtonTextToUse' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_KeyboardButtonPressed, ModifierKeyToUse) == 0x000018, "Member 'WBP_Keyboard_Basic_C_KeyboardButtonPressed::ModifierKeyToUse' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.DetermineButtonFunctionality
// 0x0040 (0x0040 - 0x0000)
struct WBP_Keyboard_Basic_C_DetermineButtonFunctionality final
{
public:
	class FText                                   ButtonText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EModifierKeys                                 ModifierKey;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EModifierKeys                                 ModifierToCheck;                                   // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TextToUse;                                         // 0x0020(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Keyboard_Basic_C_DetermineButtonFunctionality) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_DetermineButtonFunctionality");
static_assert(sizeof(WBP_Keyboard_Basic_C_DetermineButtonFunctionality) == 0x000040, "Wrong size on WBP_Keyboard_Basic_C_DetermineButtonFunctionality");
static_assert(offsetof(WBP_Keyboard_Basic_C_DetermineButtonFunctionality, ButtonText) == 0x000000, "Member 'WBP_Keyboard_Basic_C_DetermineButtonFunctionality::ButtonText' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_DetermineButtonFunctionality, ModifierKey) == 0x000018, "Member 'WBP_Keyboard_Basic_C_DetermineButtonFunctionality::ModifierKey' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_DetermineButtonFunctionality, ModifierToCheck) == 0x000019, "Member 'WBP_Keyboard_Basic_C_DetermineButtonFunctionality::ModifierToCheck' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_DetermineButtonFunctionality, TextToUse) == 0x000020, "Member 'WBP_Keyboard_Basic_C_DetermineButtonFunctionality::TextToUse' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_DetermineButtonFunctionality, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WBP_Keyboard_Basic_C_DetermineButtonFunctionality::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SendButtonText
// 0x0030 (0x0030 - 0x0000)
struct WBP_Keyboard_Basic_C_SendButtonText final
{
public:
	class FText                                   ButtonTextToSend;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_SendKeyChar_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Keyboard_Basic_C_SendButtonText) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_SendButtonText");
static_assert(sizeof(WBP_Keyboard_Basic_C_SendButtonText) == 0x000030, "Wrong size on WBP_Keyboard_Basic_C_SendButtonText");
static_assert(offsetof(WBP_Keyboard_Basic_C_SendButtonText, ButtonTextToSend) == 0x000000, "Member 'WBP_Keyboard_Basic_C_SendButtonText::ButtonTextToSend' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_SendButtonText, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'WBP_Keyboard_Basic_C_SendButtonText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_SendButtonText, CallFunc_SendKeyChar_ReturnValue) == 0x000028, "Member 'WBP_Keyboard_Basic_C_SendButtonText::CallFunc_SendKeyChar_ReturnValue' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.UseModifierButton
// 0x0078 (0x0078 - 0x0000)
struct WBP_Keyboard_Basic_C_UseModifierButton final
{
public:
	EModifierKeys                                 ModifierToUse;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PressAndReleaseKey_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Button_Basic_C*                    CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_KeyboardInteraction_C> K2Node_DynamicCast_AsBPI_Keyboard_Interaction;     // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Button_Basic_C*                    CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PressAndReleaseKey_ReturnValue_1;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_KeyboardInteraction_C> K2Node_DynamicCast_AsBPI_Keyboard_Interaction_1;   // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PressAndReleaseKey_ReturnValue_2;         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Keyboard_Basic_C_UseModifierButton) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_UseModifierButton");
static_assert(sizeof(WBP_Keyboard_Basic_C_UseModifierButton) == 0x000078, "Wrong size on WBP_Keyboard_Basic_C_UseModifierButton");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, ModifierToUse) == 0x000000, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::ModifierToUse' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_PressAndReleaseKey_ReturnValue) == 0x000010, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_PressAndReleaseKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, K2Node_DynamicCast_AsBPI_Keyboard_Interaction) == 0x000030, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::K2Node_DynamicCast_AsBPI_Keyboard_Interaction' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Less_IntInt_ReturnValue) == 0x000041, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_PressAndReleaseKey_ReturnValue_1) == 0x000050, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_PressAndReleaseKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, K2Node_DynamicCast_AsBPI_Keyboard_Interaction_1) == 0x000058, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::K2Node_DynamicCast_AsBPI_Keyboard_Interaction_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_PressAndReleaseKey_ReturnValue_2) == 0x000069, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_PressAndReleaseKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Keyboard_Basic_C_UseModifierButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x000070, "Member 'WBP_Keyboard_Basic_C_UseModifierButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SetButtonArray
// 0x0010 (0x0010 - 0x0000)
struct WBP_Keyboard_Basic_C_SetButtonArray final
{
public:
	TArray<class UWBP_Button_Basic_C*>            K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_Keyboard_Basic_C_SetButtonArray) == 0x000008, "Wrong alignment on WBP_Keyboard_Basic_C_SetButtonArray");
static_assert(sizeof(WBP_Keyboard_Basic_C_SetButtonArray) == 0x000010, "Wrong size on WBP_Keyboard_Basic_C_SetButtonArray");
static_assert(offsetof(WBP_Keyboard_Basic_C_SetButtonArray, K2Node_MakeArray_Array) == 0x000000, "Member 'WBP_Keyboard_Basic_C_SetButtonArray::K2Node_MakeArray_Array' has a wrong offset!");

}
