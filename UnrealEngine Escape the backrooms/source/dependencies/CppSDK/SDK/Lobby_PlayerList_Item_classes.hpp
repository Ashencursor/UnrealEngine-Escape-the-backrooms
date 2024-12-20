#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_PlayerList_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "S_ConnectedPlayer_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lobby_PlayerList_Item.Lobby_PlayerList_Item_C
// 0x00B0 (0x0310 - 0x0260)
class ULobby_PlayerList_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               HostIndicator;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Kick_Btn;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KickButton_Text;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Player_Avatar_Image;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Player_ReadyStatus;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Player_Username_text;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Speaker_Image;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_ConnectedPlayer                     ConnectedPlayer;                                   // 0x02A0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            Ready_Color;                                       // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NotReady_Color;                                    // 0x02E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Lobby_PlayerList_Item(int32 EntryPoint);
	void BndEvt__WB_Lobby_PlayerList_Item_Kick_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void CanClose();
	void Set_ReadyStatus();
	void Set_HostIndicator();
	void Set_KickButton();
	void Set_Username();
	void Set_Avatar();
	void Setup();
	void KickPlayer();
	void Set_Speaking(bool IsSpeaking);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_PlayerList_Item_C">();
	}
	static class ULobby_PlayerList_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobby_PlayerList_Item_C>();
	}
};
static_assert(alignof(ULobby_PlayerList_Item_C) == 0x000008, "Wrong alignment on ULobby_PlayerList_Item_C");
static_assert(sizeof(ULobby_PlayerList_Item_C) == 0x000310, "Wrong size on ULobby_PlayerList_Item_C");
static_assert(offsetof(ULobby_PlayerList_Item_C, UberGraphFrame) == 0x000260, "Member 'ULobby_PlayerList_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, HostIndicator) == 0x000268, "Member 'ULobby_PlayerList_Item_C::HostIndicator' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, Kick_Btn) == 0x000270, "Member 'ULobby_PlayerList_Item_C::Kick_Btn' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, KickButton_Text) == 0x000278, "Member 'ULobby_PlayerList_Item_C::KickButton_Text' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, Player_Avatar_Image) == 0x000280, "Member 'ULobby_PlayerList_Item_C::Player_Avatar_Image' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, Player_ReadyStatus) == 0x000288, "Member 'ULobby_PlayerList_Item_C::Player_ReadyStatus' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, Player_Username_text) == 0x000290, "Member 'ULobby_PlayerList_Item_C::Player_Username_text' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, Speaker_Image) == 0x000298, "Member 'ULobby_PlayerList_Item_C::Speaker_Image' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, ConnectedPlayer) == 0x0002A0, "Member 'ULobby_PlayerList_Item_C::ConnectedPlayer' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, Ready_Color) == 0x0002C0, "Member 'ULobby_PlayerList_Item_C::Ready_Color' has a wrong offset!");
static_assert(offsetof(ULobby_PlayerList_Item_C, NotReady_Color) == 0x0002E8, "Member 'ULobby_PlayerList_Item_C::NotReady_Color' has a wrong offset!");

}

