#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Sanity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Sanity.UI_Sanity_C
// 0x0038 (0x0298 - 0x0260)
class UUI_Sanity_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_13;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SanityLevel;                                   // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                                BP_Character;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Sanity(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	struct FSlateBrush GetBrush_0();
	struct FLinearColor GetColorAndOpacity_0();
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Sanity_C">();
	}
	static class UUI_Sanity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Sanity_C>();
	}
};
static_assert(alignof(UUI_Sanity_C) == 0x000008, "Wrong alignment on UUI_Sanity_C");
static_assert(sizeof(UUI_Sanity_C) == 0x000298, "Wrong size on UUI_Sanity_C");
static_assert(offsetof(UUI_Sanity_C, UberGraphFrame) == 0x000260, "Member 'UUI_Sanity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Sanity_C, Image_0) == 0x000268, "Member 'UUI_Sanity_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_Sanity_C, Image_13) == 0x000270, "Member 'UUI_Sanity_C::Image_13' has a wrong offset!");
static_assert(offsetof(UUI_Sanity_C, Img_SanityLevel) == 0x000278, "Member 'UUI_Sanity_C::Img_SanityLevel' has a wrong offset!");
static_assert(offsetof(UUI_Sanity_C, BP_Character) == 0x000280, "Member 'UUI_Sanity_C::BP_Character' has a wrong offset!");
static_assert(offsetof(UUI_Sanity_C, Texture) == 0x000288, "Member 'UUI_Sanity_C::Texture' has a wrong offset!");
static_assert(offsetof(UUI_Sanity_C, DynamicMaterial) == 0x000290, "Member 'UUI_Sanity_C::DynamicMaterial' has a wrong offset!");

}

