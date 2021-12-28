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
//		Offset -> 0x002FF940
//		Name   -> Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		SteamVRController_ESteamVRTouchDPadMapping         NewMapping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRControllerLibrary::STATIC_SetTouchDPadMapping(SteamVRController_ESteamVRTouchDPadMapping NewMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping");

	USteamVRControllerLibrary_SetTouchDPadMapping_Params params {};
	params.NewMapping = NewMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
