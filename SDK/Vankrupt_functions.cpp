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
//		Offset -> 0x0023DD90
//		Name   -> Function Vankrupt.VCollisionEffectComponent.ResetCooldown
//		Flags  -> (Final, Native, Protected)
void UVCollisionEffectComponent::ResetCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VCollisionEffectComponent.ResetCooldown");

	UVCollisionEffectComponent_ResetCooldown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D6F0
//		Name   -> Function Vankrupt.VCollisionEffectComponent.OnActorHit
//		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults)
// Parameters:
//		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UVCollisionEffectComponent::OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VCollisionEffectComponent.OnActorHit");

	UVCollisionEffectComponent_OnActorHit_Params params {};
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023DD70
//		Name   -> Function Vankrupt.VDecalComponent.Project
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UVDecalComponent::Project()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VDecalComponent.Project");

	UVDecalComponent_Project_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D070
//		Name   -> Function Vankrupt.VDecalComponent.CheckTaskCompletion
//		Flags  -> (Final, Native, Private)
void UVDecalComponent::CheckTaskCompletion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VDecalComponent.CheckTaskCompletion");

	UVDecalComponent_CheckTaskCompletion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023DF10
//		Name   -> Function Vankrupt.VHealthComponent.SetDamageMultiplier
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Multiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVHealthComponent::SetDamageMultiplier(float Multiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.SetDamageMultiplier");

	UVHealthComponent_SetDamageMultiplier_Params params {};
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023DEF0
//		Name   -> Function Vankrupt.VHealthComponent.Revive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UVHealthComponent::Revive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.Revive");

	UVHealthComponent_Revive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023DAD0
//		Name   -> Function Vankrupt.VHealthComponent.OnTakePointDamage
//		Flags  -> (Final, Native, Protected, HasDefaults)
// Parameters:
//		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ShotFromDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVHealthComponent::OnTakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.OnTakePointDamage");

	UVHealthComponent_OnTakePointDamage_Params params {};
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D940
//		Name   -> Function Vankrupt.VHealthComponent.OnTakeAnyDamage
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVHealthComponent::OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.OnTakeAnyDamage");

	UVHealthComponent_OnTakeAnyDamage_Params params {};
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D920
//		Name   -> Function Vankrupt.VHealthComponent.OnRep_Dead
//		Flags  -> (Native, Protected)
void UVHealthComponent::OnRep_Dead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.OnRep_Dead");

	UVHealthComponent_OnRep_Dead_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D6D0
//		Name   -> Function Vankrupt.VHealthComponent.MulticastOnRevived
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void UVHealthComponent::MulticastOnRevived()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnRevived");

	UVHealthComponent_MulticastOnRevived_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D600
//		Name   -> Function Vankrupt.VHealthComponent.MulticastOnKilledWithData
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		struct FVKillData                                  Data                                                       (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UVHealthComponent::MulticastOnKilledWithData(const struct FVKillData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnKilledWithData");

	UVHealthComponent_MulticastOnKilledWithData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D5E0
//		Name   -> Function Vankrupt.VHealthComponent.MulticastOnKilled
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void UVHealthComponent::MulticastOnKilled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnKilled");

	UVHealthComponent_MulticastOnKilled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D560
//		Name   -> Function Vankrupt.VHealthComponent.MulticastOnHitEffect
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		Vankrupt_EVHitEffect                               Effect                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVHealthComponent::MulticastOnHitEffect(Vankrupt_EVHitEffect Effect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnHitEffect");

	UVHealthComponent_MulticastOnHitEffect_Params params {};
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D490
//		Name   -> Function Vankrupt.VHealthComponent.Kill
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UVHealthComponent::Kill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.Kill");

	UVHealthComponent_Kill_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D190
//		Name   -> Function Vankrupt.VHealthComponent.GetDamageMultiplier
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVHealthComponent::GetDamageMultiplier()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.GetDamageMultiplier");

	UVHealthComponent_GetDamageMultiplier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023D050
//		Name   -> Function Vankrupt.VHealthComponent.ApplyKillImpulse
//		Flags  -> (Final, Native, Protected)
void UVHealthComponent::ApplyKillImpulse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.ApplyKillImpulse");

	UVHealthComponent_ApplyKillImpulse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023E020
//		Name   -> Function Vankrupt.VMenu.Show
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVMenu::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VMenu.Show");

	AVMenu_Show_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023DF90
//		Name   -> Function Vankrupt.VMenu.SetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVMenu::SetVisibility(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VMenu.SetVisibility");

	AVMenu_SetVisibility_Params params {};
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D360
//		Name   -> Function Vankrupt.VMenu.Hide
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVMenu::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VMenu.Hide");

	AVMenu_Hide_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023E390
//		Name   -> Function Vankrupt.VLobby.StartGameImpl
//		Flags  -> (Final, Native, Private)
void AVLobby::StartGameImpl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.StartGameImpl");

	AVLobby_StartGameImpl_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D890
//		Name   -> Function Vankrupt.VLobby.OnLeaveLobbyPrompt
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVLobby::OnLeaveLobbyPrompt(int Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.OnLeaveLobbyPrompt");

	AVLobby_OnLeaveLobbyPrompt_Params params {};
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function Vankrupt.VLobby.OnGoBack
//		Flags  -> (Event, Public, BlueprintEvent)
void AVLobby::OnGoBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.OnGoBack");

	AVLobby_OnGoBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D6B0
//		Name   -> Function Vankrupt.VLobby.MulticastOnLeavingLobby
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void AVLobby::MulticastOnLeavingLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.MulticastOnLeavingLobby");

	AVLobby_MulticastOnLeavingLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D540
//		Name   -> Function Vankrupt.VLobby.MulticastOnGameStart
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void AVLobby::MulticastOnGameStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.MulticastOnGameStart");

	AVLobby_MulticastOnGameStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D520
//		Name   -> Function Vankrupt.VLobby.LeaveLobbyImpl
//		Flags  -> (Final, Native, Private)
void AVLobby::LeaveLobbyImpl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.LeaveLobbyImpl");

	AVLobby_LeaveLobbyImpl_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023E2B0
//		Name   -> Function Vankrupt.VSpawnManagerComponent.SpawnRandomly
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      CharacterClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVSpawnParams                               Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		class ACharacter*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACharacter* UVSpawnManagerComponent::SpawnRandomly(class UClass* CharacterClass, const struct FVSpawnParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.SpawnRandomly");

	UVSpawnManagerComponent_SpawnRandomly_Params params {};
	params.CharacterClass = CharacterClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023E120
//		Name   -> Function Vankrupt.VSpawnManagerComponent.SpawnAt
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UClass*                                      CharacterClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVSpawnParams                               Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		class ACharacter*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACharacter* UVSpawnManagerComponent::SpawnAt(const struct FTransform& Transform, class UClass* CharacterClass, const struct FVSpawnParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.SpawnAt");

	UVSpawnManagerComponent_SpawnAt_Params params {};
	params.Transform = Transform;
	params.CharacterClass = CharacterClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023E040
//		Name   -> Function Vankrupt.VSpawnManagerComponent.Spawn
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      CharacterClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVSpawnParams                               Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		class ACharacter*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACharacter* UVSpawnManagerComponent::Spawn(class UClass* CharacterClass, const struct FVSpawnParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.Spawn");

	UVSpawnManagerComponent_Spawn_Params params {};
	params.CharacterClass = CharacterClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023D220
//		Name   -> Function Vankrupt.VSpawnManagerComponent.GetSpawnTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		int                                                AgentId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOccluded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bClosest                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UVSpawnManagerComponent::GetSpawnTransform(int AgentId, bool bOccluded, bool bClosest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.GetSpawnTransform");

	UVSpawnManagerComponent_GetSpawnTransform_Params params {};
	params.AgentId = AgentId;
	params.bOccluded = bOccluded;
	params.bClosest = bClosest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023D1C0
//		Name   -> Function Vankrupt.VSpawnManagerComponent.GetRandomSpawnTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UVSpawnManagerComponent::GetRandomSpawnTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.GetRandomSpawnTransform");

	UVSpawnManagerComponent_GetRandomSpawnTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023D380
//		Name   -> Function Vankrupt.VSpawnPoint.IsOccluded
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVSpawnPoint::IsOccluded(int PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnPoint.IsOccluded");

	AVSpawnPoint_IsOccluded_Params params {};
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023DDB0
//		Name   -> Function Vankrupt.VStatics.RetrieveNews
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UVStatics::STATIC_RetrieveNews(class UObject* WorldContextObject, const struct FString& URL, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.RetrieveNews");

	UVStatics_RetrieveNews_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.URL = URL;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D4B0
//		Name   -> Function Vankrupt.VStatics.LeaveGame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVStatics::STATIC_LeaveGame(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.LeaveGame");

	UVStatics_LeaveGame_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0023D410
//		Name   -> Function Vankrupt.VStatics.IsPlayingOnline
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVStatics::STATIC_IsPlayingOnline(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.IsPlayingOnline");

	UVStatics_IsPlayingOnline_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0023D090
//		Name   -> Function Vankrupt.VStatics.FormatTime
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UVStatics::STATIC_FormatTime(class UObject* WorldContextObject, int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.FormatTime");

	UVStatics_FormatTime_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
