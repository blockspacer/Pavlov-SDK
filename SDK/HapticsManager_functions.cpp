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
//		Offset -> 0x00351770
//		Name   -> Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FDevice>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FDevice> UAndroidHapticLibrary::STATIC_GetCurrentDevices()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices");

	UAndroidHapticLibrary_GetCurrentDevices_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033BDF0
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_UnpairAll
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_UnpairAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_UnpairAll");

	UAndroidHapticLibrary_AndroidThunkCpp_UnpairAll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351100
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Unpair
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_Unpair(const struct FString& DeviceAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Unpair");

	UAndroidHapticLibrary_AndroidThunkCpp_Unpair_Params params {};
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351100
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_TogglePosition(const struct FString& DeviceAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition");

	UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Params params {};
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BDF0
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StopScanning
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_StopScanning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StopScanning");

	UAndroidHapticLibrary_AndroidThunkCpp_StopScanning_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BDF0
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StartScanning
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_StartScanning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StartScanning");

	UAndroidHapticLibrary_AndroidThunkCpp_StartScanning_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BDF0
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_PingAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll");

	UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351100
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_Ping(const struct FString& DeviceAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping");

	UAndroidHapticLibrary_AndroidThunkCpp_Ping_Params params {};
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00350F70
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PairFromPosition
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DevicePosition                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_PairFromPosition(const struct FString& DeviceAddress, const struct FString& DevicePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PairFromPosition");

	UAndroidHapticLibrary_AndroidThunkCpp_PairFromPosition_Params params {};
	params.DeviceAddress = DeviceAddress;
	params.DevicePosition = DevicePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351100
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Pair
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_Pair(const struct FString& DeviceAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Pair");

	UAndroidHapticLibrary_AndroidThunkCpp_Pair_Params params {};
	params.DeviceAddress = DeviceAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003510D0
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_IsScanning
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAndroidHapticLibrary::STATIC_AndroidThunkCpp_IsScanning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_IsScanning");

	UAndroidHapticLibrary_AndroidThunkCpp_IsScanning_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00350F70
//		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Position                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAndroidHapticLibrary::STATIC_AndroidThunkCpp_ChangePosition(const struct FString& DeviceAddress, const struct FString& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition");

	UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Params params {};
	params.DeviceAddress = DeviceAddress;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352BA0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_TurnOffRegisteredFeedbackFile(class UFeedbackFile* Feedback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile");

	UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Params params {};
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352B10
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_TurnOffRegisteredFeedback(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback");

	UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352AF0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UBhapticsRequestLibrary::STATIC_TurnOffAllFeedback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback");

	UBhapticsRequestLibrary_TurnOffAllFeedback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352AD0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UBhapticsRequestLibrary::STATIC_ToggleHapticFeedback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback");

	UBhapticsRequestLibrary_ToggleHapticFeedback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352940
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		HapticsManager_EPosition                           PositionEnum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FPathPoint>                          PathPoints                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                DurationInMilliSecs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_SubmitPath(const struct FString& Key, HapticsManager_EPosition PositionEnum, TArray<struct FPathPoint> PathPoints, int DurationInMilliSecs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitPath");

	UBhapticsRequestLibrary_SubmitPath_Params params {};
	params.Key = Key;
	params.PositionEnum = PositionEnum;
	params.PathPoints = PathPoints;
	params.DurationInMilliSecs = DurationInMilliSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003527F0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AltKey                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotationOption                             Option                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               UseAltKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_SubmitFeedbackWithTransform(class UFeedbackFile* Feedback, const struct FString& AltKey, const struct FRotationOption& Option, bool UseAltKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform");

	UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Params params {};
	params.Feedback = Feedback;
	params.AltKey = AltKey;
	params.Option = Option;
	params.UseAltKey = UseAltKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352660
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AltKey                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotationOption                             RotationOption                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScaleOption                                ScaleOption                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               UseAltKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_SubmitFeedbackWithIntensityDuration(class UFeedbackFile* Feedback, const struct FString& AltKey, const struct FRotationOption& RotationOption, const struct FScaleOption& ScaleOption, bool UseAltKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration");

	UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Params params {};
	params.Feedback = Feedback;
	params.AltKey = AltKey;
	params.RotationOption = RotationOption;
	params.ScaleOption = ScaleOption;
	params.UseAltKey = UseAltKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003525F0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_SubmitFeedback(class UFeedbackFile* Feedback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback");

	UBhapticsRequestLibrary_SubmitFeedback_Params params {};
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352460
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitDots
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		HapticsManager_EPosition                           PositionEnum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FDotPoint>                           DotPoints                                                  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                DurationInMilliSecs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_SubmitDots(const struct FString& Key, HapticsManager_EPosition PositionEnum, TArray<struct FDotPoint> DotPoints, int DurationInMilliSecs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitDots");

	UBhapticsRequestLibrary_SubmitDots_Params params {};
	params.Key = Key;
	params.PositionEnum = PositionEnum;
	params.DotPoints = DotPoints;
	params.DurationInMilliSecs = DurationInMilliSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003522F0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		HapticsManager_EPosition                           PositionEnum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              InputBytes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                DurationInMilliSecs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_SubmitBytes(const struct FString& Key, HapticsManager_EPosition PositionEnum, TArray<unsigned char> InputBytes, int DurationInMilliSecs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitBytes");

	UBhapticsRequestLibrary_SubmitBytes_Params params {};
	params.Key = Key;
	params.PositionEnum = PositionEnum;
	params.InputBytes = InputBytes;
	params.DurationInMilliSecs = DurationInMilliSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351E70
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_RegisterFeedbackFile(const struct FString& Key, class UFeedbackFile* Feedback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile");

	UBhapticsRequestLibrary_RegisterFeedbackFile_Params params {};
	params.Key = Key;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351D90
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.ProjectToVestPav
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     ContactLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotationOption                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FRotationOption UBhapticsRequestLibrary::STATIC_ProjectToVestPav(const struct FVector& ContactLocation, class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVestPav");

	UBhapticsRequestLibrary_ProjectToVestPav_Params params {};
	params.ContactLocation = ContactLocation;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351C50
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     ContactLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PlayerLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    PlayerRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FRotationOption                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FRotationOption UBhapticsRequestLibrary::STATIC_ProjectToVestLocation(const struct FVector& ContactLocation, const struct FVector& PlayerLocation, const struct FRotator& PlayerRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation");

	UBhapticsRequestLibrary_ProjectToVestLocation_Params params {};
	params.ContactLocation = ContactLocation;
	params.PlayerLocation = PlayerLocation;
	params.PlayerRotation = PlayerRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351B40
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.ProjectToVest
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     ContactLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         PlayerComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotationOption                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FRotationOption UBhapticsRequestLibrary::STATIC_ProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVest");

	UBhapticsRequestLibrary_ProjectToVest_Params params {};
	params.ContactLocation = ContactLocation;
	params.PlayerComponent = PlayerComponent;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351A80
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBhapticsRequestLibrary::STATIC_IsRegisteredPlaying(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying");

	UBhapticsRequestLibrary_IsRegisteredPlaying_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351A00
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBhapticsRequestLibrary::STATIC_IsRegisteredFilePlaying(class UFeedbackFile* Feedback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying");

	UBhapticsRequestLibrary_IsRegisteredFilePlaying_Params params {};
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351980
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		HapticsManager_EPosition                           Device                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBhapticsRequestLibrary::STATIC_IsDeviceConnected(HapticsManager_EPosition Device)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected");

	UBhapticsRequestLibrary_IsDeviceConnected_Params params {};
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351950
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBhapticsRequestLibrary::STATIC_IsAnythingPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying");

	UBhapticsRequestLibrary_IsAnythingPlaying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351750
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UBhapticsRequestLibrary::STATIC_EnableHapticFeedback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback");

	UBhapticsRequestLibrary_EnableHapticFeedback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351730
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UBhapticsRequestLibrary::STATIC_DisableHapticFeedback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback");

	UBhapticsRequestLibrary_DisableHapticFeedback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351580
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     ContactLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         PlayerComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     UpVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ForwardVector                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotationOption                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FRotationOption UBhapticsRequestLibrary::STATIC_CustomProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight, const struct FVector& UpVector, const struct FVector& ForwardVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest");

	UBhapticsRequestLibrary_CustomProjectToVest_Params params {};
	params.ContactLocation = ContactLocation;
	params.PlayerComponent = PlayerComponent;
	params.HalfHeight = HalfHeight;
	params.UpVector = UpVector;
	params.ForwardVector = ForwardVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00351510
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.CreateZombieHaptics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      HapticsData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_CreateZombieHaptics(class UClass* HapticsData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateZombieHaptics");

	UBhapticsRequestLibrary_CreateZombieHaptics_Params params {};
	params.HapticsData = HapticsData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003514A0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.CreateHeadshotHaptics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      HapticsData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_CreateHeadshotHaptics(class UClass* HapticsData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateHeadshotHaptics");

	UBhapticsRequestLibrary_CreateHeadshotHaptics_Params params {};
	params.HapticsData = HapticsData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351320
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.CreateHapticsFromHit
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UClass*                                      HapticsData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       HitBone                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_CreateHapticsFromHit(class UClass* HapticsData, const struct FVector& HitLocation, const struct FName& HitBone, float Intensity, class USkeletalMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateHapticsFromHit");

	UBhapticsRequestLibrary_CreateHapticsFromHit_Params params {};
	params.HapticsData = HapticsData;
	params.HitLocation = HitLocation;
	params.HitBone = HitBone;
	params.Intensity = Intensity;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003512B0
//		Name   -> Function HapticsManager.BhapticsRequestLibrary.CreateExplosionHaptics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      HapticsData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBhapticsRequestLibrary::STATIC_CreateExplosionHaptics(class UClass* HapticsData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CreateExplosionHaptics");

	UBhapticsRequestLibrary_CreateExplosionHaptics_Params params {};
	params.HapticsData = HapticsData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351B20
//		Name   -> Function HapticsManager.HapticDevice.Unpair
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UHapticDevice::Unpair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.Unpair");

	UHapticDevice_Unpair_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351B20
//		Name   -> Function HapticsManager.HapticDevice.TogglePosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UHapticDevice::TogglePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.TogglePosition");

	UHapticDevice_TogglePosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351F40
//		Name   -> Function HapticsManager.HapticDevice.SetDeviceData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FDevice                                     LinkedDevice                                               (Parm, NativeAccessSpecifierPublic)
void UHapticDevice::SetDeviceData(const struct FDevice& LinkedDevice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.SetDeviceData");

	UHapticDevice_SetDeviceData_Params params {};
	params.LinkedDevice = LinkedDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351B20
//		Name   -> Function HapticsManager.HapticDevice.Ping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UHapticDevice::Ping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.Ping");

	UHapticDevice_Ping_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00351B20
//		Name   -> Function HapticsManager.HapticDevice.Pair
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UHapticDevice::Pair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.Pair");

	UHapticDevice_Pair_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003511D0
//		Name   -> Function HapticsManager.HapticDevice.ChangePosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Position                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHapticDevice::ChangePosition(const struct FString& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.ChangePosition");

	UHapticDevice_ChangePosition_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352070
//		Name   -> Function HapticsManager.HapticsManagerActor.SetTactSuit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             SleeveLeft                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             SleeveRight                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             Head                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             VestFront                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             VestBack                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             GloveLeft                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             GloveRight                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             ShoeLeft                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             ShoeRight                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AHapticsManagerActor::SetTactSuit(class USceneComponent* SleeveLeft, class USceneComponent* SleeveRight, class USceneComponent* Head, class USceneComponent* VestFront, class USceneComponent* VestBack, class USceneComponent* GloveLeft, class USceneComponent* GloveRight, class USceneComponent* ShoeLeft, class USceneComponent* ShoeRight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticsManagerActor.SetTactSuit");

	AHapticsManagerActor_SetTactSuit_Params params {};
	params.SleeveLeft = SleeveLeft;
	params.SleeveRight = SleeveRight;
	params.Head = Head;
	params.VestFront = VestFront;
	params.VestBack = VestBack;
	params.GloveLeft = GloveLeft;
	params.GloveRight = GloveRight;
	params.ShoeLeft = ShoeLeft;
	params.ShoeRight = ShoeRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
