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
//		Offset -> 0x003EF4E0
//		Name   -> Function Z.AIDamageComponent.SetCanTakeDamage
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
//		bool                                               InCanTakeDamage                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIDamageComponent::SetCanTakeDamage(bool InCanTakeDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.SetCanTakeDamage");

	UAIDamageComponent_SetCanTakeDamage_Params params {};
	params.InCanTakeDamage = InCanTakeDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF200
//		Name   -> Function Z.AIDamageComponent.ResetDamageComponent
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
//		bool                                               toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIDamageComponent::ResetDamageComponent(bool toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.ResetDamageComponent");

	UAIDamageComponent_ResetDamageComponent_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEF00
//		Name   -> Function Z.AIDamageComponent.OnRep_CanTakeDamage
//		Flags  -> (Final, Native, Private)
void UAIDamageComponent::OnRep_CanTakeDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.OnRep_CanTakeDamage");

	UAIDamageComponent_OnRep_CanTakeDamage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEB20
//		Name   -> Function Z.AIDamageComponent.MulticastDamageAplied
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
//		struct FAIDamageResult                             DamageResult                                               (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAIDamageComponent::MulticastDamageAplied(const struct FAIDamageResult& DamageResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.MulticastDamageAplied");

	UAIDamageComponent_MulticastDamageAplied_Params params {};
	params.DamageResult = DamageResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function Z.AIDamageComponent.IncomingDamage
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FAIDamageResult                             DamageResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAIDamageComponent::IncomingDamage(const struct FAIDamageResult& DamageResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.IncomingDamage");

	UAIDamageComponent_IncomingDamage_Params params {};
	params.DamageResult = DamageResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE4E0
//		Name   -> Function Z.AIDamageComponent.GetCanTakeDamage
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIDamageComponent::GetCanTakeDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.GetCanTakeDamage");

	UAIDamageComponent_GetCanTakeDamage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE1D0
//		Name   -> Function Z.AIDamageComponent.ApplyDamage
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
//		struct FAIDamageResult                             DamageResult                                               (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAIDamageComponent::ApplyDamage(const struct FAIDamageResult& DamageResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.ApplyDamage");

	UAIDamageComponent_ApplyDamage_Params params {};
	params.DamageResult = DamageResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE450
//		Name   -> Function Z.AIDamageComponentInterface.GetAIDamageComponent
//		Flags  -> (Native, Public, Const)
// Parameters:
//		class UAIDamageComponent*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAIDamageComponent* UAIDamageComponentInterface::GetAIDamageComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponentInterface.GetAIDamageComponent");

	UAIDamageComponentInterface_GetAIDamageComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EFB10
//		Name   -> Function Z.AIDirector.UpdateDynamicNavLinks
//		Flags  -> (Final, Native, Private)
void AAIDirector::UpdateDynamicNavLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.UpdateDynamicNavLinks");

	AAIDirector_UpdateDynamicNavLinks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EFAD0
//		Name   -> Function Z.AIDirector.TrickleOutAI_OverTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAIDirector::TrickleOutAI_OverTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleOutAI_OverTime");

	AAIDirector_TrickleOutAI_OverTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EFAB0
//		Name   -> Function Z.AIDirector.TrickleOutAI_OnDeath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAIDirector::TrickleOutAI_OnDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleOutAI_OnDeath");

	AAIDirector_TrickleOutAI_OnDeath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EFAF0
//		Name   -> Function Z.AIDirector.TrickleOut_AndKill
//		Flags  -> (Final, Native, Public)
void AAIDirector::TrickleOut_AndKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleOut_AndKill");

	AAIDirector_TrickleOut_AndKill_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EFA90
//		Name   -> Function Z.AIDirector.TrickleInAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAIDirector::TrickleInAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleInAI");

	AAIDirector_TrickleInAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EFA70
//		Name   -> Function Z.AIDirector.TrickleIn
//		Flags  -> (Final, Native, Public)
void AAIDirector::TrickleIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleIn");

	AAIDirector_TrickleIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF620
//		Name   -> Function Z.AIDirector.SetDirectorMode
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              TrickleTimeIn                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumberOfDesiredActiveAI                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Z_EAIDirectorMode                                  NewDirectorState                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Z_EAISetDirectorResponse                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Z_EAISetDirectorResponse AAIDirector::SetDirectorMode(float TrickleTimeIn, int NumberOfDesiredActiveAI, Z_EAIDirectorMode NewDirectorState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetDirectorMode");

	AAIDirector_SetDirectorMode_Params params {};
	params.TrickleTimeIn = TrickleTimeIn;
	params.NumberOfDesiredActiveAI = NumberOfDesiredActiveAI;
	params.NewDirectorState = NewDirectorState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EF390
//		Name   -> Function Z.AIDirector.SetALLAiPooled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAIDirector::SetALLAiPooled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetALLAiPooled");

	AAIDirector_SetALLAiPooled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF3B0
//		Name   -> Function Z.AIDirector.SetAllAIActive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAIDirector::SetAllAIActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetAllAIActive");

	AAIDirector_SetAllAIActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF310
//		Name   -> Function Z.AIDirector.SetAIPoolAmount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewPoolAmount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIDirector::SetAIPoolAmount(int NewPoolAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetAIPoolAmount");

	AAIDirector_SetAIPoolAmount_Params params {};
	params.NewPoolAmount = NewPoolAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEF60
//		Name   -> Function Z.AIDirector.PopulateNeighborGroups
//		Flags  -> (Final, Native, Private)
void AAIDirector::PopulateNeighborGroups()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.PopulateNeighborGroups");

	AAIDirector_PopulateNeighborGroups_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE9C0
//		Name   -> Function Z.AIDirector.K2_SetPlayersInPlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class ACharacter*>                          ListOfPlayersInPlay                                        (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AAIDirector::K2_SetPlayersInPlay(TArray<class ACharacter*> ListOfPlayersInPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_SetPlayersInPlay");

	AAIDirector_K2_SetPlayersInPlay_Params params {};
	params.ListOfPlayersInPlay = ListOfPlayersInPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE8E0
//		Name   -> Function Z.AIDirector.K2_RemovePlayersInPlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class ACharacter*>                          ListOfPlayersToRemove                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AAIDirector::K2_RemovePlayersInPlay(TArray<class ACharacter*> ListOfPlayersToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_RemovePlayersInPlay");

	AAIDirector_K2_RemovePlayersInPlay_Params params {};
	params.ListOfPlayersToRemove = ListOfPlayersToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE860
//		Name   -> Function Z.AIDirector.K2_RemoveAPlayerInPlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ACharacter*                                  PlayerToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIDirector::K2_RemoveAPlayerInPlay(class ACharacter* PlayerToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_RemoveAPlayerInPlay");

	AAIDirector_K2_RemoveAPlayerInPlay_Params params {};
	params.PlayerToRemove = PlayerToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE7C0
//		Name   -> Function Z.AIDirector.K2_AddPlayerToPlayList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ACharacter*                                  PlayerToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIDirector::K2_AddPlayerToPlayList(class ACharacter* PlayerToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_AddPlayerToPlayList");

	AAIDirector_K2_AddPlayerToPlayList_Params params {};
	params.PlayerToAdd = PlayerToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE6C0
//		Name   -> Function Z.AIDirector.InitAIPool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAIDirector::InitAIPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.InitAIPool");

	AAIDirector_InitAIPool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE660
//		Name   -> Function Z.AIDirector.GetVersion
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AAIDirector::GetVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.GetVersion");

	AAIDirector_GetVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE480
//		Name   -> Function Z.AIDirector.GetAIPoolAmount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AAIDirector::GetAIPoolAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.GetAIPoolAmount");

	AAIDirector_GetAIPoolAmount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE370
//		Name   -> Function Z.AIDirector.CreateAIPawnAtLocation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  SpawnLocation                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AAIDirector::CreateAIPawnAtLocation(const struct FTransform& SpawnLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.CreateAIPawnAtLocation");

	AAIDirector_CreateAIPawnAtLocation_Params params {};
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE110
//		Name   -> Function Z.AIDirector.AIWasKilled
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AZAICharacter*                               KilledAI                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerState*                                KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIDirector::AIWasKilled(class AZAICharacter* KilledAI, class APlayerState* KillerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AIDirector.AIWasKilled");

	AAIDirector_AIWasKilled_Params params {};
	params.KilledAI = KilledAI;
	params.KillerPlayerState = KillerPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF870
//		Name   -> Function Z.AISlotManager.SetNumberOfMaxAISlots
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                NumberOfslots                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISlotManager::SetNumberOfMaxAISlots(int NumberOfslots)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.SetNumberOfMaxAISlots");

	UAISlotManager_SetNumberOfMaxAISlots_Params params {};
	params.NumberOfslots = NumberOfslots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF760
//		Name   -> Function Z.AISlotManager.SetIsValidTarget
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               IsValid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISlotManager::SetIsValidTarget(bool IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.SetIsValidTarget");

	UAISlotManager_SetIsValidTarget_Params params {};
	params.IsValid = IsValid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF170
//		Name   -> Function Z.AISlotManager.RemoveAICharacterFromSlot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAISlotManager::RemoveAICharacterFromSlot(class AActor* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.RemoveAICharacterFromSlot");

	UAISlotManager_RemoveAICharacterFromSlot_Params params {};
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE7A0
//		Name   -> Function Z.AISlotManager.IsValidTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAISlotManager::IsValidTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.IsValidTarget");

	UAISlotManager_IsValidTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE6E0
//		Name   -> Function Z.AISlotManager.IsActorInSlots
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAISlotManager::IsActorInSlots(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.IsActorInSlots");

	UAISlotManager_IsActorInSlots_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE690
//		Name   -> Function Z.AISlotManager.HasEmptySlot
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAISlotManager::HasEmptySlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.HasEmptySlot");

	UAISlotManager_HasEmptySlot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE5E0
//		Name   -> Function Z.AISlotManager.GetNumberOfActiveSlots
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAISlotManager::GetNumberOfActiveSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.GetNumberOfActiveSlots");

	UAISlotManager_GetNumberOfActiveSlots_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE580
//		Name   -> Function Z.AISlotManager.GetMaxNumberOfAISlots
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAISlotManager::GetMaxNumberOfAISlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.GetMaxNumberOfAISlots");

	UAISlotManager_GetMaxNumberOfAISlots_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE2B0
//		Name   -> Function Z.AISlotManager.AssignSlotToActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISlotManager::AssignSlotToActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.AssignSlotToActor");

	UAISlotManager_AssignSlotToActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE5A0
//		Name   -> Function Z.BaseAICharacter.GetMovementDirection
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FMovementDirection                          ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMovementDirection ABaseAICharacter::GetMovementDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.BaseAICharacter.GetMovementDirection");

	ABaseAICharacter_GetMovementDirection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EF2C0
//		Name   -> Function Z.ProxyPlayerCharacter.ReviveCharacter
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
void AProxyPlayerCharacter::ReviveCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ProxyPlayerCharacter.ReviveCharacter");

	AProxyPlayerCharacter_ReviveCharacter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEF80
//		Name   -> Function Z.QueryContext_AllPlayers.ProvideActorsSet
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     QuerierObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ResultingActorSet                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UQueryContext_AllPlayers::ProvideActorsSet(class UObject* QuerierObject, TArray<class AActor*>* ResultingActorSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.QueryContext_AllPlayers.ProvideActorsSet");

	UQueryContext_AllPlayers_ProvideActorsSet_Params params {};
	params.QuerierObject = QuerierObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActorSet != nullptr)
		*ResultingActorSet = params.ResultingActorSet;

}


// Function:
//		Offset -> 0x003EF070
//		Name   -> Function Z.QueryContext_PlayerContext.ProvideSingleActor
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     QuerierObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ResultingActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQueryContext_PlayerContext::ProvideSingleActor(class UObject* QuerierObject, class AActor** ResultingActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.QueryContext_PlayerContext.ProvideSingleActor");

	UQueryContext_PlayerContext_ProvideSingleActor_Params params {};
	params.QuerierObject = QuerierObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function Z.RoundInterface.ResetToDefaultState
//		Flags  -> (Event, Public, BlueprintEvent)
void URoundInterface::ResetToDefaultState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.RoundInterface.ResetToDefaultState");

	URoundInterface_ResetToDefaultState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE450
//		Name   -> Function Z.SlotSystemInterface.GetPlayerSlotManager
//		Flags  -> (Native, Public, Const)
// Parameters:
//		class UAISlotManager*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAISlotManager* USlotSystemInterface::GetPlayerSlotManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.SlotSystemInterface.GetPlayerSlotManager");

	USlotSystemInterface_GetPlayerSlotManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EF990
//		Name   -> Function Z.ZAICharacter.ShouldDamageOtherActor
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AActor*                                      DamageTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZAICharacter::ShouldDamageOtherActor(class AActor* DamageTarget, class AActor** OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.ShouldDamageOtherActor");

	AZAICharacter_ShouldDamageOtherActor_Params params {};
	params.DamageTarget = DamageTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OtherActor != nullptr)
		*OtherActor = params.OtherActor;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EF900
//		Name   -> Function Z.ZAICharacter.SetSprinting
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               inIsSprinting                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::SetSprinting(bool inIsSprinting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetSprinting");

	AZAICharacter_SetSprinting_Params params {};
	params.inIsSprinting = inIsSprinting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF7F0
//		Name   -> Function Z.ZAICharacter.SetKnockBackState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Z_EZKnockBackState                                 NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::SetKnockBackState(Z_EZKnockBackState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetKnockBackState");

	AZAICharacter_SetKnockBackState_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF5A0
//		Name   -> Function Z.ZAICharacter.SetClimbing
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Z_EAIClimbingState                                 inIsClimbing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::SetClimbing(Z_EAIClimbingState inIsClimbing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetClimbing");

	AZAICharacter_SetClimbing_Params params {};
	params.inIsClimbing = inIsClimbing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF450
//		Name   -> Function Z.ZAICharacter.SetCanSprint
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               inCanSprint                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::SetCanSprint(bool inCanSprint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetCanSprint");

	AZAICharacter_SetCanSprint_Params params {};
	params.inCanSprint = inCanSprint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF3D0
//		Name   -> Function Z.ZAICharacter.SetAttackState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Z_EAIAttackState                                   AttackingState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::SetAttackState(Z_EAIAttackState AttackingState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetAttackState");

	AZAICharacter_SetAttackState_Params params {};
	params.AttackingState = AttackingState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EF150
//		Name   -> Function Z.ZAICharacter.ReEnableMovement
//		Flags  -> (Final, Native, Private)
void AZAICharacter::ReEnableMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.ReEnableMovement");

	AZAICharacter_ReEnableMovement_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEF20
//		Name   -> Function Z.ZAICharacter.OnRep_Target
//		Flags  -> (Final, Native, Public)
void AZAICharacter::OnRep_Target()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Target");

	AZAICharacter_OnRep_Target_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEF20
//		Name   -> Function Z.ZAICharacter.OnRep_Sprint
//		Flags  -> (Final, Native, Public)
void AZAICharacter::OnRep_Sprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Sprint");

	AZAICharacter_OnRep_Sprint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function Z.ZAICharacter.OnRep_Climb
//		Flags  -> (Final, Native, Public)
void AZAICharacter::OnRep_Climb()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Climb");

	AZAICharacter_OnRep_Climb_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEF40
//		Name   -> Function Z.ZAICharacter.OnRep_bIsDead
//		Flags  -> (Native, Public)
void AZAICharacter::OnRep_bIsDead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_bIsDead");

	AZAICharacter_OnRep_bIsDead_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function Z.ZAICharacter.OnRep_Attacking
//		Flags  -> (Final, Native, Public)
void AZAICharacter::OnRep_Attacking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Attacking");

	AZAICharacter_OnRep_Attacking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function Z.ZAICharacter.OnRep_AIControllerState
//		Flags  -> (Final, Native, Public)
void AZAICharacter::OnRep_AIControllerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_AIControllerState");

	AZAICharacter_OnRep_AIControllerState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEE80
//		Name   -> Function Z.ZAICharacter.OnMontangeStarted
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UAnimMontage*                                Montange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::OnMontangeStarted(class UAnimMontage* Montange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnMontangeStarted");

	AZAICharacter_OnMontangeStarted_Params params {};
	params.Montange = Montange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEDB0
//		Name   -> Function Z.ZAICharacter.OnMontangeEnded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::OnMontangeEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnMontangeEnded");

	AZAICharacter_OnMontangeEnded_Params params {};
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EED90
//		Name   -> Function Z.ZAICharacter.OnAnimInit
//		Flags  -> (Final, Native, Private)
void AZAICharacter::OnAnimInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnAnimInit");

	AZAICharacter_OnAnimInit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EECD0
//		Name   -> Function Z.ZAICharacter.NewTargetSelected
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAISlotManager*                              SlotManager                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::NewTargetSelected(class AActor* NewTarget, class UAISlotManager* SlotManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.NewTargetSelected");

	AZAICharacter_NewTargetSelected_Params params {};
	params.NewTarget = NewTarget;
	params.SlotManager = SlotManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEBD0
//		Name   -> Function Z.ZAICharacter.MulticastKnockBack
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		Z_EZKnockBackDirection                             Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AController*                                 bY                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::MulticastKnockBack(Z_EZKnockBackDirection Direction, unsigned char Flags, class AController* bY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.MulticastKnockBack");

	AZAICharacter_MulticastKnockBack_Params params {};
	params.Direction = Direction;
	params.Flags = Flags;
	params.bY = bY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EEAA0
//		Name   -> Function Z.ZAICharacter.KnockBack
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Z_EZKnockBackDirection                             Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::KnockBack(Z_EZKnockBackDirection Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.KnockBack");

	AZAICharacter_KnockBack_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE840
//		Name   -> Function Z.ZAICharacter.K2_KillAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AZAICharacter::K2_KillAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.K2_KillAI");

	AZAICharacter_K2_KillAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE630
//		Name   -> Function Z.ZAICharacter.GetTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AZAICharacter::GetTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetTarget");

	AZAICharacter_GetTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE600
//		Name   -> Function Z.ZAICharacter.GetSprinting
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZAICharacter::GetSprinting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetSprinting");

	AZAICharacter_GetSprinting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function Z.ZAICharacter.GetMeshAndAnimInstance
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               SkeletalMesh                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::GetMeshAndAnimInstance(int Index, class USkeletalMesh** SkeletalMesh, class UClass** AnimInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetMeshAndAnimInstance");

	AZAICharacter_GetMeshAndAnimInstance_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;

}


// Function:
//		Offset -> 0x003EE560
//		Name   -> Function Z.ZAICharacter.GetKnockBackState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		Z_EZKnockBackState                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Z_EZKnockBackState AZAICharacter::GetKnockBackState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetKnockBackState");

	AZAICharacter_GetKnockBackState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE540
//		Name   -> Function Z.ZAICharacter.GetCurrentAIstate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		Z_EAIState                                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Z_EAIState AZAICharacter::GetCurrentAIstate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetCurrentAIstate");

	AZAICharacter_GetCurrentAIstate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE510
//		Name   -> Function Z.ZAICharacter.GetClimbingState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		Z_EAIClimbingState                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Z_EAIClimbingState AZAICharacter::GetClimbingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetClimbingState");

	AZAICharacter_GetClimbingState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003EE4B0
//		Name   -> Function Z.ZAICharacter.GetAttackState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		Z_EAIAttackState                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Z_EAIAttackState AZAICharacter::GetAttackState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetAttackState");

	AZAICharacter_GetAttackState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function Z.ZAICharacter.DelayedReturnToNormalCollision
//		Flags  -> (Final, Native, Private)
void AZAICharacter::DelayedReturnToNormalCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.DelayedReturnToNormalCollision");

	AZAICharacter_DelayedReturnToNormalCollision_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE350
//		Name   -> Function Z.ZAICharacter.AttemptRandomSprint
//		Flags  -> (Final, Native, Private)
void AZAICharacter::AttemptRandomSprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.AttemptRandomSprint");

	AZAICharacter_AttemptRandomSprint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE330
//		Name   -> Function Z.ZAICharacter.AttackTargetInRange
//		Flags  -> (Final, Native, Private)
void AZAICharacter::AttackTargetInRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.AttackTargetInRange");

	AZAICharacter_AttackTargetInRange_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003EE090
//		Name   -> Function Z.ZAICharacter.AIStateChange
//		Flags  -> (Final, Native, Public)
// Parameters:
//		Z_EAIState                                         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAICharacter::AIStateChange(Z_EAIState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.AIStateChange");

	AZAICharacter_AIStateChange_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3A90
//		Name   -> Function Z.ZAIController.SetState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		Z_EAIState                                         inState                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAIController::SetState(Z_EAIState inState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.SetState");

	AZAIController_SetState_Params params {};
	params.inState = inState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3890
//		Name   -> Function Z.ZAIController.SetCurrentTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZAIController::SetCurrentTarget(class AActor* InTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.SetCurrentTarget");

	AZAIController_SetCurrentTarget_Params params {};
	params.InTarget = InTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F3720
//		Name   -> Function Z.ZAIController.RandomDeviationFindTarget
//		Flags  -> (Final, Native, Public)
void AZAIController::RandomDeviationFindTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.RandomDeviationFindTarget");

	AZAIController_RandomDeviationFindTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function Z.ZAIController.OnSlotsCleared
//		Flags  -> (Event, Public, BlueprintEvent)
void AZAIController::OnSlotsCleared()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.OnSlotsCleared");

	AZAIController_OnSlotsCleared_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3080
//		Name   -> Function Z.ZAIController.JumpTo
//		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  Destination                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Arc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      JumpFromActor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAIController::JumpTo(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.JumpTo");

	AZAIController_JumpTo_Params params {};
	params.Destination = Destination;
	params.Arc = Arc;
	params.JumpFromActor = JumpFromActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3050
//		Name   -> Function Z.ZAIController.IsDecelerationgOnPath
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZAIController::IsDecelerationgOnPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.IsDecelerationgOnPath");

	AZAIController_IsDecelerationgOnPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F3020
//		Name   -> Function Z.ZAIController.HasTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZAIController::HasTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.HasTarget");

	AZAIController_HasTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2FA0
//		Name   -> Function Z.ZAIController.GetState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		Z_EAIState                                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Z_EAIState AZAIController::GetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.GetState");

	AZAIController_GetState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2EF0
//		Name   -> Function Z.ZAIController.GetCurrentTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AZAIController::GetCurrentTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.GetCurrentTarget");

	AZAIController_GetCurrentTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2E40
//		Name   -> Function Z.ZAIController.FinishClimb
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AZAIController::FinishClimb()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.FinishClimb");

	AZAIController_FinishClimb_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2E20
//		Name   -> Function Z.ZAIController.FindTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AZAIController::FindTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.FindTarget");

	AZAIController_FindTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2BE0
//		Name   -> Function Z.ZAIController.DoJumpLaunch_PrecomputedVelocity
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  Destination                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Arc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     InLaunchVelocity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      JumpFromActor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutAscendingTime                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutDescendingTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZAIController::DoJumpLaunch_PrecomputedVelocity(const struct FTransform& Destination, float Arc, const struct FVector& InLaunchVelocity, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.DoJumpLaunch_PrecomputedVelocity");

	AZAIController_DoJumpLaunch_PrecomputedVelocity_Params params {};
	params.Destination = Destination;
	params.Arc = Arc;
	params.InLaunchVelocity = InLaunchVelocity;
	params.JumpFromActor = JumpFromActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAscendingTime != nullptr)
		*OutAscendingTime = params.OutAscendingTime;
	if (OutDescendingTime != nullptr)
		*OutDescendingTime = params.OutDescendingTime;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F29D0
//		Name   -> Function Z.ZAIController.DoJumpLaunch
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  Destination                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Arc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      JumpFromActor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutAscendingTime                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutDescendingTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZAIController::DoJumpLaunch(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.DoJumpLaunch");

	AZAIController_DoJumpLaunch_Params params {};
	params.Destination = Destination;
	params.Arc = Arc;
	params.JumpFromActor = JumpFromActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAscendingTime != nullptr)
		*OutAscendingTime = params.OutAscendingTime;
	if (OutDescendingTime != nullptr)
		*OutDescendingTime = params.OutDescendingTime;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2860
//		Name   -> Function Z.ZAIController.ClimbTo
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		struct FTransform                                  LedgeTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     EndPosition                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		uint32_t                                           NavLinkID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZAIController::ClimbTo(const struct FTransform& LedgeTransform, const struct FVector& EndPosition, uint32_t NavLinkID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.ClimbTo");

	AZAIController_ClimbTo_Params params {};
	params.LedgeTransform = LedgeTransform;
	params.EndPosition = EndPosition;
	params.NavLinkID = NavLinkID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2840
//		Name   -> Function Z.ZAIController.ClearTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AZAIController::ClearTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.ClearTarget");

	AZAIController_ClearTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2840
//		Name   -> Function Z.ZAIController.ClearAITargets
//		Flags  -> (Final, Native, Public)
void AZAIController::ClearAITargets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZAIController.ClearAITargets");

	AZAIController_ClearAITargets_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F39B0
//		Name   -> Function Z.ZCharacterMovementComponent.SetSprinting
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               inWantsToSprint                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DesiredSpeed                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZCharacterMovementComponent::SetSprinting(bool inWantsToSprint, float DesiredSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.SetSprinting");

	UZCharacterMovementComponent_SetSprinting_Params params {};
	params.inWantsToSprint = inWantsToSprint;
	params.DesiredSpeed = DesiredSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3920
//		Name   -> Function Z.ZCharacterMovementComponent.SetSprintEnabled
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               inbIsSprintEnabled                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZCharacterMovementComponent::SetSprintEnabled(bool inbIsSprintEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.SetSprintEnabled");

	UZCharacterMovementComponent_SetSprintEnabled_Params params {};
	params.inbIsSprintEnabled = inbIsSprintEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3740
//		Name   -> Function Z.ZCharacterMovementComponent.ServerFinishLanding
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void UZCharacterMovementComponent::ServerFinishLanding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.ServerFinishLanding");

	UZCharacterMovementComponent_ServerFinishLanding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2E60
//		Name   -> Function Z.ZCharacterMovementComponent.FinishLanding
//		Flags  -> (Final, Native, Public)
void UZCharacterMovementComponent::FinishLanding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.FinishLanding");

	UZCharacterMovementComponent_FinishLanding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F27F0
//		Name   -> Function Z.ZCharacterMovementComponent.CanSprint
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UZCharacterMovementComponent::CanSprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.CanSprint");

	UZCharacterMovementComponent_CanSprint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F3E00
//		Name   -> Function Z.ZCheatManager.TogglePathFollowingDebug
//		Flags  -> (Final, Exec, Native, Public)
void UZCheatManager::TogglePathFollowingDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZCheatManager.TogglePathFollowingDebug");

	UZCheatManager_TogglePathFollowingDebug_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3CE0
//		Name   -> Function Z.ZNavLinkComponent.ToggleNavLink
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               IsEnabled                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZNavLinkComponent::ToggleNavLink(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkComponent.ToggleNavLink");

	UZNavLinkComponent_ToggleNavLink_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3D70
//		Name   -> Function Z.ZNavLinkProxy_Destructible.ToggleNavLinkState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZNavLinkProxy_Destructible::ToggleNavLinkState(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.ToggleNavLinkState");

	AZNavLinkProxy_Destructible_ToggleNavLinkState_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3580
//		Name   -> Function Z.ZNavLinkProxy_Destructible.OnTakeDamage
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FAIDamageResult                             DamageTaken                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AZNavLinkProxy_Destructible::OnTakeDamage(const struct FAIDamageResult& DamageTaken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.OnTakeDamage");

	AZNavLinkProxy_Destructible_OnTakeDamage_Params params {};
	params.DamageTaken = DamageTaken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F34F0
//		Name   -> Function Z.ZNavLinkProxy_Destructible.OnCanTakeDamageChange
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               CurrentState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZNavLinkProxy_Destructible::OnCanTakeDamageChange(bool CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.OnCanTakeDamageChange");

	AZNavLinkProxy_Destructible_OnCanTakeDamageChange_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2E80
//		Name   -> Function Z.ZNavLinkProxy_Destructible.GetAIDamageComponent
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UAIDamageComponent*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAIDamageComponent* AZNavLinkProxy_Destructible::GetAIDamageComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.GetAIDamageComponent");

	AZNavLinkProxy_Destructible_GetAIDamageComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function Z.ZNavLinkProxy_Jump.RefreshPathVisualizer
//		Flags  -> (Final, Native, Public)
void AZNavLinkProxy_Jump::RefreshPathVisualizer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Jump.RefreshPathVisualizer");

	AZNavLinkProxy_Jump_RefreshPathVisualizer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3660
//		Name   -> Function Z.ZPathFollowingComponent.OnTargetSelectionUpdate
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAISlotManager*                              SlotManager                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZPathFollowingComponent::OnTargetSelectionUpdate(class AActor* NewTarget, class UAISlotManager* SlotManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZPathFollowingComponent.OnTargetSelectionUpdate");

	UZPathFollowingComponent_OnTargetSelectionUpdate_Params params {};
	params.NewTarget = NewTarget;
	params.SlotManager = SlotManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3E20
//		Name   -> Function Z.ZSpawn.ZombieKilled
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AZAICharacter*                               Zombie                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerState*                                Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZSpawn::ZombieKilled(class AZAICharacter* Zombie, class APlayerState* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.ZombieKilled");

	UZSpawn_ZombieKilled_Params params {};
	params.Zombie = Zombie;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3C20
//		Name   -> Function Z.ZSpawn.SpawnLootCrate
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       LootCrateID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      EQSContext                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZSpawn::SpawnLootCrate(const struct FName& LootCrateID, class AActor* EQSContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.SpawnLootCrate");

	UZSpawn_SpawnLootCrate_Params params {};
	params.LootCrateID = LootCrateID;
	params.EQSContext = EQSContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3BA0
//		Name   -> Function Z.ZSpawn.SetZombiesToAutoSpawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZSpawn::SetZombiesToAutoSpawn(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.SetZombiesToAutoSpawn");

	UZSpawn_SetZombiesToAutoSpawn_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3B20
//		Name   -> Function Z.ZSpawn.SetZBodyCount
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BodyCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZSpawn::SetZBodyCount(int BodyCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.SetZBodyCount");

	UZSpawn_SetZBodyCount_Params params {};
	params.BodyCount = BodyCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3810
//		Name   -> Function Z.ZSpawn.SetCashPerZKill
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                CashPerKill                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZSpawn::SetCashPerZKill(int CashPerKill)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.SetCashPerZKill");

	UZSpawn_SetCashPerZKill_Params params {};
	params.CashPerKill = CashPerKill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3760
//		Name   -> Function Z.ZSpawn.SetAutoSpawnProperties
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FAutoSpawnProperties                        AutoSpawnProperties                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UZSpawn::SetAutoSpawnProperties(const struct FAutoSpawnProperties& AutoSpawnProperties)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.SetAutoSpawnProperties");

	UZSpawn_SetAutoSpawnProperties_Params params {};
	params.AutoSpawnProperties = AutoSpawnProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F3340
//		Name   -> Function Z.ZSpawn.ManualSpawnZombies
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FTransform>                          RandomLocations                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ACharacter*>                          Zombies                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UZSpawn::ManualSpawnZombies(int Amount, TArray<struct FTransform> RandomLocations, bool* Successful, TArray<class ACharacter*>* Zombies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.ManualSpawnZombies");

	UZSpawn_ManualSpawnZombies_Params params {};
	params.Amount = Amount;
	params.RandomLocations = RandomLocations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Successful != nullptr)
		*Successful = params.Successful;
	if (Zombies != nullptr)
		*Zombies = params.Zombies;

}


// Function:
//		Offset -> 0x003F3200
//		Name   -> Function Z.ZSpawn.ManualSpawnLootCrate
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       LootCrateID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UZSpawn::ManualSpawnLootCrate(const struct FName& LootCrateID, const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.ManualSpawnLootCrate");

	UZSpawn_ManualSpawnLootCrate_Params params {};
	params.LootCrateID = LootCrateID;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F31E0
//		Name   -> Function Z.ZSpawn.KillAllZombies
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UZSpawn::KillAllZombies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.KillAllZombies");

	UZSpawn_KillAllZombies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2FF0
//		Name   -> Function Z.ZSpawn.GetZombiesToAutoSpawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UZSpawn::GetZombiesToAutoSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.GetZombiesToAutoSpawn");

	UZSpawn_GetZombiesToAutoSpawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2FC0
//		Name   -> Function Z.ZSpawn.GetZombiesAliveCount
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UZSpawn::GetZombiesAliveCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.GetZombiesAliveCount");

	UZSpawn_GetZombiesAliveCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2F10
//		Name   -> Function Z.ZSpawn.GetLootCrateClass
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       LootCrateID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UZSpawn::GetLootCrateClass(const struct FName& LootCrateID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.GetLootCrateClass");

	UZSpawn_GetLootCrateClass_Params params {};
	params.LootCrateID = LootCrateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2EC0
//		Name   -> Function Z.ZSpawn.GetAIDirector
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AAIDirector*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AAIDirector* UZSpawn::GetAIDirector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.GetAIDirector");

	UZSpawn_GetAIDirector_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003F2820
//		Name   -> Function Z.ZSpawn.CleanupBodies
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UZSpawn::CleanupBodies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.CleanupBodies");

	UZSpawn_CleanupBodies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F2720
//		Name   -> Function Z.ZSpawn.AddZombiesToAutoSpawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AmtToSpawn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZSpawn::AddZombiesToAutoSpawn(int Amount, int* AmtToSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Z.ZSpawn.AddZombiesToAutoSpawn");

	UZSpawn_AddZombiesToAutoSpawn_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AmtToSpawn != nullptr)
		*AmtToSpawn = params.AmtToSpawn;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
