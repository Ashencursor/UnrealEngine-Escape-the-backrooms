#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HE_SubtitleSub

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct HE_SubtitleSub.HE_SubtitleSub
// 0x0020 (0x0020 - 0x0000)
struct FHE_SubtitleSub final
{
public:
	class AActor*                                 AttachtoActor_41_AC97CC71400FF9784591338B5C6BC8B7; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AttachtoTaggedActorSkipSelected_37_9BFE789D4F1D8626EBACA6B1C7D34015; // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ActorTag_42_E5B1EB5C4F918022B4B172B7C66EF8DA;      // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAttenuation*                      SoundAttenuation_45_CF61DBA34A0D2CF70CB600849E358855; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FHE_SubtitleSub) == 0x000008, "Wrong alignment on FHE_SubtitleSub");
static_assert(sizeof(FHE_SubtitleSub) == 0x000020, "Wrong size on FHE_SubtitleSub");
static_assert(offsetof(FHE_SubtitleSub, AttachtoActor_41_AC97CC71400FF9784591338B5C6BC8B7) == 0x000000, "Member 'FHE_SubtitleSub::AttachtoActor_41_AC97CC71400FF9784591338B5C6BC8B7' has a wrong offset!");
static_assert(offsetof(FHE_SubtitleSub, AttachtoTaggedActorSkipSelected_37_9BFE789D4F1D8626EBACA6B1C7D34015) == 0x000008, "Member 'FHE_SubtitleSub::AttachtoTaggedActorSkipSelected_37_9BFE789D4F1D8626EBACA6B1C7D34015' has a wrong offset!");
static_assert(offsetof(FHE_SubtitleSub, ActorTag_42_E5B1EB5C4F918022B4B172B7C66EF8DA) == 0x00000C, "Member 'FHE_SubtitleSub::ActorTag_42_E5B1EB5C4F918022B4B172B7C66EF8DA' has a wrong offset!");
static_assert(offsetof(FHE_SubtitleSub, SoundAttenuation_45_CF61DBA34A0D2CF70CB600849E358855) == 0x000018, "Member 'FHE_SubtitleSub::SoundAttenuation_45_CF61DBA34A0D2CF70CB600849E358855' has a wrong offset!");

}

