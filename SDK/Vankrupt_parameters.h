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

// Function Vankrupt.VCollisionEffectComponent.ResetCooldown
struct UVCollisionEffectComponent_ResetCooldown_Params
{
};

// Function Vankrupt.VCollisionEffectComponent.OnActorHit
struct UVCollisionEffectComponent_OnActorHit_Params
{
	class AActor*                                      SelfActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VDecalComponent.Project
struct UVDecalComponent_Project_Params
{
};

// Function Vankrupt.VDecalComponent.CheckTaskCompletion
struct UVDecalComponent_CheckTaskCompletion_Params
{
};

// Function Vankrupt.VHealthComponent.SetDamageMultiplier
struct UVHealthComponent_SetDamageMultiplier_Params
{
	float                                              Multiplier;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VHealthComponent.Revive
struct UVHealthComponent_Revive_Params
{
};

// Function Vankrupt.VHealthComponent.OnTakePointDamage
struct UVHealthComponent_OnTakePointDamage_Params
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

// Function Vankrupt.VHealthComponent.OnTakeAnyDamage
struct UVHealthComponent_OnTakeAnyDamage_Params
{
	class AActor*                                      DamagedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VHealthComponent.OnRep_Dead
struct UVHealthComponent_OnRep_Dead_Params
{
};

// Function Vankrupt.VHealthComponent.MulticastOnRevived
struct UVHealthComponent_MulticastOnRevived_Params
{
};

// Function Vankrupt.VHealthComponent.MulticastOnKilledWithData
struct UVHealthComponent_MulticastOnKilledWithData_Params
{
	struct FVKillData                                  Data;                                                      // 0x0000(0x0028)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VHealthComponent.MulticastOnKilled
struct UVHealthComponent_MulticastOnKilled_Params
{
};

// Function Vankrupt.VHealthComponent.MulticastOnHitEffect
struct UVHealthComponent_MulticastOnHitEffect_Params
{
	Vankrupt_EVHitEffect                               Effect;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VHealthComponent.Kill
struct UVHealthComponent_Kill_Params
{
};

// Function Vankrupt.VHealthComponent.GetDamageMultiplier
struct UVHealthComponent_GetDamageMultiplier_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VHealthComponent.ApplyKillImpulse
struct UVHealthComponent_ApplyKillImpulse_Params
{
};

// Function Vankrupt.VMenu.Show
struct AVMenu_Show_Params
{
};

// Function Vankrupt.VMenu.SetVisibility
struct AVMenu_SetVisibility_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VMenu.Hide
struct AVMenu_Hide_Params
{
};

// Function Vankrupt.VLobby.StartGameImpl
struct AVLobby_StartGameImpl_Params
{
};

// Function Vankrupt.VLobby.OnLeaveLobbyPrompt
struct AVLobby_OnLeaveLobbyPrompt_Params
{
	int                                                Result;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VLobby.OnGoBack
struct AVLobby_OnGoBack_Params
{
};

// Function Vankrupt.VLobby.MulticastOnLeavingLobby
struct AVLobby_MulticastOnLeavingLobby_Params
{
};

// Function Vankrupt.VLobby.MulticastOnGameStart
struct AVLobby_MulticastOnGameStart_Params
{
};

// Function Vankrupt.VLobby.LeaveLobbyImpl
struct AVLobby_LeaveLobbyImpl_Params
{
};

// Function Vankrupt.VSpawnManagerComponent.SpawnRandomly
struct UVSpawnManagerComponent_SpawnRandomly_Params
{
	class UClass*                                      CharacterClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVSpawnParams                               Params;                                                    // 0x0000(0x0003)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class ACharacter*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VSpawnManagerComponent.SpawnAt
struct UVSpawnManagerComponent_SpawnAt_Params
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      CharacterClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVSpawnParams                               Params;                                                    // 0x0000(0x0003)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class ACharacter*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VSpawnManagerComponent.Spawn
struct UVSpawnManagerComponent_Spawn_Params
{
	class UClass*                                      CharacterClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVSpawnParams                               Params;                                                    // 0x0000(0x0003)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class ACharacter*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VSpawnManagerComponent.GetSpawnTransform
struct UVSpawnManagerComponent_GetSpawnTransform_Params
{
	int                                                AgentId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOccluded;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClosest;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VSpawnManagerComponent.GetRandomSpawnTransform
struct UVSpawnManagerComponent_GetRandomSpawnTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VSpawnPoint.IsOccluded
struct AVSpawnPoint_IsOccluded_Params
{
	int                                                PlayerIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VStatics.RetrieveNews
struct UVStatics_RetrieveNews_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VStatics.LeaveGame
struct UVStatics_LeaveGame_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VStatics.IsPlayingOnline
struct UVStatics_IsPlayingOnline_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Vankrupt.VStatics.FormatTime
struct UVStatics_FormatTime_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seconds;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
