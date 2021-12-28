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
//		Offset -> 0x002E4930
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FSteamVRAction                              SteamVRAction                                              (Parm, NativeAccessSpecifierPublic)
//		struct FSteamVRActionSet                           SteamVRActionSet                                           (Parm, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin");

	USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Params params {};
	params.SteamVRAction = SteamVRAction;
	params.SteamVRActionSet = SteamVRActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002E4910
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void USteamVRInputDeviceFunctionLibrary::STATIC_ShowAllSteamVR_ActionOrigins()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins");

	USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002E4890
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USteamVRInputDeviceFunctionLibrary::STATIC_SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow");

	USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E4810
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               bUseSkeletonPose                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_SetPoseSource(bool bUseSkeletonPose)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource");

	USteamVRInputDeviceFunctionLibrary_SetPoseSource_Params params {};
	params.bUseSkeletonPose = bUseSkeletonPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002E4740
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               NewLeftHandState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               NewRightHandState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState");

	USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Params params {};
	params.NewLeftHandState = NewLeftHandState;
	params.NewRightHandState = NewRightHandState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002E4710
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamVRInputDeviceFunctionLibrary::STATIC_ResetSeatedPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition");

	USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E4590
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		SteamVRInputDevice_ESteamVRHand                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartSecondsFromNow                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Amplitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_PlaySteamVR_HapticFeedback(SteamVRInputDevice_ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback");

	USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Params params {};
	params.hand = hand;
	params.StartSecondsFromNow = StartSecondsFromNow;
	params.DurationSeconds = DurationSeconds;
	params.Frequency = Frequency;
	params.Amplitude = Amplitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002E4540
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USteamVRInputDeviceFunctionLibrary::STATIC_GetUserIPD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD");

	USteamVRInputDeviceFunctionLibrary_GetUserIPD_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E43F0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamVRAction                              SteamVRAction                                              (Parm, NativeAccessSpecifierPublic)
//		struct FSteamVRInputOriginInfo                     InputOriginInfo                                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Params params {};
	params.SteamVRAction = SteamVRAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputOriginInfo != nullptr)
		*InputOriginInfo = params.InputOriginInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E4230
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamVRAction                              SteamVRAction                                              (Parm, NativeAccessSpecifierPublic)
//		TArray<SteamVRInputDevice_ESteamVRInputStringBits> LocalizedParts                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FString                                     OriginLocalizedName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, TArray<SteamVRInputDevice_ESteamVRInputStringBits> LocalizedParts, struct FString* OriginLocalizedName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Params params {};
	params.SteamVRAction = SteamVRAction;
	params.LocalizedParts = LocalizedParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OriginLocalizedName != nullptr)
		*OriginLocalizedName = params.OriginLocalizedName;

}


// Function:
//		Offset -> 0x002E4120
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FSteamVRAction                              SteamVRActionHandle                                        (Parm, NativeAccessSpecifierPublic)
//		TArray<struct FSteamVRInputBindingInfo>            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Params params {};
	params.SteamVRActionHandle = SteamVRActionHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E3FB0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		SteamVRInputDevice_ESteamVRHand                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PredictedSecondsFromNow                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_HandPoseRelativeToNow(struct FVector* Position, struct FRotator* Orientation, SteamVRInputDevice_ESteamVRHand hand, float PredictedSecondsFromNow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Params params {};
	params.hand = hand;
	params.PredictedSecondsFromNow = PredictedSecondsFromNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E3F80
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_GlobalPredictedSecondsFromNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E3EC0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamVRActionSet>                   SteamVRActionSets                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamVRActionSets != nullptr)
		*SteamVRActionSets = params.SteamVRActionSets;

}


// Function:
//		Offset -> 0x002E3E00
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamVRAction>                      SteamVRActions                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray");

	USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SteamVRActions != nullptr)
		*SteamVRActions = params.SteamVRActions;

}


// Function:
//		Offset -> 0x002E3C90
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamVRSkeletonTransform                   LeftHand                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamVRSkeletonTransform                   RightHand                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bWithController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetSkeletalTransform(struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand, bool bWithController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform");

	USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Params params {};
	params.bWithController = bWithController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeftHand != nullptr)
		*LeftHand = params.LeftHand;
	if (RightHand != nullptr)
		*RightHand = params.RightHand;

}


// Function:
//		Offset -> 0x002E3BB0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               LeftHandState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               RightHandState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetSkeletalState(bool* LeftHandState, bool* RightHandState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState");

	USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeftHandState != nullptr)
		*LeftHandState = params.LeftHandState;
	if (RightHandState != nullptr)
		*RightHandState = params.RightHandState;

}


// Function:
//		Offset -> 0x002E3A30
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetRightHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData");

	USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;

}


// Function:
//		Offset -> 0x002E39B0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               bUsingSkeletonPose                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetPoseSource(bool* bUsingSkeletonPose)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource");

	USteamVRInputDeviceFunctionLibrary_GetPoseSource_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bUsingSkeletonPose != nullptr)
		*bUsingSkeletonPose = params.bUsingSkeletonPose;

}


// Function:
//		Offset -> 0x002E3830
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetLeftHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData");

	USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;

}


// Function:
//		Offset -> 0x002E36B0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		SteamVRInputDevice_EHand                           hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSteamVRFingerCurls                         FingerCurls                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamVRFingerSplays                        FingerSplays                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		SteamVRInputDevice_ESkeletalSummaryDataType        SummaryDataType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetFingerCurlsAndSplays(SteamVRInputDevice_EHand hand, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays, SteamVRInputDevice_ESkeletalSummaryDataType SummaryDataType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays");

	USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Params params {};
	params.hand = hand;
	params.SummaryDataType = SummaryDataType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FingerCurls != nullptr)
		*FingerCurls = params.FingerCurls;
	if (FingerSplays != nullptr)
		*FingerSplays = params.FingerSplays;

}


// Function:
//		Offset -> 0x002E35D0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               LeftHandState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               RightHandState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState");

	USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeftHandState != nullptr)
		*LeftHandState = params.LeftHandState;
	if (RightHandState != nullptr)
		*RightHandState = params.RightHandState;

}


// Function:
//		Offset -> 0x002E34F0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		SteamVRInputDevice_EControllerFidelity             LeftControllerFidelity                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SteamVRInputDevice_EControllerFidelity             RightControllerFidelity                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_GetControllerFidelity(SteamVRInputDevice_EControllerFidelity* LeftControllerFidelity, SteamVRInputDevice_EControllerFidelity* RightControllerFidelity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity");

	USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeftControllerFidelity != nullptr)
		*LeftControllerFidelity = params.LeftControllerFidelity;
	if (RightControllerFidelity != nullptr)
		*RightControllerFidelity = params.RightControllerFidelity;

}


// Function:
//		Offset -> 0x002E3360
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSteamVRInputOriginInfo                     InputOriginInfo                                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		struct FName                                       ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_OriginTrackedDeviceInfo(const struct FName& ActionName, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo, const struct FName& ActionSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Params params {};
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (InputOriginInfo != nullptr)
		*InputOriginInfo = params.InputOriginInfo;

}


// Function:
//		Offset -> 0x002E3260
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FSteamVRInputBindingInfo>            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_InputBindingInfo(const struct FName& ActionName, const struct FName& ActionSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Params params {};
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E31A0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_ActionOrigin(const struct FName& ActionName, const struct FName& ActionSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Params params {};
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E2FC0
//		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSteamVRAction                              FoundAction                                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		struct FSteamVRActionSet                           FoundActionSet                                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		struct FName                                       ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamVRInputDeviceFunctionLibrary::STATIC_FindSteamVR_Action(const struct FName& ActionName, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet, const struct FName& ActionSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action");

	USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Params params {};
	params.ActionName = ActionName;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (FoundAction != nullptr)
		*FoundAction = params.FoundAction;
	if (FoundActionSet != nullptr)
		*FoundActionSet = params.FoundActionSet;

}


// Function:
//		Offset -> 0x002E4A50
//		Name   -> Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UStaticMesh*                                 TrackingReferenceMesh                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamVRTrackingReferences::ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences");

	USteamVRTrackingReferences_ShowTrackingReferences_Params params {};
	params.TrackingReferenceMesh = TrackingReferenceMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002E4570
//		Name   -> Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USteamVRTrackingReferences::HideTrackingReferences()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences");

	USteamVRTrackingReferences_HideTrackingReferences_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
