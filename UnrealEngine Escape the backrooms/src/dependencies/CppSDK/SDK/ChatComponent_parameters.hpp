#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatComponent

#include "Basic.hpp"

#include "S_ChatMessage_structs.hpp"


namespace SDK::Params
{

// Function ChatComponent.ChatComponent_C.ExecuteUbergraph_ChatComponent
// 0x00F0 (0x00F0 - 0x0000)
struct ChatComponent_C_ExecuteUbergraph_ChatComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsInGame;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_ChatMessage                         K2Node_CustomEvent_Message_1;                      // 0x0020(0x0040)(HasGetValueTypeHash)
	struct FS_ChatMessage                         K2Node_CustomEvent_Message;                        // 0x0060(0x0040)(ConstParm, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobby_GM_C*                            K2Node_DynamicCast_AsLobby_GM;                     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMP_GameMode_C*                         K2Node_DynamicCast_AsMP_Game_Mode;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobby_PlayerController_C*              CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMP_PlayerController_C*                 CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InitTextFiltering_ReturnValue;            // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatComponent_C_ExecuteUbergraph_ChatComponent) == 0x000008, "Wrong alignment on ChatComponent_C_ExecuteUbergraph_ChatComponent");
static_assert(sizeof(ChatComponent_C_ExecuteUbergraph_ChatComponent) == 0x0000F0, "Wrong size on ChatComponent_C_ExecuteUbergraph_ChatComponent");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, EntryPoint) == 0x000000, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, K2Node_CustomEvent_IsInGame) == 0x00001C, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::K2Node_CustomEvent_IsInGame' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, K2Node_CustomEvent_Message_1) == 0x000020, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::K2Node_CustomEvent_Message_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, K2Node_CustomEvent_Message) == 0x000060, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_GetGameMode_ReturnValue) == 0x0000A0, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, K2Node_DynamicCast_AsLobby_GM) == 0x0000B0, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::K2Node_DynamicCast_AsLobby_GM' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, K2Node_DynamicCast_AsMP_Game_Mode) == 0x0000C0, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::K2Node_DynamicCast_AsMP_Game_Mode' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Array_Length_ReturnValue_1) == 0x0000E8, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000EC, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_ExecuteUbergraph_ChatComponent, CallFunc_InitTextFiltering_ReturnValue) == 0x0000ED, "Member 'ChatComponent_C_ExecuteUbergraph_ChatComponent::CallFunc_InitTextFiltering_ReturnValue' has a wrong offset!");

// Function ChatComponent.ChatComponent_C.SR_Update_Chat
// 0x0040 (0x0040 - 0x0000)
struct ChatComponent_C_SR_Update_Chat final
{
public:
	struct FS_ChatMessage                         Message;                                           // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(ChatComponent_C_SR_Update_Chat) == 0x000008, "Wrong alignment on ChatComponent_C_SR_Update_Chat");
static_assert(sizeof(ChatComponent_C_SR_Update_Chat) == 0x000040, "Wrong size on ChatComponent_C_SR_Update_Chat");
static_assert(offsetof(ChatComponent_C_SR_Update_Chat, Message) == 0x000000, "Member 'ChatComponent_C_SR_Update_Chat::Message' has a wrong offset!");

// Function ChatComponent.ChatComponent_C.OC_Update_Chat
// 0x0040 (0x0040 - 0x0000)
struct ChatComponent_C_OC_Update_Chat final
{
public:
	struct FS_ChatMessage                         Message;                                           // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(ChatComponent_C_OC_Update_Chat) == 0x000008, "Wrong alignment on ChatComponent_C_OC_Update_Chat");
static_assert(sizeof(ChatComponent_C_OC_Update_Chat) == 0x000040, "Wrong size on ChatComponent_C_OC_Update_Chat");
static_assert(offsetof(ChatComponent_C_OC_Update_Chat, Message) == 0x000000, "Member 'ChatComponent_C_OC_Update_Chat::Message' has a wrong offset!");

// Function ChatComponent.ChatComponent_C.OC_Setup_Chat_Widget
// 0x0001 (0x0001 - 0x0000)
struct ChatComponent_C_OC_Setup_Chat_Widget final
{
public:
	bool                                          IsInGame;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatComponent_C_OC_Setup_Chat_Widget) == 0x000001, "Wrong alignment on ChatComponent_C_OC_Setup_Chat_Widget");
static_assert(sizeof(ChatComponent_C_OC_Setup_Chat_Widget) == 0x000001, "Wrong size on ChatComponent_C_OC_Setup_Chat_Widget");
static_assert(offsetof(ChatComponent_C_OC_Setup_Chat_Widget, IsInGame) == 0x000000, "Member 'ChatComponent_C_OC_Setup_Chat_Widget::IsInGame' has a wrong offset!");

// Function ChatComponent.ChatComponent_C.Create_Chat_Widget
// 0x0018 (0x0018 - 0x0000)
struct ChatComponent_C_Create_Chat_Widget final
{
public:
	bool                                          IsInGame;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_Chat_C*                             CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatComponent_C_Create_Chat_Widget) == 0x000008, "Wrong alignment on ChatComponent_C_Create_Chat_Widget");
static_assert(sizeof(ChatComponent_C_Create_Chat_Widget) == 0x000018, "Wrong size on ChatComponent_C_Create_Chat_Widget");
static_assert(offsetof(ChatComponent_C_Create_Chat_Widget, IsInGame) == 0x000000, "Member 'ChatComponent_C_Create_Chat_Widget::IsInGame' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_Create_Chat_Widget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ChatComponent_C_Create_Chat_Widget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_Create_Chat_Widget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ChatComponent_C_Create_Chat_Widget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatComponent_C_Create_Chat_Widget, CallFunc_IsInViewport_ReturnValue) == 0x000011, "Member 'ChatComponent_C_Create_Chat_Widget::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");

// Function ChatComponent.ChatComponent_C.Focus_Chat
// 0x0001 (0x0001 - 0x0000)
struct ChatComponent_C_Focus_Chat final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatComponent_C_Focus_Chat) == 0x000001, "Wrong alignment on ChatComponent_C_Focus_Chat");
static_assert(sizeof(ChatComponent_C_Focus_Chat) == 0x000001, "Wrong size on ChatComponent_C_Focus_Chat");
static_assert(offsetof(ChatComponent_C_Focus_Chat, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'ChatComponent_C_Focus_Chat::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ChatComponent.ChatComponent_C.Clear_Chat
// 0x0001 (0x0001 - 0x0000)
struct ChatComponent_C_Clear_Chat final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatComponent_C_Clear_Chat) == 0x000001, "Wrong alignment on ChatComponent_C_Clear_Chat");
static_assert(sizeof(ChatComponent_C_Clear_Chat) == 0x000001, "Wrong size on ChatComponent_C_Clear_Chat");
static_assert(offsetof(ChatComponent_C_Clear_Chat, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'ChatComponent_C_Clear_Chat::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
