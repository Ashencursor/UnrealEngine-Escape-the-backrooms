#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Dragged

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass UI_Dragged.UI_Dragged_C
// 0x0010 (0x0098 - 0x0088)
class UUI_Dragged_C final : public UDragDropOperation
{
public:
	class UUserWidget*                            WidgetReference;                                   // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              DragOffset;                                        // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Dragged_C">();
	}
	static class UUI_Dragged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Dragged_C>();
	}
};
static_assert(alignof(UUI_Dragged_C) == 0x000008, "Wrong alignment on UUI_Dragged_C");
static_assert(sizeof(UUI_Dragged_C) == 0x000098, "Wrong size on UUI_Dragged_C");
static_assert(offsetof(UUI_Dragged_C, WidgetReference) == 0x000088, "Member 'UUI_Dragged_C::WidgetReference' has a wrong offset!");
static_assert(offsetof(UUI_Dragged_C, DragOffset) == 0x000090, "Member 'UUI_Dragged_C::DragOffset' has a wrong offset!");

}

