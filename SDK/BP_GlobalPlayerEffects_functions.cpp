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
//		Name   -> Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GlobalPlayerEffects_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.UserConstructionScript");

	ABP_GlobalPlayerEffects_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_GlobalPlayerEffects_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ReceiveBeginPlay");

	ABP_GlobalPlayerEffects_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ExecuteUbergraph_BP_GlobalPlayerEffects
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GlobalPlayerEffects_C::ExecuteUbergraph_BP_GlobalPlayerEffects(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C.ExecuteUbergraph_BP_GlobalPlayerEffects");

	ABP_GlobalPlayerEffects_C_ExecuteUbergraph_BP_GlobalPlayerEffects_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
