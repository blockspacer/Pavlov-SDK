#pragma once

// Name: Pavlov, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices
struct UAndroidHapticLibrary_GetCurrentDevices_Params
{
	TArray<struct FDevice>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_UnpairAll
struct UAndroidHapticLibrary_AndroidThunkCpp_UnpairAll_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Unpair
struct UAndroidHapticLibrary_AndroidThunkCpp_Unpair_Params
{
	struct FString                                     DeviceAddress;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition
struct UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Params
{
	struct FString                                     DeviceAddress;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StopScanning
struct UAndroidHapticLibrary_AndroidThunkCpp_StopScanning_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_StartScanning
struct UAndroidHapticLibrary_AndroidThunkCpp_StartScanning_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll
struct UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Params
{
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping
struct UAndroidHapticLibrary_AndroidThunkCpp_Ping_Params
{
	struct FString                                     DeviceAddress;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PairFromPosition
struct UAndroidHapticLibrary_AndroidThunkCpp_PairFromPosition_Params
{
	struct FString                                     DeviceAddress;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DevicePosition;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Pair
struct UAndroidHapticLibrary_AndroidThunkCpp_Pair_Params
{
	struct FString                                     DeviceAddress;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_IsScanning
struct UAndroidHapticLibrary_AndroidThunkCpp_IsScanning_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition
struct UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Params
{
	struct FString                                     DeviceAddress;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Position;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile
struct UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Params
{
	class UFeedbackFile*                               Feedback;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback
struct UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback
struct UBhapticsRequestLibrary_TurnOffAllFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback
struct UBhapticsRequestLibrary_ToggleHapticFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitPath
struct UBhapticsRequestLibrary_SubmitPath_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HapticsManager_EPosition                           PositionEnum;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPathPoint>                          PathPoints;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                DurationInMilliSecs;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform
struct UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Params
{
	class UFeedbackFile*                               Feedback;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AltKey;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotationOption                             Option;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               UseAltKey;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration
struct UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Params
{
	class UFeedbackFile*                               Feedback;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AltKey;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotationOption                             RotationOption;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScaleOption                                ScaleOption;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               UseAltKey;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback
struct UBhapticsRequestLibrary_SubmitFeedback_Params
{
	class UFeedbackFile*                               Feedback;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitDots
struct UBhapticsRequestLibrary_SubmitDots_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HapticsManager_EPosition                           PositionEnum;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDotPoint>                           DotPoints;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                DurationInMilliSecs;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.SubmitBytes
struct UBhapticsRequestLibrary_SubmitBytes_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HapticsManager_EPosition                           PositionEnum;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              InputBytes;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                DurationInMilliSecs;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile
struct UBhapticsRequestLibrary_RegisterFeedbackFile_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackFile*                               Feedback;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.ProjectToVestPav
struct UBhapticsRequestLibrary_ProjectToVestPav_Params
{
	struct FVector                                     ContactLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotationOption                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation
struct UBhapticsRequestLibrary_ProjectToVestLocation_Params
{
	struct FVector                                     ContactLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlayerLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PlayerRotation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotationOption                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.ProjectToVest
struct UBhapticsRequestLibrary_ProjectToVest_Params
{
	struct FVector                                     ContactLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlayerComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HalfHeight;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotationOption                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying
struct UBhapticsRequestLibrary_IsRegisteredPlaying_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying
struct UBhapticsRequestLibrary_IsRegisteredFilePlaying_Params
{
	class UFeedbackFile*                               Feedback;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected
struct UBhapticsRequestLibrary_IsDeviceConnected_Params
{
	HapticsManager_EPosition                           Device;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying
struct UBhapticsRequestLibrary_IsAnythingPlaying_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback
struct UBhapticsRequestLibrary_EnableHapticFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback
struct UBhapticsRequestLibrary_DisableHapticFeedback_Params
{
};

// Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest
struct UBhapticsRequestLibrary_CustomProjectToVest_Params
{
	struct FVector                                     ContactLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlayerComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HalfHeight;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     UpVector;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ForwardVector;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotationOption                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateZombieHaptics
struct UBhapticsRequestLibrary_CreateZombieHaptics_Params
{
	class UClass*                                      HapticsData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateHeadshotHaptics
struct UBhapticsRequestLibrary_CreateHeadshotHaptics_Params
{
	class UClass*                                      HapticsData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateHapticsFromHit
struct UBhapticsRequestLibrary_CreateHapticsFromHit_Params
{
	class UClass*                                      HapticsData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HitBone;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.BhapticsRequestLibrary.CreateExplosionHaptics
struct UBhapticsRequestLibrary_CreateExplosionHaptics_Params
{
	class UClass*                                      HapticsData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.HapticDevice.Unpair
struct UHapticDevice_Unpair_Params
{
};

// Function HapticsManager.HapticDevice.TogglePosition
struct UHapticDevice_TogglePosition_Params
{
};

// Function HapticsManager.HapticDevice.SetDeviceData
struct UHapticDevice_SetDeviceData_Params
{
	struct FDevice                                     LinkedDevice;                                              // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function HapticsManager.HapticDevice.Ping
struct UHapticDevice_Ping_Params
{
};

// Function HapticsManager.HapticDevice.Pair
struct UHapticDevice_Pair_Params
{
};

// Function HapticsManager.HapticDevice.ChangePosition
struct UHapticDevice_ChangePosition_Params
{
	struct FString                                     Position;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function HapticsManager.HapticsManagerActor.SetTactSuit
struct AHapticsManagerActor_SetTactSuit_Params
{
	class USceneComponent*                             SleeveLeft;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             SleeveRight;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             Head;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             VestFront;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             VestBack;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             GloveLeft;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             GloveRight;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             ShoeLeft;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             ShoeRight;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
