#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FoliageToSpawn_Struct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FoliageToSpawn_Struct.FoliageToSpawn_Struct
// 0x0010 (0x0010 - 0x0000)
struct FFoliageToSpawn_Struct final
{
public:
	class UStaticMesh*                            Mesh_2_4B85E981464F940A424618BC4CCAE1F3;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Component_7_FAE6A52C44B14E4E7DDCD7A18BC43E30;      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFoliageToSpawn_Struct) == 0x000008, "Wrong alignment on FFoliageToSpawn_Struct");
static_assert(sizeof(FFoliageToSpawn_Struct) == 0x000010, "Wrong size on FFoliageToSpawn_Struct");
static_assert(offsetof(FFoliageToSpawn_Struct, Mesh_2_4B85E981464F940A424618BC4CCAE1F3) == 0x000000, "Member 'FFoliageToSpawn_Struct::Mesh_2_4B85E981464F940A424618BC4CCAE1F3' has a wrong offset!");
static_assert(offsetof(FFoliageToSpawn_Struct, Component_7_FAE6A52C44B14E4E7DDCD7A18BC43E30) == 0x000008, "Member 'FFoliageToSpawn_Struct::Component_7_FAE6A52C44B14E4E7DDCD7A18BC43E30' has a wrong offset!");

}
