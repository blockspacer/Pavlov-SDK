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

// Function PavlovProxy.Pavlov_CustomItem.SetPickDisabled
struct APavlov_CustomItem_SetPickDisabled_Params
{
	bool                                               bDisabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_CustomItem.OwnerDestroyed
struct APavlov_CustomItem_OwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_CustomItem.OnUsed
struct APavlov_CustomItem_OnUsed_Params
{
	bool                                               bJustPicked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_CustomItem.OnUse
struct APavlov_CustomItem_OnUse_Params
{
};

// Function PavlovProxy.Pavlov_CustomItem.OnPickup
struct APavlov_CustomItem_OnPickup_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDominant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnPickDisabled__DelegateSignature
struct APavlov_CustomItem_OnPickDisabled__DelegateSignature_Params
{
	bool                                               bDisabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetState__DelegateSignature
struct APavlov_CustomItem_OnGetState__DelegateSignature_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetPawn__DelegateSignature
struct APavlov_CustomItem_OnGetPawn__DelegateSignature_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_CustomItem.OnDropItem__DelegateSignature
struct APavlov_CustomItem_OnDropItem__DelegateSignature_Params
{
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_CustomItem.OnDrop
struct APavlov_CustomItem_OnDrop_Params
{
};

// Function PavlovProxy.Pavlov_CustomItem.GetOwningPawn
struct APavlov_CustomItem_GetOwningPawn_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_CustomItem.GetItemState
struct APavlov_CustomItem_GetItemState_Params
{
	PavlovProxy_EProxyItemState                        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_CustomItem.Drop
struct APavlov_CustomItem_Drop_Params
{
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_CustomItem.CanPickupItem
struct APavlov_CustomItem_CanPickupItem_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.TTTRoundEndSoundEnabled
struct APavlov_GameLogic_TTTRoundEndSoundEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnVehicleAsync
struct APavlov_GameLogic_SpawnVehicleAsync_Params
{
	struct FScriptDelegate                             OnSpawnComplete;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       VehicleID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DespawnTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnVehicle
struct APavlov_GameLogic_SpawnVehicle_Params
{
	struct FName                                       VehicleID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrateAtTransform
struct APavlov_GameLogic_SpawnLootCrateAtTransform_Params
{
	struct FName                                       LootCrateID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      LootCrate;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrate
struct APavlov_GameLogic_SpawnLootCrate_Params
{
	struct FName                                       LootCrateID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnItemWRef
struct APavlov_GameLogic_SpawnItemWRef_Params
{
	struct FPavlovItemSpawnParams                      Params;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Item;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnItem
struct APavlov_GameLogic_SpawnItem_Params
{
	struct FPavlovItemSpawnParams                      Params;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnChicken
struct APavlov_GameLogic_SpawnChicken_Params
{
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ACharacter*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnAttachments
struct APavlov_GameLogic_SpawnAttachments_Params
{
	struct FPavlovAttachmentSpawnParams                Params;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns
struct APavlov_GameLogic_SpawnAndPosessPawns_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.Spawn
struct APavlov_GameLogic_Spawn_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAsGhost;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetZombiesToAutoSpawn
struct APavlov_GameLogic_SetZombiesToAutoSpawn_Params
{
	int                                                TotalZombies;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetZombieAutoSpawnProperties
struct APavlov_GameLogic_SetZombieAutoSpawnProperties_Params
{
	float                                              BatchTimeMin;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BatchTimeMax;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZBatchSize;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxZCount;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetZBodyCount
struct APavlov_GameLogic_SetZBodyCount_Params
{
	int                                                BodyCount;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetTeamCash
struct APavlov_GameLogic_SetTeamCash_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetRoundState
struct APavlov_GameLogic_SetRoundState_Params
{
	PavlovProxy_EPavlovRoundState                      State;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality
struct APavlov_GameLogic_SetPlayerVitality_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Health;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Armour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Helmet;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam
struct APavlov_GameLogic_SetPlayerTeam_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag
struct APavlov_GameLogic_SetPlayerGag_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash
struct APavlov_GameLogic_SetPlayerCash_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled
struct APavlov_GameLogic_SetPlayerBuyingEnabled_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BuyZoneMaxDistance;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled
struct APavlov_GameLogic_SetMovementDisabled_Params
{
	bool                                               bDisabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties
struct APavlov_GameLogic_SetGameModeProperties_Params
{
	struct FPavlovGameModeProperties                   Properties;                                                // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetFallDamage
struct APavlov_GameLogic_SetFallDamage_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash
struct APavlov_GameLogic_SetEveryoneCash_Params
{
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.SetCashPerZombieKill
struct APavlov_GameLogic_SetCashPerZombieKill_Params
{
	int                                                Cash;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp
struct APavlov_GameLogic_PostRoundCleanUp_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnZombieKilled
struct APavlov_GameLogic_OnZombieKilled_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACharacter*                                  Zombie;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoSpawned;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged
struct APavlov_GameLogic_OnRoundStateChanged_Params
{
	PavlovProxy_EPavlovRoundState                      OldState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPavlovRoundState                      NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
struct APavlov_GameLogic_OnRoundEnd_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
struct APavlov_GameLogic_OnRoundBegin_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned
struct APavlov_GameLogic_OnPlayerSpawned_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer
struct APavlov_GameLogic_OnPlayerLeftServer_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled
struct APavlov_GameLogic_OnPlayerKilled_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeadshot;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KilledByItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer
struct APavlov_GameLogic_OnPlayerJoinedServer_Params
{
	struct FPavlovPlayerStatus                         PlayerStatus;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.OnCustomRconCommand
struct APavlov_GameLogic_OnCustomRconCommand_Params
{
	struct FString                                     RconCommand;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit
struct APavlov_GameLogic_OnCustomGameModeInit_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam
struct APavlov_GameLogic_OnAssignTeam_Params
{
	struct FPavlovPlayerStatus                         Status;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
struct APavlov_GameLogic_MulticastOnRoundStateChanged_Params
{
	bool                                               bStarting;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.ManuallySpawnZombies
struct APavlov_GameLogic_ManuallySpawnZombies_Params
{
	TArray<struct FTransform>                          RandomLocations;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ACharacter*>                          Zombies;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.KillAllZombies
struct APavlov_GameLogic_KillAllZombies_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.KickPlayer
struct APavlov_GameLogic_KickPlayer_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBan;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore
struct APavlov_GameLogic_IncrementTeamScore_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore
struct APavlov_GameLogic_IncrementPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash
struct APavlov_GameLogic_GiveTeamCash_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash
struct APavlov_GameLogic_GivePlayerCash_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash
struct APavlov_GameLogic_GiveEveryoneCash_Params
{
	int                                                CashAmmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GetZsToAutoSpawn
struct APavlov_GameLogic_GetZsToAutoSpawn_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GetZAliveCount
struct APavlov_GameLogic_GetZAliveCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform
struct APavlov_GameLogic_GetSpawnTransform_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GetRoundState
struct APavlov_GameLogic_GetRoundState_Params
{
	PavlovProxy_EPavlovRoundState                      State;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand
struct APavlov_GameLogic_GetPlayerHand_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDominant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
struct APavlov_GameLogic_GetPavlovGameModeType_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPavlovGameModeType                    ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties
struct APavlov_GameLogic_GetGameModeProperties_Params
{
	struct FPavlovGameModeProperties                   Properties;                                                // 0x0000(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GameLogic.EndTTTRound
struct APavlov_GameLogic_EndTTTRound_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.CleanupZombieBodies
struct APavlov_GameLogic_CleanupZombieBodies_Params
{
};

// Function PavlovProxy.Pavlov_GameLogic.AddZombiesToAutoSpawn
struct APavlov_GameLogic_AddZombiesToAutoSpawn_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalAmountToSpawn;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.SetLimitedAmmoType
struct UPavlov_GlobalInfo_SetLimitedAmmoType_Params
{
	PavlovProxy_ELimitedAmmoType                       AmmoType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnLimitedAmmoModeChanged__DelegateSignature
struct UPavlov_GlobalInfo_OnLimitedAmmoModeChanged__DelegateSignature_Params
{
	PavlovProxy_ELimitedAmmoType                       LimitedAmmoMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetTTTPlayerInfo__DelegateSignature
struct UPavlov_GlobalInfo_OnGetTTTPlayerInfo__DelegateSignature_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTTTPlayerInfo                              ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetLootMesh__DelegateSignature
struct UPavlov_GlobalInfo_OnGetLootMesh__DelegateSignature_Params
{
	struct FAsyncLoadLootMesh                          LoadLootMesh;                                              // 0x0000(0x0018)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetAllTTTPlayersInfo__DelegateSignature
struct UPavlov_GlobalInfo_OnGetAllTTTPlayersInfo__DelegateSignature_Params
{
	TArray<struct FTTTPlayerInfo>                      ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.GetTTTPlayerInfo
struct UPavlov_GlobalInfo_GetTTTPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTTTPlayerInfo                              ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.GetPHTaunts
struct UPavlov_GlobalInfo_GetPHTaunts_Params
{
	class UPavlov_PHTaunts*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.GetPHTauntAttenuation
struct UPavlov_GlobalInfo_GetPHTauntAttenuation_Params
{
	class USoundAttenuation*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.GetLootMesh
struct UPavlov_GlobalInfo_GetLootMesh_Params
{
	struct FName                                       LootID;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnLootMeshLoaded;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.GetLimitedAmmoType
struct UPavlov_GlobalInfo_GetLimitedAmmoType_Params
{
	PavlovProxy_ELimitedAmmoType                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.GetAllTTTPlayersInfo
struct UPavlov_GlobalInfo_GetAllTTTPlayersInfo_Params
{
	TArray<struct FTTTPlayerInfo>                      ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.DisableVoting
struct UPavlov_GlobalInfo_DisableVoting_Params
{
	bool                                               bDisable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.DisableKillfeedBeep
struct UPavlov_GlobalInfo_DisableKillfeedBeep_Params
{
	bool                                               bDisable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.DisableAttachmentMode
struct UPavlov_GlobalInfo_DisableAttachmentMode_Params
{
	bool                                               bDisable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_GlobalInfo.AddItemToList
struct UPavlov_GlobalInfo_AddItemToList_Params
{
	struct FItemList                                   Item;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_HandProxy.TriggerDown
struct UPavlov_HandProxy_TriggerDown_Params
{
};

// Function PavlovProxy.Pavlov_HandProxy.ReplicateInteract_Server
struct UPavlov_HandProxy_ReplicateInteract_Server_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_HandProxy.Grab
struct UPavlov_HandProxy_Grab_Params
{
};

// Function PavlovProxy.Pavlov_HandProxy.GetPlayerProxy
struct UPavlov_HandProxy_GetPlayerProxy_Params
{
	class APavlov_PlayerProxy*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_HandProxy.GetOverlappingInteractInterface
struct UPavlov_HandProxy_GetOverlappingInteractInterface_Params
{
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractBox.InteractServer
struct UPavlov_InteractBox_InteractServer_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractBox.InteractClient
struct UPavlov_InteractBox_InteractClient_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractInterface.InteractServer
struct UPavlov_InteractInterface_InteractServer_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractInterface.InteractClient
struct UPavlov_InteractInterface_InteractClient_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractServer
struct UPavlov_InteractSkeletalMesh_InteractServer_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractClient
struct UPavlov_InteractSkeletalMesh_InteractClient_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractStaticMesh.InteractServer
struct UPavlov_InteractStaticMesh_InteractServer_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_InteractStaticMesh.InteractClient
struct UPavlov_InteractStaticMesh_InteractClient_Params
{
	PavlovProxy_EInteractType                          InteractType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           HandProxy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InteractObj;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.SendMsg
struct UPavlov_Library_SendMsg_Params
{
	struct FMessage                                    Msg;                                                       // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.SendAllMsg
struct UPavlov_Library_SendAllMsg_Params
{
	struct FMessage                                    Msg;                                                       // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.SaveStringToFile
struct UPavlov_Library_SaveStringToFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowOverwrite;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.SaveStringArray
struct UPavlov_Library_SaveStringArray_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             SaveArray;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowOverwrite;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.LogToConsole
struct UPavlov_Library_LogToConsole_Params
{
	struct FString                                     LogMsg;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bError;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.LoadStringFromFile
struct UPavlov_Library_LoadStringFromFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.LoadStringArray
struct UPavlov_Library_LoadStringArray_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Strings;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.IsCommunityServer
struct UPavlov_Library_IsCommunityServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.HasPlayerProxy
struct UPavlov_Library_HasPlayerProxy_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.HasPlayerInfo
struct UPavlov_Library_HasPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.HasMsgHandler
struct UPavlov_Library_HasMsgHandler_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetWhitelist
struct UPavlov_Library_GetWhitelist_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Whitelist;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetPlayerProxy
struct UPavlov_Library_GetPlayerProxy_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlov_PlayerProxy*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetPlayerInfo
struct UPavlov_Library_GetPlayerInfo_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_PlayerInfo*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetMsgHandler
struct UPavlov_Library_GetMsgHandler_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_MsgHandler*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetModerators
struct UPavlov_Library_GetModerators_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Mods;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetGlobalInfo
struct UPavlov_Library_GetGlobalInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_GlobalInfo*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetGameLogic
struct UPavlov_Library_GetGameLogic_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlov_GameLogic*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetDayOfWeek
struct UPavlov_Library_GetDayOfWeek_Params
{
	struct FDateTime                                   DateTime;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EDay                                   DayOfTheWeek;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetCustomItemByClass
struct UPavlov_Library_GetCustomItemByClass_Params
{
	class AActor*                                      Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CustomItemClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlov_CustomItem*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.GetBanListInternal
struct UPavlov_Library_GetBanListInternal_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BanList;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.AddPlayerProxy
struct UPavlov_Library_AddPlayerProxy_Params
{
	class UClass*                                      PlayerProxyClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlov_PlayerProxy*                         PlayerProxy;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.AddPlayerInfo
struct UPavlov_Library_AddPlayerInfo_Params
{
	class UClass*                                      PlayerInfoClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_PlayerInfo*                          PlayerInfo;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_Library.AddMsgHandler
struct UPavlov_Library_AddMsgHandler_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_MsgHandler*                          MsgHandler;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.SetMaxMessages
struct UPavlov_MsgHandler_SetMaxMessages_Params
{
	int                                                Max;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.SendMessageToTeam
struct UPavlov_MsgHandler_SendMessageToTeam_Params
{
	struct FMessage                                    Msg;                                                       // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.SendMessage
struct UPavlov_MsgHandler_SendMessage_Params
{
	struct FMessage                                    Msg;                                                       // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.LocalSendMessage
struct UPavlov_MsgHandler_LocalSendMessage_Params
{
	struct FMessage                                    Msg;                                                       // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.GetPlayerState
struct UPavlov_MsgHandler_GetPlayerState_Params
{
	class APlayerState*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.GetMessages
struct UPavlov_MsgHandler_GetMessages_Params
{
	TArray<struct FMessage>                            ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.GetMaxMessages
struct UPavlov_MsgHandler_GetMaxMessages_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_MsgHandler.Client_ReceivedMsg
struct UPavlov_MsgHandler_Client_ReceivedMsg_Params
{
	struct FMessage                                    Msg;                                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PHTaunts.GetRandomTaunt
struct UPavlov_PHTaunts_GetRandomTaunt_Params
{
};

// Function PavlovProxy.Pavlov_PlayerInfo.SetRadioChannel
struct UPavlov_PlayerInfo_SetRadioChannel_Params
{
	int                                                NewRadioChannel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetVRDevice__DelegateSignature
struct UPavlov_PlayerInfo_OnGetVRDevice__DelegateSignature_Params
{
	PavlovProxy_EVRDevice                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetTeamId__DelegateSignature
struct UPavlov_PlayerInfo_OnGetTeamId__DelegateSignature_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnDisableFallSound__DelegateSignature
struct UPavlov_PlayerInfo_OnDisableFallSound__DelegateSignature_Params
{
};

// Function PavlovProxy.Pavlov_PlayerInfo.GetVRDevice
struct UPavlov_PlayerInfo_GetVRDevice_Params
{
	PavlovProxy_EVRDevice                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerInfo.GetTeam
struct UPavlov_PlayerInfo_GetTeam_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerInfo.GetPlayerState
struct UPavlov_PlayerInfo_GetPlayerState_Params
{
	class APlayerState*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerInfo.DisableFallSound
struct UPavlov_PlayerInfo_DisableFallSound_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.StartSkinRetryTimer
struct APavlov_PlayerProxy_StartSkinRetryTimer_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetVoiceAttenuation
struct APavlov_PlayerProxy_SetVoiceAttenuation_Params
{
	class USoundAttenuation*                           Attenuation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetSkinName
struct APavlov_PlayerProxy_SetSkinName_Params
{
	struct FName                                       NewSkin;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerSkin
struct APavlov_PlayerProxy_SetPlayerSkin_Params
{
	struct FName                                       Skin;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerCullDistance
struct APavlov_PlayerProxy_SetPlayerCullDistance_Params
{
	float                                              CullDistance;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetPainkillerDetails
struct APavlov_PlayerProxy_SetPainkillerDetails_Params
{
	class AActor*                                      Painkillers;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfPainkillers;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealPerPainkiller;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.SetNumOfSyringeRevives
struct APavlov_PlayerProxy_SetNumOfSyringeRevives_Params
{
	class AActor*                                      Syringe;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfRevives;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.RevivePlayer
struct APavlov_PlayerProxy_RevivePlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.RemoveAmmo
struct APavlov_PlayerProxy_RemoveAmmo_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.PlayerDied
struct APavlov_PlayerProxy_PlayerDied_Params
{
	class AActor*                                      KilledActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.PlayerDestroyed
struct APavlov_PlayerProxy_PlayerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OwnerDied
struct APavlov_PlayerProxy_OwnerDied_Params
{
	class AActor*                                      KilledActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChangeFailed
struct APavlov_PlayerProxy_OnSkinChangeFailed_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChanged
struct APavlov_PlayerProxy_OnSkinChanged_Params
{
	struct FName                                       Skin;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetSyringeRevives__DelegateSignature
struct APavlov_PlayerProxy_OnSetSyringeRevives__DelegateSignature_Params
{
	class AActor*                                      Syringe;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfRevives;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPlayerSkin__DelegateSignature
struct APavlov_PlayerProxy_OnSetPlayerSkin__DelegateSignature_Params
{
	struct FName                                       PlayerSkin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPainkillerDetails__DelegateSignature
struct APavlov_PlayerProxy_OnSetPainkillerDetails__DelegateSignature_Params
{
	class AActor*                                      Painkillers;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfPills;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmountPerHeal;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetAttenuation__DelegateSignature
struct APavlov_PlayerProxy_OnSetAttenuation__DelegateSignature_Params
{
	class USoundAttenuation*                           Attenuation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRevivePlayer__DelegateSignature
struct APavlov_PlayerProxy_OnRevivePlayer__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnRep_PlayerSkinChanged
struct APavlov_PlayerProxy_OnRep_PlayerSkinChanged_Params
{
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRemoveAmmo__DelegateSignature
struct APavlov_PlayerProxy_OnRemoveAmmo__DelegateSignature_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.OnPlayerDeath
struct APavlov_PlayerProxy_OnPlayerDeath_Params
{
	class AActor*                                      KilledActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnLeaveVehicle__DelegateSignature
struct APavlov_PlayerProxy_OnLeaveVehicle__DelegateSignature_Params
{
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsPickupDisabled__DelegateSignature
struct APavlov_PlayerProxy_OnIsPickupDisabled__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsLobbyLeader__DelegateSignature
struct APavlov_PlayerProxy_OnIsLobbyLeader__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsInVehicle__DelegateSignature
struct APavlov_PlayerProxy_OnIsInVehicle__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasItem__DelegateSignature
struct APavlov_PlayerProxy_OnHasItem__DelegateSignature_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasAmmo__DelegateSignature
struct APavlov_PlayerProxy_OnHasAmmo__DelegateSignature_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetSkinSkeleton__DelegateSignature
struct APavlov_PlayerProxy_OnGetSkinSkeleton__DelegateSignature_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetNumPainkillerPills__DelegateSignature
struct APavlov_PlayerProxy_OnGetNumPainkillerPills__DelegateSignature_Params
{
	class AActor*                                      Painkillers;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetNumOfSyringeRevives__DelegateSignature
struct APavlov_PlayerProxy_OnGetNumOfSyringeRevives__DelegateSignature_Params
{
	class AActor*                                      Syringe;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetInventorySlotVis__DelegateSignature
struct APavlov_PlayerProxy_OnGetInventorySlotVis__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetCompatibleSlot__DelegateSignature
struct APavlov_PlayerProxy_OnGetCompatibleSlot__DelegateSignature_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAttachments__DelegateSignature
struct APavlov_PlayerProxy_OnGetAttachments__DelegateSignature_Params
{
	class AActor*                                      Weapon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAmmoId__DelegateSignature
struct APavlov_PlayerProxy_OnGetAmmoId__DelegateSignature_Params
{
	class AActor*                                      Weapon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItems__DelegateSignature
struct APavlov_PlayerProxy_OnDropItems__DelegateSignature_Params
{
	bool                                               bDominant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItem__DelegateSignature
struct APavlov_PlayerProxy_OnDropItem__DelegateSignature_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromHandsOnly;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropHeldItems__DelegateSignature
struct APavlov_PlayerProxy_OnDropHeldItems__DelegateSignature_Params
{
	bool                                               bDominant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoth;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDisablePickup__DelegateSignature
struct APavlov_PlayerProxy_OnDisablePickup__DelegateSignature_Params
{
	bool                                               bDisablePickup;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnCanRevive__DelegateSignature
struct APavlov_PlayerProxy_OnCanRevive__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnAddAmmo__DelegateSignature
struct APavlov_PlayerProxy_OnAddAmmo__DelegateSignature_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.LeaveVehicle
struct APavlov_PlayerProxy_LeaveVehicle_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.IsPickupDisabled
struct APavlov_PlayerProxy_IsPickupDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.IsLobbyLeader
struct APavlov_PlayerProxy_IsLobbyLeader_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.IsInVehicle
struct APavlov_PlayerProxy_IsInVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.InitializeClient
struct APavlov_PlayerProxy_InitializeClient_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.HasItem
struct APavlov_PlayerProxy_HasItem_Params
{
	struct FName                                       ItemId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasItem;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Item;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.HasAmmo
struct APavlov_PlayerProxy_HasAmmo_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoAmount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAttachments
struct APavlov_PlayerProxy_GetWeaponAttachments_Params
{
	class AActor*                                      Weapon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Attachments;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAmmoId
struct APavlov_PlayerProxy_GetWeaponAmmoId_Params
{
	class AActor*                                      Weapon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetVoiceAttenuation
struct APavlov_PlayerProxy_GetVoiceAttenuation_Params
{
	class USoundAttenuation*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetSkinSkeleton
struct APavlov_PlayerProxy_GetSkinSkeleton_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerVitality
struct APavlov_PlayerProxy_GetPlayerVitality_Params
{
	struct FPlayerVitality                             PlayerVitality;                                            // 0x0000(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkin
struct APavlov_PlayerProxy_GetPlayerSkin_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkeleton
struct APavlov_PlayerProxy_GetPlayerSkeleton_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetPawn
struct APavlov_PlayerProxy_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetNumOfSyringeRevives
struct APavlov_PlayerProxy_GetNumOfSyringeRevives_Params
{
	class AActor*                                      Syringe;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfRevives;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetNumOfPainkillerPills
struct APavlov_PlayerProxy_GetNumOfPainkillerPills_Params
{
	class AActor*                                      Painkillers;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOfPills;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetHeldItem
struct APavlov_PlayerProxy_GetHeldItem_Params
{
	bool                                               bDominantHand;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasItem;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerItem                                 Item;                                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetCustomHand
struct APavlov_PlayerProxy_GetCustomHand_Params
{
	struct FName                                       SkinName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetCompatibleSlot
struct APavlov_PlayerProxy_GetCompatibleSlot_Params
{
	struct FName                                       ItemId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetAllItems
struct APavlov_PlayerProxy_GetAllItems_Params
{
	TArray<struct FPlayerItem>                         Items;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.GetAllInventoryItems
struct APavlov_PlayerProxy_GetAllInventoryItems_Params
{
	TArray<struct FInventoryItem>                      InvItems;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.EnableClientInput
struct APavlov_PlayerProxy_EnableClientInput_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.DropItem
struct APavlov_PlayerProxy_DropItem_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroy;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromHandsOnly;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DropHeld
struct APavlov_PlayerProxy_DropHeld_Params
{
	PavlovProxy_EHands                                 hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroyItems;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DropAll
struct APavlov_PlayerProxy_DropAll_Params
{
	bool                                               bDestroyItems;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInventoryOnly;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DisablePickup
struct APavlov_PlayerProxy_DisablePickup_Params
{
	bool                                               bDisablePickup;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.DisableClientInput
struct APavlov_PlayerProxy_DisableClientInput_Params
{
};

// Function PavlovProxy.Pavlov_PlayerProxy.CustomRemoveAmmo
struct APavlov_PlayerProxy_CustomRemoveAmmo_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemoveAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.CustomGiveAmmoForBuy
struct APavlov_PlayerProxy_CustomGiveAmmoForBuy_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GunId;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MagMaxAmmo;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.CustomGetAmmoAmount
struct APavlov_PlayerProxy_CustomGetAmmoAmount_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.CustomAddAmmo
struct APavlov_PlayerProxy_CustomAddAmmo_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.CanRevive
struct APavlov_PlayerProxy_CanRevive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PlayerProxy.AddAmmo
struct APavlov_PlayerProxy_AddAmmo_Params
{
	struct FName                                       AmmoId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmountToAdd;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnSwitchedTeams_Server__DelegateSignature
struct APavlov_PushBombObjective_OnSwitchedTeams_Server__DelegateSignature_Params
{
};

// DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnPushObjectiveStateChanged__DelegateSignature
struct APavlov_PushBombObjective_OnPushObjectiveStateChanged__DelegateSignature_Params
{
	PavlovProxy_EPushObjectiveState                    ObjectiveState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnGetObjectiveState__DelegateSignature
struct APavlov_PushBombObjective_OnGetObjectiveState__DelegateSignature_Params
{
	PavlovProxy_EPushObjectiveState                    ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnGetActiveObjectiveID__DelegateSignature
struct APavlov_PushBombObjective_OnGetActiveObjectiveID__DelegateSignature_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PushBombObjective.GetObjectiveState
struct APavlov_PushBombObjective_GetObjectiveState_Params
{
	PavlovProxy_EPushObjectiveState                    ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PushBombObjective.GetActiveObjectiveID
struct APavlov_PushBombObjective_GetActiveObjectiveID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.Pavlov_PushLoadoutProxy.OnLoadoutTaken
struct APavlov_PushLoadoutProxy_OnLoadoutTaken_Params
{
	struct FName                                       LoadoutSlot;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.PavlovProxyStatics.GetTeamScore
struct UPavlovProxyStatics_GetTeamScore_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn
struct UPavlovProxyStatics_GetPavlovPlayerStatusByPawn_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPavlovPlayerStatus                         PlayerStatus;                                              // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               bSucceeded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus
struct UPavlovProxyStatics_GetPavlovPlayerStatus_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPavlovPlayerStatus                         PlayerStatus;                                              // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               bSucceeded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
