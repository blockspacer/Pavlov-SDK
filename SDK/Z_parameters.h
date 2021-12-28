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

// Function Z.AIDamageComponent.SetCanTakeDamage
struct UAIDamageComponent_SetCanTakeDamage_Params
{
	bool                                               InCanTakeDamage;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDamageComponent.ResetDamageComponent
struct UAIDamageComponent_ResetDamageComponent_Params
{
	bool                                               toState;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDamageComponent.OnRep_CanTakeDamage
struct UAIDamageComponent_OnRep_CanTakeDamage_Params
{
};

// Function Z.AIDamageComponent.MulticastDamageAplied
struct UAIDamageComponent_MulticastDamageAplied_Params
{
	struct FAIDamageResult                             DamageResult;                                              // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Z.AIDamageComponent.IncomingDamage
struct UAIDamageComponent_IncomingDamage_Params
{
	struct FAIDamageResult                             DamageResult;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Z.AIDamageComponent.GetCanTakeDamage
struct UAIDamageComponent_GetCanTakeDamage_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDamageComponent.ApplyDamage
struct UAIDamageComponent_ApplyDamage_Params
{
	struct FAIDamageResult                             DamageResult;                                              // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Z.AIDamageComponentInterface.GetAIDamageComponent
struct UAIDamageComponentInterface_GetAIDamageComponent_Params
{
	class UAIDamageComponent*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.UpdateDynamicNavLinks
struct AAIDirector_UpdateDynamicNavLinks_Params
{
};

// Function Z.AIDirector.TrickleOutAI_OverTime
struct AAIDirector_TrickleOutAI_OverTime_Params
{
};

// Function Z.AIDirector.TrickleOutAI_OnDeath
struct AAIDirector_TrickleOutAI_OnDeath_Params
{
};

// Function Z.AIDirector.TrickleOut_AndKill
struct AAIDirector_TrickleOut_AndKill_Params
{
};

// Function Z.AIDirector.TrickleInAI
struct AAIDirector_TrickleInAI_Params
{
};

// Function Z.AIDirector.TrickleIn
struct AAIDirector_TrickleIn_Params
{
};

// Function Z.AIDirector.SetDirectorMode
struct AAIDirector_SetDirectorMode_Params
{
	float                                              TrickleTimeIn;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfDesiredActiveAI;                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Z_EAIDirectorMode                                  NewDirectorState;                                          // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Z_EAISetDirectorResponse                           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.SetALLAiPooled
struct AAIDirector_SetALLAiPooled_Params
{
};

// Function Z.AIDirector.SetAllAIActive
struct AAIDirector_SetAllAIActive_Params
{
};

// Function Z.AIDirector.SetAIPoolAmount
struct AAIDirector_SetAIPoolAmount_Params
{
	int                                                NewPoolAmount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.PopulateNeighborGroups
struct AAIDirector_PopulateNeighborGroups_Params
{
};

// Function Z.AIDirector.K2_SetPlayersInPlay
struct AAIDirector_K2_SetPlayersInPlay_Params
{
	TArray<class ACharacter*>                          ListOfPlayersInPlay;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.K2_RemovePlayersInPlay
struct AAIDirector_K2_RemovePlayersInPlay_Params
{
	TArray<class ACharacter*>                          ListOfPlayersToRemove;                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.K2_RemoveAPlayerInPlay
struct AAIDirector_K2_RemoveAPlayerInPlay_Params
{
	class ACharacter*                                  PlayerToRemove;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.K2_AddPlayerToPlayList
struct AAIDirector_K2_AddPlayerToPlayList_Params
{
	class ACharacter*                                  PlayerToAdd;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.InitAIPool
struct AAIDirector_InitAIPool_Params
{
};

// Function Z.AIDirector.GetVersion
struct AAIDirector_GetVersion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.GetAIPoolAmount
struct AAIDirector_GetAIPoolAmount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.CreateAIPawnAtLocation
struct AAIDirector_CreateAIPawnAtLocation_Params
{
	struct FTransform                                  SpawnLocation;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AIDirector.AIWasKilled
struct AAIDirector_AIWasKilled_Params
{
	class AZAICharacter*                               KilledAI;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                KillerPlayerState;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.SetNumberOfMaxAISlots
struct UAISlotManager_SetNumberOfMaxAISlots_Params
{
	int                                                NumberOfslots;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.SetIsValidTarget
struct UAISlotManager_SetIsValidTarget_Params
{
	bool                                               IsValid;                                                   // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.RemoveAICharacterFromSlot
struct UAISlotManager_RemoveAICharacterFromSlot_Params
{
	class AActor*                                      Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.IsValidTarget
struct UAISlotManager_IsValidTarget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.IsActorInSlots
struct UAISlotManager_IsActorInSlots_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.HasEmptySlot
struct UAISlotManager_HasEmptySlot_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.GetNumberOfActiveSlots
struct UAISlotManager_GetNumberOfActiveSlots_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.GetMaxNumberOfAISlots
struct UAISlotManager_GetMaxNumberOfAISlots_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.AISlotManager.AssignSlotToActor
struct UAISlotManager_AssignSlotToActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.BaseAICharacter.GetMovementDirection
struct ABaseAICharacter_GetMovementDirection_Params
{
	struct FMovementDirection                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Z.ProxyPlayerCharacter.ReviveCharacter
struct AProxyPlayerCharacter_ReviveCharacter_Params
{
};

// Function Z.QueryContext_AllPlayers.ProvideActorsSet
struct UQueryContext_AllPlayers_ProvideActorsSet_Params
{
	class UObject*                                     QuerierObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ResultingActorSet;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Z.QueryContext_PlayerContext.ProvideSingleActor
struct UQueryContext_PlayerContext_ProvideSingleActor_Params
{
	class UObject*                                     QuerierObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ResultingActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.RoundInterface.ResetToDefaultState
struct URoundInterface_ResetToDefaultState_Params
{
};

// Function Z.SlotSystemInterface.GetPlayerSlotManager
struct USlotSystemInterface_GetPlayerSlotManager_Params
{
	class UAISlotManager*                              ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.ShouldDamageOtherActor
struct AZAICharacter_ShouldDamageOtherActor_Params
{
	class AActor*                                      DamageTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.SetSprinting
struct AZAICharacter_SetSprinting_Params
{
	bool                                               inIsSprinting;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.SetKnockBackState
struct AZAICharacter_SetKnockBackState_Params
{
	Z_EZKnockBackState                                 NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.SetClimbing
struct AZAICharacter_SetClimbing_Params
{
	Z_EAIClimbingState                                 inIsClimbing;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.SetCanSprint
struct AZAICharacter_SetCanSprint_Params
{
	bool                                               inCanSprint;                                               // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.SetAttackState
struct AZAICharacter_SetAttackState_Params
{
	Z_EAIAttackState                                   AttackingState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.ReEnableMovement
struct AZAICharacter_ReEnableMovement_Params
{
};

// Function Z.ZAICharacter.OnRep_Target
struct AZAICharacter_OnRep_Target_Params
{
};

// Function Z.ZAICharacter.OnRep_Sprint
struct AZAICharacter_OnRep_Sprint_Params
{
};

// Function Z.ZAICharacter.OnRep_Climb
struct AZAICharacter_OnRep_Climb_Params
{
};

// Function Z.ZAICharacter.OnRep_bIsDead
struct AZAICharacter_OnRep_bIsDead_Params
{
};

// Function Z.ZAICharacter.OnRep_Attacking
struct AZAICharacter_OnRep_Attacking_Params
{
};

// Function Z.ZAICharacter.OnRep_AIControllerState
struct AZAICharacter_OnRep_AIControllerState_Params
{
};

// Function Z.ZAICharacter.OnMontangeStarted
struct AZAICharacter_OnMontangeStarted_Params
{
	class UAnimMontage*                                Montange;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.OnMontangeEnded
struct AZAICharacter_OnMontangeEnded_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.OnAnimInit
struct AZAICharacter_OnAnimInit_Params
{
};

// Function Z.ZAICharacter.NewTargetSelected
struct AZAICharacter_NewTargetSelected_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAISlotManager*                              SlotManager;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.MulticastKnockBack
struct AZAICharacter_MulticastKnockBack_Params
{
	Z_EZKnockBackDirection                             Direction;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Flags;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 bY;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.KnockBack
struct AZAICharacter_KnockBack_Params
{
	Z_EZKnockBackDirection                             Direction;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.K2_KillAI
struct AZAICharacter_K2_KillAI_Params
{
};

// Function Z.ZAICharacter.GetTarget
struct AZAICharacter_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.GetSprinting
struct AZAICharacter_GetSprinting_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.GetMeshAndAnimInstance
struct AZAICharacter_GetMeshAndAnimInstance_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AnimInstance;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.GetKnockBackState
struct AZAICharacter_GetKnockBackState_Params
{
	Z_EZKnockBackState                                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.GetCurrentAIstate
struct AZAICharacter_GetCurrentAIstate_Params
{
	Z_EAIState                                         ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.GetClimbingState
struct AZAICharacter_GetClimbingState_Params
{
	Z_EAIClimbingState                                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.GetAttackState
struct AZAICharacter_GetAttackState_Params
{
	Z_EAIAttackState                                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAICharacter.DelayedReturnToNormalCollision
struct AZAICharacter_DelayedReturnToNormalCollision_Params
{
};

// Function Z.ZAICharacter.AttemptRandomSprint
struct AZAICharacter_AttemptRandomSprint_Params
{
};

// Function Z.ZAICharacter.AttackTargetInRange
struct AZAICharacter_AttackTargetInRange_Params
{
};

// Function Z.ZAICharacter.AIStateChange
struct AZAICharacter_AIStateChange_Params
{
	Z_EAIState                                         NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.SetState
struct AZAIController_SetState_Params
{
	Z_EAIState                                         inState;                                                   // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.SetCurrentTarget
struct AZAIController_SetCurrentTarget_Params
{
	class AActor*                                      InTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.RandomDeviationFindTarget
struct AZAIController_RandomDeviationFindTarget_Params
{
};

// Function Z.ZAIController.OnSlotsCleared
struct AZAIController_OnSlotsCleared_Params
{
};

// Function Z.ZAIController.JumpTo
struct AZAIController_JumpTo_Params
{
	struct FTransform                                  Destination;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Arc;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      JumpFromActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.IsDecelerationgOnPath
struct AZAIController_IsDecelerationgOnPath_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.HasTarget
struct AZAIController_HasTarget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.GetState
struct AZAIController_GetState_Params
{
	Z_EAIState                                         ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.GetCurrentTarget
struct AZAIController_GetCurrentTarget_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.FinishClimb
struct AZAIController_FinishClimb_Params
{
};

// Function Z.ZAIController.FindTarget
struct AZAIController_FindTarget_Params
{
};

// Function Z.ZAIController.DoJumpLaunch_PrecomputedVelocity
struct AZAIController_DoJumpLaunch_PrecomputedVelocity_Params
{
	struct FTransform                                  Destination;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Arc;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLaunchVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      JumpFromActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutAscendingTime;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutDescendingTime;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.DoJumpLaunch
struct AZAIController_DoJumpLaunch_Params
{
	struct FTransform                                  Destination;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Arc;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      JumpFromActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutAscendingTime;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutDescendingTime;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.ClimbTo
struct AZAIController_ClimbTo_Params
{
	struct FTransform                                  LedgeTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     EndPosition;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NavLinkID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZAIController.ClearTarget
struct AZAIController_ClearTarget_Params
{
};

// Function Z.ZAIController.ClearAITargets
struct AZAIController_ClearAITargets_Params
{
};

// Function Z.ZCharacterMovementComponent.SetSprinting
struct UZCharacterMovementComponent_SetSprinting_Params
{
	bool                                               inWantsToSprint;                                           // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredSpeed;                                              // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZCharacterMovementComponent.SetSprintEnabled
struct UZCharacterMovementComponent_SetSprintEnabled_Params
{
	bool                                               inbIsSprintEnabled;                                        // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZCharacterMovementComponent.ServerFinishLanding
struct UZCharacterMovementComponent_ServerFinishLanding_Params
{
};

// Function Z.ZCharacterMovementComponent.FinishLanding
struct UZCharacterMovementComponent_FinishLanding_Params
{
};

// Function Z.ZCharacterMovementComponent.CanSprint
struct UZCharacterMovementComponent_CanSprint_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZCheatManager.TogglePathFollowingDebug
struct UZCheatManager_TogglePathFollowingDebug_Params
{
};

// Function Z.ZNavLinkComponent.ToggleNavLink
struct UZNavLinkComponent_ToggleNavLink_Params
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZNavLinkProxy_Destructible.ToggleNavLinkState
struct AZNavLinkProxy_Destructible_ToggleNavLinkState_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZNavLinkProxy_Destructible.OnTakeDamage
struct AZNavLinkProxy_Destructible_OnTakeDamage_Params
{
	struct FAIDamageResult                             DamageTaken;                                               // 0x0000(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Z.ZNavLinkProxy_Destructible.OnCanTakeDamageChange
struct AZNavLinkProxy_Destructible_OnCanTakeDamageChange_Params
{
	bool                                               CurrentState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZNavLinkProxy_Destructible.GetAIDamageComponent
struct AZNavLinkProxy_Destructible_GetAIDamageComponent_Params
{
	class UAIDamageComponent*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZNavLinkProxy_Jump.RefreshPathVisualizer
struct AZNavLinkProxy_Jump_RefreshPathVisualizer_Params
{
};

// Function Z.ZPathFollowingComponent.OnTargetSelectionUpdate
struct UZPathFollowingComponent_OnTargetSelectionUpdate_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAISlotManager*                              SlotManager;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.ZombieKilled
struct UZSpawn_ZombieKilled_Params
{
	class AZAICharacter*                               Zombie;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.SpawnLootCrate
struct UZSpawn_SpawnLootCrate_Params
{
	struct FName                                       LootCrateID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EQSContext;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.SetZombiesToAutoSpawn
struct UZSpawn_SetZombiesToAutoSpawn_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.SetZBodyCount
struct UZSpawn_SetZBodyCount_Params
{
	int                                                BodyCount;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.SetCashPerZKill
struct UZSpawn_SetCashPerZKill_Params
{
	int                                                CashPerKill;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.SetAutoSpawnProperties
struct UZSpawn_SetAutoSpawnProperties_Params
{
	struct FAutoSpawnProperties                        AutoSpawnProperties;                                       // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.ManualSpawnZombies
struct UZSpawn_ManualSpawnZombies_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          RandomLocations;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               Successful;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ACharacter*>                          Zombies;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.ManualSpawnLootCrate
struct UZSpawn_ManualSpawnLootCrate_Params
{
	struct FName                                       LootCrateID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.KillAllZombies
struct UZSpawn_KillAllZombies_Params
{
};

// Function Z.ZSpawn.GetZombiesToAutoSpawn
struct UZSpawn_GetZombiesToAutoSpawn_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.GetZombiesAliveCount
struct UZSpawn_GetZombiesAliveCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.GetLootCrateClass
struct UZSpawn_GetLootCrateClass_Params
{
	struct FName                                       LootCrateID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.GetAIDirector
struct UZSpawn_GetAIDirector_Params
{
	class AAIDirector*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Z.ZSpawn.CleanupBodies
struct UZSpawn_CleanupBodies_Params
{
};

// Function Z.ZSpawn.AddZombiesToAutoSpawn
struct UZSpawn_AddZombiesToAutoSpawn_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmtToSpawn;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
