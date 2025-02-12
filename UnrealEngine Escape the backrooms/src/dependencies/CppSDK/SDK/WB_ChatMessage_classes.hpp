#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ChatMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "S_ChatMessage_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ChatMessage.WB_ChatMessage_C
// 0x0098 (0x02F8 - 0x0260)
class UWB_ChatMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ChatMessage_Text;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Username_Text;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_ChatMessage                         ChatMessage;                                       // 0x0278(0x0040)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 OwnerName;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Player_Message_Color;                              // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           System_Message_Color;                              // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Global_Message_Color;                              // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ChatMessage(int32 EntryPoint);
	void Construct();
	void Set_ChatMessage();
	void Construct_ChatMessage();
	void Set_Username();
	void Set_ChatMessage_Color(const struct FLinearColor& Specified_Color);
	void Set_Username_Global(const class FString& Chat_sender);
	void Set_Username_Color(const struct FLinearColor& SpecifiedColor);
	void IsFiltering(bool* IsFiltering_0);
	void CheckFont();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ChatMessage_C">();
	}
	static class UWB_ChatMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ChatMessage_C>();
	}
};
static_assert(alignof(UWB_ChatMessage_C) == 0x000008, "Wrong alignment on UWB_ChatMessage_C");
static_assert(sizeof(UWB_ChatMessage_C) == 0x0002F8, "Wrong size on UWB_ChatMessage_C");
static_assert(offsetof(UWB_ChatMessage_C, UberGraphFrame) == 0x000260, "Member 'UWB_ChatMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ChatMessage_C, ChatMessage_Text) == 0x000268, "Member 'UWB_ChatMessage_C::ChatMessage_Text' has a wrong offset!");
static_assert(offsetof(UWB_ChatMessage_C, Username_Text) == 0x000270, "Member 'UWB_ChatMessage_C::Username_Text' has a wrong offset!");
static_assert(offsetof(UWB_ChatMessage_C, ChatMessage) == 0x000278, "Member 'UWB_ChatMessage_C::ChatMessage' has a wrong offset!");
static_assert(offsetof(UWB_ChatMessage_C, OwnerName) == 0x0002B8, "Member 'UWB_ChatMessage_C::OwnerName' has a wrong offset!");
static_assert(offsetof(UWB_ChatMessage_C, Player_Message_Color) == 0x0002C8, "Member 'UWB_ChatMessage_C::Player_Message_Color' has a wrong offset!");
static_assert(offsetof(UWB_ChatMessage_C, System_Message_Color) == 0x0002D8, "Member 'UWB_ChatMessage_C::System_Message_Color' has a wrong offset!");
static_assert(offsetof(UWB_ChatMessage_C, Global_Message_Color) == 0x0002E8, "Member 'UWB_ChatMessage_C::Global_Message_Color' has a wrong offset!");

}

