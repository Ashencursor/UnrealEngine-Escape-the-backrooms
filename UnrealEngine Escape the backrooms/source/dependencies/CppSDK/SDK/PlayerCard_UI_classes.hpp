#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerCard_UI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerCard_UI.PlayerCard_UI_C
// 0x0050 (0x02B0 - 0x0260)
class UPlayerCard_UI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_257;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_90;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_233;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameText;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameText_1;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameText_3;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 PlayerName;                                        // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         PlayerLevel;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerCard_UI(int32 EntryPoint);
	void Construct();
	void SetName(const class FText& Name_0);
	void GetLevelColor(struct FLinearColor* Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerCard_UI_C">();
	}
	static class UPlayerCard_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerCard_UI_C>();
	}
};
static_assert(alignof(UPlayerCard_UI_C) == 0x000008, "Wrong alignment on UPlayerCard_UI_C");
static_assert(sizeof(UPlayerCard_UI_C) == 0x0002B0, "Wrong size on UPlayerCard_UI_C");
static_assert(offsetof(UPlayerCard_UI_C, UberGraphFrame) == 0x000260, "Member 'UPlayerCard_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, Border_257) == 0x000268, "Member 'UPlayerCard_UI_C::Border_257' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, Image_90) == 0x000270, "Member 'UPlayerCard_UI_C::Image_90' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, Image_233) == 0x000278, "Member 'UPlayerCard_UI_C::Image_233' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, NameText) == 0x000280, "Member 'UPlayerCard_UI_C::NameText' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, NameText_1) == 0x000288, "Member 'UPlayerCard_UI_C::NameText_1' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, NameText_3) == 0x000290, "Member 'UPlayerCard_UI_C::NameText_3' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, PlayerName) == 0x000298, "Member 'UPlayerCard_UI_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UPlayerCard_UI_C, PlayerLevel) == 0x0002A8, "Member 'UPlayerCard_UI_C::PlayerLevel' has a wrong offset!");

}
