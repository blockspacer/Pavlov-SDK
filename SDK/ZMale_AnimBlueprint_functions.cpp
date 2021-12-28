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
//		Name   -> Function ZMale_AnimBlueprint.ZMale_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZMale_AnimBlueprint_AnimGraphNode_SequencePlayer_9E71223A406526519CD197B2B1CD65B6
//		Flags  -> (BlueprintEvent)
void UZMale_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ZMale_AnimBlueprint_AnimGraphNode_SequencePlayer_9E71223A406526519CD197B2B1CD65B6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ZMale_AnimBlueprint.ZMale_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ZMale_AnimBlueprint_AnimGraphNode_SequencePlayer_9E71223A406526519CD197B2B1CD65B6");

	UZMale_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ZMale_AnimBlueprint_AnimGraphNode_SequencePlayer_9E71223A406526519CD197B2B1CD65B6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function ZMale_AnimBlueprint.ZMale_AnimBlueprint_C.ExecuteUbergraph_ZMale_AnimBlueprint
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UZMale_AnimBlueprint_C::ExecuteUbergraph_ZMale_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ZMale_AnimBlueprint.ZMale_AnimBlueprint_C.ExecuteUbergraph_ZMale_AnimBlueprint");

	UZMale_AnimBlueprint_C_ExecuteUbergraph_ZMale_AnimBlueprint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
