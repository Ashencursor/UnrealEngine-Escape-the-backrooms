#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HE_LookAtLocation

#include "Basic.hpp"

#include "HE_LookAtLocationSeq_structs.hpp"


namespace SDK
{

// UserDefinedStruct HE_LookAtLocation.HE_LookAtLocation
// 0x0018 (0x0018 - 0x0000)
struct FHE_LookAtLocation final
{
public:
	TArray<struct FHE_LookAtLocationSeq>          LookatLocationSequence_26_08279B704682B57A7B58B18AAEEB7C94; // 0x0000(0x0010)(Edit, BlueprintVisible)
	float                                         MinusDelayBeforeLookingSequenceSec_21_46B29F5047553D83F96803B9CEE30F22; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FHE_LookAtLocation) == 0x000008, "Wrong alignment on FHE_LookAtLocation");
static_assert(sizeof(FHE_LookAtLocation) == 0x000018, "Wrong size on FHE_LookAtLocation");
static_assert(offsetof(FHE_LookAtLocation, LookatLocationSequence_26_08279B704682B57A7B58B18AAEEB7C94) == 0x000000, "Member 'FHE_LookAtLocation::LookatLocationSequence_26_08279B704682B57A7B58B18AAEEB7C94' has a wrong offset!");
static_assert(offsetof(FHE_LookAtLocation, MinusDelayBeforeLookingSequenceSec_21_46B29F5047553D83F96803B9CEE30F22) == 0x000010, "Member 'FHE_LookAtLocation::MinusDelayBeforeLookingSequenceSec_21_46B29F5047553D83F96803B9CEE30F22' has a wrong offset!");

}

