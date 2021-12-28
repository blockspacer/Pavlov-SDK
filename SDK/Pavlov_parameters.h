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

// Function Pavlov.ActionGunState.SetAction
struct UActionGunState_SetAction_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ActionGunState.OpenAction
struct UActionGunState_OpenAction_Params
{
};

// Function Pavlov.ActionGunState.CloseAction
struct UActionGunState_CloseAction_Params
{
};

// Function Pavlov.AirdropPlane.GeneratePath
struct AAirdropPlane_GeneratePath_Params
{
	struct FVector                                     DropLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AirplaneRoyale.StartTravel
struct AAirplaneRoyale_StartTravel_Params
{
};

// Function Pavlov.AirplaneRoyale.SetAsBase
struct AAirplaneRoyale_SetAsBase_Params
{
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AirplaneRoyale.OnRep_Traveled
struct AAirplaneRoyale_OnRep_Traveled_Params
{
};

// Function Pavlov.AirplaneRoyale.ClearBase
struct AAirplaneRoyale_ClearBase_Params
{
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AmmoBox.SetAmmoCount
struct AAmmoBox_SetAmmoCount_Params
{
	int                                                NewAmmoCount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AmmoBox.RemoveAmmo
struct AAmmoBox_RemoveAmmo_Params
{
	int                                                RemoveAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AmmoBox.OnRep_AmmoCount
struct AAmmoBox_OnRep_AmmoCount_Params
{
};

// Function Pavlov.AmmoBox.OnAmmoCountChanged
struct AAmmoBox_OnAmmoCountChanged_Params
{
};

// Function Pavlov.AmmoBox.GetAmmoType
struct AAmmoBox_GetAmmoType_Params
{
	VRFramework_EAmmoType                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AmmoBox.AddAmmo
struct AAmmoBox_AddAmmo_Params
{
	int                                                AddAmount;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.TryAttach
struct AAttachment_TryAttach_Params
{
	unsigned char                                      SlideModeSlot;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayFailureSound;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSliding;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.SetSelectionEnable
struct AAttachment_SetSelectionEnable_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.OnSlideModeChanged
struct AAttachment_OnSlideModeChanged_Params
{
	bool                                               bSlideMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.OnGunTickChanged
struct AAttachment_OnGunTickChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.OnAttachmentModeChanged
struct AAttachment_OnAttachmentModeChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.MakeSlideModeSlot
struct AAttachment_MakeSlideModeSlot_Params
{
	class AGun*                                        Gun;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.GunTick
struct AAttachment_GunTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.GetSlideTransform
struct AAttachment_GetSlideTransform_Params
{
	struct FTransform                                  SlideTransform;                                            // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.GetSlideModeSlot
struct AAttachment_GetSlideModeSlot_Params
{
	unsigned char                                      SlideModeSlot;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.GetGrabLoc
struct AAttachment_GetGrabLoc_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.ClearSlideGun
struct AAttachment_ClearSlideGun_Params
{
};

// Function Pavlov.Attachment.CanAttach
struct AAttachment_CanAttach_Params
{
	class AGun*                                        Gun;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceAttach;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.AttachToGunServer
struct AAttachment_AttachToGunServer_Params
{
	class AGun*                                        Gun;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SlideModeSlot;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Attachment.AttachToGun
struct AAttachment_AttachToGun_Params
{
	class AGun*                                        Gun;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceAttach;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentAccessory.SetAccessoryActive_Server
struct AAttachmentAccessory_SetAccessoryActive_Server_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentAccessory.SetAccessoryActive
struct AAttachmentAccessory_SetAccessoryActive_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentAccessory.OnRep_AccessoryOn
struct AAttachmentAccessory_OnRep_AccessoryOn_Params
{
};

// Function Pavlov.AttachmentAccessory.OnAccessoryStateChanged
struct AAttachmentAccessory_OnAccessoryStateChanged_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentAccessory.IsAccessoryOn
struct AAttachmentAccessory_IsAccessoryOn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentAccessory.CheckDropped
struct AAttachmentAccessory_CheckDropped_Params
{
};

// Function Pavlov.AttachmentAccessory_Bayonet.StabPlayerMulti
struct AAttachmentAccessory_Bayonet_StabPlayerMulti_Params
{
	bool                                               bSlashed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentAccessory_Bayonet.StabPlayer
struct AAttachmentAccessory_Bayonet_StabPlayer_Params
{
	struct FBayonetDamage                              BayonetDamage;                                             // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentAccessory_Bayonet.OnSwitchToBlood
struct AAttachmentAccessory_Bayonet_OnSwitchToBlood_Params
{
};

// Function Pavlov.AttachmentCanted.OnFlipCantedSight
struct AAttachmentCanted_OnFlipCantedSight_Params
{
	bool                                               bRightHanded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentSight.UpdateScopeHiddenActors
struct AAttachmentSight_UpdateScopeHiddenActors_Params
{
};

// Function Pavlov.AttachmentSight.SetScopeActive
struct AAttachmentSight_SetScopeActive_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentSight.OnScopeExploit
struct AAttachmentSight_OnScopeExploit_Params
{
	bool                                               bExploit;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentSight.GetLenseMesh
struct AAttachmentSight_GetLenseMesh_Params
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                              ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentSight.DebugFOVAngle
struct AAttachmentSight_DebugFOVAngle_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachmentSight.ApplyZeroing
struct AAttachmentSight_ApplyZeroing_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachProxy.SetupOwnerAttachment
struct AAttachProxy_SetupOwnerAttachment_Params
{
	struct FAttachProxyInfo                            NewAttachInfo;                                             // 0x0000(0x0050)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachProxy.SetAttachInfo
struct AAttachProxy_SetAttachInfo_Params
{
	struct FAttachProxyInfo                            NewAttachInfo;                                             // 0x0000(0x0050)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachProxy.OwnerKilled
struct AAttachProxy_OwnerKilled_Params
{
	class AActor*                                      Killed;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AttachProxy.OnRep_AttachInfo
struct AAttachProxy_OnRep_AttachInfo_Params
{
};

// Function Pavlov.AttachProxy.OnParentDestroyed
struct AAttachProxy_OnParentDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.Update
struct UAvatarSkin_Update_Params
{
};

// Function Pavlov.AvatarSkin.SetStencilValue
struct UAvatarSkin_SetStencilValue_Params
{
	unsigned char                                      Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.SetRenderToCustomDepth
struct UAvatarSkin_SetRenderToCustomDepth_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.RemoveUsedComponent
struct UAvatarSkin_RemoveUsedComponent_Params
{
	class UActorComponent*                             Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.OptimizeAvatar
struct UAvatarSkin_OptimizeAvatar_Params
{
	class USkeletalMeshComponent*                      PawnAvatar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.GetPawn
struct UAvatarSkin_GetPawn_Params
{
	class APavlovPawn*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.GetBaseMeshComponent
struct UAvatarSkin_GetBaseMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.CreateChildSkeletalMeshComponent
struct UAvatarSkin_CreateChildSkeletalMeshComponent_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkin.AddUsedComponent
struct UAvatarSkin_AddUsedComponent_Params
{
	class UActorComponent*                             Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AvatarSkinCustom.SetCustomMesh
struct UAvatarSkinCustom_SetCustomMesh_Params
{
	struct FName                                       MeshName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               CustomHandMesh;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.AzureGameMode.Travel
struct AAzureGameMode_Travel_Params
{
};

// Function Pavlov.AzureServer.SoftTick
struct UAzureServer_SoftTick_Params
{
};

// Function Pavlov.PavlovGameMode.TerminateGameSession
struct APavlovGameMode_TerminateGameSession_Params
{
};

// Function Pavlov.PavlovGameMode.SwitchTeam
struct APavlovGameMode_SwitchTeam_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.Suicide
struct APavlovGameMode_Suicide_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.StopReplayRecording
struct APavlovGameMode_StopReplayRecording_Params
{
};

// Function Pavlov.PavlovGameMode.StartReplayRecording
struct APavlovGameMode_StartReplayRecording_Params
{
};

// Function Pavlov.PavlovGameMode.SpawnVehicleWRef
struct APavlovGameMode_SpawnVehicleWRef_Params
{
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                     // 0x0000(0x0060)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SpawnVehicleForPawn
struct APavlovGameMode_SpawnVehicleForPawn_Params
{
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SpawnVehicle
struct APavlovGameMode_SpawnVehicle_Params
{
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       VehicleID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SpawnPlayer
struct APavlovGameMode_SpawnPlayer_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SpawnPavlovPawn
struct APavlovGameMode_SpawnPavlovPawn_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SpawnAndPossesPawns
struct APavlovGameMode_SpawnAndPossesPawns_Params
{
};

// Function Pavlov.PavlovGameMode.ShuffleTeams
struct APavlovGameMode_ShuffleTeams_Params
{
};

// Function Pavlov.PavlovGameMode.SetTTTRoundEndSoundEnabled
struct APavlovGameMode_SetTTTRoundEndSoundEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetTeamLockTime
struct APavlovGameMode_SetTeamLockTime_Params
{
	float                                              LockTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetTeamCash
struct APavlovGameMode_SetTeamCash_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetRoundState
struct APavlovGameMode_SetRoundState_Params
{
	PavlovProxy_EPavlovRoundState                      State;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetPlayerScore
struct APavlovGameMode_SetPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetPawnsInvulnerable
struct APavlovGameMode_SetPawnsInvulnerable_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetMovement
struct APavlovGameMode_SetMovement_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetLimitedAmmoMode
struct APavlovGameMode_SetLimitedAmmoMode_Params
{
	unsigned char                                      LimitedAmmoType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetInactivityThresholds
struct APavlovGameMode_SetInactivityThresholds_Params
{
	int                                                NewInactivityThreashold;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewInactivityDormantThreashold;                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetGrenadePinPrevention
struct APavlovGameMode_SetGrenadePinPrevention_Params
{
	bool                                               bPreventGrenadePins;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetEveryoneCash
struct APavlovGameMode_SetEveryoneCash_Params
{
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.SetAttackingTeam
struct APavlovGameMode_SetAttackingTeam_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.RotateMap
struct APavlovGameMode_RotateMap_Params
{
};

// Function Pavlov.PavlovGameMode.ResetSNDMatch
struct APavlovGameMode_ResetSNDMatch_Params
{
};

// Function Pavlov.PavlovGameMode.ResetScore
struct APavlovGameMode_ResetScore_Params
{
};

// Function Pavlov.PavlovGameMode.ReplenishPlayersAmmo
struct APavlovGameMode_ReplenishPlayersAmmo_Params
{
};

// Function Pavlov.PavlovGameMode.ReplaceVehicleSpawners
struct APavlovGameMode_ReplaceVehicleSpawners_Params
{
};

// Function Pavlov.PavlovGameMode.RefreshOutOfBounds
struct APavlovGameMode_RefreshOutOfBounds_Params
{
};

// Function Pavlov.PavlovGameMode.PunishTeamKiller
struct APavlovGameMode_PunishTeamKiller_Params
{
	class APavlovPlayerState*                          TeamKiller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.PostStats
struct APavlovGameMode_PostStats_Params
{
};

// Function Pavlov.PavlovGameMode.PostRoundCleanUp
struct APavlovGameMode_PostRoundCleanUp_Params
{
};

// Function Pavlov.PavlovGameMode.OnSteamTicketValidation
struct APavlovGameMode_OnSteamTicketValidation_Params
{
	struct FString                                     SteamUserId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Steamworks_ESteamAuthResponse                      Response;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OwnerSteamUserId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnspawnVehicleWRefAsync
struct APavlovGameMode_OnspawnVehicleWRefAsync_Params
{
	class UClass*                                      VehicleClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                     // 0x0000(0x0060)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnSpawnVehicleAsync
struct APavlovGameMode_OnSpawnVehicleAsync_Params
{
	class UClass*                                      VehicleClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnRoundStateChanged
struct APavlovGameMode_OnRoundStateChanged_Params
{
	PavlovProxy_EPavlovRoundState                      OldState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPavlovRoundState                      NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnPlayerSpawned
struct APavlovGameMode_OnPlayerSpawned_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnPlayerKilled
struct APavlovGameMode_OnPlayerKilled_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnPawnKilled
struct APavlovGameMode_OnPawnKilled_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnOutOfBoundsOverlap
struct APavlovGameMode_OnOutOfBoundsOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnOutOfBoundsEndOverlap
struct APavlovGameMode_OnOutOfBoundsEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnLimitedAmmoModeChanged
struct APavlovGameMode_OnLimitedAmmoModeChanged_Params
{
	PavlovProxy_ELimitedAmmoType                       LimitedAmmoType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.OnKillVolumeOverlap
struct APavlovGameMode_OnKillVolumeOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.MakeNavmeshStatic
struct APavlovGameMode_MakeNavmeshStatic_Params
{
};

// Function Pavlov.PavlovGameMode.LogSNDWinner
struct APavlovGameMode_LogSNDWinner_Params
{
	int                                                LogRound;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LogTeamID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.LogBombExplosion
struct APavlovGameMode_LogBombExplosion_Params
{
};

// Function Pavlov.PavlovGameMode.LogBomb
struct APavlovGameMode_LogBomb_Params
{
	class AController*                                 Interactor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBombPlanted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.KickByStringId
struct APavlovGameMode_KickByStringId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KickReason;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bBan;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.KickByPlayerState
struct APavlovGameMode_KickByPlayerState_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KickReason;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bBan;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToBlacklist;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.IsTeamDead
struct APavlovGameMode_IsTeamDead_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.InitializedVehicleSpawners
struct APavlovGameMode_InitializedVehicleSpawners_Params
{
	bool                                               bHasSpawners;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.IncrementTeamScore
struct APavlovGameMode_IncrementTeamScore_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.IncrementPlayerScore
struct APavlovGameMode_IncrementPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GiveTeamCash
struct APavlovGameMode_GiveTeamCash_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GiveItem
struct APavlovGameMode_GiveItem_Params
{
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlockDuration;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoaded;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GiveEveryoneCash
struct APavlovGameMode_GiveEveryoneCash_Params
{
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetTeamStatus
struct APavlovGameMode_GetTeamStatus_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Num;                                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Casualties;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetTeamRealPlayerCount
struct APavlovGameMode_GetTeamRealPlayerCount_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetSteamAudioGun
struct APavlovGameMode_GetSteamAudioGun_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetSpawnPointsForQuery
struct APavlovGameMode_GetSpawnPointsForQuery_Params
{
	int                                                NumOfSpawnPoints;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APlayerSpawnPoint*>                   ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetRoundNumber
struct APavlovGameMode_GetRoundNumber_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetRealPlayerCount
struct APavlovGameMode_GetRealPlayerCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetRandomController
struct APavlovGameMode_GetRandomController_Params
{
	int                                                TeamFilter;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRealPlayer;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetMaxPlayerCount
struct APavlovGameMode_GetMaxPlayerCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetKillZHeight
struct APavlovGameMode_GetKillZHeight_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetKillReward
struct APavlovGameMode_GetKillReward_Params
{
	class APavlovPlayerState*                          Killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          Victim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageTrackInfo                            LastHitInfo;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetDynamicSpawnPointForTeam
struct APavlovGameMode_GetDynamicSpawnPointForTeam_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerSpawnPoint*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.GetDynamicOccludedSpawnPoint
struct APavlovGameMode_GetDynamicOccludedSpawnPoint_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerSpawnPoint*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.FinalizeMapSwitch
struct APavlovGameMode_FinalizeMapSwitch_Params
{
};

// Function Pavlov.PavlovGameMode.FinalizeMapRotation
struct APavlovGameMode_FinalizeMapRotation_Params
{
};

// Function Pavlov.PavlovGameMode.EndTTTRound
struct APavlovGameMode_EndTTTRound_Params
{
};

// Function Pavlov.PavlovGameMode.EnableFallDamage
struct APavlovGameMode_EnableFallDamage_Params
{
	bool                                               bFallEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.DestroyPushSpawns
struct APavlovGameMode_DestroyPushSpawns_Params
{
};

// Function Pavlov.PavlovGameMode.DestroyBot
struct APavlovGameMode_DestroyBot_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.CreateDedicatedServerSession
struct APavlovGameMode_CreateDedicatedServerSession_Params
{
};

// Function Pavlov.PavlovGameMode.CreateBot
struct APavlovGameMode_CreateBot_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.CleanUpItems
struct APavlovGameMode_CleanUpItems_Params
{
};

// Function Pavlov.PavlovGameMode.CanRotateMap
struct APavlovGameMode_CanRotateMap_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.CanChangeScore
struct APavlovGameMode_CanChangeScore_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.AssignPlayerSkin
struct APavlovGameMode_AssignPlayerSkin_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.AddTTTGameInfo
struct APavlovGameMode_AddTTTGameInfo_Params
{
	class UClass*                                      TTTGameInfoClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTTTGameInfo*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.AddStatByController
struct APavlovGameMode_AddStatByController_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EPlayerStats                                PlayerStat;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.AddStat
struct APavlovGameMode_AddStat_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EPlayerStats                                PlayerStat;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.AddExtraRoundTime
struct APavlovGameMode_AddExtraRoundTime_Params
{
	float                                              ExtraTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameMode.AddAssist
struct APavlovGameMode_AddAssist_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BattlegroundsGameMode.PerformWaitingHeartBeat
struct ABattlegroundsGameMode_PerformWaitingHeartBeat_Params
{
};

// Function Pavlov.BattlegroundsGameMode.PerformGameHeartBeat
struct ABattlegroundsGameMode_PerformGameHeartBeat_Params
{
};

// Function Pavlov.BloodPuddle.OnPour
struct ABloodPuddle_OnPour_Params
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.BloodPuddle.OnOwnerEndPlay
struct ABloodPuddle_OnOwnerEndPlay_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 Reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BloodSplatGeometry.FadeOut
struct ABloodSplatGeometry_FadeOut_Params
{
};

// Function Pavlov.Bomb.ResetBombPosition
struct ABomb_ResetBombPosition_Params
{
};

// Function Pavlov.Bomb.PlantAt
struct ABomb_PlantAt_Params
{
	class ABombPlantSpot*                              Spot;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.OnPlayerOcclusionChange
struct ABomb_OnPlayerOcclusionChange_Params
{
	bool                                               bNewOccluded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.OnPlanted
struct ABomb_OnPlanted_Params
{
};

// Function Pavlov.Bomb.OnGrace
struct ABomb_OnGrace_Params
{
};

// Function Pavlov.Bomb.OnDetonation
struct ABomb_OnDetonation_Params
{
};

// Function Pavlov.Bomb.OnDefuse
struct ABomb_OnDefuse_Params
{
};

// Function Pavlov.Bomb.OnCodeReset
struct ABomb_OnCodeReset_Params
{
};

// Function Pavlov.Bomb.OnButtonPressed
struct ABomb_OnButtonPressed_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.OnBeep
struct ABomb_OnBeep_Params
{
};

// Function Pavlov.Bomb.MulticastOnPlantAt
struct ABomb_MulticastOnPlantAt_Params
{
	class ABombPlantSpot*                              Spot;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.MulticastOnGrace
struct ABomb_MulticastOnGrace_Params
{
};

// Function Pavlov.Bomb.MulticastOnEnterCode
struct ABomb_MulticastOnEnterCode_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.MulticastOnDetonation
struct ABomb_MulticastOnDetonation_Params
{
};

// Function Pavlov.Bomb.MulticastOnDefuse
struct ABomb_MulticastOnDefuse_Params
{
};

// Function Pavlov.Bomb.MulticastOnCodeReset
struct ABomb_MulticastOnCodeReset_Params
{
};

// Function Pavlov.Bomb.MulticastOnBeep
struct ABomb_MulticastOnBeep_Params
{
};

// Function Pavlov.Bomb.IsWireCut
struct ABomb_IsWireCut_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.IsButtonPressed
struct ABomb_IsButtonPressed_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.GetWireLocation
struct ABomb_GetWireLocation_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.GetClosestValidWireIndex
struct ABomb_GetClosestValidWireIndex_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.ExpireCode
struct ABomb_ExpireCode_Params
{
};

// Function Pavlov.Bomb.EnterDigit
struct ABomb_EnterDigit_Params
{
	int                                                Digit;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Presser;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.Detonate
struct ABomb_Detonate_Params
{
};

// Function Pavlov.Bomb.Defuse
struct ABomb_Defuse_Params
{
	class AController*                                 Defuser;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.CutWire
struct ABomb_CutWire_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Defuser;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Bomb.AllowAutoResetBomb
struct ABomb_AllowAutoResetBomb_Params
{
	bool                                               bAutoReset;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BombPlantSpot.UpdateEnabledState
struct ABombPlantSpot_UpdateEnabledState_Params
{
};

// Function Pavlov.BombPlantSpot.SetSpotEnabled
struct ABombPlantSpot_SetSpotEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BombPlantSpot.ResetSpot
struct ABombPlantSpot_ResetSpot_Params
{
};

// Function Pavlov.BombPlantSpot.OnRep_PlantedHere
struct ABombPlantSpot_OnRep_PlantedHere_Params
{
};

// Function Pavlov.BombPlantSpot.MulticastOnPlantStateChanged
struct ABombPlantSpot_MulticastOnPlantStateChanged_Params
{
	bool                                               bPlanted;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BootGameMode.OnAsyncLoadCompleted
struct ABootGameMode_OnAsyncLoadCompleted_Params
{
};

// Function Pavlov.Bullet.GetBulletMesh
struct ABullet_GetBulletMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UberWheel.SetEnabled
struct AUberWheel_SetEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UberWheel.IsEnabled
struct AUberWheel_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenu.OnScriptingReady
struct ABuyMenu_OnScriptingReady_Params
{
};

// Function Pavlov.BuyMenu.OnReadyForBindings
struct ABuyMenu_OnReadyForBindings_Params
{
};

// Function Pavlov.BuyMenu.OnCashUpdated
struct ABuyMenu_OnCashUpdated_Params
{
	int                                                Cash;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenu.OnBuyingChanged
struct ABuyMenu_OnBuyingChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenuData.RemoveBuyMenuSlot
struct UBuyMenuData_RemoveBuyMenuSlot_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenuData.PropertiesToJson
struct UBuyMenuData_PropertiesToJson_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenuData.JsonStringToBuyWheelData
struct UBuyMenuData_JsonStringToBuyWheelData_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenuData.GetFilteredList
struct UBuyMenuData_GetFilteredList_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBuyMenuSlot>                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenuData.CreateBuyMenuData
struct UBuyMenuData_CreateBuyMenuData_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuyMenuData*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.BuyMenuData.AddBuyMenuSlot
struct UBuyMenuData_AddBuyMenuSlot_Params
{
	struct FBuyMenuSlot                                Slot;                                                      // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.ChamberComponent.ResetChamber
struct UChamberComponent_ResetChamber_Params
{
};

// Function Pavlov.ChamberComponent.OnOverlap
struct UChamberComponent_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.ChamberComponent.OnChamberStateChanged
struct UChamberComponent_OnChamberStateChanged_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EVRGunChamberState                     OldState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EVRGunChamberState                     NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ChamberComponent.DestroyConstrainedMesh
struct UChamberComponent_DestroyConstrainedMesh_Params
{
};

// Function Pavlov.ChamberComponent.DebugDraw
struct UChamberComponent_DebugDraw_Params
{
};

// Function Pavlov.ChamberComponent.CheckConstraintBreakThreshold
struct UChamberComponent_CheckConstraintBreakThreshold_Params
{
};

// Function Pavlov.ChamberComponent.BreakCheck
struct UChamberComponent_BreakCheck_Params
{
};

// Function Pavlov.ChamberComponent.AllowRemoval
struct UChamberComponent_AllowRemoval_Params
{
};

// Function Pavlov.UIView.OnScriptingReady
struct AUIView_OnScriptingReady_Params
{
};

// Function Pavlov.UIView.OnReadyForBindings
struct AUIView_OnReadyForBindings_Params
{
};

// Function Pavlov.MenuUniverseView.SetVisible
struct AMenuUniverseView_SetVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.SetDockTransformOverride
struct AMenuUniverseView_SetDockTransformOverride_Params
{
	struct FTransform                                  T;                                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.IsVisible
struct AMenuUniverseView_IsVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetUniverseTransform
struct AMenuUniverseView_GetUniverseTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetTopRightLocation
struct AMenuUniverseView_GetTopRightLocation_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetTopLeftLocation
struct AMenuUniverseView_GetTopLeftLocation_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetOffset2D
struct AMenuUniverseView_GetOffset2D_Params
{
	struct FVector2D                                   Pivot2D;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetOffset
struct AMenuUniverseView_GetOffset_Params
{
	struct FVector2D                                   Pivot2D;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetMenuUniverse
struct AMenuUniverseView_GetMenuUniverse_Params
{
	class AMenuUniverse*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetCenterLocation
struct AMenuUniverseView_GetCenterLocation_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetBottomRightLocation
struct AMenuUniverseView_GetBottomRightLocation_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.GetBottomLeftLocation
struct AMenuUniverseView_GetBottomLeftLocation_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.FadeEnded
struct AMenuUniverseView_FadeEnded_Params
{
};

// Function Pavlov.MenuUniverseView.Fade
struct AMenuUniverseView_Fade_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseView.ClearDockTransformOverride
struct AMenuUniverseView_ClearDockTransformOverride_Params
{
};

// Function Pavlov.MenuUniverseView.AnimateTo
struct AMenuUniverseView_AnimateTo_Params
{
	struct FVector2D                                   NewPivotLocation;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotator;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.ContentView.OnSideInterfaceChanged
struct AContentView_OnSideInterfaceChanged_Params
{
	Pavlov_EUserInterfaceType                          PrimaryInterface;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EUserInterfaceType                          OldInterface;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ContentView.OnLobbyLeave
struct AContentView_OnLobbyLeave_Params
{
};

// Function Pavlov.ContentView.OnLobbyEnter
struct AContentView_OnLobbyEnter_Params
{
	bool                                               bFailure;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ContentView.OnInterfaceChanged
struct AContentView_OnInterfaceChanged_Params
{
	Pavlov_EUserInterfaceType                          OldInterface;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PlayOnlineView.UpdateLobbyData
struct APlayOnlineView_UpdateLobbyData_Params
{
};

// Function Pavlov.PlayOnlineView.OnServerBrowserUpdated
struct APlayOnlineView_OnServerBrowserUpdated_Params
{
};

// Function Pavlov.PlayOnlineView.OnPingUpdated
struct APlayOnlineView_OnPingUpdated_Params
{
	class UServerContainer*                            Container;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PlayOnlineView.OnOnlineError
struct APlayOnlineView_OnOnlineError_Params
{
	Pavlov_EOnlineError                                Error;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMessage;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PlayOnlineView.OnMapBrowserDestroyed
struct APlayOnlineView_OnMapBrowserDestroyed_Params
{
};

// Function Pavlov.PlayOnlineView.OnMapBrowserCommit
struct APlayOnlineView_OnMapBrowserCommit_Params
{
	struct FModalCommitParams                          Params;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PlayOnlineView.OnLobbyPinDestroyed
struct APlayOnlineView_OnLobbyPinDestroyed_Params
{
};

// Function Pavlov.PlayOnlineView.OnLobbyPinCommit
struct APlayOnlineView_OnLobbyPinCommit_Params
{
	struct FModalCommitParams                          Params;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PlayOnlineView.LobbyTalkCheck
struct APlayOnlineView_LobbyTalkCheck_Params
{
};

// Function Pavlov.ConnectSpinnerModalView.OnWorkshopDownloadProgress
struct AConnectSpinnerModalView_OnWorkshopDownloadProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CosmeticTickActor.CosmeticTick
struct ACosmeticTickActor_CosmeticTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.SpawnItemProxy
struct ACustomItem_SpawnItemProxy_Params
{
	class UClass*                                      CustomItemClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.SetPickDisabled
struct ACustomItem_SetPickDisabled_Params
{
	bool                                               bDisabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.PlayerDroppedItem
struct ACustomItem_PlayerDroppedItem_Params
{
};

// Function Pavlov.CustomItem.OnRep_CustomProxy
struct ACustomItem_OnRep_CustomProxy_Params
{
};

// Function Pavlov.CustomItem.GetPawn
struct ACustomItem_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.GetItemState
struct ACustomItem_GetItemState_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.GetItemSequence
struct ACustomItem_GetItemSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.GetExcludeSlots
struct ACustomItem_GetExcludeSlots_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.DropItem
struct ACustomItem_DropItem_Params
{
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.CustomItem.CustomItemDestroyed
struct ACustomItem_CustomItemDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.DamageEffectComponent.OwnerKilled
struct UDamageEffectComponent_OwnerKilled_Params
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.DamageEffectComponent.InitComponent
struct UDamageEffectComponent_InitComponent_Params
{
};

// Function Pavlov.DamageEffectComponent.EnableDebugging
struct UDamageEffectComponent_EnableDebugging_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.DamageEffectComponent.DisplayHit
struct UDamageEffectComponent_DisplayHit_Params
{
	struct FVector                                     BulletDirection;                                           // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.DamageTrackerComponent.ResetTracking
struct UDamageTrackerComponent_ResetTracking_Params
{
};

// Function Pavlov.DamageTrackerComponent.GetLastHit
struct UDamageTrackerComponent_GetLastHit_Params
{
	struct FDamageTrackInfo                            LastHit;                                                   // 0x0000(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.DamageTrackerComponent.GatherAssists
struct UDamageTrackerComponent_GatherAssists_Params
{
	TArray<struct FDamageTrackInfo>                    Assists;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.DedicatedServer.TravelNextTick
struct UDedicatedServer_TravelNextTick_Params
{
};

// Function Pavlov.DedicatedServer.OnMapDownloaded
struct UDedicatedServer_OnMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.DedicatedServer.GetServerDetails
struct UDedicatedServer_GetServerDetails_Params
{
	struct FServerDetails                              ReturnValue;                                               // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovObject.TickByInterval
struct UPavlovObject_TickByInterval_Params
{
};

// Function Pavlov.Destructible.OnShatter
struct ADestructible_OnShatter_Params
{
	struct FVector                                     Normal;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Destructible.MulticastOnShatter
struct ADestructible_MulticastOnShatter_Params
{
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.DoubleBarrelGunState.SetBarrel
struct UDoubleBarrelGunState_SetBarrel_Params
{
	bool                                               bOpen;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.FlyingHelmet.ApplyImpulse
struct AFlyingHelmet_ApplyImpulse_Params
{
};

// Function Pavlov.FriendsView.UpdateFriendsModel
struct AFriendsView_UpdateFriendsModel_Params
{
};

// Function Pavlov.GameSessionServer.ReportState
struct UGameSessionServer_ReportState_Params
{
};

// Function Pavlov.GameSessionServer.OnMapDownloaded
struct UGameSessionServer_OnMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GameSessionServer.OnDownloadProgress
struct UGameSessionServer_OnDownloadProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GameSessionServer.AttemptToDispatch
struct UGameSessionServer_AttemptToDispatch_Params
{
};

// Function Pavlov.GestureComponent.RegisterGesture
struct UGestureComponent_RegisterGesture_Params
{
	struct FGestureSetup                               Setup;                                                     // 0x0000(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.UpdateUIState
struct APavlovItemController_UpdateUIState_Params
{
};

// Function Pavlov.PavlovItemController.SetWheelEnabled
struct APavlovItemController_SetWheelEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.SetMenu
struct APavlovItemController_SetMenu_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.SetKillfeed
struct APavlovItemController_SetKillfeed_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.ReleaseTwoHandGrip
struct APavlovItemController_ReleaseTwoHandGrip_Params
{
};

// Function Pavlov.PavlovItemController.OnTeamIdChanged
struct APavlovItemController_OnTeamIdChanged_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.OnSelectionPicked
struct APavlovItemController_OnSelectionPicked_Params
{
	class AVRItem*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.IsWheelEnabled
struct APavlovItemController_IsWheelEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.IsTwoHandReloadEnabled
struct APavlovItemController_IsTwoHandReloadEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.IsTwoHandGripEnabled
struct APavlovItemController_IsTwoHandGripEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.IsMenuActive
struct APavlovItemController_IsMenuActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.GetOppositeHandController
struct APavlovItemController_GetOppositeHandController_Params
{
	class APavlovItemController*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.GetHandMenuInstance
struct APavlovItemController_GetHandMenuInstance_Params
{
	class AHandMenu*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.GetFingerPointLocation
struct APavlovItemController_GetFingerPointLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovItemController.ForceTwoHandGrip
struct APavlovItemController_ForceTwoHandGrip_Params
{
};

// Function Pavlov.PavlovItemController.ClientEmptyGrippedHand
struct APavlovItemController_ClientEmptyGrippedHand_Params
{
};

// Function Pavlov.PavlovItemController.ClearWheelInstance
struct APavlovItemController_ClearWheelInstance_Params
{
};

// Function Pavlov.GhostItemController.OnPointModeChanged
struct AGhostItemController_OnPointModeChanged_Params
{
	Pavlov_EGhostPointMode                             OldPointMode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GhostItemController.ChangePointMode
struct AGhostItemController_ChangePointMode_Params
{
	Pavlov_EGhostPointMode                             NewPointMode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawnBase.GetNonDominantController
struct APavlovPawnBase_GetNonDominantController_Params
{
	class APavlovItemController*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawnBase.GetDominantController
struct APavlovPawnBase_GetDominantController_Params
{
	class APavlovItemController*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GhostPawn.SpawnTags
struct AGhostPawn_SpawnTags_Params
{
};

// Function Pavlov.GhostPawn.OnTraveledToSpectatorRoom
struct AGhostPawn_OnTraveledToSpectatorRoom_Params
{
};

// Function Pavlov.GhostPawn.OnTeamIdChanged
struct AGhostPawn_OnTeamIdChanged_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GhostPawn.OnGraceTimeEnded
struct AGhostPawn_OnGraceTimeEnded_Params
{
};

// Function Pavlov.GhostPawn.EndGraceTime
struct AGhostPawn_EndGraceTime_Params
{
};

// Function Pavlov.GhostPawn.CreateVoiceComponent
struct AGhostPawn_CreateVoiceComponent_Params
{
};

// Function Pavlov.GhostPawn.ClientTravelToSpectatorRoom
struct AGhostPawn_ClientTravelToSpectatorRoom_Params
{
};

// Function Pavlov.GhostPawn.ClientSpawnKillCam
struct AGhostPawn_ClientSpawnKillCam_Params
{
	struct FKillInfo                                   KillInfo;                                                  // 0x0000(0x0070)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.GhostPawn.ClearTags
struct AGhostPawn_ClearTags_Params
{
};

// Function Pavlov.GlobalPlayerEffects.SwitchState
struct AGlobalPlayerEffects_SwitchState_Params
{
	Pavlov_EPlayerEffectState                          NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GlobalPlayerEffects.ResetGlobalEffects
struct AGlobalPlayerEffects_ResetGlobalEffects_Params
{
};

// Function Pavlov.GlobalPlayerEffects.InstigateFlashVision
struct AGlobalPlayerEffects_InstigateFlashVision_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewAlpha;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GlobalPlayerEffects.InstigateFlash
struct AGlobalPlayerEffects_InstigateFlash_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewAlpha;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GlobalPlayerEffects.GetFlashDuration
struct AGlobalPlayerEffects_GetFlashDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GlobalPlayerEffects.DisableWindSound
struct AGlobalPlayerEffects_DisableWindSound_Params
{
};

// Function Pavlov.Grenade.ServerRestoreSafetyPin
struct AGrenade_ServerRestoreSafetyPin_Params
{
};

// Function Pavlov.Grenade.ServerRemoveSafetyPin
struct AGrenade_ServerRemoveSafetyPin_Params
{
};

// Function Pavlov.Grenade.ServerReleaseSafetyLever
struct AGrenade_ServerReleaseSafetyLever_Params
{
	float                                              PinPull;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Grenade.RemoveSafetyPin
struct AGrenade_RemoveSafetyPin_Params
{
};

// Function Pavlov.Grenade.ReleaseSafetyLever
struct AGrenade_ReleaseSafetyLever_Params
{
	float                                              PinPull;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Grenade.PullSafetyPin
struct AGrenade_PullSafetyPin_Params
{
	float                                              Ratio;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Grenade.OnRep_ProjectileActive
struct AGrenade_OnRep_ProjectileActive_Params
{
};

// Function Pavlov.Grenade.OnReleaseSafetyLever
struct AGrenade_OnReleaseSafetyLever_Params
{
};

// Function Pavlov.Grenade.OnProjectileStop
struct AGrenade_OnProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.Grenade.OnProjectileBounce
struct AGrenade_OnProjectileBounce_Params
{
	struct FHitResult                                  ImpactResult;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactVelocity;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Grenade.OnPinReinserted
struct AGrenade_OnPinReinserted_Params
{
};

// Function Pavlov.Grenade.OnDetonation
struct AGrenade_OnDetonation_Params
{
};

// Function Pavlov.Grenade.MulticastThrow
struct AGrenade_MulticastThrow_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Grenade.MulticastOnSafetyPinRemoved
struct AGrenade_MulticastOnSafetyPinRemoved_Params
{
};

// Function Pavlov.Grenade.MulticastOnReleaseSafetyLever
struct AGrenade_MulticastOnReleaseSafetyLever_Params
{
};

// Function Pavlov.Grenade.MulticastOnDetonation
struct AGrenade_MulticastOnDetonation_Params
{
};

// Function Pavlov.Grenade.GetHolidayLeverSound
struct AGrenade_GetHolidayLeverSound_Params
{
	class USoundCue*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Grenade.FixClientPin
struct AGrenade_FixClientPin_Params
{
};

// Function Pavlov.Grenade.Detonate
struct AGrenade_Detonate_Params
{
};

// Function Pavlov.Grenade.CanPullPin
struct AGrenade_CanPullPin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.UpdateCanRemoveAttachments
struct AGun_UpdateCanRemoveAttachments_Params
{
};

// Function Pavlov.Gun.ToggleAccessory_Server
struct AGun_ToggleAccessory_Server_Params
{
};

// Function Pavlov.Gun.ToggleAccessory
struct AGun_ToggleAccessory_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SupportsSuppressorAttachments
struct AGun_SupportsSuppressorAttachments_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SupportsSightAttachments
struct AGun_SupportsSightAttachments_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SupportsGripAttachments
struct AGun_SupportsGripAttachments_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SupportsCantedAttachments
struct AGun_SupportsCantedAttachments_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SupportsAttachments
struct AGun_SupportsAttachments_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SupportsAccessoryAttachments
struct AGun_SupportsAccessoryAttachments_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.StartSlideInputSound
struct AGun_StartSlideInputSound_Params
{
};

// Function Pavlov.Gun.SpawnAndAttachLowEndSight
struct AGun_SpawnAndAttachLowEndSight_Params
{
};

// Function Pavlov.Gun.SlideInputSound
struct AGun_SlideInputSound_Params
{
	float                                              SlideInput;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SetupBulletSkin
struct AGun_SetupBulletSkin_Params
{
	class UStaticMeshComponent*                        BulletMesh;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.SetAccessoryDrawDistance
struct AGun_SetAccessoryDrawDistance_Params
{
	bool                                               bLocallyOwned;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        OptimizeMesh;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.ResetAttachmentMode
struct AGun_ResetAttachmentMode_Params
{
};

// Function Pavlov.Gun.RecoilDrop
struct AGun_RecoilDrop_Params
{
};

// Function Pavlov.Gun.OptimizeGun
struct AGun_OptimizeGun_Params
{
	bool                                               bLocallyOwned;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.OnUnderExploitChanged
struct AGun_OnUnderExploitChanged_Params
{
	bool                                               bUnderExploit;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.OnTwoHandGripChanged
struct AGun_OnTwoHandGripChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.OnSpawnUnloaded
struct AGun_OnSpawnUnloaded_Params
{
};

// Function Pavlov.Gun.OnSliderUngrabbed
struct AGun_OnSliderUngrabbed_Params
{
};

// Function Pavlov.Gun.OnSliderInputReceived
struct AGun_OnSliderInputReceived_Params
{
	struct FVector                                     Input;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InputDelta;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.OnSliderGrabbed
struct AGun_OnSliderGrabbed_Params
{
};

// Function Pavlov.Gun.OnSlideModeChanged
struct AGun_OnSlideModeChanged_Params
{
	bool                                               bSliding;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.OnRecoilDropCooldown
struct AGun_OnRecoilDropCooldown_Params
{
};

// Function Pavlov.Gun.OnAttachModeChanged
struct AGun_OnAttachModeChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJustPicked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.OnAttachmentChanged
struct AGun_OnAttachmentChanged_Params
{
};

// Function Pavlov.Gun.MulticastOnRecoilDrop
struct AGun_MulticastOnRecoilDrop_Params
{
};

// Function Pavlov.Gun.IsUnderExploit
struct AGun_IsUnderExploit_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.IsInAttachmentMode
struct AGun_IsInAttachmentMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.IsBeingGrippedBy
struct AGun_IsBeingGrippedBy_Params
{
	class APavlovItemController*                       ByController;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.IsBeingGripped
struct AGun_IsBeingGripped_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.IsAttachmentCompatible
struct AGun_IsAttachmentCompatible_Params
{
	class UClass*                                      GunClass;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AttachmentClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.HasAttachment
struct AGun_HasAttachment_Params
{
	class UClass*                                      AttachmentClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.GetPicatinnySlideSpacer
struct AGun_GetPicatinnySlideSpacer_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.GetChamberMesh
struct AGun_GetChamberMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.GetAttachmentSocket
struct AGun_GetAttachmentSocket_Params
{
	class UClass*                                      AttachmentClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.GetAttachmentNames
struct AGun_GetAttachmentNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.GetAttachmentList
struct AGun_GetAttachmentList_Params
{
	TArray<class AAttachment*>                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.Gun.BayonetDamage_Server
struct AGun_BayonetDamage_Server_Params
{
	struct FBayonetDamage                              BayonetDamage;                                             // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.SkinComponent.LoadSkin
struct USkinComponent_LoadSkin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GunSkinComponent.HasBulletMaterial
struct UGunSkinComponent_HasBulletMaterial_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.GunSkinComponent.GetBulletMaterial
struct UGunSkinComponent_GetBulletMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HealEffectComponent.OwnerKilled
struct UHealEffectComponent_OwnerKilled_Params
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HealEffectComponent.Initialize
struct UHealEffectComponent_Initialize_Params
{
	float                                              HealTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          HealMat;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HighlightInterface.GetHighlightComponents
struct UHighlightInterface_GetHighlightComponents_Params
{
	Pavlov_EHighlightColor                             HighlightColor;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMeshComponent*>                      HighlightMeshes;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.RconPawn.ExitSpectator_Server
struct ARconPawn_ExitSpectator_Server_Params
{
};

// Function Pavlov.RepairTool.RepairVehicle
struct ARepairTool_RepairVehicle_Params
{
	class AActor*                                      Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.RepairTool.CanRepairVehicle
struct ARepairTool_CanRepairVehicle_Params
{
	class AActor*                                      RepairActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoTeams;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ReplayManager.PlayReplay
struct UReplayManager_PlayReplay_Params
{
	struct FString                                     ReplayId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ReplayManager.OnCustomMapDownloaded
struct UReplayManager_OnCustomMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ReplayManager.Find
struct UReplayManager_Find_Params
{
	struct FString                                     GameMode;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompetitive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ReviveTool.SetNumOfRevives
struct AReviveTool_SetNumOfRevives_Params
{
	int                                                AmountOfRevives;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ReviveTool.GetNumOfRevives
struct AReviveTool_GetNumOfRevives_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.RevolverGunState.SetCylinder
struct URevolverGunState_SetCylinder_Params
{
	bool                                               bOpen;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.RockerLauncherGunState.SetLauncherState
struct URockerLauncherGunState_SetLauncherState_Params
{
	Pavlov_ELauncherState                              State;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.RockerLauncherGunState.ChamberChanged
struct URockerLauncherGunState_ChamberChanged_Params
{
	int                                                ChamberIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EVRGunChamberState                     OldState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EVRGunChamberState                     NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HitBoxProxyComponent.OnBulletOverlap
struct UHitBoxProxyComponent_OnBulletOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.HolsterComponent.TakeItem
struct UHolsterComponent_TakeItem_Params
{
	class APavlovItemController*                       Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HolsterComponent.ServerTakeItem
struct UHolsterComponent_ServerTakeItem_Params
{
	class APavlovItemController*                       Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HolsterComponent.ServerHolster
struct UHolsterComponent_ServerHolster_Params
{
	class AVRItem*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HolsterComponent.OnRep_HolsteredItem
struct UHolsterComponent_OnRep_HolsteredItem_Params
{
};

// Function Pavlov.HolsterComponent.MulticastOnItemHolstered
struct UHolsterComponent_MulticastOnItemHolstered_Params
{
	class AVRItem*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HolsterComponent.MulticastOnDrop
struct UHolsterComponent_MulticastOnDrop_Params
{
	class AVRItem*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HolsterComponent.Mirror
struct UHolsterComponent_Mirror_Params
{
};

// Function Pavlov.HolsterComponent.Holster
struct UHolsterComponent_Holster_Params
{
	class AVRItem*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.HolsterComponent.Drop
struct UHolsterComponent_Drop_Params
{
};

// Function Pavlov.HolsterComponent.AttachItemLocally
struct UHolsterComponent_AttachItemLocally_Params
{
};

// Function Pavlov.IconRemover.AddIcons
struct UIconRemover_AddIcons_Params
{
	TArray<class UPrimitiveComponent*>                 IconArray;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.IconRemover.AddIcon
struct UIconRemover_AddIcon_Params
{
	class UPrimitiveComponent*                         Icon;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ImpairInterface.MarkAsImpaired
struct UImpairInterface_MarkAsImpaired_Params
{
	Pavlov_EImpairedType                               Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EventActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Instigator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ImpairInterface.GetImpairedEyesViewPoint
struct UImpairInterface_GetImpairedEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutRotation;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.InstancedSourceBusComponent.SilenceAudioComponent
struct UInstancedSourceBusComponent_SilenceAudioComponent_Params
{
};

// Function Pavlov.InstancedSourceBusComponent.Play
struct UInstancedSourceBusComponent_Play_Params
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceNoOcclusion;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.InstancedSourceBusComponent.OnSourceBusAudioFinished
struct UInstancedSourceBusComponent_OnSourceBusAudioFinished_Params
{
	class UAudioComponent*                             Comp;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.InstancedSourceBusComponent.OnAudioFinished
struct UInstancedSourceBusComponent_OnAudioFinished_Params
{
	class UAudioComponent*                             Comp;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.InstancedSourceBusComponent.GetAudioComponent
struct UInstancedSourceBusComponent_GetAudioComponent_Params
{
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Killfeed.Show
struct AKillfeed_Show_Params
{
};

// Function Pavlov.Killfeed.OnDisplayModeUpdated
struct AKillfeed_OnDisplayModeUpdated_Params
{
};

// Function Pavlov.Killfeed.OnArmKillfeedChanged
struct AKillfeed_OnArmKillfeedChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Killfeed.Hide
struct AKillfeed_Hide_Params
{
};

// Function Pavlov.Knife.StartThrowSound_Multi
struct AKnife_StartThrowSound_Multi_Params
{
};

// Function Pavlov.Knife.StartKnifeThrow
struct AKnife_StartKnifeThrow_Params
{
};

// Function Pavlov.Knife.SpawnKnifeProxy
struct AKnife_SpawnKnifeProxy_Params
{
	struct FAttachProxyInfo                            AttachInfo;                                                // 0x0000(0x0050)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.SetBloody
struct AKnife_SetBloody_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.OnRep_Bloody
struct AKnife_OnRep_Bloody_Params
{
};

// Function Pavlov.Knife.OnEndOverlap
struct AKnife_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.OnBloodyChanged
struct AKnife_OnBloodyChanged_Params
{
	bool                                               bNewBloody;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.OnBeginOverlap
struct AKnife_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.MulticastOnStab
struct AKnife_MulticastOnStab_Params
{
	bool                                               bDead;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.HasSpawnedProxy
struct AKnife_HasSpawnedProxy_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.GetKillConfirmationSound2D
struct AKnife_GetKillConfirmationSound2D_Params
{
	class USoundCue*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.GetAlternativeStabSound
struct AKnife_GetAlternativeStabSound_Params
{
	class USoundCue*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Knife.EnableTicking
struct AKnife_EnableTicking_Params
{
};

// Function Pavlov.Knife.DelayDestroyKnife
struct AKnife_DelayDestroyKnife_Params
{
};

// Function Pavlov.Knife.CheckThrowThreshold
struct AKnife_CheckThrowThreshold_Params
{
};

// Function Pavlov.KOTHObjective.UpdateHillMaterial
struct AKOTHObjective_UpdateHillMaterial_Params
{
	class UMaterialInterface*                          UpdateMaterial;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.KOTHObjective.SetHillActive
struct AKOTHObjective_SetHillActive_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.KOTHObjective.OnRep_KOTHState
struct AKOTHObjective_OnRep_KOTHState_Params
{
	Pavlov_EHillState                                  OldKOTHState;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.KOTHObjective.OnRep_KOTHProxy
struct AKOTHObjective_OnRep_KOTHProxy_Params
{
};

// Function Pavlov.KOTHObjective.OnObjectiveInitialized
struct AKOTHObjective_OnObjectiveInitialized_Params
{
};

// Function Pavlov.KOTHObjective.OnHillActive
struct AKOTHObjective_OnHillActive_Params
{
};

// Function Pavlov.KOTHObjective.InitializeFromProxy
struct AKOTHObjective_InitializeFromProxy_Params
{
	class AKOTHObjectiveProxy*                         ObjectiveProxy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.ShowLimitedAmmoCounter
struct ULimitedAmmoComponent_ShowLimitedAmmoCounter_Params
{
	bool                                               bCounterVisible;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.SetupAmmoUI_Server
struct ULimitedAmmoComponent_SetupAmmoUI_Server_Params
{
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.SetupAmmoCounter_Client
struct ULimitedAmmoComponent_SetupAmmoCounter_Client_Params
{
};

// Function Pavlov.LimitedAmmoComponent.RemoveAmmo
struct ULimitedAmmoComponent_RemoveAmmo_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemoveAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.PlayerDied
struct ULimitedAmmoComponent_PlayerDied_Params
{
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.MagToAmmo
struct ULimitedAmmoComponent_MagToAmmo_Params
{
	class AVRMagazine*                                 Mag;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.HasAmmoOfType
struct ULimitedAmmoComponent_HasAmmoOfType_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.GiveAmmoForBuy
struct ULimitedAmmoComponent_GiveAmmoForBuy_Params
{
	class AVRGun*                                      Gun;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoLimit;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.GetGunAmmoType
struct ULimitedAmmoComponent_GetGunAmmoType_Params
{
	class AVRGun*                                      Gun;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EAmmoType                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoTypeName
struct ULimitedAmmoComponent_GetAmmoTypeName_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoTypeFromName
struct ULimitedAmmoComponent_GetAmmoTypeFromName_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromType
struct ULimitedAmmoComponent_GetAmmoClassFromType_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoClassFromName
struct ULimitedAmmoComponent_GetAmmoClassFromName_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.GetAmmoAmount
struct ULimitedAmmoComponent_GetAmmoAmount_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.AddBulkAmmo
struct ULimitedAmmoComponent_AddBulkAmmo_Params
{
	TMap<VRFramework_EAmmoType, int>                   BulkAmmo;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoComponent.AddAmmo
struct ULimitedAmmoComponent_AddAmmo_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoBoxlessComponent.AddAmmoBox
struct ULimitedAmmoBoxlessComponent_AddAmmoBox_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LimitedAmmoCounter.ShowAmmoCounter
struct ALimitedAmmoCounter_ShowAmmoCounter_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LoadoutData.RemoveLoadout
struct ULoadoutData_RemoveLoadout_Params
{
	struct FString                                     LoadoutName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LoadoutData.PropertiesToJson
struct ULoadoutData_PropertiesToJson_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LoadoutData.JsonStringToLoadoutProperties
struct ULoadoutData_JsonStringToLoadoutProperties_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LoadoutData.CreateLoadoutProperties
struct ULoadoutData_CreateLoadoutProperties_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULoadoutData*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LoadoutData.CanUseLoadout
struct ULoadoutData_CanUseLoadout_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LoadoutData.AddLoadout
struct ULoadoutData_AddLoadout_Params
{
	struct FString                                     LoadoutName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLoadout                                    Loadout;                                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function Pavlov.LobbyStatusModel.OnLobbyStatusMessage
struct ULobbyStatusModel_OnLobbyStatusMessage_Params
{
	struct FString                                     InMessage;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInDownloading;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InProgress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LootSpawner.SetLootIndexByName
struct ALootSpawner_SetLootIndexByName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNetUpdate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LootSpawner.OnRep_LootIndex
struct ALootSpawner_OnRep_LootIndex_Params
{
};

// Function Pavlov.LootSpawner.OnLootChanged
struct ALootSpawner_OnLootChanged_Params
{
	unsigned char                                      Index;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LootSpawner.NetworkUpdate
struct ALootSpawner_NetworkUpdate_Params
{
};

// Function Pavlov.LootSpawner.IsClear
struct ALootSpawner_IsClear_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LootSpawner.GetLootNameByIndex
struct ALootSpawner_GetLootNameByIndex_Params
{
	unsigned char                                      Index;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LootSpawner.GetLootName
struct ALootSpawner_GetLootName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LootSpawner.GetLootIndexByName
struct ALootSpawner_GetLootIndexByName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.LootSpawner.ClearLoot
struct ALootSpawner_ClearLoot_Params
{
};

// Function Pavlov.MainMenu.OnUpdateScoreboard
struct AMainMenu_OnUpdateScoreboard_Params
{
};

// Function Pavlov.MainMenuView.OnVoteKickModalCommit
struct AMainMenuView_OnVoteKickModalCommit_Params
{
	struct FModalCommitParams                          Params;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.MainMenuView.LeaveImpl
struct AMainMenuView_LeaveImpl_Params
{
};

// Function Pavlov.MainMenuView.ExitGameImpl
struct AMainMenuView_ExitGameImpl_Params
{
};

// Function Pavlov.MapBrowserModel.OnSubscritionChanged
struct UMapBrowserModel_OnSubscritionChanged_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSubscribed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MapBrowserModel.OnRequestUserVote
struct UMapBrowserModel_OnRequestUserVote_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EWorkshopVoteType                           VoteType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MapBrowserModel.OnPreviewLoaded
struct UMapBrowserModel_OnPreviewLoaded_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MapBrowserModel.OnDownloadProgress
struct UMapBrowserModel_OnDownloadProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MapBrowserModel.OnDownloadBegin
struct UMapBrowserModel_OnDownloadBegin_Params
{
};

// Function Pavlov.MapBrowserModel.OnCustomMapQueryCompleted
struct UMapBrowserModel_OnCustomMapQueryCompleted_Params
{
};

// Function Pavlov.MapBrowserModel.OnCustomMapDownloadCompleted
struct UMapBrowserModel_OnCustomMapDownloadCompleted_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MapBrowserModel.OnArtificialQueryCompleted
struct UMapBrowserModel_OnArtificialQueryCompleted_Params
{
};

// Function Pavlov.MapValidator.GenerateNewColors
struct AMapValidator_GenerateNewColors_Params
{
};

// Function Pavlov.MapValidator.FlushDebugPoints
struct AMapValidator_FlushDebugPoints_Params
{
};

// Function Pavlov.MapValidator.DrawReflectionCaptureView
struct AMapValidator_DrawReflectionCaptureView_Params
{
};

// Function Pavlov.Matchmaking.UpdatePartyList
struct UMatchmaking_UpdatePartyList_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.SetSettings
struct UMatchmaking_SetSettings_Params
{
	struct FMatchSettings                              NewSettings;                                               // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.SetDefaultSettings
struct UMatchmaking_SetDefaultSettings_Params
{
};

// Function Pavlov.Matchmaking.Queue
struct UMatchmaking_Queue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.LeaveParty
struct UMatchmaking_LeaveParty_Params
{
};

// Function Pavlov.Matchmaking.JoinParty
struct UMatchmaking_JoinParty_Params
{
	struct FString                                     NetworkStr;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.IsInQueue
struct UMatchmaking_IsInQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.IsConnectingToServer
struct UMatchmaking_IsConnectingToServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.IsActive
struct UMatchmaking_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.GetPlayerTitleId
struct UMatchmaking_GetPlayerTitleId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.GetPlayerPlayFabId
struct UMatchmaking_GetPlayerPlayFabId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.GetPartyInstance
struct UMatchmaking_GetPartyInstance_Params
{
	class UMatchmakingParty*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.GetEntityType
struct UMatchmaking_GetEntityType_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.GetEntityToken
struct UMatchmaking_GetEntityToken_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.GetEntityId
struct UMatchmaking_GetEntityId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.CreateParty
struct UMatchmaking_CreateParty_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Matchmaking.Cancel
struct UMatchmaking_Cancel_Params
{
};

// Function Pavlov.MatchmakingParty.IsLocalMemberLeader
struct UMatchmakingParty_IsLocalMemberLeader_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MatchmakingParty.Hide
struct UMatchmakingParty_Hide_Params
{
};

// Function Pavlov.MatchmakingParty.GetMemberArray
struct UMatchmakingParty_GetMemberArray_Params
{
	TArray<struct FPartyMember>                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.MatchmakingParty.GetLeaderEntityId
struct UMatchmakingParty_GetLeaderEntityId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MatchmakingParty.Broadcast
struct UMatchmakingParty_Broadcast_Params
{
};

// Function Pavlov.MenuUniverse.UpdateDocks
struct AMenuUniverse_UpdateDocks_Params
{
};

// Function Pavlov.MenuUniverse.SetEnabled
struct AMenuUniverse_SetEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.OnViewTargetChangingFrom
struct AMenuUniverse_OnViewTargetChangingFrom_Params
{
	class AActor*                                      ViewTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.OnSideInterfaceChanged
struct AMenuUniverse_OnSideInterfaceChanged_Params
{
	Pavlov_EUserInterfaceType                          PrimaryInterface;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EUserInterfaceType                          OldInterface;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.OnInterfaceChanged
struct AMenuUniverse_OnInterfaceChanged_Params
{
	Pavlov_EUserInterfaceType                          OldInterface;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.OnHeadsetScaleChanged
struct AMenuUniverse_OnHeadsetScaleChanged_Params
{
	float                                              NewScale;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.OnEnableChanged
struct AMenuUniverse_OnEnableChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.IsEnabled
struct AMenuUniverse_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.GetViewById
struct AMenuUniverse_GetViewById_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMenuUniverseView*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.DockView
struct AMenuUniverse_DockView_Params
{
	Pavlov_EMenuUniverseDockingType                    Dock;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Order;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.CreateView
struct AMenuUniverse_CreateView_Params
{
	class UClass*                                      ViewClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ViewUrlOverride;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ControllerObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMenuUniverseView*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverse.AdjustFacingPivot
struct AMenuUniverse_AdjustFacingPivot_Params
{
};

// Function Pavlov.MenuUniverseController.OnTriggerReleased
struct UMenuUniverseController_OnTriggerReleased_Params
{
};

// Function Pavlov.MenuUniverseController.OnTriggerPressed
struct UMenuUniverseController_OnTriggerPressed_Params
{
};

// Function Pavlov.MenuUniverseController.OnTouchpadY
struct UMenuUniverseController_OnTouchpadY_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseController.OnTouchpadX
struct UMenuUniverseController_OnTouchpadX_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseController.OnScrollY
struct UMenuUniverseController_OnScrollY_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseController.OnScrollX
struct UMenuUniverseController_OnScrollX_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.MenuUniverseController.OnMenuReleased
struct UMenuUniverseController_OnMenuReleased_Params
{
};

// Function Pavlov.MenuUniverseController.OnMenuPressed
struct UMenuUniverseController_OnMenuPressed_Params
{
};

// Function Pavlov.Modal.Commit
struct UModal_Commit_Params
{
	struct FModalCommitParams                          Params;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.ModalMessageBox.SetProgress
struct UModalMessageBox_SetProgress_Params
{
	float                                              NewProgress;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.NameTagWidgetTTT.UpdateVis
struct UNameTagWidgetTTT_UpdateVis_Params
{
	class APavlovPlayerState*                          LocalPavPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          OwnerPavPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OculusInputBinding.ApplyEmulated
struct UOculusInputBinding_ApplyEmulated_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineAuthentication.ResetReLoginCooldown
struct UOnlineAuthentication_ResetReLoginCooldown_Params
{
};

// Function Pavlov.OnlineAuthentication.IsLoggedIn
struct UOnlineAuthentication_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineAuthentication.GetLocalPlatformId
struct UOnlineAuthentication_GetLocalPlatformId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineAuthentication.GetDisplayName
struct UOnlineAuthentication_GetDisplayName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLeaderboards.QueryLeaderboardRanks
struct UOnlineLeaderboards_QueryLeaderboardRanks_Params
{
	struct FString                                     LeaderboardId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.SetVoiceChat
struct UOnlineLobby_SetVoiceChat_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.SetMemberData
struct UOnlineLobby_SetMemberData_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.SetLobbyMemberLimit
struct UOnlineLobby_SetLobbyMemberLimit_Params
{
	int                                                MemberLimit;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.SetLobbyData
struct UOnlineLobby_SetLobbyData_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.SetFriendsOnly
struct UOnlineLobby_SetFriendsOnly_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.OnEncodedVoiceData
struct UOnlineLobby_OnEncodedVoiceData_Params
{
	TArray<unsigned char>                              EncodedVoiceData;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.OnAvatarUpdated
struct UOnlineLobby_OnAvatarUpdated_Params
{
	struct FString                                     ProductId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AvatarTexture;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.KickAndBan
struct UOnlineLobby_KickAndBan_Params
{
	int                                                MemberIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.Kick
struct UOnlineLobby_Kick_Params
{
	int                                                MemberIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.IsVoiceChatEnabled
struct UOnlineLobby_IsVoiceChatEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.IsMemberTalking
struct UOnlineLobby_IsMemberTalking_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.IsLocalUserOwner
struct UOnlineLobby_IsLocalUserOwner_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.IsFriendsOnly
struct UOnlineLobby_IsFriendsOnly_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.InviteFriends
struct UOnlineLobby_InviteFriends_Params
{
};

// Function Pavlov.OnlineLobby.GetNumLobbyMembers
struct UOnlineLobby_GetNumLobbyMembers_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.GetMemberData
struct UOnlineLobby_GetMemberData_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.GetLobbyMemberLimit
struct UOnlineLobby_GetLobbyMemberLimit_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.GetLobbyId
struct UOnlineLobby_GetLobbyId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineLobby.GetLobbyData
struct UOnlineLobby_GetLobbyData_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.OnServerConnectFailure
struct UOnlineManager_OnServerConnectFailure_Params
{
	Pavlov_EConnectorFailureReason                     FailureReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.OnErrorEvent
struct UOnlineManager_OnErrorEvent_Params
{
	Pavlov_EOnlineError                                Error;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMessage;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.LobbySearch
struct UOnlineManager_LobbySearch_Params
{
	struct FLobbySearchOptions                         SearchOptions;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.LeaveLobby
struct UOnlineManager_LeaveLobby_Params
{
};

// Function Pavlov.OnlineManager.JoinLobby
struct UOnlineManager_JoinLobby_Params
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.IsSearchingForLobbies
struct UOnlineManager_IsSearchingForLobbies_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.GetLobbyInstance
struct UOnlineManager_GetLobbyInstance_Params
{
	class UOnlineLobby*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.FindLobbyById
struct UOnlineManager_FindLobbyById_Params
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineManager.CreateLobby
struct UOnlineManager_CreateLobby_Params
{
	int                                                LobbyMemberLimit;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPublic;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlinePlatform.GetAvatarByPlayerState
struct UOnlinePlatform_GetAvatarByPlayerState_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlinePlatform.GetAvatar
struct UOnlinePlatform_GetAvatar_Params
{
	struct FString                                     ProductId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFailOver;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlinePlatformOculus.OnFriendsUpdated
struct UOnlinePlatformOculus_OnFriendsUpdated_Params
{
};

// Function Pavlov.OnlinePlatformOculus.OnDeepLinkMessage
struct UOnlinePlatformOculus_OnDeepLinkMessage_Params
{
	struct FString                                     ApiName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlinePlatformSteam.OnSteamRichPresenceUpdated
struct UOnlinePlatformSteam_OnSteamRichPresenceUpdated_Params
{
};

// Function Pavlov.OnlineStatics.GetOnlineStats
struct UOnlineStatics_GetOnlineStats_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineStats*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStatics.GetOnlinePlatform
struct UOnlineStatics_GetOnlinePlatform_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlinePlatform*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStatics.GetOnlineManager
struct UOnlineStatics_GetOnlineManager_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineManager*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStatics.GetOnlineLeaderboards
struct UOnlineStatics_GetOnlineLeaderboards_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnlineLeaderboards*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStatics.GetLocalUserIdAsString
struct UOnlineStatics_GetLocalUserIdAsString_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStatics.GetLocalDisplayName
struct UOnlineStatics_GetLocalDisplayName_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStats.QueryStatsServer
struct UOnlineStats_QueryStatsServer_Params
{
	struct FString                                     ProductUserId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStats.QueryStatsLocal
struct UOnlineStats_QueryStatsLocal_Params
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStats.IngestStatsServer
struct UOnlineStats_IngestStatsServer_Params
{
	struct FString                                     ProductUserIdString;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatAmount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OnlineStats.IngestStatsLocal
struct UOnlineStats_IngestStatsLocal_Params
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatAmount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OutOfBoundsComponent.SetGuideToLocation
struct UOutOfBoundsComponent_SetGuideToLocation_Params
{
	struct FVector                                     GuideLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OutOfBoundsComponent.RecalculateGuide
struct UOutOfBoundsComponent_RecalculateGuide_Params
{
};

// Function Pavlov.OutOfBoundsComponent.PlayDamageSound
struct UOutOfBoundsComponent_PlayDamageSound_Params
{
};

// Function Pavlov.OutOfBoundsComponent.OwnerKilled
struct UOutOfBoundsComponent_OwnerKilled_Params
{
	class AActor*                                      Killed;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OutOfBoundsComponent.OutOfBounds_Server
struct UOutOfBoundsComponent_OutOfBounds_Server_Params
{
	struct FVector                                     EscapeLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlov_OutOfBoundsVolume*                   OOBVolume;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.OutOfBoundsComponent.OnPawnDamaged_Client
struct UOutOfBoundsComponent_OnPawnDamaged_Client_Params
{
};

// Function Pavlov.OutOfBoundsComponent.OnOutOfBounds
struct UOutOfBoundsComponent_OnOutOfBounds_Params
{
};

// Function Pavlov.OutOfBoundsComponent.InBounds
struct UOutOfBoundsComponent_InBounds_Params
{
};

// Function Pavlov.OutOfBoundsComponent.DamageTick
struct UOutOfBoundsComponent_DamageTick_Params
{
};

// Function Pavlov.OutOfBoundsComponent.AddGuideMesh
struct UOutOfBoundsComponent_AddGuideMesh_Params
{
};

// Function Pavlov.Painkillers.SetPainkillerDetails
struct APainkillers_SetPainkillerDetails_Params
{
	int                                                PillAmount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealAmountPerPill;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Painkillers.GetNumOfPills
struct APainkillers_GetNumOfPills_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovAIController.SetTargetPawn
struct APavlovAIController_SetTargetPawn_Params
{
	class APavlovPawn*                                 TargetPawn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovAIController.OnPawnCollisionBeginOverlap
struct APavlovAIController_OnPawnCollisionBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovAIController.IsSuppressed
struct APavlovAIController_IsSuppressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovAIController.GetTargetPawn
struct APavlovAIController_GetTargetPawn_Params
{
	class APavlovPawn*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovAvatarAnimInstance.GetFingerBlend
struct UPavlovAvatarAnimInstance_GetFingerBlend_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EFinger                                     Finger;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovCustomGameMode.OnCustomRconCommand
struct APavlovCustomGameMode_OnCustomRconCommand_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.UpdateServerList
struct UPavlovGameInstance_UpdateServerList_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriendsOnly;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPrivateOnly;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.UpdateNextSplashScreen
struct UPavlovGameInstance_UpdateNextSplashScreen_Params
{
	bool                                               bInitialSplash;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.ToggleMenu
struct UPavlovGameInstance_ToggleMenu_Params
{
};

// Function Pavlov.PavlovGameInstance.TestServerConnect
struct UPavlovGameInstance_TestServerConnect_Params
{
	struct FString                                     ConnectURL;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapId;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.ShowPavlovSplash
struct UPavlovGameInstance_ShowPavlovSplash_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFade;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.SetMutedByProductId
struct UPavlovGameInstance_SetMutedByProductId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.SetMuted
struct UPavlovGameInstance_SetMuted_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.SetMixingChannelVolume
struct UPavlovGameInstance_SetMixingChannelVolume_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.SetMatchmakingState
struct UPavlovGameInstance_SetMatchmakingState_Params
{
	Pavlov_EMatchmakingState                           NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.SetItemRotation
struct UPavlovGameInstance_SetItemRotation_Params
{
	float                                              Roll;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.ServerStartStatusHelper
struct UPavlovGameInstance_ServerStartStatusHelper_Params
{
};

// Function Pavlov.PavlovGameInstance.ServerConnectFailed
struct UPavlovGameInstance_ServerConnectFailed_Params
{
	Pavlov_EConnectorFailureReason                     FailureReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.ServerConnectComplete
struct UPavlovGameInstance_ServerConnectComplete_Params
{
};

// Function Pavlov.PavlovGameInstance.ServerConnectByURL
struct UPavlovGameInstance_ServerConnectByURL_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.ServerConnectByIp
struct UPavlovGameInstance_ServerConnectByIp_Params
{
	struct FString                                     IpString;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.ServerConnect
struct UPavlovGameInstance_ServerConnect_Params
{
	struct FServerConnectParams                        Params;                                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.RetrieveMasterServerSessionId
struct UPavlovGameInstance_RetrieveMasterServerSessionId_Params
{
};

// Function Pavlov.PavlovGameInstance.ResumeShaderPreCompilation
struct UPavlovGameInstance_ResumeShaderPreCompilation_Params
{
};

// Function Pavlov.PavlovGameInstance.ResetTutorial
struct UPavlovGameInstance_ResetTutorial_Params
{
};

// Function Pavlov.PavlovGameInstance.ResetPhononScene
struct UPavlovGameInstance_ResetPhononScene_Params
{
};

// Function Pavlov.PavlovGameInstance.ReportServerState
struct UPavlovGameInstance_ReportServerState_Params
{
};

// Function Pavlov.PavlovGameInstance.RemoveMap
struct UPavlovGameInstance_RemoveMap_Params
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.RemoveFromRefBucket
struct UPavlovGameInstance_RemoveFromRefBucket_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.QuickMatch
struct UPavlovGameInstance_QuickMatch_Params
{
};

// Function Pavlov.PavlovGameInstance.QueryForGameSession
struct UPavlovGameInstance_QueryForGameSession_Params
{
};

// Function Pavlov.PavlovGameInstance.OpenMap_Implementation
struct UPavlovGameInstance_OpenMap_Implementation_Params
{
};

// Function Pavlov.PavlovGameInstance.OpenMap
struct UPavlovGameInstance_OpenMap_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Options;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnWorkshopSpecificQuery
struct UPavlovGameInstance_OnWorkshopSpecificQuery_Params
{
};

// Function Pavlov.PavlovGameInstance.OnSteamServersConnected
struct UPavlovGameInstance_OnSteamServersConnected_Params
{
};

// Function Pavlov.PavlovGameInstance.OnSteamLobbyListUpdated
struct UPavlovGameInstance_OnSteamLobbyListUpdated_Params
{
};

// Function Pavlov.PavlovGameInstance.OnSplashScreenLoaded
struct UPavlovGameInstance_OnSplashScreenLoaded_Params
{
	struct FDateTime                                   StartTimestamp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnServerMapDownloaded
struct UPavlovGameInstance_OnServerMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnNetworkFailure
struct UPavlovGameInstance_OnNetworkFailure_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                                  NetDriver;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorString;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnLoginStatusChanged
struct UPavlovGameInstance_OnLoginStatusChanged_Params
{
	bool                                               bLoggedIn;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnLobbyLeave
struct UPavlovGameInstance_OnLobbyLeave_Params
{
};

// Function Pavlov.PavlovGameInstance.OnLobbyEnter
struct UPavlovGameInstance_OnLobbyEnter_Params
{
	bool                                               bFailed;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnClientMapDownloaded
struct UPavlovGameInstance_OnClientMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnAuthSessionTicketResponse
struct UPavlovGameInstance_OnAuthSessionTicketResponse_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HexAuthTicket;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.OnAndroidPermisionsGranted
struct UPavlovGameInstance_OnAndroidPermisionsGranted_Params
{
	TArray<struct FString>                             Permissions;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<bool>                                       GrantResults;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.LogoutTest
struct UPavlovGameInstance_LogoutTest_Params
{
};

// Function Pavlov.PavlovGameInstance.JoinServer
struct UPavlovGameInstance_JoinServer_Params
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.IsMutedByProductId
struct UPavlovGameInstance_IsMutedByProductId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.IsMuted
struct UPavlovGameInstance_IsMuted_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.InitClientProxies
struct UPavlovGameInstance_InitClientProxies_Params
{
};

// Function Pavlov.PavlovGameInstance.HideSplashScreen
struct UPavlovGameInstance_HideSplashScreen_Params
{
};

// Function Pavlov.PavlovGameInstance.HasGameSession
struct UPavlovGameInstance_HasGameSession_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetVoiceSource
struct UPavlovGameInstance_GetVoiceSource_Params
{
	class UVoiceSource*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetUIManager
struct UPavlovGameInstance_GetUIManager_Params
{
	class UUIManager*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetTutorial
struct UPavlovGameInstance_GetTutorial_Params
{
	class UTutorial*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetSoundMixingSettings
struct UPavlovGameInstance_GetSoundMixingSettings_Params
{
	class USoundMixingSettings*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetServerBrowserV2
struct UPavlovGameInstance_GetServerBrowserV2_Params
{
	class UServerBrowserV2*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetServerBrowser
struct UPavlovGameInstance_GetServerBrowser_Params
{
	class UServerBrowser*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetOnlineRegion
struct UPavlovGameInstance_GetOnlineRegion_Params
{
	Pavlov_EOnlineRegion                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetOnlineManager
struct UPavlovGameInstance_GetOnlineManager_Params
{
	class UOnlineManager*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetOculusScale
struct UPavlovGameInstance_GetOculusScale_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetMatchmaking
struct UPavlovGameInstance_GetMatchmaking_Params
{
	class UMatchmaking*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetMapVersion
struct UPavlovGameInstance_GetMapVersion_Params
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetMapListAdvanced
struct UPavlovGameInstance_GetMapListAdvanced_Params
{
	int                                                Compatibility;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFavoriteOnly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetMapList
struct UPavlovGameInstance_GetMapList_Params
{
	int                                                Compatibility;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPavlov_Map*>                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetMap
struct UPavlovGameInstance_GetMap_Params
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_Map*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetCurrentSplashScreen
struct UPavlovGameInstance_GetCurrentSplashScreen_Params
{
	class UTexture*                                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.GetBuildLabel
struct UPavlovGameInstance_GetBuildLabel_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.DumpLobbyData
struct UPavlovGameInstance_DumpLobbyData_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayNetworkFailureMessage
struct UPavlovGameInstance_DisplayNetworkFailureMessage_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayMessageImpl
struct UPavlovGameInstance_DisplayMessageImpl_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayMessage
struct UPavlovGameInstance_DisplayMessage_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeferredDelay;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.CreateLobby
struct UPavlovGameInstance_CreateLobby_Params
{
};

// Function Pavlov.PavlovGameInstance.CreateGameSession
struct UPavlovGameInstance_CreateGameSession_Params
{
};

// Function Pavlov.PavlovGameInstance.CreateCoopLobby
struct UPavlovGameInstance_CreateCoopLobby_Params
{
};

// Function Pavlov.PavlovGameInstance.ClientStartStatusHelper
struct UPavlovGameInstance_ClientStartStatusHelper_Params
{
	int                                                ListenPort;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UServerStatusHelper*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameInstance.CheckPlacementStatus
struct UPavlovGameInstance_CheckPlacementStatus_Params
{
};

// Function Pavlov.PavlovGameInstance.CheckBuildVersionStatus
struct UPavlovGameInstance_CheckBuildVersionStatus_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelServerFind
struct UPavlovGameInstance_CancelServerFind_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelServerConnect
struct UPavlovGameInstance_CancelServerConnect_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelQuickmatch
struct UPavlovGameInstance_CancelQuickmatch_Params
{
};

// Function Pavlov.PavlovGameInstance.AsyncLoadSplashScreens
struct UPavlovGameInstance_AsyncLoadSplashScreens_Params
{
};

// Function Pavlov.PavlovGameInstance.ApplyOculusBindings
struct UPavlovGameInstance_ApplyOculusBindings_Params
{
};

// Function Pavlov.PavlovGameInstance.AddToRefBucket
struct UPavlovGameInstance_AddToRefBucket_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.UnpauseMatchTime
struct APavlovGameState_UnpauseMatchTime_Params
{
};

// Function Pavlov.PavlovGameState.SetGlobalInfo
struct APavlovGameState_SetGlobalInfo_Params
{
	class UPavlov_GlobalInfo*                          GI;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.SetAttackingTeam
struct APavlovGameState_SetAttackingTeam_Params
{
	bool                                               Team0;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.ResetMatchTime
struct APavlovGameState_ResetMatchTime_Params
{
	bool                                               bPause;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.ResetBuyRestrictions
struct APavlovGameState_ResetBuyRestrictions_Params
{
};

// Function Pavlov.PavlovGameState.PreloadSkin
struct APavlovGameState_PreloadSkin_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkinFamilyId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.PauseMatchTime
struct APavlovGameState_PauseMatchTime_Params
{
};

// Function Pavlov.PavlovGameState.OnSkinPreloaded
struct APavlovGameState_OnSkinPreloaded_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkinFamilyId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.OnSkinLoaded
struct APavlovGameState_OnSkinLoaded_Params
{
	class AActor*                                      Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.OnRep_GlobalInfo
struct APavlovGameState_OnRep_GlobalInfo_Params
{
};

// Function Pavlov.PavlovGameState.OnRep_BalancingCSV
struct APavlovGameState_OnRep_BalancingCSV_Params
{
};

// Function Pavlov.PavlovGameState.OnModkitLoadLootMeshAsync
struct APavlovGameState_OnModkitLoadLootMeshAsync_Params
{
	struct FAsyncLoadLootMesh                          LoadLootMesh;                                              // 0x0000(0x0018)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawnWRef__DelegateSignature
struct APavlovGameState_OnGetVehicleClassToSpawnWRef__DelegateSignature_Params
{
	class UClass*                                      VehicleClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                     // 0x0000(0x0060)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClassToSpawn__DelegateSignature
struct APavlovGameState_OnGetVehicleClassToSpawn__DelegateSignature_Params
{
	class UClass*                                      VehicleClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Pavlov.PavlovGameState.OnGetVehicleClass__DelegateSignature
struct APavlovGameState_OnGetVehicleClass__DelegateSignature_Params
{
	class UClass*                                      VehicleClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.MulticastOnKillfeedEntry
struct APavlovGameState_MulticastOnKillfeedEntry_Params
{
	struct FKillfeedEntry                              NewEntry;                                                  // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.ModkitLootLoaded
struct APavlovGameState_ModkitLootLoaded_Params
{
	struct FAsyncLoadLootMesh                          LoadLootMesh;                                              // 0x0000(0x0018)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.LootLoaded
struct APavlovGameState_LootLoaded_Params
{
	struct FScriptDelegate                             LoadedDelegate;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.LoadSkinForItem
struct APavlovGameState_LoadSkinForItem_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AVRItem*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.LoadSkin
struct APavlovGameState_LoadSkin_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawnWRef
struct APavlovGameState_LoadedVehicleClassToSpawnWRef_Params
{
	struct FScriptDelegate                             OnVehicleClassToSpawnWRefLoaded;                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                     // 0x0000(0x0060)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.LoadedVehicleClassToSpawn
struct APavlovGameState_LoadedVehicleClassToSpawn_Params
{
	struct FScriptDelegate                             OnVehicleClassToSpawnLoaded;                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.LoadedVehicleClass
struct APavlovGameState_LoadedVehicleClass_Params
{
	struct FScriptDelegate                             OnVehicleClassLoaded;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.LoadBalanceTableAsync
struct APavlovGameState_LoadBalanceTableAsync_Params
{
};

// Function Pavlov.PavlovGameState.IsVehicleNameValid
struct APavlovGameState_IsVehicleNameValid_Params
{
	struct FName                                       VehicleName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.IsTeamAbleToBuy
struct APavlovGameState_IsTeamAbleToBuy_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.IsSkinPreloaded
struct APavlovGameState_IsSkinPreloaded_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkinFamilyId;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.InitializeCosmeticTickActors
struct APavlovGameState_InitializeCosmeticTickActors_Params
{
};

// Function Pavlov.PavlovGameState.GetVehicleClassWRef
struct APavlovGameState_GetVehicleClassWRef_Params
{
	struct FScriptDelegate                             OnVehicleClassToSpawnWRefLoaded;                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FAsyncVehicleSpawnData                      AsyncVehicleSpawnData;                                     // 0x0000(0x0060)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetVehicleClassToSpawnAsync
struct APavlovGameState_GetVehicleClassToSpawnAsync_Params
{
	struct FName                                       VehicleName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnVehicleClassToSpawnLoaded;                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetVehicleClassByNameAsync
struct APavlovGameState_GetVehicleClassByNameAsync_Params
{
	struct FName                                       VehicleName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnVehicleClassLoaded;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetVehicleClassByName
struct APavlovGameState_GetVehicleClassByName_Params
{
	struct FName                                       VehicleName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetTeamScore
struct APavlovGameState_GetTeamScore_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetTeamArray
struct APavlovGameState_GetTeamArray_Params
{
	TArray<class APavlovPlayerState*>                  TeamArray;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetSpawnableEquipmentNames
struct APavlovGameState_GetSpawnableEquipmentNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetSortedPlayerArray
struct APavlovGameState_GetSortedPlayerArray_Params
{
	TArray<class APavlovPlayerState*>                  SortedPlayerArray;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                FilterByTeamId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetPlayerStringId
struct APavlovGameState_GetPlayerStringId_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetPlayerStateByStringId
struct APavlovGameState_GetPlayerStateByStringId_Params
{
	struct FString                                     StringId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetPlayerByScore
struct APavlovGameState_GetPlayerByScore_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetMaxPurchasesPerPlayer
struct APavlovGameState_GetMaxPurchasesPerPlayer_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetMatchResult
struct APavlovGameState_GetMatchResult_Params
{
	Pavlov_EMatchResult                                ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetLootMesh
struct APavlovGameState_GetLootMesh_Params
{
	struct FName                                       LootName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnLoaded;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentNames
struct APavlovGameState_GetEquipmentNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentNameByIndex
struct APavlovGameState_GetEquipmentNameByIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentNameByClass
struct APavlovGameState_GetEquipmentNameByClass_Params
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentMagCount
struct APavlovGameState_GetEquipmentMagCount_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentKillBonus
struct APavlovGameState_GetEquipmentKillBonus_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentIndexByName
struct APavlovGameState_GetEquipmentIndexByName_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentDataByClass
struct APavlovGameState_GetEquipmentDataByClass_Params
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentData                              ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentData
struct APavlovGameState_GetEquipmentData_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentData                              ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentCost
struct APavlovGameState_GetEquipmentCost_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetEquipmentClassByName
struct APavlovGameState_GetEquipmentClassByName_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.GetAsyncLoader
struct APavlovGameState_GetAsyncLoader_Params
{
	class UVRAsyncLoader*                              ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.DisplayMatchStateOverlay
struct APavlovGameState_DisplayMatchStateOverlay_Params
{
	class UClass*                                      OverlayClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.CanRemoveAttachments
struct APavlovGameState_CanRemoveAttachments_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameState.ArePlayersEnemies
struct APavlovGameState_ArePlayersEnemies_Params
{
	class APlayerState*                                A;                                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                B;                                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.UseOOBLocomotion
struct UPavlovGameUserSettings_UseOOBLocomotion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.UseGrabForce
struct UPavlovGameUserSettings_UseGrabForce_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.ShouldSwapControllers
struct UPavlovGameUserSettings_ShouldSwapControllers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetVoiceDevice
struct UPavlovGameUserSettings_SetVoiceDevice_Params
{
	struct FString                                     DeviceURL;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetVirtualStock
struct UPavlovGameUserSettings_SetVirtualStock_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetUseGrabForce
struct UPavlovGameUserSettings_SetUseGrabForce_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetUseAudioThread
struct UPavlovGameUserSettings_SetUseAudioThread_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetTwoHandToggle
struct UPavlovGameUserSettings_SetTwoHandToggle_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetTouchpadInverted
struct UPavlovGameUserSettings_SetTouchpadInverted_Params
{
	bool                                               bInverted;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetSwapControllers
struct UPavlovGameUserSettings_SetSwapControllers_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetStartUpMap
struct UPavlovGameUserSettings_SetStartUpMap_Params
{
	struct FString                                     NewStartUpMap;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetSnapTurn
struct UPavlovGameUserSettings_SetSnapTurn_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothTurnRate
struct UPavlovGameUserSettings_SetSmoothTurnRate_Params
{
	float                                              Rate;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothTurn
struct UPavlovGameUserSettings_SetSmoothTurn_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothLocomotionMode
struct UPavlovGameUserSettings_SetSmoothLocomotionMode_Params
{
	VRFramework_EVRSmoothLocomotionMode                NewMode;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetServerSortType
struct UPavlovGameUserSettings_SetServerSortType_Params
{
	Pavlov_EServerSortType                             SortType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetServerSearchType
struct UPavlovGameUserSettings_SetServerSearchType_Params
{
	Pavlov_EServerSearchType                           SearchType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetResolutionQuality
struct UPavlovGameUserSettings_SetResolutionQuality_Params
{
	float                                              Quality;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetRegionFilters
struct UPavlovGameUserSettings_SetRegionFilters_Params
{
	TArray<struct FString>                             Filters;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetRealTimeReverb
struct UPavlovGameUserSettings_SetRealTimeReverb_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetPrimaryRegion
struct UPavlovGameUserSettings_SetPrimaryRegion_Params
{
	Pavlov_EOnlineRegion                               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetPlayerRightHanded
struct UPavlovGameUserSettings_SetPlayerRightHanded_Params
{
	bool                                               bRightHanded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetPlayerHeight
struct UPavlovGameUserSettings_SetPlayerHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetOOBLocomotion
struct UPavlovGameUserSettings_SetOOBLocomotion_Params
{
	bool                                               bUse;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetOnScreenEffectsEnabled
struct UPavlovGameUserSettings_SetOnScreenEffectsEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetOffHandAction
struct UPavlovGameUserSettings_SetOffHandAction_Params
{
	Pavlov_ECustomAction                               Action;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetNoAmbisonics
struct UPavlovGameUserSettings_SetNoAmbisonics_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetMountFriendly
struct UPavlovGameUserSettings_SetMountFriendly_Params
{
	bool                                               bFriendly;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetMicMuted
struct UPavlovGameUserSettings_SetMicMuted_Params
{
	bool                                               bMuted;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetMenuScoreboardSwaped
struct UPavlovGameUserSettings_SetMenuScoreboardSwaped_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetMapAsFavoriteById
struct UPavlovGameUserSettings_SetMapAsFavoriteById_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetMapAsFavorite
struct UPavlovGameUserSettings_SetMapAsFavorite_Params
{
	class UPavlov_Map*                                 Map;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetMainHandAction
struct UPavlovGameUserSettings_SetMainHandAction_Params
{
	Pavlov_ECustomAction                               Action;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetLockInventory
struct UPavlovGameUserSettings_SetLockInventory_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetLiteFootStepHaptics
struct UPavlovGameUserSettings_SetLiteFootStepHaptics_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetLegacyGrip
struct UPavlovGameUserSettings_SetLegacyGrip_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetLeftEyeRendering
struct UPavlovGameUserSettings_SetLeftEyeRendering_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetHidePinLockedServers
struct UPavlovGameUserSettings_SetHidePinLockedServers_Params
{
	bool                                               bHideLocked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetHideFullServers
struct UPavlovGameUserSettings_SetHideFullServers_Params
{
	bool                                               HideFull;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetHideEmptyServers
struct UPavlovGameUserSettings_SetHideEmptyServers_Params
{
	bool                                               bHideEmpty;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetHideAmmoCount
struct UPavlovGameUserSettings_SetHideAmmoCount_Params
{
	bool                                               bHidden;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetHeadLocomotion
struct UPavlovGameUserSettings_SetHeadLocomotion_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetGripMode
struct UPavlovGameUserSettings_SetGripMode_Params
{
	Pavlov_EGripMode                                   NewGripMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetGrabForceThreashold
struct UPavlovGameUserSettings_SetGrabForceThreashold_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetGoreLevel
struct UPavlovGameUserSettings_SetGoreLevel_Params
{
	Pavlov_EGoreLevel                                  Level;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetGMFilters
struct UPavlovGameUserSettings_SetGMFilters_Params
{
	TArray<struct FString>                             Filters;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetFreeSpectatingEnabled
struct UPavlovGameUserSettings_SetFreeSpectatingEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetForceTubeEnabled
struct UPavlovGameUserSettings_SetForceTubeEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetFavoriteServers
struct UPavlovGameUserSettings_SetFavoriteServers_Params
{
	TArray<struct FFavoriteServer>                     Servers;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetbHapticsSuitEnabled
struct UPavlovGameUserSettings_SetbHapticsSuitEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoUngrip
struct UPavlovGameUserSettings_SetAutoUngrip_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoSwapHandsEnabled
struct UPavlovGameUserSettings_SetAutoSwapHandsEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoSprint
struct UPavlovGameUserSettings_SetAutoSprint_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetArmKillfeedEnabled
struct UPavlovGameUserSettings_SetArmKillfeedEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SetAdvancedVehicleInput
struct UPavlovGameUserSettings_SetAdvancedVehicleInput_Params
{
	bool                                               bUseAdvanced;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.SendAnalyticEvents
struct UPavlovGameUserSettings_SendAnalyticEvents_Params
{
};

// Function Pavlov.PavlovGameUserSettings.SaveSpectatorView
struct UPavlovGameUserSettings_SaveSpectatorView_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.MarkAsCalibrated
struct UPavlovGameUserSettings_MarkAsCalibrated_Params
{
};

// Function Pavlov.PavlovGameUserSettings.IsTwoHandToggleEnabled
struct UPavlovGameUserSettings_IsTwoHandToggleEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsTouchpadInverted
struct UPavlovGameUserSettings_IsTouchpadInverted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsSnapTurnEnabled
struct UPavlovGameUserSettings_IsSnapTurnEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsSmoothTurnEnabled
struct UPavlovGameUserSettings_IsSmoothTurnEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsPostProcessDisabled
struct UPavlovGameUserSettings_IsPostProcessDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsPlayerRightHanded
struct UPavlovGameUserSettings_IsPlayerRightHanded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsOnScreenEffectsEnabled
struct UPavlovGameUserSettings_IsOnScreenEffectsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsMountFriendly
struct UPavlovGameUserSettings_IsMountFriendly_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsMicMuted
struct UPavlovGameUserSettings_IsMicMuted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsMenuScoreboardSwapped
struct UPavlovGameUserSettings_IsMenuScoreboardSwapped_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsLiteFootStepHapticsEnabled
struct UPavlovGameUserSettings_IsLiteFootStepHapticsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsLeftEyeRendering
struct UPavlovGameUserSettings_IsLeftEyeRendering_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsHeadLocomotionEnabled
struct UPavlovGameUserSettings_IsHeadLocomotionEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsFreeSpectatingEnabled
struct UPavlovGameUserSettings_IsFreeSpectatingEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsForceTubeEnabled
struct UPavlovGameUserSettings_IsForceTubeEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsFavoriteMapById
struct UPavlovGameUserSettings_IsFavoriteMapById_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsFavoriteMap
struct UPavlovGameUserSettings_IsFavoriteMap_Params
{
	class UPavlov_Map*                                 Map;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsCalibrated
struct UPavlovGameUserSettings_IsCalibrated_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsBHapticsSuitEnabled
struct UPavlovGameUserSettings_IsBHapticsSuitEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoUngripEnabled
struct UPavlovGameUserSettings_IsAutoUngripEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoSwapHandsEnabled
struct UPavlovGameUserSettings_IsAutoSwapHandsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoSprintEnabled
struct UPavlovGameUserSettings_IsAutoSprintEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsArmKillfeedEnabled
struct UPavlovGameUserSettings_IsArmKillfeedEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsAmmoCounterHidden
struct UPavlovGameUserSettings_IsAmmoCounterHidden_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.IsAdvancedVehicleInputEnabled
struct UPavlovGameUserSettings_IsAdvancedVehicleInputEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.HasLegacyGrip
struct UPavlovGameUserSettings_HasLegacyGrip_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetVoiceDevice
struct UPavlovGameUserSettings_GetVoiceDevice_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetVirtualStock
struct UPavlovGameUserSettings_GetVirtualStock_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetUseAudioThread
struct UPavlovGameUserSettings_GetUseAudioThread_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetStartUpMap
struct UPavlovGameUserSettings_GetStartUpMap_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetSpectatorView
struct UPavlovGameUserSettings_GetSpectatorView_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetSmoothTurnRate
struct UPavlovGameUserSettings_GetSmoothTurnRate_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetSmoothLocomotionMode
struct UPavlovGameUserSettings_GetSmoothLocomotionMode_Params
{
	VRFramework_EVRSmoothLocomotionMode                ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetServerSortType
struct UPavlovGameUserSettings_GetServerSortType_Params
{
	Pavlov_EServerSortType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetServerSearchType
struct UPavlovGameUserSettings_GetServerSearchType_Params
{
	Pavlov_EServerSearchType                           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetRegionFilters
struct UPavlovGameUserSettings_GetRegionFilters_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetRealTimeVoiceReverb
struct UPavlovGameUserSettings_GetRealTimeVoiceReverb_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetPrimaryRegion
struct UPavlovGameUserSettings_GetPrimaryRegion_Params
{
	Pavlov_EOnlineRegion                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetPlayerHeight
struct UPavlovGameUserSettings_GetPlayerHeight_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetOffHandAction
struct UPavlovGameUserSettings_GetOffHandAction_Params
{
	Pavlov_ECustomAction                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetNoAmbisonics
struct UPavlovGameUserSettings_GetNoAmbisonics_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetMainHandAction
struct UPavlovGameUserSettings_GetMainHandAction_Params
{
	Pavlov_ECustomAction                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetLockInventory
struct UPavlovGameUserSettings_GetLockInventory_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetHidePinLockedServers
struct UPavlovGameUserSettings_GetHidePinLockedServers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetHideFullServers
struct UPavlovGameUserSettings_GetHideFullServers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetHideEmptyServers
struct UPavlovGameUserSettings_GetHideEmptyServers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetGripMode
struct UPavlovGameUserSettings_GetGripMode_Params
{
	Pavlov_EGripMode                                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetGrabForceThreashold
struct UPavlovGameUserSettings_GetGrabForceThreashold_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetGoreLevel
struct UPavlovGameUserSettings_GetGoreLevel_Params
{
	Pavlov_EGoreLevel                                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetGMFilters
struct UPavlovGameUserSettings_GetGMFilters_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.GetFavoriteServers
struct UPavlovGameUserSettings_GetFavoriteServers_Params
{
	TArray<struct FFavoriteServer>                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovGameUserSettings.ForceNoPostProcessing
struct UPavlovGameUserSettings_ForceNoPostProcessing_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovHandAnimInstance.SetDefaultGripSequence
struct UPavlovHandAnimInstance_SetDefaultGripSequence_Params
{
	class UAnimSequence*                               UpdateSequence;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImmersiveSequence;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovHandAnimInstance.GetFingerBlend
struct UPavlovHandAnimInstance_GetFingerBlend_Params
{
	Pavlov_EFinger                                     Finger;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.Start
struct UPavlovLobby_Start_Params
{
};

// Function Pavlov.PavlovLobby.SetWantToStart
struct UPavlovLobby_SetWantToStart_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetServerSettings
struct UPavlovLobby_SetServerSettings_Params
{
	struct FServerSettings                             NewServerSettings;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetRegion
struct UPavlovLobby_SetRegion_Params
{
	struct FString                                     NewRegion;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetPin
struct UPavlovLobby_SetPin_Params
{
	struct FString                                     Pin;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetMap
struct UPavlovLobby_SetMap_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetHostingType
struct UPavlovLobby_SetHostingType_Params
{
	Pavlov_EServerHostingType                          NewHostingType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetGameMode
struct UPavlovLobby_SetGameMode_Params
{
	struct FString                                     NewGameMode;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetFillWithBots
struct UPavlovLobby_SetFillWithBots_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.SetCompetitiveMode
struct UPavlovLobby_SetCompetitiveMode_Params
{
	int                                                CompMode;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.RequestTeam
struct UPavlovLobby_RequestTeam_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.OnMapDownloadProgress
struct UPavlovLobby_OnMapDownloadProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.OnMapDownloaded
struct UPavlovLobby_OnMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.MuteMember
struct UPavlovLobby_MuteMember_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.IsPinProtected
struct UPavlovLobby_IsPinProtected_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.IsMemberMuted
struct UPavlovLobby_IsMemberMuted_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.GetRegion
struct UPavlovLobby_GetRegion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.GetPin
struct UPavlovLobby_GetPin_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.GetMemberTeam
struct UPavlovLobby_GetMemberTeam_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.GetLocalUserIndex
struct UPavlovLobby_GetLocalUserIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.FindServer
struct UPavlovLobby_FindServer_Params
{
};

// Function Pavlov.PavlovLobby.DoesMemberWantsToStart
struct UPavlovLobby_DoesMemberWantsToStart_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovLobby.CheckSessionStatus
struct UPavlovLobby_CheckSessionStatus_Params
{
};

// Function Pavlov.PavlovLobby.CancelServerFind
struct UPavlovLobby_CancelServerFind_Params
{
};

// Function Pavlov.PavlovMovementComponent.ServerDeployParachute
struct UPavlovMovementComponent_ServerDeployParachute_Params
{
};

// Function Pavlov.PavlovMovementComponent.OnRep_PrachuteState
struct UPavlovMovementComponent_OnRep_PrachuteState_Params
{
};

// Function Pavlov.PavlovMovementComponent.MulticastOnParachuteDeployed
struct UPavlovMovementComponent_MulticastOnParachuteDeployed_Params
{
};

// Function Pavlov.PavlovMovementComponent.EnableParachuteMode
struct UPavlovMovementComponent_EnableParachuteMode_Params
{
	bool                                               bEnableParachuteMode;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.WearKevlar
struct APavlovPawn_WearKevlar_Params
{
	bool                                               bWithHelmet;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.WearHelmet
struct APavlovPawn_WearHelmet_Params
{
};

// Function Pavlov.PavlovPawn.UpdateLocomotion
struct APavlovPawn_UpdateLocomotion_Params
{
};

// Function Pavlov.PavlovPawn.TryStackAmmoBoxes
struct APavlovPawn_TryStackAmmoBoxes_Params
{
	class AAmmoBox*                                    AmmoBox;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ToggleRadio
struct APavlovPawn_ToggleRadio_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.TakePointDamage
struct APavlovPawn_TakePointDamage_Params
{
	class AActor*                                      DamagedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ShotFromDirection;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SpawnHitFeedbackSound
struct APavlovPawn_SpawnHitFeedbackSound_Params
{
	Pavlov_EHitFeedbackType                            Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SpawnHeadshotEffect
struct APavlovPawn_SpawnHeadshotEffect_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitDirection;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldHitLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldHitDirection;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ShowLimitedAmmoCounter
struct APavlovPawn_ShowLimitedAmmoCounter_Params
{
	bool                                               bCounterVisible;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SetupWatch
struct APavlovPawn_SetupWatch_Params
{
	class UWatch*                                      WatchComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SetupLimitedAmmoComp
struct APavlovPawn_SetupLimitedAmmoComp_Params
{
	PavlovProxy_ELimitedAmmoType                       LimitedAmmoMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SetTeamId
struct APavlovPawn_SetTeamId_Params
{
	int                                                NewTeamId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SetPlayerSkin
struct APavlovPawn_SetPlayerSkin_Params
{
	struct FName                                       PlayerSkin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SetPainkillerDetails
struct APavlovPawn_SetPainkillerDetails_Params
{
	class AActor*                                      Painkillers;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfPills;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealAmount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SetNumOfSyringeRevives
struct APavlovPawn_SetNumOfSyringeRevives_Params
{
	class AActor*                                      Syringe;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfRevives;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.SetModdingVoiceAttn
struct APavlovPawn_SetModdingVoiceAttn_Params
{
};

// Function Pavlov.PavlovPawn.SetAvatarSkin
struct APavlovPawn_SetAvatarSkin_Params
{
	class UClass*                                      NewSkinClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CustomMesh;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ServerUpdateFingerTracking
struct APavlovPawn_ServerUpdateFingerTracking_Params
{
	struct FFingerTracking                             Data;                                                      // 0x0000(0x0003)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ServerSetRadioChannel
struct APavlovPawn_ServerSetRadioChannel_Params
{
	unsigned char                                      Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ServerReportFallDamage
struct APavlovPawn_ServerReportFallDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ServerGiveMagazine
struct APavlovPawn_ServerGiveMagazine_Params
{
	bool                                               bOffHand;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ServerGive
struct APavlovPawn_ServerGive_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Skin;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ServerDeployParachute
struct APavlovPawn_ServerDeployParachute_Params
{
};

// Function Pavlov.PavlovPawn.SanityCheck
struct APavlovPawn_SanityCheck_Params
{
};

// Function Pavlov.PavlovPawn.RevivePawn
struct APavlovPawn_RevivePawn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.Revived_Client
struct APavlovPawn_Revived_Client_Params
{
};

// Function Pavlov.PavlovPawn.ReplenishPlayerAmmo
struct APavlovPawn_ReplenishPlayerAmmo_Params
{
	bool                                               bSpawnKnife;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.RemoveAmmo
struct APavlovPawn_RemoveAmmo_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemoveAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ProxyTrigger
struct APavlovPawn_ProxyTrigger_Params
{
	bool                                               bDominantController;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ProxyGrab
struct APavlovPawn_ProxyGrab_Params
{
	bool                                               bDominantController;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.OverrideVoiceAttn
struct APavlovPawn_OverrideVoiceAttn_Params
{
	class USoundAttenuation*                           NewAttn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.OnWW2AvatarLoaded_Owner
struct APavlovPawn_OnWW2AvatarLoaded_Owner_Params
{
};

// Function Pavlov.PavlovPawn.OnTeamIdChanged
struct APavlovPawn_OnTeamIdChanged_Params
{
};

// Function Pavlov.PavlovPawn.OnRevive
struct APavlovPawn_OnRevive_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.OnRep_TeamId
struct APavlovPawn_OnRep_TeamId_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_RadioChannel
struct APavlovPawn_OnRep_RadioChannel_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_PlayerProxy
struct APavlovPawn_OnRep_PlayerProxy_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_LastTeleport
struct APavlovPawn_OnRep_LastTeleport_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_HelmetArmour
struct APavlovPawn_OnRep_HelmetArmour_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_AvatarSkinInfo
struct APavlovPawn_OnRep_AvatarSkinInfo_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_Armour
struct APavlovPawn_OnRep_Armour_Params
{
};

// Function Pavlov.PavlovPawn.OnPawnRevived
struct APavlovPawn_OnPawnRevived_Params
{
};

// Function Pavlov.PavlovPawn.OnKill
struct APavlovPawn_OnKill_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.OnImpactDamage
struct APavlovPawn_OnImpactDamage_Params
{
	struct FImpactDamage                               ImpactDamage;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.OnHitByTazer
struct APavlovPawn_OnHitByTazer_Params
{
};

// Function Pavlov.PavlovPawn.OnHitByGun
struct APavlovPawn_OnHitByGun_Params
{
	class UClass*                                      GunClass;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 HitInstigator;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.OnDismember
struct APavlovPawn_OnDismember_Params
{
	struct FWoundInfo                                  WoundInfo;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPreBakedWound                              PreBakedWound;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.OnCameraClipChanged
struct APavlovPawn_OnCameraClipChanged_Params
{
	bool                                               bClipping;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.NotifyProxySkinChanged
struct APavlovPawn_NotifyProxySkinChanged_Params
{
};

// Function Pavlov.PavlovPawn.MulticastTeleportTo
struct APavlovPawn_MulticastTeleportTo_Params
{
	struct FVector                                     DestLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    DestRotation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.MulticastResetPawn
struct APavlovPawn_MulticastResetPawn_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnZombieHit
struct APavlovPawn_MulticastOnZombieHit_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnWearArmour
struct APavlovPawn_MulticastOnWearArmour_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnRadialDeath
struct APavlovPawn_MulticastOnRadialDeath_Params
{
	struct FVector_NetQuantize                         Origin;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.MulticastOnMagazineGrabbed
struct APavlovPawn_MulticastOnMagazineGrabbed_Params
{
	bool                                               bDominant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.MulticastOnImpactDamage
struct APavlovPawn_MulticastOnImpactDamage_Params
{
	struct FImpactDamage                               ImpactDamage;                                              // 0x0000(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.MulticastOnHitSlow
struct APavlovPawn_MulticastOnHitSlow_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnHit
struct APavlovPawn_MulticastOnHit_Params
{
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class APlayerState*                                Shooter;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnArmor;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.MulticastOnHelmetHit
struct APavlovPawn_MulticastOnHelmetHit_Params
{
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Direction;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.MulticastOnHelmetBlownoff
struct APavlovPawn_MulticastOnHelmetBlownoff_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnHeadshot
struct APavlovPawn_MulticastOnHeadshot_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitDirection;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WoundRate;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.MulticastOnFallDamage
struct APavlovPawn_MulticastOnFallDamage_Params
{
};

// Function Pavlov.PavlovPawn.MulticastAdjustAvatarScale
struct APavlovPawn_MulticastAdjustAvatarScale_Params
{
	float                                              PlayerHeight;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ModKitLeaveVehicle
struct APavlovPawn_ModKitLeaveVehicle_Params
{
};

// Function Pavlov.PavlovPawn.ModkitIsInVehicle
struct APavlovPawn_ModkitIsInVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.LoadEquipment
struct APavlovPawn_LoadEquipment_Params
{
	struct FEquipmentDefinition                        definition;                                                // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.KillByDamageType
struct APavlovPawn_KillByDamageType_Params
{
	class UClass*                                      DamageType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 KilledByInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      KilledBy;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.IsSprinting
struct APavlovPawn_IsSprinting_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.IsPickupDisabled
struct APavlovPawn_IsPickupDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.IsLobbyLeaderModkit
struct APavlovPawn_IsLobbyLeaderModkit_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.IsDead
struct APavlovPawn_IsDead_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.IsCarryingBomb
struct APavlovPawn_IsCarryingBomb_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.IsCameraClipping
struct APavlovPawn_IsCameraClipping_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.IsArmExploiting
struct APavlovPawn_IsArmExploiting_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.HealEffect
struct APavlovPawn_HealEffect_Params
{
	float                                              HealTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          HealMaterial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.HasItem
struct APavlovPawn_HasItem_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GorePawn
struct APavlovPawn_GorePawn_Params
{
	struct FImpactDamage                               Impact;                                                    // 0x0000(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GiveItemInventory
struct APavlovPawn_GiveItemInventory_Params
{
	struct FGiveItemInventoryParams                    Params;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AVRItem*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GiveItem
struct APavlovPawn_GiveItem_Params
{
	struct FGiveItemParams                             Params;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AVRItem*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GiveBomb
struct APavlovPawn_GiveBomb_Params
{
	class ABomb*                                       Bomb;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.Give
struct APavlovPawn_Give_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Skin;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithAmmo;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bByBuyMenu;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetWeaponAttachments
struct APavlovPawn_GetWeaponAttachments_Params
{
	class AActor*                                      Weapon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetWeaponAmmoType
struct APavlovPawn_GetWeaponAmmoType_Params
{
	class AActor*                                      Weapon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetWatch
struct APavlovPawn_GetWatch_Params
{
	class UWatch*                                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetVehicleOccupant
struct APavlovPawn_GetVehicleOccupant_Params
{
	class UVehicleOccupant*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetSkinSkeleton
struct APavlovPawn_GetSkinSkeleton_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetSideWeaponHolster
struct APavlovPawn_GetSideWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetNumOfSyringeRevives
struct APavlovPawn_GetNumOfSyringeRevives_Params
{
	class AActor*                                      Syringe;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetNumOfPainkillerPills
struct APavlovPawn_GetNumOfPainkillerPills_Params
{
	class AActor*                                      Painkillers;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetMainWeaponHolster
struct APavlovPawn_GetMainWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetLimitedAmmoComponent
struct APavlovPawn_GetLimitedAmmoComponent_Params
{
	class ULimitedAmmoComponent*                       ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetKnifeHolster
struct APavlovPawn_GetKnifeHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetItemOfClass
struct APavlovPawn_GetItemOfClass_Params
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipHands;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSubClass;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AVRItem*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetInventorySlotsVis
struct APavlovPawn_GetInventorySlotsVis_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetHoldingItemByName
struct APavlovPawn_GetHoldingItemByName_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AVRItem*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetHealth
struct APavlovPawn_GetHealth_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetHeadSpaceHitVectors
struct APavlovPawn_GetHeadSpaceHitVectors_Params
{
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitDirection;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HeadSpaceHitLocation;                                      // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HeadSpaceHitDirection;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetGrenadeHolsters
struct APavlovPawn_GetGrenadeHolsters_Params
{
	TArray<class UHolsterComponent*>                   ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetEquipmentByName
struct APavlovPawn_GetEquipmentByName_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentDefinition                        definition;                                                // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetCompatibleSlot
struct APavlovPawn_GetCompatibleSlot_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetBombHolster
struct APavlovPawn_GetBombHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetAvatarSkin
struct APavlovPawn_GetAvatarSkin_Params
{
	class UAvatarSkin*                                 ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetAmmoTypeName
struct APavlovPawn_GetAmmoTypeName_Params
{
	VRFramework_EAmmoType                              AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetAmmoPocket
struct APavlovPawn_GetAmmoPocket_Params
{
	class UVRPocketComponent*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.GetAmmoAmount
struct APavlovPawn_GetAmmoAmount_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.FinishExitVehicleServer
struct APavlovPawn_FinishExitVehicleServer_Params
{
};

// Function Pavlov.PavlovPawn.FinishExitVehicleClient
struct APavlovPawn_FinishExitVehicleClient_Params
{
};

// Function Pavlov.PavlovPawn.ExitVehicle
struct APavlovPawn_ExitVehicle_Params
{
	struct FVector                                     ExitLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.EnableVehicleCollisionRecenter
struct APavlovPawn_EnableVehicleCollisionRecenter_Params
{
};

// Function Pavlov.PavlovPawn.EnableVehicleCollision
struct APavlovPawn_EnableVehicleCollision_Params
{
};

// Function Pavlov.PavlovPawn.EnableItemUse
struct APavlovPawn_EnableItemUse_Params
{
	bool                                               bEnableUse;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.DropItem
struct APavlovPawn_DropItem_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromHandsOnly;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.DropHeldItems
struct APavlovPawn_DropHeldItems_Params
{
	bool                                               bDominant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoth;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroyItem;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.DropEquipment
struct APavlovPawn_DropEquipment_Params
{
};

// Function Pavlov.PavlovPawn.DropAllItems
struct APavlovPawn_DropAllItems_Params
{
	bool                                               bDestroyItems;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInventoryOnly;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.DisablePickup
struct APavlovPawn_DisablePickup_Params
{
	bool                                               bDisabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ClientSanityCheck
struct APavlovPawn_ClientSanityCheck_Params
{
};

// Function Pavlov.PavlovPawn.ClientOnExplosionDamage
struct APavlovPawn_ClientOnExplosionDamage_Params
{
};

// Function Pavlov.PavlovPawn.CanRevive
struct APavlovPawn_CanRevive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.CanListenToRadio
struct APavlovPawn_CanListenToRadio_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.BlowHelmetOff
struct APavlovPawn_BlowHelmetOff_Params
{
};

// Function Pavlov.PavlovPawn.ApplyDelayedWound
struct APavlovPawn_ApplyDelayedWound_Params
{
};

// Function Pavlov.PavlovPawn.AddWatch
struct APavlovPawn_AddWatch_Params
{
};

// Function Pavlov.PavlovPawn.AddHitSlow
struct APavlovPawn_AddHitSlow_Params
{
};

// Function Pavlov.PavlovPawn.AddAmmo
struct APavlovPawn_AddAmmo_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPawn.ActivateCameraClip
struct APavlovPawn_ActivateCameraClip_Params
{
};

// Function Pavlov.PavlovPlayerController.UnBoardVehicle
struct APavlovPlayerController_UnBoardVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.TryRestoreEquipmentBySnapshot
struct APavlovPlayerController_TryRestoreEquipmentBySnapshot_Params
{
};

// Function Pavlov.PavlovPlayerController.TestTeamKill
struct APavlovPlayerController_TestTeamKill_Params
{
};

// Function Pavlov.PavlovPlayerController.TakeEquipmentSnapshot
struct APavlovPlayerController_TakeEquipmentSnapshot_Params
{
};

// Function Pavlov.PavlovPlayerController.SwitchToSpectator
struct APavlovPlayerController_SwitchToSpectator_Params
{
};

// Function Pavlov.PavlovPlayerController.SwitchTeam
struct APavlovPlayerController_SwitchTeam_Params
{
};

// Function Pavlov.PavlovPlayerController.SwapControllers
struct APavlovPlayerController_SwapControllers_Params
{
};

// Function Pavlov.PavlovPlayerController.Suicide
struct APavlovPlayerController_Suicide_Params
{
};

// Function Pavlov.PavlovPlayerController.SNDPreGameSpawnTimer
struct APavlovPlayerController_SNDPreGameSpawnTimer_Params
{
};

// Function Pavlov.PavlovPlayerController.SetServerTickRate
struct APavlovPlayerController_SetServerTickRate_Params
{
	int                                                Rate;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.SetHeadMountedDisplayScale
struct APavlovPlayerController_SetHeadMountedDisplayScale_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.SetBuyingEnabled
struct APavlovPlayerController_SetBuyingEnabled_Params
{
	float                                              ForDuration;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BuyZoneMaxDistance;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.SetBuyingDisabled
struct APavlovPlayerController_SetBuyingDisabled_Params
{
};

// Function Pavlov.PavlovPlayerController.SetBlackScreen
struct APavlovPlayerController_SetBlackScreen_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerVote
struct APavlovPlayerController_ServerVote_Params
{
	class AVote*                                       Vote;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bYes;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerUnBoardVehicle
struct APavlovPlayerController_ServerUnBoardVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerTestTeamKill
struct APavlovPlayerController_ServerTestTeamKill_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSwitchTeam
struct APavlovPlayerController_ServerSwitchTeam_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSuicide
struct APavlovPlayerController_ServerSuicide_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSetServerTickRate
struct APavlovPlayerController_ServerSetServerTickRate_Params
{
	int                                                Rate;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportZombieBulletHit
struct APavlovPlayerController_ServerReportZombieBulletHit_Params
{
	struct FClientZombieBulletHit                      Hit;                                                       // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportVirtualStockChange
struct APavlovPlayerController_ServerReportVirtualStockChange_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportTrigger
struct APavlovPlayerController_ServerReportTrigger_Params
{
	class AGun*                                        Gun;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTrigger;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              GunState;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportShatter
struct APavlovPlayerController_ServerReportShatter_Params
{
	class ADestructible*                               Destructible;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportKnifeDamage
struct APavlovPlayerController_ServerReportKnifeDamage_Params
{
	struct FClientKnifeDamage                          Info;                                                      // 0x0000(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportHandenessChange
struct APavlovPlayerController_ServerReportHandenessChange_Params
{
	bool                                               bRightHanded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportCorpseHitByClass
struct APavlovPlayerController_ServerReportCorpseHitByClass_Params
{
	class APavlovPawn*                                 PawnCorpse;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GunClass;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportCorpseHit
struct APavlovPlayerController_ServerReportCorpseHit_Params
{
	class APavlovPawn*                                 PawnCorpse;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactDamage                               ImpactDamage;                                              // 0x0000(0x0038)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerReportBulletHit
struct APavlovPlayerController_ServerReportBulletHit_Params
{
	struct FClientBulletHit                            Hit;                                                       // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerProcessZombieDamage
struct APavlovPlayerController_ServerProcessZombieDamage_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerKnockZombie
struct APavlovPlayerController_ServerKnockZombie_Params
{
	class AZAICharacter*                               Zombie;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Z_EZKnockBackDirection                             Direction;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Flags;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerInstigateVote
struct APavlovPlayerController_ServerInstigateVote_Params
{
	class UClass*                                      VoteClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Param1;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Param2;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerEnterVehicle
struct APavlovPlayerController_ServerEnterVehicle_Params
{
	class APavlovVehicle*                              Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerEnterDigit
struct APavlovPlayerController_ServerEnterDigit_Params
{
	class ABomb*                                       Bomb;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerBuy
struct APavlovPlayerController_ServerBuy_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerBoardVehicle
struct APavlovPlayerController_ServerBoardVehicle_Params
{
	class APavlovWheeledVehicle*                       Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerAuthenticate
struct APavlovPlayerController_ServerAuthenticate_Params
{
	struct FString                                     HexTicket;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ServerAbstainToVote
struct APavlovPlayerController_ServerAbstainToVote_Params
{
};

// Function Pavlov.PavlovPlayerController.ResetPlayerHeight
struct APavlovPlayerController_ResetPlayerHeight_Params
{
};

// Function Pavlov.PavlovPlayerController.ResetPlayerEffects
struct APavlovPlayerController_ResetPlayerEffects_Params
{
};

// Function Pavlov.PavlovPlayerController.PunishTeamKiller
struct APavlovPlayerController_PunishTeamKiller_Params
{
};

// Function Pavlov.PavlovPlayerController.OnZombieClientKnock
struct APavlovPlayerController_OnZombieClientKnock_Params
{
	class AZAICharacter*                               Zombie;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Z_EZKnockBackDirection                             Direction;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Flags;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.OnMenuUniverseChanged
struct APavlovPlayerController_OnMenuUniverseChanged_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.OnAuthTimedout
struct APavlovPlayerController_OnAuthTimedout_Params
{
};

// Function Pavlov.PavlovPlayerController.OnAuthTicketReceived
struct APavlovPlayerController_OnAuthTicketReceived_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HexAuthTicket;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.MulticastDebugPoint
struct APavlovPlayerController_MulticastDebugPoint_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.LeaveVehicle
struct APavlovPlayerController_LeaveVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.KilledInVehicle
struct APavlovPlayerController_KilledInVehicle_Params
{
	class APavlovVehicle*                              Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.IsInVehicle
struct APavlovPlayerController_IsInVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.GetHeadMountedDisplayScale
struct APavlovPlayerController_GetHeadMountedDisplayScale_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ForgiveTeamKiller
struct APavlovPlayerController_ForgiveTeamKiller_Params
{
};

// Function Pavlov.PavlovPlayerController.ExecuteRconCommand
struct APavlovPlayerController_ExecuteRconCommand_Params
{
	struct FRconCommand                                RconCommand;                                               // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.EnterVehicle
struct APavlovPlayerController_EnterVehicle_Params
{
	class APavlovVehicle*                              Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientSetBuying
struct APavlovPlayerController_ClientSetBuying_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientServerConnect
struct APavlovPlayerController_ClientServerConnect_Params
{
	struct FServerConnectParams                        Params;                                                    // 0x0000(0x0040)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientReportMatchEnd
struct APavlovPlayerController_ClientReportMatchEnd_Params
{
};

// Function Pavlov.PavlovPlayerController.ClientPlayKillPing
struct APavlovPlayerController_ClientPlayKillPing_Params
{
};

// Function Pavlov.PavlovPlayerController.ClientOnTeamKilled
struct APavlovPlayerController_ClientOnTeamKilled_Params
{
	class APavlovPlayerState*                          CulpritTeamKiller;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientInstigateFlashVision
struct APavlovPlayerController_ClientInstigateFlashVision_Params
{
	float                                              Seconds;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewAlpha;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientInstigateFlash
struct APavlovPlayerController_ClientInstigateFlash_Params
{
	float                                              Seconds;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewAlpha;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientDisplayMessage
struct APavlovPlayerController_ClientDisplayMessage_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientConnectTo
struct APavlovPlayerController_ClientConnectTo_Params
{
	struct FString                                     ConnectURL;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ClientAuthenticate
struct APavlovPlayerController_ClientAuthenticate_Params
{
};

// Function Pavlov.PavlovPlayerController.Buy
struct APavlovPlayerController_Buy_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.BoardVehicle
struct APavlovPlayerController_BoardVehicle_Params
{
	class APavlovWheeledVehicle*                       Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerController.ApplySkippedHeadMountedDisplayScale
struct APavlovPlayerController_ApplySkippedHeadMountedDisplayScale_Params
{
};

// Function Pavlov.PavlovPlayerState.SendJoinDataToClient
struct APavlovPlayerState_SendJoinDataToClient_Params
{
	class UJsonUtilsObj*                               JsonObj;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.Reset
struct APavlovPlayerState_Reset_Params
{
};

// Function Pavlov.PavlovPlayerState.ReceiveJoinJsonData
struct APavlovPlayerState_ReceiveJoinJsonData_Params
{
	TArray<unsigned char>                              JoinData;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.OnRep_HasPlayerProxy
struct APavlovPlayerState_OnRep_HasPlayerProxy_Params
{
};

// Function Pavlov.PavlovPlayerState.OnRep_Flair
struct APavlovPlayerState_OnRep_Flair_Params
{
};

// Function Pavlov.PavlovPlayerState.OnRep_Cash
struct APavlovPlayerState_OnRep_Cash_Params
{
};

// Function Pavlov.PavlovPlayerState.LoadEquippedSkins
struct APavlovPlayerState_LoadEquippedSkins_Params
{
};

// Function Pavlov.PavlovPlayerState.IsAbleToBuy
struct APavlovPlayerState_IsAbleToBuy_Params
{
	struct FName                                       EquipmentName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.HasSkinOverride
struct APavlovPlayerState_HasSkinOverride_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.HasSkinEquipped
struct APavlovPlayerState_HasSkinEquipped_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.GetVRDevice
struct APavlovPlayerState_GetVRDevice_Params
{
	PavlovProxy_EVRDevice                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.GetTeamId
struct APavlovPlayerState_GetTeamId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.GetStringId
struct APavlovPlayerState_GetStringId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.GetSkinId
struct APavlovPlayerState_GetSkinId_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.DisableFallSound
struct APavlovPlayerState_DisableFallSound_Params
{
};

// Function Pavlov.PavlovPlayerState.AddEquippedSkinByFamily
struct APavlovPlayerState_AddEquippedSkinByFamily_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_ESkinFamily                                 SkinFamily;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovPlayerState.AddEquippedSkin
struct APavlovPlayerState_AddEquippedSkin_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkinId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.UpdateWheels
struct UPavlovSimpleVehicleMovement_UpdateWheels_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedWheelState                       WheelUpdate;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelInfo
struct UPavlovSimpleVehicleMovement_SetWheelInfo_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedWheelState                       WheelsState;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveTorque
struct UPavlovSimpleVehicleMovement_SetWheelDriveTorque_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DriveTorque;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelDriveAndBrakeTorque
struct UPavlovSimpleVehicleMovement_SetWheelDriveAndBrakeTorque_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DriveTorque;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrakeTorque;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetWheelBrakingTorque
struct UPavlovSimpleVehicleMovement_SetWheelBrakingTorque_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrakeTorque;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.SetTurnTorque
struct UPavlovSimpleVehicleMovement_SetTurnTorque_Params
{
	float                                              TurningTorque;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.ServerUpdateWheels
struct UPavlovSimpleVehicleMovement_ServerUpdateWheels_Params
{
	struct FReplicatedWheelState                       LeftWheelInput;                                            // 0x0000(0x0008)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FReplicatedWheelState                       RightWheelInput;                                           // 0x0000(0x0008)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TurnTorque;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSimpleVehicleMovement.ServerEBrake
struct UPavlovSimpleVehicleMovement_ServerEBrake_Params
{
};

// Function Pavlov.PavlovSpectatorPawn.ScrubToLive
struct APavlovSpectatorPawn_ScrubToLive_Params
{
};

// Function Pavlov.PavlovSpectatorPawn.ScrubRelative
struct APavlovSpectatorPawn_ScrubRelative_Params
{
	float                                              Seconds;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSpectatorPawn.ScrubNormalized
struct APavlovSpectatorPawn_ScrubNormalized_Params
{
	float                                              NormalizedTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSpectatorPawn.Scrub
struct APavlovSpectatorPawn_Scrub_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSpectatorPawn.OnScrubChanged
struct APavlovSpectatorPawn_OnScrubChanged_Params
{
	bool                                               bScrubing;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSpectatorPawn.OnGotoTime
struct APavlovSpectatorPawn_OnGotoTime_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSpectatorPawn.OnDemoPlaybackError
struct APavlovSpectatorPawn_OnDemoPlaybackError_Params
{
	TEnumAsByte<Engine_EDemoPlayFailure>               FailureType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorString;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovSpectatorPawn.GetNormalizedScrubTime
struct APavlovSpectatorPawn_GetNormalizedScrubTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SwapHands
struct UPavlovStatics_SwapHands_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SupportsGripForce
struct UPavlovStatics_SupportsGripForce_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SpawnLocalSound2DByPawn
struct UPavlovStatics_SpawnLocalSound2DByPawn_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SpawnLocalSound2D
struct UPavlovStatics_SpawnLocalSound2D_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SpawnHitFeedbackSound
struct UPavlovStatics_SpawnHitFeedbackSound_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EHitFeedbackType                            Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SetPlayerEffectsDisabled
struct UPavlovStatics_SetPlayerEffectsDisabled_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SetPavlovSplash
struct UPavlovStatics_SetPavlovSplash_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    SplashTexture;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.SetActorNetDormancy
struct UPavlovStatics_SetActorNetDormancy_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENetDormancy>                   Dormancy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.ResetVoiceCaptureDevice
struct UPavlovStatics_ResetVoiceCaptureDevice_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.PropRadialDamage
struct UPavlovStatics_PropRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DamagePreventionChannel;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.OpenPavlovMapById
struct UPavlovStatics_OpenPavlovMapById_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Options;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoDelay;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsXmas
struct UPavlovStatics_IsXmas_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsReplay
struct UPavlovStatics_IsReplay_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsQuestServer
struct UPavlovStatics_IsQuestServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsQuest
struct UPavlovStatics_IsQuest_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsPlayingOnlineGame
struct UPavlovStatics_IsPlayingOnlineGame_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsOculusTouch
struct UPavlovStatics_IsOculusTouch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsInEntry
struct UPavlovStatics_IsInEntry_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsHalloween
struct UPavlovStatics_IsHalloween_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsEditor
struct UPavlovStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsCompetitiveMode
struct UPavlovStatics_IsCompetitiveMode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsBombDropped
struct UPavlovStatics_IsBombDropped_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.IsAprilFools
struct UPavlovStatics_IsAprilFools_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.HasGunOptimizations
struct UPavlovStatics_HasGunOptimizations_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GoToStartUpMap
struct UPavlovStatics_GoToStartUpMap_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GoToEntry
struct UPavlovStatics_GoToEntry_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetWorkshop
struct UPavlovStatics_GetWorkshop_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorkshop*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetVoiceLevelPeak
struct UPavlovStatics_GetVoiceLevelPeak_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetUserId
struct UPavlovStatics_GetUserId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetUIManager
struct UPavlovStatics_GetUIManager_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIManager*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetTutorial
struct UPavlovStatics_GetTutorial_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTutorial*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetSpectatorTVCamera
struct UPavlovStatics_GetSpectatorTVCamera_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASpectatorTVCamera*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetShackQualityLevel
struct UPavlovStatics_GetShackQualityLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetShackDeviceType
struct UPavlovStatics_GetShackDeviceType_Params
{
	Pavlov_EShackDeviceType                            ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetRefPoseBoneTransform
struct UPavlovStatics_GetRefPoseBoneTransform_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPlayerUniqueIdAsString
struct UPavlovStatics_GetPlayerUniqueIdAsString_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPlayerEquipment
struct UPavlovStatics_GetPlayerEquipment_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Primary;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Secondary;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPlayerEffects
struct UPavlovStatics_GetPlayerEffects_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGlobalPlayerEffects*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPawnByPlayerState
struct UPavlovStatics_GetPawnByPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPavlovVersionString
struct UPavlovStatics_GetPavlovVersionString_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPavlovLobby
struct UPavlovStatics_GetPavlovLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlovLobby*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPavlovGameUserSettings
struct UPavlovStatics_GetPavlovGameUserSettings_Params
{
	class UPavlovGameUserSettings*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetPavlovGameInstance
struct UPavlovStatics_GetPavlovGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlovGameInstance*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetMeshMaterials
struct UPavlovStatics_GetMeshMaterials_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetMenuUniverseInstance
struct UPavlovStatics_GetMenuUniverseInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMenuUniverse*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetMatchmaking
struct UPavlovStatics_GetMatchmaking_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatchmaking*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetLocalPlayerState
struct UPavlovStatics_GetLocalPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetLocalPlayerCameraTransform
struct UPavlovStatics_GetLocalPlayerCameraTransform_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetHoliday
struct UPavlovStatics_GetHoliday_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EHolidays                                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetFriendsUserId
struct UPavlovStatics_GetFriendsUserId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetDefaultObject
struct UPavlovStatics_GetDefaultObject_Params
{
	class UClass*                                      ObjectClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetControllerByPlayerState
struct UPavlovStatics_GetControllerByPlayerState_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetBoneTransform
struct UPavlovStatics_GetBoneTransform_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.GetBombInstance
struct UPavlovStatics_GetBombInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABomb*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.ForceNoSoundOcclusion
struct UPavlovStatics_ForceNoSoundOcclusion_Params
{
	class UAudioComponent*                             AudioComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.FlushActorNetDormancy
struct UPavlovStatics_FlushActorNetDormancy_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.FindClosestBombPlantSpot
struct UPavlovStatics_FindClosestBombPlantSpot_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RefLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABombPlantSpot*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovStatics.ArePawnsHostile
struct UPavlovStatics_ArePawnsHostile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       A;                                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       B;                                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.ZombieHit_Multi
struct APavlovVehicle_ZombieHit_Multi_Params
{
	struct FVector_NetQuantize                         HitLocation;                                               // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.VehicleSoundSetup
struct APavlovVehicle_VehicleSoundSetup_Params
{
	bool                                               bEntered;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.VehicleKilled_Multi
struct APavlovVehicle_VehicleKilled_Multi_Params
{
};

// Function Pavlov.PavlovVehicle.TryFlipVehicle
struct APavlovVehicle_TryFlipVehicle_Params
{
};

// Function Pavlov.PavlovVehicle.TakeRadialDamage
struct APavlovVehicle_TakeRadialDamage_Params
{
	class AActor*                                      DamagedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitInfo;                                                   // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.TakePointDamage
struct APavlovVehicle_TakePointDamage_Params
{
	class AActor*                                      DamagedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ShotFromDirection;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.StartVehicleDespawnTimer
struct APavlovVehicle_StartVehicleDespawnTimer_Params
{
};

// Function Pavlov.PavlovVehicle.SetVehicleOccupied
struct APavlovVehicle_SetVehicleOccupied_Params
{
	bool                                               bOccupied;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.SetEngineState
struct APavlovVehicle_SetEngineState_Params
{
	bool                                               bStart;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.SeatVehicleTeamID
struct APavlovVehicle_SeatVehicleTeamID_Params
{
	int                                                NewTeamId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.RepairVehicle
struct APavlovVehicle_RepairVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.PlayRepairSound_Multi
struct APavlovVehicle_PlayRepairSound_Multi_Params
{
	bool                                               bFullyRepaired;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.PlayerEnterExit_Multi
struct APavlovVehicle_PlayerEnterExit_Multi_Params
{
	bool                                               bEntered;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.OutOfBounds
struct APavlovVehicle_OutOfBounds_Params
{
	bool                                               bOut;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.OnVehicleCritical
struct APavlovVehicle_OnVehicleCritical_Params
{
	bool                                               bCritical;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.OnRep_VehicleDamageState
struct APavlovVehicle_OnRep_VehicleDamageState_Params
{
	Pavlov_EVehicleDamageState                         OldVehicleDamageState;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.OnRep_Occupied
struct APavlovVehicle_OnRep_Occupied_Params
{
};

// Function Pavlov.PavlovVehicle.OnRep_EngineOn
struct APavlovVehicle_OnRep_EngineOn_Params
{
};

// Function Pavlov.PavlovVehicle.OnEngineChanged
struct APavlovVehicle_OnEngineChanged_Params
{
	bool                                               bOn;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.IsVehicleEmpty
struct APavlovVehicle_IsVehicleEmpty_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.IsVehicleDisabled
struct APavlovVehicle_IsVehicleDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.IsSeatEmpty
struct APavlovVehicle_IsSeatEmpty_Params
{
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.IsLocalPlayerInVehicle
struct APavlovVehicle_IsLocalPlayerInVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.IsLocalPlayerInSeat
struct APavlovVehicle_IsLocalPlayerInSeat_Params
{
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.IsDriver
struct APavlovVehicle_IsDriver_Params
{
	class UVehicleOccupant*                            Occupant;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.HasDriver
struct APavlovVehicle_HasDriver_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetVehicleInterior
struct APavlovVehicle_GetVehicleInterior_Params
{
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetVehicleEngineAudioComponents
struct APavlovVehicle_GetVehicleEngineAudioComponents_Params
{
	TArray<class UAudioComponent*>                     ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetVehicleAudioComponents
struct APavlovVehicle_GetVehicleAudioComponents_Params
{
	TArray<class UAudioComponent*>                     ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetTeamId
struct APavlovVehicle_GetTeamId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetSeatExitLocation
struct APavlovVehicle_GetSeatExitLocation_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ExitLocation;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetSeat
struct APavlovVehicle_GetSeat_Params
{
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVehicleSeat*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetOccupantSeat
struct APavlovVehicle_GetOccupantSeat_Params
{
	class UVehicleOccupant*                            Occupant;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetOccupants
struct APavlovVehicle_GetOccupants_Params
{
	TArray<class UVehicleOccupant*>                    ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetOccupant
struct APavlovVehicle_GetOccupant_Params
{
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVehicleOccupant*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetMovmentVelocity
struct APavlovVehicle_GetMovmentVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetExitLocation
struct APavlovVehicle_GetExitLocation_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetDriverSeat
struct APavlovVehicle_GetDriverSeat_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.GetDriver
struct APavlovVehicle_GetDriver_Params
{
	class UVehicleOccupant*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.FindEmptySeat
struct APavlovVehicle_FindEmptySeat_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.EnteredKillVolume
struct APavlovVehicle_EnteredKillVolume_Params
{
};

// Function Pavlov.PavlovVehicle.DoesSeatExitRight
struct APavlovVehicle_DoesSeatExitRight_Params
{
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.DelayEngineOffSound
struct APavlovVehicle_DelayEngineOffSound_Params
{
};

// Function Pavlov.PavlovVehicle.ClearBumpers_Multi
struct APavlovVehicle_ClearBumpers_Multi_Params
{
	float                                              Direction;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.ClearBumpers
struct APavlovVehicle_ClearBumpers_Params
{
	float                                              Direction;                                                 // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle.CanEnterVehicle
struct APavlovVehicle_CanEnterVehicle_Params
{
	class APavlovPawn*                                 PavlovPawn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.UpdateSeatWidget
struct APavlovVehicle_Tank_UpdateSeatWidget_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.TurretMoving_Multi
struct APavlovVehicle_Tank_TurretMoving_Multi_Params
{
	bool                                               bIsTurretMoving;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.TurretFired_Multi
struct APavlovVehicle_Tank_TurretFired_Multi_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.StopGunnerFire
struct APavlovVehicle_Tank_StopGunnerFire_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.StartGunnerFire
struct APavlovVehicle_Tank_StartGunnerFire_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.SetTurretTurnRate
struct APavlovVehicle_Tank_SetTurretTurnRate_Params
{
	float                                              FOVAlpha;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.SetTurretInput
struct APavlovVehicle_Tank_SetTurretInput_Params
{
	struct FVector2D                                   AddRotation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.SetMachineGunRotation
struct APavlovVehicle_Tank_SetMachineGunRotation_Params
{
	struct FRotator                                    MGRot;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.OnRep_Overheating
struct APavlovVehicle_Tank_OnRep_Overheating_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.IsTurretPitchLimitReached
struct APavlovVehicle_Tank_IsTurretPitchLimitReached_Params
{
	float                                              TurretPitchInput;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.IsTurretMoving
struct APavlovVehicle_Tank_IsTurretMoving_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.IsGunnerOverheated
struct APavlovVehicle_Tank_IsGunnerOverheated_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.GunnerFired_Multi
struct APavlovVehicle_Tank_GunnerFired_Multi_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.GunnerFireBullet
struct APavlovVehicle_Tank_GunnerFireBullet_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.GunnerCooldownTick
struct APavlovVehicle_Tank_GunnerCooldownTick_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.GetTurretRotation
struct APavlovVehicle_Tank_GetTurretRotation_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.FireTankTurret
struct APavlovVehicle_Tank_FireTankTurret_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.DeactivateGunnerFireFX
struct APavlovVehicle_Tank_DeactivateGunnerFireFX_Params
{
};

// Function Pavlov.PavlovVehicle_Tank.CanFireTurret
struct APavlovVehicle_Tank_CanFireTurret_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PavlovVehicle_Tank.AddHeatBuildup
struct APavlovVehicle_Tank_AddHeatBuildup_Params
{
};

// Function Pavlov.PavlovWheeledVehicle.SetSteeringInput
struct APavlovWheeledVehicle_SetSteeringInput_Params
{
	float                                              Input;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PlayerCycler.GetNext
struct UPlayerCycler_GetNext_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 Pawn;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDialog.GetRandomChantIndex
struct UPushPlayerDialog_GetRandomChantIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDialog.GetDialogPriority
struct UPushPlayerDialog_GetDialogPriority_Params
{
	Pavlov_EPushDialog                                 DialogType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDialog.GetDialogByType
struct UPushPlayerDialog_GetDialogByType_Params
{
	Pavlov_EPushDialog                                 DialogType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDialog.GetDialogBuffer
struct UPushPlayerDialog_GetDialogBuffer_Params
{
	Pavlov_EPushDialog                                 DialogType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDialog.GetChantByIndex
struct UPushPlayerDialog_GetChantByIndex_Params
{
	int                                                ChantIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPushChant                                  ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerStateComponent.PlayerRevived
struct UPushPlayerStateComponent_PlayerRevived_Params
{
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PushPlayerDataClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FallbackWeapon;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Rat.OnRevive
struct ARat_OnRevive_Params
{
	class AActor*                                      ActorOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Rat.OnKill
struct ARat_OnKill_Params
{
	class AActor*                                      ActorOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Rat.ApplyImpact
struct ARat_ApplyImpact_Params
{
};

// Function Pavlov.PlayOfflineView.OnMapBrowserCommit
struct APlayOfflineView_OnMapBrowserCommit_Params
{
	struct FModalCommitParams                          Params;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.Pliers.ServerReportCut
struct APliers_ServerReportCut_Params
{
	class ABomb*                                       Bomb;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WireIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Pliers.MulticastOnCut
struct APliers_MulticastOnCut_Params
{
};

// Function Pavlov.PushBomb.SetBombState
struct APushBomb_SetBombState_Params
{
	Pavlov_EBombState                                  State;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBomb.OnRep_BombState
struct APushBomb_OnRep_BombState_Params
{
};

// Function Pavlov.PushBomb.OnBombStateChanged
struct APushBomb_OnBombStateChanged_Params
{
	Pavlov_EBombState                                  State;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBomb.CheckSiteOverlap
struct APushBomb_CheckSiteOverlap_Params
{
};

// Function Pavlov.PushBombObjective.TickBombTimer
struct APushBombObjective_TickBombTimer_Params
{
};

// Function Pavlov.PushBombObjective.SetPushObjectiveProxy
struct APushBombObjective_SetPushObjectiveProxy_Params
{
	class APavlov_PushBombObjective*                   PushBombProxy;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.SetObjectiveState
struct APushBombObjective_SetObjectiveState_Params
{
	PavlovProxy_EPushObjectiveState                    PushObjectiveState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.SetObjectiveMarker
struct APushBombObjective_SetObjectiveMarker_Params
{
	PavlovProxy_EObjectiveMarker                       Marker;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.ResetObjective
struct APushBombObjective_ResetObjective_Params
{
};

// Function Pavlov.PushBombObjective.RemoveBomb
struct APushBombObjective_RemoveBomb_Params
{
};

// Function Pavlov.PushBombObjective.PushObjectiveStateChanged
struct APushBombObjective_PushObjectiveStateChanged_Params
{
	PavlovProxy_EPushObjectiveState                    CurrentState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.PlantPushBomb
struct APushBombObjective_PlantPushBomb_Params
{
	class APushBomb*                                   PushBomb;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.OnTeamsSwitched
struct APushBombObjective_OnTeamsSwitched_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_PushObjectiveProxy
struct APushBombObjective_OnRep_PushObjectiveProxy_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_ObjectiveState
struct APushBombObjective_OnRep_ObjectiveState_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_ObjectiveMarker
struct APushBombObjective_OnRep_ObjectiveMarker_Params
{
};

// Function Pavlov.PushBombObjective.OnRep_BombTimerAlpha
struct APushBombObjective_OnRep_BombTimerAlpha_Params
{
};

// DelegateFunction Pavlov.PushBombObjective.OnPushBombObjectiveStateChanged__DelegateSignature
struct APushBombObjective_OnPushBombObjectiveStateChanged__DelegateSignature_Params
{
	class APushBombObjective*                          PushBombObjective;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPushObjectiveState                    ObjectiveState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.OnObjectiveMarkerChanged
struct APushBombObjective_OnObjectiveMarkerChanged_Params
{
	PavlovProxy_EObjectiveMarker                       Marker;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.OnBombTimerAlphaChanged
struct APushBombObjective_OnBombTimerAlphaChanged_Params
{
};

// Function Pavlov.PushBombObjective.OnBombOverlap
struct APushBombObjective_OnBombOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.OnBombExplosion_Server
struct APushBombObjective_OnBombExplosion_Server_Params
{
};

// Function Pavlov.PushBombObjective.IsLowQuality
struct APushBombObjective_IsLowQuality_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.GetObjectiveState
struct APushBombObjective_GetObjectiveState_Params
{
	PavlovProxy_EPushObjectiveState                    ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.GetBombMarker
struct APushBombObjective_GetBombMarker_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.GetActiveObjectiveID
struct APushBombObjective_GetActiveObjectiveID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushBombObjective.CleanupDestroyFX
struct APushBombObjective_CleanupDestroyFX_Params
{
};

// Function Pavlov.PushBombObjective.BombExplosion_Multi
struct APushBombObjective_BombExplosion_Multi_Params
{
};

// Function Pavlov.PushBombObjective.BombExplosion
struct APushBombObjective_BombExplosion_Params
{
};

// Function Pavlov.PushBombObjective.BombDefused
struct APushBombObjective_BombDefused_Params
{
};

// Function Pavlov.PushBombObjective.AttachPushBomb_Multi
struct APushBombObjective_AttachPushBomb_Multi_Params
{
	class APushBomb*                                   PushBomb;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.UpdateLoadouts
struct APushLoadout_UpdateLoadouts_Params
{
};

// Function Pavlov.PushLoadout.SpawnLoadoutEquipment
struct APushLoadout_SpawnLoadoutEquipment_Params
{
	struct FName                                       LoadoutSlot;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ObjectiveId;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.SetTeamId
struct APushLoadout_SetTeamId_Params
{
	int                                                LoadoutTeamId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.SetLockerAvailability
struct APushLoadout_SetLockerAvailability_Params
{
	int                                                LoadoutIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfLoadoutsAvailable;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoadouts;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.PlayerLoadoutTaken
struct APushLoadout_PlayerLoadoutTaken_Params
{
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTPToPlay;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.OnRep_Loadouts
struct APushLoadout_OnRep_Loadouts_Params
{
};

// Function Pavlov.PushLoadout.IsAttackersRoom
struct APushLoadout_IsAttackersRoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.InitializePushLoadout
struct APushLoadout_InitializePushLoadout_Params
{
	class APavlov_PushLoadoutProxy*                    LoadoutProxy;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWW2Items;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.GetLootLocker
struct APushLoadout_GetLootLocker_Params
{
	int                                                LootLockerIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APushLootLocker*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.GetLockerSpawnTransform
struct APushLoadout_GetLockerSpawnTransform_Params
{
	int                                                LockerNum;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.GetLoadoutSpawnTransform
struct APushLoadout_GetLoadoutSpawnTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.GetLoadoutByName
struct APushLoadout_GetLoadoutByName_Params
{
	struct FName                                       LoadoutId;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPushLoadoutEquipment                       LoadoutEquipment;                                          // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.DoesPlayerHaveLoadout
struct APushLoadout_DoesPlayerHaveLoadout_Params
{
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLoadout.DeleteUnusedLockers
struct APushLoadout_DeleteUnusedLockers_Params
{
	int                                                CurrentLockers;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLootLocker.SetupMesh
struct APushLootLocker_SetupMesh_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SKComp;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLootLocker.SetNumOfLoadoutsAvailable
struct APushLootLocker_SetNumOfLoadoutsAvailable_Params
{
	int                                                NumAvailable;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoadouts;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLootLocker.OnRep_LoadoutCount
struct APushLootLocker_OnRep_LoadoutCount_Params
{
};

// Function Pavlov.PushLootLocker.OnLockerStateChanged
struct APushLootLocker_OnLockerStateChanged_Params
{
	bool                                               bOpen;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLootLocker.GrabLocker
struct APushLootLocker_GrabLocker_Params
{
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLootLocker.GetLoadoutRoom
struct APushLootLocker_GetLoadoutRoom_Params
{
	class APushLoadout*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushLootLocker.CanGrabLocker
struct APushLootLocker_CanGrabLocker_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.UpdateOOBGracePeriod
struct UPushManagerComponent_UpdateOOBGracePeriod_Params
{
};

// Function Pavlov.PushManagerComponent.SwappedSides
struct UPushManagerComponent_SwappedSides_Params
{
};

// Function Pavlov.PushManagerComponent.SetWinCondition
struct UPushManagerComponent_SetWinCondition_Params
{
	Pavlov_EPushWinCondition                           PushWinCondition;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.SetTickets
struct UPushManagerComponent_SetTickets_Params
{
	bool                                               bAttackers;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Tickets;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.SetGracePeriod
struct UPushManagerComponent_SetGracePeriod_Params
{
	float                                              GraceTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.SetActiveObjectiveId
struct UPushManagerComponent_SetActiveObjectiveId_Params
{
	int                                                ObjectiveId;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.RemoveTicket
struct UPushManagerComponent_RemoveTicket_Params
{
	bool                                               bAttackers;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.IsSpawnGracePeriod
struct UPushManagerComponent_IsSpawnGracePeriod_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.InitializePush
struct UPushManagerComponent_InitializePush_Params
{
	int                                                ObjectiveId;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttackTickets;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefendTickets;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAttackTickets;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WaveTickets;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APushLoadout*                                Team0LoadoutRoom;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APushLoadout*                                Team1LoadoutRoom;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushManagerComponent.CheckLoadoutAvailability
struct UPushManagerComponent_CheckLoadoutAvailability_Params
{
};

// Function Pavlov.PushManagerComponent.AwardAttackersTicketsPerWave
struct UPushManagerComponent_AwardAttackersTicketsPerWave_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.TakePushSnapshot
struct UPushPlayerDataComponent_TakePushSnapshot_Params
{
};

// Function Pavlov.PushPlayerDataComponent.SetHipSlotType
struct UPushPlayerDataComponent_SetHipSlotType_Params
{
	PavlovProxy_EPushHipSlot                           HipSlot;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.SetDialogAsset
struct UPushPlayerDataComponent_SetDialogAsset_Params
{
	class UPushPlayerDialog*                           Dialog;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.RestorePushSnapshot
struct UPushPlayerDataComponent_RestorePushSnapshot_Params
{
	struct FName                                       FallbackWeapon;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPushPlayerStateComponent*                   PushPlayerStateComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.RespawnHipSlot
struct UPushPlayerDataComponent_RespawnHipSlot_Params
{
};

// Function Pavlov.PushPlayerDataComponent.PlayDialogReplicated
struct UPushPlayerDataComponent_PlayDialogReplicated_Params
{
	Pavlov_EPushDialog                                 PushDialog;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.PlayDialogFromHead
struct UPushPlayerDataComponent_PlayDialogFromHead_Params
{
	class USoundCue*                                   DialogCue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.PlayDialog_Multi
struct UPushPlayerDataComponent_PlayDialog_Multi_Params
{
	Pavlov_EPushDialog                                 PushDialog;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.PlayDialog
struct UPushPlayerDataComponent_PlayDialog_Params
{
	Pavlov_EPushDialog                                 PushDialog;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.PlayChantResponse_Multi
struct UPushPlayerDataComponent_PlayChantResponse_Multi_Params
{
	int                                                ChantIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.PlayChantResponse
struct UPushPlayerDataComponent_PlayChantResponse_Params
{
};

// Function Pavlov.PushPlayerDataComponent.PlayChant
struct UPushPlayerDataComponent_PlayChant_Params
{
	int                                                ChantIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.OwnerKilled
struct UPushPlayerDataComponent_OwnerKilled_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnRep_HipSlotType
struct UPushPlayerDataComponent_OnRep_HipSlotType_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnOwnerDamaged
struct UPushPlayerDataComponent_OnOwnerDamaged_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnLowHealth
struct UPushPlayerDataComponent_OnLowHealth_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnLowAmmo
struct UPushPlayerDataComponent_OnLowAmmo_Params
{
};

// Function Pavlov.PushPlayerDataComponent.OnGrenadeCooked
struct UPushPlayerDataComponent_OnGrenadeCooked_Params
{
	class AGrenade*                                    Grenade;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.OnBufferTimeComplete
struct UPushPlayerDataComponent_OnBufferTimeComplete_Params
{
};

// Function Pavlov.PushPlayerDataComponent.LoadDialogAsset
struct UPushPlayerDataComponent_LoadDialogAsset_Params
{
	struct FName                                       PlayerSkin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.Init_Client
struct UPushPlayerDataComponent_Init_Client_Params
{
};

// Function Pavlov.PushPlayerDataComponent.HipSlotUsed
struct UPushPlayerDataComponent_HipSlotUsed_Params
{
};

// Function Pavlov.PushPlayerDataComponent.GetPushPlayerData
struct UPushPlayerDataComponent_GetPushPlayerData_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPushPlayerDataComponent*                    ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.ClearQueue
struct UPushPlayerDataComponent_ClearQueue_Params
{
	bool                                               bFadeCurrent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChantInQueue;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.PushPlayerDataComponent.AskForMeds
struct UPushPlayerDataComponent_AskForMeds_Params
{
};

// Function Pavlov.ShootingRangeTargetComponent.TargetHit
struct UShootingRangeTargetComponent_TargetHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.SkinFamily.SkinIntToSkinFamily
struct USkinFamily_SkinIntToSkinFamily_Params
{
	int                                                SkinFamilyInt;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_ESkinFamily                                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SkinFamily.SkinFamilyToString
struct USkinFamily_SkinFamilyToString_Params
{
	Pavlov_ESkinFamily                                 SkinFamily;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SkinFamily.SkinFamilyToInt
struct USkinFamily_SkinFamilyToInt_Params
{
	Pavlov_ESkinFamily                                 SkinFamily;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SkinFamily.SkinFamilyIdToString
struct USkinFamily_SkinFamilyIdToString_Params
{
	int                                                SkinFamilyId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SoundMixingSettings.SetVolumeByChannelName
struct USoundMixingSettings_SetVolumeByChannelName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SoundMixingSettings.SetVolumeByChannelIndex
struct USoundMixingSettings_SetVolumeByChannelIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SoundMixingSettings.Save
struct USoundMixingSettings_Save_Params
{
};

// Function Pavlov.SoundMixingSettings.RestoreDefaults
struct USoundMixingSettings_RestoreDefaults_Params
{
};

// Function Pavlov.SoundMixingSettings.Load
struct USoundMixingSettings_Load_Params
{
};

// Function Pavlov.SoundMixingSettings.GetVolumeByChannelName
struct USoundMixingSettings_GetVolumeByChannelName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SoundMixingSettings.GetVolumeByChannelIndex
struct USoundMixingSettings_GetVolumeByChannelIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SoundMixingSettings.ApplyAndSave
struct USoundMixingSettings_ApplyAndSave_Params
{
};

// Function Pavlov.SoundMixingSettings.Apply
struct USoundMixingSettings_Apply_Params
{
};

// Function Pavlov.SpectatorTag.OnFadeOut
struct ASpectatorTag_OnFadeOut_Params
{
};

// Function Pavlov.SpectatorTag.GetPlayerState
struct ASpectatorTag_GetPlayerState_Params
{
	class APavlovPlayerState*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SpectatorTVCamera.OnAttachedToFocusedPawn
struct ASpectatorTVCamera_OnAttachedToFocusedPawn_Params
{
};

// Function Pavlov.SpectatorTVCamera.GetSceneCapture
struct ASpectatorTVCamera_GetSceneCapture_Params
{
	class USceneCaptureComponent2D*                    ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SpectatorTVCamera.Cycle
struct ASpectatorTVCamera_Cycle_Params
{
};

// Function Pavlov.SpectatorTVCamera.AddYawInput
struct ASpectatorTVCamera_AddYawInput_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.SetStat
struct UStatsManager_SetStat_Params
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EPlayerStats                                OptionStat;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.PostStats
struct UStatsManager_PostStats_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.HasAuthority
struct UStatsManager_HasAuthority_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.GetXPForStat
struct UStatsManager_GetXPForStat_Params
{
	Pavlov_EPlayerStats                                StatType;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.GetTransformedEloRatings
struct UStatsManager_GetTransformedEloRatings_Params
{
	float                                              Elo;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.GetStatsAsJson
struct UStatsManager_GetStatsAsJson_Params
{
	class UJsonUtilsObj*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.GetProbabilityOfWinning
struct UStatsManager_GetProbabilityOfWinning_Params
{
	float                                              CurrentElo;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpponentElo;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.GetPlayerStats
struct UStatsManager_GetPlayerStats_Params
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerStats                                PlayerStatistics;                                          // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.GetPlayersStats
struct UStatsManager_GetPlayersStats_Params
{
	TMap<struct FString, struct FPlayerStats>          ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.GetAllPlayersStats
struct UStatsManager_GetAllPlayersStats_Params
{
	TArray<struct FPlayerStats>                        PlayersStatistics;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.FindOrCreatePlayerStats
struct UStatsManager_FindOrCreatePlayerStats_Params
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerStats                                ReturnValue;                                               // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.DumpStatsToLog
struct UStatsManager_DumpStatsToLog_Params
{
};

// Function Pavlov.StatsManager.CalulateTeamElos
struct UStatsManager_CalulateTeamElos_Params
{
	TMap<struct FString, float>                        InTeam0Elos;                                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        InTeam1Elos;                                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        OutTeam0Elos;                                              // 0x0000(0x0050)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        OutTeam1Elos;                                              // 0x0000(0x0050)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bTeam0Won;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.CalculateNewElo
struct UStatsManager_CalculateNewElo_Params
{
	float                                              CurrentElo;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpponentElo;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWin;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.AwardPlayersXP
struct UStatsManager_AwardPlayersXP_Params
{
};

// Function Pavlov.StatsManager.AverageElos
struct UStatsManager_AverageElos_Params
{
	TArray<float>                                      Elos;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.AddStatByUniqueId
struct UStatsManager_AddStatByUniqueId_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EPlayerStats                                OptionStat;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.AddStat
struct UStatsManager_AddStat_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EPlayerStats                                OptionStat;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StatsManager.AddPlayer
struct UStatsManager_AddPlayer_Params
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StencilSuppressionComponent.OwnerKilled
struct UStencilSuppressionComponent_OwnerKilled_Params
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.StencilSuppressionComponent.OnMenuOpened
struct UStencilSuppressionComponent_OnMenuOpened_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SurfaceFXAsset.GetVehicleSound
struct USurfaceFXAsset_GetVehicleSound_Params
{
	class USoundCue*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SurfaceFXAsset.GetVehicleParticleSystem
struct USurfaceFXAsset_GetVehicleParticleSystem_Params
{
	class UParticleSystem*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SurfaceFXAsset.GetSoundBySurfaceType
struct USurfaceFXAsset_GetSoundBySurfaceType_Params
{
	TEnumAsByte<Engine_EPhysicalSurface>               SurfaceType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.SurfaceFXAsset.GetParticleBySurfaceType
struct USurfaceFXAsset_GetParticleBySurfaceType_Params
{
	TEnumAsByte<Engine_EPhysicalSurface>               SurfaceType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TankInteriorAnimInstance.GetMPH
struct UTankInteriorAnimInstance_GetMPH_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TankVehicleMovement.ServerUpdateTankSteeringWheel
struct UTankVehicleMovement_ServerUpdateTankSteeringWheel_Params
{
	float                                              LeftThrustInput;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightThrustInput;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpdateThrottle;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TankVehicleMovement.ServerUpdateTankInput
struct UTankVehicleMovement_ServerUpdateTankInput_Params
{
	float                                              LeftTrustInput;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightTrustInput;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TankVehicleMovement.DriverLeft
struct UTankVehicleMovement_DriverLeft_Params
{
};

// Function Pavlov.ToolTip.GetFadeScalar
struct AToolTip_GetFadeScalar_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.TTTFlushKarma
struct UTTTGameInfo_TTTFlushKarma_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.TTTAlwaysEnableSkinMenu
struct UTTTGameInfo_TTTAlwaysEnableSkinMenu_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.SetTTTPlayerRole
struct UTTTGameInfo_SetTTTPlayerRole_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TTTRole;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.SetTTTKarma
struct UTTTGameInfo_SetTTTKarma_Params
{
	class APavlovPlayerState*                          PavPlayerState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Karma;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.RetryInit
struct UTTTGameInfo_RetryInit_Params
{
};

// Function Pavlov.TTTGameInfo.PauseTTTTimer
struct UTTTGameInfo_PauseTTTTimer_Params
{
	bool                                               bPaused;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.GetTTTPlayerInfo
struct UTTTGameInfo_GetTTTPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTTTPlayerInfo                              ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.GetTTTKarma
struct UTTTGameInfo_GetTTTKarma_Params
{
	class APavlovPlayerState*                          PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Karma;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.GetAllTTTPlayersInfo
struct UTTTGameInfo_GetAllTTTPlayersInfo_Params
{
	TArray<struct FTTTPlayerInfo>                      ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.TTTGameInfo.EndTTTRound
struct UTTTGameInfo_EndTTTRound_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Tutorial.TerminateToolTip
struct UTutorial_TerminateToolTip_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Tutorial.ShowToolTip
struct UTutorial_ShowToolTip_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Context;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ContextLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Tutorial.Reset
struct UTutorial_Reset_Params
{
};

// Function Pavlov.Tutorial.MarkToolTipAsComplete
struct UTutorial_MarkToolTipAsComplete_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Tutorial.IsToolTipCompleted
struct UTutorial_IsToolTipCompleted_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Tutorial.GetToolTipInstanceCount
struct UTutorial_GetToolTipInstanceCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.ShowMenuUniverse
struct UUIManager_ShowMenuUniverse_Params
{
};

// Function Pavlov.UIManager.ShowMatchmaking
struct UUIManager_ShowMatchmaking_Params
{
};

// Function Pavlov.UIManager.SetSideInterface
struct UUIManager_SetSideInterface_Params
{
	Pavlov_EUserInterfaceType                          PrimaryInterface;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EUserInterfaceType                          NewInterface;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.SetMenuUniverse
struct UUIManager_SetMenuUniverse_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.SetMatchmakingMode
struct UUIManager_SetMatchmakingMode_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.SetInterface
struct UUIManager_SetInterface_Params
{
	Pavlov_EUserInterfaceType                          NewInterface;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.OnVotePromptCommit
struct UUIManager_OnVotePromptCommit_Params
{
	struct FModalCommitParams                          Params;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.OnPinPromptDestroyed
struct UUIManager_OnPinPromptDestroyed_Params
{
};

// Function Pavlov.UIManager.OnPinPromptCommit
struct UUIManager_OnPinPromptCommit_Params
{
	struct FModalCommitParams                          Params;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.OnPartyCreated
struct UUIManager_OnPartyCreated_Params
{
};

// Function Pavlov.UIManager.OnOnlineError
struct UUIManager_OnOnlineError_Params
{
	Pavlov_EOnlineError                                Error;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMessage;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.OnMatchmakingStatusChanged
struct UUIManager_OnMatchmakingStatusChanged_Params
{
	Pavlov_EMatchmakingStatus                          Status;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.OnJoinServerStateChanged
struct UUIManager_OnJoinServerStateChanged_Params
{
	Pavlov_EOnlineJoinServerState                      JoinServerState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.K2_CreateModalWithParams
struct UUIManager_K2_CreateModalWithParams_Params
{
	struct FUICreateModalParams                        Params;                                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UModal*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.IsMenuUniverseEnabled
struct UUIManager_IsMenuUniverseEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.HideMenuUniverse
struct UUIManager_HideMenuUniverse_Params
{
};

// Function Pavlov.UIManager.HideMatchmaking
struct UUIManager_HideMatchmaking_Params
{
	bool                                               bForce;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.GetSideInterface
struct UUIManager_GetSideInterface_Params
{
	Pavlov_EUserInterfaceType                          ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.GetModalInstance
struct UUIManager_GetModalInstance_Params
{
	class UModal*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.GetMenuUniverse
struct UUIManager_GetMenuUniverse_Params
{
	class AMenuUniverse*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.DismissMOTD
struct UUIManager_DismissMOTD_Params
{
};

// Function Pavlov.UIManager.CreateModalMessageBox
struct UUIManager_CreateModalMessageBox_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Pavlov_EModalMessageBoxType                        Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModal*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.CreateModal
struct UUIManager_CreateModal_Params
{
	class UClass*                                      ModalClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModalContent;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateView;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModal*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.UIManager.CreateConnectSpinnerModal
struct UUIManager_CreateConnectSpinnerModal_Params
{
};

// Function Pavlov.UIManager.ClearModalInstance
struct UUIManager_ClearModalInstance_Params
{
};

// Function Pavlov.VehicleBumper.OnBumperOverlap
struct UVehicleBumper_OnBumperOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleBumper.GetVehicle
struct UVehicleBumper_GetVehicle_Params
{
	class APavlovVehicle*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleBumper.ClearBumper
struct UVehicleBumper_ClearBumper_Params
{
};

// Function Pavlov.VehicleInterior.ZoomScopeFOV
struct AVehicleInterior_ZoomScopeFOV_Params
{
	float                                              ZoomDirection;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.SetupVehicleInterior
struct AVehicleInterior_SetupVehicleInterior_Params
{
	class APavlovVehicle*                              Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVehicleOccupant*                            VehicleOccupant;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.SetScopeFOV
struct AVehicleInterior_SetScopeFOV_Params
{
	float                                              ScopeFOV;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.SetScopeActive
struct AVehicleInterior_SetScopeActive_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.PlayFireHaptics
struct AVehicleInterior_PlayFireHaptics_Params
{
};

// Function Pavlov.VehicleInterior.OnScopeExploit
struct AVehicleInterior_OnScopeExploit_Params
{
	bool                                               bExploit;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.OnPassengerChanged
struct AVehicleInterior_OnPassengerChanged_Params
{
	bool                                               bEnteredVehicle;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.OnInteriorIntialized
struct AVehicleInterior_OnInteriorIntialized_Params
{
	class APavlovVehicle*                              Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVehicleOccupant*                            VehicleOccupant;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.HideActorInScope
struct AVehicleInterior_HideActorInScope_Params
{
	class AActor*                                      HideInScope;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.GunnerSocketOverride
struct AVehicleInterior_GunnerSocketOverride_Params
{
	struct FName                                       OverrideSocket;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.GetScopeHiddenActors
struct AVehicleInterior_GetScopeHiddenActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.GetScopeFOVAlpha
struct AVehicleInterior_GetScopeFOVAlpha_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.GetScopeFOV
struct AVehicleInterior_GetScopeFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleInterior.GetSceneCaptureParent
struct AVehicleInterior_GetSceneCaptureParent_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.SetupInput
struct UVehicleOccupant_SetupInput_Params
{
	class UInputComponent*                             InputComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.RetryHideInventory
struct UVehicleOccupant_RetryHideInventory_Params
{
};

// Function Pavlov.VehicleOccupant.RemoveVehicleInputServer
struct UVehicleOccupant_RemoveVehicleInputServer_Params
{
};

// Function Pavlov.VehicleOccupant.PassengerChanged
struct UVehicleOccupant_PassengerChanged_Params
{
	bool                                               bEnteredVehicle;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPawn*                                 PavPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.OnLeaveVehicle
struct UVehicleOccupant_OnLeaveVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.OnEnteredVehicleClient
struct UVehicleOccupant_OnEnteredVehicleClient_Params
{
	class APavlovVehicle*                              Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.LeaveVehicleServer
struct UVehicleOccupant_LeaveVehicleServer_Params
{
};

// Function Pavlov.VehicleOccupant.IsDriver
struct UVehicleOccupant_IsDriver_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.HideInScope
struct UVehicleOccupant_HideInScope_Params
{
	class AActor*                                      HideActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.GetVehicle
struct UVehicleOccupant_GetVehicle_Params
{
	class APavlovVehicle*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.GetSeatTransform
struct UVehicleOccupant_GetSeatTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.GetSeat
struct UVehicleOccupant_GetSeat_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.GetPawn
struct UVehicleOccupant_GetPawn_Params
{
	class APavlovPawn*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.ClientEnteredVehicle
struct UVehicleOccupant_ClientEnteredVehicle_Params
{
	class APavlovVehicle*                              InVehicle;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seat;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant.CanSendInput
struct UVehicleOccupant_CanSendInput_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisRight
struct UVehicleOccupant_Prototyping_TriggerAxisRight_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Prototyping.TriggerAxisLeft
struct UVehicleOccupant_Prototyping_TriggerAxisLeft_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Prototyping.ThrottleServer
struct UVehicleOccupant_Prototyping_ThrottleServer_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Prototyping.SteerServer
struct UVehicleOccupant_Prototyping_SteerServer_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Prototyping.MoveX
struct UVehicleOccupant_Prototyping_MoveX_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Driver.UpdateMovementInput
struct UVehicleOccupant_Tank_Driver_UpdateMovementInput_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisRight
struct UVehicleOccupant_Tank_Driver_TriggerAxisRight_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Driver.TriggerAxisLeft
struct UVehicleOccupant_Tank_Driver_TriggerAxisLeft_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Driver.GetTankMovementComponent
struct UVehicleOccupant_Tank_Driver_GetTankMovementComponent_Params
{
	class UTankVehicleMovement*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.SetMachineGunRotation
struct UVehicleOccupant_Tank_Gunner_SetMachineGunRotation_Params
{
	struct FRotator                                    MGRot;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.ServerSetMGRotation
struct UVehicleOccupant_Tank_Gunner_ServerSetMGRotation_Params
{
	struct FRotator                                    MGRot;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerReleased
struct UVehicleOccupant_Tank_Gunner_RightTriggerReleased_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTriggerPressed
struct UVehicleOccupant_Tank_Gunner_RightTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.RightTrigger
struct UVehicleOccupant_Tank_Gunner_RightTrigger_Params
{
	bool                                               bPressed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerReleased
struct UVehicleOccupant_Tank_Gunner_LeftTriggerReleased_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTriggerPressed
struct UVehicleOccupant_Tank_Gunner_LeftTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Gunner.LeftTrigger
struct UVehicleOccupant_Tank_Gunner_LeftTrigger_Params
{
	bool                                               bPressed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.TurretZoomInput
struct UVehicleOccupant_Tank_Turret_TurretZoomInput_Params
{
	float                                              Input;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.TurretYawInput
struct UVehicleOccupant_Tank_Turret_TurretYawInput_Params
{
	float                                              Input;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.TurretPitchInput
struct UVehicleOccupant_Tank_Turret_TurretPitchInput_Params
{
	float                                              Input;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.ServerSetTurretRotation
struct UVehicleOccupant_Tank_Turret_ServerSetTurretRotation_Params
{
	struct FVector2D                                   TurretRot;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScopeFOV;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.RightTriggerPressed
struct UVehicleOccupant_Tank_Turret_RightTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Turret.OnAdvancedVehicleSettingsChanged
struct UVehicleOccupant_Tank_Turret_OnAdvancedVehicleSettingsChanged_Params
{
	bool                                               bUseAdvanced;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.LeftTriggerPressed
struct UVehicleOccupant_Tank_Turret_LeftTriggerPressed_Params
{
};

// Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretYaw
struct UVehicleOccupant_Tank_Turret_AddTurretYaw_Params
{
	float                                              Yaw;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleOccupant_Tank_Turret.AddTurretPitch
struct UVehicleOccupant_Tank_Turret_AddTurretPitch_Params
{
	float                                              Pitch;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleSpawner.VehicleDestroyed
struct AVehicleSpawner_VehicleDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VehicleSpawner.StopVehicleSpawner
struct AVehicleSpawner_StopVehicleSpawner_Params
{
};

// Function Pavlov.VehicleSpawner.StartVehicleSpawner
struct AVehicleSpawner_StartVehicleSpawner_Params
{
};

// Function Pavlov.VehicleSpawner.OnGetVehicleClass
struct AVehicleSpawner_OnGetVehicleClass_Params
{
	class UClass*                                      VehicleClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceComponent.OnEnvelopeValue
struct UVoiceComponent_OnEnvelopeValue_Params
{
	class USoundWave*                                  PlayingSoundWave;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Rocket.OnDetonation
struct ARocket_OnDetonation_Params
{
	struct FTransform                                  DecalTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.Scoreboard.OnScriptingReady
struct AScoreboard_OnScriptingReady_Params
{
};

// Function Pavlov.Scoreboard.OnReadyForBindings
struct AScoreboard_OnReadyForBindings_Params
{
};

// Function Pavlov.Scoreboard.OnAvatarUpdated
struct AScoreboard_OnAvatarUpdated_Params
{
	struct FString                                     ProductId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AvatarTexture;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowser.Update
struct UServerBrowser_Update_Params
{
	bool                                               bUpdatePings;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowser.OrderServerListByPlayerCount
struct UServerBrowser_OrderServerListByPlayerCount_Params
{
	bool                                               bDescending;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowser.GenerateSortedCombinedList
struct UServerBrowser_GenerateSortedCombinedList_Params
{
	TArray<struct FPavlovServerInfo>                   LobbyDetails;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bAddServerList;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDescending;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCombinedServerList>                 ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.UpdateRegionFilters
struct UServerBrowserV2_UpdateRegionFilters_Params
{
	Pavlov_EOnlineRegion                               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdd;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.UpdateGMFilters
struct UServerBrowserV2_UpdateGMFilters_Params
{
	struct FString                                     Filter;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdd;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.UpdateFavoritesOnly
struct UServerBrowserV2_UpdateFavoritesOnly_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.UpdateFavoriteServer
struct UServerBrowserV2_UpdateFavoriteServer_Params
{
	class UServerContainer*                            ServerContainer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdd;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.SortServerList
struct UServerBrowserV2_SortServerList_Params
{
};

// Function Pavlov.ServerBrowserV2.SetServerSortType
struct UServerBrowserV2_SetServerSortType_Params
{
	Pavlov_EServerSortType                             SortType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.SetServerSearchType
struct UServerBrowserV2_SetServerSearchType_Params
{
	Pavlov_EServerSearchType                           SearchType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.SetHidePinLockedServers
struct UServerBrowserV2_SetHidePinLockedServers_Params
{
	bool                                               bHide;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.SetHideFullServers
struct UServerBrowserV2_SetHideFullServers_Params
{
	bool                                               bHide;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.SetHideEmptyServers
struct UServerBrowserV2_SetHideEmptyServers_Params
{
	bool                                               bHide;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.RefreshList
struct UServerBrowserV2_RefreshList_Params
{
};

// Function Pavlov.ServerBrowserV2.OnLobbyUpdateComplete
struct UServerBrowserV2_OnLobbyUpdateComplete_Params
{
};

// Function Pavlov.ServerBrowserV2.OnLobbyListUpdate
struct UServerBrowserV2_OnLobbyListUpdate_Params
{
	struct FLobbySearchResult                          SearchResult;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.OnCommunityServerPingListComplete
struct UServerBrowserV2_OnCommunityServerPingListComplete_Params
{
};

// Function Pavlov.ServerBrowserV2.OnCommunityServerPingComplete
struct UServerBrowserV2_OnCommunityServerPingComplete_Params
{
	struct FServerStatusInfo                           StatusInfo;                                                // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.JoinServer
struct UServerBrowserV2_JoinServer_Params
{
	class UServerContainer*                            ServerContainer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Pin;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.HasRegionFilter
struct UServerBrowserV2_HasRegionFilter_Params
{
	Pavlov_EOnlineRegion                               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerBrowserV2.GetServerContainerById
struct UServerBrowserV2_GetServerContainerById_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UServerContainer*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerConnector.TickServerConnect
struct UServerConnector_TickServerConnect_Params
{
};

// Function Pavlov.ServerConnector.StartConnection
struct UServerConnector_StartConnection_Params
{
};

// Function Pavlov.ServerConnector.OnStatusTimeout
struct UServerConnector_OnStatusTimeout_Params
{
};

// Function Pavlov.ServerConnector.OnStatusReceived
struct UServerConnector_OnStatusReceived_Params
{
	struct FServerStatusInfo                           StatusInfo;                                                // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerConnector.OnServerConnectMapDownloaded
struct UServerConnector_OnServerConnectMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerConnector.FailedToConnect
struct UServerConnector_FailedToConnect_Params
{
};

// Function Pavlov.ServerContainer.UpdatePing
struct UServerContainer_UpdatePing_Params
{
	int                                                NewPing;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerStatusHelper.Stop
struct UServerStatusHelper_Stop_Params
{
};

// Function Pavlov.ServerStatusHelper.SendStringToAddress
struct UServerStatusHelper_SendStringToAddress_Params
{
	struct FString                                     SendString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerStatusHelper.SendServerStatusUpdate
struct UServerStatusHelper_SendServerStatusUpdate_Params
{
	struct FString                                     Pin;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerStatusHelper.SendDataToAddress
struct UServerStatusHelper_SendDataToAddress_Params
{
	struct FServerStatusMsg                            SendMsg;                                                   // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerStatusHelper.IsConnected
struct UServerStatusHelper_IsConnected_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerStatusHelper.GetServerStatusInfo
struct UServerStatusHelper_GetServerStatusInfo_Params
{
	struct FString                                     Pin;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FServerStatusInfo                           StatusInfo;                                                // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerStatusHelper.GetServerInfo
struct UServerStatusHelper_GetServerInfo_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Pin;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoCloseTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.ServerStatusHelper.DataToString
struct UServerStatusHelper_DataToString_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Shell.SpawnHitEffect
struct AShell_SpawnHitEffect_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceRouter.ServerOnVoice
struct AVoiceRouter_ServerOnVoice_Params
{
	struct FPavlovVoicePacket                          VoicePacket;                                               // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceRouter.OnEncodedVoiceData
struct AVoiceRouter_OnEncodedVoiceData_Params
{
	TArray<unsigned char>                              EncodedVoiceData;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceRouter.ClientOnVoiceBunch
struct AVoiceRouter_ClientOnVoiceBunch_Params
{
	struct FVoicePacketBunch                           VoiceBunch;                                                // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceSource.SetCapture
struct UVoiceSource_SetCapture_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceSource.ResetCaptureDevice
struct UVoiceSource_ResetCaptureDevice_Params
{
	struct FString                                     DeviceName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceSource.IsCapturing
struct UVoiceSource_IsCapturing_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.VoiceSource.IsBroadcasting
struct UVoiceSource_IsBroadcasting_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Vote.OnVoteEnded
struct AVote_OnVoteEnded_Params
{
	bool                                               bSucceeded;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Vote.MulticastOnVoteEnded
struct AVote_MulticastOnVoteEnded_Params
{
	bool                                               bSucceeded;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Vote.GetVotePromptMessage
struct AVote_GetVotePromptMessage_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.Watch.OnKillfeedEntry
struct UWatch_OnKillfeedEntry_Params
{
	struct FKillfeedEntry                              NewEntry;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Pavlov.Watch.OnKillConfirmationPush
struct UWatch_OnKillConfirmationPush_Params
{
	class APavlovPlayerState*                          Victim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Watch.GetWatchAttachComponent
struct UWatch_GetWatchAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Waypoint.GetNextWaypointTo
struct AWaypoint_GetNextWaypointTo_Params
{
	class AWaypoint*                                   TargetWaypoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWaypoint*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Waypoint.GetClosestWaypoint
struct AWaypoint_GetClosestWaypoint_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyLeaf;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseNavMesh;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWaypoint*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.WeaponFilterData.GetRandomRifle
struct UWeaponFilterData_GetRandomRifle_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.WeaponFilterData.GetRandomPistol
struct UWeaponFilterData_GetRandomPistol_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.Vote
struct UWorkshop_Vote_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUp;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.Unsubscribe
struct UWorkshop_Unsubscribe_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.SubscribeTo
struct UWorkshop_SubscribeTo_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.RequestUserVote
struct UWorkshop_RequestUserVote_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.QueryForSpecificCustomMaps
struct UWorkshop_QueryForSpecificCustomMaps_Params
{
	TArray<struct FName>                               UniqueIds;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.QueryForCustomMaps
struct UWorkshop_QueryForCustomMaps_Params
{
	Pavlov_EWorkshopQueryType                          QueryType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.QueryDownloadProgress
struct UWorkshop_QueryDownloadProgress_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.OnCustomMapDownloaded
struct UWorkshop_OnCustomMapDownloaded_Params
{
	bool                                               bSucceed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.OnAfterMount
struct UWorkshop_OnAfterMount_Params
{
};

// Function Pavlov.Workshop.IsSubscribedTo
struct UWorkshop_IsSubscribedTo_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.IsDownloadingMap
struct UWorkshop_IsDownloadingMap_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.IsCustomMapId
struct UWorkshop_IsCustomMapId_Params
{
	struct FString                                     CustomMapId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.GetPreviewTexture
struct UWorkshop_GetPreviewTexture_Params
{
	struct FName                                       ID;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.GetCurrentDownloadId
struct UWorkshop_GetCurrentDownloadId_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.DownloadTest
struct UWorkshop_DownloadTest_Params
{
};

// Function Pavlov.Workshop.DownloadCustomMap
struct UWorkshop_DownloadCustomMap_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Workshop.CheckForDownload
struct UWorkshop_CheckForDownload_Params
{
};

// Function Pavlov.WoundAux.GetAvatarSkin
struct AWoundAux_GetAvatarSkin_Params
{
	class UAvatarSkin*                                 ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.WoundAux.GetAttachSocket
struct AWoundAux_GetAttachSocket_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.WoundComponent.UpdateBaseMesh
struct UWoundComponent_UpdateBaseMesh_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               UpdateMesh;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.WoundComponent.SetMasterPoseComponent
struct UWoundComponent_SetMasterPoseComponent_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.WoundComponent.ResetWounds
struct UWoundComponent_ResetWounds_Params
{
};

// Function Pavlov.WoundComponent.ReportHit
struct UWoundComponent_ReportHit_Params
{
	struct FWoundInfo                                  WoundInfo;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.WoundComponent.GetBoneState
struct UWoundComponent_GetBoneState_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWoundBoneState                             ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.WoundComponent.ApplyInheritedCustomDepthValues
struct UWoundComponent_ApplyInheritedCustomDepthValues_Params
{
	class UMeshComponent*                              MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.WoundComponent.AddMesh
struct UWoundComponent_AddMesh_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Zombie.OnWoundMaterialCreated
struct AZombie_OnWoundMaterialCreated_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Zombie.MulticastOnRadialDeath
struct AZombie_MulticastOnRadialDeath_Params
{
	struct FVector_NetQuantize                         Origin;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.Zombie.MulticastOnHit
struct AZombie_MulticastOnHit_Params
{
	struct FZombieHitInfo                              HitInfo;                                                   // 0x0000(0x0038)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Pavlov.Zombie.GetWoundComponent
struct AZombie_GetWoundComponent_Params
{
	class UWoundComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Pavlov.Zombie.ApplyLastHitEffect
struct AZombie_ApplyLastHitEffect_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
