#pragma once

// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SilencerAttach_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SilencerAttach.BP_SilencerAttach_C
// 0x000C (0x02F8 - 0x02EC)
class ABP_SilencerAttach_C : public ABP_MasterAttachment_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Silencer;                                                 // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SilencerAttach.BP_SilencerAttach_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif