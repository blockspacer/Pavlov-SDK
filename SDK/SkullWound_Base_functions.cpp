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
//		Name   -> Function SkullWound_Base.SkullWound_Base_C.GetAttachSocket
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName ASkullWound_Base_C::GetAttachSocket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.GetAttachSocket");

	ASkullWound_Base_C_GetAttachSocket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function SkullWound_Base.SkullWound_Base_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ASkullWound_Base_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.UserConstructionScript");

	ASkullWound_Base_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function SkullWound_Base.SkullWound_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASkullWound_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.ReceiveBeginPlay");

	ASkullWound_Base_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function SkullWound_Base.SkullWound_Base_C.ExecuteUbergraph_SkullWound_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkullWound_Base_C::ExecuteUbergraph_SkullWound_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.ExecuteUbergraph_SkullWound_Base");

	ASkullWound_Base_C_ExecuteUbergraph_SkullWound_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
