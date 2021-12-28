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
//		Name   -> DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void USteamVRChaperoneComponent::SteamVRChaperoneEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature");

	USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002F8D80
//		Name   -> Function SteamVR.SteamVRChaperoneComponent.GetBounds
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> USteamVRChaperoneComponent::GetBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRChaperoneComponent.GetBounds");

	USteamVRChaperoneComponent_GetBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002F9070
//		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		SteamVR_ESteamVRTrackedDeviceType                  DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        OutTrackedDeviceIds                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USteamVRFunctionLibrary::STATIC_GetValidTrackedDeviceIds(SteamVR_ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds");

	USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params params {};
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTrackedDeviceIds != nullptr)
		*OutTrackedDeviceIds = params.OutTrackedDeviceIds;

}


// Function:
//		Offset -> 0x002F8F50
//		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamVRFunctionLibrary::STATIC_GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation");

	USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params params {};
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutOrientation != nullptr)
		*OutOrientation = params.OutOrientation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002F8E00
//		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		InputCore_EControllerHand                          hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamVRFunctionLibrary::STATIC_GetHandPositionAndOrientation(int ControllerIndex, InputCore_EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation");

	USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params params {};
	params.ControllerIndex = ControllerIndex;
	params.hand = hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutOrientation != nullptr)
		*OutOrientation = params.OutOrientation;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
