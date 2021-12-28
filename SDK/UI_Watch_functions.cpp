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
//		Name   -> Function UI_Watch.UI_Watch_C.Get_Helmet_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UUI_Watch_C::Get_Helmet_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Watch.UI_Watch_C.Get_Helmet_ColorAndOpacity_1");

	UUI_Watch_C_Get_Helmet_ColorAndOpacity_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function UI_Watch.UI_Watch_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Watch_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Watch.UI_Watch_C.Tick");

	UUI_Watch_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function UI_Watch.UI_Watch_C.FlipUIForLefty
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Watch_C::FlipUIForLefty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Watch.UI_Watch_C.FlipUIForLefty");

	UUI_Watch_C_FlipUIForLefty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function UI_Watch.UI_Watch_C.ExecuteUbergraph_UI_Watch
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Watch_C::ExecuteUbergraph_UI_Watch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Watch.UI_Watch_C.ExecuteUbergraph_UI_Watch");

	UUI_Watch_C_ExecuteUbergraph_UI_Watch_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
