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

// Enum VRFramework.EVRControllerMode
enum class VRFramework_EVRControllerMode : uint8_t
{
	EVRControllerMode__Normal      = 0,
	EVRControllerMode__Teleport    = 1,
	EVRControllerMode__Menu        = 2,
	EVRControllerMode__EVRControllerMode_MAX = 3,

};

// Enum VRFramework.EVRQuadrantButton
enum class VRFramework_EVRQuadrantButton : uint8_t
{
	EVRQuadrantButton__Left        = 0,
	EVRQuadrantButton__Up          = 1,
	EVRQuadrantButton__Right       = 2,
	EVRQuadrantButton__Down        = 3,
	EVRQuadrantButton__EVRQuadrantButton_MAX = 4,

};

// Enum VRFramework.EVRGunChamberState
enum class VRFramework_EVRGunChamberState : uint8_t
{
	EVRGunChamberState__Empty      = 0,
	EVRGunChamberState__LiveRound  = 1,
	EVRGunChamberState__EmptyShell = 2,
	EVRGunChamberState__EVRGunChamberState_MAX = 3,

};

// Enum VRFramework.EVRHapticType
enum class VRFramework_EVRHapticType : uint8_t
{
	EVRHapticType__Button1         = 0,
	EVRHapticType__Button2         = 1,
	EVRHapticType__InteractBegin   = 2,
	EVRHapticType__InteractEnd     = 3,
	EVRHapticType__SlowPulse       = 4,
	EVRHapticType__Custom1         = 5,
	EVRHapticType__Custom2         = 6,
	EVRHapticType__Custom4         = 7,
	EVRHapticType__EVRHapticType_MAX = 8,

};

// Enum VRFramework.EVRGunFireMode
enum class VRFramework_EVRGunFireMode : uint8_t
{
	EVRGunFireMode__Semi           = 0,
	EVRGunFireMode__Automatic      = 1,
	EVRGunFireMode__Manual         = 2,
	EVRGunFireMode__Burst          = 3,
	EVRGunFireMode__EVRGunFireMode_MAX = 4,

};

// Enum VRFramework.EVRHandleHapticMode
enum class VRFramework_EVRHandleHapticMode : uint8_t
{
	EVRHandleHapticMode__LinearX   = 0,
	EVRHandleHapticMode__LinearY   = 1,
	EVRHandleHapticMode__LinearZ   = 2,
	EVRHandleHapticMode__Combined  = 3,
	EVRHandleHapticMode__EVRHandleHapticMode_MAX = 4,

};

// Enum VRFramework.EVRHandleRotationType
enum class VRFramework_EVRHandleRotationType : uint8_t
{
	EVRHandleRotationType__AroundAxisX = 0,
	EVRHandleRotationType__AroundAxisY = 1,
	EVRHandleRotationType__AroundAxisZ = 2,
	EVRHandleRotationType__EVRHandleRotationType_MAX = 3,

};

// Enum VRFramework.EVRQuickSlotType
enum class VRFramework_EVRQuickSlotType : uint8_t
{
	EVRQuickSlotType__Left         = 0,
	EVRQuickSlotType__Right        = 1,
	EVRQuickSlotType__Back         = 2,
	EVRQuickSlotType__Chest        = 3,
	EVRQuickSlotType__EVRQuickSlotType_MAX = 4,

};

// Enum VRFramework.EAmmoType
enum class VRFramework_EAmmoType : uint8_t
{
	EAmmoType__AmmoRifle           = 0,
	EAmmoType__AmmoSniper          = 1,
	EAmmoType__AmmoPistol          = 2,
	EAmmoType__AmmoShotgun         = 3,
	EAmmoType__AmmoSpecial         = 4,
	EAmmoType__AmmoSMG             = 5,
	EAmmoType__Other               = 6,
	EAmmoType__EAmmoType_MAX       = 7,

};

// Enum VRFramework.EVRGrabState
enum class VRFramework_EVRGrabState : uint8_t
{
	EVRGrabState__Empty            = 0,
	EVRGrabState__Grabbing         = 1,
	EVRGrabState__Grabbed          = 2,
	EVRGrabState__Disabled         = 3,
	EVRGrabState__Custom1          = 4,
	EVRGrabState__Custom2          = 5,
	EVRGrabState__Custom3          = 6,
	EVRGrabState__Custom4          = 7,
	EVRGrabState__EVRGrabState_MAX = 8,

};

// Enum VRFramework.EMagSlideMode
enum class VRFramework_EMagSlideMode : uint8_t
{
	EMagSlideMode__Insert          = 0,
	EMagSlideMode__RemoveGrab      = 1,
	EMagSlideMode__RemoveButton    = 2,
	EMagSlideMode__EMagSlideMode_MAX = 3,

};

// Enum VRFramework.EMagSlideAxis
enum class VRFramework_EMagSlideAxis : uint8_t
{
	EMagSlideAxis__X               = 0,
	EMagSlideAxis__Y               = 1,
	EMagSlideAxis__Z               = 2,
	EMagSlideAxis__EMagSlideAxis_MAX = 3,

};

// Enum VRFramework.EVRSmoothLocomotionMode
enum class VRFramework_EVRSmoothLocomotionMode : uint8_t
{
	EVRSmoothLocomotionMode__Head  = 0,
	EVRSmoothLocomotionMode__Dominant = 1,
	EVRSmoothLocomotionMode__Offhand = 2,
	EVRSmoothLocomotionMode__Pawn  = 3,
	EVRSmoothLocomotionMode__EVRSmoothLocomotionMode_MAX = 4,

};

// Enum VRFramework.EVRTeleportSpace
enum class VRFramework_EVRTeleportSpace : uint8_t
{
	EVRTeleportSpace__Head         = 0,
	EVRTeleportSpace__Floor        = 1,
	EVRTeleportSpace__EVRTeleportSpace_MAX = 2,

};

// Enum VRFramework.EVREmulatedPlayerRotation
enum class VRFramework_EVREmulatedPlayerRotation : uint8_t
{
	EVREmulatedPlayerRotation__None = 0,
	EVREmulatedPlayerRotation__Movement = 1,
	EVREmulatedPlayerRotation__Focus = 2,
	EVREmulatedPlayerRotation__EVREmulatedPlayerRotation_MAX = 3,

};

// Enum VRFramework.EVRPlatform
enum class VRFramework_EVRPlatform : uint8_t
{
	EVRPlatform__SteamVR_Vive      = 0,
	EVRPlatform__SteamVR_Oculus    = 1,
	EVRPlatform__SteamVR_Index     = 2,
	EVRPlatform__SteamVR_WMR       = 3,
	EVRPlatform__SteamVR_Focus3    = 4,
	EVRPlatform__Oculus            = 5,
	EVRPlatform__Oculus_Quest      = 6,
	EVRPlatform__EVRPlatform_MAX   = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VRFramework.VRBulletImpactEffect
// 0x0010
struct FVRBulletImpactEffect
{
	class UParticleSystem*                             Particle;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   Sound;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRItemState
// 0x0018
struct FVRItemState
{
	class AVRItem*                                     Parent;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ParentSlot;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6NKC[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVRItemController*                           Controller;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRGunStateProxy
// 0x0010
struct FVRGunStateProxy
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.LazyLoadedObjects
// 0x0010
struct FLazyLoadedObjects
{
	TArray<class UObject*>                             LazyLoaded;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRHandFingerJoint
// 0x0010
struct FVRHandFingerJoint
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KE5W[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct VRFramework.VRHandleSequenceSetup
// 0x0020
struct FVRHandleSequenceSetup
{
	class UAnimSequence*                               Sequence;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRInventoryFilter
// 0x0018
struct FVRInventoryFilter
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExclusive;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZXT[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              List;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRInventorySlot
// 0x0010
struct FVRInventorySlot
{
	unsigned char                                      Index;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9CE[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVRItem*                                     Pickup;                                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRItemControllerState
// 0x0050
struct FVRItemControllerState
{
	VRFramework_EVRGrabState                           State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TUSE[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlag;                                                     // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLH6[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct VRFramework.MagSlideInfo
// 0x0050
struct FMagSlideInfo
{
	bool                                               bMagSlideInsert;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PNY6[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlideStartSocket;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlideEndSocket;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EMagSlideAxis                          MagSlideAxis;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8UI[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReloadSpeedMultiplier;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlideGoalThreshold;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MagSlideBounds;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    MagGoalRotOffset;                                          // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSlidePositive;                                            // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4IP[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSlideDistance;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandExploitThreshold;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AVRGun*                                      Gun;                                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRSettings
// 0x0014
struct FVRSettings
{
	int                                                Scaling;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Detail;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AntiAlias;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Shading;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Effects;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.OnAsyncLoad
// 0x0010
struct FOnAsyncLoad
{
	struct FScriptDelegate                             OnAsyncLoadObject;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRBulletDamageEvent
// 0x0020 (0x00C8 - 0x00A8)
struct FVRBulletDamageEvent : public FPointDamageEvent
{
	bool                                               bClient;                                                   // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKLU[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Origin;                                                    // 0x00AC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpulsePower;                                              // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ND5E[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GunClass;                                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRFireBulletParams
// 0x0030
struct FVRFireBulletParams
{
	class UClass*                                      BulletClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GunClass;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F140[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 Instigator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRNetSnapshotLerpInterface
// 0x00E4
struct FVRNetSnapshotLerpInterface
{
	unsigned char                                      UnknownData_C2CZ[0xE4];                                    // 0x0000(0x00E4) MISSED OFFSET (PADDING)

};

// ScriptStruct VRFramework.VRCustomInventoryOffset
// 0x0040
struct FVRCustomInventoryOffset
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3EM[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Offset;                                                    // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VREmulatedPlayerPose
// 0x00A8 (0x00B0 - 0x0008)
struct FVREmulatedPlayerPose : public FTableRowBase
{
	unsigned char                                      UnknownData_N756[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LeftHand;                                                  // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  RightHand;                                                 // 0x0040(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Head;                                                      // 0x0070(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LerpSpeed;                                                 // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIGZ[0xC];                                     // 0x00A4(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct VRFramework.VRNetTransform
// 0x0018
struct FVRNetTransform
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct VRFramework.VRNetSnapshot
// 0x0068
struct FVRNetSnapshot
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Velocity;                                                  // 0x000C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              Heading;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             Flags;                                                     // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H133[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVRNetTransform                             HeadTX;                                                    // 0x0020(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVRNetTransform                             HandTXLeft;                                                // 0x0038(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVRNetTransform                             HandTXRight;                                               // 0x0050(0x0018) (NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
