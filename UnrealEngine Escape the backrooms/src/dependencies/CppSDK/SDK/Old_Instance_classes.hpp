#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Old_Instance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AdvancedSessions_classes.hpp"
#include "E_Difficulty_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Old_Instance.Old_Instance_C
// 0x0070 (0x0298 - 0x0228)
class UOld_Instance_C final : public UAdvancedFriendsGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_LoadingScreen_C*                     W_LoadingScreenRef;                                // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LoadingMessage;                                    // 0x0238(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   LoadingMessageTip;                                 // 0x0250(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AlreadyIntro_;                                     // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x3];                                      // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeLoadingBeforeContinue;                         // 0x026C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMP_PlayerController_C*>         ToRespawn;                                         // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	E_Difficulty                                  Difficulty;                                        // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasKicked;                                         // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_282[0x6];                                      // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Code;                                              // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Old_Instance(int32 EntryPoint);
	void UnlockAchievement(class FName AchievementName);
	void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin);
	void ReceiveInit();
	void Initialize_AudioSettings();
	void ResetAfterErrorFocus(class APlayerController* PlayerController, class UWidget* Widget);
	void JoinServerSession(const struct FBlueprintSessionResult& Session, class APlayerController* PlayerController, class UWidget* ParentRef, bool ShowLoadingScreen_0);
	void ShowLoadingScreen(class APlayerController* PlayerController, const class FText& Message);
	void JoinServerCode(const class FString& Code_0, class APlayerController* PlayerController, class UWidget* ParentRef);
	void CreateServer(class APlayerController* PlayerController, class UWidget* WidgetRef, class UWidget* ParentRef, class FName LevelName, int32 MaxPlayer, bool IsPrivate, const class FText& ServerName);
	void OnSuccess_ED213154495FF5E71DED67A697B987EA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnFailure_ED213154495FF5E71DED67A697B987EA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnSuccess_B97CE1CD4661BC21FA87C5971EBFAE4B();
	void OnFailure_B97CE1CD4661BC21FA87C5971EBFAE4B();
	void OnSuccess_E86CBC904E3BC46F964D8587210AFCCB();
	void OnFailure_E86CBC904E3BC46F964D8587210AFCCB();
	void OnSuccess_887915044268FE8E01B793860BA0535C(const TArray<struct FBlueprintSessionResult>& Results);
	void OnFailure_887915044268FE8E01B793860BA0535C(const TArray<struct FBlueprintSessionResult>& Results);
	void OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D(const TArray<struct FBlueprintSessionResult>& Results);
	void OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D(const TArray<struct FBlueprintSessionResult>& Results);
	void OnSuccess_3D35B0DB407C07D551689385E984433B();
	void OnFailure_3D35B0DB407C07D551689385E984433B();
	void OnSuccess_A80D36E848E6AE6183E259BE7692C339();
	void OnFailure_A80D36E848E6AE6183E259BE7692C339();
	void GenerateCode();
	void CheckCodeUnique(const struct FSessionsSearchSetting& Code_0);
	void ToggleVoiceIngame(bool IsActivated);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Old_Instance_C">();
	}
	static class UOld_Instance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOld_Instance_C>();
	}
};
static_assert(alignof(UOld_Instance_C) == 0x000008, "Wrong alignment on UOld_Instance_C");
static_assert(sizeof(UOld_Instance_C) == 0x000298, "Wrong size on UOld_Instance_C");
static_assert(offsetof(UOld_Instance_C, UberGraphFrame) == 0x000228, "Member 'UOld_Instance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, W_LoadingScreenRef) == 0x000230, "Member 'UOld_Instance_C::W_LoadingScreenRef' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, LoadingMessage) == 0x000238, "Member 'UOld_Instance_C::LoadingMessage' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, LoadingMessageTip) == 0x000250, "Member 'UOld_Instance_C::LoadingMessageTip' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, AlreadyIntro_) == 0x000268, "Member 'UOld_Instance_C::AlreadyIntro_' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, TimeLoadingBeforeContinue) == 0x00026C, "Member 'UOld_Instance_C::TimeLoadingBeforeContinue' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, ToRespawn) == 0x000270, "Member 'UOld_Instance_C::ToRespawn' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, Difficulty) == 0x000280, "Member 'UOld_Instance_C::Difficulty' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, WasKicked) == 0x000281, "Member 'UOld_Instance_C::WasKicked' has a wrong offset!");
static_assert(offsetof(UOld_Instance_C, Code) == 0x000288, "Member 'UOld_Instance_C::Code' has a wrong offset!");

}

