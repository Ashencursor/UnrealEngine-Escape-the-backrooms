#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MothJelly

#include "Basic.hpp"

#include "BP_Item_classes.hpp"
#include "Engine_structs.hpp"
#include "Backrooms_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MothJelly.BP_MothJelly_C
// 0x0018 (0x0270 - 0x0258)
class ABP_MothJelly_C final : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MothJelly_C;                     // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         HoverDown_Z_EB7179E447BA8799493D5BACD216363D;      // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HoverDown__Direction_EB7179E447BA8799493D5BACD216363D; // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HoverDown;                                         // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MothJelly(int32 EntryPoint);
	void SRV_FinishEat();
	void PlayAnimation();
	void OnCompleted_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnBlendOut_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnInterrupted_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnNotifyBegin_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnNotifyEnd_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void HoverDown__UpdateFunc();
	void HoverDown__FinishedFunc();
	void OnEventLoaded(EEventType EventType);
	void ToggleEvent(bool Enable);
	void UseItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MothJelly_C">();
	}
	static class ABP_MothJelly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MothJelly_C>();
	}
};
static_assert(alignof(ABP_MothJelly_C) == 0x000008, "Wrong alignment on ABP_MothJelly_C");
static_assert(sizeof(ABP_MothJelly_C) == 0x000270, "Wrong size on ABP_MothJelly_C");
static_assert(offsetof(ABP_MothJelly_C, UberGraphFrame_BP_MothJelly_C) == 0x000258, "Member 'ABP_MothJelly_C::UberGraphFrame_BP_MothJelly_C' has a wrong offset!");
static_assert(offsetof(ABP_MothJelly_C, HoverDown_Z_EB7179E447BA8799493D5BACD216363D) == 0x000260, "Member 'ABP_MothJelly_C::HoverDown_Z_EB7179E447BA8799493D5BACD216363D' has a wrong offset!");
static_assert(offsetof(ABP_MothJelly_C, HoverDown__Direction_EB7179E447BA8799493D5BACD216363D) == 0x000264, "Member 'ABP_MothJelly_C::HoverDown__Direction_EB7179E447BA8799493D5BACD216363D' has a wrong offset!");
static_assert(offsetof(ABP_MothJelly_C, HoverDown) == 0x000268, "Member 'ABP_MothJelly_C::HoverDown' has a wrong offset!");

}

