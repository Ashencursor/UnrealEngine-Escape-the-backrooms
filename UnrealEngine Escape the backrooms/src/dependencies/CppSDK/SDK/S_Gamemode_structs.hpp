#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Gamemode

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_Gamemode.S_Gamemode
// 0x0040 (0x0040 - 0x0000)
struct FS_Gamemode final
{
public:
	class FText                                   Name_10_C4374AD54D709EF9195964939510C060;          // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   Description_11_777504BA4C030034AAD238A0EC07E5FD;   // 0x0018(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             Image_7_3D9A252B4788A5793498838B3A9D8D61;          // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StartingMap_6_26633BA641C1367F9E4DAFA5089D1F15;    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_Gamemode) == 0x000008, "Wrong alignment on FS_Gamemode");
static_assert(sizeof(FS_Gamemode) == 0x000040, "Wrong size on FS_Gamemode");
static_assert(offsetof(FS_Gamemode, Name_10_C4374AD54D709EF9195964939510C060) == 0x000000, "Member 'FS_Gamemode::Name_10_C4374AD54D709EF9195964939510C060' has a wrong offset!");
static_assert(offsetof(FS_Gamemode, Description_11_777504BA4C030034AAD238A0EC07E5FD) == 0x000018, "Member 'FS_Gamemode::Description_11_777504BA4C030034AAD238A0EC07E5FD' has a wrong offset!");
static_assert(offsetof(FS_Gamemode, Image_7_3D9A252B4788A5793498838B3A9D8D61) == 0x000030, "Member 'FS_Gamemode::Image_7_3D9A252B4788A5793498838B3A9D8D61' has a wrong offset!");
static_assert(offsetof(FS_Gamemode, StartingMap_6_26633BA641C1367F9E4DAFA5089D1F15) == 0x000038, "Member 'FS_Gamemode::StartingMap_6_26633BA641C1367F9E4DAFA5089D1F15' has a wrong offset!");

}

