#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Lootable_BodyF2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lootable_BodyF2.BP_Lootable_BodyF2_C
// 0x0000 (0x0308 - 0x0308)
class ABP_Lootable_BodyF2_C : public ABP_Lootable_BodyF1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Lootable_BodyF2.BP_Lootable_BodyF2_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif