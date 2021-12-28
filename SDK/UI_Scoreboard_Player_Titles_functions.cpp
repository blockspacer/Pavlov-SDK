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
//		Name   -> Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UUI_Scoreboard_Player_Titles_C::GetColorAndOpacity_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_2");

	UUI_Scoreboard_Player_Titles_C_GetColorAndOpacity_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UUI_Scoreboard_Player_Titles_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_1");

	UUI_Scoreboard_Player_Titles_C_GetColorAndOpacity_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
