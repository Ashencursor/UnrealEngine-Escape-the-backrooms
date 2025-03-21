#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TemplateTitle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TemplateTitle.W_TemplateTitle_C
// 0x0040 (0x02A0 - 0x0260)
class UW_TemplateTitle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               MySizeBox;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Title;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ShowTitle;                                         // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          First_;                                            // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CustomHeight;                                      // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         CustomWidth;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_TemplateTitle(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void ChangeTitleColor(const struct FSlateColor& NewColorAndOpacity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TemplateTitle_C">();
	}
	static class UW_TemplateTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TemplateTitle_C>();
	}
};
static_assert(alignof(UW_TemplateTitle_C) == 0x000008, "Wrong alignment on UW_TemplateTitle_C");
static_assert(sizeof(UW_TemplateTitle_C) == 0x0002A0, "Wrong size on UW_TemplateTitle_C");
static_assert(offsetof(UW_TemplateTitle_C, UberGraphFrame) == 0x000260, "Member 'UW_TemplateTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_TemplateTitle_C, MySizeBox) == 0x000268, "Member 'UW_TemplateTitle_C::MySizeBox' has a wrong offset!");
static_assert(offsetof(UW_TemplateTitle_C, TextBlock_Title) == 0x000270, "Member 'UW_TemplateTitle_C::TextBlock_Title' has a wrong offset!");
static_assert(offsetof(UW_TemplateTitle_C, ShowTitle) == 0x000278, "Member 'UW_TemplateTitle_C::ShowTitle' has a wrong offset!");
static_assert(offsetof(UW_TemplateTitle_C, First_) == 0x000290, "Member 'UW_TemplateTitle_C::First_' has a wrong offset!");
static_assert(offsetof(UW_TemplateTitle_C, CustomHeight) == 0x000294, "Member 'UW_TemplateTitle_C::CustomHeight' has a wrong offset!");
static_assert(offsetof(UW_TemplateTitle_C, CustomWidth) == 0x000298, "Member 'UW_TemplateTitle_C::CustomWidth' has a wrong offset!");

}

