#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_PlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_ConnectedPlayer_structs.hpp"
#include "BP_BasePlayerController_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lobby_PlayerController.Lobby_PlayerController_C
// 0x0090 (0x0608 - 0x0578)
class ALobby_PlayerController_C final : public ABP_BasePlayerController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Lobby_PlayerController_C;           // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChatComponent_C*                       ChatComponent;                                     // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULobby_HUD_C*                           LobbyHUD_Ref;                                      // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobby_Menu_C*                          LobbyMenu_Ref;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_SettingsPanel_Theme2_C*             SettingsUI_Ref;                                    // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ConnectedPlayer>             ConnectedPlayers;                                  // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsLaunchingGame;                                   // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1[0x3];                                      // 0x05B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CurrentGameMode;                                   // 0x05B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC[0x4];                                      // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReadyUpButton_Text;                                // 0x05C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Warning_State_;                                    // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Hide_Button_;                                      // 0x05D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ReadyUpButton_Initialized_;                        // 0x05DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LockButton_;                                       // 0x05DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DC[0x4];                                      // 0x05DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ServerName;                                        // 0x05E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_VOIPHUD_C*                           VOIP_HUD_Ref;                                      // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTalk;                                           // 0x0600(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_Lobby_PlayerController(int32 EntryPoint);
	void StartVoice();
	void OC_Create_MapTravel_Loadingscreen(class FName Map);
	void OC_KickedFromLobby();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OC_Update_ConnectedPlayersList(const TArray<struct FS_ConnectedPlayer>& ConnectedPlayers_0);
	void OC_Update_ServerName(const class FText& ServerName_0);
	void OC_Launchevent(bool IsLaunchingGame_0);
	void OC_Update_ReadyUpButton(const class FText& Text, bool WarningState_, bool HideButton_);
	void OC_Update_LobbyStatusIndicator(ESlateVisibility CircularThrobber_Visibility, const class FText& LobbyStatus_Text);
	void MC_LoadingScreen();
	void InpActEvt_Talk_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Talk_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void OnSuccess_6E7D169843C1BE4CDA92E896C8C1B365();
	void OnFailure_6E7D169843C1BE4CDA92E896C8C1B365();
	void OnSuccess_866615BE41AC454694EE4F9532779BF7();
	void OnFailure_866615BE41AC454694EE4F9532779BF7();
	void InpActEvt_Settings_K2Node_InputActionEvent_3(const struct FKey& Key);
	void Update_LobbyPlayerList();
	void Update_ReadyUpButton();
	void Update_Launchevent();
	void Update_LobbyStatusIndicator(ESlateVisibility CircularThrobberVisibility, const class FText& LobbyStatusText);
	void Update_WB_LobbyMenu();
	void Get_Chat_Component();
	void Get_Player_Name();
	void Create_WB_Lobby_HUD();
	void Save_ReadyUpButton_State(const class FText& ReadyUpButton_Text_0, bool Warning_State__0, bool Hide_Button__0);
	void Update_GameMode();
	void Create_MapTravel_LoadingScreen(class FName Map);
	void CreateLoadingScreen(const class FText& LoadingScreen_FeedbackText, class UTexture2D* LoadingScreen_Image);
	void Update_PlayerSpeaking(bool IsSpeaking, const struct FBPUniqueNetId& UniqueId);
	void OnRep_CanTalk();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_PlayerController_C">();
	}
	static class ALobby_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobby_PlayerController_C>();
	}
};
static_assert(alignof(ALobby_PlayerController_C) == 0x000008, "Wrong alignment on ALobby_PlayerController_C");
static_assert(sizeof(ALobby_PlayerController_C) == 0x000608, "Wrong size on ALobby_PlayerController_C");
static_assert(offsetof(ALobby_PlayerController_C, UberGraphFrame_Lobby_PlayerController_C) == 0x000578, "Member 'ALobby_PlayerController_C::UberGraphFrame_Lobby_PlayerController_C' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, ChatComponent) == 0x000580, "Member 'ALobby_PlayerController_C::ChatComponent' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, LobbyHUD_Ref) == 0x000588, "Member 'ALobby_PlayerController_C::LobbyHUD_Ref' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, LobbyMenu_Ref) == 0x000590, "Member 'ALobby_PlayerController_C::LobbyMenu_Ref' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, SettingsUI_Ref) == 0x000598, "Member 'ALobby_PlayerController_C::SettingsUI_Ref' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, ConnectedPlayers) == 0x0005A0, "Member 'ALobby_PlayerController_C::ConnectedPlayers' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, IsLaunchingGame) == 0x0005B0, "Member 'ALobby_PlayerController_C::IsLaunchingGame' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, CurrentGameMode) == 0x0005B4, "Member 'ALobby_PlayerController_C::CurrentGameMode' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, ReadyUpButton_Text) == 0x0005C0, "Member 'ALobby_PlayerController_C::ReadyUpButton_Text' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, Warning_State_) == 0x0005D8, "Member 'ALobby_PlayerController_C::Warning_State_' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, Hide_Button_) == 0x0005D9, "Member 'ALobby_PlayerController_C::Hide_Button_' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, ReadyUpButton_Initialized_) == 0x0005DA, "Member 'ALobby_PlayerController_C::ReadyUpButton_Initialized_' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, LockButton_) == 0x0005DB, "Member 'ALobby_PlayerController_C::LockButton_' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, ServerName) == 0x0005E0, "Member 'ALobby_PlayerController_C::ServerName' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, VOIP_HUD_Ref) == 0x0005F8, "Member 'ALobby_PlayerController_C::VOIP_HUD_Ref' has a wrong offset!");
static_assert(offsetof(ALobby_PlayerController_C, CanTalk) == 0x000600, "Member 'ALobby_PlayerController_C::CanTalk' has a wrong offset!");

}

