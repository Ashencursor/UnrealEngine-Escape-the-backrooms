#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Desktop

#include "Basic.hpp"

#include "UI_Desktop_classes.hpp"
#include "UI_Desktop_parameters.hpp"


namespace SDK
{

// Function UI_Desktop.UI_Desktop_C.ExecuteUbergraph_UI_Desktop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Desktop_C::ExecuteUbergraph_UI_Desktop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "ExecuteUbergraph_UI_Desktop");

	Params::UI_Desktop_C_ExecuteUbergraph_UI_Desktop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Desktop.UI_Desktop_C.AddWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Drag_C*                       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Desktop_C::AddWidget(class UUI_Drag_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "AddWidget");

	Params::UI_Desktop_C_AddWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Desktop.UI_Desktop_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Desktop_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "Tick");

	Params::UI_Desktop_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Desktop.UI_Desktop_C.OnDrag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGrabbed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Drag_C*                       Window                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Desktop_C::OnDrag(bool IsGrabbed, class UUI_Drag_C* Window)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "OnDrag");

	Params::UI_Desktop_C_OnDrag Parms{};

	Parms.IsGrabbed = IsGrabbed;
	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Desktop.UI_Desktop_C.HardExit
// (BlueprintCallable, BlueprintEvent)

void UUI_Desktop_C::HardExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "HardExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.RunConsole
// (BlueprintCallable, BlueprintEvent)

void UUI_Desktop_C::RunConsole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "RunConsole");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.RunClock
// (BlueprintCallable, BlueprintEvent)

void UUI_Desktop_C::RunClock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "RunClock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.LaunchShortcut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Program_ID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture2D__if_applicatable_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text__if_applicatable_                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class USoundBase*                       Sounnd__if_applicatable_                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFileMediaSource*                 Media__if_applicatable_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Level_Name__if_applicatable_                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Desktop_C::LaunchShortcut(int32 Program_ID, class UTexture2D* Texture2D__if_applicatable_, const class FText& Text__if_applicatable_, class USoundBase* Sounnd__if_applicatable_, class UFileMediaSource* Media__if_applicatable_, const class FString& Level_Name__if_applicatable_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "LaunchShortcut");

	Params::UI_Desktop_C_LaunchShortcut Parms{};

	Parms.Program_ID = Program_ID;
	Parms.Texture2D__if_applicatable_ = Texture2D__if_applicatable_;
	Parms.Text__if_applicatable_ = std::move(Text__if_applicatable_);
	Parms.Sounnd__if_applicatable_ = Sounnd__if_applicatable_;
	Parms.Media__if_applicatable_ = Media__if_applicatable_;
	Parms.Level_Name__if_applicatable_ = std::move(Level_Name__if_applicatable_);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Desktop.UI_Desktop_C.Add shortcut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Program_ID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Image_If_Applicatable                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text__if_applicatable_                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class USoundBase*                       Sound__if_applicatable_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFileMediaSource*                 Media__if_applicatable_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           LevelName__if_applicable_                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Desktop_C::Add_shortcut(int32 Program_ID, const class FText& Name_0, class UTexture2D* Icon, class UTexture2D* Image_If_Applicatable, const class FText& Text__if_applicatable_, class USoundBase* Sound__if_applicatable_, class UFileMediaSource* Media__if_applicatable_, const class FString& LevelName__if_applicable_, bool IsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "Add shortcut");

	Params::UI_Desktop_C_Add_shortcut Parms{};

	Parms.Program_ID = Program_ID;
	Parms.Name_0 = std::move(Name_0);
	Parms.Icon = Icon;
	Parms.Image_If_Applicatable = Image_If_Applicatable;
	Parms.Text__if_applicatable_ = std::move(Text__if_applicatable_);
	Parms.Sound__if_applicatable_ = Sound__if_applicatable_;
	Parms.Media__if_applicatable_ = Media__if_applicatable_;
	Parms.LevelName__if_applicable_ = std::move(LevelName__if_applicable_);
	Parms.IsLocked = IsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Desktop.UI_Desktop_C.BndEvt__ButtonOff_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Desktop_C::BndEvt__ButtonOff_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "BndEvt__ButtonOff_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.BndEvt__Console_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Desktop_C::BndEvt__Console_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "BndEvt__Console_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.LaunchProgram
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InMinDesiredWidth                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMinDesiredHeight                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ProgramContent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Desktop_C::LaunchProgram(float InMinDesiredWidth, float InMinDesiredHeight, class UWidget* ProgramContent, const struct FVector2D& InPosition, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "LaunchProgram");

	Params::UI_Desktop_C_LaunchProgram Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;
	Parms.InMinDesiredHeight = InMinDesiredHeight;
	Parms.ProgramContent = ProgramContent;
	Parms.InPosition = std::move(InPosition);
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Desktop.UI_Desktop_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)

void UUI_Desktop_C::UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "UpdateTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Desktop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.onClose
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Desktop_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "onClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Desktop.UI_Desktop_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_Desktop_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "OnDrop");

	Params::UI_Desktop_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Desktop.UI_Desktop_C.Generate Encrypted Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Desktop_C::Generate_Encrypted_Name(const class FText& Level, class FString* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "Generate Encrypted Name");

	Params::UI_Desktop_C_Generate_Encrypted_Name Parms{};

	Parms.Level = std::move(Level);

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function UI_Desktop.UI_Desktop_C.GetLevelName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             LevelName                                              (Parm, OutParm)
// class UTexture2D*                       Icon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLocked                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Desktop_C::GetLevelName(const class FString& Level, class FText* LevelName, class UTexture2D** Icon, bool* IsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "GetLevelName");

	Params::UI_Desktop_C_GetLevelName Parms{};

	Parms.Level = std::move(Level);

	UObject::ProcessEvent(Func, &Parms);

	if (LevelName != nullptr)
		*LevelName = std::move(Parms.LevelName);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (IsLocked != nullptr)
		*IsLocked = Parms.IsLocked;
}


// Function UI_Desktop.UI_Desktop_C.Is Locked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsLocked                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Desktop_C::Is_Locked(const class FString& LevelName, bool* IsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "Is Locked");

	Params::UI_Desktop_C_Is_Locked Parms{};

	Parms.LevelName = std::move(LevelName);

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocked != nullptr)
		*IsLocked = Parms.IsLocked;
}


// Function UI_Desktop.UI_Desktop_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Desktop_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "OnMouseMove");

	Params::UI_Desktop_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Desktop.UI_Desktop_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Desktop_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Desktop_C", "OnMouseButtonUp");

	Params::UI_Desktop_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
