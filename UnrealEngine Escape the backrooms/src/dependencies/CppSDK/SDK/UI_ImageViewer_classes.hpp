#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ImageViewer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ImageViewer.UI_ImageViewer_C
// 0x0010 (0x0270 - 0x0260)
class UUI_ImageViewer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ProgImage;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ImageViewer(int32 EntryPoint);
	void SetImage(class UTexture2D* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ImageViewer_C">();
	}
	static class UUI_ImageViewer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ImageViewer_C>();
	}
};
static_assert(alignof(UUI_ImageViewer_C) == 0x000008, "Wrong alignment on UUI_ImageViewer_C");
static_assert(sizeof(UUI_ImageViewer_C) == 0x000270, "Wrong size on UUI_ImageViewer_C");
static_assert(offsetof(UUI_ImageViewer_C, UberGraphFrame) == 0x000260, "Member 'UUI_ImageViewer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ImageViewer_C, ProgImage) == 0x000268, "Member 'UUI_ImageViewer_C::ProgImage' has a wrong offset!");

}
