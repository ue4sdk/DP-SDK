// DeadPoly (0.0.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_InventoryGrid_13_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InventoryGrid_13.BP_InventoryGrid_12_C.SetCustomSlots
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryGrid_12_C::SetCustomSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryGrid_13.BP_InventoryGrid_12_C.SetCustomSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_InventoryGrid_13.BP_InventoryGrid_12_C.ExecuteUbergraph_BP_InventoryGrid_13
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_InventoryGrid_12_C::ExecuteUbergraph_BP_InventoryGrid_13(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_InventoryGrid_13.BP_InventoryGrid_12_C.ExecuteUbergraph_BP_InventoryGrid_13"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif