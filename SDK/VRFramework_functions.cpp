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
//		Offset -> 0x002A6AE0
//		Name   -> Function VRFramework.VRAsyncLoader.OnAsyncSpawnSoundAttached
//		Flags  -> (Final, Native, Protected, HasDefaults)
// Parameters:
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::OnAsyncSpawnSoundAttached(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.OnAsyncSpawnSoundAttached");

	UVRAsyncLoader_OnAsyncSpawnSoundAttached_Params params {};
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A6780
//		Name   -> Function VRFramework.VRAsyncLoader.OnAsyncSpawnSoundAtLocation
//		Flags  -> (Final, Native, Protected, HasDefaults)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::OnAsyncSpawnSoundAtLocation(class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.OnAsyncSpawnSoundAtLocation");

	UVRAsyncLoader_OnAsyncSpawnSoundAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction VRFramework.VRAsyncLoader.OnAsyncSpawnSound__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UAudioComponent*                             AudioComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::OnAsyncSpawnSound__DelegateSignature(class UAudioComponent* AudioComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction VRFramework.VRAsyncLoader.OnAsyncSpawnSound__DelegateSignature");

	UVRAsyncLoader_OnAsyncSpawnSound__DelegateSignature_Params params {};
	params.AudioComp = AudioComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A6300
//		Name   -> Function VRFramework.VRAsyncLoader.OnAsyncPlayWeaponHandlingSound
//		Flags  -> (Final, Native, Protected, HasDefaults)
// Parameters:
//		bool                                               bPrimaryPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::OnAsyncPlayWeaponHandlingSound(bool bPrimaryPlayer, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.OnAsyncPlayWeaponHandlingSound");

	UVRAsyncLoader_OnAsyncPlayWeaponHandlingSound_Params params {};
	params.bPrimaryPlayer = bPrimaryPlayer;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A6090
//		Name   -> Function VRFramework.VRAsyncLoader.OnAsyncPlaySound2D
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::OnAsyncPlaySound2D(class UObject* WorldContextObject, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.OnAsyncPlaySound2D");

	UVRAsyncLoader_OnAsyncPlaySound2D_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.ConcurrencySettings = ConcurrencySettings;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5C00
//		Name   -> Function VRFramework.VRAsyncLoader.OnAsyncPayloadSpawnSoundAttached
//		Flags  -> (Final, Native, Protected, HasDefaults)
// Parameters:
//		struct FScriptDelegate                             OnAsyncSpawnSoundDelegate                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::OnAsyncPayloadSpawnSoundAttached(const struct FScriptDelegate& OnAsyncSpawnSoundDelegate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.OnAsyncPayloadSpawnSoundAttached");

	UVRAsyncLoader_OnAsyncPayloadSpawnSoundAttached_Params params {};
	params.OnAsyncSpawnSoundDelegate = OnAsyncSpawnSoundDelegate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5830
//		Name   -> Function VRFramework.VRAsyncLoader.OnAsyncPayloadSpawnSoundAtLocation
//		Flags  -> (Final, Native, Protected, HasDefaults)
// Parameters:
//		struct FScriptDelegate                             OnAsyncSpawnSoundDelegate                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::OnAsyncPayloadSpawnSoundAtLocation(const struct FScriptDelegate& OnAsyncSpawnSoundDelegate, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.OnAsyncPayloadSpawnSoundAtLocation");

	UVRAsyncLoader_OnAsyncPayloadSpawnSoundAtLocation_Params params {};
	params.OnAsyncSpawnSoundDelegate = OnAsyncSpawnSoundDelegate;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A4C70
//		Name   -> Function VRFramework.VRAsyncLoader.AsyncSpawnSoundAttached
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::AsyncSpawnSoundAttached(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.AsyncSpawnSoundAttached");

	UVRAsyncLoader_AsyncSpawnSoundAttached_Params params {};
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A4910
//		Name   -> Function VRFramework.VRAsyncLoader.AsyncSpawnSoundAtLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::AsyncSpawnSoundAtLocation(class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.AsyncSpawnSoundAtLocation");

	UVRAsyncLoader_AsyncSpawnSoundAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A4490
//		Name   -> Function VRFramework.VRAsyncLoader.AsyncPlayWeaponHandlingSound
//		Flags  -> (Final, Native, Public, HasDefaults)
// Parameters:
//		bool                                               bPrimaryPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::AsyncPlayWeaponHandlingSound(bool bPrimaryPlayer, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.AsyncPlayWeaponHandlingSound");

	UVRAsyncLoader_AsyncPlayWeaponHandlingSound_Params params {};
	params.bPrimaryPlayer = bPrimaryPlayer;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A4220
//		Name   -> Function VRFramework.VRAsyncLoader.AsyncPlaySound2D
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::AsyncPlaySound2D(class UObject* WorldContextObject, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.AsyncPlaySound2D");

	UVRAsyncLoader_AsyncPlaySound2D_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.ConcurrencySettings = ConcurrencySettings;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A3D90
//		Name   -> Function VRFramework.VRAsyncLoader.AsyncPayloadSpawnSoundAttached
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnAsyncSpawnSoundDelegate                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::AsyncPayloadSpawnSoundAttached(const struct FScriptDelegate& OnAsyncSpawnSoundDelegate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.AsyncPayloadSpawnSoundAttached");

	UVRAsyncLoader_AsyncPayloadSpawnSoundAttached_Params params {};
	params.OnAsyncSpawnSoundDelegate = OnAsyncSpawnSoundDelegate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A39C0
//		Name   -> Function VRFramework.VRAsyncLoader.AsyncPayloadSpawnSoundAtLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnAsyncSpawnSoundDelegate                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRAsyncLoader::AsyncPayloadSpawnSoundAtLocation(const struct FScriptDelegate& OnAsyncSpawnSoundDelegate, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRAsyncLoader.AsyncPayloadSpawnSoundAtLocation");

	UVRAsyncLoader_AsyncPayloadSpawnSoundAtLocation_Params params {};
	params.OnAsyncSpawnSoundDelegate = OnAsyncSpawnSoundDelegate;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7A20
//		Name   -> Function VRFramework.VRBullet.OnProjectileStop
//		Flags  -> (Native, Protected, HasOutParms)
// Parameters:
//		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AVRBullet::OnProjectileStop(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.OnProjectileStop");

	AVRBullet_OnProjectileStop_Params params {};
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7850
//		Name   -> Function VRFramework.VRBullet.OnImpact
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AVRBullet::OnImpact(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.OnImpact");

	AVRBullet_OnImpact_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A6F20
//		Name   -> Function VRFramework.VRBullet.OnBuzzingOverlap
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AVRBullet::OnBuzzingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.OnBuzzingOverlap");

	AVRBullet_OnBuzzingOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A39A0
//		Name   -> Function VRFramework.VRBullet.ApplyImpactForce
//		Flags  -> (Final, Native, Protected)
void AVRBullet::ApplyImpactForce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.ApplyImpactForce");

	AVRBullet_ApplyImpactForce_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5440
//		Name   -> Function VRFramework.VRBulletManager.Get
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVRBulletManager*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AVRBulletManager* AVRBulletManager::STATIC_Get(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRBulletManager.Get");

	AVRBulletManager_Get_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5790
//		Name   -> Function VRFramework.VRBulletPenetrationInterface.IsThinSurface
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRBulletPenetrationInterface::IsThinSurface(class UPrimitiveComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRBulletPenetrationInterface.IsThinSurface");

	UVRBulletPenetrationInterface_IsThinSurface_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A7E80
//		Name   -> Function VRFramework.VRController.UnGrab
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRController::UnGrab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.UnGrab");

	AVRController_UnGrab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7DF0
//		Name   -> Function VRFramework.VRController.TriggerChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bNewTrigger                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::TriggerChanged(bool bNewTrigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.TriggerChanged");

	AVRController_TriggerChanged_Params params {};
	params.bNewTrigger = bNewTrigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7DD0
//		Name   -> Function VRFramework.VRController.Teleport
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRController::Teleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.Teleport");

	AVRController_Teleport_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7DB0
//		Name   -> Function VRFramework.VRController.StopHapticEffect
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRController::StopHapticEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.StopHapticEffect");

	AVRController_StopHapticEffect_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7CE0
//		Name   -> Function VRFramework.VRController.SetPlayArea
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVRPlayArea*                                 NewPlayArea                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::SetPlayArea(class AVRPlayArea* NewPlayArea, bool bTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.SetPlayArea");

	AVRController_SetPlayArea_Params params {};
	params.NewPlayArea = NewPlayArea;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7C20
//		Name   -> Function VRFramework.VRController.SetHapticValues
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Amplitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::SetHapticValues(float Amplitude, float Frequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.SetHapticValues");

	AVRController_SetHapticValues_Params params {};
	params.Amplitude = Amplitude;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7C00
//		Name   -> Function VRFramework.VRController.PrepareTeleport
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRController::PrepareTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.PrepareTeleport");

	AVRController_PrepareTeleport_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7B80
//		Name   -> Function VRFramework.VRController.PlayHapticEffect
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UHapticFeedbackEffect_Base*                  HapticEffect                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.PlayHapticEffect");

	AVRController_PlayHapticEffect_Params params {};
	params.HapticEffect = HapticEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7B00
//		Name   -> Function VRFramework.VRController.PlayHaptic
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		VRFramework_EVRHapticType                          Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::PlayHaptic(VRFramework_EVRHapticType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.PlayHaptic");

	AVRController_PlayHaptic_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7AE0
//		Name   -> Function VRFramework.VRController.OnRep_HandType
//		Flags  -> (Final, Native, Public)
void AVRController::OnRep_HandType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnRep_HandType");

	AVRController_OnRep_HandType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A79A0
//		Name   -> Function VRFramework.VRController.OnModeChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		VRFramework_EVRControllerMode                      From                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::OnModeChanged(VRFramework_EVRControllerMode From)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnModeChanged");

	AVRController_OnModeChanged_Params params {};
	params.From = From;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7910
//		Name   -> Function VRFramework.VRController.OnInvalidTeleportOverlap
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::OnInvalidTeleportOverlap(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnInvalidTeleportOverlap");

	AVRController_OnInvalidTeleportOverlap_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7830
//		Name   -> Function VRFramework.VRController.OnImminentTeleport
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRController::OnImminentTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnImminentTeleport");

	AVRController_OnImminentTeleport_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7730
//		Name   -> Function VRFramework.VRController.OnGrabVolumeEndOverlapOld
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::OnGrabVolumeEndOverlapOld(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeEndOverlapOld");

	AVRController_OnGrabVolumeEndOverlapOld_Params params {};
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A75F0
//		Name   -> Function VRFramework.VRController.OnGrabVolumeEndOverlap
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::OnGrabVolumeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeEndOverlap");

	AVRController_OnGrabVolumeEndOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7420
//		Name   -> Function VRFramework.VRController.OnGrabVolumeBeginOverlapOld
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AVRController::OnGrabVolumeBeginOverlapOld(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeBeginOverlapOld");

	AVRController_OnGrabVolumeBeginOverlapOld_Params params {};
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7230
//		Name   -> Function VRFramework.VRController.OnGrabVolumeBeginOverlap
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AVRController::OnGrabVolumeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeBeginOverlap");

	AVRController_OnGrabVolumeBeginOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A71A0
//		Name   -> Function VRFramework.VRController.OnGrabEndOverlap
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::OnGrabEndOverlap(class UPrimitiveComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabEndOverlap");

	AVRController_OnGrabEndOverlap_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7110
//		Name   -> Function VRFramework.VRController.OnGrabBeginOverlap
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::OnGrabBeginOverlap(class UPrimitiveComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabBeginOverlap");

	AVRController_OnGrabBeginOverlap_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5760
//		Name   -> Function VRFramework.VRController.IsForceTubeConnected
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRController::IsForceTubeConnected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.IsForceTubeConnected");

	AVRController_IsForceTubeConnected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A56D0
//		Name   -> Function VRFramework.VRController.GripChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bNewGrip                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::GripChanged(bool bNewGrip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GripChanged");

	AVRController_GripChanged_Params params {};
	params.bNewGrip = bNewGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5600
//		Name   -> Function VRFramework.VRController.GrabManual
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bByGrip                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::GrabManual(class UPrimitiveComponent* Component, bool bByGrip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GrabManual");

	AVRController_GrabManual_Params params {};
	params.Component = Component;
	params.bByGrip = bByGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5570
//		Name   -> Function VRFramework.VRController.Grab
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bByGrip                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::Grab(bool bByGrip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.Grab");

	AVRController_Grab_Params params {};
	params.bByGrip = bByGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5540
//		Name   -> Function VRFramework.VRController.GetPawnController
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* AVRController::GetPawnController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetPawnController");

	AVRController_GetPawnController_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5510
//		Name   -> Function VRFramework.VRController.GetPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AVRPawn*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AVRPawn* AVRController::GetPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetPawn");

	AVRController_GetPawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A54E0
//		Name   -> Function VRFramework.VRController.GetHandType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		InputCore_EControllerHand                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
InputCore_EControllerHand AVRController::GetHandType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetHandType");

	AVRController_GetHandType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A54C0
//		Name   -> Function VRFramework.VRController.GetGrabVolume
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* AVRController::GetGrabVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetGrabVolume");

	AVRController_GetGrabVolume_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5420
//		Name   -> Function VRFramework.VRController.GenericHaptic
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRController::GenericHaptic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GenericHaptic");

	AVRController_GenericHaptic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5310
//		Name   -> Function VRFramework.VRController.ForceTubeShotHaptics
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bSingleShot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      RumblePower                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              RumbleDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::ForceTubeShotHaptics(bool bSingleShot, unsigned char RumblePower, float RumbleDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.ForceTubeShotHaptics");

	AVRController_ForceTubeShotHaptics_Params params {};
	params.bSingleShot = bSingleShot;
	params.RumblePower = RumblePower;
	params.RumbleDuration = RumbleDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5280
//		Name   -> Function VRFramework.VRController.EmulateTrigger
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::EmulateTrigger(bool bPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.EmulateTrigger");

	AVRController_EmulateTrigger_Params params {};
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A51F0
//		Name   -> Function VRFramework.VRController.EmulateMenu
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::EmulateMenu(bool bPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.EmulateMenu");

	AVRController_EmulateMenu_Params params {};
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5160
//		Name   -> Function VRFramework.VRController.EmulateGrip
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::EmulateGrip(bool bPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.EmulateGrip");

	AVRController_EmulateGrip_Params params {};
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A5130
//		Name   -> Function VRFramework.VRController.CouldGrab
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRController::CouldGrab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.CouldGrab");

	AVRController_CouldGrab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A50B0
//		Name   -> Function VRFramework.VRController.ChangeMode
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		VRFramework_EVRControllerMode                      To                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRController::ChangeMode(VRFramework_EVRControllerMode To)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.ChangeMode");

	AVRController_ChangeMode_Params params {};
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAAA0
//		Name   -> Function VRFramework.VRDynamicHelperComponent.OnWake
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         WakingComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRDynamicHelperComponent::OnWake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRDynamicHelperComponent.OnWake");

	UVRDynamicHelperComponent_OnWake_Params params {};
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA9A0
//		Name   -> Function VRFramework.VRDynamicHelperComponent.OnSleep
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         SleepingComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRDynamicHelperComponent::OnSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRDynamicHelperComponent.OnSleep");

	UVRDynamicHelperComponent_OnSleep_Params params {};
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB4C0
//		Name   -> Function VRFramework.VRGrabInterface.UseSoftGrabConstraint
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRGrabInterface::UseSoftGrabConstraint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGrabInterface.UseSoftGrabConstraint");

	UVRGrabInterface_UseSoftGrabConstraint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AB420
//		Name   -> Function VRFramework.VRGrabInterface.UnGrabbed
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRController*                               Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRGrabInterface::UnGrabbed(class AVRController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGrabInterface.UnGrabbed");

	UVRGrabInterface_UnGrabbed_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA280
//		Name   -> Function VRFramework.VRGrabInterface.Grabbed
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRController*                               Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRGrabInterface::Grabbed(class AVRController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGrabInterface.Grabbed");

	UVRGrabInterface_Grabbed_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E7C0
//		Name   -> Function VRFramework.VRItem.Used
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bJustPicked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::Used(bool bJustPicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Used");

	AVRItem_Used_Params params {};
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00217AF0
//		Name   -> Function VRFramework.VRItem.Use
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRItem::Use()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Use");

	AVRItem_Use_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AF340
//		Name   -> Function VRFramework.VRItem.SpawnPickSound
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRItemController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::SpawnPickSound(class AVRItemController* ByController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SpawnPickSound");

	AVRItem_SpawnPickSound_Params params {};
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function VRFramework.VRItem.ShouldSelfDestroy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRItem::ShouldSelfDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.ShouldSelfDestroy");

	AVRItem_ShouldSelfDestroy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function VRFramework.VRItem.ShouldNotSelfDestroy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRItem::ShouldNotSelfDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.ShouldNotSelfDestroy");

	AVRItem_ShouldNotSelfDestroy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AF2B0
//		Name   -> Function VRFramework.VRItem.SetupVehicleCollision
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bPhysicalize                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::SetupVehicleCollision(bool bPhysicalize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SetupVehicleCollision");

	AVRItem_SetupVehicleCollision_Params params {};
	params.bPhysicalize = bPhysicalize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AF1F0
//		Name   -> Function VRFramework.VRItem.SetNeverDestroyForInactivity
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNeverDestroy                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::SetNeverDestroyForInactivity(bool bNeverDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SetNeverDestroyForInactivity");

	AVRItem_SetNeverDestroyForInactivity_Params params {};
	params.bNeverDestroy = bNeverDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AF120
//		Name   -> Function VRFramework.VRItem.SetController
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AVRItemController*                           NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNetUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::SetController(class AVRItemController* NewController, bool bNetUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SetController");

	AVRItem_SetController_Params params {};
	params.NewController = NewController;
	params.bNetUpdate = bNetUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEF50
//		Name   -> Function VRFramework.VRItem.SetAttachParent
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNetUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::SetAttachParent(class AVRItem* Item, bool bNetUpdate, unsigned char Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SetAttachParent");

	AVRItem_SetAttachParent_Params params {};
	params.Item = Item;
	params.bNetUpdate = bNetUpdate;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEC70
//		Name   -> Function VRFramework.VRItem.SelfDestroy
//		Flags  -> (Native, Protected)
void AVRItem::SelfDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SelfDestroy");

	AVRItem_SelfDestroy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEAE0
//		Name   -> Function VRFramework.VRItem.Physicalize
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::Physicalize(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Physicalize");

	AVRItem_Physicalize_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEA60
//		Name   -> Function VRFramework.VRItem.OverrideGripSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAnimSequence*                               GripAnimSequence                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::OverrideGripSequence(class UAnimSequence* GripAnimSequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OverrideGripSequence");

	AVRItem_OverrideGripSequence_Params params {};
	params.GripAnimSequence = GripAnimSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023E390
//		Name   -> Function VRFramework.VRItem.OnRep_Parent
//		Flags  -> (Native, Protected)
void AVRItem::OnRep_Parent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnRep_Parent");

	AVRItem_OnRep_Parent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEA20
//		Name   -> Function VRFramework.VRItem.OnRep_ItemState
//		Flags  -> (Native, Protected)
void AVRItem::OnRep_ItemState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnRep_ItemState");

	AVRItem_OnRep_ItemState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D520
//		Name   -> Function VRFramework.VRItem.OnRep_Controller
//		Flags  -> (Native, Protected)
void AVRItem::OnRep_Controller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnRep_Controller");

	AVRItem_OnRep_Controller_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE8F0
//		Name   -> Function VRFramework.VRItem.OnPredictionTimeout
//		Flags  -> (Final, Native, Protected)
void AVRItem::OnPredictionTimeout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPredictionTimeout");

	AVRItem_OnPredictionTimeout_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE8D0
//		Name   -> Function VRFramework.VRItem.OnPredictionCorrect
//		Flags  -> (Native, Protected)
void AVRItem::OnPredictionCorrect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPredictionCorrect");

	AVRItem_OnPredictionCorrect_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE840
//		Name   -> Function VRFramework.VRItem.OnPick
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRItemController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::OnPick(class AVRItemController* ByController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPick");

	AVRItem_OnPick_Params params {};
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE770
//		Name   -> Function VRFramework.VRItem.OnPhysicsWake
//		Flags  -> (Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         SleepingComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::OnPhysicsWake(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPhysicsWake");

	AVRItem_OnPhysicsWake_Params params {};
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE6A0
//		Name   -> Function VRFramework.VRItem.OnPhysicsSleep
//		Flags  -> (Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         SleepingComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::OnPhysicsSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPhysicsSleep");

	AVRItem_OnPhysicsSleep_Params params {};
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7110
//		Name   -> Function VRFramework.VRItem.OnParentChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRItem*                                     ParentItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::OnParentChanged(class AVRItem* ParentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnParentChanged");

	AVRItem_OnParentChanged_Params params {};
	params.ParentItem = ParentItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE680
//		Name   -> Function VRFramework.VRItem.OnDrop
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRItem::OnDrop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnDrop");

	AVRItem_OnDrop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE660
//		Name   -> Function VRFramework.VRItem.OnAssetLoaded
//		Flags  -> (Native, Protected)
void AVRItem::OnAssetLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnAssetLoaded");

	AVRItem_OnAssetLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE560
//		Name   -> Function VRFramework.VRItem.MulticastUpdateState
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
//		class AVRItemController*                           RequestedController                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVRItem*                                     RequestedParent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      RequestedParentSlot                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItem::MulticastUpdateState(class AVRItemController* RequestedController, class AVRItem* RequestedParent, unsigned char RequestedParentSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.MulticastUpdateState");

	AVRItem_MulticastUpdateState_Params params {};
	params.RequestedController = RequestedController;
	params.RequestedParent = RequestedParent;
	params.RequestedParentSlot = RequestedParentSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D6B0
//		Name   -> Function VRFramework.VRItem.MulticastStateSanityCheck
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
void AVRItem::MulticastStateSanityCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.MulticastStateSanityCheck");

	AVRItem_MulticastStateSanityCheck_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE540
//		Name   -> Function VRFramework.VRItem.MakeDormant
//		Flags  -> (Final, Native, Protected)
void AVRItem::MakeDormant()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.MakeDormant");

	AVRItem_MakeDormant_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE430
//		Name   -> Function VRFramework.VRItem.IsBlocked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRItem::IsBlocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.IsBlocked");

	AVRItem_IsBlocked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE340
//		Name   -> Function VRFramework.VRItem.HasSequenceAnimation
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRItem::HasSequenceAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.HasSequenceAnimation");

	AVRItem_HasSequenceAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE1E0
//		Name   -> Function VRFramework.VRItem.GetSequenceTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AVRItem::GetSequenceTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.GetSequenceTransform");

	AVRItem_GetSequenceTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE1B0
//		Name   -> Function VRFramework.VRItem.GetSequenceAnimation
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UAnimSequence*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimSequence* AVRItem::GetSequenceAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.GetSequenceAnimation");

	AVRItem_GetSequenceAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADE40
//		Name   -> Function VRFramework.VRItem.DestroyNow
//		Flags  -> (Final, Native, Protected)
void AVRItem::DestroyNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.DestroyNow");

	AVRItem_DestroyNow_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A7830
//		Name   -> Function VRFramework.VRItem.Cycle
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRItem::Cycle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Cycle");

	AVRItem_Cycle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002ADDA0
//		Name   -> Function VRFramework.VRItem.CanGetPickedBy
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRItemController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRItem::CanGetPickedBy(class AVRItemController* ByController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.CanGetPickedBy");

	AVRItem_CanGetPickedBy_Params params {};
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AB4A0
//		Name   -> Function VRFramework.VRGun.UngrabChargingHandle
//		Flags  -> (Final, Native, Protected)
void AVRGun::UngrabChargingHandle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.UngrabChargingHandle");

	AVRGun_UngrabChargingHandle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB310
//		Name   -> Function VRFramework.VRGun.SpawnGunHandlingSoundAtComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USoundCue*                                   SoundCue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::SpawnGunHandlingSoundAtComponent(class USoundCue* SoundCue, class USceneComponent* Component, bool bReplicate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.SpawnGunHandlingSoundAtComponent");

	AVRGun_SpawnGunHandlingSoundAtComponent_Params params {};
	params.SoundCue = SoundCue;
	params.Component = Component;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB200
//		Name   -> Function VRFramework.VRGun.SpawnGunHandlingSound
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class USoundCue*                                   SoundCue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     LocalOffset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::SpawnGunHandlingSound(class USoundCue* SoundCue, const struct FVector& LocalOffset, bool bReplicate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.SpawnGunHandlingSound");

	AVRGun_SpawnGunHandlingSound_Params params {};
	params.SoundCue = SoundCue;
	params.LocalOffset = LocalOffset;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB1E0
//		Name   -> Function VRFramework.VRGun.SlapBolt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRGun::SlapBolt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.SlapBolt");

	AVRGun_SlapBolt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB120
//		Name   -> Function VRFramework.VRGun.ServerUpdateState
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		TArray<unsigned char>                              RawState                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AVRGun::ServerUpdateState(TArray<unsigned char> RawState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerUpdateState");

	AVRGun_ServerUpdateState_Params params {};
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AB060
//		Name   -> Function VRFramework.VRGun.ServerTrigger
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		bool                                               bPulled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::ServerTrigger(bool bPulled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerTrigger");

	AVRGun_ServerTrigger_Params params {};
	params.bPulled = bPulled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAFA0
//		Name   -> Function VRFramework.VRGun.ServerSpawnGunHandlingSound
//		Flags  -> (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		class USoundCue*                                   SoundCue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::ServerSpawnGunHandlingSound(class USoundCue* SoundCue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerSpawnGunHandlingSound");

	AVRGun_ServerSpawnGunHandlingSound_Params params {};
	params.SoundCue = SoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAF50
//		Name   -> Function VRFramework.VRGun.ServerReleaseMagazine
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AVRGun::ServerReleaseMagazine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerReleaseMagazine");

	AVRGun_ServerReleaseMagazine_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAF00
//		Name   -> Function VRFramework.VRGun.ServerReleaseBolt
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AVRGun::ServerReleaseBolt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerReleaseBolt");

	AVRGun_ServerReleaseBolt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAE40
//		Name   -> Function VRFramework.VRGun.ServerLoadMagazine
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		class AVRMagazine*                                 NewMagazine                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::ServerLoadMagazine(class AVRMagazine* NewMagazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerLoadMagazine");

	AVRGun_ServerLoadMagazine_Params params {};
	params.NewMagazine = NewMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AADF0
//		Name   -> Function VRFramework.VRGun.ServerLoadChamber
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AVRGun::ServerLoadChamber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerLoadChamber");

	AVRGun_ServerLoadChamber_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AADA0
//		Name   -> Function VRFramework.VRGun.ServerCycleFireMode
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AVRGun::ServerCycleFireMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerCycleFireMode");

	AVRGun_ServerCycleFireMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAD50
//		Name   -> Function VRFramework.VRGun.ServerCock
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AVRGun::ServerCock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerCock");

	AVRGun_ServerCock_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAD30
//		Name   -> Function VRFramework.VRGun.SendStateToClientOwner
//		Flags  -> (Final, Native, Public)
void AVRGun::SendStateToClientOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.SendStateToClientOwner");

	AVRGun_SendStateToClientOwner_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAD10
//		Name   -> Function VRFramework.VRGun.ReleaseTrigger
//		Flags  -> (Native, Public, BlueprintCallable)
void AVRGun::ReleaseTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ReleaseTrigger");

	AVRGun_ReleaseTrigger_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAC90
//		Name   -> Function VRFramework.VRGun.ReleaseMagazine
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVRMagazine*                                 Mag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::ReleaseMagazine(class AVRMagazine* Mag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ReleaseMagazine");

	AVRGun_ReleaseMagazine_Params params {};
	params.Mag = Mag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAC70
//		Name   -> Function VRFramework.VRGun.ReleaseBolt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRGun::ReleaseBolt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ReleaseBolt");

	AVRGun_ReleaseBolt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAC50
//		Name   -> Function VRFramework.VRGun.QuickReloadImpl
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRGun::QuickReloadImpl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.QuickReloadImpl");

	AVRGun_QuickReloadImpl_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAC30
//		Name   -> Function VRFramework.VRGun.QuickReload
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRGun::QuickReload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.QuickReload");

	AVRGun_QuickReload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAC10
//		Name   -> Function VRFramework.VRGun.PullTrigger
//		Flags  -> (Native, Public, BlueprintCallable)
void AVRGun::PullTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.PullTrigger");

	AVRGun_PullTrigger_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAB60
//		Name   -> Function VRFramework.VRGun.PickUpdateState
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		TArray<unsigned char>                              RawState                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AVRGun::PickUpdateState(TArray<unsigned char> RawState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.PickUpdateState");

	AVRGun_PickUpdateState_Params params {};
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAA80
//		Name   -> Function VRFramework.VRGun.OnUnload
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRGun::OnUnload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnUnload");

	AVRGun_OnUnload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAA60
//		Name   -> Function VRFramework.VRGun.OnSnapTriggerReset
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRGun::OnSnapTriggerReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnSnapTriggerReset");

	AVRGun_OnSnapTriggerReset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA910
//		Name   -> Function VRFramework.VRGun.OnRoundEjected
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bLive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::OnRoundEjected(bool bLive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnRoundEjected");

	AVRGun_OnRoundEjected_Params params {};
	params.bLive = bLive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA8F0
//		Name   -> Function VRFramework.VRGun.OnRep_StateProxy
//		Flags  -> (Native, Protected)
void AVRGun::OnRep_StateProxy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnRep_StateProxy");

	AVRGun_OnRep_StateProxy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function VRFramework.VRGun.OnRep_Magazine
//		Flags  -> (Final, Native, Public)
void AVRGun::OnRep_Magazine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnRep_Magazine");

	AVRGun_OnRep_Magazine_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA870
//		Name   -> Function VRFramework.VRGun.OnMagazinePicked
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::OnMagazinePicked(class AVRItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnMagazinePicked");

	AVRGun_OnMagazinePicked_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA850
//		Name   -> Function VRFramework.VRGun.OnMagazineMerged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRGun::OnMagazineMerged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnMagazineMerged");

	AVRGun_OnMagazineMerged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA7C0
//		Name   -> Function VRFramework.VRGun.OnMagazineChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bHasMagazine                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::OnMagazineChanged(bool bHasMagazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnMagazineChanged");

	AVRGun_OnMagazineChanged_Params params {};
	params.bHasMagazine = bHasMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA7A0
//		Name   -> Function VRFramework.VRGun.OnFireModeChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRGun::OnFireModeChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnFireModeChanged");

	AVRGun_OnFireModeChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA780
//		Name   -> Function VRFramework.VRGun.OnChargingHandleGrab
//		Flags  -> (Native, Protected)
void AVRGun::OnChargingHandleGrab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnChargingHandleGrab");

	AVRGun_OnChargingHandleGrab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA760
//		Name   -> Function VRFramework.VRGun.OnChamberLoaded
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRGun::OnChamberLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnChamberLoaded");

	AVRGun_OnChamberLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA6C0
//		Name   -> Function VRFramework.VRGun.MulticastOnStateUpdated
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		TArray<unsigned char>                              RawState                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AVRGun::MulticastOnStateUpdated(TArray<unsigned char> RawState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnStateUpdated");

	AVRGun_MulticastOnStateUpdated_Params params {};
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA630
//		Name   -> Function VRFramework.VRGun.MulticastOnMagazineReleased
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		class AVRMagazine*                                 ReleasedMagazine                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::MulticastOnMagazineReleased(class AVRMagazine* ReleasedMagazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnMagazineReleased");

	AVRGun_MulticastOnMagazineReleased_Params params {};
	params.ReleasedMagazine = ReleasedMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA610
//		Name   -> Function VRFramework.VRGun.MulticastOnDryFire
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
void AVRGun::MulticastOnDryFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnDryFire");

	AVRGun_MulticastOnDryFire_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA580
//		Name   -> Function VRFramework.VRGun.MulticastOnCock
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		bool                                               bPullBack                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::MulticastOnCock(bool bPullBack)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnCock");

	AVRGun_MulticastOnCock_Params params {};
	params.bPullBack = bPullBack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA560
//		Name   -> Function VRFramework.VRGun.MulticastOnChamberLoaded
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
void AVRGun::MulticastOnChamberLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnChamberLoaded");

	AVRGun_MulticastOnChamberLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA540
//		Name   -> Function VRFramework.VRGun.MulticastOnBoltRelease
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
void AVRGun::MulticastOnBoltRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnBoltRelease");

	AVRGun_MulticastOnBoltRelease_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA520
//		Name   -> Function VRFramework.VRGun.MulticastFire
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void AVRGun::MulticastFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastFire");

	AVRGun_MulticastFire_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA450
//		Name   -> Function VRFramework.VRGun.LoadMagazine
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVRMagazine*                                 NewMagazine                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::LoadMagazine(class AVRMagazine* NewMagazine, bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.LoadMagazine");

	AVRGun_LoadMagazine_Params params {};
	params.NewMagazine = NewMagazine;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA430
//		Name   -> Function VRFramework.VRGun.LoadChamber
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRGun::LoadChamber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.LoadChamber");

	AVRGun_LoadChamber_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA400
//		Name   -> Function VRFramework.VRGun.IsSuppressed
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::IsSuppressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsSuppressed");

	AVRGun_IsSuppressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA3D0
//		Name   -> Function VRFramework.VRGun.IsOwnedLocally
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::IsOwnedLocally()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsOwnedLocally");

	AVRGun_IsOwnedLocally_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA3A0
//		Name   -> Function VRFramework.VRGun.IsOwnedByPrimaryPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::IsOwnedByPrimaryPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsOwnedByPrimaryPlayer");

	AVRGun_IsOwnedByPrimaryPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA370
//		Name   -> Function VRFramework.VRGun.IsLoaded
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::IsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsLoaded");

	AVRGun_IsLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA340
//		Name   -> Function VRFramework.VRGun.IsIndoor
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::IsIndoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsIndoor");

	AVRGun_IsIndoor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA310
//		Name   -> Function VRFramework.VRGun.HasMagazine
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::HasMagazine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.HasMagazine");

	AVRGun_HasMagazine_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA250
//		Name   -> Function VRFramework.VRGun.GetSlideTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AVRGun::GetSlideTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetSlideTime");

	AVRGun_GetSlideTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA220
//		Name   -> Function VRFramework.VRGun.GetRecoilTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AVRGun::GetRecoilTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetRecoilTime");

	AVRGun_GetRecoilTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA1E0
//		Name   -> Function VRFramework.VRGun.GetMuzzleLocalOffset
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVRGun::GetMuzzleLocalOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetMuzzleLocalOffset");

	AVRGun_GetMuzzleLocalOffset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA1A0
//		Name   -> Function VRFramework.VRGun.GetLocalMagazineOffset
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVRGun::GetLocalMagazineOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetLocalMagazineOffset");

	AVRGun_GetLocalMagazineOffset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA170
//		Name   -> Function VRFramework.VRGun.GetChargingHandle
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UVRHandleComponent*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVRHandleComponent* AVRGun::GetChargingHandle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetChargingHandle");

	AVRGun_GetChargingHandle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA100
//		Name   -> Function VRFramework.VRGun.GetBasisTransform
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AVRGun::GetBasisTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetBasisTransform");

	AVRGun_GetBasisTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AA0E0
//		Name   -> Function VRFramework.VRGun.ForceGunStateUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRGun::ForceGunStateUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ForceGunStateUpdate");

	AVRGun_ForceGunStateUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA0C0
//		Name   -> Function VRFramework.VRGun.Fired
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRGun::Fired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.Fired");

	AVRGun_Fired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA0A0
//		Name   -> Function VRFramework.VRGun.DeactivateMuzzleFlash
//		Flags  -> (Final, Native, Protected)
void AVRGun::DeactivateMuzzleFlash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.DeactivateMuzzleFlash");

	AVRGun_DeactivateMuzzleFlash_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA080
//		Name   -> Function VRFramework.VRGun.CycleFireMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRGun::CycleFireMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CycleFireMode");

	AVRGun_CycleFireMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA000
//		Name   -> Function VRFramework.VRGun.Cock
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::Cock(float Ratio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.Cock");

	AVRGun_Cock_Params params {};
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A9F60
//		Name   -> Function VRFramework.VRGun.ClientUpdateState
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		TArray<unsigned char>                              RawState                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AVRGun::ClientUpdateState(TArray<unsigned char> RawState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ClientUpdateState");

	AVRGun_ClientUpdateState_Params params {};
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A9F30
//		Name   -> Function VRFramework.VRGun.CanReleaseBolt
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::CanReleaseBolt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CanReleaseBolt");

	AVRGun_CanReleaseBolt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9EA0
//		Name   -> Function VRFramework.VRGun.CanLoadMagazine
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AVRMagazine*                                 NewMagazine                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::CanLoadMagazine(class AVRMagazine* NewMagazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CanLoadMagazine");

	AVRGun_CanLoadMagazine_Params params {};
	params.NewMagazine = NewMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9E70
//		Name   -> Function VRFramework.VRGun.CanLoadChamber
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::CanLoadChamber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CanLoadChamber");

	AVRGun_CanLoadChamber_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9E40
//		Name   -> Function VRFramework.VRGun.CanFire
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRGun::CanFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CanFire");

	AVRGun_CanFire_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A9DB0
//		Name   -> Function VRFramework.VRGun.AttachMagazine
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRMagazine*                                 MagazineToAttach                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRGun::AttachMagazine(class AVRMagazine* MagazineToAttach)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.AttachMagazine");

	AVRGun_AttachMagazine_Params params {};
	params.MagazineToAttach = MagazineToAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AF280
//		Name   -> Function VRFramework.VRGunState.SetRandomChamberState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UVRGunState::SetRandomChamberState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.SetRandomChamberState");

	UVRGunState_SetRandomChamberState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AF060
//		Name   -> Function VRFramework.VRGunState.SetChamberState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		VRFramework_EVRGunChamberState                     NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRGunState::SetChamberState(VRFramework_EVRGunChamberState NewState, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.SetChamberState");

	UVRGunState_SetChamberState_Params params {};
	params.NewState = NewState;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE460
//		Name   -> Function VRFramework.VRGunState.IsChamberLoaded
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRGunState::IsChamberLoaded(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.IsChamberLoaded");

	UVRGunState_IsChamberLoaded_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE400
//		Name   -> Function VRFramework.VRGunState.IsAnyChamberLoaded
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRGunState::IsAnyChamberLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.IsAnyChamberLoaded");

	UVRGunState_IsAnyChamberLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE0D0
//		Name   -> Function VRFramework.VRGunState.GetMagazineBulletCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVRGunState::GetMagazineBulletCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.GetMagazineBulletCount");

	UVRGunState_GetMagazineBulletCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADFD0
//		Name   -> Function VRFramework.VRGunState.GetChamberState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		VRFramework_EVRGunChamberState                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VRFramework_EVRGunChamberState UVRGunState::GetChamberState(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.GetChamberState");

	UVRGunState_GetChamberState_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADF40
//		Name   -> Function VRFramework.VRGunState.GetBulletCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               bEmptyShellsToo                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UVRGunState::GetBulletCount(bool bEmptyShellsToo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.GetBulletCount");

	UVRGunState_GetBulletCount_Params params {};
	params.bEmptyShellsToo = bEmptyShellsToo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE240
//		Name   -> Function VRFramework.VRHand.GetShoulderLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVRHand::GetShoulderLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRHand.GetShoulderLocation");

	AVRHand_GetShoulderLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE500
//		Name   -> Function VRFramework.VRHandleComponent.IsGrabbed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRHandleComponent::IsGrabbed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRHandleComponent.IsGrabbed");

	UVRHandleComponent_IsGrabbed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE060
//		Name   -> Function VRFramework.VRHandleComponent.GetGrabbedBy
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AVRController*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AVRController* UVRHandleComponent::GetGrabbedBy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRHandleComponent.GetGrabbedBy");

	UVRHandleComponent_GetGrabbedBy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AEC30
//		Name   -> Function VRFramework.VRInventory.ReAttachChildren
//		Flags  -> (Final, Native, Protected)
void AVRInventory::ReAttachChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.ReAttachChildren");

	AVRInventory_ReAttachChildren_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEA40
//		Name   -> Function VRFramework.VRInventory.OnRotationChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRInventory::OnRotationChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.OnRotationChanged");

	AVRInventory_OnRotationChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE910
//		Name   -> Function VRFramework.VRInventory.OnQuickSlotAction
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AVRItemController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		VRFramework_EVRQuickSlotType                       Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRInventory::OnQuickSlotAction(class AVRItemController* Controller, VRFramework_EVRQuickSlotType Type, bool bState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.OnQuickSlotAction");

	AVRInventory_OnQuickSlotAction_Params params {};
	params.Controller = Controller;
	params.Type = Type;
	params.bState = bState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE310
//		Name   -> Function VRFramework.VRInventory.GetVestVolume
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* AVRInventory::GetVestVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetVestVolume");

	AVRInventory_GetVestVolume_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE120
//		Name   -> Function VRFramework.VRInventory.GetQuickSlotVolume
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		VRFramework_EVRQuickSlotType                       Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* AVRInventory::GetQuickSlotVolume(VRFramework_EVRQuickSlotType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetQuickSlotVolume");

	AVRInventory_GetQuickSlotVolume_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002A5510
//		Name   -> Function VRFramework.VRInventory.GetPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AVRPawn*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AVRPawn* AVRInventory::GetPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetPawn");

	AVRInventory_GetPawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE0A0
//		Name   -> Function VRFramework.VRInventory.GetLogic
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AVRInventoryLogic*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AVRInventoryLogic* AVRInventory::GetLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetLogic");

	AVRInventory_GetLogic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AEE90
//		Name   -> Function VRFramework.VRInventoryLogic.Set
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRInventoryLogic::Set(unsigned char Slot, class AVRItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.Set");

	AVRInventoryLogic_Set_Params params {};
	params.Slot = Slot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AED90
//		Name   -> Function VRFramework.VRInventoryLogic.ServerPut
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVRItemController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRInventoryLogic::ServerPut(unsigned char Slot, class AVRItemController* ByController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.ServerPut");

	AVRInventoryLogic_ServerPut_Params params {};
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEC90
//		Name   -> Function VRFramework.VRInventoryLogic.ServerGet
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVRItemController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRInventoryLogic::ServerGet(unsigned char Slot, class AVRItemController* ByController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.ServerGet");

	AVRInventoryLogic_ServerGet_Params params {};
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEC50
//		Name   -> Function VRFramework.VRInventoryLogic.ReAttachChildren
//		Flags  -> (Final, Native, Public)
void AVRInventoryLogic::ReAttachChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.ReAttachChildren");

	AVRInventoryLogic_ReAttachChildren_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AEB70
//		Name   -> Function VRFramework.VRInventoryLogic.Put
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVRItemController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRInventoryLogic::Put(unsigned char Slot, class AVRItemController* ByController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.Put");

	AVRInventoryLogic_Put_Params params {};
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE370
//		Name   -> Function VRFramework.VRInventoryLogic.HideInventorySlots
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bHideInventory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRInventoryLogic::HideInventorySlots(bool bHideInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.HideInventorySlots");

	AVRInventoryLogic_HideInventorySlots_Params params {};
	params.bHideInventory = bHideInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AE280
//		Name   -> Function VRFramework.VRInventoryLogic.GetSlotName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName AVRInventoryLogic::GetSlotName(unsigned char Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.GetSlotName");

	AVRInventoryLogic_GetSlotName_Params params {};
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002AE0F0
//		Name   -> Function VRFramework.VRInventoryLogic.GetPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AVRPawn*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AVRPawn* AVRInventoryLogic::GetPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.GetPawn");

	AVRInventoryLogic_GetPawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADE80
//		Name   -> Function VRFramework.VRInventoryLogic.Get
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVRItemController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRInventoryLogic::Get(unsigned char Slot, class AVRItemController* ByController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.Get");

	AVRInventoryLogic_Get_Params params {};
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002ADE60
//		Name   -> Function VRFramework.VRInventoryLogic.DropEverything
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRInventoryLogic::DropEverything()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.DropEverything");

	AVRInventoryLogic_DropEverything_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4DF0
//		Name   -> Function VRFramework.VRItemController.UpdateWeapon
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		class AVRGun*                                      PickedGun                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              RawState                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AVRItemController::UpdateWeapon(class AVRGun* PickedGun, TArray<unsigned char> RawState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.UpdateWeapon");

	AVRItemController_UpdateWeapon_Params params {};
	params.PickedGun = PickedGun;
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B44A0
//		Name   -> Function VRFramework.VRItemController.ServerReportStateChange
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FVRItemControllerState                      NewState                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AVRItemController::ServerReportStateChange(const struct FVRItemControllerState& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ServerReportStateChange");

	AVRItemController_ServerReportStateChange_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B43E0
//		Name   -> Function VRFramework.VRItemController.ServerPickManual
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItemController::ServerPickManual(class AVRItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ServerPickManual");

	AVRItemController_ServerPickManual_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4030
//		Name   -> Function VRFramework.VRItemController.ServerDrop
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
//		class AVRItem*                                     PickupToDrop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DesiredThrowLocation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DesiredThrowVelocity                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    DesiredThrowRotation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AVRItemController::ServerDrop(class AVRItem* PickupToDrop, const struct FVector& DesiredThrowLocation, const struct FVector& DesiredThrowVelocity, const struct FRotator& DesiredThrowRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ServerDrop");

	AVRItemController_ServerDrop_Params params {};
	params.PickupToDrop = PickupToDrop;
	params.DesiredThrowLocation = DesiredThrowLocation;
	params.DesiredThrowVelocity = DesiredThrowVelocity;
	params.DesiredThrowRotation = DesiredThrowRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002A9DB0
//		Name   -> Function VRFramework.VRItemController.ReportPickupDrop
//		Flags  -> (Native, Public)
// Parameters:
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItemController::ReportPickupDrop(class AVRItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ReportPickupDrop");

	AVRItemController_ReportPickupDrop_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4010
//		Name   -> Function VRFramework.VRItemController.RefreshPickupLocation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRItemController::RefreshPickupLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.RefreshPickupLocation");

	AVRItemController_RefreshPickupLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3F50
//		Name   -> Function VRFramework.VRItemController.PredictedPickManual
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItemController::PredictedPickManual(class AVRItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.PredictedPickManual");

	AVRItemController_PredictedPickManual_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3ED0
//		Name   -> Function VRFramework.VRItemController.PickManual
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItemController::PickManual(class AVRItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.PickManual");

	AVRItemController_PickManual_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3EB0
//		Name   -> Function VRFramework.VRItemController.Pick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRItemController::Pick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.Pick");

	AVRItemController_Pick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3DD0
//		Name   -> Function VRFramework.VRItemController.OnStateChanged
//		Flags  -> (Native, Protected, HasOutParms)
// Parameters:
//		struct FVRItemControllerState                      OldState                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AVRItemController::OnStateChanged(const struct FVRItemControllerState& OldState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnStateChanged");

	AVRItemController_OnStateChanged_Params params {};
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3CE0
//		Name   -> Function VRFramework.VRItemController.OnRep_State
//		Flags  -> (Native, Protected)
void AVRItemController::OnRep_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnRep_State");

	AVRItemController_OnRep_State_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3B80
//		Name   -> Function VRFramework.VRItemController.OnPickupDestroyed
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItemController::OnPickupDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnPickupDestroyed");

	AVRItemController_OnPickupDestroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B37F0
//		Name   -> Function VRFramework.VRItemController.OnDropTimer
//		Flags  -> (Final, Native, Protected)
void AVRItemController::OnDropTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnDropTimer");

	AVRItemController_OnDropTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3490
//		Name   -> Function VRFramework.VRItemController.MulticastChangeState
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
//		struct FVRItemControllerState                      NewState                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AVRItemController::MulticastChangeState(const struct FVRItemControllerState& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.MulticastChangeState");

	AVRItemController_MulticastChangeState_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B32B0
//		Name   -> Function VRFramework.VRItemController.IsLocallyOwned
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRItemController::IsLocallyOwned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.IsLocallyOwned");

	AVRItemController_IsLocallyOwned_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3280
//		Name   -> Function VRFramework.VRItemController.IsItemUseEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRItemController::IsItemUseEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.IsItemUseEnabled");

	AVRItemController_IsItemUseEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2B70
//		Name   -> Function VRFramework.VRItemController.EnableItemUse
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bEnableUse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRItemController::EnableItemUse(bool bEnableUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.EnableItemUse");

	AVRItemController_EnableItemUse_Params params {};
	params.bEnableUse = bEnableUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AAA60
//		Name   -> Function VRFramework.VRItemController.Drop
//		Flags  -> (Native, Public, BlueprintCallable)
void AVRItemController::Drop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.Drop");

	AVRItemController_Drop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2AB0
//		Name   -> Function VRFramework.VRLadder.CreateVolume
//		Flags  -> (Final, Native, Private)
void AVRLadder::CreateVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRLadder.CreateVolume");

	AVRLadder_CreateVolume_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3CE0
//		Name   -> Function VRFramework.VRMagazine.UpdateMagazineSkin
//		Flags  -> (Native, Public, BlueprintCallable)
void AVRMagazine::UpdateMagazineSkin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.UpdateMagazineSkin");

	AVRMagazine_UpdateMagazineSkin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4D60
//		Name   -> Function VRFramework.VRMagazine.TryMagSlap
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVRMagazine*                                 HitMag                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRMagazine::TryMagSlap(class AVRMagazine* HitMag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.TryMagSlap");

	AVRMagazine_TryMagSlap_Params params {};
	params.HitMag = HitMag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4B80
//		Name   -> Function VRFramework.VRMagazine.StartMagSlide
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UObject*                                     MagSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		VRFramework_EMagSlideMode                          InSlideMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRMagazine::StartMagSlide(class UObject* MagSlot, VRFramework_EMagSlideMode InSlideMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.StartMagSlide");

	AVRMagazine_StartMagSlide_Params params {};
	params.MagSlot = MagSlot;
	params.InSlideMode = InSlideMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B4AC0
//		Name   -> Function VRFramework.VRMagazine.SetMerging
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		bool                                               MergeState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::SetMerging(bool MergeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.SetMerging");

	AVRMagazine_SetMerging_Params params {};
	params.MergeState = MergeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4A30
//		Name   -> Function VRFramework.VRMagazine.SetMagazineSkinClass
//		Flags  -> (Native, Public)
// Parameters:
//		class AVRGun*                                      GunSkin                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::SetMagazineSkinClass(class AVRGun* GunSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.SetMagazineSkinClass");

	AVRMagazine_SetMagazineSkinClass_Params params {};
	params.GunSkin = GunSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4390
//		Name   -> Function VRFramework.VRMagazine.ServerObliterate
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AVRMagazine::ServerObliterate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.ServerObliterate");

	AVRMagazine_ServerObliterate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B42D0
//		Name   -> Function VRFramework.VRMagazine.ServerMergeTo
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		class AVRMagazine*                                 Magazine                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::ServerMergeTo(class AVRMagazine* Magazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.ServerMergeTo");

	AVRMagazine_ServerMergeTo_Params params {};
	params.Magazine = Magazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4210
//		Name   -> Function VRFramework.VRMagazine.ServerMerge
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		class AVRMagazine*                                 Magazine                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::ServerMerge(class AVRMagazine* Magazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.ServerMerge");

	AVRMagazine_ServerMerge_Params params {};
	params.Magazine = Magazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3DB0
//		Name   -> Function VRFramework.VRMagazine.OnSlideInsertStart
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRMagazine::OnSlideInsertStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnSlideInsertStart");

	AVRMagazine_OnSlideInsertStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3D20
//		Name   -> Function VRFramework.VRMagazine.OnSlideInsertFinished
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::OnSlideInsertFinished(bool bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnSlideInsertFinished");

	AVRMagazine_OnSlideInsertFinished_Params params {};
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3CA0
//		Name   -> Function VRFramework.VRMagazine.OnRep_MagazineSkinClass
//		Flags  -> (Final, Native, Public)
void AVRMagazine::OnRep_MagazineSkinClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnRep_MagazineSkinClass");

	AVRMagazine_OnRep_MagazineSkinClass_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA560
//		Name   -> Function VRFramework.VRMagazine.OnRep_Gun
//		Flags  -> (Native, Protected)
void AVRMagazine::OnRep_Gun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnRep_Gun");

	AVRMagazine_OnRep_Gun_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3C20
//		Name   -> Function VRFramework.VRMagazine.OnRep_Bullets
//		Flags  -> (Native, Protected)
void AVRMagazine::OnRep_Bullets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnRep_Bullets");

	AVRMagazine_OnRep_Bullets_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3D00
//		Name   -> Function VRFramework.VRMagazine.OnRep_bMerging
//		Flags  -> (Final, Native, Public)
void AVRMagazine::OnRep_bMerging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnRep_bMerging");

	AVRMagazine_OnRep_bMerging_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3C00
//		Name   -> Function VRFramework.VRMagazine.OnReleasedFromGun
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRMagazine::OnReleasedFromGun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnReleasedFromGun");

	AVRMagazine_OnReleasedFromGun_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3990
//		Name   -> Function VRFramework.VRMagazine.OnMagSlapOverlap
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AVRMagazine::OnMagSlapOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnMagSlapOverlap");

	AVRMagazine_OnMagSlapOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3970
//		Name   -> Function VRFramework.VRMagazine.OnLoadedIntoGun
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRMagazine::OnLoadedIntoGun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnLoadedIntoGun");

	AVRMagazine_OnLoadedIntoGun_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002AA540
//		Name   -> Function VRFramework.VRMagazine.OnBulletsChanged
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AVRMagazine::OnBulletsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnBulletsChanged");

	AVRMagazine_OnBulletsChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3410
//		Name   -> Function VRFramework.VRMagazine.MergeTo
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AVRMagazine*                                 Magazine                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::MergeTo(class AVRMagazine* Magazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.MergeTo");

	AVRMagazine_MergeTo_Params params {};
	params.Magazine = Magazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3390
//		Name   -> Function VRFramework.VRMagazine.Merge
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVRMagazine*                                 Magazine                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::Merge(class AVRMagazine* Magazine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.Merge");

	AVRMagazine_Merge_Params params {};
	params.Magazine = Magazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3370
//		Name   -> Function VRFramework.VRMagazine.MakeReinsertable
//		Flags  -> (Final, Native, Protected)
void AVRMagazine::MakeReinsertable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.MakeReinsertable");

	AVRMagazine_MakeReinsertable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3340
//		Name   -> Function VRFramework.VRMagazine.IsSliding
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRMagazine::IsSliding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.IsSliding");

	AVRMagazine_IsSliding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3220
//		Name   -> Function VRFramework.VRMagazine.IsFull
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRMagazine::IsFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.IsFull");

	AVRMagazine_IsFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3190
//		Name   -> Function VRFramework.VRMagazine.HasMagazineSkinClass
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRMagazine::HasMagazineSkinClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.HasMagazineSkinClass");

	AVRMagazine_HasMagazineSkinClass_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2F70
//		Name   -> Function VRFramework.VRMagazine.GetInsertTransform
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  InsertTransform                                            (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bComplete                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRMagazine::GetInsertTransform(float DeltaTime, struct FTransform* InsertTransform, bool* bComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.GetInsertTransform");

	AVRMagazine_GetInsertTransform_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InsertTransform != nullptr)
		*InsertTransform = params.InsertTransform;
	if (bComplete != nullptr)
		*bComplete = params.bComplete;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2E60
//		Name   -> Function VRFramework.VRMagazine.GetDefaultMaxAmmo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AVRMagazine::GetDefaultMaxAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.GetDefaultMaxAmmo");

	AVRMagazine_GetDefaultMaxAmmo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2DB0
//		Name   -> Function VRFramework.VRMagazine.FinishMagInsert
//		Flags  -> (Final, Native, Public)
void AVRMagazine::FinishMagInsert()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.FinishMagInsert");

	AVRMagazine_FinishMagInsert_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2D20
//		Name   -> Function VRFramework.VRMagazine.EndEjectMag
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::EndEjectMag(bool bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.EndEjectMag");

	AVRMagazine_EndEjectMag_Params params {};
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2C90
//		Name   -> Function VRFramework.VRMagazine.EnableMagSlapOverlap
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bEnableMagSlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::EnableMagSlapOverlap(bool bEnableMagSlap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.EnableMagSlapOverlap");

	AVRMagazine_EnableMagSlapOverlap_Params params {};
	params.bEnableMagSlap = bEnableMagSlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2C00
//		Name   -> Function VRFramework.VRMagazine.EnableMagDropSound
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bEnableDropSound                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::EnableMagDropSound(bool bEnableDropSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.EnableMagDropSound");

	AVRMagazine_EnableMagDropSound_Params params {};
	params.bEnableDropSound = bEnableDropSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2AF0
//		Name   -> Function VRFramework.VRMagazine.EjectMagCosmetic
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UObject*                                     MagSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::EjectMagCosmetic(class UObject* MagSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.EjectMagCosmetic");

	AVRMagazine_EjectMagCosmetic_Params params {};
	params.MagSlot = MagSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B28D0
//		Name   -> Function VRFramework.VRMagazine.ClearMagSlot
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRMagazine::ClearMagSlot(bool bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.ClearMagSlot");

	AVRMagazine_ClearMagSlot_Params params {};
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3830
//		Name   -> Function VRFramework.VRMagazineSlotComponent.OnEndOverlap
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRMagazineSlotComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazineSlotComponent.OnEndOverlap");

	UVRMagazineSlotComponent_OnEndOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3600
//		Name   -> Function VRFramework.VRMagazineSlotComponent.OnBeginOverlap
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UVRMagazineSlotComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazineSlotComponent.OnBeginOverlap");

	UVRMagazineSlotComponent_OnBeginOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2A90
//		Name   -> Function VRFramework.VRMenu.Close
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRMenu::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRMenu.Close");

	AVRMenu_Close_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4C40
//		Name   -> Function VRFramework.VRPawn.Teleport
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    WorldRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		VRFramework_EVRTeleportSpace                       Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRPawn::Teleport(const struct FVector& WorldLocation, const struct FRotator& WorldRotation, VRFramework_EVRTeleportSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.Teleport");

	AVRPawn_Teleport_Params params {};
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B49A0
//		Name   -> Function VRFramework.VRPawn.SetFakePlayer
//		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRPawn::SetFakePlayer(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.SetFakePlayer");

	AVRPawn_SetFakePlayer_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4910
//		Name   -> Function VRFramework.VRPawn.SetAllPockets
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRPawn::SetAllPockets(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.SetAllPockets");

	AVRPawn_SetAllPockets_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4770
//		Name   -> Function VRFramework.VRPawn.ServerUpdate
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FVRNetSnapshot                              Snapshot                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AVRPawn::ServerUpdate(const struct FVRNetSnapshot& Snapshot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ServerUpdate");

	AVRPawn_ServerUpdate_Params params {};
	params.Snapshot = Snapshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4640
//		Name   -> Function VRFramework.VRPawn.ServerTeleport
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
//		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    WorldRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AVRPawn::ServerTeleport(const struct FVector& WorldLocation, const struct FRotator& WorldRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ServerTeleport");

	AVRPawn_ServerTeleport_Params params {};
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B4590
//		Name   -> Function VRFramework.VRPawn.ServerRotate
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRPawn::ServerRotate(float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ServerRotate");

	AVRPawn_ServerRotate_Params params {};
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3FF0
//		Name   -> Function VRFramework.VRPawn.ReCenter
//		Flags  -> (Native, Public, BlueprintCallable)
void AVRPawn::ReCenter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ReCenter");

	AVRPawn_ReCenter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3FD0
//		Name   -> Function VRFramework.VRPawn.ProjectToFloor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRPawn::ProjectToFloor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ProjectToFloor");

	AVRPawn_ProjectToFloor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function VRFramework.VRPawn.OnTeleport
//		Flags  -> (Event, Public, BlueprintEvent)
void AVRPawn::OnTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnTeleport");

	AVRPawn_OnTeleport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3CC0
//		Name   -> Function VRFramework.VRPawn.OnRep_RightController
//		Flags  -> (Native, Protected)
void AVRPawn::OnRep_RightController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_RightController");

	AVRPawn_OnRep_RightController_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3C80
//		Name   -> Function VRFramework.VRPawn.OnRep_LeftController
//		Flags  -> (Native, Protected)
void AVRPawn::OnRep_LeftController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_LeftController");

	AVRPawn_OnRep_LeftController_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3C60
//		Name   -> Function VRFramework.VRPawn.OnRep_LatestSnapshot
//		Flags  -> (Final, Native, Protected)
void AVRPawn::OnRep_LatestSnapshot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_LatestSnapshot");

	AVRPawn_OnRep_LatestSnapshot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3C40
//		Name   -> Function VRFramework.VRPawn.OnRep_InventoryLogic
//		Flags  -> (Final, Native, Protected)
void AVRPawn::OnRep_InventoryLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_InventoryLogic");

	AVRPawn_OnRep_InventoryLogic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function VRFramework.VRPawn.OnPreTeleport
//		Flags  -> (Event, Public, BlueprintEvent)
void AVRPawn::OnPreTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnPreTeleport");

	AVRPawn_OnPreTeleport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3810
//		Name   -> Function VRFramework.VRPawn.OnEndMove
//		Flags  -> (Final, Native, Protected)
void AVRPawn::OnEndMove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnEndMove");

	AVRPawn_OnEndMove_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B35E0
//		Name   -> Function VRFramework.VRPawn.OnBeginMove
//		Flags  -> (Final, Native, Protected)
void AVRPawn::OnBeginMove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnBeginMove");

	AVRPawn_OnBeginMove_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3560
//		Name   -> Function VRFramework.VRPawn.MulticastRotated
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVRPawn::MulticastRotated(float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.MulticastRotated");

	AVRPawn_MulticastRotated_Params params {};
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B3310
//		Name   -> Function VRFramework.VRPawn.IsProne
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRPawn::IsProne()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsProne");

	AVRPawn_IsProne_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B32E0
//		Name   -> Function VRFramework.VRPawn.IsMoving
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRPawn::IsMoving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsMoving");

	AVRPawn_IsMoving_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3250
//		Name   -> Function VRFramework.VRPawn.IsInVehicle
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRPawn::IsInVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsInVehicle");

	AVRPawn_IsInVehicle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B31F0
//		Name   -> Function VRFramework.VRPawn.IsFakePlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRPawn::IsFakePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsFakePlayer");

	AVRPawn_IsFakePlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B31C0
//		Name   -> Function VRFramework.VRPawn.IsCrouching
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRPawn::IsCrouching()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsCrouching");

	AVRPawn_IsCrouching_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3160
//		Name   -> Function VRFramework.VRPawn.GetPlayerEmulator
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UVRPlayerEmulatorComponent*                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVRPlayerEmulatorComponent* AVRPawn::GetPlayerEmulator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetPlayerEmulator");

	AVRPawn_GetPlayerEmulator_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3140
//		Name   -> Function VRFramework.VRPawn.GetPivot
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USceneComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* AVRPawn::GetPivot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetPivot");

	AVRPawn_GetPivot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B3110
//		Name   -> Function VRFramework.VRPawn.GetMovingSpeed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AVRPawn::GetMovingSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetMovingSpeed");

	AVRPawn_GetMovingSpeed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B30E0
//		Name   -> Function VRFramework.VRPawn.GetMovingRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AVRPawn::GetMovingRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetMovingRatio");

	AVRPawn_GetMovingRatio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2F30
//		Name   -> Function VRFramework.VRPawn.GetHeadRotation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator AVRPawn::GetHeadRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetHeadRotation");

	AVRPawn_GetHeadRotation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2EF0
//		Name   -> Function VRFramework.VRPawn.GetHeadLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVRPawn::GetHeadLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetHeadLocation");

	AVRPawn_GetHeadLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2ED0
//		Name   -> Function VRFramework.VRPawn.GetHeadCamera
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCameraComponent*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCameraComponent* AVRPawn::GetHeadCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetHeadCamera");

	AVRPawn_GetHeadCamera_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2E90
//		Name   -> Function VRFramework.VRPawn.GetGroundLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVRPawn::GetGroundLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetGroundLocation");

	AVRPawn_GetGroundLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2E30
//		Name   -> Function VRFramework.VRPawn.GetCrouchRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AVRPawn::GetCrouchRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetCrouchRatio");

	AVRPawn_GetCrouchRatio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2E00
//		Name   -> Function VRFramework.VRPawn.GetAvatarScale
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AVRPawn::GetAvatarScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetAvatarScale");

	AVRPawn_GetAvatarScale_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2DD0
//		Name   -> Function VRFramework.VRPawn.GetAvatarComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UVRAvatarComponent*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVRAvatarComponent* AVRPawn::GetAvatarComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetAvatarComponent");

	AVRPawn_GetAvatarComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B2AD0
//		Name   -> Function VRFramework.VRPawn.DropItems
//		Flags  -> (Native, Public, BlueprintCallable)
void AVRPawn::DropItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.DropItems");

	AVRPawn_DropItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2960
//		Name   -> Function VRFramework.VRPawn.ClientBulletPassby
//		Flags  -> (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
//		class USoundCue*                                   BuzzingSound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector_NetQuantize                         Velocity                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AVRPawn::ClientBulletPassby(class USoundCue* BuzzingSound, const struct FVector& Location, const struct FVector_NetQuantize& Velocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ClientBulletPassby");

	AVRPawn_ClientBulletPassby_Params params {};
	params.BuzzingSound = BuzzingSound;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B28B0
//		Name   -> Function VRFramework.VRPawn.CheckAndSwapHands
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVRPawn::CheckAndSwapHands()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.CheckAndSwapHands");

	AVRPawn_CheckAndSwapHands_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B2890
//		Name   -> Function VRFramework.VRPawn.CanTeleport
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVRPawn::CanTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.CanTeleport");

	AVRPawn_CanTeleport_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B7510
//		Name   -> Function VRFramework.VRPlayerEmulatorComponent.SetAimRotation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              AngleDeviation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnableAim                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRPlayerEmulatorComponent::SetAimRotation(const struct FVector& WorldLocation, float AngleDeviation, bool bEnableAim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPlayerEmulatorComponent.SetAimRotation");

	UVRPlayerEmulatorComponent_SetAimRotation_Params params {};
	params.WorldLocation = WorldLocation;
	params.AngleDeviation = AngleDeviation;
	params.bEnableAim = bEnableAim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B72E0
//		Name   -> Function VRFramework.VRPocketComponent.OnEndOverlap
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRPocketComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPocketComponent.OnEndOverlap");

	UVRPocketComponent_OnEndOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B70F0
//		Name   -> Function VRFramework.VRPocketComponent.OnBeginOverlap
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UVRPocketComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPocketComponent.OnBeginOverlap");

	UVRPocketComponent_OnBeginOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B7060
//		Name   -> Function VRFramework.VRPocketComponent.MulticastUnpocketize
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		class AVRItem*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRPocketComponent::MulticastUnpocketize(class AVRItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRPocketComponent.MulticastUnpocketize");

	UVRPocketComponent_MulticastUnpocketize_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B76F0
//		Name   -> Function VRFramework.VRSpectatorComponent.SetTwoPointGrabEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRSpectatorComponent::SetTwoPointGrabEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRSpectatorComponent.SetTwoPointGrabEnabled");

	UVRSpectatorComponent_SetTwoPointGrabEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B7630
//		Name   -> Function VRFramework.VRSpectatorComponent.SetMotionControllers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMotionControllerComponent*                  LeftController                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMotionControllerComponent*                  RightController                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRSpectatorComponent::SetMotionControllers(class UMotionControllerComponent* LeftController, class UMotionControllerComponent* RightController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRSpectatorComponent.SetMotionControllers");

	UVRSpectatorComponent_SetMotionControllers_Params params {};
	params.LeftController = LeftController;
	params.RightController = RightController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B7440
//		Name   -> Function VRFramework.VRStatics.SaveVRSettings
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVRSettings                                 Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UVRStatics::STATIC_SaveVRSettings(class UObject* WorldContextObject, const struct FVRSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.SaveVRSettings");

	UVRStatics_SaveVRSettings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B6FD0
//		Name   -> Function VRFramework.VRStatics.LoadVRSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVRSettings                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVRSettings UVRStatics::STATIC_LoadVRSettings(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.LoadVRSettings");

	UVRStatics_LoadVRSettings_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6FA0
//		Name   -> Function VRFramework.VRStatics.IsOculusTouch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRStatics::STATIC_IsOculusTouch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.IsOculusTouch");

	UVRStatics_IsOculusTouch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6EE0
//		Name   -> Function VRFramework.VRStatics.GetVRPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		VRFramework_EVRPlatform                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
VRFramework_EVRPlatform UVRStatics::STATIC_GetVRPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.GetVRPlatform");

	UVRStatics_GetVRPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6E20
//		Name   -> Function VRFramework.VRStatics.GetRandomIntegerExclude
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Exclude                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVRStatics::STATIC_GetRandomIntegerExclude(int Max, int Exclude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.GetRandomIntegerExclude");

	UVRStatics_GetRandomIntegerExclude_Params params {};
	params.Max = Max;
	params.Exclude = Exclude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6CE0
//		Name   -> Function VRFramework.VRStatics.GetContraintRefFrame
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPhysicsConstraintComponent*                 ConstraintComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EConstraintFrame>               Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UVRStatics::STATIC_GetContraintRefFrame(class UObject* WorldContextObject, class UPhysicsConstraintComponent* ConstraintComponent, TEnumAsByte<Engine_EConstraintFrame> Frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.GetContraintRefFrame");

	UVRStatics_GetContraintRefFrame_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ConstraintComponent = ConstraintComponent;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6C60
//		Name   -> Function VRFramework.VRStatics.GetAsyncLoader
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVRAsyncLoader*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVRAsyncLoader* UVRStatics::STATIC_GetAsyncLoader(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.GetAsyncLoader");

	UVRStatics_GetAsyncLoader_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6AA0
//		Name   -> Function VRFramework.VRStatics.AsyncLoadUObjects
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStoreRefs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnAsyncLoadObjects                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRStatics::STATIC_AsyncLoadUObjects(class UObject* WorldContextObject, bool bStoreRefs, const struct FScriptDelegate& OnAsyncLoadObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.AsyncLoadUObjects");

	UVRStatics_AsyncLoadUObjects_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.bStoreRefs = bStoreRefs;
	params.OnAsyncLoadObjects = OnAsyncLoadObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B68E0
//		Name   -> Function VRFramework.VRStatics.AsyncLoadUObject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStoreRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnAsyncLoadObject                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVRStatics::STATIC_AsyncLoadUObject(class UObject* WorldContextObject, bool bStoreRef, const struct FScriptDelegate& OnAsyncLoadObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.AsyncLoadUObject");

	UVRStatics_AsyncLoadUObject_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.bStoreRef = bStoreRef;
	params.OnAsyncLoadObject = OnAsyncLoadObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002B6810
//		Name   -> Function VRFramework.VRStatics.ApplyVRSettings
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVRSettings                                 Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UVRStatics::STATIC_ApplyVRSettings(class UObject* WorldContextObject, const struct FVRSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.ApplyVRSettings");

	UVRStatics_ApplyVRSettings_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B6700
//		Name   -> Function VRFramework.VRStatics.ApplyAndSaveSingleVRSettingFromString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRStatics::STATIC_ApplyAndSaveSingleVRSettingFromString(class UObject* WorldContextObject, const struct FName& Key, const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.ApplyAndSaveSingleVRSettingFromString");

	UVRStatics_ApplyAndSaveSingleVRSettingFromString_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B65C0
//		Name   -> Function VRFramework.VRStatics.AddContraintRefFrameOffset
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPhysicsConstraintComponent*                 ConstraintComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EConstraintFrame>               Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRStatics::STATIC_AddContraintRefFrameOffset(class UObject* WorldContextObject, const struct FVector& Offset, class UPhysicsConstraintComponent* ConstraintComponent, TEnumAsByte<Engine_EConstraintFrame> Frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.AddContraintRefFrameOffset");

	UVRStatics_AddContraintRefFrameOffset_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Offset = Offset;
	params.ConstraintComponent = ConstraintComponent;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B6F10
//		Name   -> Function VRFramework.VRStickComponent.HideStick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bHideStick                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVRStickComponent::HideStick(bool bHideStick)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStickComponent.HideStick");

	UVRStickComponent_HideStick_Params params {};
	params.bHideStick = bHideStick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002B7420
//		Name   -> Function VRFramework.VRStripperClipCosmetic.OnReleased
//		Flags  -> (Final, Native, Public)
void AVRStripperClipCosmetic::OnReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VRFramework.VRStripperClipCosmetic.OnReleased");

	AVRStripperClipCosmetic_OnReleased_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
