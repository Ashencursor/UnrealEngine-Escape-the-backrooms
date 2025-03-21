#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ChatComponent.ChatComponent_C
// 0x0018 (0x00C8 - 0x00B0)
class UChatComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Chat_C*                             WB_ChatRef;                                        // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFiltering;                                       // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChatComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SR_Update_Chat(const struct FS_ChatMessage& Message);
	void OC_Update_Chat(const struct FS_ChatMessage& Message);
	void OC_Setup_Chat_Widget(bool IsInGame);
	void Create_Chat_Widget(bool IsInGame);
	void Focus_Chat();
	void Clear_Chat();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatComponent_C">();
	}
	static class UChatComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatComponent_C>();
	}
};
static_assert(alignof(UChatComponent_C) == 0x000008, "Wrong alignment on UChatComponent_C");
static_assert(sizeof(UChatComponent_C) == 0x0000C8, "Wrong size on UChatComponent_C");
static_assert(offsetof(UChatComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UChatComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatComponent_C, WB_ChatRef) == 0x0000B8, "Member 'UChatComponent_C::WB_ChatRef' has a wrong offset!");
static_assert(offsetof(UChatComponent_C, IsFiltering) == 0x0000C0, "Member 'UChatComponent_C::IsFiltering' has a wrong offset!");

}

