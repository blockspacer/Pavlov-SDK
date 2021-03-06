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
// Enums
//---------------------------------------------------------------------------

// Enum SteamVRInputDevice.ESkeletalSummaryDataType
enum class SteamVRInputDevice_ESkeletalSummaryDataType : uint8_t
{
	ESkeletalSummaryDataType__VR_SummaryType_FromAnimation = 0,
	ESkeletalSummaryDataType__VR_SummaryType_FromDevice = 1,
	ESkeletalSummaryDataType__VR_SummaryType_MAX = 2,

};

// Enum SteamVRInputDevice.ESteamVRInputStringBits
enum class SteamVRInputDevice_ESteamVRInputStringBits : uint8_t
{
	ESteamVRInputStringBits__VR_InputString_Hand = 0,
	ESteamVRInputStringBits__VR_InputString_ControllerType = 1,
	ESteamVRInputStringBits__VR_InputString_InputSource = 2,
	ESteamVRInputStringBits__VR_InputString_All = 3,
	ESteamVRInputStringBits__VR_InputString_MAX = 4,

};

// Enum SteamVRInputDevice.EControllerFidelity
enum class SteamVRInputDevice_EControllerFidelity : uint8_t
{
	EControllerFidelity__VR_ControllerFidelity_Estimated = 0,
	EControllerFidelity__VR_ControllerFidelity_Full = 1,
	EControllerFidelity__VR_ControllerFidelity_Partial = 2,
	EControllerFidelity__VR_ControllerFidelity_MAX = 3,

};

// Enum SteamVRInputDevice.EHandSkeleton
enum class SteamVRInputDevice_EHandSkeleton : uint8_t
{
	EHandSkeleton__VR_SteamVRHandSkeleton = 0,
	EHandSkeleton__VR_UE4HandSkeleton = 1,
	EHandSkeleton__VR_MAX          = 2,

};

// Enum SteamVRInputDevice.EHand
enum class SteamVRInputDevice_EHand : uint8_t
{
	EHand__VR_LeftHand             = 0,
	EHand__VR_RightHand            = 1,
	EHand__VR_MAX                  = 2,

};

// Enum SteamVRInputDevice.EMotionRange
enum class SteamVRInputDevice_EMotionRange : uint8_t
{
	EMotionRange__VR_WithoutController = 0,
	EMotionRange__VR_WithController = 1,
	EMotionRange__VR_MAX           = 2,

};

// Enum SteamVRInputDevice.ESteamVRHand
enum class SteamVRInputDevice_ESteamVRHand : uint8_t
{
	ESteamVRHand__VR_Left          = 0,
	ESteamVRHand__VR_Right         = 1,
	ESteamVRHand__VR_MAX           = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteamVRInputDevice.SteamVRAction
// 0x0028
struct FSteamVRAction
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9L3U[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct SteamVRInputDevice.SteamVRActionSet
// 0x0018
struct FSteamVRActionSet
{
	struct FString                                     Path;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R3WZ[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
// 0x0028
struct FSteamVRInputOriginInfo
{
	int                                                TrackedDeviceIndex;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WP5V[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RenderModelComponentName;                                  // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TrackedDeviceModel;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
// 0x0020
struct FSteamVRInputBindingInfo
{
	struct FName                                       DevicePathName;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InputPathName;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ModeName;                                                  // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
// 0x0014
struct FSteamVRFingerCurls
{
	float                                              Thumb;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Index;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Middle;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ring;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pinky;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
// 0x0010
struct FSteamVRFingerSplays
{
	float                                              Thumb_Index;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Index_Middle;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Middle_Ring;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ring_Pinky;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
// 0x0600
struct FSteamVRSkeletonTransform
{
	struct FTransform                                  Root;                                                      // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  wrist;                                                     // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_1;                                                   // 0x0060(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_2;                                                   // 0x0090(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_3;                                                   // 0x00C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Thumb_4;                                                   // 0x00F0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Index_1;                                                   // 0x0120(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Index_2;                                                   // 0x0150(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Index_3;                                                   // 0x0180(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Index_4;                                                   // 0x01B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Index_5;                                                   // 0x01E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_1;                                                  // 0x0210(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_2;                                                  // 0x0240(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_3;                                                  // 0x0270(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_4;                                                  // 0x02A0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Middle_5;                                                  // 0x02D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_1;                                                    // 0x0300(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_2;                                                    // 0x0330(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_3;                                                    // 0x0360(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_4;                                                    // 0x0390(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Ring_5;                                                    // 0x03C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_1;                                                   // 0x03F0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_2;                                                   // 0x0420(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_3;                                                   // 0x0450(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_4;                                                   // 0x0480(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Pinky_5;                                                   // 0x04B0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Thumb;                                                 // 0x04E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Index;                                                 // 0x0510(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Middle;                                                // 0x0540(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Ring;                                                  // 0x0570(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Aux_Pinky;                                                 // 0x05A0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Bone_Count;                                                // 0x05D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
// 0x0028
struct FUE4RetargettingRefs
{
	bool                                               bIsInitialized;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRightHanded;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WGW[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     KnuckleAverageMS_UE4;                                      // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WristSideDirectionLS_UE4;                                  // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WristForwardLS_UE4;                                        // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
// 0x0640 (0x0670 - 0x0030)
struct FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base
{
	SteamVRInputDevice_EMotionRange                    MotionRange;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamVRInputDevice_EHand                           hand;                                                      // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamVRInputDevice_EHandSkeleton                   HandSkeleton;                                              // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mirror;                                                    // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6XD7[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamVRSkeletonTransform                   SteamVRSkeletalTransform;                                  // 0x0040(0x0600) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FUE4RetargettingRefs                        UE4RetargettingRefs;                                       // 0x0640(0x0028) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJVL[0x8];                                     // 0x0668(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base
{
	struct FPoseLink                                   ReferencePose;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	SteamVRInputDevice_EHandSkeleton                   HandSkeleton;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EBG8[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPoseLink                                   TargetPose;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6BGP[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
