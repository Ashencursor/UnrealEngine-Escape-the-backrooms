#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapEyeTracker

#include "Basic.hpp"


namespace SDK
{

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
// NumValues: 0x0004
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8
{
	None                                     = 0,
	Bad                                      = 1,
	Good                                     = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,
};

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
// NumValues: 0x0006
enum class EMagicLeapEyeTrackingStatus : uint8
{
	NotConnected                             = 0,
	Disabled                                 = 1,
	UserNotPresent                           = 2,
	UserPresent                              = 3,
	UserPresentAndWatchingWindow             = 4,
	EMagicLeapEyeTrackingStatus_MAX          = 5,
};

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
// 0x0002 (0x0002 - 0x0000)
struct FMagicLeapEyeBlinkState final
{
public:
	bool                                          LeftEyeBlinked;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RightEyeBlinked;                                   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapEyeBlinkState) == 0x000001, "Wrong alignment on FMagicLeapEyeBlinkState");
static_assert(sizeof(FMagicLeapEyeBlinkState) == 0x000002, "Wrong size on FMagicLeapEyeBlinkState");
static_assert(offsetof(FMagicLeapEyeBlinkState, LeftEyeBlinked) == 0x000000, "Member 'FMagicLeapEyeBlinkState::LeftEyeBlinked' has a wrong offset!");
static_assert(offsetof(FMagicLeapEyeBlinkState, RightEyeBlinked) == 0x000001, "Member 'FMagicLeapEyeBlinkState::RightEyeBlinked' has a wrong offset!");

}
