#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadGameButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LoadGameButton.W_LoadGameButton_C
// 0x00A0 (0x0300 - 0x0260)
class UW_LoadGameButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Delete;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Load;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Over;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MySizeBox;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Date;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Delete;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Difficulty;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_GameName;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TimePlayed;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MySaveGame_C*                       GameData;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          MakeAnim_;                                         // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x3];                                      // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActualLeft;                                        // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     MyLeft;                                            // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHovered_;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x3];                                      // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           MouseEnterImageColor;                              // 0x02CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MouseLeaveImageColor;                              // 0x02DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_MainMenu_C*                          MainMenuRef;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Click;                                             // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_LoadGameButton(int32 EntryPoint);
	void CheckForStyle(bool ShowStyle_);
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void MouseLeave();
	void MouseEnter();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void MakeAnim();
	void PreConstruct(bool IsDesignTime);
	class UWidget* CustomNavigation_Left(EUINavigation Navigation_0);
	class UWidget* CustomNavigation_Right(EUINavigation Navigation_0);
	class UWidget* CustomNavigation_Up(EUINavigation Navigation_0);
	class UWidget* CustomNavigation_Down(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LoadGameButton_C">();
	}
	static class UW_LoadGameButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LoadGameButton_C>();
	}
};
static_assert(alignof(UW_LoadGameButton_C) == 0x000008, "Wrong alignment on UW_LoadGameButton_C");
static_assert(sizeof(UW_LoadGameButton_C) == 0x000300, "Wrong size on UW_LoadGameButton_C");
static_assert(offsetof(UW_LoadGameButton_C, UberGraphFrame) == 0x000260, "Member 'UW_LoadGameButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, Button_Delete) == 0x000268, "Member 'UW_LoadGameButton_C::Button_Delete' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, Button_Load) == 0x000270, "Member 'UW_LoadGameButton_C::Button_Load' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, Image_Over) == 0x000278, "Member 'UW_LoadGameButton_C::Image_Over' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, MySizeBox) == 0x000280, "Member 'UW_LoadGameButton_C::MySizeBox' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, TextBlock_Date) == 0x000288, "Member 'UW_LoadGameButton_C::TextBlock_Date' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, TextBlock_Delete) == 0x000290, "Member 'UW_LoadGameButton_C::TextBlock_Delete' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, TextBlock_Difficulty) == 0x000298, "Member 'UW_LoadGameButton_C::TextBlock_Difficulty' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, TextBlock_GameName) == 0x0002A0, "Member 'UW_LoadGameButton_C::TextBlock_GameName' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, TextBlock_TimePlayed) == 0x0002A8, "Member 'UW_LoadGameButton_C::TextBlock_TimePlayed' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, GameData) == 0x0002B0, "Member 'UW_LoadGameButton_C::GameData' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, MakeAnim_) == 0x0002B8, "Member 'UW_LoadGameButton_C::MakeAnim_' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, ActualLeft) == 0x0002BC, "Member 'UW_LoadGameButton_C::ActualLeft' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, MyLeft) == 0x0002C0, "Member 'UW_LoadGameButton_C::MyLeft' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, IsHovered_) == 0x0002C8, "Member 'UW_LoadGameButton_C::IsHovered_' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, MouseEnterImageColor) == 0x0002CC, "Member 'UW_LoadGameButton_C::MouseEnterImageColor' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, MouseLeaveImageColor) == 0x0002DC, "Member 'UW_LoadGameButton_C::MouseLeaveImageColor' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, MainMenuRef) == 0x0002F0, "Member 'UW_LoadGameButton_C::MainMenuRef' has a wrong offset!");
static_assert(offsetof(UW_LoadGameButton_C, Click) == 0x0002F8, "Member 'UW_LoadGameButton_C::Click' has a wrong offset!");

}

