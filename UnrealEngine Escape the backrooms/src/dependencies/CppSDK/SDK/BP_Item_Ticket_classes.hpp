#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Item_Ticket

#include "Basic.hpp"

#include "BP_Item_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Item_Ticket.BP_Item_Ticket_C
// 0x0018 (0x0270 - 0x0258)
class ABP_Item_Ticket_C final : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Item_Ticket_C;                   // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       Camera;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CanUse;                                            // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Item_Ticket(int32 EntryPoint);
	void PlayAnimation();
	void UseItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Ticket_C">();
	}
	static class ABP_Item_Ticket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Ticket_C>();
	}
};
static_assert(alignof(ABP_Item_Ticket_C) == 0x000008, "Wrong alignment on ABP_Item_Ticket_C");
static_assert(sizeof(ABP_Item_Ticket_C) == 0x000270, "Wrong size on ABP_Item_Ticket_C");
static_assert(offsetof(ABP_Item_Ticket_C, UberGraphFrame_BP_Item_Ticket_C) == 0x000258, "Member 'ABP_Item_Ticket_C::UberGraphFrame_BP_Item_Ticket_C' has a wrong offset!");
static_assert(offsetof(ABP_Item_Ticket_C, Camera) == 0x000260, "Member 'ABP_Item_Ticket_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_Item_Ticket_C, CanUse) == 0x000268, "Member 'ABP_Item_Ticket_C::CanUse' has a wrong offset!");

}
