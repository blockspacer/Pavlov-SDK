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
// Classes
//---------------------------------------------------------------------------

// Class Pavlov.ActionGunState
// 0x0038 (FullSize[0x01A0] - InheritedSize[0x0168])
class UActionGunState : public UVRGunState
{
public:
	float                                              Action;                                                    // 0x0168(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6RKR[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnActionChanged;                                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpenAction;                                              // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCloseAction;                                             // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ActionGunState");
		return ptr;
	}



	void SetAction(float NewValue);
	void OpenAction();
	void CloseAction();
};

// Class Pavlov.AirdropPlane
// 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
class AAirdropPlane : public AActor
{
public:
	float                                              DropRadius;                                                // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropHeightOffset;                                          // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlaneFlightTime;                                           // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAirdropDetails                             AirdropDetails;                                            // 0x0334(0x001C) (BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              CurrentTravelTime;                                         // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_28WK[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AirdropPlane");
		return ptr;
	}



	float GeneratePath(const struct FVector& DropLocation);
};

// Class Pavlov.AirplaneRoyale
// 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
class AAirplaneRoyale : public AActor
{
public:
	unsigned char                                      UnknownData_1GN6[0x4];                                     // 0x0328(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SpawnLocation;                                             // 0x032C(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Traveled;                                                  // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraveling;                                                // 0x033C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FXUQ[0x3];                                     // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TravelSpeed;                                               // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JFZX[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AirplaneRoyale");
		return ptr;
	}



	void StartTravel();
	void SetAsBase(class APavlovPawn* Pawn);
	void OnRep_Traveled();
	void ClearBase(class APavlovPawn* Pawn);
};

// Class Pavlov.AmmoBox
// 0x0030 (FullSize[0x0500] - InheritedSize[0x04D0])
class AAmmoBox : public AVRItem
{
public:
	unsigned char                                      UnknownData_WRD8[0x8];                                     // 0x04D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AmmoCount;                                                 // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmoCount;                                              // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchaseAmmoCount;                                         // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZLK[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x04F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LQEY[0xF];                                     // 0x04F1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AmmoBox");
		return ptr;
	}



	void SetAmmoCount(int NewAmmoCount);
	bool RemoveAmmo(int RemoveAmount);
	void OnRep_AmmoCount();
	void OnAmmoCountChanged();
	VRFramework_EAmmoType GetAmmoType();
	void AddAmmo(int AddAmount);
};

// Class Pavlov.AmmoPouchComponent
// 0x0028 (FullSize[0x0610] - InheritedSize[0x05E8])
class UAmmoPouchComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_4UU1[0x8];                                     // 0x05E8(0x0008) Fix Super Size
	class UHapticFeedbackEffect_Base*                  GrabHaptic;                                                // 0x05F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GrabSound;                                                 // 0x05F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHapticFeedbackEffect_Base*                  LastMagazineHaptic;                                        // 0x0600(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHapticFeedbackEffect_Base*                  EmptyGrabHaptic;                                           // 0x0608(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AmmoPouchComponent");
		return ptr;
	}



};

// Class Pavlov.Attachment
// 0x0058 (FullSize[0x0528] - InheritedSize[0x04D0])
class AAttachment : public AVRItem
{
public:
	bool                                               bGunTickActive;                                            // 0x04D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedsGunTick;                                             // 0x04D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalGunTickOnly;                                         // 0x04D2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_05V6[0x1];                                     // 0x04D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AttachOffset;                                              // 0x04D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Compatibility;                                             // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1IYP[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   AttachSound;                                               // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DettachSound;                                              // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EnterSlideModeSound;                                       // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AttachmentSlot;                                            // 0x0500(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttaching;                                                // 0x0501(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSlide;                                                 // 0x0502(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ABCU[0x1];                                     // 0x0503(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RailSpacer;                                                // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGun*                                        SlideGun;                                                  // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlideHaptics;                                              // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CYPI[0x4];                                     // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   SlideSound;                                                // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlideHapticsLimit;                                         // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttachDistance;                                            // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Attachment");
		return ptr;
	}



	bool TryAttach(unsigned char SlideModeSlot, bool* bPlayFailureSound, bool bSliding);
	void SetSelectionEnable(bool bEnabled);
	void OnSlideModeChanged(bool bSlideMode);
	void OnGunTickChanged(bool bEnabled);
	void OnAttachmentModeChanged(bool bEnabled);
	unsigned char MakeSlideModeSlot(class AGun* Gun);
	void GunTick(float DeltaTime);
	bool GetSlideTransform(struct FTransform* SlideTransform);
	bool GetSlideModeSlot(unsigned char* SlideModeSlot);
	struct FVector GetGrabLoc();
	void ClearSlideGun();
	bool CanAttach(class AGun* Gun, bool bForceAttach);
	void AttachToGunServer(class AGun* Gun, unsigned char SlideModeSlot);
	bool AttachToGun(class AGun* Gun, bool bForceAttach);
};

// Class Pavlov.AttachmentAccessory
// 0x0038 (FullSize[0x0560] - InheritedSize[0x0528])
class AAttachmentAccessory : public AAttachment
{
public:
	unsigned char                                      UnknownData_FBYO[0x4];                                     // 0x0528(0x0004) Fix Super Size
	float                                              MinToggleTime;                                             // 0x052C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  ToggleAttachmentSound;                                     // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  PowerUpSound;                                              // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  PowerDownSound;                                            // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastToggleTime;                                            // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalPlayer;                                              // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPredicting;                                               // 0x054D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6RH6[0x2];                                     // 0x054E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Drop_Handle;                                               // 0x0550(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGun*                                        LastGun;                                                   // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory");
		return ptr;
	}



	void SetAccessoryActive_Server(bool bActive);
	void SetAccessoryActive(bool bActive);
	void OnRep_AccessoryOn();
	void OnAccessoryStateChanged(bool bActive);
	bool IsAccessoryOn();
	void CheckDropped();
};

// Class Pavlov.AttachmentAccessory_Bayonet
// 0x0070 (FullSize[0x05D0] - InheritedSize[0x0560])
class AAttachmentAccessory_Bayonet : public AAttachmentAccessory
{
public:
	class USkeletalMeshComponent*                      BayonetMesh;                                               // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BayonetVelocity;                                           // 0x0568(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OVC9[0x4];                                     // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       StabStartSocket;                                           // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StabEndSocket;                                             // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  SlashSoundFX;                                              // 0x0588(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  StabSoundFX;                                               // 0x0590(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  SwingSoundFX;                                              // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingSoundFrequency;                                       // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SwingSoundVelocity;                                        // 0x05A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoubleSidedBayonet;                                       // 0x05AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotatedOnGun;                                             // 0x05AD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZ2G[0x2];                                     // 0x05AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastLocation;                                              // 0x05B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastDmgTime;                                               // 0x05BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBloody;                                                   // 0x05C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IUTX[0x3];                                     // 0x05C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastSwingSound;                                            // 0x05C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PreviousForcedLodModel;                                    // 0x05C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LORM[0x4];                                     // 0x05CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory_Bayonet");
		return ptr;
	}



	void StabPlayerMulti(bool bSlashed);
	void StabPlayer(const struct FBayonetDamage& BayonetDamage);
	void OnSwitchToBlood();
};

// Class Pavlov.AttachmentAccessory_Flashlight
// 0x0060 (FullSize[0x05C0] - InheritedSize[0x0560])
class AAttachmentAccessory_Flashlight : public AAttachmentAccessory
{
public:
	class UStaticMeshComponent*                        FlashlightMesh;                                            // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        FlashlightBeam;                                            // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        FlashlightSource;                                          // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        FlashlightCookie;                                          // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0580(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    FlashlightBeamMaterial;                                    // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    FlashlightCookieMaterial;                                  // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BeamLengthMultiplier;                                      // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x05A4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Brightness;                                                // 0x05B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpotlightPowerMultiplier;                                  // 0x05B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CookiePowerWhenLit;                                        // 0x05BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory_Flashlight");
		return ptr;
	}



};

// Class Pavlov.AttachmentAccessory_Laser
// 0x0060 (FullSize[0x05C0] - InheritedSize[0x0560])
class AAttachmentAccessory_Laser : public AAttachmentAccessory
{
public:
	class UStaticMeshComponent*                        LaserMesh;                                                 // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        LaserSourceMesh;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        LaserTargetMesh;                                           // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        LaserBeamMesh;                                             // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Brightness;                                                // 0x0584(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0588(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DustPower;                                                 // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoisePower;                                                // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverExposure;                                              // 0x05A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverExposureWhitepoint;                                    // 0x05A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XFZR[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    LaserBeamMaterial;                                         // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9JH[0x8];                                     // 0x05B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentAccessory_Laser");
		return ptr;
	}



};

// Class Pavlov.AttachmentCanted
// 0x0008 (FullSize[0x0530] - InheritedSize[0x0528])
class AAttachmentCanted : public AAttachment
{
public:
	unsigned char                                      UnknownData_KLC3[0x8];                                     // 0x0528(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentCanted");
		return ptr;
	}



	void OnFlipCantedSight(bool bRightHanded);
};

// Class Pavlov.AttachmentGrip
// 0x0048 (FullSize[0x0570] - InheritedSize[0x0528])
class AAttachmentGrip : public AAttachment
{
public:
	unsigned char                                      UnknownData_PEXO[0x8];                                     // 0x0528(0x0008) Fix Super Size
	unsigned char                                      UnknownData_HRE5[0x30];                                    // 0x0530(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VerticalRecoilMul;                                         // 0x0560(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideToSideRecoilMul;                                       // 0x0564(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               GripSequence;                                              // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentGrip");
		return ptr;
	}



};

// Class Pavlov.AttachmentSight
// 0x0088 (FullSize[0x05B0] - InheritedSize[0x0528])
class AAttachmentSight : public AAttachment
{
public:
	class USceneCaptureComponent2D*                    SceneCapture;                                              // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    ZeroMaterial;                                              // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UShowOnlyComponent*                          ShowOnlyComp;                                              // 0x0538(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGlobalPlayerEffects*                        GlobalEffects;                                             // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCaptureScene;                                             // 0x0548(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideGunOnCapture;                                         // 0x0549(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideSelfOnCapture;                                        // 0x054A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXH8[0x5];                                     // 0x054B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      CaptureTexture;                                            // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CaptureOffset;                                             // 0x0558(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LenseOffset;                                               // 0x0564(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActivateDist;                                              // 0x0570(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActivateDistLine;                                          // 0x0574(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseFOV;                                                   // 0x0578(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MulFOV;                                                    // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DivFOV;                                                    // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScopeFOV;                                                  // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bZeroMaterial;                                             // 0x0588(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YB6O[0x7];                                     // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ZeroParamName;                                             // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ZeroingTable;                                              // 0x0598(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FlashCurve;                                                // 0x05A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LCKS[0x8];                                     // 0x05A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentSight");
		return ptr;
	}



	void UpdateScopeHiddenActors();
	void SetScopeActive(bool bActive);
	void OnScopeExploit(bool bExploit);
	class UMeshComponent* GetLenseMesh(int* MaterialIndex);
	float DebugFOVAngle();
	void ApplyZeroing(float Delta);
};

// Class Pavlov.AttachmentSuppressor
// 0x0008 (FullSize[0x0530] - InheritedSize[0x0528])
class AAttachmentSuppressor : public AAttachment
{
public:
	unsigned char                                      UnknownData_QD6P[0x8];                                     // 0x0528(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachmentSuppressor");
		return ptr;
	}



};

// Class Pavlov.AttachProxy
// 0x0068 (FullSize[0x0390] - InheritedSize[0x0328])
class AAttachProxy : public AActor
{
public:
	unsigned char                                      UnknownData_LM7N[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAttachProxyInfo                            AttachInfo;                                                // 0x0330(0x0050) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      SpawnItemClass;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunOwnerAttach;                                           // 0x0388(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6NY1[0x7];                                     // 0x0389(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AttachProxy");
		return ptr;
	}



	bool SetupOwnerAttachment(const struct FAttachProxyInfo& NewAttachInfo);
	void SetAttachInfo(const struct FAttachProxyInfo& NewAttachInfo);
	void OwnerKilled(class AActor* Killed);
	void OnRep_AttachInfo();
	void OnParentDestroyed(class AActor* DestroyedActor);
};

// Class Pavlov.AvatarSkin
// 0x0080 (FullSize[0x0170] - InheritedSize[0x00F0])
class UAvatarSkin : public UActorComponent
{
public:
	TArray<class UActorComponent*>                     UsedComponents;                                            // 0x00F0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UWoundComponent*                             WoundComponent;                                            // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZX5T[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               BaseMesh;                                                  // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               HandMesh;                                                  // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 InventoryVestLight;                                        // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 InventoryVestHeavy;                                        // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FlyingHelmetClass;                                         // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PelvisZOffset;                                             // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMHT[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               EyeLidSequence;                                            // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WoundClass;                                                // 0x0148(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkullSocket;                                               // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PipeOffset;                                                // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsWW2Skin;                                                // 0x015C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKMS[0x3];                                     // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMeshComponent*>                      MeshComponents;                                            // 0x0160(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AvatarSkin");
		return ptr;
	}



	void Update();
	void SetStencilValue(unsigned char Value);
	void SetRenderToCustomDepth(bool bEnabled);
	void RemoveUsedComponent(class UActorComponent* Component);
	void OptimizeAvatar(class USkeletalMeshComponent* PawnAvatar);
	class APavlovPawn* GetPawn();
	class USkeletalMeshComponent* GetBaseMeshComponent();
	class USkeletalMeshComponent* CreateChildSkeletalMeshComponent(class USkeletalMesh* SkeletalMesh);
	void AddUsedComponent(class UActorComponent* Component);
};

// Class Pavlov.AvatarSkinCustom
// 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
class UAvatarSkinCustom : public UAvatarSkin
{
public:
	class USkeletalMeshComponent*                      CustomMesh;                                                // 0x0170(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               BarehandMesh;                                              // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               NATOHandMesh;                                              // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               RussianHandMesh;                                           // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AvatarSkinCustom");
		return ptr;
	}



	void SetCustomMesh(const struct FName& MeshName, class USkeletalMesh* CustomHandMesh);
};

// Class Pavlov.AzureGameMode
// 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
class AAzureGameMode : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AzureGameMode");
		return ptr;
	}



	void Travel();
};

// Class Pavlov.AzureGameState
// 0x0000 (FullSize[0x0388] - InheritedSize[0x0388])
class AAzureGameState : public AGameState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AzureGameState");
		return ptr;
	}



};

// Class Pavlov.AzureServer
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UAzureServer : public UObject
{
public:
	unsigned char                                      UnknownData_WAH1[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NoPlayersTimer;                                            // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EndGraceTimer;                                             // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BP7X[0x30];                                    // 0x0040(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bReady;                                                    // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchOver;                                                // 0x0071(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J14P[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionId;                                                 // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPV4Address;                                               // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionCookie;                                             // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TravelURL;                                                 // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxWaitTime;                                               // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TickRate;                                                  // 0x00DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBackfillEnabled;                                          // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAccurateBackfill;                                      // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchmakingServer;                                        // 0x00E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ARKV[0x5];                                     // 0x00E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnReady;                                                   // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.AzureServer");
		return ptr;
	}



	void SoftTick();
};

// Class Pavlov.PavlovGameMode
// 0x0328 (FullSize[0x0738] - InheritedSize[0x0410])
class APavlovGameMode : public AGameMode
{
public:
	TArray<class AAIController*>                       Bots;                                                      // 0x0410(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WDVS[0x18];                                    // 0x0420(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIPersonality>                      BotPersonalities;                                          // 0x0438(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              DynTeam0SpawnTimer;                                        // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DynTeam1SpawnTimer;                                        // 0x044C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerSpawnPoint*                           DynSpawnPoint0;                                            // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerSpawnPoint*                           DynSpawnPoint1;                                            // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HZ3J[0x30];                                    // 0x0460(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SwitchMapId;                                               // 0x0490(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     SwitchGameMode;                                            // 0x04A0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A8C5[0x50];                                    // 0x04B0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RoundTimer;                                                // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DYON[0xC];                                     // 0x0504(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVoiceManager*                               VoiceManager;                                              // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NameCounter;                                               // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSwapSpawns;                                               // 0x051C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillWithBots;                                             // 0x051D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoTeams;                                                  // 0x051E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysScore;                                              // 0x051F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceNoScoring;                                           // 0x0520(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceNoBots;                                              // 0x0521(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamLocked;                                               // 0x0522(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPavlovRoundState                      RoundState;                                                // 0x0523(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EGameDifficulty                             Difficulty;                                                // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecure;                                                   // 0x0525(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJ1N[0x2];                                     // 0x0526(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APavlovGameState*                            PavlovGameState;                                           // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPavlovGameModeType                    GameModeType;                                              // 0x0530(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OUK[0x7];                                     // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BotControllerClass;                                        // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GhostClass;                                                // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HandMenuClass;                                             // 0x0548(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  BotPersonalityTable;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  EquipmentCostTable;                                        // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumCash;                                               // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashKillReward;                                            // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashTeamKillPenalty;                                       // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncrementTeamScore;                                       // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoRespawn;                                              // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepBodies;                                               // 0x0572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepPawnIfAlive;                                          // 0x0573(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BodyPool;                                                  // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShackBodyDespawnTime;                                      // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RespawnMaxDelay;                                           // 0x057C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InactivityInterval;                                        // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InactivityThreashold;                                      // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InactivityDormantThreashold;                               // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDynamicSpawns;                                            // 0x058C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnGhostOnLogin;                                        // 0x058D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_293W[0x2];                                     // 0x058E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RoundDuration;                                             // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamLockDuration;                                          // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRoundDurationOverride;                               // 0x0598(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowWeaponFilter;                                        // 0x0599(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowCompetitive;                                         // 0x059A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKillfeedDisabled;                                         // 0x059B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowVehicles;                                            // 0x059C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPunishSuicide;                                            // 0x059D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A793[0x2];                                     // 0x059E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PunishSuicideTime;                                         // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoKickOnTK;                                             // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLUM[0x3];                                     // 0x05A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TKKickThreshold;                                           // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanUploadStats;                                           // 0x05AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QK97[0x3];                                     // 0x05AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BombClass;                                                 // 0x05B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBuyRestrictions                            BuyRestrictions;                                           // 0x05B8(0x0140) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FString                                     BuyMenuScriptFilename;                                     // 0x06F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponFilterData*                           WeaponFilterData;                                          // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      OutOfBoundsComponentClass;                                 // 0x0710(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CustomItemClass;                                           // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ULM8[0x10];                                    // 0x0720(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatsManager*                               StatsManager;                                              // 0x0730(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovGameMode");
		return ptr;
	}



	void TerminateGameSession();
	void SwitchTeam(class AController* Controller);
	void Suicide(class AController* Controller);
	void StopReplayRecording();
	void StartReplayRecording();
	bool SpawnVehicleWRef(const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	bool SpawnVehicleForPawn(class APavlovPawn* Pawn, const struct FName& Vehicle);
	bool SpawnVehicle(const struct FTransform& SpawnTransform, const struct FName& VehicleID);
	void SpawnPlayer(class AController* Controller);
	class APavlovPawn* SpawnPavlovPawn(class AController* Controller, const struct FTransform& Transform);
	void SpawnAndPossesPawns();
	void ShuffleTeams();
	void SetTTTRoundEndSoundEnabled(bool bEnabled);
	void SetTeamLockTime(float LockTime);
	void SetTeamCash(int TeamId, int CashAmmount);
	void SetRoundState(PavlovProxy_EPavlovRoundState State);
	void SetPlayerScore(class APlayerState* PlayerState, int Score);
	void SetPawnsInvulnerable(bool bEnabled);
	void SetMovement(bool bEnabled);
	void SetLimitedAmmoMode(unsigned char LimitedAmmoType);
	void SetInactivityThresholds(int NewInactivityThreashold, int NewInactivityDormantThreashold);
	void SetGrenadePinPrevention(bool bPreventGrenadePins);
	void SetEveryoneCash(int CashAmmount);
	void SetAttackingTeam(int TeamId);
	void RotateMap();
	void ResetSNDMatch();
	void ResetScore();
	void ReplenishPlayersAmmo();
	void ReplaceVehicleSpawners();
	void RefreshOutOfBounds();
	void PunishTeamKiller(class APavlovPlayerState* TeamKiller);
	void PostStats();
	void PostRoundCleanUp();
	void OnSteamTicketValidation(const struct FString& SteamUserId, Steamworks_ESteamAuthResponse Response, const struct FString& OwnerSteamUserId);
	void OnspawnVehicleWRefAsync(class UClass* VehicleClass, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	void OnSpawnVehicleAsync(class UClass* VehicleClass, const struct FTransform& SpawnTransform, int TeamId);
	void OnRoundStateChanged(PavlovProxy_EPavlovRoundState OldState, PavlovProxy_EPavlovRoundState NewState);
	void OnPlayerSpawned(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn);
	void OnPlayerKilled(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn);
	void OnPawnKilled(class AActor* OwnerActor);
	void OnOutOfBoundsOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnOutOfBoundsEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnLimitedAmmoModeChanged(PavlovProxy_ELimitedAmmoType LimitedAmmoType);
	void OnKillVolumeOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void MakeNavmeshStatic();
	void LogSNDWinner(int LogRound, int LogTeamID);
	void LogBombExplosion();
	void LogBomb(class AController* Interactor, bool bBombPlanted);
	void KickByStringId(const struct FString& ID, const struct FText& KickReason, bool bBan);
	void KickByPlayerState(class APavlovPlayerState* PlayerState, const struct FText& KickReason, bool bBan, bool bAddToBlacklist);
	bool IsTeamDead(int TeamId);
	void InitializedVehicleSpawners(bool bHasSpawners);
	void IncrementTeamScore(int TeamId, int Score);
	void IncrementPlayerScore(class APlayerState* PlayerState, int Score);
	void GiveTeamCash(int TeamId, int CashAmmount);
	void GiveItem(class APavlovPawn* Pawn, class UClass* ItemClass, float BlockDuration, bool bLoaded);
	void GiveEveryoneCash(int CashAmmount);
	void GetTeamStatus(int TeamId, int* Num, int* Casualties);
	int GetTeamRealPlayerCount(int TeamId);
	struct FString GetSteamAudioGun();
	TArray<class APlayerSpawnPoint*> GetSpawnPointsForQuery(int NumOfSpawnPoints);
	int GetRoundNumber();
	int GetRealPlayerCount();
	class AController* GetRandomController(int TeamFilter, bool bRealPlayer);
	int GetMaxPlayerCount();
	float GetKillZHeight();
	int GetKillReward(class APavlovPlayerState* Killer, class APavlovPlayerState* Victim, const struct FDamageTrackInfo& LastHitInfo);
	class APlayerSpawnPoint* GetDynamicSpawnPointForTeam(int TeamId);
	class APlayerSpawnPoint* GetDynamicOccludedSpawnPoint(int TeamId);
	void FinalizeMapSwitch();
	void FinalizeMapRotation();
	void EndTTTRound();
	void EnableFallDamage(bool bFallEnabled);
	void DestroyPushSpawns();
	void DestroyBot(class AController* Controller);
	void CreateDedicatedServerSession();
	class AController* CreateBot(int TeamId);
	void CleanUpItems();
	bool CanRotateMap();
	bool CanChangeScore();
	void AssignPlayerSkin(class APavlovPlayerState* PlayerState, class APavlovPawn* Pawn);
	class UTTTGameInfo* AddTTTGameInfo(class UClass* TTTGameInfoClass);
	bool AddStatByController(class AController* Controller, Pavlov_EPlayerStats PlayerStat);
	bool AddStat(class APavlovPlayerState* PavPlayerState, Pavlov_EPlayerStats PlayerStat);
	void AddExtraRoundTime(float ExtraTime);
	void AddAssist(class APavlovPlayerState* PlayerState);
};

// Class Pavlov.BattlegroundsGameMode
// 0x0028 (FullSize[0x0760] - InheritedSize[0x0738])
class ABattlegroundsGameMode : public APavlovGameMode
{
public:
	unsigned char                                      UnknownData_ZTCB[0x11];                                    // 0x0738(0x0011) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Pavlov_EBattlegroundsServerType                    ServerType;                                                // 0x0749(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B9N4[0x6];                                     // 0x074A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MasterServerUrl;                                           // 0x0750(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BattlegroundsGameMode");
		return ptr;
	}



	void PerformWaitingHeartBeat();
	void PerformGameHeartBeat();
};

// Class Pavlov.BeltFedGunState
// 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
class UBeltFedGunState : public UVRGunState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BeltFedGunState");
		return ptr;
	}



};

// Class Pavlov.BloodPuddle
// 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
class ABloodPuddle : public AActor
{
public:
	class UDecalComponent*                             DecalComponent;                                            // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F4XI[0x14];                                    // 0x0330(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Threashold;                                                // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PoolNum;                                                   // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVGS[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DecalSize;                                                 // 0x0358(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZBias;                                                     // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLifeSpan;                                               // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDuration;                                           // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepAlive;                                                // 0x0370(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVP4[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BloodPuddle");
		return ptr;
	}



	void OnPour(const struct FTransform& Transform);
	void OnOwnerEndPlay(class AActor* OwnerActor, TEnumAsByte<Engine_EEndPlayReason> Reason);
};

// Class Pavlov.BloodSplat
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class ABloodSplat : public AActor
{
public:
	float                                              MaxProjection;                                             // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6XYX[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BloodSplat");
		return ptr;
	}



};

// Class Pavlov.BloodSplatGeometry
// 0x0040 (FullSize[0x0370] - InheritedSize[0x0330])
class ABloodSplatGeometry : public ABloodSplat
{
public:
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5LDL[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ImpactEffect;                                              // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   Sound;                                                     // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutRate;                                               // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GPEB[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BloodSplatGeometry");
		return ptr;
	}



	void FadeOut();
};

// Class Pavlov.Bomb
// 0x0270 (FullSize[0x0740] - InheritedSize[0x04D0])
class ABomb : public AVRItem
{
public:
	unsigned char                                      UnknownData_HX5P[0x8];                                     // 0x04D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QS6Y[0x8];                                     // 0x04E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 BombInstigator;                                            // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4S6B[0x120];                                   // 0x04F0(0x0120) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bOccluded;                                                 // 0x0610(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EBombState                                  State;                                                     // 0x0611(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CXA[0x2];                                     // 0x0612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Timer;                                                     // 0x0614(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NextDigit;                                                 // 0x0618(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4BY[0x4];                                     // 0x061C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Code;                                                      // 0x0620(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DetonatorDelay;                                            // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GraceDuration;                                             // 0x0634(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DefuseSound;                                               // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GraceSound;                                                // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   PlantedSound;                                              // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DetonationSound;                                           // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   BeepSiteASound;                                            // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   BeepSiteBSound;                                            // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 BeepIntervalCurve;                                         // 0x0668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DigitExpireDelay;                                          // 0x0670(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     KeyPadOffset;                                              // 0x0674(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KeyDistance;                                               // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QY02[0x4];                                     // 0x0684(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   KeySound;                                                  // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ErrorSound;                                                // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   SuccessSound;                                              // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x06A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ExplosionFX;                                               // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ShackExplosionFX;                                          // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplosionFXScale;                                          // 0x06B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X5SM[0x4];                                     // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       WireStates;                                                // 0x06C0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Wires;                                                     // 0x06D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              CutMaxDist;                                                // 0x06E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDamage;                                                 // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x06F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowUseByAnyone;                                         // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZYR[0x2];                                     // 0x06FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastDropLocation;                                          // 0x06FC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                BombDrop_Handle;                                           // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoResetBomb;                                            // 0x0710(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GNHG[0x3];                                     // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ResetToNavTime;                                            // 0x0714(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBombDetonation;                                          // 0x0718(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBombDefused;                                             // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTZC[0x8];                                     // 0x0738(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Bomb");
		return ptr;
	}



	void ResetBombPosition();
	void PlantAt(class ABombPlantSpot* Spot, bool bForce);
	void OnPlayerOcclusionChange(bool bNewOccluded);
	void OnPlanted();
	void OnGrace();
	void OnDetonation();
	void OnDefuse();
	void OnCodeReset();
	void OnButtonPressed(int Index);
	void OnBeep();
	void MulticastOnPlantAt(class ABombPlantSpot* Spot);
	void MulticastOnGrace();
	void MulticastOnEnterCode(bool bSucceed);
	void MulticastOnDetonation();
	void MulticastOnDefuse();
	void MulticastOnCodeReset();
	void MulticastOnBeep();
	bool IsWireCut(int Index);
	bool IsButtonPressed(int Index);
	struct FVector GetWireLocation(int Index);
	int GetClosestValidWireIndex(const struct FVector& Location);
	void ExpireCode();
	void EnterDigit(int Digit, class AController* Presser);
	void Detonate();
	void Defuse(class AController* Defuser);
	void CutWire(int Index, class AController* Defuser);
	void AllowAutoResetBomb(bool bAutoReset);
};

// Class Pavlov.BombAnimInstance
// 0x0038 (FullSize[0x0390] - InheritedSize[0x0358])
class UBombAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_C50P[0x4];                                     // 0x0358(0x0004) Fix Super Size
	float                                              Button02;                                                  // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button03;                                                  // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button04;                                                  // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button05;                                                  // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button06;                                                  // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button07;                                                  // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button08;                                                  // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button09;                                                  // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Button00;                                                  // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ButtonX1;                                                  // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ButtonX2;                                                  // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRedCableCut;                                              // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bYellowCableCut;                                           // 0x0389(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWhiteCableCut;                                            // 0x038A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AIVT[0x5];                                     // 0x038B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BombAnimInstance");
		return ptr;
	}



};

// Class Pavlov.BombPlantSpot
// 0x0030 (FullSize[0x0500] - InheritedSize[0x04D0])
class ABombPlantSpot : public AVRItem
{
public:
	class UBoxComponent*                               Collision;                                                 // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsB;                                                      // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlantedHere;                                              // 0x04E1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpotEnabled;                                              // 0x04E2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CR0R[0x5];                                     // 0x04E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnBombPlanted;                                             // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HN3P[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BombPlantSpot");
		return ptr;
	}



	void UpdateEnabledState();
	void SetSpotEnabled(bool bEnabled);
	void ResetSpot();
	void OnRep_PlantedHere();
	void MulticastOnPlantStateChanged(bool bPlanted);
};

// Class Pavlov.BootGameMode
// 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
class ABootGameMode : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BootGameMode");
		return ptr;
	}



	void OnAsyncLoadCompleted();
};

// Class Pavlov.Bullet
// 0x0088 (FullSize[0x0548] - InheritedSize[0x04C0])
class ABullet : public AVRBullet
{
public:
	float                                              TimeSpawned;                                               // 0x04C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latency;                                                   // 0x04C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmourDamage;                                              // 0x04C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmourPenetration;                                         // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HelmetDamage;                                              // 0x04D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HelmetBleed;                                               // 0x04D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FalloffModifier;                                           // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFalloffDist;                                            // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFalloffDist;                                            // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TP6B[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ShackImpactParticle;                                       // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 HeadshotProbability;                                       // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WoundScale;                                                // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WoundRate;                                                 // 0x0504(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9J2U[0x3];                                     // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 WoundRateByDistance;                                       // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SphereMesh;                                                // 0x0510(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    BulletMaterial;                                            // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTracer;                                                // 0x0520(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QGB9[0x3];                                     // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TracersLength;                                             // 0x0524(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TracerGirth;                                               // 0x0528(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TracerTimeScaleSpeed;                                      // 0x052C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAuthDmg;                                                  // 0x0530(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KDRZ[0x3];                                     // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TracerTimer;                                               // 0x0534(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TracerDraws;                                               // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMJ0[0x4];                                     // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 TracerOpacityCurve;                                        // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Bullet");
		return ptr;
	}



	class UStaticMeshComponent* GetBulletMesh();
};

// Class Pavlov.BulletHoleManager
// 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
class ABulletHoleManager : public AActor
{
public:
	TArray<class UInstancedStaticMeshComponent*>       MeshInstances;                                             // 0x0328(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<int>                                        Needles;                                                   // 0x0338(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                MaxHoles;                                                  // 0x0348(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DecalScale;                                                // 0x034C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DepthOffset;                                               // 0x0350(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FZSA[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BulletHoleManager");
		return ptr;
	}



};

// Class Pavlov.UberWheel
// 0x0070 (FullSize[0x0398] - InheritedSize[0x0328])
class AUberWheel : public AActor
{
public:
	unsigned char                                      UnknownData_61CZ[0x4];                                     // 0x0328(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bWheelEnabled;                                             // 0x032C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3D41[0x3];                                     // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CenterRadius;                                              // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDLL[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  EnableSound;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  DisableSound;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  CommitSound;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  SelectSound;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  HoverSound;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  ErrorSound;                                                // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ToggleCurve;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToggleDuration;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHolding;                                                  // 0x0374(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YAQ[0x3];                                     // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PositionX;                                                 // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionY;                                                 // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Selection;                                                 // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XKEA[0x4];                                     // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnWheelUpdate;                                             // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.UberWheel");
		return ptr;
	}



	void SetEnabled(bool bEnabled);
	bool IsEnabled();
};

// Class Pavlov.BuyMenu
// 0x0058 (FullSize[0x03F0] - InheritedSize[0x0398])
class ABuyMenu : public AUberWheel
{
public:
	class UStaticMeshComponent*                        PlaneMesh;                                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCohtmlComponent*                            CohtmlComponent;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FBuyMenuEquipment>                   EquipmentList;                                             // 0x03A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                CashAvailable;                                             // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsShack;                                                  // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MF9M[0x3];                                     // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APavlovGameState*                            GameState;                                                 // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APavlovPlayerState*                          LocalPlayerState;                                          // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EOFF[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  BuySound;                                                  // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Transition1Sound;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Transition2Sound;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BuyMenu");
		return ptr;
	}



	void OnScriptingReady();
	void OnReadyForBindings();
	void OnCashUpdated(int Cash);
	void OnBuyingChanged(bool bEnabled);
};

// Class Pavlov.BuyMenuData
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UBuyMenuData : public UDataAsset
{
public:
	struct FBuyMenuContainer                           BuyMenuData;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BuyMenuData");
		return ptr;
	}



	bool RemoveBuyMenuSlot(const struct FName& ItemName);
	class UJsonUtilsObj* PropertiesToJson();
	bool JsonStringToBuyWheelData(const struct FString& JsonString);
	TArray<struct FBuyMenuSlot> GetFilteredList(class APavlovPlayerState* PlayerState);
	class UBuyMenuData* CreateBuyMenuData(const struct FString& JsonString);
	void AddBuyMenuSlot(const struct FBuyMenuSlot& Slot);
};

// Class Pavlov.BuyZone
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class ABuyZone : public ATriggerVolume
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.BuyZone");
		return ptr;
	}



};

// Class Pavlov.ChamberComponent
// 0x00E0 (FullSize[0x0520] - InheritedSize[0x0440])
class UChamberComponent : public UPhysicsConstraintComponent
{
public:
	class UStaticMeshComponent*                        MeshInstance;                                              // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        ConstrainedMesh;                                           // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           Volume;                                                    // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGun*                                        Gun;                                                       // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVRGunState*                                 GunState;                                                  // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HV1P[0x8];                                     // 0x0468(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRemoving;                                                 // 0x0470(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRemoval;                                             // 0x0471(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DDMO[0x2];                                     // 0x0472(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChamberIndex;                                              // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 LiveRound;                                                 // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 EmptyShell;                                                // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapsuleRadius;                                             // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapsuleLength;                                             // 0x048C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CapsuleOffset;                                             // 0x0490(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstraintLimit;                                           // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstraintOffset;                                          // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RLDX[0x4];                                     // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   RemoveSound;                                               // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   InsertSound;                                               // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHapticFeedbackEffect_Base*                  InsertHaptic;                                              // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EjectForce;                                                // 0x04C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G03E[0x4];                                     // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMagSlideInfo                               MagSlideInfo;                                              // 0x04C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6MEG[0x8];                                     // 0x0518(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ChamberComponent");
		return ptr;
	}



	void ResetChamber();
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnChamberStateChanged(int Index, VRFramework_EVRGunChamberState OldState, VRFramework_EVRGunChamberState NewState);
	void DestroyConstrainedMesh();
	void DebugDraw();
	void CheckConstraintBreakThreshold();
	void BreakCheck();
	void AllowRemoval();
};

// Class Pavlov.UIView
// 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
class AUIView : public AActor
{
public:
	unsigned char                                      UnknownData_PI8R[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        PlaneMesh;                                                 // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCohtmlComponent*                            CohtmlComponent;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1WS9[0x8];                                     // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USoundBase*>                          Sounds;                                                    // 0x0348(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S20M[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUISoundLibrary*>                     SoundLibs;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UUIHapticLibrary*                            HapticLibrary;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.UIView");
		return ptr;
	}



	void OnScriptingReady();
	void OnReadyForBindings();
};

// Class Pavlov.MenuUniverseView
// 0x00C0 (FullSize[0x0438] - InheritedSize[0x0378])
class AMenuUniverseView : public AUIView
{
public:
	unsigned char                                      UnknownData_LOOE[0x51];                                    // 0x0378(0x0051) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bDisabled;                                                 // 0x03C9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJEF[0x6];                                     // 0x03CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ID;                                                        // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GTN0[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ViewURL;                                                   // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DrawSize;                                                  // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TextureScale;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZIndex;                                                    // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortPriority;                                              // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EMenuUniverseDockingType                    Dock;                                                      // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5FZ2[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DockOrder;                                                 // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimationSpeed;                                            // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Pivot;                                                     // 0x040C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PivotRotation;                                             // 0x0414(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   PivotLocation;                                             // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ActualDrawSize;                                            // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ControllerObject;                                          // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MenuUniverseView");
		return ptr;
	}



	void SetVisible(bool bVisible);
	void SetDockTransformOverride(const struct FTransform& T);
	bool IsVisible();
	struct FTransform GetUniverseTransform();
	struct FVector2D GetTopRightLocation();
	struct FVector2D GetTopLeftLocation();
	struct FVector2D GetOffset2D(const struct FVector2D& Pivot2D);
	struct FVector GetOffset(const struct FVector2D& Pivot2D);
	class AMenuUniverse* GetMenuUniverse();
	struct FVector2D GetCenterLocation();
	struct FVector2D GetBottomRightLocation();
	struct FVector2D GetBottomLeftLocation();
	void FadeEnded();
	void Fade(bool bVisible, float Duration);
	void ClearDockTransformOverride();
	void AnimateTo(const struct FVector2D& NewPivotLocation, const struct FRotator& Rotator);
};

// Class Pavlov.ContentView
// 0x0050 (FullSize[0x0488] - InheritedSize[0x0438])
class AContentView : public AMenuUniverseView
{
public:
	TArray<class APavlovPlayerState*>                  SortedPlayerArray;                                         // 0x0438(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FContentViewGlobals                         Globals;                                                   // 0x0448(0x0038) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LOAF[0x8];                                     // 0x0480(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ContentView");
		return ptr;
	}



	void OnSideInterfaceChanged(Pavlov_EUserInterfaceType PrimaryInterface, Pavlov_EUserInterfaceType OldInterface);
	void OnLobbyLeave();
	void OnLobbyEnter(bool bFailure);
	void OnInterfaceChanged(Pavlov_EUserInterfaceType OldInterface);
};

// Class Pavlov.PlayOnlineView
// 0x00F8 (FullSize[0x0580] - InheritedSize[0x0488])
class APlayOnlineView : public AContentView
{
public:
	unsigned char                                      UnknownData_SYXM[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UServerBrowserV2*                            ServerBrowser;                                             // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UServerBrowserModel*                         ServerBrowserModel;                                        // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULobbyStatusModel*                           LobbyStatusModel;                                          // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D2EJ[0x10];                                    // 0x04A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUILobbyModel                               LobbyModel;                                                // 0x04B8(0x00C0) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CHRM[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PlayOnlineView");
		return ptr;
	}



	void UpdateLobbyData();
	void OnServerBrowserUpdated();
	void OnPingUpdated(class UServerContainer* Container);
	void OnOnlineError(Pavlov_EOnlineError Error, const struct FText& ErrorMessage);
	void OnMapBrowserDestroyed();
	void OnMapBrowserCommit(const struct FModalCommitParams& Params);
	void OnLobbyPinDestroyed();
	void OnLobbyPinCommit(const struct FModalCommitParams& Params);
	void LobbyTalkCheck();
};

// Class Pavlov.ConnectingView
// 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
class AConnectingView : public APlayOnlineView
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ConnectingView");
		return ptr;
	}



};

// Class Pavlov.ModalView
// 0x0000 (FullSize[0x0488] - InheritedSize[0x0488])
class AModalView : public AContentView
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ModalView");
		return ptr;
	}



};

// Class Pavlov.ConnectSpinnerModalView
// 0x0000 (FullSize[0x0488] - InheritedSize[0x0488])
class AConnectSpinnerModalView : public AModalView
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ConnectSpinnerModalView");
		return ptr;
	}



	void OnWorkshopDownloadProgress(float Progress);
};

// Class Pavlov.CosmeticTickActor
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ACosmeticTickActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.CosmeticTickActor");
		return ptr;
	}



	void CosmeticTick(float DeltaTime);
};

// Class Pavlov.CosmeticTickManagerComponent
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UCosmeticTickManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_U4P2[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.CosmeticTickManagerComponent");
		return ptr;
	}



};

// Class Pavlov.CustomItem
// 0x0020 (FullSize[0x04F0] - InheritedSize[0x04D0])
class ACustomItem : public AVRItem
{
public:
	class UStaticMeshComponent*                        RootMesh;                                                  // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlov_CustomItem*                          CustomProxy;                                               // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReattachDelay;                                             // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBG2[0xC];                                     // 0x04E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.CustomItem");
		return ptr;
	}



	void SpawnItemProxy(class UClass* CustomItemClass);
	void SetPickDisabled(bool bDisabled);
	void PlayerDroppedItem();
	void OnRep_CustomProxy();
	class APawn* GetPawn();
	unsigned char GetItemState();
	class UAnimSequence* GetItemSequence();
	TArray<unsigned char> GetExcludeSlots();
	void DropItem(bool bDestroy);
	void CustomItemDestroyed(class AActor* DestroyedActor);
};

// Class Pavlov.DamageEffectComponent
// 0x0028 (FullSize[0x0610] - InheritedSize[0x05E8])
class UDamageEffectComponent : public UStaticMeshComponent
{
public:
	class UMaterialInstanceDynamic*                    DamageEffectMat;                                           // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APavlovPawn*                                 PavPawn;                                                   // 0x05F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FDamageEffectHit>                    DamageEffects;                                             // 0x05F8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 EffectCurve;                                               // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageEffectComponent");
		return ptr;
	}



	void OwnerKilled(class AActor* Owner);
	void InitComponent();
	void EnableDebugging(bool bEnabled);
	void DisplayHit(const struct FVector& BulletDirection);
};

// Class Pavlov.DamageTrackerComponent
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UDamageTrackerComponent : public UActorComponent
{
public:
	TArray<struct FDamageTrackInfo>                    InfoList;                                                  // 0x00F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageTrackerComponent");
		return ptr;
	}



	void ResetTracking();
	bool GetLastHit(struct FDamageTrackInfo* LastHit);
	void GatherAssists(TArray<struct FDamageTrackInfo>* Assists);
};

// Class Pavlov.DamageType_Pavlov
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UDamageType_Pavlov : public UDamageType
{
public:
	struct FName                                       IconLookup;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayClientEffects;                                        // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K94Q[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_Pavlov");
		return ptr;
	}



};

// Class Pavlov.DamageType_BackBlast
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_BackBlast : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_BackBlast");
		return ptr;
	}



};

// Class Pavlov.DamageType_Bayonet
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_Bayonet : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_Bayonet");
		return ptr;
	}



};

// Class Pavlov.DamageType_Bayonet_Held
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_Bayonet_Held : public UDamageType_Bayonet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_Bayonet_Held");
		return ptr;
	}



};

// Class Pavlov.DamageType_Chicken
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_Chicken : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_Chicken");
		return ptr;
	}



};

// Class Pavlov.DamageType_Fire
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_Fire : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_Fire");
		return ptr;
	}



};

// Class Pavlov.DamageType_KillVolume
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_KillVolume : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_KillVolume");
		return ptr;
	}



};

// Class Pavlov.DamageType_PushBomb
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_PushBomb : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_PushBomb");
		return ptr;
	}



};

// Class Pavlov.DamageType_RunOver
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_RunOver : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_RunOver");
		return ptr;
	}



};

// Class Pavlov.DamageType_RunOver_Tank
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_RunOver_Tank : public UDamageType_RunOver
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_RunOver_Tank");
		return ptr;
	}



};

// Class Pavlov.DamageType_SNDBomb
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_SNDBomb : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_SNDBomb");
		return ptr;
	}



};

// Class Pavlov.DamageType_VehicleExplosion
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_VehicleExplosion : public UDamageType_Pavlov
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_VehicleExplosion");
		return ptr;
	}



};

// Class Pavlov.DamageType_VehicleExplosion_Tank
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UDamageType_VehicleExplosion_Tank : public UDamageType_VehicleExplosion
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_VehicleExplosion_Tank");
		return ptr;
	}



};

// Class Pavlov.DecorationSkeletalMeshComponent
// 0x0008 (FullSize[0x0B30] - InheritedSize[0x0B28])
class UDecorationSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData_NL03[0x8];                                     // 0x0B28(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DecorationSkeletalMeshComponent");
		return ptr;
	}



};

// Class Pavlov.DedicatedServer
// 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
class UDedicatedServer : public UObject
{
public:
	unsigned char                                      UnknownData_8LX8[0xE8];                                    // 0x0028(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDepot*                                      BuiltinDepot;                                              // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0D6P[0x2];                                     // 0x0118(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInitialized;                                              // 0x011A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x011B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TTEW[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerName;                                                // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRotatedMap>                         MapRotation;                                               // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0150(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TickRate;                                                  // 0x0154(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DepotURL;                                                  // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecured;                                                  // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_11DF[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ApiKey;                                                    // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustomServer;                                             // 0x0180(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWhitelist;                                                // 0x0181(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B35B[0x2];                                     // 0x0182(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RefreshListTime;                                           // 0x0184(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeLimit;                                                 // 0x0188(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LimitedAmmoType;                                           // 0x018C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompetitive;                                              // 0x0190(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBroadcast;                                                // 0x0191(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X99S[0x6];                                     // 0x0192(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BalanceTableURL;                                           // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVerboseLogging;                                           // 0x01A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotating;                                                 // 0x01A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZG0[0x2];                                     // 0x01AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RotationIndex;                                             // 0x01AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Blacklist;                                                 // 0x01B0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ModList;                                                   // 0x01C0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Whitelist;                                                 // 0x01D0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DedicatedServer");
		return ptr;
	}



	void TravelNextTick();
	void OnMapDownloaded(bool bSucceed, const struct FString& ID);
	struct FServerDetails GetServerDetails();
};

// Class Pavlov.PavlovObject
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPavlovObject : public UObject
{
public:
	unsigned char                                      UnknownData_14NW[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovObject");
		return ptr;
	}



	void TickByInterval();
};

// Class Pavlov.Depot
// 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
class UDepot : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_HWX8[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DepotContentPath;                                          // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J0WF[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Depot");
		return ptr;
	}



};

// Class Pavlov.DestroyedVehicle
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class ADestroyedVehicle : public AActor
{
public:
	float                                              CleanUpTime;                                               // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWH8[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DestroyedVehicle");
		return ptr;
	}



};

// Class Pavlov.Destructible
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ADestructible : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Destructible");
		return ptr;
	}



	void OnShatter(const struct FVector& Normal, const struct FVector& Location);
	void MulticastOnShatter(const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location);
};

// Class Pavlov.DoubleBarrelGunState
// 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
class UDoubleBarrelGunState : public UVRGunState
{
public:
	bool                                               bBarrelOpen;                                               // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IZN6[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnBarrelChanged;                                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DoubleBarrelGunState");
		return ptr;
	}



	void SetBarrel(bool bOpen);
};

// Class Pavlov.FiltersView
// 0x0038 (FullSize[0x05B8] - InheritedSize[0x0580])
class AFiltersView : public APlayOnlineView
{
public:
	unsigned char                                      UnknownData_S5J7[0x38];                                    // 0x0580(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.FiltersView");
		return ptr;
	}



};

// Class Pavlov.FlickerTracer
// 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
class AFlickerTracer : public AActor
{
public:
	TArray<class ABullet*>                             BulletArray;                                               // 0x0328(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ONOK[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        SphereMesh;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYO1[0x7];                                     // 0x0351(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.FlickerTracer");
		return ptr;
	}



};

// Class Pavlov.FlyingHelmet
// 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
class AFlyingHelmet : public AActor
{
public:
	unsigned char                                      UnknownData_8EHN[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ImpulsePower;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpulseOffset;                                             // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.FlyingHelmet");
		return ptr;
	}



	void ApplyImpulse();
};

// Class Pavlov.FootstepAnimNotify
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFootstepAnimNotify : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.FootstepAnimNotify");
		return ptr;
	}



};

// Class Pavlov.FriendsView
// 0x0010 (FullSize[0x0498] - InheritedSize[0x0488])
class AFriendsView : public AContentView
{
public:
	unsigned char                                      UnknownData_WZ96[0x10];                                    // 0x0488(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.FriendsView");
		return ptr;
	}



	void UpdateFriendsModel();
};

// Class Pavlov.GameSessionServer
// 0x00B8 (FullSize[0x0100] - InheritedSize[0x0048])
class UGameSessionServer : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_LDH2[0x14];                                    // 0x0048(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DownloadProgress;                                          // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMap;                                                   // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMapId;                                                 // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMapLabel;                                              // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EGameSessionState                           State;                                                     // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LKV1[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerKey;                                                 // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MasterServerUrl;                                           // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxAttempts;                                               // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TickRate;                                                  // 0x00F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F1WD[0x6];                                     // 0x00FA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GameSessionServer");
		return ptr;
	}



	void ReportState();
	void OnMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnDownloadProgress(float Progress);
	void AttemptToDispatch();
};

// Class Pavlov.GestureComponent
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UGestureComponent : public UActorComponent
{
public:
	TArray<struct FGestureSetup>                       Gestures;                                                  // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGesturePerformed;                                        // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GestureComponent");
		return ptr;
	}



	void RegisterGesture(const struct FGestureSetup& Setup);
};

// Class Pavlov.PavlovItemController
// 0x0220 (FullSize[0x0890] - InheritedSize[0x0670])
class APavlovItemController : public AVRItemController
{
public:
	class UWidgetComponent*                            UI;                                                        // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        PointerMesh;                                               // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AHandMenu*                                   HandMenu;                                                  // 0x0680(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKillfeed*                                   Killfeed;                                                  // 0x0688(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V9DJ[0x50];                                    // 0x0690(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TwoHandReloadBasis;                                        // 0x06E0(0x0030) (Net, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class AGun*                                        TwoHandReloadRefGun;                                       // 0x0710(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGun*                                        TwoHandGripRefGun;                                         // 0x0718(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        SelectionHandMesh;                                         // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3DTX[0x40];                                    // 0x0728(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AZombie*>                             KnockZombies;                                              // 0x0768(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PY3V[0x1];                                     // 0x0778(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bBypassMovement;                                           // 0x0779(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TX9F[0x2];                                     // 0x077A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TouchPadXValue;                                            // 0x077C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TouchPadYValue;                                            // 0x0780(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFQC[0x4];                                     // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVRItem*                                     Selection;                                                 // 0x0788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDominant;                                                 // 0x0790(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTouchPadLocomotion;                                       // 0x0791(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1E3[0x2];                                     // 0x0792(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TwoHandPickOffset;                                         // 0x0794(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TwoHandDirection;                                          // 0x07A0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMenuPressed;                                              // 0x07AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SWII[0x3];                                     // 0x07AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AUberWheel*                                  WheelInstance;                                             // 0x07B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TalkHeadDistance;                                          // 0x07B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FingerPointOffset;                                         // 0x07BC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5E92[0x8];                                     // 0x07C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SelectionOffset;                                           // 0x07D0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterial*                                   SelectionMaterial;                                         // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              SelectionObjectType;                                       // 0x0808(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F1V5[0x3];                                     // 0x0809(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SelectionSphereRadius;                                     // 0x080C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 SelectionHandMeshAsset;                                    // 0x0810(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelectionHandMeshScale;                                    // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X62Q[0x4];                                     // 0x081C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   SelectionSoundCue;                                         // 0x0820(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   SelectionHandLeftMaterial;                                 // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   SelectionHandRightMaterial;                                // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BashCooldown;                                              // 0x0838(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BashAcumMomentumDuration;                                  // 0x083C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BashDistanceThreashold;                                    // 0x0840(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BashBeginRadius;                                           // 0x0844(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BashVolumeRadius;                                          // 0x0848(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BashPulsationInterval;                                     // 0x084C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   BashSound;                                                 // 0x0850(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WheelClass;                                                // 0x0858(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HandMenuClass;                                             // 0x0860(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      KillfeedClass;                                             // 0x0868(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSnapTurn;                                                // 0x0870(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBuywheelChanged;                                         // 0x0880(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovItemController");
		return ptr;
	}



	void UpdateUIState();
	void SetWheelEnabled(bool bEnabled);
	void SetMenu(bool bEnabled);
	void SetKillfeed(bool bEnabled);
	void ReleaseTwoHandGrip();
	void OnTeamIdChanged(int TeamId);
	void OnSelectionPicked(class AVRItem* Item);
	bool IsWheelEnabled();
	bool IsTwoHandReloadEnabled();
	bool IsTwoHandGripEnabled();
	bool IsMenuActive();
	class APavlovItemController* GetOppositeHandController();
	class AHandMenu* GetHandMenuInstance();
	struct FVector GetFingerPointLocation();
	void ForceTwoHandGrip();
	void ClientEmptyGrippedHand();
	void ClearWheelInstance();
};

// Class Pavlov.GhostItemController
// 0x0010 (FullSize[0x08A0] - InheritedSize[0x0890])
class AGhostItemController : public APavlovItemController
{
public:
	Pavlov_EGhostPointMode                             PointMode;                                                 // 0x0890(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07BS[0xF];                                     // 0x0891(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GhostItemController");
		return ptr;
	}



	void OnPointModeChanged(Pavlov_EGhostPointMode OldPointMode);
	void ChangePointMode(Pavlov_EGhostPointMode NewPointMode);
};

// Class Pavlov.PavlovPawnBase
// 0x0000 (FullSize[0x0AF0] - InheritedSize[0x0AF0])
class APavlovPawnBase : public AVRPawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovPawnBase");
		return ptr;
	}



	class APavlovItemController* GetNonDominantController();
	class APavlovItemController* GetDominantController();
};

// Class Pavlov.GhostPawn
// 0x0070 (FullSize[0x0B60] - InheritedSize[0x0AF0])
class AGhostPawn : public APavlovPawnBase
{
public:
	TArray<class ASpectatorTag*>                       SpectatorTags;                                             // 0x0AF0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AActor*                                      SpectatorRoomInstance;                                     // 0x0B00(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FreeViewSpeedMul;                                          // 0x0B08(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TYG[0x4];                                     // 0x0B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      KillCamClass;                                              // 0x0B10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKillCam*                                    KillCam;                                                   // 0x0B18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInSpectatorRoom;                                          // 0x0B20(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOnGrace;                                                // 0x0B21(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHighlightActive;                                          // 0x0B22(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MEE1[0x5];                                     // 0x0B23(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SpectatorTVCameraClass;                                    // 0x0B28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SpectatorTagClass;                                         // 0x0B30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SpectatorRoomClass;                                        // 0x0B38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GraceDuration;                                             // 0x0B40(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FreeViewSpeed;                                             // 0x0B44(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                                 VoiceSoundClass;                                           // 0x0B48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           VoiceChatAttenuation;                                      // 0x0B50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PBJ0[0x8];                                     // 0x0B58(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GhostPawn");
		return ptr;
	}



	void SpawnTags();
	void OnTraveledToSpectatorRoom();
	void OnTeamIdChanged(int TeamId);
	void OnGraceTimeEnded();
	void EndGraceTime();
	void CreateVoiceComponent();
	void ClientTravelToSpectatorRoom();
	void ClientSpawnKillCam(const struct FKillInfo& KillInfo);
	void ClearTags();
};

// Class Pavlov.GlobalPlayerEffects
// 0x00A8 (FullSize[0x03D0] - InheritedSize[0x0328])
class AGlobalPlayerEffects : public AInfo
{
public:
	class UMaterialInstanceDynamic*                    FlashedMaterialInstance;                                   // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    SupressedMaterialInstance;                                 // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APostProcessVolume*                          PostProcess;                                               // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T7WF[0x10];                                    // 0x0340(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             BuzzingSound;                                              // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             WindSound;                                                 // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USubmixEffectDynamicsProcessorPreset*        MasterLimiterSubmix;                                       // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6IUF[0x9];                                     // 0x0368(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Pavlov_EPlayerEffectState                          State;                                                     // 0x0371(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EOY7[0x2];                                     // 0x0372(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                 // 0x0378(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_040T[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   GhostMaterial;                                             // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   GhostSoundMix;                                             // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   FlashedMaterial;                                           // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   FlashedSphereMaterial;                                     // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   FlashedSoundMix;                                           // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   TankSoundMix;                                              // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FlashedOpacityCurve;                                       // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   SupressedMaterial;                                         // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   SupressedSoundMix;                                         // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                                   ExplosionSoundMix;                                         // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GlobalPlayerEffects");
		return ptr;
	}



	void SwitchState(Pavlov_EPlayerEffectState NewState);
	void ResetGlobalEffects();
	void InstigateFlashVision(float Duration, float ViewAlpha);
	void InstigateFlash(float Duration, float ViewAlpha);
	float GetFlashDuration();
	void DisableWindSound();
};

// Class Pavlov.DamageType_Explotion
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UDamageType_Explotion : public UDamageType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_Explotion");
		return ptr;
	}



};

// Class Pavlov.Grenade
// 0x00D0 (FullSize[0x05A0] - InheritedSize[0x04D0])
class AGrenade : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProjectileMovementComponent*                ProjectileMovement;                                        // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YZ35[0x8];                                     // 0x04E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGrenadeTrailProxy*                          TrailProxy;                                                // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVRHandleComponent*                          PinHandleComponent;                                        // 0x04F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                GrenadeDetonation_Handle;                                  // 0x04F8(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                                 DetonationInstigator;                                      // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EGrenadeState                               State;                                                     // 0x0508(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProjectileActive;                                         // 0x0509(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DropOnPreRoundExploit;                                     // 0x050A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2U3C[0x1];                                     // 0x050B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProjectileThreashold;                                      // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileSpeedMul;                                        // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PinPullRatio;                                              // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DetonatorDelay;                                            // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DetonatedLifeSpan;                                         // 0x051C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideOnDetonation;                                         // 0x0520(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisablePhysics;                                           // 0x0521(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N4JL[0x6];                                     // 0x0522(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 LeverMesh;                                                 // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeverImpulse;                                              // 0x0530(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeverAngularImpulse;                                       // 0x053C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             LeverSurfaceFX;                                            // 0x0548(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FuseIgniteSound;                                           // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnLeverReleaseSoundAttached;                           // 0x0558(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEFH[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   LeverReleaseSound;                                         // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DryLeverReleaseSound;                                      // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   SafetyPinRemovedSound;                                     // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DetonationSound;                                           // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EGrenadeType                                GrenadeType;                                               // 0x0580(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDealDamage;                                               // 0x0581(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CE9U[0x2];                                     // 0x0582(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Damage;                                                    // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDamage;                                                 // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // 0x058C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OW1S[0x8];                                     // 0x0598(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Grenade");
		return ptr;
	}



	void ServerRestoreSafetyPin();
	void ServerRemoveSafetyPin();
	void ServerReleaseSafetyLever(float PinPull);
	void RemoveSafetyPin();
	void ReleaseSafetyLever(float PinPull);
	void PullSafetyPin(float Ratio);
	void OnRep_ProjectileActive();
	void OnReleaseSafetyLever();
	void OnProjectileStop(const struct FHitResult& ImpactResult);
	void OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnPinReinserted();
	void OnDetonation();
	void MulticastThrow(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Velocity);
	void MulticastOnSafetyPinRemoved();
	void MulticastOnReleaseSafetyLever();
	void MulticastOnDetonation();
	class USoundCue* GetHolidayLeverSound();
	void FixClientPin();
	void Detonate();
	bool CanPullPin();
};

// Class Pavlov.GrenadeAnimInstance
// 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
class UGrenadeAnimInstance : public UVRControllerAnimInstance
{
public:
	Pavlov_EGrenadeState                               GrenadeState;                                              // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WP75[0x3];                                     // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PinPullRatio;                                              // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PullPinVectorTarget;                                       // 0x03D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldSimulateRing;                                       // 0x03E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGrabbedByPin;                                             // 0x03E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GK1L[0x2];                                     // 0x03E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PullPinVector;                                             // 0x03E8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PinScale;                                                  // 0x03F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeverScale;                                                // 0x0400(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDDC[0x4];                                     // 0x040C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GrenadeAnimInstance");
		return ptr;
	}



};

// Class Pavlov.GrenadeLever
// 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
class AGrenadeLever : public AActor
{
public:
	unsigned char                                      UnknownData_K4V6[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        GrenadeLeverMesh;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GrenadeLever");
		return ptr;
	}



};

// Class Pavlov.GrenadeTrailProxy
// 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
class AGrenadeTrailProxy : public AActor
{
public:
	class UTrailComponent*                             Trail;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceConstant*                   Team0Material;                                             // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceConstant*                   Team1Material;                                             // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TeamId;                                                    // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W1N8[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GrenadeTrailProxy");
		return ptr;
	}



};

// Class Pavlov.Gun
// 0x02D0 (FullSize[0x0C00] - InheritedSize[0x0930])
class AGun : public AVRGun
{
public:
	unsigned char                                      UnknownData_WSVG[0x1C];                                    // 0x0930(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     GripRefLocation;                                           // 0x094C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasLegacyGrip;                                            // 0x0958(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H2JJ[0x5F];                                    // 0x0959(0x005F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInstancedSourceBusComponent*                SourceBusComp;                                             // 0x09B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APavlov_AudioVolume*                         AudioVolume;                                               // 0x09C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundSubmix*                                ReverbSubmix;                                              // 0x09C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3QBC[0x19];                                    // 0x09D0(0x0019) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bCanRemoveAttachments;                                     // 0x09E9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L954[0x2];                                     // 0x09EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastCheckedAttachmentRemoval;                              // 0x09EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7B65[0x4];                                     // 0x09F0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastTwoHandDirection;                                      // 0x09F4(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TwoHandPickOffset;                                         // 0x0A00(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJFG[0x2];                                     // 0x0A0C(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bKeepTwoHand;                                              // 0x0A0E(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VLWR[0x1];                                     // 0x0A0F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AdditionalHandOffset;                                      // 0x0A10(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSideGun;                                                  // 0x0A1C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateMagBoltReleaseEvents;                             // 0x0A1D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustomCocking;                                            // 0x0A1E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeltaCocking;                                             // 0x0A1F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedsTwoHands;                                            // 0x0A20(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XHAW[0x3];                                     // 0x0A21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StockDuration;                                             // 0x0A24(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTwoHandSupportOnly;                                       // 0x0A28(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTwoHandReload;                                            // 0x0A29(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IQUV[0x6];                                     // 0x0A2A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   TwoHandGripSound;                                          // 0x0A30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDropByRecoil;                                             // 0x0A38(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsAutoUngrip;                                       // 0x0A39(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsMagRelease;                                       // 0x0A3A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSingleShotDrop;                                           // 0x0A3B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTwoHandGripDistance;                                    // 0x0A3C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     GripOffset;                                                // 0x0A40(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MagneticGripDistance;                                      // 0x0A4C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               MagneticGripSequence;                                      // 0x0A50(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               NoMagazineMagneticGripSequence;                            // 0x0A58(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AccessoryGripSequence;                                     // 0x0A60(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerAngle;                                              // 0x0A68(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnsteadyRecoilAngleMul;                                    // 0x0A6C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnsteadyRecoilTraslationMul;                               // 0x0A70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnsteadySpraySpreadMul;                                    // 0x0A74(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxUngrippedRecoil;                                        // 0x0A78(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxUngrippedDuration;                                      // 0x0A7C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     GrippedCounterRecoilLimitMul;                              // 0x0A80(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBI4[0x4];                                     // 0x0A8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ExploitSound;                                              // 0x0A90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShotConcurrencyQuality                     ShotConcurrencyQuality;                                    // 0x0A98(0x0028) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             HitSurfaceFX;                                              // 0x0AC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseChamberEjectFX;                                        // 0x0AC8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VP7C[0x7];                                     // 0x0AC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurfaceFXAsset*                             ChamberEjectSurfaceFX;                                     // 0x0AD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RattlePoints;                                              // 0x0AD8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedModifier;                                             // 0x0ADC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrouchAcuracy;                                             // 0x0AE0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandingAcuracy;                                           // 0x0AE4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MovingAcuracy;                                             // 0x0AE8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GA6[0x4];                                     // 0x0AEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                BobCurve;                                                  // 0x0AF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BobSpeed;                                                  // 0x0AF8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BobMultiplier;                                             // 0x0AFC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BobBlendSpeed;                                             // 0x0B00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ADSSpeedMultiplier;                                        // 0x0B04(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StrafingMultiplier;                                        // 0x0B08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrouchSideRecoilMul;                                       // 0x0B0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGunbHapticsRecoil*                          bHapticsRecoil;                                            // 0x0B10(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScopeIsLongerThanGun;                                     // 0x0B18(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JFO[0x3];                                     // 0x0B19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastHapticTime;                                            // 0x0B1C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAttachmentSuppressor*                       Suppresor;                                                 // 0x0B20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAttachmentSight*                            Sight;                                                     // 0x0B28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAttachmentGrip*                             Grip;                                                      // 0x0B30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAttachmentAccessory*                        Accessory;                                                 // 0x0B38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAttachmentCanted*                           Canted;                                                    // 0x0B40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PicatinnySocket;                                           // 0x0B48(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PicatinnyLength;                                           // 0x0B50(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SightCompatibility;                                        // 0x0B54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GripSocket;                                                // 0x0B58(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GripCompatibility;                                         // 0x0B60(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BLBI[0x4];                                     // 0x0B64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SuppressorSocket;                                          // 0x0B68(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SuppressorCompatibility;                                   // 0x0B70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KUL[0x4];                                     // 0x0B74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AccessorySocket;                                           // 0x0B78(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AccessoryCompatibility;                                    // 0x0B80(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q5ZW[0x4];                                     // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CantedSocket;                                              // 0x0B88(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CantedCompatibility;                                       // 0x0B90(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CEFA[0x4];                                     // 0x0B94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGunAttachmentSetup                         DefaultAttachments;                                        // 0x0B98(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   AttachmentModeRange;                                       // 0x0BC8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LowEndSightReplacement;                                    // 0x0BD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttachmentModeHoldTime;                                    // 0x0BD8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttachModeTime;                                            // 0x0BDC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideIronOverride;                                         // 0x0BE0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayManualCockSound;                                      // 0x0BE1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VREB[0x6];                                     // 0x0BE2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMagBoltRelease;                                          // 0x0BE8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3GXQ[0x8];                                     // 0x0BF8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Gun");
		return ptr;
	}



	void UpdateCanRemoveAttachments();
	void ToggleAccessory_Server();
	bool ToggleAccessory();
	bool SupportsSuppressorAttachments();
	bool SupportsSightAttachments();
	bool SupportsGripAttachments();
	bool SupportsCantedAttachments();
	bool SupportsAttachments();
	bool SupportsAccessoryAttachments();
	void StartSlideInputSound();
	void SpawnAndAttachLowEndSight();
	void SlideInputSound(float SlideInput);
	void SetupBulletSkin(class UStaticMeshComponent* BulletMesh);
	void SetAccessoryDrawDistance(bool bLocallyOwned, class UStaticMeshComponent* OptimizeMesh);
	void ResetAttachmentMode();
	void RecoilDrop();
	void OptimizeGun(bool bLocallyOwned);
	void OnUnderExploitChanged(bool bUnderExploit);
	void OnTwoHandGripChanged(bool bEnabled);
	void OnSpawnUnloaded();
	void OnSliderUngrabbed();
	void OnSliderInputReceived(const struct FVector& Input, const struct FVector& InputDelta);
	void OnSliderGrabbed();
	void OnSlideModeChanged(bool bSliding);
	void OnRecoilDropCooldown();
	void OnAttachModeChanged(bool bEnabled, bool bJustPicked);
	void OnAttachmentChanged();
	void MulticastOnRecoilDrop();
	bool IsUnderExploit();
	bool IsInAttachmentMode();
	bool IsBeingGrippedBy(class APavlovItemController* ByController);
	bool IsBeingGripped();
	bool STATIC_IsAttachmentCompatible(class UClass* GunClass, class UClass* AttachmentClass);
	bool HasAttachment(class UClass* AttachmentClass);
	float GetPicatinnySlideSpacer();
	class UStaticMeshComponent* GetChamberMesh();
	struct FName GetAttachmentSocket(class UClass* AttachmentClass);
	TArray<struct FName> GetAttachmentNames();
	TArray<class AAttachment*> GetAttachmentList();
	void BayonetDamage_Server(const struct FBayonetDamage& BayonetDamage);
};

// Class Pavlov.GunbHapticsRecoil
// 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
class UGunbHapticsRecoil : public UDataAsset
{
public:
	TMap<VRFramework_EAmmoType, class UObject*>        RightChestMap;                                             // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<VRFramework_EAmmoType, class UObject*>        LeftChestMap;                                              // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<VRFramework_EAmmoType, class UObject*>        RightArmMap;                                               // 0x00D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<VRFramework_EAmmoType, class UObject*>        LeftArmMap;                                                // 0x0120(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GunbHapticsRecoil");
		return ptr;
	}



};

// Class Pavlov.SkinComponent
// 0x0050 (FullSize[0x0140] - InheritedSize[0x00F0])
class USkinComponent : public UActorComponent
{
public:
	TMap<class UMaterialInterface*, int>               SkinMap;                                                   // 0x00F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SkinComponent");
		return ptr;
	}



	bool LoadSkin();
};

// Class Pavlov.GunSkinComponent
// 0x0060 (FullSize[0x01A0] - InheritedSize[0x0140])
class UGunSkinComponent : public USkinComponent
{
public:
	bool                                               bSwapMagazineSkin;                                         // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMagazineMap;                                           // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2CUT[0x6];                                     // 0x0142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UMaterialInterface*, int>               MagazineMap;                                               // 0x0148(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                BulletMaterialIndex;                                       // 0x0198(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SBBN[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.GunSkinComponent");
		return ptr;
	}



	bool HasBulletMaterial();
	class UMaterialInterface* GetBulletMaterial();
};

// Class Pavlov.HandMenu
// 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
class AHandMenu : public AActor
{
public:
	class USoundBase*                                  ShowSound;                                                 // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  HideSound;                                                 // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.HandMenu");
		return ptr;
	}



};

// Class Pavlov.HealEffectComponent
// 0x0018 (FullSize[0x0600] - InheritedSize[0x05E8])
class UHealEffectComponent : public UStaticMeshComponent
{
public:
	class UMaterialInstanceDynamic*                    HealMaterial;                                              // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TotalHealTime;                                             // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HealTimeAlpha;                                             // 0x05F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 HealingCurve;                                              // 0x05F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.HealEffectComponent");
		return ptr;
	}



	void OwnerKilled(class AActor* Owner);
	void Initialize(float HealTime, class UMaterialInterface* HealMat);
};

// Class Pavlov.HighlightInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHighlightInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.HighlightInterface");
		return ptr;
	}



	void GetHighlightComponents(Pavlov_EHighlightColor* HighlightColor, TArray<class UMeshComponent*>* HighlightMeshes);
};

// Class Pavlov.RatAIController
// 0x0018 (FullSize[0x0450] - InheritedSize[0x0438])
class ARatAIController : public AAIController
{
public:
	class AVRPawn*                                     TargetPawn;                                                // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // 0x0440(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RPWX[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RatAIController");
		return ptr;
	}



};

// Class Pavlov.RatAnimInstance
// 0x0058 (FullSize[0x03B0] - InheritedSize[0x0358])
class URatAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_SY3F[0x8];                                     // 0x0358(0x0008) Fix Super Size
	unsigned char                                      UnknownData_L62N[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovingSpeedReference;                                      // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MovingSpeed;                                               // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PelvisRotation;                                            // 0x0378(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    SpineRotation;                                             // 0x0384(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SpineLerpExp;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoving;                                                   // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFalling;                                                  // 0x0395(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLookAt;                                                   // 0x0396(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQIL[0x1];                                     // 0x0397(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LookAtLocation;                                            // 0x0398(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HS9Q[0xC];                                     // 0x03A4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RatAnimInstance");
		return ptr;
	}



};

// Class Pavlov.RconPawn
// 0x0038 (FullSize[0x03E8] - InheritedSize[0x03B0])
class ARconPawn : public ASpectatorPawn
{
public:
	class USceneComponent*                             PawnRoot;                                                  // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                            PawnCamera;                                                // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SWNN[0x28];                                    // 0x03C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RconPawn");
		return ptr;
	}



	void ExitSpectator_Server();
};

// Class Pavlov.RepairTool
// 0x0000 (FullSize[0x04D0] - InheritedSize[0x04D0])
class ARepairTool : public AVRItem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RepairTool");
		return ptr;
	}



	bool RepairVehicle(class AActor* Vehicle);
	bool CanRepairVehicle(class AActor* RepairActor, bool bNoTeams, int TeamId);
};

// Class Pavlov.ReplayManager
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UReplayManager : public UObject
{
public:
	unsigned char                                      UnknownData_71SF[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FReplayInfo>                         ReplayList;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReplayListUpdated;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReplayPlay;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ReplayManager");
		return ptr;
	}



	void PlayReplay(const struct FString& ReplayId);
	void OnCustomMapDownloaded(bool bSucceed, const struct FString& ID);
	void Find(const struct FString& GameMode, bool bCompetitive);
};

// Class Pavlov.ReplayPawn
// 0x0000 (FullSize[0x0388] - InheritedSize[0x0388])
class AReplayPawn : public APawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ReplayPawn");
		return ptr;
	}



};

// Class Pavlov.ReplayPlayerController
// 0x0000 (FullSize[0x0688] - InheritedSize[0x0688])
class AReplayPlayerController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ReplayPlayerController");
		return ptr;
	}



};

// Class Pavlov.ReviveTool
// 0x0000 (FullSize[0x04D0] - InheritedSize[0x04D0])
class AReviveTool : public AVRItem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ReviveTool");
		return ptr;
	}



	bool SetNumOfRevives(int AmountOfRevives);
	int GetNumOfRevives();
};

// Class Pavlov.RevolverGunState
// 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
class URevolverGunState : public UVRGunState
{
public:
	bool                                               bCylinderOpen;                                             // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NQT4[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRevolverCylinderChanged;                                 // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RevolverGunState");
		return ptr;
	}



	void SetCylinder(bool bOpen);
};

// Class Pavlov.RifleGunState
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class URifleGunState : public UActionGunState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RifleGunState");
		return ptr;
	}



};

// Class Pavlov.RockerLauncherGunState
// 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
class URockerLauncherGunState : public UVRGunState
{
public:
	Pavlov_ELauncherState                              LauncherState;                                             // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8LA[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLauncherStateChanged;                                    // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RockerLauncherGunState");
		return ptr;
	}



	void SetLauncherState(Pavlov_ELauncherState State);
	void ChamberChanged(int ChamberIndex, VRFramework_EVRGunChamberState OldState, VRFramework_EVRGunChamberState NewState);
};

// Class Pavlov.HitBoxProxyComponent
// 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
class UHitBoxProxyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_6RF9[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               BoundingBox;                                               // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumSamples;                                                // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SampleInterval;                                            // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitBox>                             HitBoxDefinitions;                                         // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SkeletonMesh;                                              // 0x0118(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S0Q7[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitBoxHistory>                      History;                                                   // 0x0128(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.HitBoxProxyComponent");
		return ptr;
	}



	void OnBulletOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Pavlov.HolsterComponent
// 0x0030 (FullSize[0x05B0] - InheritedSize[0x0580])
class UHolsterComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData_8HK2[0x8];                                     // 0x0580(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachSocket;                                              // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AllowedClasses;                                            // 0x0590(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                 // 0x05A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMirrorable;                                               // 0x05A1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRightHanded;                                              // 0x05A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYSJ[0x5];                                     // 0x05A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVRItem*                                     HolsteredItem;                                             // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.HolsterComponent");
		return ptr;
	}



	void TakeItem(class APavlovItemController* Controller);
	void ServerTakeItem(class APavlovItemController* Controller);
	void ServerHolster(class AVRItem* Item);
	void OnRep_HolsteredItem();
	void MulticastOnItemHolstered(class AVRItem* Item);
	void MulticastOnDrop(class AVRItem* Item);
	void Mirror();
	void Holster(class AVRItem* Item);
	void Drop();
	void AttachItemLocally();
};

// Class Pavlov.IconRemover
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UIconRemover : public UActorComponent
{
public:
	TArray<class UPrimitiveComponent*>                 Icons;                                                     // 0x00F0(0x0010) (ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.IconRemover");
		return ptr;
	}



	void AddIcons(TArray<class UPrimitiveComponent*> IconArray);
	void AddIcon(class UPrimitiveComponent* Icon);
};

// Class Pavlov.ImpairInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UImpairInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ImpairInterface");
		return ptr;
	}



	void MarkAsImpaired(Pavlov_EImpairedType Type, class AActor* EventActor, class AController* Instigator);
	void GetImpairedEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
};

// Class Pavlov.InfoView
// 0x0000 (FullSize[0x0488] - InheritedSize[0x0488])
class AInfoView : public AContentView
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.InfoView");
		return ptr;
	}



};

// Class Pavlov.InstancedSourceBusComponent
// 0x0098 (FullSize[0x02D0] - InheritedSize[0x0238])
class UInstancedSourceBusComponent : public USceneComponent
{
public:
	class USoundSourceBus*                             SourceBusInstance;                                         // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                             AudioComp;                                                 // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class USoundBase*, class USoundBase*>         SoundCache;                                                // 0x0248(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UAudioComponent*>                     PlayingAudioComponents;                                    // 0x0298(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JI2K[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundSourceBus*                             SourceBus;                                                 // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SilenceDelay;                                              // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoSilencing;                                              // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowAttenuation;                                         // 0x02BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DU2Y[0x2];                                     // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundConcurrency*                           ConcurrencyOverride;                                       // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Z1E[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.InstancedSourceBusComponent");
		return ptr;
	}



	void SilenceAudioComponent();
	class UAudioComponent* Play(class USoundBase* Sound, bool bForceNoOcclusion);
	void OnSourceBusAudioFinished(class UAudioComponent* Comp);
	void OnAudioFinished(class UAudioComponent* Comp);
	class UAudioComponent* GetAudioComponent();
};

// Class Pavlov.KillCam
// 0x00B0 (FullSize[0x03D8] - InheritedSize[0x0328])
class AKillCam : public AActor
{
public:
	class UStaticMeshComponent*                        BulletTrace;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        ImpactPoint;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetComponent*                            KillerInfo;                                                // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FKillInfo                                   KillInfo;                                                  // 0x0340(0x0070) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              TraceScaleMul;                                             // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinInfoDistance;                                           // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FactorScale;                                               // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinScale;                                                  // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxScale;                                                  // 0x03C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RefInfoScale;                                              // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InfoOffset;                                                // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AEIR[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.KillCam");
		return ptr;
	}



};

// Class Pavlov.StereoOverlay
// 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
class AStereoOverlay : public AActor
{
public:
	Pavlov_EStereoOverlayMode                          Mode;                                                      // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23MS[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance;                                                  // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tilt;                                                      // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x033C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDominant;                                                 // 0x033D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DRFI[0x2];                                     // 0x033E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SidearmLength;                                             // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SidearmHeight;                                             // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SidearmSmoothRatio;                                        // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B0D9[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.StereoOverlay");
		return ptr;
	}



};

// Class Pavlov.Killfeed
// 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
class AKillfeed : public AStereoOverlay
{
public:
	bool                                               bDisplayInArm;                                             // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKillfeedVisible;                                          // 0x0351(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H754[0x2];                                     // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeRatio;                                                 // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeSpeed;                                                 // 0x0358(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeOffset;                                            // 0x035C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillfeedTilt;                                              // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IM2V[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Killfeed");
		return ptr;
	}



	void Show();
	void OnDisplayModeUpdated();
	void OnArmKillfeedChanged(bool bEnabled);
	void Hide();
};

// Class Pavlov.DamageType_Knife
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UDamageType_Knife : public UDamageType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.DamageType_Knife");
		return ptr;
	}



};

// Class Pavlov.Knife
// 0x00B0 (FullSize[0x0580] - InheritedSize[0x04D0])
class AKnife : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               BladeProxy;                                                // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0JKE[0x10];                                    // 0x04E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bBloody;                                                   // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_85Z2[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     BladeVelocity;                                             // 0x04F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  KnifeDamageTable;                                          // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDamage;                                                 // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDamage;                                                 // 0x0510(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedReference;                                            // 0x0514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   StabSound;                                                 // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ThrowLoopSound;                                            // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             StabParticle;                                              // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ParticleOffset;                                            // 0x0530(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGrabCooldown;                                             // 0x053C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNAL[0x3];                                     // 0x053D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProxyKnifeClass;                                           // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinThrowSoundSpeed;                                        // 0x0548(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SRM[0x4];                                     // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 LatestInstigator;                                          // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasSpawnedProxy;                                          // 0x0558(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AED1[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Throw_Handle;                                              // 0x0560(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             ThrowAudioComp;                                            // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bThrowIsSlow;                                              // 0x0570(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J0FG[0x3];                                     // 0x0571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ThrowTime;                                                 // 0x0574(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3G36[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Knife");
		return ptr;
	}



	void StartThrowSound_Multi();
	void StartKnifeThrow();
	void SpawnKnifeProxy(const struct FAttachProxyInfo& AttachInfo);
	void SetBloody(bool bEnabled);
	void OnRep_Bloody();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBloodyChanged(bool bNewBloody);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void MulticastOnStab(bool bDead);
	bool HasSpawnedProxy();
	class USoundCue* GetKillConfirmationSound2D();
	class USoundCue* GetAlternativeStabSound();
	void EnableTicking();
	void DelayDestroyKnife();
	void CheckThrowThreshold();
};

// Class Pavlov.KOTHObjective
// 0x0090 (FullSize[0x03B8] - InheritedSize[0x0328])
class AKOTHObjective : public AActor
{
public:
	class USceneComponent*                             HillRoot;                                                  // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        HillMesh;                                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        HillMarker;                                                // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EHillState                                  KOTHState;                                                 // 0x0340(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIEG[0x3];                                     // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPointsToAward;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSecondsActive;                                          // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HillUpdateFrequency;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSpawnLootCrate;                                        // 0x0350(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H4UF[0x3];                                     // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IncreaseToBoundsScale;                                     // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HillActiveSoundVolume;                                     // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WYM[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ActiveSound;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKOTHStateChanged;                                        // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKOTHTeamScored;                                          // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKOTHObjectiveInactive;                                   // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimerHandle                                HillTimer_Handle;                                          // 0x0398(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                HillTicks;                                                 // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TotalAwardedPoints;                                        // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TotalTimeActive;                                           // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TYY8[0x4];                                     // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKOTHObjectiveProxy*                         KOTHProxy;                                                 // 0x03B0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.KOTHObjective");
		return ptr;
	}



	void UpdateHillMaterial(class UMaterialInterface* UpdateMaterial);
	void SetHillActive(bool bActive);
	void OnRep_KOTHState(Pavlov_EHillState OldKOTHState);
	void OnRep_KOTHProxy();
	void OnObjectiveInitialized();
	void OnHillActive();
	void InitializeFromProxy(class AKOTHObjectiveProxy* ObjectiveProxy);
};

// Class Pavlov.LimitedAmmoComponent
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class ULimitedAmmoComponent : public UActorComponent
{
public:
	class UClass*                                      AmmoCounterClass;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALimitedAmmoCounter*                         AmmoCounter;                                               // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LimitedAmmoComponent");
		return ptr;
	}



	void ShowLimitedAmmoCounter(bool bCounterVisible);
	void SetupAmmoUI_Server(class APavlovPawn* PavPawn);
	void SetupAmmoCounter_Client();
	int RemoveAmmo(VRFramework_EAmmoType AmmoType, int RemoveAmount);
	void PlayerDied(class APavlovPawn* Pawn);
	bool MagToAmmo(class AVRMagazine* Mag);
	bool HasAmmoOfType(VRFramework_EAmmoType AmmoType);
	bool GiveAmmoForBuy(class AVRGun* Gun, int AmmoLimit);
	VRFramework_EAmmoType STATIC_GetGunAmmoType(class AVRGun* Gun);
	struct FName GetAmmoTypeName(VRFramework_EAmmoType AmmoType);
	bool GetAmmoTypeFromName(const struct FName& AmmoId, VRFramework_EAmmoType* AmmoType);
	class UClass* GetAmmoClassFromType(VRFramework_EAmmoType AmmoType);
	class UClass* GetAmmoClassFromName(const struct FName& AmmoId);
	int GetAmmoAmount(VRFramework_EAmmoType AmmoType);
	void AddBulkAmmo(TMap<VRFramework_EAmmoType, int> BulkAmmo);
	int AddAmmo(VRFramework_EAmmoType AmmoType, int Amount);
};

// Class Pavlov.LimitedAmmoBoxesComponent
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class ULimitedAmmoBoxesComponent : public ULimitedAmmoComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LimitedAmmoBoxesComponent");
		return ptr;
	}



};

// Class Pavlov.LimitedAmmoBoxlessComponent
// 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
class ULimitedAmmoBoxlessComponent : public ULimitedAmmoComponent
{
public:
	TMap<VRFramework_EAmmoType, int>                   MaxAmmoLimits;                                             // 0x0100(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<int>                                        AmmoCount;                                                 // 0x0150(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LimitedAmmoBoxlessComponent");
		return ptr;
	}



	bool AddAmmoBox(VRFramework_EAmmoType AmmoType, int Amount);
};

// Class Pavlov.LimitedAmmoCounter
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ALimitedAmmoCounter : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LimitedAmmoCounter");
		return ptr;
	}



	void ShowAmmoCounter(bool bVisible);
};

// Class Pavlov.LimitedAmmoCustomComponent
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class ULimitedAmmoCustomComponent : public ULimitedAmmoComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LimitedAmmoCustomComponent");
		return ptr;
	}



};

// Class Pavlov.LoadoutData
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class ULoadoutData : public UDataAsset
{
public:
	struct FLoadoutProperties                          LoadoutProperties;                                         // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LoadoutData");
		return ptr;
	}



	bool RemoveLoadout(const struct FString& LoadoutName);
	class UJsonUtilsObj* PropertiesToJson();
	bool JsonStringToLoadoutProperties(const struct FString& JsonString);
	class ULoadoutData* CreateLoadoutProperties(const struct FString& JsonString);
	bool CanUseLoadout(class APavlovPlayerState* PlayerState, const struct FString& LoadoutName);
	void AddLoadout(const struct FString& LoadoutName, const struct FLoadout& Loadout);
};

// Class Pavlov.UIModel
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UUIModel : public UObject
{
public:
	unsigned char                                      UnknownData_8ROS[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.UIModel");
		return ptr;
	}



};

// Class Pavlov.LobbyStatusModel
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class ULobbyStatusModel : public UUIModel
{
public:
	struct FString                                     Message;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDownloading;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9B5G[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Progress;                                                  // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LobbyStatusModel");
		return ptr;
	}



	void OnLobbyStatusMessage(const struct FString& InMessage, bool bInDownloading, float InProgress);
};

// Class Pavlov.LootSpawner
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class ALootSpawner : public AActor
{
public:
	unsigned char                                      LootIndex;                                                 // 0x0328(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BOPJ[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.LootSpawner");
		return ptr;
	}



	void SetLootIndexByName(const struct FName& Name, bool bNetUpdate);
	void OnRep_LootIndex();
	void OnLootChanged(unsigned char Index, const struct FName& Name);
	void NetworkUpdate();
	bool IsClear();
	struct FName GetLootNameByIndex(unsigned char Index);
	struct FName GetLootName();
	unsigned char GetLootIndexByName(const struct FName& Name);
	void ClearLoot();
};

// Class Pavlov.Magazine
// 0x0010 (FullSize[0x0640] - InheritedSize[0x0630])
class AMagazine : public AVRMagazine
{
public:
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x0630(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X86I[0x8];                                     // 0x0638(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Magazine");
		return ptr;
	}



};

// Class Pavlov.MainMenu
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class AMainMenu : public AHandMenu
{
public:
	class UWidgetComponent*                            UI;                                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bScoreboard;                                               // 0x0340(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideUpdateScoreboard;                                 // 0x0341(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2HUU[0x6];                                     // 0x0342(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MainMenu");
		return ptr;
	}



	void OnUpdateScoreboard();
};

// Class Pavlov.MainMenuView
// 0x0018 (FullSize[0x04A0] - InheritedSize[0x0488])
class AMainMenuView : public AContentView
{
public:
	unsigned char                                      UnknownData_D1BM[0x18];                                    // 0x0488(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MainMenuView");
		return ptr;
	}



	void OnVoteKickModalCommit(const struct FModalCommitParams& Params);
	void LeaveImpl();
	void ExitGameImpl();
};

// Class Pavlov.MapBrowserModalView
// 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
class AMapBrowserModalView : public AModalView
{
public:
	class UMapBrowserModel*                            MapBrowserModel;                                           // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MapBrowserModalView");
		return ptr;
	}



};

// Class Pavlov.MapBrowserModel
// 0x00A8 (FullSize[0x00E8] - InheritedSize[0x0040])
class UMapBrowserModel : public UUIModel
{
public:
	unsigned char                                      UnknownData_T61V[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorkshop*                                   Workshop;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CRAE[0x50];                                    // 0x0060(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bBusy;                                                     // 0x00B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFavoritesOnly;                                            // 0x00B1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDownloading;                                            // 0x00B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CO0P[0x1];                                     // 0x00B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DownloadProgress;                                          // 0x00B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Selection;                                                 // 0x00B8(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Section;                                                   // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPages;                                                  // 0x00CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentPage;                                               // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AF3S[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUIMapModel>                         Maps;                                                      // 0x00D8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MapBrowserModel");
		return ptr;
	}



	void OnSubscritionChanged(const struct FName& ID, bool bSubscribed);
	void OnRequestUserVote(const struct FName& ID, Pavlov_EWorkshopVoteType VoteType);
	void OnPreviewLoaded(const struct FName& ID, class UTexture2D* Texture);
	void OnDownloadProgress(float Progress);
	void OnDownloadBegin();
	void OnCustomMapQueryCompleted();
	void OnCustomMapDownloadCompleted(bool bSucceed, const struct FString& ID);
	void OnArtificialQueryCompleted();
};

// Class Pavlov.MapValidator
// 0x0038 (FullSize[0x0360] - InheritedSize[0x0328])
class AMapValidator : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                 // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugDrawTime;                                             // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReflectionBounds;                                          // 0x0334(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReflectionGridSize;                                        // 0x0340(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VAAN[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FColor>                              RandomColors;                                              // 0x0350(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MapValidator");
		return ptr;
	}



	void GenerateNewColors();
	void FlushDebugPoints();
	void DrawReflectionCaptureView();
};

// Class Pavlov.Matchmaking
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UMatchmaking : public UObject
{
public:
	Pavlov_EMatchmakingStatus                          Status;                                                    // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPartyWaiting;                                             // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdatingPartyList;                                        // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H1CD[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPartyInfo>                          PartyList;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMatchSettings                              Settings;                                                  // 0x0040(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UAzureServer*                                AzureServer;                                               // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStatusChanged;                                           // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyCreated;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyLeave;                                              // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyUpdated;                                            // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCreatePartyFailed;                                       // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyListUpdated;                                        // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMemberSpeakChanged;                                 // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Matchmaking");
		return ptr;
	}



	bool UpdatePartyList();
	void SetSettings(const struct FMatchSettings& NewSettings);
	void SetDefaultSettings();
	bool Queue();
	void LeaveParty();
	bool JoinParty(const struct FString& NetworkStr);
	bool IsInQueue();
	bool IsConnectingToServer();
	bool IsActive();
	struct FString GetPlayerTitleId();
	struct FString GetPlayerPlayFabId();
	class UMatchmakingParty* GetPartyInstance();
	struct FString GetEntityType();
	struct FString GetEntityToken();
	struct FString GetEntityId();
	bool CreateParty();
	void Cancel();
};

// Class Pavlov.MatchmakingParty
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UMatchmakingParty : public UObject
{
public:
	struct FString                                     SerializedNetworkDescriptor;                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreatedLocally;                                           // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EMatchmakingStatus                          RemoteStatus;                                              // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KNSA[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FPartyMember>          Members;                                                   // 0x0040(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MatchmakingParty");
		return ptr;
	}



	bool IsLocalMemberLeader();
	void Hide();
	TArray<struct FPartyMember> GetMemberArray();
	struct FString GetLeaderEntityId();
	void Broadcast();
};

// Class Pavlov.MatchmakingView
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class AMatchmakingView : public AMenuUniverseView
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MatchmakingView");
		return ptr;
	}



};

// Class Pavlov.MenuUniverse
// 0x0140 (FullSize[0x0468] - InheritedSize[0x0328])
class AMenuUniverse : public AActor
{
public:
	class USceneComponent*                             Facing;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                            CameraComponent;                                           // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             CameraPivot;                                               // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              HiddenActors;                                              // 0x0340(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<int, class AMenuUniverseView*>                Views;                                                     // 0x0350(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class AContentView*                                MainMenuView;                                              // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AContentView*                                InfoView;                                                  // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AContentView*                                PrimaryView;                                               // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AContentView*                                SecondaryView;                                             // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O3H3[0x5];                                     // 0x03C0(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bCanBeClosed;                                              // 0x03C5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CML6[0x2];                                     // 0x03C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HeightOffset;                                              // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C60O[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHapticFeedbackEffect_Base*                  ScrollHaptics;                                             // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScrollHapticThreashold;                                    // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_56C0[0x54];                                    // 0x03E4(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 PointerMesh;                                               // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 PointerLineMesh;                                           // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointerScale;                                              // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointerLineScale;                                          // 0x044C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointerPitch;                                              // 0x0450(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointerDistance;                                           // 0x0454(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              PointerChannel;                                            // 0x0458(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugPointer;                                             // 0x0459(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BBH5[0x6];                                     // 0x045A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       PausePawn;                                                 // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MenuUniverse");
		return ptr;
	}



	void UpdateDocks();
	void SetEnabled(bool bEnabled);
	void OnViewTargetChangingFrom(class AActor* ViewTarget);
	void OnSideInterfaceChanged(Pavlov_EUserInterfaceType PrimaryInterface, Pavlov_EUserInterfaceType OldInterface);
	void OnInterfaceChanged(Pavlov_EUserInterfaceType OldInterface);
	void OnHeadsetScaleChanged(float NewScale);
	void OnEnableChanged(bool bEnabled);
	bool IsEnabled();
	class AMenuUniverseView* GetViewById(int ID);
	void DockView(Pavlov_EMenuUniverseDockingType Dock, int ViewId, int Order);
	class AMenuUniverseView* CreateView(class UClass* ViewClass, const struct FString& ViewUrlOverride, class UObject* ControllerObject);
	void AdjustFacingPivot();
};

// Class Pavlov.MenuUniverseController
// 0x0010 (FullSize[0x0620] - InheritedSize[0x0610])
class UMenuUniverseController : public UMotionControllerComponent
{
public:
	unsigned char                                      UnknownData_AJ68[0x8];                                     // 0x0610(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVRStickComponent*                           Stick;                                                     // 0x0618(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MenuUniverseController");
		return ptr;
	}



	void OnTriggerReleased();
	void OnTriggerPressed();
	void OnTouchpadY(float Value);
	void OnTouchpadX(float Value);
	void OnScrollY(float Value);
	void OnScrollX(float Value);
	void OnMenuReleased();
	void OnMenuPressed();
};

// Class Pavlov.Modal
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UModal : public UObject
{
public:
	class AModalView*                                  View;                                                      // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     ViewContent;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ViewClass;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowContent;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideForeground;                                           // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPersistent;                                               // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_82FQ[0x1];                                     // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ContextValue;                                              // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContextValueStr;                                           // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCommit;                                                  // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDestroyed;                                               // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Modal");
		return ptr;
	}



	void Commit(const struct FModalCommitParams& Params);
};

// Class Pavlov.ModalMessageBox
// 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
class UModalMessageBox : public UModal
{
public:
	Pavlov_EModalMessageBoxType                        Type;                                                      // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWWG[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Message;                                                   // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              Progress;                                                  // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHHT[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ModalMessageBox");
		return ptr;
	}



	void SetProgress(float NewProgress);
};

// Class Pavlov.ModerationView
// 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
class AModerationView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                               // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ModerationView");
		return ptr;
	}



};

// Class Pavlov.MuzzleExploitBlocker
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class AMuzzleExploitBlocker : public ATriggerBox
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.MuzzleExploitBlocker");
		return ptr;
	}



};

// Class Pavlov.NameTag
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UNameTag : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.NameTag");
		return ptr;
	}



};

// Class Pavlov.SpriteWidgetComponent
// 0x0010 (FullSize[0x06B0] - InheritedSize[0x06A0])
class USpriteWidgetComponent : public UWidgetComponent
{
public:
	class AActor*                                      FaceToTargetOverride;                                      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PJ6Y[0x8];                                     // 0x06A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SpriteWidgetComponent");
		return ptr;
	}



};

// Class Pavlov.NameTagComponent
// 0x0000 (FullSize[0x06B0] - InheritedSize[0x06B0])
class UNameTagComponent : public USpriteWidgetComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.NameTagComponent");
		return ptr;
	}



};

// Class Pavlov.NameTagWidget
// 0x0070 (FullSize[0x0160] - InheritedSize[0x00F0])
class UNameTagWidget : public UNameTag
{
public:
	class UClass*                                      WidgetClass;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CCCU[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  DefaultRelativeTransform;                                  // 0x0100(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   WidgetDrawSize;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bManuallyRedraw;                                           // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZOV9[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RedrawTime;                                                // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpriteWidgetComponent*                      NameTag;                                                   // 0x0140(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          LocalPlayerState;                                          // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APavlovPlayerState*                          OwnerPlayerState;                                          // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APavlovGameState*                            PavGameState;                                              // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.NameTagWidget");
		return ptr;
	}



};

// Class Pavlov.NameTagWidgetTTT
// 0x0050 (FullSize[0x01B0] - InheritedSize[0x0160])
class UNameTagWidgetTTT : public UNameTagWidget
{
public:
	class UStaticMeshComponent*                        RoleMesh;                                                  // 0x0160(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z7EL[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RoleDefaultTransform;                                      // 0x0170(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 RoleDefaultMesh;                                           // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideUpdateVisibility;                                 // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZRJ[0x7];                                     // 0x01A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.NameTagWidgetTTT");
		return ptr;
	}



	void UpdateVis(class APavlovPlayerState* LocalPavPlayerState, class APavlovPlayerState* OwnerPavPlayerState);
};

// Class Pavlov.OculusInputBinding
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOculusInputBinding : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OculusInputBinding");
		return ptr;
	}



	void STATIC_ApplyEmulated(class UObject* WorldContext);
};

// Class Pavlov.OnlineAuthentication
// 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
class UOnlineAuthentication : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_5A8K[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineCredential*                           Credential;                                                // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q7XN[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CredentialClass;                                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowReLoginAttempts;                                     // 0x0088(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GL9X[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLoginStatusChanged;                                      // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineAuthentication");
		return ptr;
	}



	void ResetReLoginCooldown();
	bool IsLoggedIn();
	struct FString GetLocalPlatformId();
	struct FString GetDisplayName();
};

// Class Pavlov.OnlineCredential
// 0x0080 (FullSize[0x00C8] - InheritedSize[0x0048])
class UOnlineCredential : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_UPXZ[0x80];                                    // 0x0048(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineCredential");
		return ptr;
	}



};

// Class Pavlov.OnlineCredentialDevice
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UOnlineCredentialDevice : public UOnlineCredential
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineCredentialDevice");
		return ptr;
	}



};

// Class Pavlov.OnlineCredentialEpic
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UOnlineCredentialEpic : public UOnlineCredential
{
public:
	unsigned char                                      UnknownData_ULAE[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLoginCodeGranted;                                        // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineCredentialEpic");
		return ptr;
	}



};

// Class Pavlov.OnlineCredentialSteam
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UOnlineCredentialSteam : public UOnlineCredential
{
public:
	unsigned char                                      UnknownData_8C99[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineCredentialSteam");
		return ptr;
	}



};

// Class Pavlov.OnlineLeaderboards
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UOnlineLeaderboards : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_6MD7[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLeaderboardQueryComplete;                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineLeaderboards");
		return ptr;
	}



	void QueryLeaderboardRanks(const struct FString& LeaderboardId, int MaxResults);
};

// Class Pavlov.OnlineLobby
// 0x0158 (FullSize[0x01A0] - InheritedSize[0x0048])
class UOnlineLobby : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_XH15[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLobbyTalker>                        Talkers;                                                   // 0x00A0(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                              LocalUserTalkTimer;                                        // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9TYQ[0x9C];                                    // 0x00B4(0x009C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSteamLobbyMember>                   Members;                                                   // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamLobbyInfo                             Info;                                                      // 0x0160(0x0038) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              VoiceVolume;                                               // 0x0198(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLightModeEnabled;                                         // 0x019C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIZF[0x3];                                     // 0x019D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineLobby");
		return ptr;
	}



	void SetVoiceChat(bool bEnabled);
	void SetMemberData(const struct FString& Key, const struct FString& Value);
	void SetLobbyMemberLimit(int MemberLimit);
	void SetLobbyData(const struct FString& Key, const struct FString& Value);
	void SetFriendsOnly(bool bEnabled);
	void OnEncodedVoiceData(TArray<unsigned char> EncodedVoiceData);
	void OnAvatarUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* AvatarTexture);
	void KickAndBan(int MemberIndex);
	void Kick(int MemberIndex);
	bool IsVoiceChatEnabled();
	bool IsMemberTalking(int Index);
	bool IsLocalUserOwner();
	bool IsFriendsOnly();
	void InviteFriends();
	int GetNumLobbyMembers();
	struct FString GetMemberData(int Index, const struct FString& Key);
	int GetLobbyMemberLimit();
	struct FString GetLobbyId();
	struct FString GetLobbyData(const struct FString& Key);
};

// Class Pavlov.OnlineManager
// 0x0158 (FullSize[0x01A0] - InheritedSize[0x0048])
class UOnlineManager : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_RV0I[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UOnlineRequest*>                      Requests;                                                  // 0x0058(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BX1H[0x38];                                    // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineLobby*                                LobbyInstance;                                             // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AOO0[0x30];                                    // 0x00A8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlinePlatform*                             Platform;                                                  // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineAuthentication*                       Authentication;                                            // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineStats*                                Stats;                                                     // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboards*                         Leaderboards;                                              // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LobbyClass;                                                // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyListUpdated;                                        // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyUpdated;                                            // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyEnter;                                              // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyLeave;                                              // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyCreated;                                            // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyMembersUpdate;                                      // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnError;                                                   // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbySearchComplete;                                     // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyStatusMessage;                                      // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJoinServerStateChanged;                                  // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineManager");
		return ptr;
	}



	void OnServerConnectFailure(Pavlov_EConnectorFailureReason FailureReason);
	void OnErrorEvent(Pavlov_EOnlineError Error, const struct FText& ErrorMessage);
	bool LobbySearch(const struct FLobbySearchOptions& SearchOptions);
	void LeaveLobby();
	void JoinLobby(const struct FString& LobbyId);
	bool IsSearchingForLobbies();
	class UOnlineLobby* GetLobbyInstance();
	void FindLobbyById(const struct FString& LobbyId);
	void CreateLobby(int LobbyMemberLimit, bool bPublic);
};

// Class Pavlov.OnlinePlatform
// 0x0150 (FullSize[0x0198] - InheritedSize[0x0048])
class UOnlinePlatform : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_ZVDT[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  FailoverAvatarTexture;                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FAvatarTextureInstance> AvatarTextures;                                            // 0x0058(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AW5Z[0xC0];                                    // 0x00A8(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFriendRichPresence>                 Friends;                                                   // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRichPresenceUpdated;                                     // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAvatarUpdated;                                           // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlinePlatform");
		return ptr;
	}



	class UTexture2D* GetAvatarByPlayerState(class APlayerState* PlayerState);
	class UTexture2D* GetAvatar(const struct FString& ProductId, bool bFailOver);
};

// Class Pavlov.OnlinePlatformOculus
// 0x0000 (FullSize[0x0198] - InheritedSize[0x0198])
class UOnlinePlatformOculus : public UOnlinePlatform
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlinePlatformOculus");
		return ptr;
	}



	void OnFriendsUpdated();
	void OnDeepLinkMessage(const struct FString& ApiName, const struct FString& Message);
};

// Class Pavlov.OnlinePlatformSteam
// 0x0008 (FullSize[0x01A0] - InheritedSize[0x0198])
class UOnlinePlatformSteam : public UOnlinePlatform
{
public:
	unsigned char                                      UnknownData_KREM[0x8];                                     // 0x0198(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlinePlatformSteam");
		return ptr;
	}



	void OnSteamRichPresenceUpdated();
};

// Class Pavlov.OnlineRequest
// 0x00B0 (FullSize[0x00F8] - InheritedSize[0x0048])
class UOnlineRequest : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_JK7U[0xB0];                                    // 0x0048(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineRequest");
		return ptr;
	}



};

// Class Pavlov.OnlineStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOnlineStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineStatics");
		return ptr;
	}



	class UOnlineStats* STATIC_GetOnlineStats(class UObject* WorldContextObject);
	class UOnlinePlatform* STATIC_GetOnlinePlatform(class UObject* WorldContextObject);
	class UOnlineManager* STATIC_GetOnlineManager(class UObject* WorldContextObject);
	class UOnlineLeaderboards* STATIC_GetOnlineLeaderboards(class UObject* WorldContextObject);
	struct FString STATIC_GetLocalUserIdAsString(class UObject* WorldContextObject);
	struct FString STATIC_GetLocalDisplayName(class UObject* WorldContextObject);
};

// Class Pavlov.OnlineStats
// 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
class UOnlineStats : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_2FAH[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnIngestStatsComplete;                                     // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQueryStatsComplete;                                      // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OnlineStats");
		return ptr;
	}



	bool QueryStatsServer(const struct FString& ProductUserId, const struct FString& StatName);
	bool QueryStatsLocal(const struct FString& StatName);
	bool IngestStatsServer(const struct FString& ProductUserIdString, const struct FString& StatName, int StatAmount);
	bool IngestStatsLocal(const struct FString& StatName, int StatAmount);
};

// Class Pavlov.OutOfBoundsComponent
// 0x0050 (FullSize[0x0140] - InheritedSize[0x00F0])
class UOutOfBoundsComponent : public UActorComponent
{
public:
	float                                              DamageGraceTime;                                           // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamagePerTick;                                             // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTickRate;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageScale;                                               // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        GuideMesh;                                                 // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        VignetteMesh;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 SphereMesh;                                                // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          VignetteMaterial;                                          // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOutOfBoundsInfo                            OutOfBoundsInfo;                                           // 0x0120(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimerHandle                                DamageTick_Handle;                                         // 0x0138(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.OutOfBoundsComponent");
		return ptr;
	}



	void SetGuideToLocation(const struct FVector& GuideLocation);
	void RecalculateGuide();
	void PlayDamageSound();
	void OwnerKilled(class AActor* Killed);
	void OutOfBounds_Server(const struct FVector& EscapeLocation, class APavlov_OutOfBoundsVolume* OOBVolume);
	void OnPawnDamaged_Client();
	void OnOutOfBounds();
	void InBounds();
	void DamageTick();
	void AddGuideMesh();
};

// Class Pavlov.Painkillers
// 0x0000 (FullSize[0x04D0] - InheritedSize[0x04D0])
class APainkillers : public AVRItem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Painkillers");
		return ptr;
	}



	bool SetPainkillerDetails(int PillAmount, float HealAmountPerPill);
	int GetNumOfPills();
};

// Class Pavlov.PavlovAIController
// 0x00D8 (FullSize[0x0510] - InheritedSize[0x0438])
class APavlovAIController : public AAIController
{
public:
	unsigned char                                      UnknownData_H2VI[0x40];                                    // 0x0438(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastKnownAimTarget;                                        // 0x0478(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HIXM[0x24];                                    // 0x0484(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             SuppresionSources;                                         // 0x04A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTargetVisible;                                            // 0x04B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_90M7[0x3];                                     // 0x04B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetDistance;                                            // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanEngage;                                                // 0x04C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EAIEngageState                              EngageState;                                               // 0x04C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LL04[0x2];                                     // 0x04C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkillRatio;                                                // 0x04C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkillMultiplier;                                           // 0x04C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5IR9[0x4];                                     // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIPersonality                              Personality;                                               // 0x04D0(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              SwitchTargetCooldown;                                      // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VisibilityCheckInterval;                                   // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuppresedThreashold;                                       // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuppresionCleanUpInterval;                                 // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReactionDelay;                                             // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutOfSightShootingDuration;                                // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovAIController");
		return ptr;
	}



	void SetTargetPawn(class APavlovPawn* TargetPawn);
	void OnPawnCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsSuppressed();
	class APavlovPawn* GetTargetPawn();
};

// Class Pavlov.PavlovAvatarAnimInstance
// 0x00A0 (FullSize[0x0540] - InheritedSize[0x04A0])
class UPavlovAvatarAnimInstance : public UVRAvatarAnimInstance
{
public:
	struct FRotator                                    MovingRotationTarget;                                      // 0x04A0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              MovingRotationLerpRatio;                                   // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSprinting;                                                // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SX8Y[0x3];                                     // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    MovingRotation;                                            // 0x04B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     JointPickup;                                               // 0x04C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     JointGun;                                                  // 0x04CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     JointGunGripped;                                           // 0x04D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandBlendExp;                                              // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FingerLerpExp;                                             // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRightHanded;                                              // 0x04EC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsGrippingGun;                                            // 0x04ED(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasPickupRight;                                           // 0x04EE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasGunRight;                                              // 0x04EF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasPickupLeft;                                            // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasGunLeft;                                               // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GVE[0x2];                                     // 0x04F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HandBlendLeft;                                             // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandBlendRight;                                            // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTR0;                                                      // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTR1;                                                      // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTR2;                                                      // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTR3;                                                      // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTR4;                                                      // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTL0;                                                      // 0x0510(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTL1;                                                      // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTL2;                                                      // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTL3;                                                      // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HTL4;                                                      // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsFingerTracking;                                   // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInVehicle;                                                // 0x0525(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0C7O[0x2];                                     // 0x0526(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    SeatRot;                                                   // 0x0528(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6UNL[0x4];                                     // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               SeatAnim;                                                  // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovAvatarAnimInstance");
		return ptr;
	}



	float GetFingerBlend(bool bRight, Pavlov_EFinger Finger);
};

// Class Pavlov.PavlovCustomGameMode
// 0x0088 (FullSize[0x07C0] - InheritedSize[0x0738])
class APavlovCustomGameMode : public APavlovGameMode
{
public:
	class UPavlovZSpawnCMP*                            ZSpawnCMP;                                                 // 0x0738(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APavlov_GameLogic*                           CustomGameLogic;                                           // 0x0740(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FName, class UClass*>                  PlayerSkins;                                               // 0x0748(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      ChickenClass;                                              // 0x0798(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BanList;                                                   // 0x07A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Whitelist;                                                 // 0x07B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovCustomGameMode");
		return ptr;
	}



	void OnCustomRconCommand(const struct FString& Command);
};

// Class Pavlov.PavlovGameInstance
// 0x0528 (FullSize[0x05C8] - InheritedSize[0x00A0])
class UPavlovGameInstance : public UGameInstance
{
public:
	class USteamworksManager*                          SteamworksManager;                                         // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKGX[0x48];                                    // 0x00A8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PlayerEffectsClass;                                        // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OB8O[0x38];                                    // 0x00F8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTutorial*                                   Tutorial;                                                  // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UServerBrowser*                              ServerBrowser;                                             // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UServerBrowserV2*                            ServerBrowserV2;                                           // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OculusScale;                                               // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VQT[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BuildLabel;                                                // 0x0150(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             HiddenMaps;                                                // 0x0160(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FString>                             HiddenMapsShack;                                           // 0x0170(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UBWN[0x38];                                    // 0x0180(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundSubmix*                                ReverbSubmixGarage;                                        // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                ReverbSubmixWarehouse;                                     // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                ReverbSubmixTunnel;                                        // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIManager*                                  UIManager;                                                 // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatchmaking*                                Matchmaking;                                               // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineManager*                              OnlineManager;                                             // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoiceSource*                                VoiceSource;                                               // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameSessionServer*                          GameSessionServer;                                         // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMixingSettings*                        SoundMixingSettings;                                       // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SoundMixingSettingsClass;                                  // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoiceModerationInstance*                    LocalVoiceModeration;                                      // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ObjectRefBucket;                                           // 0x0210(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSID[0xE8];                                    // 0x0220(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Pavlov_EBuildVersionStatus                         BuildVersionStatus;                                        // 0x0308(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTV;                                                       // 0x0309(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83PK[0x6];                                     // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UReplayManager*                              ReplayManager;                                             // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Exp;                                                       // 0x0318(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SAN[0x4];                                     // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDedicatedServer*                            DedicatedServer;                                           // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UServerStatusHelper*                         ServerStatusHelper;                                        // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BLGA[0x8];                                     // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bFirstBoot;                                                // 0x0338(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R9UO[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MasterServerSessionId;                                     // 0x0340(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopFindingGameServer;                                    // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DGP2[0x7];                                     // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPavlovServerInfo>                   ServerList;                                                // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	Pavlov_EMatchmakingState                           MatchmakingState;                                          // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLZX[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MasterServerUrl;                                           // 0x0370(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerQueryInterval;                                       // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2G0K[0x14];                                    // 0x0384(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PatreonList;                                               // 0x0398(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMenuUniverseChanged;                                     // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchmakingStateChanged;                                 // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQuickmatchFailed;                                        // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyStateChanged;                                       // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerListUpdated;                                       // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetMapListAdvancedResult;                                // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerConnectFailure;                                    // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBuildVersionStatusChanged;                               // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UServerConnector*                            ConnectorInstance;                                         // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTexture*>                            SplashScreenTextures;                                      // 0x0430(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                SplashScreenIndex;                                         // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7Y7O[0x4];                                     // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                SplashScreenHide_Handle;                                   // 0x0448(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JQII[0xF0];                                    // 0x0450(0x00F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UPavlov_Map*>             MapDefinitions;                                            // 0x0540(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4546[0x1A];                                    // 0x0590(0x001A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Pavlov_EGameSessionState                           GameSessionState;                                          // 0x05AA(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVNX[0x5];                                     // 0x05AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorkshop*                                   Workshop;                                                  // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPavlovAdvancedMap>                  AdvancedMapList;                                           // 0x05B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovGameInstance");
		return ptr;
	}



	void UpdateServerList(const struct FString& Map, const struct FString& GameMode, bool bFriendsOnly, bool bPrivateOnly);
	void UpdateNextSplashScreen(bool bInitialSplash);
	void ToggleMenu();
	void TestServerConnect(const struct FString& ConnectURL, const struct FString& MapId, float Delay);
	void ShowPavlovSplash(bool bVisible, bool bFade);
	void SetMutedByProductId(const struct FString& ID, bool bEnabled);
	void SetMuted(class APavlovPlayerState* PlayerState, bool bEnabled);
	void SetMixingChannelVolume(const struct FName& Name, float Volume);
	void SetMatchmakingState(Pavlov_EMatchmakingState NewState);
	void SetItemRotation(float Roll, float Pitch, float Yaw);
	void ServerStartStatusHelper();
	void ServerConnectFailed(Pavlov_EConnectorFailureReason FailureReason);
	void ServerConnectComplete();
	void ServerConnectByURL(const struct FString& URL);
	void ServerConnectByIp(const struct FString& IpString, int Port);
	bool ServerConnect(const struct FServerConnectParams& Params);
	void RetrieveMasterServerSessionId();
	void ResumeShaderPreCompilation();
	void ResetTutorial();
	void ResetPhononScene();
	void ReportServerState();
	bool RemoveMap(const struct FString& UniqueID);
	void RemoveFromRefBucket(class UObject* Object);
	void QuickMatch();
	void QueryForGameSession();
	void OpenMap_Implementation();
	void OpenMap(const struct FString& Map, const struct FString& Options);
	void OnWorkshopSpecificQuery();
	void OnSteamServersConnected();
	void OnSteamLobbyListUpdated();
	void OnSplashScreenLoaded(const struct FDateTime& StartTimestamp);
	void OnServerMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<Engine_ENetworkFailure> FailureType, const struct FString& ErrorString);
	void OnLoginStatusChanged(bool bLoggedIn);
	void OnLobbyLeave();
	void OnLobbyEnter(bool bFailed);
	void OnClientMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnAuthSessionTicketResponse(bool bSucceed, const struct FString& HexAuthTicket);
	void OnAndroidPermisionsGranted(TArray<struct FString> Permissions, TArray<bool> GrantResults);
	void LogoutTest();
	void JoinServer(const struct FString& LobbyId);
	bool IsMutedByProductId(const struct FString& ID);
	bool IsMuted(class APavlovPlayerState* PlayerState);
	void InitClientProxies();
	void HideSplashScreen();
	bool HasGameSession();
	class UVoiceSource* GetVoiceSource();
	class UUIManager* GetUIManager();
	class UTutorial* GetTutorial();
	class USoundMixingSettings* GetSoundMixingSettings();
	class UServerBrowserV2* GetServerBrowserV2();
	class UServerBrowser* GetServerBrowser();
	Pavlov_EOnlineRegion GetOnlineRegion();
	class UOnlineManager* GetOnlineManager();
	float GetOculusScale();
	class UMatchmaking* GetMatchmaking();
	int GetMapVersion(const struct FString& UniqueID);
	void GetMapListAdvanced(int Compatibility, bool bFavoriteOnly);
	TArray<class UPavlov_Map*> GetMapList(int Compatibility);
	class UPavlov_Map* GetMap(const struct FString& UniqueID);
	class UTexture* GetCurrentSplashScreen();
	struct FString GetBuildLabel();
	void DumpLobbyData();
	void DisplayNetworkFailureMessage();
	void DisplayMessageImpl();
	void DisplayMessage(const struct FString& Message, bool bDeferredDelay);
	void CreateLobby();
	void CreateGameSession();
	void CreateCoopLobby();
	class UServerStatusHelper* ClientStartStatusHelper(int ListenPort);
	void CheckPlacementStatus();
	void CheckBuildVersionStatus();
	void CancelServerFind();
	void CancelServerConnect();
	void CancelQuickmatch();
	void AsyncLoadSplashScreens();
	void ApplyOculusBindings();
	void AddToRefBucket(class UObject* Object);
};

// Class Pavlov.PavlovGameState
// 0x02F8 (FullSize[0x0680] - InheritedSize[0x0388])
class APavlovGameState : public AGameState
{
public:
	TArray<class APavlovPlayerState*>                  TempPlayerArray;                                           // 0x0388(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class UClass*, struct FEquipmentData>         EquipmentDataByClassMap;                                   // 0x0398(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FPreloadedSkins>         PreloadedSkins;                                            // 0x03E8(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FServerSettings                             Settings;                                                  // 0x0438(0x0030) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	bool                                               bNoTeams;                                                  // 0x0468(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMovementDisabled;                                         // 0x0469(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoFallDamage;                                             // 0x046A(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLimitedAmmo;                                              // 0x046B(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team0Score;                                                // 0x046C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team1Score;                                                // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundDuration;                                             // 0x0474(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundTime;                                                 // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttackingTeam;                                             // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundWinner;                                               // 0x0480(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoundsLeft;                                                // 0x0484(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchTimePaused;                                          // 0x0488(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2VWE[0x3];                                     // 0x0489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MatchTime;                                                 // 0x048C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  EquipmentCosts;                                            // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScoreboardClass;                                           // 0x0498(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HandMenuClass;                                             // 0x04A0(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      NameTagClass;                                              // 0x04A8(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowNameTags;                                             // 0x04B0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_ECompetitiveMode                            CompetitiveMode;                                           // 0x04B1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreventGrenadePin;                                        // 0x04B2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanReviveEnemies;                                         // 0x04B3(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPavlovGameModeType                    GameModeType;                                              // 0x04B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZAL[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBuyRestrictions                            BuyRestrictions;                                           // 0x04B8(0x0140) (Net, NativeAccessSpecifierPublic)
	struct FString                                     BuyMenuScript;                                             // 0x05F8(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BalancingCSV;                                              // 0x0608(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  EquipmentTable;                                            // 0x0618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  VehicleTable;                                              // 0x0620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  LootMeshTable;                                             // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               EquipmentIndexCache;                                       // 0x0630(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKillfeedEntry>                      Killfeed;                                                  // 0x0640(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCosmeticTickManagerComponent*               CosmeticTickManager;                                       // 0x0650(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVRAsyncLoader*                              AsyncLoader;                                               // 0x0658(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0660(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPinProtected;                                             // 0x0664(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EHolidays                                   Holiday;                                                   // 0x0665(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W1FX[0x2];                                     // 0x0666(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnKillfeedEntry;                                           // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPavlov_GlobalInfo*                          GlobalInfo;                                                // 0x0678(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovGameState");
		return ptr;
	}



	void UnpauseMatchTime();
	void SetGlobalInfo(class UPavlov_GlobalInfo* GI);
	void SetAttackingTeam(bool Team0);
	void ResetMatchTime(bool bPause);
	void ResetBuyRestrictions();
	bool PreloadSkin(const struct FName& ItemName, int SkinFamilyId);
	void PauseMatchTime();
	void OnSkinPreloaded(const struct FName& ItemName, int SkinFamilyId);
	void OnSkinLoaded(class AActor* Item);
	void OnRep_GlobalInfo();
	void OnRep_BalancingCSV();
	bool OnModkitLoadLootMeshAsync(const struct FAsyncLoadLootMesh& LoadLootMesh);
	void OnGetVehicleClassToSpawnWRef__DelegateSignature(class UClass* VehicleClass, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	void OnGetVehicleClassToSpawn__DelegateSignature(class UClass* VehicleClass, const struct FTransform& SpawnTransform, int TeamId);
	void OnGetVehicleClass__DelegateSignature(class UClass* VehicleClass);
	void MulticastOnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	void ModkitLootLoaded(const struct FAsyncLoadLootMesh& LoadLootMesh);
	void LootLoaded(const struct FScriptDelegate& LoadedDelegate);
	bool LoadSkinForItem(class APavlovPlayerState* PavPlayerState, class UClass* ItemClass, class AVRItem* Item);
	bool LoadSkin(class APavlovPlayerState* PavPlayerState, const struct FName& ItemName, class AActor* Item);
	void LoadedVehicleClassToSpawnWRef(const struct FScriptDelegate& OnVehicleClassToSpawnWRefLoaded, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	void LoadedVehicleClassToSpawn(const struct FScriptDelegate& OnVehicleClassToSpawnLoaded, const struct FTransform& SpawnTransform, int TeamId);
	void LoadedVehicleClass(const struct FScriptDelegate& OnVehicleClassLoaded);
	void LoadBalanceTableAsync();
	bool IsVehicleNameValid(const struct FName& VehicleName);
	bool IsTeamAbleToBuy(const struct FName& EquipmentName, int TeamId);
	bool IsSkinPreloaded(const struct FName& ItemName, int SkinFamilyId);
	void InitializeCosmeticTickActors();
	bool GetVehicleClassWRef(const struct FScriptDelegate& OnVehicleClassToSpawnWRefLoaded, const struct FAsyncVehicleSpawnData& AsyncVehicleSpawnData);
	bool GetVehicleClassToSpawnAsync(const struct FName& VehicleName, const struct FScriptDelegate& OnVehicleClassToSpawnLoaded, const struct FTransform& SpawnTransform, int TeamId);
	bool GetVehicleClassByNameAsync(const struct FName& VehicleName, const struct FScriptDelegate& OnVehicleClassLoaded);
	class UClass* GetVehicleClassByName(const struct FName& VehicleName);
	int GetTeamScore(int TeamId);
	void GetTeamArray(TArray<class APavlovPlayerState*>* TeamArray, int TeamId);
	TArray<struct FName> GetSpawnableEquipmentNames();
	void GetSortedPlayerArray(TArray<class APavlovPlayerState*>* SortedPlayerArray, int FilterByTeamId);
	struct FString GetPlayerStringId(class APavlovPlayerState* PlayerState);
	class APavlovPlayerState* GetPlayerStateByStringId(const struct FString& StringId);
	class APavlovPlayerState* GetPlayerByScore(int Index, int TeamId);
	unsigned char GetMaxPurchasesPerPlayer(const struct FName& EquipmentName);
	Pavlov_EMatchResult GetMatchResult();
	bool GetLootMesh(const struct FName& LootName, const struct FScriptDelegate& OnLoaded);
	TArray<struct FName> GetEquipmentNames();
	struct FName GetEquipmentNameByIndex(int Index);
	struct FName GetEquipmentNameByClass(class UClass* ItemClass);
	int GetEquipmentMagCount(const struct FName& EquipmentName);
	int GetEquipmentKillBonus(const struct FName& EquipmentName);
	int GetEquipmentIndexByName(const struct FName& EquipmentName);
	struct FEquipmentData GetEquipmentDataByClass(class UClass* ItemClass, bool* bSuccess);
	struct FEquipmentData GetEquipmentData(const struct FName& EquipmentName, bool* bSuccess);
	int GetEquipmentCost(const struct FName& EquipmentName);
	class UClass* GetEquipmentClassByName(const struct FName& EquipmentName);
	class UVRAsyncLoader* GetAsyncLoader();
	void DisplayMatchStateOverlay(class UClass* OverlayClass);
	bool CanRemoveAttachments();
	bool ArePlayersEnemies(class APlayerState* A, class APlayerState* B);
};

// Class Pavlov.PavlovGameUserSettings
// 0x0138 (FullSize[0x0250] - InheritedSize[0x0118])
class UPavlovGameUserSettings : public UGameUserSettings
{
public:
	float                                              PlayerHeight;                                              // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayerCrouchHeight;                                        // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayerRightHanded;                                        // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCalibrated;                                               // 0x0121(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOOBLocomotion;                                            // 0x0122(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTwoHandToggle;                                            // 0x0123(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAutoUngrip;                                               // 0x0124(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLegacyGrip;                                               // 0x0125(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSnapTurnEnabled;                                          // 0x0126(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMountFriendly;                                            // 0x0127(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EOnlineRegion                               PrimaryRegion;                                             // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHideFullServers;                                          // 0x0129(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHideEmptyServers;                                         // 0x012A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHidePinLockedServers;                                     // 0x012B(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EServerSearchType                           ServerSearchType;                                          // 0x012C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EServerSortType                             ServerSortType;                                            // 0x012D(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UIIK[0x2];                                     // 0x012E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             GMFilters;                                                 // 0x0130(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FString>                             GMFiltersV2;                                               // 0x0140(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFavoriteServer>                     FavoriteServers;                                           // 0x0150(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FString>                             RegionFilters;                                             // 0x0160(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                               bForceNoPostProcess;                                       // 0x0170(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAutoSwapHands;                                            // 0x0171(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLeftEyeRendering;                                         // 0x0172(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSwapControllers;                                          // 0x0173(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bVirtualStock;                                             // 0x0174(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EGripMode                                   GripModeVive;                                              // 0x0175(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EGripMode                                   GripModeOculus;                                            // 0x0176(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSmoothTurn;                                               // 0x0177(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SmoothTurnRate;                                            // 0x0178(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_ECustomAction                               MainHandAction;                                            // 0x017C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_ECustomAction                               OffHandAction;                                             // 0x017D(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAutoSprint;                                               // 0x017E(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLiteFootStepHaptics;                                      // 0x017F(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLockInventory;                                            // 0x0180(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHeadLocomotion;                                           // 0x0181(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFreeSpectating;                                           // 0x0182(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6RM7[0x5];                                     // 0x0183(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpectatorViews>                     SpectatorViews;                                            // 0x0188(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                               bInvertTouchpad;                                           // 0x0198(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bArmKillfeed;                                              // 0x0199(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WPC5[0x6];                                     // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VoiceDevice;                                               // 0x01A0(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FString>                             FavoriteMaps;                                              // 0x01B0(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                               bRealTimeReverb;                                           // 0x01C0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseAudioThread;                                           // 0x01C1(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNoAmbisonics;                                             // 0x01C2(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSwapMenuScoreboard;                                       // 0x01C3(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EGripMode                                   GripMode;                                                  // 0x01C4(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	VRFramework_EVRSmoothLocomotionMode                SmoothLocomotionMode;                                      // 0x01C5(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EGoreLevel                                  GoreLevel;                                                 // 0x01C6(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QJQM[0x1];                                     // 0x01C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GrabForceThreashold;                                       // 0x01C8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseGrabForce;                                             // 0x01CC(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_56W2[0x3];                                     // 0x01CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartUpMap;                                                // 0x01D0(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bForceTubeHaptics;                                         // 0x01E0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHapticsSuit;                                              // 0x01E1(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseAdvancedVehicleInput;                                  // 0x01E2(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHideAmmoCounter;                                          // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMicMuted;                                                 // 0x01E4(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnScreenEffects;                                          // 0x01E5(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1PSG[0x2];                                     // 0x01E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           PavlovVersion;                                             // 0x01E8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SNFN[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHandsSwitched;                                           // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnVirtualStockChanged;                                     // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnArmKillfeedChanged;                                      // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAdvancedVehicleInputChanged;                             // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScreenEffectsChanged;                                    // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MutedPlayers;                                              // 0x0240(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovGameUserSettings");
		return ptr;
	}



	bool UseOOBLocomotion();
	bool UseGrabForce();
	bool ShouldSwapControllers();
	void SetVoiceDevice(const struct FString& DeviceURL);
	void SetVirtualStock(bool bEnabled);
	void SetUseGrabForce(bool bEnabled);
	void SetUseAudioThread(bool bEnabled);
	void SetTwoHandToggle(bool bEnabled);
	void SetTouchpadInverted(bool bInverted);
	void SetSwapControllers(bool bEnabled);
	void SetStartUpMap(const struct FString& NewStartUpMap);
	void SetSnapTurn(bool bEnabled);
	void SetSmoothTurnRate(float Rate);
	void SetSmoothTurn(bool bEnabled);
	void SetSmoothLocomotionMode(VRFramework_EVRSmoothLocomotionMode NewMode);
	void SetServerSortType(Pavlov_EServerSortType SortType);
	void SetServerSearchType(Pavlov_EServerSearchType SearchType);
	void SetResolutionQuality(float Quality);
	void SetRegionFilters(TArray<struct FString> Filters);
	void SetRealTimeReverb(bool bEnabled);
	void SetPrimaryRegion(Pavlov_EOnlineRegion Region);
	void SetPlayerRightHanded(bool bRightHanded);
	void SetPlayerHeight(float Height);
	void SetOOBLocomotion(bool bUse);
	void SetOnScreenEffectsEnabled(bool bEnabled);
	void SetOffHandAction(Pavlov_ECustomAction Action);
	void SetNoAmbisonics(bool bEnabled);
	void SetMountFriendly(bool bFriendly);
	void SetMicMuted(bool bMuted);
	void SetMenuScoreboardSwaped(bool bEnabled);
	void SetMapAsFavoriteById(const struct FString& ID, bool bEnabled);
	void SetMapAsFavorite(class UPavlov_Map* Map, bool bEnabled);
	void SetMainHandAction(Pavlov_ECustomAction Action);
	void SetLockInventory(bool bEnabled);
	void SetLiteFootStepHaptics(bool bEnabled);
	void SetLegacyGrip(bool bEnabled);
	void SetLeftEyeRendering(bool bEnabled);
	void SetHidePinLockedServers(bool bHideLocked);
	void SetHideFullServers(bool HideFull);
	void SetHideEmptyServers(bool bHideEmpty);
	void SetHideAmmoCount(bool bHidden);
	void SetHeadLocomotion(bool bEnabled);
	void SetGripMode(Pavlov_EGripMode NewGripMode);
	void SetGrabForceThreashold(float Value);
	void SetGoreLevel(Pavlov_EGoreLevel Level);
	void SetGMFilters(TArray<struct FString> Filters);
	void SetFreeSpectatingEnabled(bool bEnabled);
	void SetForceTubeEnabled(bool bEnabled);
	void SetFavoriteServers(TArray<struct FFavoriteServer> Servers);
	void SetbHapticsSuitEnabled(bool bEnabled);
	void SetAutoUngrip(bool bEnabled);
	void SetAutoSwapHandsEnabled(bool bEnabled);
	void SetAutoSprint(bool bEnabled);
	void SetArmKillfeedEnabled(bool bEnabled);
	void SetAdvancedVehicleInput(bool bUseAdvanced);
	void SendAnalyticEvents();
	void SaveSpectatorView(class UObject* WorldContextObject, int Index, const struct FTransform& Transform);
	void MarkAsCalibrated();
	bool IsTwoHandToggleEnabled();
	bool IsTouchpadInverted();
	bool IsSnapTurnEnabled();
	bool IsSmoothTurnEnabled();
	bool IsPostProcessDisabled();
	bool IsPlayerRightHanded();
	bool IsOnScreenEffectsEnabled();
	bool IsMountFriendly();
	bool IsMicMuted();
	bool IsMenuScoreboardSwapped();
	bool IsLiteFootStepHapticsEnabled();
	bool IsLeftEyeRendering();
	bool IsHeadLocomotionEnabled();
	bool IsFreeSpectatingEnabled();
	bool IsForceTubeEnabled();
	bool IsFavoriteMapById(const struct FString& ID);
	bool IsFavoriteMap(class UPavlov_Map* Map);
	bool IsCalibrated();
	bool IsBHapticsSuitEnabled();
	bool IsAutoUngripEnabled();
	bool IsAutoSwapHandsEnabled();
	bool IsAutoSprintEnabled();
	bool IsArmKillfeedEnabled();
	bool IsAmmoCounterHidden();
	bool IsAdvancedVehicleInputEnabled();
	bool HasLegacyGrip();
	struct FString GetVoiceDevice();
	bool GetVirtualStock();
	bool GetUseAudioThread();
	struct FString GetStartUpMap();
	struct FTransform GetSpectatorView(class UObject* WorldContextObject, int Index);
	float GetSmoothTurnRate();
	VRFramework_EVRSmoothLocomotionMode GetSmoothLocomotionMode();
	Pavlov_EServerSortType GetServerSortType();
	Pavlov_EServerSearchType GetServerSearchType();
	TArray<struct FString> GetRegionFilters();
	bool GetRealTimeVoiceReverb();
	Pavlov_EOnlineRegion GetPrimaryRegion();
	float GetPlayerHeight();
	Pavlov_ECustomAction GetOffHandAction();
	bool GetNoAmbisonics();
	Pavlov_ECustomAction GetMainHandAction();
	bool GetLockInventory();
	bool GetHidePinLockedServers();
	bool GetHideFullServers();
	bool GetHideEmptyServers();
	Pavlov_EGripMode GetGripMode();
	float GetGrabForceThreashold();
	Pavlov_EGoreLevel GetGoreLevel();
	TArray<struct FString> GetGMFilters();
	TArray<struct FFavoriteServer> GetFavoriteServers();
	void ForceNoPostProcessing(bool bEnabled);
};

// Class Pavlov.PavlovHandAnimInstance
// 0x0080 (FullSize[0x0450] - InheritedSize[0x03D0])
class UPavlovHandAnimInstance : public UVRControllerAnimInstance
{
public:
	float                                              IndexSafeTriggerTimer;                                     // 0x03D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AT6R[0x54];                                    // 0x03D4(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     IKTriggerLocation;                                         // 0x0428(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIKTriggerAvailable;                                       // 0x0434(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9FPI[0x3];                                     // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    TriggerFingerRotation;                                     // 0x0438(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bImmersiveMode;                                            // 0x0444(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZHU[0x3];                                     // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               DefaultImmersiveSequence;                                  // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovHandAnimInstance");
		return ptr;
	}



	void SetDefaultGripSequence(class UAnimSequence* UpdateSequence, bool bImmersiveSequence);
	float GetFingerBlend(Pavlov_EFinger Finger);
};

// Class Pavlov.PavlovHUD
// 0x0000 (FullSize[0x0418] - InheritedSize[0x0418])
class APavlovHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovHUD");
		return ptr;
	}



};

// Class Pavlov.PavlovInventory
// 0x0030 (FullSize[0x0478] - InheritedSize[0x0448])
class APavlovInventory : public AVRInventory
{
public:
	struct FScriptMulticastDelegate                    OnLowAmmo;                                                 // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USoundCue*                                   MagazineGrabSound;                                         // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   OutOfAmmoSound;                                            // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   LastMagazineGrabSound;                                     // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHapticFeedbackEffect_Base*                  MagazineGrabHaptic;                                        // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovInventory");
		return ptr;
	}



};

// Class Pavlov.PavlovLevelScriptActor
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class APavlovLevelScriptActor : public ALevelScriptActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovLevelScriptActor");
		return ptr;
	}



};

// Class Pavlov.PavlovLobby
// 0x00F0 (FullSize[0x0290] - InheritedSize[0x01A0])
class UPavlovLobby : public UOnlineLobby
{
public:
	unsigned char                                      UnknownData_UQ1H[0x58];                                    // 0x01A0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPavlovGameInstance*                         GameInstance;                                              // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Pavlov_ELobbyState                                 LocalState;                                                // 0x0200(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D31T[0x3];                                     // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HostLocallyTimer;                                          // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SanityTimer;                                               // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EB3Z[0x15];                                    // 0x020C(0x0015) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHostLocally;                                              // 0x0221(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSVY[0x6];                                     // 0x0222(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FServerSettings                             ServerSettings;                                            // 0x0228(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0258(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapLabel;                                                  // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_ELobbyState                                 State;                                                     // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EServerHostingType                          HostingType;                                               // 0x0289(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillWithBots;                                             // 0x028A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConnecting;                                               // 0x028B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CompetitiveMode;                                           // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovLobby");
		return ptr;
	}



	void Start();
	void SetWantToStart(bool bEnabled);
	void SetServerSettings(const struct FServerSettings& NewServerSettings);
	void SetRegion(const struct FString& NewRegion);
	void SetPin(const struct FString& Pin);
	void SetMap(const struct FString& MapName);
	void SetHostingType(Pavlov_EServerHostingType NewHostingType);
	void SetGameMode(const struct FString& NewGameMode);
	void SetFillWithBots(bool bEnabled);
	void SetCompetitiveMode(int CompMode);
	void RequestTeam(int TeamId);
	void OnMapDownloadProgress(float Progress);
	void OnMapDownloaded(bool bSucceed, const struct FString& ID);
	void MuteMember(int Index, bool bEnabled);
	bool IsPinProtected();
	bool IsMemberMuted(int Index);
	struct FString GetRegion();
	struct FString GetPin();
	int GetMemberTeam(int Index);
	int GetLocalUserIndex();
	void FindServer();
	bool DoesMemberWantsToStart(int Index);
	void CheckSessionStatus();
	void CancelServerFind();
};

// Class Pavlov.PavlovLocalPlayer
// 0x0000 (FullSize[0x01C8] - InheritedSize[0x01C8])
class UPavlovLocalPlayer : public ULocalPlayer
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovLocalPlayer");
		return ptr;
	}



};

// Class Pavlov.PavlovMinimalGameMode
// 0x0010 (FullSize[0x0420] - InheritedSize[0x0410])
class APavlovMinimalGameMode : public AGameMode
{
public:
	class UClass*                                      GhostPawnClass;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAsyncLoader;                                           // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_996R[0x7];                                     // 0x0419(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovMinimalGameMode");
		return ptr;
	}



};

// Class Pavlov.PavlovMinimalGameState
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class APavlovMinimalGameState : public APavlovGameState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovMinimalGameState");
		return ptr;
	}



};

// Class Pavlov.FallDamageType
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UFallDamageType : public UDamageType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.FallDamageType");
		return ptr;
	}



};

// Class Pavlov.PavlovMovementComponent
// 0x00A0 (FullSize[0x07C0] - InheritedSize[0x0720])
class UPavlovMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData_X8K3[0x18];                                    // 0x0720(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastSeatYaw;                                               // 0x0738(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SEX7[0x11];                                    // 0x073C(0x0011) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Pavlov_EParachuteState                             ParachuteState;                                            // 0x074D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6LVQ[0x2];                                     // 0x074E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FallDamage;                                                // 0x0750(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVehicleReCenter;                                          // 0x0754(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVehicleRecenterRotation;                                  // 0x0755(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyFallDamage;                                          // 0x0756(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5Y3[0x1];                                     // 0x0757(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AiSpeedMultiplier;                                         // 0x0758(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRoomScaleLocomotion;                                      // 0x075C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_79QJ[0x3];                                     // 0x075D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FreeFallThreashold;                                        // 0x0760(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FreeFallMaxLateralSpeed;                                   // 0x0764(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FreeFallAirControlBoost;                                   // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FallDamagePerSecond;                                       // 0x076C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFallDamage;                                         // 0x0770(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoParachuteAltitude;                                     // 0x0774(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParachuteDeceleration;                                     // 0x0778(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParachuteTerminalVelocity;                                 // 0x077C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParachuteAirControlBoost;                                  // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeploymentDuration;                                        // 0x0784(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DeploymentSound;                                           // 0x0788(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SprintSpeedMultiplier;                                     // 0x0790(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SprintAccelerationMultiplier;                              // 0x0794(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ADSSpeedMultiplier;                                        // 0x0798(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowParachuteMode;                                       // 0x079C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_700M[0x3];                                     // 0x079D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SeatOffset;                                                // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     LastHMDLocation;                                           // 0x07A4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HMDSpeed;                                                  // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AHMH[0xC];                                     // 0x07B4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovMovementComponent");
		return ptr;
	}



	void ServerDeployParachute();
	void OnRep_PrachuteState();
	void MulticastOnParachuteDeployed();
	void EnableParachuteMode(bool bEnableParachuteMode);
};

// Class Pavlov.PavlovPawn
// 0x05C0 (FullSize[0x10B0] - InheritedSize[0x0AF0])
class APavlovPawn : public APavlovPawnBase
{
public:
	unsigned char                                      UnknownData_0CSA[0x18];                                    // 0x0AF0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVRAvatarComponent*                          Avatar;                                                    // 0x0B08(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVHealthComponent*                           HealthComponent;                                           // 0x0B10(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetComponent*                            PlayerInfo;                                                // 0x0B18(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVRSelectionComponent*                       SelectionComponent;                                        // 0x0B20(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDamageTrackerComponent*                     DamageTracker;                                             // 0x0B28(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedSourceBusComponent*                FootStepAudio;                                             // 0x0B30(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedSourceBusComponent*                LeftCameraAudio;                                           // 0x0B38(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedSourceBusComponent*                RightCameraAudio;                                          // 0x0B40(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAvatarSkin*                                 AvatarSkin;                                                // 0x0B48(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WST4[0x10];                                    // 0x0B50(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEquipmentDefinition                        EquipmentToLoad;                                           // 0x0B60(0x0048) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S5V8[0x18];                                    // 0x0BA8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFingerTracking                             FingerTrackingSent;                                        // 0x0BC0(0x0003) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0K30[0x5];                                     // 0x0BC3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKillInfo                                   LatestKillInfo;                                            // 0x0BC8(0x0070) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0HB6[0x8];                                     // 0x0C38(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StopSprintTimer;                                           // 0x0C40(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlaySpaceExploitKillTimer;                                 // 0x0C44(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHolsterComponent*                           MainWeaponHolster;                                         // 0x0C48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWatch*                                      WatchComponent;                                            // 0x0C50(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVoiceComponent*                             Voice;                                                     // 0x0C58(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2FSX[0x20];                                    // 0x0C60(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWoundInfo>                          DelayedWoundInfoList;                                      // 0x0C80(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UParticleSystemComponent*>            HeadshotParticleInstances;                                 // 0x0C90(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UAudioComponent*>                     HeadshotSoundInstances;                                    // 0x0CA0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UWHC[0x10];                                    // 0x0CB0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNameTag*                                    NameTag;                                                   // 0x0CC0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFingerTracking                             FingerTracking;                                            // 0x0CC8(0x0003) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XROC[0x5];                                     // 0x0CCB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerAvatar                               AvatarSkinInfo;                                            // 0x0CD0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SlowTimer;                                                 // 0x0CE0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CorpseTime;                                                // 0x0CE4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvulnerable;                                             // 0x0CE8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RadioChannel;                                              // 0x0CE9(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XPX[0x2];                                     // 0x0CEA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Armour;                                                    // 0x0CEC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HelmetArmour;                                              // 0x0CF0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0CF4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVoiceActive;                                              // 0x0CF8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5NKQ[0x3];                                     // 0x0CF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpactWeight;                                              // 0x0CFC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ImpactCurve;                                               // 0x0D00(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BloodSplatClass;                                           // 0x0D08(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BloodSplatClassShack;                                      // 0x0D10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBloodSplats;                                            // 0x0D18(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MX9J[0x4];                                     // 0x0D1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             HeadshotParticle;                                          // 0x0D20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             HeadshotBleedParticle;                                     // 0x0D28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HeadshotBleedSound;                                        // 0x0D30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HeadshotSound;                                             // 0x0D38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HeadshotSound2D;                                           // 0x0D40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FallDamageSound;                                           // 0x0D48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HeadBoneName;                                              // 0x0D50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChestBoneName;                                             // 0x0D58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             HelmetHitParticle;                                         // 0x0D60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HelmetHitSound;                                            // 0x0D68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnProtectionDuration;                                   // 0x0D70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlaySpaceLimits;                                           // 0x0D74(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnderPlaySpaceExploit;                                    // 0x0D80(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMFF[0x3];                                     // 0x0D81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlaySpaceExploitKillDelay;                                 // 0x0D84(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCameraClipProtectionEnabled;                              // 0x0D88(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ME5C[0x3];                                     // 0x0D89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CameraClipThreashold;                                      // 0x0D8C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraClipMaxDuration;                                     // 0x0D90(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2FHU[0x4];                                     // 0x0D94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   WearArmourSound;                                           // 0x0D98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WearHelmetSound;                                           // 0x0DA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSlowDuration;                                           // 0x0DA8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitSlowDuration;                                           // 0x0DAC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlowMultiplier;                                            // 0x0DB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T5PA[0x4];                                     // 0x0DB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               SlowBones;                                                 // 0x0DB8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class USoundCue*                                   HitSound;                                                  // 0x0DC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HitSoundVictim;                                            // 0x0DD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HitSoundShooter;                                           // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ZombieHitSound;                                            // 0x0DE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             HitEffect;                                                 // 0x0DE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             HitEffectVictim;                                           // 0x0DF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        HitMontages;                                               // 0x0DF8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class USoundCue*                                   RogerSound;                                                // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WatchClass;                                                // 0x0E10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ADSZThreashold;                                            // 0x0E18(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQHA[0x4];                                     // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          XRayMaterialTeam0;                                         // 0x0E20(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          XRayMaterialTeam1;                                         // 0x0E28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           VoiceAttenuation;                                          // 0x0E30(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                                 VoiceSoundClass;                                           // 0x0E38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               VoiceEffectChain;                                          // 0x0E40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 VoiceVolumeCurve;                                          // 0x0E48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSourceBus*                             RadioSourceBus;                                            // 0x0E50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                                 RadioSoundClass;                                           // 0x0E58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPickDisableOnDead;                                        // 0x0E60(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bXRayEnabled;                                              // 0x0E61(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceFirstPerson;                                         // 0x0E62(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTEC[0x5];                                     // 0x0E63(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              DefaultAvatarSkins;                                        // 0x0E68(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultNameTagClass;                                       // 0x0E78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          RevivePlayerState;                                         // 0x0E80(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TazerClass;                                                // 0x0E88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              GenerateHitGunClasses;                                     // 0x0E90(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      PlayerbHaptics;                                            // 0x0EA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<PavlovProxy_ELimitedAmmoType, class UClass*>  LimitedAmmoComps;                                          // 0x0EA8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UDamageEffectComponent*                      DamageEffectComp;                                          // 0x0EF8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnVoiceChanged;                                            // 0x0F00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRadioToggle;                                             // 0x0F10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAvatarSkinChanged;                                       // 0x0F20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashed;                                                 // 0x0F30(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOwnerImpactDamage;                                       // 0x0F40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGrenadeCooked;                                           // 0x0F50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class APavlov_PlayerProxy*                         WorkshopProxy;                                             // 0x0F60(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  AvatarSkinTable;                                           // 0x0F68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAISlotManager*                              AISlotManager;                                             // 0x0F70(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastMagGrabTime;                                           // 0x0F78(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4G5N[0x4];                                     // 0x0F7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TeleportHandle;                                            // 0x0F80(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimeSinceLastFootStep;                                     // 0x0F88(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FootStepTimer;                                             // 0x0F8C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SprintFootStepCount;                                       // 0x0F90(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArmorRattlePlayed;                                        // 0x0F94(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7UUE[0x3];                                     // 0x0F95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurfaceFXAsset*                             FootStepSneak;                                             // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             FootStepWalk;                                              // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             FootStepRun;                                               // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ArmorRattleSound;                                          // 0x0FB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DefaultFootStepSound;                                      // 0x0FB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DefaultRunFootStepSound;                                   // 0x0FC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ConcreteFootStepSound;                                     // 0x0FC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ConcreteRunFootStepSound;                                  // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MetalFootStepSound;                                        // 0x0FD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MetalRunFootStepSound;                                     // 0x0FE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   CarpetFootStepSound;                                       // 0x0FE8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   CarpetRunFootStepSound;                                    // 0x0FF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FabricFootStepSound;                                       // 0x0FF8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FabricRunFootStepSound;                                    // 0x1000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WoodFootStepSound;                                         // 0x1008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WoodRunFootStepSound;                                      // 0x1010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GlassFootStepSound;                                        // 0x1018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GlassRunFootStepSound;                                     // 0x1020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WaterFootStepSound;                                        // 0x1028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WaterRunFootStepSound;                                     // 0x1030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DirtFootStepSound;                                         // 0x1038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DirtRunFootStepSound;                                      // 0x1040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHapticFeedbackEffect_Base*                  FootStepHaptic;                                            // 0x1048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FootStepInterval;                                          // 0x1050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFootStepInterval;                                       // 0x1054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SneakSpeedMul;                                             // 0x1058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJ9I[0x4];                                     // 0x105C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimestampTeleport                          LastTeleport;                                              // 0x1060(0x0020) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QCZS[0x8];                                     // 0x1080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RagdollMinDamping;                                         // 0x1088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RagdollLifeDuration;                                       // 0x108C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RagdollLife;                                               // 0x1090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WMJY[0x4];                                     // 0x1094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FConstraintProfileProperties>        ConstraintDefaultProfiles;                                 // 0x1098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P5D9[0x8];                                     // 0x10A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovPawn");
		return ptr;
	}



	void WearKevlar(bool bWithHelmet);
	void WearHelmet();
	void UpdateLocomotion();
	bool TryStackAmmoBoxes(class AAmmoBox* AmmoBox);
	void ToggleRadio(bool bEnabled);
	void TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	class UAudioComponent* SpawnHitFeedbackSound(Pavlov_EHitFeedbackType Type);
	void SpawnHeadshotEffect(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* WorldHitLocation, struct FVector* WorldHitDirection);
	void ShowLimitedAmmoCounter(bool bCounterVisible);
	void SetupWatch(class UWatch* WatchComp);
	void SetupLimitedAmmoComp(PavlovProxy_ELimitedAmmoType LimitedAmmoMode);
	void SetTeamId(int NewTeamId);
	void SetPlayerSkin(const struct FName& PlayerSkin);
	bool SetPainkillerDetails(class AActor* Painkillers, int NumOfPills, float HealAmount);
	bool SetNumOfSyringeRevives(class AActor* Syringe, int NumOfRevives);
	void SetModdingVoiceAttn();
	void SetAvatarSkin(class UClass* NewSkinClass, const struct FName& CustomMesh);
	void ServerUpdateFingerTracking(const struct FFingerTracking& Data);
	void ServerSetRadioChannel(unsigned char Channel);
	void ServerReportFallDamage(float Damage);
	void ServerGiveMagazine(bool bOffHand);
	void ServerGive(const struct FName& EquipmentName, const struct FName& Skin);
	void ServerDeployParachute();
	void SanityCheck();
	bool RevivePawn();
	void Revived_Client();
	void ReplenishPlayerAmmo(bool bSpawnKnife);
	int RemoveAmmo(const struct FName& AmmoId, int RemoveAmount);
	void ProxyTrigger(bool bDominantController);
	void ProxyGrab(bool bDominantController);
	void OverrideVoiceAttn(class USoundAttenuation* NewAttn);
	void OnWW2AvatarLoaded_Owner();
	void OnTeamIdChanged();
	void OnRevive(class AActor* OwnerActor);
	void OnRep_TeamId();
	void OnRep_RadioChannel();
	void OnRep_PlayerProxy();
	void OnRep_LastTeleport();
	void OnRep_HelmetArmour();
	void OnRep_AvatarSkinInfo();
	void OnRep_Armour();
	void OnPawnRevived();
	void OnKill(class AActor* OwnerActor);
	void OnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void OnHitByTazer();
	void OnHitByGun(class UClass* GunClass, class AController* HitInstigator, const struct FVector& HitLocation);
	void OnDismember(const struct FWoundInfo& WoundInfo, const struct FPreBakedWound& PreBakedWound);
	void OnCameraClipChanged(bool bClipping);
	void NotifyProxySkinChanged();
	void MulticastTeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	void MulticastResetPawn();
	void MulticastOnZombieHit();
	void MulticastOnWearArmour();
	void MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin);
	void MulticastOnMagazineGrabbed(bool bDominant);
	void MulticastOnImpactDamage(const struct FImpactDamage& ImpactDamage);
	void MulticastOnHitSlow();
	void MulticastOnHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Normal, class APlayerState* Shooter, bool bOnArmor);
	void MulticastOnHelmetHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Direction);
	void MulticastOnHelmetBlownoff();
	void MulticastOnHeadshot(class APlayerState* Killer, const struct FVector& HitLocation, const struct FVector& HitDirection, unsigned char WoundRate);
	void MulticastOnFallDamage();
	void MulticastAdjustAvatarScale(float PlayerHeight);
	void ModKitLeaveVehicle();
	bool ModkitIsInVehicle();
	void LoadEquipment(const struct FEquipmentDefinition& definition);
	void KillByDamageType(class UClass* DamageType, class AController* KilledByInstigator, class AActor* KilledBy);
	bool IsSprinting();
	bool IsPickupDisabled();
	bool IsLobbyLeaderModkit();
	bool IsDead();
	bool IsCarryingBomb();
	bool IsCameraClipping();
	bool IsArmExploiting(bool bRight);
	void HealEffect(float HealTime, class UMaterialInterface* HealMaterial);
	class AActor* HasItem(const struct FName& Item);
	void GorePawn(const struct FImpactDamage& Impact);
	class AVRItem* GiveItemInventory(const struct FGiveItemInventoryParams& Params);
	class AVRItem* GiveItem(const struct FGiveItemParams& Params);
	void GiveBomb(class ABomb* Bomb);
	void Give(const struct FName& EquipmentName, const struct FName& Skin, bool bWithAmmo, bool bByBuyMenu);
	TArray<struct FName> GetWeaponAttachments(class AActor* Weapon);
	struct FName GetWeaponAmmoType(class AActor* Weapon);
	class UWatch* GetWatch();
	class UVehicleOccupant* GetVehicleOccupant();
	class USkeletalMeshComponent* GetSkinSkeleton();
	class UHolsterComponent* GetSideWeaponHolster();
	int GetNumOfSyringeRevives(class AActor* Syringe);
	int GetNumOfPainkillerPills(class AActor* Painkillers);
	class UHolsterComponent* GetMainWeaponHolster();
	class ULimitedAmmoComponent* GetLimitedAmmoComponent();
	class UHolsterComponent* GetKnifeHolster();
	class AVRItem* GetItemOfClass(class UClass* ItemClass, bool bSkipHands, bool bSubClass);
	bool GetInventorySlotsVis();
	class AVRItem* GetHoldingItemByName(const struct FName& ItemName);
	float GetHealth();
	void GetHeadSpaceHitVectors(const struct FVector& HitLocation, const struct FVector& HitDirection, struct FVector* HeadSpaceHitLocation, struct FVector* HeadSpaceHitDirection);
	TArray<class UHolsterComponent*> GetGrenadeHolsters();
	bool GetEquipmentByName(const struct FName& EquipmentName, struct FEquipmentDefinition* definition);
	unsigned char GetCompatibleSlot(const struct FName& Item);
	class UHolsterComponent* GetBombHolster();
	class UAvatarSkin* GetAvatarSkin();
	struct FName GetAmmoTypeName(VRFramework_EAmmoType AmmoType);
	class UVRPocketComponent* GetAmmoPocket();
	int GetAmmoAmount(const struct FName& AmmoId);
	void FinishExitVehicleServer();
	void FinishExitVehicleClient();
	void ExitVehicle(const struct FVector& ExitLocation);
	void EnableVehicleCollisionRecenter();
	void EnableVehicleCollision();
	void EnableItemUse(bool bEnableUse);
	bool DropItem(const struct FName& Item, bool bDestroy, bool bFromHandsOnly);
	void DropHeldItems(bool bDominant, bool bBoth, bool bDestroyItem);
	void DropEquipment();
	void DropAllItems(bool bDestroyItems, bool bInventoryOnly);
	void DisablePickup(bool bDisabled);
	void ClientSanityCheck();
	void ClientOnExplosionDamage();
	bool CanRevive();
	bool CanListenToRadio();
	void BlowHelmetOff();
	void ApplyDelayedWound();
	void AddWatch();
	void AddHitSlow();
	void AddAmmo(const struct FName& AmmoId, int Amount);
	void ActivateCameraClip();
};

// Class Pavlov.PavlovPhysicsCollisionHandler
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UPavlovPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
public:
	float                                              MaxDistance;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDOK[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovPhysicsCollisionHandler");
		return ptr;
	}



};

// Class Pavlov.PavlovPlayerCameraManager
// 0x0000 (FullSize[0x2470] - InheritedSize[0x2470])
class APavlovPlayerCameraManager : public APlayerCameraManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovPlayerCameraManager");
		return ptr;
	}



};

// Class Pavlov.PavlovPlayerController
// 0x0188 (FullSize[0x0810] - InheritedSize[0x0688])
class APavlovPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData_08E1[0x5C];                                    // 0x0688(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AuthTimeout;                                               // 0x06E4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TW51[0x8];                                     // 0x06E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVoiceRouter*                                VoiceRouter;                                               // 0x06F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 PassengerPawn;                                             // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBuyingEnabled;                                            // 0x0700(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipHeadsetScale;                                         // 0x0701(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBoughtSomething;                                       // 0x0702(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLDO[0x5];                                     // 0x0703(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEquipmentSnapshot                          EquipmentSnapshot;                                         // 0x0708(0x0090) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bHasEquipmentSnapshot;                                     // 0x0798(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreEquipment;                                         // 0x0799(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CS36[0x6];                                     // 0x079A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LastWeaponBuy;                                             // 0x07A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LastSecondaryWeaponBuy;                                    // 0x07A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          TeamKiller;                                                // 0x07B0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MessageClass;                                              // 0x07B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  KillPingSound;                                             // 0x07C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RussianAvatarSkinClass;                                    // 0x07C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBuyingChanged;                                           // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamKilled;                                              // 0x07E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHeadsetScaleChanged;                                     // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OG2C[0x10];                                    // 0x0800(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovPlayerController");
		return ptr;
	}



	void UnBoardVehicle();
	void TryRestoreEquipmentBySnapshot();
	void TestTeamKill();
	void TakeEquipmentSnapshot();
	void SwitchToSpectator();
	void SwitchTeam();
	void SwapControllers();
	void Suicide();
	void SNDPreGameSpawnTimer();
	void SetServerTickRate(int Rate);
	void SetHeadMountedDisplayScale(float Scale);
	void SetBuyingEnabled(float ForDuration, float BuyZoneMaxDistance);
	void SetBuyingDisabled();
	void SetBlackScreen(bool bEnabled);
	void ServerVote(class AVote* Vote, bool bYes);
	void ServerUnBoardVehicle();
	void ServerTestTeamKill();
	void ServerSwitchTeam();
	void ServerSuicide();
	void ServerSetServerTickRate(int Rate);
	void ServerReportZombieBulletHit(const struct FClientZombieBulletHit& Hit);
	void ServerReportVirtualStockChange(bool bEnabled);
	void ServerReportTrigger(class AGun* Gun, bool bTrigger, TArray<unsigned char> GunState);
	void ServerReportShatter(class ADestructible* Destructible, const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location);
	void ServerReportKnifeDamage(const struct FClientKnifeDamage& Info);
	void ServerReportHandenessChange(bool bRightHanded);
	void ServerReportCorpseHitByClass(class APavlovPawn* PawnCorpse, class UClass* GunClass);
	void ServerReportCorpseHit(class APavlovPawn* PawnCorpse, const struct FImpactDamage& ImpactDamage);
	void ServerReportBulletHit(const struct FClientBulletHit& Hit);
	void ServerProcessZombieDamage();
	void ServerKnockZombie(class AZAICharacter* Zombie, Z_EZKnockBackDirection Direction, unsigned char Flags);
	void ServerInstigateVote(class UClass* VoteClass, const struct FString& Param1, int Param2);
	void ServerEnterVehicle(class APavlovVehicle* Vehicle, int Seat);
	void ServerEnterDigit(class ABomb* Bomb, int Index);
	void ServerBuy(const struct FName& EquipmentName);
	void ServerBoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
	void ServerAuthenticate(const struct FString& HexTicket);
	void ServerAbstainToVote();
	void ResetPlayerHeight();
	void ResetPlayerEffects();
	void PunishTeamKiller();
	void OnZombieClientKnock(class AZAICharacter* Zombie, Z_EZKnockBackDirection Direction, unsigned char Flags);
	void OnMenuUniverseChanged(bool bEnabled);
	void OnAuthTimedout();
	void OnAuthTicketReceived(bool bSucceed, const struct FString& HexAuthTicket);
	void MulticastDebugPoint(const struct FVector& Location, const struct FString& Text);
	void LeaveVehicle();
	void KilledInVehicle(class APavlovVehicle* Vehicle);
	bool IsInVehicle();
	float GetHeadMountedDisplayScale();
	void ForgiveTeamKiller();
	void ExecuteRconCommand(const struct FRconCommand& RconCommand);
	void EnterVehicle(class APavlovVehicle* Vehicle, int Seat);
	void ClientSetBuying(bool bEnabled);
	void ClientServerConnect(const struct FServerConnectParams& Params);
	void ClientReportMatchEnd();
	void ClientPlayKillPing();
	void ClientOnTeamKilled(class APavlovPlayerState* CulpritTeamKiller);
	void ClientInstigateFlashVision(float Seconds, float ViewAlpha);
	void ClientInstigateFlash(float Seconds, float ViewAlpha);
	void ClientDisplayMessage(const struct FString& Message);
	void ClientConnectTo(const struct FString& ConnectURL);
	void ClientAuthenticate();
	void Buy(const struct FName& EquipmentName);
	void BoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat);
	void ApplySkippedHeadMountedDisplayScale();
};

// Class Pavlov.PavlovPlayerState
// 0x0118 (FullSize[0x0508] - InheritedSize[0x03F0])
class APavlovPlayerState : public APlayerState
{
public:
	int                                                TeamId;                                                    // 0x03F0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x03F4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x03F8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Assists;                                                   // 0x03FC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cash;                                                      // 0x0400(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Exp;                                                       // 0x0404(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Progress;                                                  // 0x0408(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HG7K[0x4];                                     // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlatformId;                                                // 0x0410(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDead;                                                     // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDev;                                                      // 0x0421(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EPlayerFlair                                Flair;                                                     // 0x0422(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ABST[0x1];                                     // 0x0423(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RespawnCountdown;                                          // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerHeight;                                              // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRightHanded;                                              // 0x042C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVirtualStock;                                             // 0x042D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanVote;                                                  // 0x042E(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpeaking;                                                 // 0x042F(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, unsigned char>                  Purchases;                                                 // 0x0430(0x0050) (Net, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bAuthenticated;                                            // 0x0480(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S7LJ[0x3];                                     // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LifeTeamKillCount;                                         // 0x0484(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraRespawnCountdown;                                     // 0x0488(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeadTime;                                                  // 0x048C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            EquippedSkins;                                             // 0x0490(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnGhost;                                               // 0x04E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXOH[0x7];                                     // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCashUpdated;                                             // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bHasPlayerProxy;                                           // 0x04F8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_24WM[0x7];                                     // 0x04F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SkinOverride;                                              // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovPlayerState");
		return ptr;
	}



	bool SendJoinDataToClient(class UJsonUtilsObj* JsonObj);
	void Reset();
	void ReceiveJoinJsonData(TArray<unsigned char> JoinData);
	void OnRep_HasPlayerProxy();
	void OnRep_Flair();
	void OnRep_Cash();
	void LoadEquippedSkins();
	bool IsAbleToBuy(const struct FName& EquipmentName);
	bool HasSkinOverride();
	bool HasSkinEquipped(const struct FName& ItemName);
	PavlovProxy_EVRDevice GetVRDevice();
	int GetTeamId();
	struct FString GetStringId();
	int GetSkinId(const struct FName& ItemName);
	void DisableFallSound();
	void AddEquippedSkinByFamily(const struct FName& ItemName, Pavlov_ESkinFamily SkinFamily);
	void AddEquippedSkin(const struct FName& ItemName, int SkinId);
};

// Class Pavlov.PavlovSimpleVehicleMovement
// 0x0040 (FullSize[0x0310] - InheritedSize[0x02D0])
class UPavlovSimpleVehicleMovement : public USimpleWheeledVehicleMovementComponent
{
public:
	TArray<int>                                        RightWheels;                                               // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int>                                        LeftWheels;                                                // 0x02E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       TurnTorqueBone;                                            // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TurnTorque;                                                // 0x02F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedWheelState                       RightWheelsInput;                                          // 0x02FC(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FReplicatedWheelState                       LeftWheelsInput;                                           // 0x0304(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8D8[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovSimpleVehicleMovement");
		return ptr;
	}



	void UpdateWheels(bool bRight, const struct FReplicatedWheelState& WheelUpdate);
	void SetWheelInfo(bool bRight, const struct FReplicatedWheelState& WheelsState);
	void SetWheelDriveTorque(bool bRight, float DriveTorque);
	void SetWheelDriveAndBrakeTorque(bool bRight, float DriveTorque, float BrakeTorque);
	void SetWheelBrakingTorque(bool bRight, float BrakeTorque);
	void SetTurnTorque(float TurningTorque);
	void ServerUpdateWheels(const struct FReplicatedWheelState& LeftWheelInput, const struct FReplicatedWheelState& RightWheelInput, float TurnTorque);
	void ServerEBrake();
};

// Class Pavlov.PavlovSpectatorPawn
// 0x0020 (FullSize[0x03D0] - InheritedSize[0x03B0])
class APavlovSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData_J91V[0x10];                                    // 0x03B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsScrubing;                                               // 0x03C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKAH[0x7];                                     // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayerCycler*                               Cycler;                                                    // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovSpectatorPawn");
		return ptr;
	}



	void ScrubToLive();
	void ScrubRelative(float Seconds);
	void ScrubNormalized(float NormalizedTime);
	void Scrub(float Time);
	void OnScrubChanged(bool bScrubing);
	void OnGotoTime(bool bWasSuccessful);
	void OnDemoPlaybackError(TEnumAsByte<Engine_EDemoPlayFailure> FailureType, const struct FString& ErrorString);
	float GetNormalizedScrubTime();
};

// Class Pavlov.PavlovStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPavlovStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovStatics");
		return ptr;
	}



	void STATIC_SwapHands(class UObject* WorldContextObject);
	bool STATIC_SupportsGripForce();
	void STATIC_SpawnLocalSound2DByPawn(class APawn* Pawn, class USoundBase* Sound);
	void STATIC_SpawnLocalSound2D(class APlayerController* Controller, class USoundBase* Sound);
	void STATIC_SpawnHitFeedbackSound(class UObject* WorldContextObject, Pavlov_EHitFeedbackType Type);
	void STATIC_SetPlayerEffectsDisabled(class UObject* WorldContextObject, bool bDisabled);
	void STATIC_SetPavlovSplash(bool bVisible, class UTexture* SplashTexture);
	void STATIC_SetActorNetDormancy(class AActor* Actor, TEnumAsByte<Engine_ENetDormancy> Dormancy);
	void STATIC_ResetVoiceCaptureDevice(class UObject* WorldContextObject);
	void STATIC_PropRadialDamage(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<Engine_ECollisionChannel> DamagePreventionChannel);
	void STATIC_OpenPavlovMapById(class UObject* WorldContextObject, const struct FString& ID, const struct FString& Options, bool bNoDelay);
	bool STATIC_IsXmas(class UObject* WorldContextObject);
	bool STATIC_IsReplay(class UObject* WorldContextObject);
	bool STATIC_IsQuestServer();
	bool STATIC_IsQuest();
	bool STATIC_IsPlayingOnlineGame(class UObject* WorldContextObject);
	bool STATIC_IsOculusTouch();
	bool STATIC_IsInEntry(class UObject* WorldContextObject);
	bool STATIC_IsHalloween(class UObject* WorldContextObject);
	bool STATIC_IsEditor();
	bool STATIC_IsCompetitiveMode(class UObject* WorldContextObject);
	bool STATIC_IsBombDropped(class UObject* WorldContextObject);
	bool STATIC_IsAprilFools(class UObject* WorldContextObject);
	bool STATIC_HasGunOptimizations();
	void STATIC_GoToStartUpMap(class UObject* WorldContextObject);
	void STATIC_GoToEntry(class UObject* WorldContextObject);
	class UWorkshop* STATIC_GetWorkshop(class UObject* WorldContextObject);
	float STATIC_GetVoiceLevelPeak(class UObject* WorldContextObject);
	struct FString STATIC_GetUserId(class UObject* WorldContextObject);
	class UUIManager* STATIC_GetUIManager(class UObject* WorldContextObject);
	class UTutorial* STATIC_GetTutorial(class UObject* WorldContextObject);
	class ASpectatorTVCamera* STATIC_GetSpectatorTVCamera(class UObject* WorldContextObject);
	int STATIC_GetShackQualityLevel();
	Pavlov_EShackDeviceType STATIC_GetShackDeviceType();
	struct FTransform STATIC_GetRefPoseBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName);
	struct FString STATIC_GetPlayerUniqueIdAsString(class APlayerState* PlayerState);
	void STATIC_GetPlayerEquipment(class APlayerState* PlayerState, struct FName* Primary, TArray<struct FName>* Secondary);
	class AGlobalPlayerEffects* STATIC_GetPlayerEffects(class UObject* WorldContextObject);
	class APavlovPawn* STATIC_GetPawnByPlayerState(class UObject* WorldContextObject, class APlayerState* PlayerState);
	struct FString STATIC_GetPavlovVersionString(class UObject* WorldContextObject);
	class UPavlovLobby* STATIC_GetPavlovLobby(class UObject* WorldContextObject);
	class UPavlovGameUserSettings* STATIC_GetPavlovGameUserSettings();
	class UPavlovGameInstance* STATIC_GetPavlovGameInstance(class UObject* WorldContextObject);
	TArray<class UMaterialInterface*> STATIC_GetMeshMaterials(class UStaticMesh* StaticMesh);
	class AMenuUniverse* STATIC_GetMenuUniverseInstance(class UObject* WorldContextObject);
	class UMatchmaking* STATIC_GetMatchmaking(class UObject* WorldContextObject);
	class APavlovPlayerState* STATIC_GetLocalPlayerState(class UObject* WorldContextObject);
	struct FTransform STATIC_GetLocalPlayerCameraTransform(class UObject* WorldContextObject);
	Pavlov_EHolidays STATIC_GetHoliday(class UObject* WorldContextObject);
	TArray<struct FString> STATIC_GetFriendsUserId(class UObject* WorldContextObject);
	class UObject* STATIC_GetDefaultObject(class UClass* ObjectClass);
	class AController* STATIC_GetControllerByPlayerState(class APlayerState* PlayerState);
	struct FTransform STATIC_GetBoneTransform(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneName);
	class ABomb* STATIC_GetBombInstance(class UObject* WorldContextObject);
	void STATIC_ForceNoSoundOcclusion(class UAudioComponent* AudioComp);
	void STATIC_FlushActorNetDormancy(class AActor* Actor);
	class ABombPlantSpot* STATIC_FindClosestBombPlantSpot(class UObject* WorldContextObject, const struct FVector& RefLocation);
	bool STATIC_ArePawnsHostile(class UObject* WorldContextObject, class APawn* A, class APawn* B);
};

// Class Pavlov.PavlovStickComponent
// 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
class UPavlovStickComponent : public UVRStickComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovStickComponent");
		return ptr;
	}



};

// Class Pavlov.PavlovVehicle
// 0x02A8 (FullSize[0x0640] - InheritedSize[0x0398])
class APavlovVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData_8Y83[0x8];                                     // 0x0398(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxSeats;                                                  // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U7BC[0x4];                                     // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SeatOccupantClasses;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<int, class UClass*>                           VehicleInteriorClasses;                                    // 0x03B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              VehicleMaxVelocity;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CriticalTime;                                              // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VehicleDespawnTime;                                        // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AHLE[0x4];                                     // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ExplosionDamageSocket;                                     // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 DestroyedVehicleMesh;                                      // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    DestroyedVehicleRelativeRot;                               // 0x0428(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     DestroyImpulse;                                            // 0x0434(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEngineOn;                                                 // 0x0448(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVehicleOccupied;                                        // 0x0449(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCP1[0x6];                                     // 0x044A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, float>                          DamageHitMap;                                              // 0x0450(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      VehicleExplosionDamageClass;                               // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoEject;                                                // 0x04A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AH53[0x3];                                     // 0x04A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHealth;                                                 // 0x04AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RepairHealthAmount;                                        // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EVehicleDamageState                         VehicleDamageState;                                        // 0x04B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R8B5[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EngineOffDelay;                                            // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineFadeTime;                                            // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EngineStartSound;                                          // 0x04C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EngineStopSound;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EnterVehicleSound;                                         // 0x04D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ExitVehicleSound;                                          // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleCriticalSound;                                      // 0x04E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleCriticalSoundLQ;                                    // 0x04E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleDestroyedSound;                                     // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleDestroyedSoundLQ;                                   // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   RepairSound;                                               // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ZombieHitSound;                                            // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   CriticalDamageAlarm;                                       // 0x0510(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             CriticalSoundComp;                                         // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DestroyFXSocket;                                           // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleCriticalFX;                                         // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleCriticalFXLQ;                                       // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleDestroyedFX;                                        // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleDestroyedFXLQ;                                      // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    CriticalFXComp;                                            // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebug;                                              // 0x0550(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TMMJ[0x3];                                     // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ExitPoints;                                                // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExitRadius;                                                // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PawnRadius;                                                // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExitAngle;                                                 // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExitZHeight;                                               // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnVehicleDamageStateChanged;                               // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnterExitVehicle;                                        // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UVehicleOccupant*>                    Occupants;                                                 // 0x0588(0x0010) (ExportObject, Net, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int                                                TeamId;                                                    // 0x0598(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_365Y[0x54];                                    // 0x059C(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Health;                                                    // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_22VK[0x4];                                     // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                EngineOff_Handle;                                          // 0x05F8(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                CriticalDamage_Handle;                                     // 0x0600(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                OutOfBounds_Handle;                                        // 0x0608(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                Despawn_Handle;                                            // 0x0610(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                FlipEject_Handle;                                          // 0x0618(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastFlipAlpha;                                             // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AGXW[0x4];                                     // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 KilledByInstigator;                                        // 0x0628(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      KilledByActor;                                             // 0x0630(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOutOfBounds;                                              // 0x0638(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3U8L[0x7];                                     // 0x0639(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovVehicle");
		return ptr;
	}



	void ZombieHit_Multi(const struct FVector_NetQuantize& HitLocation);
	void VehicleSoundSetup(bool bEntered);
	void VehicleKilled_Multi();
	void TryFlipVehicle();
	void TakeRadialDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
	void StartVehicleDespawnTimer();
	void SetVehicleOccupied(bool bOccupied);
	void SetEngineState(bool bStart);
	void SeatVehicleTeamID(int NewTeamId);
	bool RepairVehicle();
	void PlayRepairSound_Multi(bool bFullyRepaired);
	void PlayerEnterExit_Multi(bool bEntered, int Seat);
	void OutOfBounds(bool bOut);
	void OnVehicleCritical(bool bCritical);
	void OnRep_VehicleDamageState(Pavlov_EVehicleDamageState OldVehicleDamageState);
	void OnRep_Occupied();
	void OnRep_EngineOn();
	void OnEngineChanged(bool bOn, bool bDisabled);
	bool IsVehicleEmpty();
	bool IsVehicleDisabled();
	bool IsSeatEmpty(int Seat);
	bool IsLocalPlayerInVehicle();
	bool IsLocalPlayerInSeat(int Seat);
	bool IsDriver(class UVehicleOccupant* Occupant);
	bool HasDriver();
	class UClass* GetVehicleInterior(int Seat);
	TArray<class UAudioComponent*> GetVehicleEngineAudioComponents();
	TArray<class UAudioComponent*> GetVehicleAudioComponents();
	int GetTeamId();
	bool GetSeatExitLocation(bool bRight, struct FVector* ExitLocation);
	class UVehicleSeat* GetSeat(int Seat);
	int GetOccupantSeat(class UVehicleOccupant* Occupant);
	TArray<class UVehicleOccupant*> GetOccupants();
	class UVehicleOccupant* GetOccupant(int Seat);
	struct FVector GetMovmentVelocity();
	struct FVector GetExitLocation(bool bRight);
	int GetDriverSeat();
	class UVehicleOccupant* GetDriver();
	int FindEmptySeat();
	void EnteredKillVolume();
	bool DoesSeatExitRight(int Seat);
	void DelayEngineOffSound();
	void ClearBumpers_Multi(float Direction);
	void ClearBumpers(float Direction);
	bool CanEnterVehicle(class APavlovPawn* PavlovPawn, int Seat);
};

// Class Pavlov.PavlovVehicle_4w
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class APavlovVehicle_4w : public APavlovVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovVehicle_4w");
		return ptr;
	}



};

// Class Pavlov.PavlovVehicle_Simple
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class APavlovVehicle_Simple : public APavlovVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovVehicle_Simple");
		return ptr;
	}



};

// Class Pavlov.PavlovVehicle_Tank
// 0x0240 (FullSize[0x0880] - InheritedSize[0x0640])
class APavlovVehicle_Tank : public APavlovVehicle
{
public:
	float                                              RedrawTime;                                                // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TankTrackSpeed;                                            // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TankTrackOffset;                                           // 0x0648(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeftTrackMaterialIndex;                                    // 0x064C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RightTrackMaterialIndex;                                   // 0x0650(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2RP8[0x4];                                     // 0x0654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    RightTrackInstance;                                        // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    LeftTrackInstance;                                         // 0x0660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MinMaxTurretPitch;                                         // 0x0668(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TurretYawSpeedMinMax;                                      // 0x0670(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TurretPitchSpeedMinMax;                                    // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TurretYawSpeed;                                            // 0x0680(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TurretPitchSpeed;                                          // 0x0684(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TurretBulletClass;                                         // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TurretDamageClass;                                         // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TurretSocket;                                              // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TurretCooldown;                                            // 0x06A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastTurretFireTime;                                        // 0x06A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                TurretFireMontage;                                         // 0x06A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GunnerBulletClass;                                         // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GunnerDamageClass;                                         // 0x06B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GunnerShellClass;                                          // 0x06C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GunnerSocket;                                              // 0x06C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GunnerShellSocket;                                         // 0x06D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GunnerFireRate;                                            // 0x06D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   GunnerConeAngle;                                           // 0x06DC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GunnerCooldown;                                            // 0x06E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GunnerHeatBuildup;                                         // 0x06E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GunnerHeat;                                                // 0x06EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGunnerOverheating;                                        // 0x06F0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OA1L[0x7];                                     // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                GunnerFire_Handle;                                         // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                GunneCooldown_Handle;                                      // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineRPMs;                                                // 0x0708(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZU0[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   TurretFireSound;                                           // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TurretFire2DTailSound;                                     // 0x0718(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GunnerFireSound;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GunnerFire2DTailSound;                                     // 0x0728(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GunnerOverheatSound;                                       // 0x0730(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TurretFireSoundLQ;                                         // 0x0738(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TurretFire2DTailSoundLQ;                                   // 0x0740(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GunnerFireSoundLQ;                                         // 0x0748(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GunnerFire2DTailSoundLQ;                                   // 0x0750(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GunnerOverheatSoundLQ;                                     // 0x0758(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineSoundRPMScale;                                       // 0x0760(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RPMSoundAccelSpeed;                                        // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RPMSoundDecelSpeed;                                        // 0x0768(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V15A[0x4];                                     // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TurretTurnSocket;                                          // 0x0770(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TurretTurnLoopSound;                                       // 0x0778(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TurretTurnEndSound;                                        // 0x0780(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             TurretTurnAudioComp;                                       // 0x0788(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             OverheatSoundComponent;                                    // 0x0790(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             TurretFireFX;                                              // 0x0798(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             TurretFireFXLQ;                                            // 0x07A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GunnerMuzzleFlashDuration;                                 // 0x07A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7P8[0x4];                                     // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             GunnerFireFX;                                              // 0x07B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             GunnerFireFXLQ;                                            // 0x07B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    GunnerFireFXComponent;                                     // 0x07C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                GunnerFireFX_Handle;                                       // 0x07C8(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGunnerOverheat;                                          // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTurretFired;                                             // 0x07E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGunnerFired;                                             // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector2D                                   TurretRotation;                                            // 0x0800(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TurretAudioTurnSpeed;                                      // 0x0808(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   TurretInput;                                               // 0x080C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    MachineGunRotation;                                        // 0x0814(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bWasTurretMoving;                                          // 0x0820(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0YJV[0x3];                                     // 0x0821(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeSinceRedraw;                                           // 0x0824(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W49K[0x8];                                     // 0x0828(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LastTransform;                                             // 0x0830(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              LeftTrackOffset;                                           // 0x0860(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RightTrackOffset;                                          // 0x0864(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastSoundRPM;                                              // 0x0868(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EngineSoundMaxRPMs;                                        // 0x086C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TurretYaw;                                                 // 0x0870(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTurretEmpty;                                              // 0x0874(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MOX5[0xB];                                     // 0x0875(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovVehicle_Tank");
		return ptr;
	}



	void UpdateSeatWidget();
	void TurretMoving_Multi(bool bIsTurretMoving);
	void TurretFired_Multi();
	void StopGunnerFire();
	bool StartGunnerFire();
	void SetTurretTurnRate(float FOVAlpha);
	void SetTurretInput(const struct FVector2D& AddRotation);
	void SetMachineGunRotation(const struct FRotator& MGRot);
	void OnRep_Overheating();
	bool IsTurretPitchLimitReached(float TurretPitchInput);
	bool IsTurretMoving();
	bool IsGunnerOverheated();
	void GunnerFired_Multi();
	void GunnerFireBullet();
	void GunnerCooldownTick();
	struct FVector2D GetTurretRotation();
	bool FireTankTurret();
	void DeactivateGunnerFireFX();
	bool CanFireTurret();
	void AddHeatBuildup();
};

// Class Pavlov.PavlovVehicleAnimInstance
// 0x0004 (FullSize[0x0900] - InheritedSize[0x08FC])
class UPavlovVehicleAnimInstance : public UVehicleAnimInstance
{
public:
	float                                              KMPH;                                                      // 0x08FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovVehicleAnimInstance");
		return ptr;
	}



};

// Class Pavlov.PavlovVehicleMovementComponent
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class UPavlovVehicleMovementComponent : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovVehicleMovementComponent");
		return ptr;
	}



};

// Class Pavlov.PavlovVOIPTalker
// 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
class UPavlovVOIPTalker : public UVOIPTalker
{
public:
	unsigned char                                      UnknownData_I3MU[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundSourceBus*                             RadioSourceBus;                                            // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovVOIPTalker");
		return ptr;
	}



};

// Class Pavlov.PavlovWheeledVehicle
// 0x0058 (FullSize[0x03F0] - InheritedSize[0x0398])
class APavlovWheeledVehicle : public AWheeledVehicle
{
public:
	class UAudioComponent*                             EngineAudio;                                               // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             RollingAudio;                                              // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQ8G[0x18];                                    // 0x03A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   EngineSound;                                               // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EngineStartSound;                                          // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EngineOffSound;                                            // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   EngineReverseSound;                                        // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EngineSocket;                                              // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   RollingSound;                                              // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovWheeledVehicle");
		return ptr;
	}



	void SetSteeringInput(float Input);
};

// Class Pavlov.PavlovZSpawnCMP
// 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
class UPavlovZSpawnCMP : public UZSpawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PavlovZSpawnCMP");
		return ptr;
	}



};

// Class Pavlov.PivotComponent
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
class UPivotComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_FY67[0x8];                                     // 0x0238(0x0008) Fix Super Size
	class AVRPawn*                                     VRPawn;                                                    // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PUW0[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PivotComponent");
		return ptr;
	}



};

// Class Pavlov.PlayerCycler
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPlayerCycler : public UObject
{
public:
	unsigned char                                      UnknownData_YVXV[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PlayerCycler");
		return ptr;
	}



	void GetNext(class APavlovPlayerState** PlayerState, class APavlovPawn** Pawn);
};

// Class Pavlov.PlayerSpawnPoint
// 0x0020 (FullSize[0x0378] - InheritedSize[0x0358])
class APlayerSpawnPoint : public APlayerStart
{
public:
	int                                                TeamId;                                                    // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDynamic;                                                  // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyTeam;                                                 // 0x035D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoUnStack;                                              // 0x035E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KW7P[0x1];                                     // 0x035F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CountHalfExtent;                                           // 0x0360(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpawnCount;                                                // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VisibilityCountTeam0;                                      // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VisibilityCountTeam1;                                      // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PlayerSpawnPoint");
		return ptr;
	}



};

// Class Pavlov.PushPlayerDialog
// 0x0118 (FullSize[0x0148] - InheritedSize[0x0030])
class UPushPlayerDialog : public UDataAsset
{
public:
	class USoundCue*                                   Revived;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   LowHealth;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   LowAmmo;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MineDeployed;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   AmmoDeployed;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MedkitDeployed;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   OutOfBounds;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ObjectiveLost;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ObjectiveComplete;                                         // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   OofSound;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DeathSound;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GrenadeOut;                                                // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   SmokeOut;                                                  // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPushChant>                          Chants;                                                    // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Pavlov_EPushDialog, int>                      DialogPriority;                                            // 0x00A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Pavlov_EPushDialog, float>                    DialogBuffers;                                             // 0x00F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushPlayerDialog");
		return ptr;
	}



	int GetRandomChantIndex();
	int GetDialogPriority(Pavlov_EPushDialog DialogType);
	class USoundCue* GetDialogByType(Pavlov_EPushDialog DialogType);
	float GetDialogBuffer(Pavlov_EPushDialog DialogType);
	struct FPushChant GetChantByIndex(int ChantIndex);
};

// Class Pavlov.PushPlayerStateComponent
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UPushPlayerStateComponent : public UActorComponent
{
public:
	struct FName                                       LoadoutId;                                                 // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EMineType                              AllowedMine;                                               // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6P0G[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      HipSlotItemClass;                                          // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPushHipSlot                           HipSlotType;                                               // 0x0108(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANJT[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastLowHealthTime;                                         // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushPlayerStateComponent");
		return ptr;
	}



	void PlayerRevived(class APavlovPawn* PavPawn, class UClass* PushPlayerDataClass, const struct FName& FallbackWeapon);
};

// Class Pavlov.RadioToggleComponent
// 0x0020 (FullSize[0x05A0] - InheritedSize[0x0580])
class URadioToggleComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData_IB9L[0x8];                                     // 0x0580(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHapticFeedbackEffect_Base*                  ToggleHaptic;                                              // 0x0588(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ToggleSound;                                               // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   RogerSound;                                                // 0x0598(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RadioToggleComponent");
		return ptr;
	}



};

// Class Pavlov.Rat
// 0x0018 (FullSize[0x0750] - InheritedSize[0x0738])
class ARat : public ACharacter
{
public:
	class UVHealthComponent*                           HealthComponent;                                           // 0x0738(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4QTS[0x4];                                     // 0x0740(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpactWeight;                                              // 0x0744(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ImpactCurve;                                               // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Rat");
		return ptr;
	}



	void OnRevive(class AActor* ActorOwner);
	void OnKill(class AActor* ActorOwner);
	void ApplyImpact();
};

// Class Pavlov.PlayOfflineView
// 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
class APlayOfflineView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                               // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PlayOfflineView");
		return ptr;
	}



	void OnMapBrowserCommit(const struct FModalCommitParams& Params);
};

// Class Pavlov.Pliers
// 0x0040 (FullSize[0x0510] - InheritedSize[0x04D0])
class APliers : public AVRItem
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EPliersState                                State;                                                     // 0x04D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LO8M[0x3];                                     // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CutDelay;                                                  // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReleaseDelay;                                              // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ITL[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   CutSound;                                                  // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   CuttingSound;                                              // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ReleaseSound;                                              // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CutLocationSocket;                                         // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHapticFeedbackEffect_Base*                  CutHaptics;                                                // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Pliers");
		return ptr;
	}



	void ServerReportCut(class ABomb* Bomb, int WireIndex);
	void MulticastOnCut();
};

// Class Pavlov.PostMatchSummary
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class APostMatchSummary : public AStereoOverlay
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PostMatchSummary");
		return ptr;
	}



};

// Class Pavlov.PumpActionGunState
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UPumpActionGunState : public UActionGunState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PumpActionGunState");
		return ptr;
	}



};

// Class Pavlov.PushBomb
// 0x0010 (FullSize[0x04E0] - InheritedSize[0x04D0])
class APushBomb : public AVRItem
{
public:
	Pavlov_EBombState                                  BombState;                                                 // 0x04D0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHCT[0x7];                                     // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                BombCheckTimer;                                            // 0x04D8(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushBomb");
		return ptr;
	}



	void SetBombState(Pavlov_EBombState State);
	void OnRep_BombState();
	void OnBombStateChanged(Pavlov_EBombState State);
	void CheckSiteOverlap();
};

// Class Pavlov.PushBombObjective
// 0x00B0 (FullSize[0x0580] - InheritedSize[0x04D0])
class APushBombObjective : public AVRItem
{
public:
	struct FScriptMulticastDelegate                    OnPushBombObjectiveStateChanged;                           // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               BombOverlap;                                               // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ObjectiveId;                                               // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EObjectiveMarker                       ObjectiveMarker;                                           // 0x04F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z5F1[0x3];                                     // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BombExplosionTime;                                         // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BombTimerAlpha;                                            // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDamage;                                                 // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillRadius;                                                // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZ00[0x4];                                     // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ObjectiveArmed;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ExplosionFX;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ExplosionFXLQ;                                             // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  ExplosionSound;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DestroyedFX;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPushObjectiveState                    ObjectiveState;                                            // 0x0540(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JA3V[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APavlov_PushBombObjective*                   PushObjectiveProxy;                                        // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APushBomb*                                   AttachedPushBomb;                                          // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                BombTimer;                                                 // 0x0558(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*                    DestroyedFXComp;                                           // 0x0560(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                             ObjectiveArmedAudioComp;                                   // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                                 PlantInstigator;                                           // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlantedTime;                                               // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_66IW[0x4];                                     // 0x057C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushBombObjective");
		return ptr;
	}



	void TickBombTimer();
	void SetPushObjectiveProxy(class APavlov_PushBombObjective* PushBombProxy);
	void SetObjectiveState(PavlovProxy_EPushObjectiveState PushObjectiveState);
	void SetObjectiveMarker(PavlovProxy_EObjectiveMarker Marker);
	void ResetObjective();
	void RemoveBomb();
	void PushObjectiveStateChanged(PavlovProxy_EPushObjectiveState CurrentState);
	bool PlantPushBomb(class APushBomb* PushBomb);
	void OnTeamsSwitched();
	void OnRep_PushObjectiveProxy();
	void OnRep_ObjectiveState();
	void OnRep_ObjectiveMarker();
	void OnRep_BombTimerAlpha();
	void OnPushBombObjectiveStateChanged__DelegateSignature(class APushBombObjective* PushBombObjective, PavlovProxy_EPushObjectiveState ObjectiveState);
	void OnObjectiveMarkerChanged(PavlovProxy_EObjectiveMarker Marker);
	void OnBombTimerAlphaChanged();
	void OnBombOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBombExplosion_Server();
	bool IsLowQuality();
	PavlovProxy_EPushObjectiveState GetObjectiveState();
	class UPrimitiveComponent* GetBombMarker();
	int GetActiveObjectiveID();
	void CleanupDestroyFX();
	void BombExplosion_Multi();
	void BombExplosion();
	void BombDefused();
	void AttachPushBomb_Multi(class APushBomb* PushBomb);
};

// Class Pavlov.PushLoadout
// 0x0160 (FullSize[0x0488] - InheritedSize[0x0328])
class APushLoadout : public AActor
{
public:
	TArray<struct FPushLoadoutEquipment>               DefaultLoadouts;                                           // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPushLoadoutEquipment>               Loadouts;                                                  // 0x0338(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	class UClass*                                      KnifeClass;                                                // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ModernKnifeClass;                                          // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MedKitClass;                                               // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ModernMedkitClass;                                         // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AmmoCrateClass;                                            // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RepairToolClass;                                           // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MedsClass;                                                 // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ModernMedsClass;                                           // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SyringeClass;                                              // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ModernSyringeClass;                                        // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AntiTankMineClass;                                         // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AntiPersonnelMineClass;                                    // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BombClass;                                                 // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ShackSmokeReplacement;                                     // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LootLockerClass;                                           // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PushPlayerDataClass;                                       // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLootLockers;                                            // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlov_PushLoadoutProxy*                    PushProxy;                                                 // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UClass*, struct FPushMeshLazyLoad>      MeshesToLoad;                                              // 0x03D8(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class UClass*, struct FPushMeshLoaded>        LoadedMeshes;                                              // 0x0428(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                                RetryLoad_Handle;                                          // 0x0478(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseWW2Items;                                              // 0x0480(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S2CL[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushLoadout");
		return ptr;
	}



	void UpdateLoadouts();
	void SpawnLoadoutEquipment(const struct FName& LoadoutSlot, class APavlovPawn* PavPawn, int ObjectiveId);
	void SetTeamId(int LoadoutTeamId);
	bool SetLockerAvailability(int LoadoutIndex, int NumOfLoadoutsAvailable, int MaxLoadouts);
	void PlayerLoadoutTaken(class APavlovPawn* PavPawn, bool bTPToPlay);
	void OnRep_Loadouts();
	bool IsAttackersRoom();
	void InitializePushLoadout(class APavlov_PushLoadoutProxy* LoadoutProxy, bool bWW2Items);
	class APushLootLocker* GetLootLocker(int LootLockerIndex);
	struct FTransform GetLockerSpawnTransform(int LockerNum);
	struct FTransform GetLoadoutSpawnTransform();
	bool GetLoadoutByName(const struct FName& LoadoutId, struct FPushLoadoutEquipment* LoadoutEquipment);
	bool DoesPlayerHaveLoadout(class APavlovPawn* PavPawn);
	void DeleteUnusedLockers(int CurrentLockers);
};

// Class Pavlov.PushLootLocker
// 0x0058 (FullSize[0x0380] - InheritedSize[0x0328])
class APushLootLocker : public AActor
{
public:
	class USkeletalMeshComponent*                      LockerMesh;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      PrimaryHandMesh;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      PrimaryBackMesh;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SecondaryMesh;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      KnifeMesh;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      MedsMesh;                                                  // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SyringeMesh;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      MineMesh;                                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      BombMesh;                                                  // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LoadoutId;                                                 // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPushLoadoutCount                           LoadoutCount;                                              // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushLootLocker");
		return ptr;
	}



	bool SetupMesh(const struct FName& ItemName, class USkeletalMeshComponent* SKComp);
	void SetNumOfLoadoutsAvailable(int NumAvailable, int MaxLoadouts);
	void OnRep_LoadoutCount();
	void OnLockerStateChanged(bool bOpen);
	bool GrabLocker(class APavlovPawn* PavPawn);
	class APushLoadout* GetLoadoutRoom();
	bool CanGrabLocker();
};

// Class Pavlov.PushManagerComponent
// 0x0078 (FullSize[0x0168] - InheritedSize[0x00F0])
class UPushManagerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnGracePeriodEnded;                                        // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                ActiveObjectiveId;                                         // 0x0100(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttackerTickets;                                           // 0x0104(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefenderTickets;                                           // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAttackerTickets;                                        // 0x010C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TicketsPerWave;                                            // 0x0110(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7D41[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APushLoadout*                                Team0Loadout;                                              // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APushLoadout*                                Team1Loadout;                                              // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastObjectiveId;                                           // 0x0128(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X5J8[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   MoveSpawnTime;                                             // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EPushWinCondition                           WinCondition;                                              // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68L5[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APushBombObjective*>                  BombObjectives;                                            // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                GracePeriod;                                               // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoadoutRefreshTime;                                        // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                LoadoutHandle;                                             // 0x0158(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                OOBGraceHandle;                                            // 0x0160(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushManagerComponent");
		return ptr;
	}



	void UpdateOOBGracePeriod();
	void SwappedSides();
	void SetWinCondition(Pavlov_EPushWinCondition PushWinCondition);
	bool SetTickets(bool bAttackers, int Tickets);
	void SetGracePeriod(float GraceTime);
	void SetActiveObjectiveId(int ObjectiveId);
	int RemoveTicket(bool bAttackers);
	bool IsSpawnGracePeriod();
	void InitializePush(int ObjectiveId, int AttackTickets, int DefendTickets, int MaxAttackTickets, int WaveTickets, class APushLoadout* Team0LoadoutRoom, class APushLoadout* Team1LoadoutRoom);
	void CheckLoadoutAvailability();
	int AwardAttackersTicketsPerWave();
};

// Class Pavlov.PushPlayerDataComponent
// 0x0060 (FullSize[0x0150] - InheritedSize[0x00F0])
class UPushPlayerDataComponent : public UActorComponent
{
public:
	struct FName                                       LoadoutId;                                                 // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EMineType                              AllowedMine;                                               // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPushHipSlot                           HipSlotType;                                               // 0x00F9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSC4[0x6];                                     // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      HipSlotItemClass;                                          // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPushPlayerDialog*                           PlayerDialog;                                              // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                HipSlot_Handle;                                            // 0x0110(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                LowHealthTimer;                                            // 0x0118(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                DialogBufferTimer;                                         // 0x0120(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastLowAmmoTime;                                           // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastOofTime;                                               // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastGrenadeTime;                                           // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentChantIndex;                                         // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLastPushDialog                             LastDialogPlayed;                                          // 0x0138(0x0010) (NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	Pavlov_EPushDialog                                 DialogQueue;                                               // 0x0148(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CBUY[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.PushPlayerDataComponent");
		return ptr;
	}



	void TakePushSnapshot();
	void SetHipSlotType(PavlovProxy_EPushHipSlot HipSlot);
	void SetDialogAsset(class UPushPlayerDialog* Dialog);
	void RestorePushSnapshot(const struct FName& FallbackWeapon, class UPushPlayerStateComponent* PushPlayerStateComp);
	void RespawnHipSlot();
	void PlayDialogReplicated(Pavlov_EPushDialog PushDialog);
	class UAudioComponent* PlayDialogFromHead(class USoundCue* DialogCue);
	void PlayDialog_Multi(Pavlov_EPushDialog PushDialog);
	void PlayDialog(Pavlov_EPushDialog PushDialog);
	void PlayChantResponse_Multi(int ChantIndex);
	void PlayChantResponse();
	void PlayChant(int ChantIndex);
	void OwnerKilled();
	void OnRep_HipSlotType();
	void OnOwnerDamaged();
	void OnLowHealth();
	void OnLowAmmo();
	void OnGrenadeCooked(class AGrenade* Grenade);
	void OnBufferTimeComplete();
	void LoadDialogAsset(const struct FName& PlayerSkin);
	void Init_Client();
	void HipSlotUsed();
	class UPushPlayerDataComponent* STATIC_GetPushPlayerData(class APawn* Pawn);
	void ClearQueue(bool bFadeCurrent, bool bChantInQueue);
	void AskForMeds();
};

// Class Pavlov.ShootingRangeTargetComponent
// 0x0018 (FullSize[0x0600] - InheritedSize[0x05E8])
class UShootingRangeTargetComponent : public UStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnTargetHit;                                               // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                UVChannel;                                                 // 0x05F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4I1G[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ShootingRangeTargetComponent");
		return ptr;
	}



	void TargetHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};

// Class Pavlov.ShowOnlyComponent
// 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
class UShowOnlyComponent : public UActorComponent
{
public:
	class APavlovPlayerController*                     PlayerController;                                          // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4LPR[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ShowOnlyComponent");
		return ptr;
	}



};

// Class Pavlov.SkinAsset
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class USkinAsset : public UDataAsset
{
public:
	int                                                DefinitionId;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MG3L[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      For;                                                       // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimplified;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K9SI[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          MaterialOverride;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialOverrideIndex;                                     // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2N51[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SkinAsset");
		return ptr;
	}



};

// Class Pavlov.SkinFamily
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkinFamily : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SkinFamily");
		return ptr;
	}



	Pavlov_ESkinFamily STATIC_SkinIntToSkinFamily(int SkinFamilyInt);
	struct FString STATIC_SkinFamilyToString(Pavlov_ESkinFamily SkinFamily);
	int STATIC_SkinFamilyToInt(Pavlov_ESkinFamily SkinFamily);
	struct FString STATIC_SkinFamilyIdToString(int SkinFamilyId);
};

// Class Pavlov.SoldierSkin
// 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
class USoldierSkin : public UAvatarSkin
{
public:
	class USkeletalMeshComponent*                      ArmorMeshComp;                                             // 0x0170(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KFSS[0x1];                                     // 0x0178(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAlwaysOnArmor;                                            // 0x0179(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCombinedPlayerMeshes;                                     // 0x017A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VP6D[0x5];                                     // 0x017B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               Vest;                                                      // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               Helmet;                                                    // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               Combined;                                                  // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SoldierSkin");
		return ptr;
	}



};

// Class Pavlov.SoundMixingSettings
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class USoundMixingSettings : public UPavlovObject
{
public:
	class USoundMix*                                   SoundMix;                                                  // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSoundMixingChannel>                 Channels;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SoundMixingSettings");
		return ptr;
	}



	void SetVolumeByChannelName(const struct FName& Name, float Volume);
	void SetVolumeByChannelIndex(int Index, float Volume);
	void Save();
	void RestoreDefaults();
	void Load();
	float GetVolumeByChannelName(const struct FName& Name);
	float GetVolumeByChannelIndex(int Index);
	void ApplyAndSave();
	void Apply();
};

// Class Pavlov.SoundNodeOutdoor
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class USoundNodeOutdoor : public USoundNode
{
public:
	float                                              Alpha;                                                     // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              FadeDuration;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bInvertCondition;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T3I7[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SoundNodeOutdoor");
		return ptr;
	}



};

// Class Pavlov.SpectatorTag
// 0x0060 (FullSize[0x0388] - InheritedSize[0x0328])
class ASpectatorTag : public AActor
{
public:
	class USceneComponent*                             Pivot;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             NamePivot;                                                 // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        VerticalLine;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                            Widget;                                                    // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0L3C[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRaised;                                                   // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFadingOut;                                                // 0x0351(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K9HM[0x2];                                     // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RaiseTime;                                                 // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RaiseDuration;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RaiseHeight;                                               // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineGirth;                                                 // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EO0A[0x4];                                     // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                RaiseCurve;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDuration;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4QPR[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FadeOutCurve;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   RaiseSound;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SpectatorTag");
		return ptr;
	}



	void OnFadeOut();
	class APavlovPlayerState* GetPlayerState();
};

// Class Pavlov.SpectatorTV
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ASpectatorTV : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SpectatorTV");
		return ptr;
	}



};

// Class Pavlov.SpectatorTVCamera
// 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
class ASpectatorTVCamera : public AActor
{
public:
	unsigned char                                      UnknownData_6DNA[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneCaptureComponent2D*                    SceneCapture;                                              // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7X1K[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APavlovPawn*                                 FocusedPawn;                                               // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0348(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamOnly;                                                 // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoCycle;                                                // 0x034D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQA1[0x2];                                     // 0x034E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              YawExp;                                                    // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoCycleRate;                                             // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SpectatorTVCamera");
		return ptr;
	}



	void OnAttachedToFocusedPawn();
	class USceneCaptureComponent2D* GetSceneCapture();
	void Cycle();
	void AddYawInput(float Value);
};

// Class Pavlov.StaticModel
// 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
class UStaticModel : public UUIModel
{
public:
	int                                                SettingsTab;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V535[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfflineActivity;                                           // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOfflineBots;                                              // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8KOL[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OfflineMap;                                                // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TrainingCourse;                                            // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.StaticModel");
		return ptr;
	}



};

// Class Pavlov.StatsManager
// 0x0060 (FullSize[0x0150] - InheritedSize[0x00F0])
class UStatsManager : public UActorComponent
{
public:
	float                                              KValue;                                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y1HX[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FPlayerStats>          PlayerStats;                                               // 0x00F8(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                               bHasPosted;                                                // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IPY1[0x3];                                     // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExperienceMultiplier;                                      // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.StatsManager");
		return ptr;
	}



	void SetStat(const struct FString& UniqueID, Pavlov_EPlayerStats OptionStat, int Amount);
	bool PostStats(const struct FString& URL);
	bool HasAuthority();
	int GetXPForStat(Pavlov_EPlayerStats StatType, int Amount);
	float GetTransformedEloRatings(float Elo);
	class UJsonUtilsObj* GetStatsAsJson();
	float GetProbabilityOfWinning(float CurrentElo, float OpponentElo);
	bool GetPlayerStats(const struct FString& UniqueID, struct FPlayerStats* PlayerStatistics);
	TMap<struct FString, struct FPlayerStats> GetPlayersStats();
	bool GetAllPlayersStats(TArray<struct FPlayerStats>* PlayersStatistics);
	struct FPlayerStats FindOrCreatePlayerStats(const struct FString& UniqueID);
	void DumpStatsToLog();
	void CalulateTeamElos(TMap<struct FString, float> InTeam0Elos, TMap<struct FString, float> InTeam1Elos, TMap<struct FString, float>* OutTeam0Elos, TMap<struct FString, float>* OutTeam1Elos, bool bTeam0Won);
	float CalculateNewElo(float CurrentElo, float OpponentElo, bool bWin);
	void AwardPlayersXP();
	float AverageElos(TArray<float> Elos);
	void AddStatByUniqueId(class APavlovPlayerState* PlayerState, Pavlov_EPlayerStats OptionStat);
	void AddStat(class APavlovPlayerState* PavPlayerState, Pavlov_EPlayerStats OptionStat);
	void AddPlayer(const struct FString& UniqueID);
};

// Class Pavlov.StencilSuppressionComponent
// 0x0018 (FullSize[0x0600] - InheritedSize[0x05E8])
class UStencilSuppressionComponent : public UStaticMeshComponent
{
public:
	class UMaterialInstanceDynamic*                    FlashMaterial;                                             // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMenuOpen;                                                 // 0x05F0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRN2[0xF];                                     // 0x05F1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.StencilSuppressionComponent");
		return ptr;
	}



	void OwnerKilled(class AActor* Owner);
	void OnMenuOpened(bool bEnabled);
};

// Class Pavlov.StereoMessage
// 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
class AStereoMessage : public AStereoOverlay
{
public:
	struct FString                                     Message;                                                   // 0x0350(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.StereoMessage");
		return ptr;
	}



};

// Class Pavlov.StripperClipCosmetic
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class AStripperClipCosmetic : public AVRStripperClipCosmetic
{
public:
	unsigned char                                      UnknownData_S3ZZ[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.StripperClipCosmetic");
		return ptr;
	}



};

// Class Pavlov.SurfaceFXAsset
// 0x0138 (FullSize[0x0168] - InheritedSize[0x0030])
class USurfaceFXAsset : public UDataAsset
{
public:
	class USoundCue*                                   DefaultSound;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ConcreteSound;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MetalSound;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   CarpetSound;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   FabricSound;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WoodSound;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   GlassSound;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WaterSound;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DirtSound;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   MudSound;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   SnowSound;                                                 // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   VehicleSound;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   WorldFleshSound;                                           // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DefaultParticle;                                           // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ConcreteParticle;                                          // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MetalParticle;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             CarpetParticle;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FabricParticle;                                            // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             WoodParticle;                                              // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             GlassParticle;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             WaterParticle;                                             // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DirtParticle;                                              // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MudParticle;                                               // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             SnowParticle;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleParticle;                                           // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             WorldFleshParticle;                                        // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DefaultParticleLowQuality;                                 // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ConcreteParticleLowQuality;                                // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MetalParticleLowQuality;                                   // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             CarpetParticleLowQuality;                                  // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             FabricParticleLowQuality;                                  // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             WoodParticleLowQuality;                                    // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             GlassParticleLowQuality;                                   // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             WaterParticleLowQuality;                                   // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DirtParticleLowQuality;                                    // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             MudParticleLowQuality;                                     // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             SnowParticleLowQuality;                                    // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VehicleParticleLowQuality;                                 // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             WorldFleshParticleLowQuality;                              // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SurfaceFXAsset");
		return ptr;
	}



	class USoundCue* GetVehicleSound();
	class UParticleSystem* GetVehicleParticleSystem();
	class USoundCue* GetSoundBySurfaceType(TEnumAsByte<Engine_EPhysicalSurface> SurfaceType);
	class UParticleSystem* GetParticleBySurfaceType(TEnumAsByte<Engine_EPhysicalSurface> SurfaceType);
};

// Class Pavlov.SurfaceFXInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USurfaceFXInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SurfaceFXInterface");
		return ptr;
	}



};

// Class Pavlov.TankInteriorAnimInstance
// 0x0028 (FullSize[0x0380] - InheritedSize[0x0358])
class UTankInteriorAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_X32E[0x4];                                     // 0x0358(0x0004) Fix Super Size
	struct FRotator                                    LeftLeverRotation;                                         // 0x035C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RightLeverRotation;                                        // 0x0368(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              EngineRPMs;                                                // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KMPH;                                                      // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KFNV[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.TankInteriorAnimInstance");
		return ptr;
	}



	float GetMPH();
};

// Class Pavlov.TankVehicleMovement
// 0x0020 (FullSize[0x0448] - InheritedSize[0x0428])
class UTankVehicleMovement : public UWheeledVehicleMovementComponent4W
{
public:
	bool                                               bUseSteeringWheel;                                         // 0x0428(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TL65[0x3];                                     // 0x0429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TankThrottleInput;                                         // 0x042C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TankLeftTrustInput;                                        // 0x0430(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TankRightTrustInput;                                       // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastLeftThrustInput;                                       // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastRightThrustInput;                                      // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastThrottleInput;                                         // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastBumperPushTime;                                        // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.TankVehicleMovement");
		return ptr;
	}



	void ServerUpdateTankSteeringWheel(float LeftThrustInput, float RightThrustInput, float UpdateThrottle);
	void ServerUpdateTankInput(float LeftTrustInput, float RightTrustInput);
	void DriverLeft();
};

// Class Pavlov.TextureWidgetComponent
// 0x0000 (FullSize[0x06A0] - InheritedSize[0x06A0])
class UTextureWidgetComponent : public UWidgetComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.TextureWidgetComponent");
		return ptr;
	}



};

// Class Pavlov.ToolTip
// 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
class AToolTip : public AActor
{
public:
	class UObject*                                     Context;                                                   // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ContextLocation;                                           // 0x0330(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EToolTipState                               State;                                                     // 0x033C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompleted;                                                // 0x033D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M87Y[0x2];                                     // 0x033E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Timer;                                                     // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RYKU[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ID;                                                        // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInsist;                                                   // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W8C5[0x3];                                     // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TransitionDuration;                                        // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ShowSound;                                                 // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TerminateSound;                                            // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   TerminateCompletedSound;                                   // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoAttach;                                               // 0x0370(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OPUS[0x3];                                     // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SelfDestroyDuration;                                       // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ToolTip");
		return ptr;
	}



	float GetFadeScalar();
};

// Class Pavlov.TrailComponent
// 0x0040 (FullSize[0x05D0] - InheritedSize[0x0590])
class UTrailComponent : public UCustomMeshComponent
{
public:
	unsigned char                                      UnknownData_G2FJ[0x28];                                    // 0x0590(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PointLifeSpan;                                             // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointRate;                                                 // 0x05BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointDistance;                                             // 0x05C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TrailGirth;                                                // 0x05C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopped;                                                  // 0x05C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5ZR[0x7];                                     // 0x05C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.TrailComponent");
		return ptr;
	}



};

// Class Pavlov.TrainingView
// 0x0008 (FullSize[0x0490] - InheritedSize[0x0488])
class ATrainingView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                               // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.TrainingView");
		return ptr;
	}



};

// Class Pavlov.TTTGameInfo
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UTTTGameInfo : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.TTTGameInfo");
		return ptr;
	}



	bool TTTFlushKarma();
	bool TTTAlwaysEnableSkinMenu(bool bEnable);
	bool SetTTTPlayerRole(class APavlovPlayerState* PavPlayerState, const struct FString& TTTRole);
	bool SetTTTKarma(class APavlovPlayerState* PavPlayerState, int Karma);
	void RetryInit();
	bool PauseTTTTimer(bool bPaused);
	struct FTTTPlayerInfo GetTTTPlayerInfo(class APlayerState* PlayerState);
	bool GetTTTKarma(class APavlovPlayerState* PlayerState, int* Karma);
	TArray<struct FTTTPlayerInfo> GetAllTTTPlayersInfo();
	bool EndTTTRound();
};

// Class Pavlov.Tutorial
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UTutorial : public UObject
{
public:
	TArray<struct FName>                               ToolTipsCompleted;                                         // 0x0028(0x0010) (ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BPTK[0xA0];                                    // 0x0038(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPavlovGameInstance*                         Instance;                                                  // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectLibrary*                              ToolTipLibrary;                                            // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Tutorial");
		return ptr;
	}



	void TerminateToolTip(const struct FName& ID);
	void ShowToolTip(const struct FName& ID, class UObject* Context, const struct FVector& ContextLocation);
	void Reset();
	void MarkToolTipAsComplete(const struct FName& ID);
	bool IsToolTipCompleted(const struct FName& ID);
	int GetToolTipInstanceCount();
};

// Class Pavlov.TwoHandGripComponent
// 0x0010 (FullSize[0x0590] - InheritedSize[0x0580])
class UTwoHandGripComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData_7DY2[0x10];                                    // 0x0580(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.TwoHandGripComponent");
		return ptr;
	}



};

// Class Pavlov.UIHapticLibrary
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UUIHapticLibrary : public UDataAsset
{
public:
	TArray<class UHapticFeedbackEffect_Base*>          HapticEffects;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.UIHapticLibrary");
		return ptr;
	}



};

// Class Pavlov.UIManager
// 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
class UUIManager : public UObject
{
public:
	class UModal*                                      ModalInstance;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8GHE[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MenuUniverseClass;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMatchmakingView*                            MatchmakingView;                                           // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMenuUniverseView*                           FriendGamesView;                                           // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G8SJ[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MatchmakingViewClass;                                      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FriendGamesViewClass;                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UClass*, class UUIModel*>               Models;                                                    // 0x0070(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UModal*                                      VotePromptModal;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModal*                                      PinPromptModal;                                            // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UModal*                                      ConnectSpinnerModal;                                       // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Pavlov_EUserInterfaceType                          Interface;                                                 // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2C3Z[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Pavlov_EUserInterfaceType, Pavlov_EUserInterfaceType> SideInterfaceMap;                                          // 0x00E0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YP1[0x18];                                    // 0x0130(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ConnectingTo;                                              // 0x0148(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUserInterfaceChanged;                                    // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSideUserInterfaceChanged;                                // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bMenuUniverseEnabled;                                      // 0x0178(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowMOTD;                                                 // 0x0179(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KP6[0x6];                                     // 0x017A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.UIManager");
		return ptr;
	}



	void ShowMenuUniverse();
	void ShowMatchmaking();
	void SetSideInterface(Pavlov_EUserInterfaceType PrimaryInterface, Pavlov_EUserInterfaceType NewInterface);
	void SetMenuUniverse(bool bEnabled);
	void SetMatchmakingMode(bool bEnabled);
	void SetInterface(Pavlov_EUserInterfaceType NewInterface);
	void OnVotePromptCommit(const struct FModalCommitParams& Params);
	void OnPinPromptDestroyed();
	void OnPinPromptCommit(const struct FModalCommitParams& Params);
	void OnPartyCreated();
	void OnOnlineError(Pavlov_EOnlineError Error, const struct FText& ErrorMessage);
	void OnMatchmakingStatusChanged(Pavlov_EMatchmakingStatus Status);
	void OnJoinServerStateChanged(Pavlov_EOnlineJoinServerState JoinServerState);
	class UModal* K2_CreateModalWithParams(const struct FUICreateModalParams& Params);
	bool IsMenuUniverseEnabled();
	void HideMenuUniverse();
	void HideMatchmaking(bool bForce);
	Pavlov_EUserInterfaceType GetSideInterface();
	class UModal* GetModalInstance();
	class AMenuUniverse* GetMenuUniverse();
	void DismissMOTD();
	class UModal* CreateModalMessageBox(const struct FText& Message, Pavlov_EModalMessageBoxType Type);
	class UModal* CreateModal(class UClass* ModalClass, const struct FString& ModalContent, bool bCreateView);
	void CreateConnectSpinnerModal();
	void ClearModalInstance();
};

// Class Pavlov.UISoundLibrary
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UUISoundLibrary : public UDataAsset
{
public:
	struct FString                                     Namespace;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, class USoundBase*>            Definitions;                                               // 0x0040(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.UISoundLibrary");
		return ptr;
	}



};

// Class Pavlov.VehicleBumper
// 0x0030 (FullSize[0x05B0] - InheritedSize[0x0580])
class UVehicleBumper : public UBoxComponent
{
public:
	float                                              KillVelocity;                                              // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageVelocity;                                            // 0x0584(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PushVelocity;                                              // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinorHitDamageAmount;                                      // 0x058C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LaunchMultiplier;                                          // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxZLaunch;                                                // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLaunchForce;                                            // 0x0598(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFrontBumper;                                              // 0x059C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTruckBed;                                                 // 0x059D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1LS3[0x2];                                     // 0x059E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RunoverDamageClass;                                        // 0x05A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4G7K[0x8];                                     // 0x05A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleBumper");
		return ptr;
	}



	void OnBumperOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	class APavlovVehicle* GetVehicle();
	void ClearBumper();
};

// Class Pavlov.VehicleInterior
// 0x0038 (FullSize[0x0360] - InheritedSize[0x0328])
class AVehicleInterior : public AActor
{
public:
	struct FName                                       AttachSocket;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneCaptureComponent2D*                    SceneCapture;                                              // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCaptureScene;                                             // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IPEY[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CaptureSocket;                                             // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      CaptureTarget;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FOVMinMax;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FOVZoomRate;                                               // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NQYE[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleInterior");
		return ptr;
	}



	void ZoomScopeFOV(float ZoomDirection);
	void SetupVehicleInterior(class APavlovVehicle* Vehicle, int Seat, class UVehicleOccupant* VehicleOccupant);
	void SetScopeFOV(float ScopeFOV);
	void SetScopeActive(bool bActive);
	void PlayFireHaptics();
	void OnScopeExploit(bool bExploit);
	void OnPassengerChanged(bool bEnteredVehicle, int Seat, class APavlovPawn* PavPawn);
	void OnInteriorIntialized(class APavlovVehicle* Vehicle, int Seat, class UVehicleOccupant* VehicleOccupant);
	void HideActorInScope(class AActor* HideInScope);
	bool GunnerSocketOverride(struct FName* OverrideSocket);
	TArray<class AActor*> GetScopeHiddenActors();
	float GetScopeFOVAlpha();
	float GetScopeFOV();
	class USceneComponent* GetSceneCaptureParent();
};

// Class Pavlov.VehicleOccupant
// 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
class UVehicleOccupant : public UActorComponent
{
public:
	unsigned char                                      UnknownData_0E73[0x1];                                     // 0x00F0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIgnoreSeatRot;                                            // 0x00F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJYI[0x2];                                     // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SeatRotationMax;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideVehicle;                                              // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidePawn;                                                 // 0x00F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideInventory;                                            // 0x00FA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeDamagedInSeat;                                       // 0x00FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanPullPin;                                               // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4WVB[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVehicleInterior*                            VehicleInterior;                                           // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseInVehicleSoundMix;                                     // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDTK[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APavlovVehicle*                              Vehicle;                                                   // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleOccupant");
		return ptr;
	}



	void SetupInput(class UInputComponent* InputComponent);
	void RetryHideInventory();
	void RemoveVehicleInputServer();
	void PassengerChanged(bool bEnteredVehicle, int Seat, class APavlovPawn* PavPawn);
	bool OnLeaveVehicle();
	void OnEnteredVehicleClient(class APavlovVehicle* Vehicle, int Seat);
	void LeaveVehicleServer();
	bool IsDriver();
	void HideInScope(class AActor* HideActor);
	class APavlovVehicle* GetVehicle();
	struct FTransform GetSeatTransform();
	int GetSeat();
	class APavlovPawn* GetPawn();
	void ClientEnteredVehicle(class APavlovVehicle* InVehicle, int Seat);
	bool CanSendInput();
};

// Class Pavlov.VehicleOccupant_Prototyping
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UVehicleOccupant_Prototyping : public UVehicleOccupant
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Prototyping");
		return ptr;
	}



	void TriggerAxisRight(float Value);
	void TriggerAxisLeft(float Value);
	void ThrottleServer(float Value);
	void SteerServer(float Value);
	void MoveX(float Value);
};

// Class Pavlov.VehicleOccupant_Tank_Driver
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class UVehicleOccupant_Tank_Driver : public UVehicleOccupant
{
public:
	bool                                               bBindTriggerInput;                                         // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHGD[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LeftLever;                                                 // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightLever;                                                // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleInput;                                             // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Tank_Driver");
		return ptr;
	}



	void UpdateMovementInput();
	void TriggerAxisRight(float Value);
	void TriggerAxisLeft(float Value);
	class UTankVehicleMovement* GetTankMovementComponent();
};

// Class Pavlov.VehicleOccupant_Tank_Gunner
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UVehicleOccupant_Tank_Gunner : public UVehicleOccupant
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Tank_Gunner");
		return ptr;
	}



	void SetMachineGunRotation(const struct FRotator& MGRot);
	void ServerSetMGRotation(const struct FRotator& MGRot);
	void RightTriggerReleased();
	void RightTriggerPressed();
	void RightTrigger(bool bPressed);
	void LeftTriggerReleased();
	void LeftTriggerPressed();
	void LeftTrigger(bool bPressed);
};

// Class Pavlov.VehicleOccupant_Tank_Turret
// 0x0050 (FullSize[0x0168] - InheritedSize[0x0118])
class UVehicleOccupant_Tank_Turret : public UVehicleOccupant
{
public:
	struct FScriptMulticastDelegate                    OnTriggerDown;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bUseAdvancedInput;                                         // 0x0128(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1SN[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              YawHapticThreshold;                                        // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchHapticThreshold;                                      // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83UL[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHapticFeedbackEffect_Base*                  YawHapticsEffect;                                          // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHapticFeedbackEffect_Base*                  PitchHapticsEffect;                                        // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InputTurretRotation;                                       // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   LastSentInput;                                             // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastScopeFOVAlpha;                                         // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              YawInputHaptics;                                           // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PitchInputHaptics;                                         // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PK68[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleOccupant_Tank_Turret");
		return ptr;
	}



	void TurretZoomInput(float Input);
	void TurretYawInput(float Input);
	void TurretPitchInput(float Input);
	void ServerSetTurretRotation(const struct FVector2D& TurretRot, float ScopeFOV);
	void RightTriggerPressed();
	void OnAdvancedVehicleSettingsChanged(bool bUseAdvanced);
	void LeftTriggerPressed();
	void AddTurretYaw(float Yaw);
	void AddTurretPitch(float Pitch);
};

// Class Pavlov.VehicleSeat
// 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
class UVehicleSeat : public USceneComponent
{
public:
	unsigned char                                      UnknownData_78TU[0x8];                                     // 0x0238(0x0008) Fix Super Size
	float                                              CameraOffset;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SeatBounds;                                                // 0x0244(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxZDistance;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ThirdPersonSeatOffset;                                     // 0x0250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PelvisOffset;                                              // 0x025C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequence*                               SeatAnim;                                                  // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleSeat");
		return ptr;
	}



};

// Class Pavlov.VehicleSpawner
// 0x0048 (FullSize[0x0370] - InheritedSize[0x0328])
class AVehicleSpawner : public AActor
{
public:
	class UBillboardComponent*                         SpawnMarker;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                             ArrowComp;                                                 // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               VehicleSpawnList;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              VehicleRespawnTime;                                        // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialRespawnTime;                                        // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VehicleTeamID;                                             // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VehicleDespawnTime;                                        // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlySpawnInPush;                                          // 0x0358(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPJL[0x3];                                     // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ObjectiveId;                                               // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                SpawnVehicle_Handle;                                       // 0x0360(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APavlovVehicle*                              LastSpawnedVehicle;                                        // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VehicleSpawner");
		return ptr;
	}



	void VehicleDestroyed(class AActor* DestroyedActor);
	void StopVehicleSpawner();
	void StartVehicleSpawner();
	void OnGetVehicleClass(class UClass* VehicleClass);
};

// Class Pavlov.VoiceComponent
// 0x0058 (FullSize[0x0290] - InheritedSize[0x0238])
class UVoiceComponent : public USceneComponent
{
public:
	class UAudioComponent*                             AudioComp;                                                 // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundWaveProcedural*                        Sound;                                                     // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8PSH[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bTalking;                                                  // 0x0250(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EI90[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdleTime;                                                  // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0258(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OYVA[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           Attenuation;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                                 SoundClass;                                                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GSTR[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VoiceComponent");
		return ptr;
	}



	void OnEnvelopeValue(class USoundWave* PlayingSoundWave, float Value);
};

// Class Pavlov.Rocket
// 0x0038 (FullSize[0x0580] - InheritedSize[0x0548])
class ARocket : public ABullet
{
public:
	bool                                               bDebugRocket;                                              // 0x0548(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTankRound;                                              // 0x0549(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1YRW[0x2];                                     // 0x054A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDamage;                                                 // 0x054C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // 0x0550(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // 0x0554(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x0558(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04CW[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             SmokeTrailFX;                                              // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             SmokeTrailFXLQ;                                            // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    SmokeTrail;                                                // 0x0570(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLocalCopy;                                              // 0x0578(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IB8N[0x7];                                     // 0x0579(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Rocket");
		return ptr;
	}



	void OnDetonation(const struct FTransform& DecalTransform);
};

// Class Pavlov.RotationHandle
// 0x0030 (FullSize[0x0700] - InheritedSize[0x06D0])
class URotationHandle : public UVRHandleComponent
{
public:
	bool                                               bTopDownRotation;                                          // 0x06D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DS4I[0x7];                                     // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CenterSocket;                                              // 0x06D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_ERotationHandleOffset                       HandleOffsetType;                                          // 0x06E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BDB6[0x3];                                     // 0x06E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartingAngle;                                             // 0x06E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHandleRotation;                                          // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YBSF[0x8];                                     // 0x06F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.RotationHandle");
		return ptr;
	}



};

// Class Pavlov.Scoreboard
// 0x0070 (FullSize[0x03A8] - InheritedSize[0x0338])
class AScoreboard : public AHandMenu
{
public:
	class UStaticMeshComponent*                        PlaneMesh;                                                 // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCohtmlComponent*                            CohtmlComponent;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PTXH[0x10];                                    // 0x0348(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FScoreboardSlot>                     Team0Slots;                                                // 0x0358(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FScoreboardSlot>                     Team1Slots;                                                // 0x0368(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                MaxPlayers;                                                // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Team0Score;                                                // 0x037C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Team1Score;                                                // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                RoundsLeft;                                                // 0x0384(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	PavlovProxy_EPavlovGameModeType                    GameModeType;                                              // 0x0388(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GJ6J[0x3];                                     // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttackingTeam;                                             // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LocalTeam;                                                 // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                VerticalSlots;                                             // 0x0394(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNoTeams;                                                  // 0x0398(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4IUW[0x3];                                     // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RoundTime;                                                 // 0x039C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                RoundDuration;                                             // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3F8G[0x4];                                     // 0x03A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Scoreboard");
		return ptr;
	}



	void OnScriptingReady();
	void OnReadyForBindings();
	void OnAvatarUpdated(const struct FString& ProductId, const struct FString& PlatformId, class UTexture2D* AvatarTexture);
};

// Class Pavlov.ServerBrowser
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UServerBrowser : public UObject
{
public:
	bool                                               bUseNewPingMethod;                                         // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B9T6[0x57];                                    // 0x0029(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUpdating;                                                 // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotFull;                                                  // 0x0081(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotEmpty;                                                 // 0x0082(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoPassword;                                               // 0x0083(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GGY1[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GMFilter;                                                  // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerDetails>                      ServerList;                                                // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdate;                                                  // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ServerBrowser");
		return ptr;
	}



	void Update(bool bUpdatePings);
	void OrderServerListByPlayerCount(bool bDescending);
	TArray<struct FCombinedServerList> GenerateSortedCombinedList(TArray<struct FPavlovServerInfo> LobbyDetails, bool bAddServerList, bool bDescending);
};

// Class Pavlov.ServerBrowserModel
// 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
class UServerBrowserModel : public UUIModel
{
public:
	bool                                               bBusy;                                                     // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HVTM[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ActiveEntryId;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SortType;                                                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scroll;                                                    // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NeedlePosition;                                            // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUIServerBrowserEntryModel>          Entries;                                                   // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ServerBrowserModel");
		return ptr;
	}



};

// Class Pavlov.ServerBrowserV2
// 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
class UServerBrowserV2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnBrowserUpdated;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bUpdating;                                                 // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EServerSearchType                           ServerSearchType;                                          // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideFull;                                                 // 0x003A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideEmpty;                                                // 0x003B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidePasswordProtected;                                    // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateFavoritesOnly;                                      // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAQ3[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             RegionFilters;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             GMFilters;                                                 // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	Pavlov_EServerSortType                             ServerSortType;                                            // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CR9Z[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UServerContainer*>                    ServerList;                                                // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFavoriteServer>                     FavoriteServers;                                           // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                UpdateCount;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X6OE[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FServerPingInfo>       CommunityServerPingList;                                   // 0x0090(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct FString, struct FServerPingInfo>       LobbyServerPingList;                                       // 0x00E0(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UServerStatusHelper*                         PingHelper;                                                // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                                   LastUpdateTime;                                            // 0x0138(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ServerBrowserV2");
		return ptr;
	}



	void UpdateRegionFilters(Pavlov_EOnlineRegion Region, bool bAdd);
	void UpdateGMFilters(const struct FString& Filter, bool bAdd);
	void UpdateFavoritesOnly(bool bEnabled);
	void UpdateFavoriteServer(class UServerContainer* ServerContainer, bool bAdd);
	void SortServerList();
	void SetServerSortType(Pavlov_EServerSortType SortType);
	void SetServerSearchType(Pavlov_EServerSearchType SearchType);
	void SetHidePinLockedServers(bool bHide);
	void SetHideFullServers(bool bHide);
	void SetHideEmptyServers(bool bHide);
	void RefreshList();
	void OnLobbyUpdateComplete();
	void OnLobbyListUpdate(const struct FLobbySearchResult& SearchResult);
	void OnCommunityServerPingListComplete();
	void OnCommunityServerPingComplete(const struct FServerStatusInfo& StatusInfo, const struct FString& IPAddress);
	bool JoinServer(class UServerContainer* ServerContainer, const struct FString& Pin);
	bool HasRegionFilter(Pavlov_EOnlineRegion Region);
	class UServerContainer* GetServerContainerById(const struct FString& ID);
};

// Class Pavlov.ServerConnector
// 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
class UServerConnector : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_0ARJ[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UServerStatusHelper*                         StatusHelper;                                              // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5FT6[0x5];                                     // 0x00A8(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Pavlov_EConnectorFailureReason                     FailureReason;                                             // 0x00AD(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WCRR[0x2A];                                    // 0x00AE(0x002A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ServerConnector");
		return ptr;
	}



	void TickServerConnect();
	void StartConnection();
	void OnStatusTimeout();
	void OnStatusReceived(const struct FServerStatusInfo& StatusInfo, const struct FString& IPAddress);
	void OnServerConnectMapDownloaded(bool bSucceed, const struct FString& ID);
	void FailedToConnect();
};

// Class Pavlov.ServerContainer
// 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
class UServerContainer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPingUpdated;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FServerContainerInfo                        ServerContainerInfo;                                       // 0x0038(0x00F0) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bOfflineContainer;                                         // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VWA3[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastPingAlpha;                                             // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastUpdateAlpha;                                           // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OL4[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ServerContainer");
		return ptr;
	}



	void UpdatePing(int NewPing);
};

// Class Pavlov.ServerStatusHelper
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UServerStatusHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRecServerResponse;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerResponseTimeout;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bClient;                                                   // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKDY[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPavlovGameInstance*                         GameInstance;                                              // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ResponseTime;                                              // 0x0058(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bClientRecievedResponse;                                   // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H0X2[0x17];                                    // 0x0061(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                AutoCloseHandle;                                           // 0x0078(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ServerStatusHelper");
		return ptr;
	}



	void Stop();
	bool SendStringToAddress(const struct FString& SendString, const struct FString& Address);
	bool SendServerStatusUpdate(const struct FString& Pin, const struct FString& Address);
	bool SendDataToAddress(const struct FServerStatusMsg& SendMsg);
	bool IsConnected();
	bool GetServerStatusInfo(const struct FString& Pin, struct FServerStatusInfo* StatusInfo);
	bool GetServerInfo(const struct FString& Address, int Port, const struct FString& Pin, float AutoCloseTime);
	struct FString DataToString(TArray<unsigned char> Data);
};

// Class Pavlov.SettingsView
// 0x0040 (FullSize[0x04C8] - InheritedSize[0x0488])
class ASettingsView : public AContentView
{
public:
	class UStaticModel*                                StaticModel;                                               // 0x0488(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ETBM[0x38];                                    // 0x0490(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.SettingsView");
		return ptr;
	}



};

// Class Pavlov.Shell
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class AShell : public AActor
{
public:
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Shell");
		return ptr;
	}



	void SpawnHitEffect(const struct FHitResult& HitResult);
};

// Class Pavlov.VoiceManager
// 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
class AVoiceManager : public AActor
{
public:
	TMap<class APlayerState*, struct FPavlovVoicePacket> VoicePackets;                                              // 0x0328(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VoiceManager");
		return ptr;
	}



};

// Class Pavlov.VoiceModerationInstance
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class UVoiceModerationInstance : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_WXYH[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VoiceModerationInstance");
		return ptr;
	}



};

// Class Pavlov.VoiceRouter
// 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
class AVoiceRouter : public AActor
{
public:
	unsigned char                                      UnknownData_OGV3[0x24];                                    // 0x0328(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAllMuted;                                                 // 0x034C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AE0S[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VoiceRouter");
		return ptr;
	}



	void ServerOnVoice(const struct FPavlovVoicePacket& VoicePacket);
	void OnEncodedVoiceData(TArray<unsigned char> EncodedVoiceData);
	void ClientOnVoiceBunch(const struct FVoicePacketBunch& VoiceBunch);
};

// Class Pavlov.VoiceSource
// 0x00A8 (FullSize[0x00F0] - InheritedSize[0x0048])
class UVoiceSource : public UPavlovObject
{
public:
	unsigned char                                      UnknownData_RHWY[0xA8];                                    // 0x0048(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.VoiceSource");
		return ptr;
	}



	void SetCapture(bool bEnabled);
	void ResetCaptureDevice(const struct FString& DeviceName);
	bool IsCapturing();
	bool IsBroadcasting();
};

// Class Pavlov.Vote
// 0x00C0 (FullSize[0x0410] - InheritedSize[0x0350])
class AVote : public AStereoOverlay
{
public:
	unsigned char                                      UnknownData_LGU4[0x50];                                    // 0x0350(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      YesVotes;                                                  // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NoVotes;                                                   // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TimeLeft;                                                  // 0x03A2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EVoteState                                  State;                                                     // 0x03A3(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CensusNum;                                                 // 0x03A4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NP8I[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TeamId;                                                    // 0x03A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UIM3[0x4];                                     // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VoteInstigatorName;                                        // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VoteInstigator;                                            // 0x03C0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Param1;                                                    // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Param2;                                                    // 0x03E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoteTimer;                                                 // 0x03E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percentage;                                                // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamVote;                                                 // 0x03EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0B62[0x3];                                     // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VoteDuration;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GraceDuration;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreModerators;                                         // 0x03FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ZHA[0x3];                                     // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnVoteEnd;                                                 // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Vote");
		return ptr;
	}



	void OnVoteEnded(bool bSucceeded);
	void MulticastOnVoteEnded(bool bSucceeded);
	struct FText GetVotePromptMessage();
};

// Class Pavlov.Watch
// 0x0050 (FullSize[0x06F0] - InheritedSize[0x06A0])
class UWatch : public UTextureWidgetComponent
{
public:
	unsigned char                                      UnknownData_RQIG[0x14];                                    // 0x06A0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Health;                                                    // 0x06B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Armor;                                                     // 0x06B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasHelmet;                                                // 0x06BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7S9[0x3];                                     // 0x06BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  VictimAvatar;                                              // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillConfirmationOpacity;                                   // 0x06C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillConfirmationDuration;                                  // 0x06CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillConfirmationFadeSpeed;                                 // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EAGJ[0x4];                                     // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   KillConfirmationSound;                                     // 0x06D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  KillConfirmationFailoverAvatar;                            // 0x06E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QR6I[0x8];                                     // 0x06E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Watch");
		return ptr;
	}



	void OnKillfeedEntry(const struct FKillfeedEntry& NewEntry);
	void OnKillConfirmationPush(class APavlovPlayerState* Victim);
	class USceneComponent* GetWatchAttachComponent();
};

// Class Pavlov.Waypoint
// 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
class AWaypoint : public AActor
{
public:
	TArray<struct FWaypointInfo>                       WaypointInfos;                                             // 0x0328(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FS7I[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AWaypoint*                                   NextA;                                                     // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWaypoint*                                   NextB;                                                     // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Waypoint");
		return ptr;
	}



	class AWaypoint* GetNextWaypointTo(class AWaypoint* TargetWaypoint, int Seed);
	class AWaypoint* STATIC_GetClosestWaypoint(class UObject* WorldContextObject, const struct FVector& Location, bool bOnlyLeaf, bool bUseNavMesh);
};

// Class Pavlov.WeaponFilterData
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UWeaponFilterData : public UDataAsset
{
public:
	TArray<class UClass*>                              RiflesOnlyClasses;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              PistolsOnlyClasses;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      GrenadesOnlyClass;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      KnivesOnlyClass;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.WeaponFilterData");
		return ptr;
	}



	class UClass* GetRandomRifle();
	class UClass* GetRandomPistol();
};

// Class Pavlov.WebleyGunState
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UWebleyGunState : public URevolverGunState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.WebleyGunState");
		return ptr;
	}



};

// Class Pavlov.Workshop
// 0x0478 (FullSize[0x04A0] - InheritedSize[0x0028])
class UWorkshop : public UObject
{
public:
	unsigned char                                      UnknownData_1BKJ[0x220];                                   // 0x0028(0x0220) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UTexture2D*>              MapPreviews;                                               // 0x0248(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_89YG[0x109];                                   // 0x0298(0x0109) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bQueryingCustomMaps;                                       // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ONG1[0x6];                                     // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWorkshopItem>                       CustomMaps;                                                // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bSteamServerConnected;                                     // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PYLV[0x7];                                     // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPavlovGameInstance*                         Instance;                                                  // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PWMT[0x50];                                    // 0x03C8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCustomMapDownloadCompleted;                              // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSpecificCustomMapQueryCompleted;                         // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomMapQueryCompleted;                                 // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSubscriptionChanged;                                     // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDownloadBegin;                                           // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDownloadProgress;                                        // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPreviewLoaded;                                           // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestUserVote;                                         // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0L7[0x8];                                     // 0x0498(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Workshop");
		return ptr;
	}



	void Vote(const struct FName& ID, bool bUp);
	void Unsubscribe(const struct FName& ID);
	void SubscribeTo(const struct FName& ID);
	void RequestUserVote(const struct FName& ID);
	void QueryForSpecificCustomMaps(TArray<struct FName> UniqueIds);
	void QueryForCustomMaps(Pavlov_EWorkshopQueryType QueryType);
	int QueryDownloadProgress();
	void OnCustomMapDownloaded(bool bSucceed, const struct FString& ID);
	void OnAfterMount();
	bool IsSubscribedTo(const struct FName& ID);
	bool IsDownloadingMap();
	bool IsCustomMapId(const struct FString& CustomMapId);
	class UTexture2D* GetPreviewTexture(const struct FName& ID);
	struct FName GetCurrentDownloadId();
	void DownloadTest();
	void DownloadCustomMap(const struct FString& ID);
	void CheckForDownload();
};

// Class Pavlov.WoundAux
// 0x0090 (FullSize[0x03B8] - InheritedSize[0x0328])
class AWoundAux : public AActor
{
public:
	struct FWoundInfo                                  WoundInfo;                                                 // 0x0328(0x0030) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       PreBakedName;                                              // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPreBakedWound                              PreBakedData;                                              // 0x0360(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UWoundComponent*                             WoundComponent;                                            // 0x03B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.WoundAux");
		return ptr;
	}



	class UAvatarSkin* GetAvatarSkin();
	struct FName GetAttachSocket();
};

// Class Pavlov.WoundComponent
// 0x01F8 (FullSize[0x02E8] - InheritedSize[0x00F0])
class UWoundComponent : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      GoreMeshComp;                                              // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        SkullMeshComp;                                             // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AWoundAux*>                           WoundAuxs;                                                 // 0x0100(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, struct FWoundBoneState>         BoneStates;                                                // 0x0110(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	Pavlov_EWoundMaterialType                          MaterialType;                                              // 0x0160(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N7EJ[0x7];                                     // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, struct FVector4>                         MinorWounds;                                               // 0x0168(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int, struct FPreBakedWound>                   MajorWounds;                                               // 0x01B8(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      MasterPoseComponent;                                       // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWoundMeshInstance>                  Instances;                                                 // 0x0210(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                MinorHitCount;                                             // 0x0220(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMinorHits;                                              // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinorWoundScale;                                           // 0x0228(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MajorHitCount;                                             // 0x022C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMajorHits;                                              // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMajorHitRecycle;                                     // 0x0234(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowDynamicLookup;                                       // 0x0235(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDDZ[0x2];                                     // 0x0236(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UMaterialInterface*, struct FWoundMaterialSet> MaterialMap;                                               // 0x0238(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      BloodPuddleClass;                                          // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  PreBakedWounds;                                            // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HeadBoneName;                                              // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               GoreMesh;                                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   DismemberSound;                                            // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DismemberParticle;                                         // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMemberFX>                           MemberFXSetup;                                             // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDismember;                                               // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMaterialCreated;                                         // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.WoundComponent");
		return ptr;
	}



	void UpdateBaseMesh(class USkeletalMeshComponent* MeshComponent, class USkeletalMesh* UpdateMesh);
	void SetMasterPoseComponent(class USkeletalMeshComponent* MeshComponent);
	void ResetWounds();
	void ReportHit(const struct FWoundInfo& WoundInfo);
	struct FWoundBoneState GetBoneState(const struct FName& BoneName);
	void ApplyInheritedCustomDepthValues(class UMeshComponent* MeshComponent);
	void AddMesh(class USkeletalMeshComponent* MeshComponent);
};

// Class Pavlov.Zombie
// 0x0100 (FullSize[0x0930] - InheritedSize[0x0830])
class AZombie : public AZAICharacter
{
public:
	class UWoundComponent*                             WoundComponent;                                            // 0x0830(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GFDR[0x48];                                    // 0x0838(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Health;                                                    // 0x0880(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2FGF[0x4];                                     // 0x0884(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FZombieHitInfo                              LastHitInfo;                                               // 0x0888(0x0038) (Net, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                                  BalanceTable;                                              // 0x08C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHealth;                                                 // 0x08C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTJP[0x4];                                     // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   HitSound;                                                  // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HitSoundShooter;                                           // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             HitEffect;                                                 // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HeadshotSound;                                             // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   HeadshotSound2D;                                           // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ThirdPersonKnockBackSound;                                 // 0x08F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             HeadshotParticle;                                          // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             SprintFootStepFX;                                          // 0x0908(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             JockeyFootStepFX;                                          // 0x0910(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             WalkFootStepFX;                                            // 0x0918(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             LandedFX;                                                  // 0x0920(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WoundClass;                                                // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.Zombie");
		return ptr;
	}



	void OnWoundMaterialCreated(class UMaterialInstanceDynamic* MaterialInstance);
	void MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin);
	void MulticastOnHit(const struct FZombieHitInfo& HitInfo);
	class UWoundComponent* GetWoundComponent();
	void ApplyLastHitEffect();
};

// Class Pavlov.ZombieAIController
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class AZombieAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ZombieAIController");
		return ptr;
	}



};

// Class Pavlov.ZombieAnimInstance
// 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
class UZombieAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_UWG9[0x8];                                     // 0x0358(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ZombieAnimInstance");
		return ptr;
	}



};

// Class Pavlov.ZombieSkeletalMeshComponent
// 0x0038 (FullSize[0x0B60] - InheritedSize[0x0B28])
class UZombieSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData_99VZ[0x8];                                     // 0x0B28(0x0008) Fix Super Size
	unsigned char                                      UnknownData_9G4U[0x30];                                    // 0x0B30(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Pavlov.ZombieSkeletalMeshComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
