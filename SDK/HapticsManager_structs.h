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

// Enum HapticsManager.EFeedbackMotors
enum class HapticsManager_EFeedbackMotors : uint8_t
{
	EFeedbackMotors__Head          = 0,
	EFeedbackMotors__Chest         = 1,
	EFeedbackMotors__LArm          = 2,
	EFeedbackMotors__RArm          = 3,
	EFeedbackMotors__LLeg          = 4,
	EFeedbackMotors__RLeg          = 5,
	EFeedbackMotors__EFeedbackMotors_MAX = 6,

};

// Enum HapticsManager.EFeedbackMode
enum class HapticsManager_EFeedbackMode : uint8_t
{
	EFeedbackMode__PATH_MODE       = 0,
	EFeedbackMode__DOT_MODE        = 1,
	EFeedbackMode__EFeedbackMode_MAX = 2,

};

// Enum HapticsManager.EPosition
enum class HapticsManager_EPosition : uint8_t
{
	EPosition__VestFront           = 0,
	EPosition__VestBack            = 1,
	EPosition__Head                = 2,
	EPosition__ForearmL            = 3,
	EPosition__ForearmR            = 4,
	EPosition__HandL               = 5,
	EPosition__HandR               = 6,
	EPosition__FootL               = 7,
	EPosition__FootR               = 8,
	EPosition__Left                = 9,
	EPosition__Right               = 10,
	EPosition__Default             = 11,
	EPosition__EPosition_MAX       = 12,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HapticsManager.Device
// 0x0050
struct FDevice
{
	struct FString                                     DeviceName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Address;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Position;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Battery;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3WWD[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ConnectionStatus;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPaired;                                                  // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXDN[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct HapticsManager.PathPoint
// 0x0010
struct FPathPoint
{
	float                                              X;                                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Intensity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MotorCount;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.RotationOption
// 0x0008
struct FRotationOption
{
	float                                              OffsetAngleX;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetY;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.ScaleOption
// 0x0008
struct FScaleOption
{
	float                                              Intensity;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.DotPoint
// 0x0008
struct FDotPoint
{
	int                                                Index;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Intensity;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.BodyHaptics
// 0x0020
struct FBodyHaptics
{
	class UFeedbackFile*                               HeadHaptics;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackFile*                               ChestHaptics;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackFile*                               LArmHaptics;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackFile*                               RArmHaptics;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.HitHaptics
// 0x0008 (0x0010 - 0x0008)
struct FHitHaptics : public FTableRowBase
{
	HapticsManager_EFeedbackMotors                     FeedbackMotors;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E24B[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct HapticsManager.RegisterRequest
// 0x0020
struct FRegisterRequest
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CTVJ[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct HapticsManager.HapticFrame
// 0x0038
struct FHapticFrame
{
	int                                                DurationMillis;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N03B[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Position;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPathPoint>                          PathPoints;                                                // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDotPoint>                           DotPoints;                                                 // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.SubmitRequest
// 0x00A8
struct FSubmitRequest
{
	struct FString                                     Type;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               Parameters;                                                // 0x0020(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FHapticFrame                                Frame;                                                     // 0x0070(0x0038) (NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.PlayerRequest
// 0x0020
struct FPlayerRequest
{
	TArray<struct FRegisterRequest>                    Register;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSubmitRequest>                      Submit;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HapticsManager.PlayerResponse
// 0x0048
struct FPlayerResponse
{
	unsigned char                                      UnknownData_X2QG[0x48];                                    // 0x0000(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct HapticsManager.HapticFeedback
// 0x0018
struct FHapticFeedback
{
	HapticsManager_EPosition                           Position;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HapticsManager_EFeedbackMode                       Mode;                                                      // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8LYS[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Values;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
