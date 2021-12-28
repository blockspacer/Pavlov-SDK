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
//		Name   -> Function UI_Hand.UI_Hand_C.SetScoreboard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Hand_C::SetScoreboard(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Hand.UI_Hand_C.SetScoreboard");

	UUI_Hand_C_SetScoreboard_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function UI_Hand.UI_Hand_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Hand_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Hand.UI_Hand_C.Construct");

	UUI_Hand_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function UI_Hand.UI_Hand_C.ExecuteUbergraph_UI_Hand
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Hand_C::ExecuteUbergraph_UI_Hand(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Hand.UI_Hand_C.ExecuteUbergraph_UI_Hand");

	UUI_Hand_C_ExecuteUbergraph_UI_Hand_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
