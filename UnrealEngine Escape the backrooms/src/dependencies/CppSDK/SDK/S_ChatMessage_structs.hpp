#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ChatMessage

#include "Basic.hpp"

#include "AdvancedSessions_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_ChatMessage.S_ChatMessage
// 0x0040 (0x0040 - 0x0000)
struct FS_ChatMessage final
{
public:
	class FString                                 ChatSender_4_C7B4E1F24DE31402E441579224BD4102;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ChatMessage_5_75BB7DC5474425DE927E53B8D831BEA3;    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                         UniqueNetId_8_1B76099E4F752A2643030CB3F2A99FF6;    // 0x0020(0x0020)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_ChatMessage) == 0x000008, "Wrong alignment on FS_ChatMessage");
static_assert(sizeof(FS_ChatMessage) == 0x000040, "Wrong size on FS_ChatMessage");
static_assert(offsetof(FS_ChatMessage, ChatSender_4_C7B4E1F24DE31402E441579224BD4102) == 0x000000, "Member 'FS_ChatMessage::ChatSender_4_C7B4E1F24DE31402E441579224BD4102' has a wrong offset!");
static_assert(offsetof(FS_ChatMessage, ChatMessage_5_75BB7DC5474425DE927E53B8D831BEA3) == 0x000010, "Member 'FS_ChatMessage::ChatMessage_5_75BB7DC5474425DE927E53B8D831BEA3' has a wrong offset!");
static_assert(offsetof(FS_ChatMessage, UniqueNetId_8_1B76099E4F752A2643030CB3F2A99FF6) == 0x000020, "Member 'FS_ChatMessage::UniqueNetId_8_1B76099E4F752A2643030CB3F2A99FF6' has a wrong offset!");

}
