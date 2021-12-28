// Name: Pavlov, Version: 1.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_BloodPuddle.BP_BloodPuddle_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BloodPuddle_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodPuddle.BP_BloodPuddle_C.UserConstructionScript");

	ABP_BloodPuddle_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_BloodPuddle.BP_BloodPuddle_C.OnPour
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTransform                                  Transform                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_BloodPuddle_C::OnPour(const struct FTransform& Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodPuddle.BP_BloodPuddle_C.OnPour");

	ABP_BloodPuddle_C_OnPour_Params params {};
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_BloodPuddle.BP_BloodPuddle_C.ExecuteUbergraph_BP_BloodPuddle
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BloodPuddle_C::ExecuteUbergraph_BP_BloodPuddle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodPuddle.BP_BloodPuddle_C.ExecuteUbergraph_BP_BloodPuddle");

	ABP_BloodPuddle_C_ExecuteUbergraph_BP_BloodPuddle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
