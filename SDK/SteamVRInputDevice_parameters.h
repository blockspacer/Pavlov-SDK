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

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
struct USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Params
{
	struct FSteamVRAction                              SteamVRAction;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FSteamVRActionSet                           SteamVRActionSet;                                          // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
struct USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Params
{
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
struct USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
struct USteamVRInputDeviceFunctionLibrary_SetPoseSource_Params
{
	bool                                               bUseSkeletonPose;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
struct USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Params
{
	bool                                               NewLeftHandState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NewRightHandState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
struct USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
struct USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Params
{
	SteamVRInputDevice_ESteamVRHand                    hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartSecondsFromNow;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationSeconds;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amplitude;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
struct USteamVRInputDeviceFunctionLibrary_GetUserIPD_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Params
{
	struct FSteamVRAction                              SteamVRAction;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FSteamVRInputOriginInfo                     InputOriginInfo;                                           // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Params
{
	struct FSteamVRAction                              SteamVRAction;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	TArray<SteamVRInputDevice_ESteamVRInputStringBits> LocalizedParts;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     OriginLocalizedName;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Params
{
	struct FSteamVRAction                              SteamVRActionHandle;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	TArray<struct FSteamVRInputBindingInfo>            ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	SteamVRInputDevice_ESteamVRHand                    hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PredictedSecondsFromNow;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Params
{
	TArray<struct FSteamVRActionSet>                   SteamVRActionSets;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
struct USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Params
{
	TArray<struct FSteamVRAction>                      SteamVRActions;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
struct USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Params
{
	struct FSteamVRSkeletonTransform                   LeftHand;                                                  // 0x0000(0x0600)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamVRSkeletonTransform                   RightHand;                                                 // 0x0000(0x0600)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWithController;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
struct USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Params
{
	bool                                               LeftHandState;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RightHandState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
struct USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
struct USteamVRInputDeviceFunctionLibrary_GetPoseSource_Params
{
	bool                                               bUsingSkeletonPose;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
struct USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
struct USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Params
{
	SteamVRInputDevice_EHand                           hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamVRFingerCurls                         FingerCurls;                                               // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamVRFingerSplays                        FingerSplays;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	SteamVRInputDevice_ESkeletalSummaryDataType        SummaryDataType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
struct USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Params
{
	bool                                               LeftHandState;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RightHandState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
struct USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Params
{
	SteamVRInputDevice_EControllerFidelity             LeftControllerFidelity;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamVRInputDevice_EControllerFidelity             RightControllerFidelity;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResult;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamVRInputOriginInfo                     InputOriginInfo;                                           // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FName                                       ActionSet;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActionSet;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamVRInputBindingInfo>            ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActionSet;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
struct USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResult;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamVRAction                              FoundAction;                                               // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FSteamVRActionSet                           FoundActionSet;                                            // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FName                                       ActionSet;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
struct USteamVRTrackingReferences_ShowTrackingReferences_Params
{
	class UStaticMesh*                                 TrackingReferenceMesh;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
struct USteamVRTrackingReferences_HideTrackingReferences_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
