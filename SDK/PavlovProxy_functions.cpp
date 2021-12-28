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
//		Offset -> 0x0020ECF0
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.SetPickDisabled
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDisabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_CustomItem::SetPickDisabled(bool bDisabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.SetPickDisabled");

	APavlov_CustomItem_SetPickDisabled_Params params {};
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E960
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.OwnerDestroyed
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_CustomItem::OwnerDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OwnerDestroyed");

	APavlov_CustomItem_OwnerDestroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.OnUsed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bJustPicked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_CustomItem::OnUsed(bool bJustPicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnUsed");

	APavlov_CustomItem_OnUsed_Params params {};
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.OnUse
//		Flags  -> (Event, Public, BlueprintEvent)
void APavlov_CustomItem::OnUse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnUse");

	APavlov_CustomItem_OnUse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.OnPickup
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDominant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_CustomItem::OnPickup(class APawn* Pawn, bool bDominant)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnPickup");

	APavlov_CustomItem_OnPickup_Params params {};
	params.Pawn = Pawn;
	params.bDominant = bDominant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_CustomItem.OnPickDisabled__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bDisabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_CustomItem::OnPickDisabled__DelegateSignature(bool bDisabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnPickDisabled__DelegateSignature");

	APavlov_CustomItem_OnPickDisabled__DelegateSignature_Params params {};
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetState__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char APavlov_CustomItem::OnGetState__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetState__DelegateSignature");

	APavlov_CustomItem_OnGetState__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetPawn__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* APavlov_CustomItem::OnGetPawn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnGetPawn__DelegateSignature");

	APavlov_CustomItem_OnGetPawn__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_CustomItem.OnDropItem__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_CustomItem::OnDropItem__DelegateSignature(bool bDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_CustomItem.OnDropItem__DelegateSignature");

	APavlov_CustomItem_OnDropItem__DelegateSignature_Params params {};
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.OnDrop
//		Flags  -> (Event, Public, BlueprintEvent)
void APavlov_CustomItem::OnDrop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.OnDrop");

	APavlov_CustomItem_OnDrop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020DD40
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.GetOwningPawn
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_CustomItem::GetOwningPawn(class APawn** Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.GetOwningPawn");

	APavlov_CustomItem_GetOwningPawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020DD10
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.GetItemState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		PavlovProxy_EProxyItemState                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PavlovProxy_EProxyItemState APavlov_CustomItem::GetItemState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.GetItemState");

	APavlov_CustomItem_GetItemState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020DB90
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.Drop
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_CustomItem::Drop(bool bDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.Drop");

	APavlov_CustomItem_Drop_Params params {};
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020DAD0
//		Name   -> Function PavlovProxy.Pavlov_CustomItem.CanPickupItem
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_CustomItem::CanPickupItem(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_CustomItem.CanPickupItem");

	APavlov_CustomItem_CanPickupItem_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00210110
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.TTTRoundEndSoundEnabled
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::TTTRoundEndSoundEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.TTTRoundEndSoundEnabled");

	APavlov_GameLogic_TTTRoundEndSoundEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020FF10
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnVehicleAsync
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnSpawnComplete                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       VehicleID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DespawnTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_GameLogic::SpawnVehicleAsync(const struct FScriptDelegate& OnSpawnComplete, const struct FName& VehicleID, const struct FTransform& SpawnTransform, int TeamId, float DespawnTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnVehicleAsync");

	APavlov_GameLogic_SpawnVehicleAsync_Params params {};
	params.OnSpawnComplete = OnSpawnComplete;
	params.VehicleID = VehicleID;
	params.SpawnTransform = SpawnTransform;
	params.TeamId = TeamId;
	params.DespawnTime = DespawnTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020FD90
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnVehicle
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       VehicleID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* APavlov_GameLogic::SpawnVehicle(const struct FName& VehicleID, const struct FTransform& SpawnTransform, int TeamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnVehicle");

	APavlov_GameLogic_SpawnVehicle_Params params {};
	params.VehicleID = VehicleID;
	params.SpawnTransform = SpawnTransform;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020FC00
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrateAtTransform
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       LootCrateID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class AActor*                                      LootCrate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_GameLogic::SpawnLootCrateAtTransform(const struct FName& LootCrateID, const struct FTransform& SpawnTransform, class AActor** LootCrate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrateAtTransform");

	APavlov_GameLogic_SpawnLootCrateAtTransform_Params params {};
	params.LootCrateID = LootCrateID;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootCrate != nullptr)
		*LootCrate = params.LootCrate;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020FB80
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrate
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       LootCrateID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SpawnLootCrate(const struct FName& LootCrateID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnLootCrate");

	APavlov_GameLogic_SpawnLootCrate_Params params {};
	params.LootCrateID = LootCrateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020FA10
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnItemWRef
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPavlovItemSpawnParams                      Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SpawnItemWRef(const struct FPavlovItemSpawnParams& Params, bool* bSuccessful, class AActor** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnItemWRef");

	APavlov_GameLogic_SpawnItemWRef_Params params {};
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Item != nullptr)
		*Item = params.Item;

}


// Function:
//		Offset -> 0x0020F950
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnItem
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPavlovItemSpawnParams                      Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SpawnItem(const struct FPavlovItemSpawnParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnItem");

	APavlov_GameLogic_SpawnItem_Params params {};
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F860
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnChicken
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  SpawnTransform                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class ACharacter*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACharacter* APavlov_GameLogic::SpawnChicken(const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnChicken");

	APavlov_GameLogic_SpawnChicken_Params params {};
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020F780
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnAttachments
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPavlovAttachmentSpawnParams                Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_GameLogic::SpawnAttachments(const struct FPavlovAttachmentSpawnParams& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnAttachments");

	APavlov_GameLogic_SpawnAttachments_Params params {};
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020F760
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void APavlov_GameLogic::SpawnAndPosessPawns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SpawnAndPosessPawns");

	APavlov_GameLogic_SpawnAndPosessPawns_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F5A0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.Spawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bAsGhost                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       Pawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::Spawn(class AController* Controller, const struct FTransform& Transform, bool bAsGhost, class APawn** Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.Spawn");

	APavlov_GameLogic_Spawn_Params params {};
	params.Controller = Controller;
	params.Transform = Transform;
	params.bAsGhost = bAsGhost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;

}


// Function:
//		Offset -> 0x0020F520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetZombiesToAutoSpawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TotalZombies                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetZombiesToAutoSpawn(int TotalZombies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetZombiesToAutoSpawn");

	APavlov_GameLogic_SetZombiesToAutoSpawn_Params params {};
	params.TotalZombies = TotalZombies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F3D0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetZombieAutoSpawnProperties
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              BatchTimeMin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              BatchTimeMax                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ZBatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxZCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetZombieAutoSpawnProperties(float BatchTimeMin, float BatchTimeMax, int ZBatchSize, int MaxZCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetZombieAutoSpawnProperties");

	APavlov_GameLogic_SetZombieAutoSpawnProperties_Params params {};
	params.BatchTimeMin = BatchTimeMin;
	params.BatchTimeMax = BatchTimeMax;
	params.ZBatchSize = ZBatchSize;
	params.MaxZCount = MaxZCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F350
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetZBodyCount
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BodyCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetZBodyCount(int BodyCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetZBodyCount");

	APavlov_GameLogic_SetZBodyCount_Params params {};
	params.BodyCount = BodyCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F290
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetTeamCash
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CashAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetTeamCash(int TeamId, int CashAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetTeamCash");

	APavlov_GameLogic_SetTeamCash_Params params {};
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F210
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetRoundState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		PavlovProxy_EPavlovRoundState                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetRoundState(PavlovProxy_EPavlovRoundState State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetRoundState");

	APavlov_GameLogic_SetRoundState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F0D0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Health                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Armour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Helmet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetPlayerVitality(class APlayerState* PlayerState, int Health, int Armour, int Helmet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerVitality");

	APavlov_GameLogic_SetPlayerVitality_Params params {};
	params.PlayerState = PlayerState;
	params.Health = Health;
	params.Armour = Armour;
	params.Helmet = Helmet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020F010
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetPlayerTeam(class APlayerState* PlayerState, int TeamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerTeam");

	APavlov_GameLogic_SetPlayerTeam_Params params {};
	params.PlayerState = PlayerState;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020EF40
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetPlayerGag(class APlayerState* PlayerState, bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerGag");

	APavlov_GameLogic_SetPlayerGag_Params params {};
	params.PlayerState = PlayerState;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020EE80
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CashAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetPlayerCash(class APlayerState* PlayerState, int CashAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerCash");

	APavlov_GameLogic_SetPlayerCash_Params params {};
	params.PlayerState = PlayerState;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020ED80
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              BuyZoneMaxDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetPlayerBuyingEnabled(class APlayerState* PlayerState, float Duration, float BuyZoneMaxDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetPlayerBuyingEnabled");

	APavlov_GameLogic_SetPlayerBuyingEnabled_Params params {};
	params.PlayerState = PlayerState;
	params.Duration = Duration;
	params.BuyZoneMaxDistance = BuyZoneMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020EC60
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDisabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetMovementDisabled(bool bDisabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetMovementDisabled");

	APavlov_GameLogic_SetMovementDisabled_Params params {};
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020EB90
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPavlovGameModeProperties                   Properties                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetGameModeProperties(const struct FPavlovGameModeProperties& Properties)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetGameModeProperties");

	APavlov_GameLogic_SetGameModeProperties_Params params {};
	params.Properties = Properties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020EB00
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetFallDamage
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetFallDamage(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetFallDamage");

	APavlov_GameLogic_SetFallDamage_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020EA80
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                CashAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetEveryoneCash(int CashAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetEveryoneCash");

	APavlov_GameLogic_SetEveryoneCash_Params params {};
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020EA00
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.SetCashPerZombieKill
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Cash                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::SetCashPerZombieKill(int Cash)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.SetCashPerZombieKill");

	APavlov_GameLogic_SetCashPerZombieKill_Params params {};
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E9E0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void APavlov_GameLogic::PostRoundCleanUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.PostRoundCleanUp");

	APavlov_GameLogic_PostRoundCleanUp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnZombieKilled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACharacter*                                  Zombie                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoSpawned                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnZombieKilled(class APlayerState* Killer, class ACharacter* Zombie, bool bAutoSpawned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnZombieKilled");

	APavlov_GameLogic_OnZombieKilled_Params params {};
	params.Killer = Killer;
	params.Zombie = Zombie;
	params.bAutoSpawned = bAutoSpawned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		PavlovProxy_EPavlovRoundState                      OldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		PavlovProxy_EPavlovRoundState                      NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnRoundStateChanged(PavlovProxy_EPavlovRoundState OldState, PavlovProxy_EPavlovRoundState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundStateChanged");

	APavlov_GameLogic_OnRoundStateChanged_Params params {};
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd
//		Flags  -> (Event, Public, BlueprintEvent)
void APavlov_GameLogic::OnRoundEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundEnd");

	APavlov_GameLogic_OnRoundEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin
//		Flags  -> (Event, Public, BlueprintEvent)
void APavlov_GameLogic::OnRoundBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnRoundBegin");

	APavlov_GameLogic_OnRoundBegin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPavlovPlayerStatus                         PlayerStatus                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnPlayerSpawned(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerSpawned");

	APavlov_GameLogic_OnPlayerSpawned_Params params {};
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPavlovPlayerStatus                         PlayerStatus                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnPlayerLeftServer(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerLeftServer");

	APavlov_GameLogic_OnPlayerLeftServer_Params params {};
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPavlovPlayerStatus                         PlayerStatus                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class APlayerState*                                Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHeadshot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       KilledByItem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnPlayerKilled(const struct FPavlovPlayerStatus& PlayerStatus, class APlayerState* Killer, bool bHeadshot, const struct FName& KilledByItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerKilled");

	APavlov_GameLogic_OnPlayerKilled_Params params {};
	params.PlayerStatus = PlayerStatus;
	params.Killer = Killer;
	params.bHeadshot = bHeadshot;
	params.KilledByItem = KilledByItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPavlovPlayerStatus                         PlayerStatus                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnPlayerJoinedServer(const struct FPavlovPlayerStatus& PlayerStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnPlayerJoinedServer");

	APavlov_GameLogic_OnPlayerJoinedServer_Params params {};
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnCustomRconCommand
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     RconCommand                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnCustomRconCommand(const struct FString& RconCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnCustomRconCommand");

	APavlov_GameLogic_OnCustomRconCommand_Params params {};
	params.RconCommand = RconCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit
//		Flags  -> (Event, Public, BlueprintEvent)
void APavlov_GameLogic::OnCustomGameModeInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnCustomGameModeInit");

	APavlov_GameLogic_OnCustomGameModeInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E850
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPavlovPlayerStatus                         Status                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                TeamId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::OnAssignTeam(const struct FPavlovPlayerStatus& Status, int* TeamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.OnAssignTeam");

	APavlov_GameLogic_OnAssignTeam_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TeamId != nullptr)
		*TeamId = params.TeamId;

}


// Function:
//		Offset -> 0x0020E7C0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		bool                                               bStarting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::MulticastOnRoundStateChanged(bool bStarting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.MulticastOnRoundStateChanged");

	APavlov_GameLogic_MulticastOnRoundStateChanged_Params params {};
	params.bStarting = bStarting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E5F0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.ManuallySpawnZombies
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FTransform>                          RandomLocations                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ACharacter*>                          Zombies                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void APavlov_GameLogic::ManuallySpawnZombies(TArray<struct FTransform> RandomLocations, int Amount, bool* bSuccessful, TArray<class ACharacter*>* Zombies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.ManuallySpawnZombies");

	APavlov_GameLogic_ManuallySpawnZombies_Params params {};
	params.RandomLocations = RandomLocations;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Zombies != nullptr)
		*Zombies = params.Zombies;

}


// Function:
//		Offset -> 0x0020E5D0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.KillAllZombies
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void APavlov_GameLogic::KillAllZombies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.KillAllZombies");

	APavlov_GameLogic_KillAllZombies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E4B0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.KickPlayer
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bBan                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::KickPlayer(class APlayerState* PlayerState, const struct FString& Reason, bool bBan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.KickPlayer");

	APavlov_GameLogic_KickPlayer_Params params {};
	params.PlayerState = PlayerState;
	params.Reason = Reason;
	params.bBan = bBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E3F0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::IncrementTeamScore(int TeamId, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.IncrementTeamScore");

	APavlov_GameLogic_IncrementTeamScore_Params params {};
	params.TeamId = TeamId;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E330
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::IncrementPlayerScore(class APlayerState* PlayerState, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.IncrementPlayerScore");

	APavlov_GameLogic_IncrementPlayerScore_Params params {};
	params.PlayerState = PlayerState;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E270
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CashAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::GiveTeamCash(int TeamId, int CashAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GiveTeamCash");

	APavlov_GameLogic_GiveTeamCash_Params params {};
	params.TeamId = TeamId;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E1B0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CashAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::GivePlayerCash(class APlayerState* PlayerState, int CashAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GivePlayerCash");

	APavlov_GameLogic_GivePlayerCash_Params params {};
	params.PlayerState = PlayerState;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E130
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                CashAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::GiveEveryoneCash(int CashAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GiveEveryoneCash");

	APavlov_GameLogic_GiveEveryoneCash_Params params {};
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020E100
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GetZsToAutoSpawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_GameLogic::GetZsToAutoSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetZsToAutoSpawn");

	APavlov_GameLogic_GetZsToAutoSpawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020E0D0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GetZAliveCount
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_GameLogic::GetZAliveCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetZAliveCount");

	APavlov_GameLogic_GetZAliveCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020DFB0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void APavlov_GameLogic::GetSpawnTransform(class AController* Controller, struct FTransform* Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetSpawnTransform");

	APavlov_GameLogic_GetSpawnTransform_Params params {};
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function:
//		Offset -> 0x0020DF20
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GetRoundState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PavlovProxy_EPavlovRoundState                      State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::GetRoundState(PavlovProxy_EPavlovRoundState* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetRoundState");

	APavlov_GameLogic_GetRoundState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function:
//		Offset -> 0x0020DE60
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDominant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* APavlov_GameLogic::STATIC_GetPlayerHand(class APlayerState* PlayerState, bool bDominant)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetPlayerHand");

	APavlov_GameLogic_GetPlayerHand_Params params {};
	params.PlayerState = PlayerState;
	params.bDominant = bDominant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020DDE0
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		PavlovProxy_EPavlovGameModeType                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PavlovProxy_EPavlovGameModeType APavlov_GameLogic::STATIC_GetPavlovGameModeType(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetPavlovGameModeType");

	APavlov_GameLogic_GetPavlovGameModeType_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020DC40
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPavlovGameModeProperties                   Properties                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void APavlov_GameLogic::GetGameModeProperties(struct FPavlovGameModeProperties* Properties)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.GetGameModeProperties");

	APavlov_GameLogic_GetGameModeProperties_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Properties != nullptr)
		*Properties = params.Properties;

}


// Function:
//		Offset -> 0x0020DC20
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.EndTTTRound
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void APavlov_GameLogic::EndTTTRound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.EndTTTRound");

	APavlov_GameLogic_EndTTTRound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020DB70
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.CleanupZombieBodies
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void APavlov_GameLogic::CleanupZombieBodies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.CleanupZombieBodies");

	APavlov_GameLogic_CleanupZombieBodies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0020DA00
//		Name   -> Function PavlovProxy.Pavlov_GameLogic.AddZombiesToAutoSpawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TotalAmountToSpawn                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_GameLogic::AddZombiesToAutoSpawn(int Amount, int* TotalAmountToSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GameLogic.AddZombiesToAutoSpawn");

	APavlov_GameLogic_AddZombiesToAutoSpawn_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalAmountToSpawn != nullptr)
		*TotalAmountToSpawn = params.TotalAmountToSpawn;

}


// Function:
//		Offset -> 0x002152F0
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.SetLimitedAmmoType
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		PavlovProxy_ELimitedAmmoType                       AmmoType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_GlobalInfo::SetLimitedAmmoType(PavlovProxy_ELimitedAmmoType AmmoType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.SetLimitedAmmoType");

	UPavlov_GlobalInfo_SetLimitedAmmoType_Params params {};
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnLimitedAmmoModeChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		PavlovProxy_ELimitedAmmoType                       LimitedAmmoMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_GlobalInfo::OnLimitedAmmoModeChanged__DelegateSignature(PavlovProxy_ELimitedAmmoType LimitedAmmoMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnLimitedAmmoModeChanged__DelegateSignature");

	UPavlov_GlobalInfo_OnLimitedAmmoModeChanged__DelegateSignature_Params params {};
	params.LimitedAmmoMode = LimitedAmmoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetTTTPlayerInfo__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTTTPlayerInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FTTTPlayerInfo UPavlov_GlobalInfo::OnGetTTTPlayerInfo__DelegateSignature(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetTTTPlayerInfo__DelegateSignature");

	UPavlov_GlobalInfo_OnGetTTTPlayerInfo__DelegateSignature_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetLootMesh__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FAsyncLoadLootMesh                          LoadLootMesh                                               (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_GlobalInfo::OnGetLootMesh__DelegateSignature(const struct FAsyncLoadLootMesh& LoadLootMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetLootMesh__DelegateSignature");

	UPavlov_GlobalInfo_OnGetLootMesh__DelegateSignature_Params params {};
	params.LoadLootMesh = LoadLootMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetAllTTTPlayersInfo__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		TArray<struct FTTTPlayerInfo>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FTTTPlayerInfo> UPavlov_GlobalInfo::OnGetAllTTTPlayersInfo__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_GlobalInfo.OnGetAllTTTPlayersInfo__DelegateSignature");

	UPavlov_GlobalInfo_OnGetAllTTTPlayersInfo__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002137D0
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.GetTTTPlayerInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTTTPlayerInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FTTTPlayerInfo UPavlov_GlobalInfo::GetTTTPlayerInfo(class APlayerState* PlayerState, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.GetTTTPlayerInfo");

	UPavlov_GlobalInfo_GetTTTPlayerInfo_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213640
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.GetPHTaunts
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPavlov_PHTaunts*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPavlov_PHTaunts* UPavlov_GlobalInfo::GetPHTaunts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.GetPHTaunts");

	UPavlov_GlobalInfo_GetPHTaunts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213610
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.GetPHTauntAttenuation
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundAttenuation*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundAttenuation* UPavlov_GlobalInfo::GetPHTauntAttenuation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.GetPHTauntAttenuation");

	UPavlov_GlobalInfo_GetPHTauntAttenuation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002131D0
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.GetLootMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       LootID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnLootMeshLoaded                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_GlobalInfo::GetLootMesh(const struct FName& LootID, const struct FScriptDelegate& OnLootMeshLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.GetLootMesh");

	UPavlov_GlobalInfo_GetLootMesh_Params params {};
	params.LootID = LootID;
	params.OnLootMeshLoaded = OnLootMeshLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002131A0
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.GetLimitedAmmoType
//		Flags  -> (Final, Native, Public, Const)
// Parameters:
//		PavlovProxy_ELimitedAmmoType                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PavlovProxy_ELimitedAmmoType UPavlov_GlobalInfo::GetLimitedAmmoType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.GetLimitedAmmoType");

	UPavlov_GlobalInfo_GetLimitedAmmoType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212CF0
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.GetAllTTTPlayersInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FTTTPlayerInfo>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FTTTPlayerInfo> UPavlov_GlobalInfo::GetAllTTTPlayersInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.GetAllTTTPlayersInfo");

	UPavlov_GlobalInfo_GetAllTTTPlayersInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212C60
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.DisableVoting
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDisable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_GlobalInfo::DisableVoting(bool bDisable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.DisableVoting");

	UPavlov_GlobalInfo_DisableVoting_Params params {};
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00212BD0
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.DisableKillfeedBeep
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDisable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_GlobalInfo::DisableKillfeedBeep(bool bDisable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.DisableKillfeedBeep");

	UPavlov_GlobalInfo_DisableKillfeedBeep_Params params {};
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00212B40
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.DisableAttachmentMode
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDisable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_GlobalInfo::DisableAttachmentMode(bool bDisable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.DisableAttachmentMode");

	UPavlov_GlobalInfo_DisableAttachmentMode_Params params {};
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002126C0
//		Name   -> Function PavlovProxy.Pavlov_GlobalInfo.AddItemToList
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FItemList                                   Item                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPavlov_GlobalInfo::AddItemToList(const struct FItemList& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_GlobalInfo.AddItemToList");

	UPavlov_GlobalInfo_AddItemToList_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002153F0
//		Name   -> Function PavlovProxy.Pavlov_HandProxy.TriggerDown
//		Flags  -> (Final, Native, Public)
void UPavlov_HandProxy::TriggerDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.TriggerDown");

	UPavlov_HandProxy_TriggerDown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002149B0
//		Name   -> Function PavlovProxy.Pavlov_HandProxy.ReplicateInteract_Server
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_HandProxy::ReplicateInteract_Server(PavlovProxy_EInteractType InteractType, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.ReplicateInteract_Server");

	UPavlov_HandProxy_ReplicateInteract_Server_Params params {};
	params.InteractType = InteractType;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00213A70
//		Name   -> Function PavlovProxy.Pavlov_HandProxy.Grab
//		Flags  -> (Final, Native, Public)
void UPavlov_HandProxy::Grab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.Grab");

	UPavlov_HandProxy_Grab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002136F0
//		Name   -> Function PavlovProxy.Pavlov_HandProxy.GetPlayerProxy
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APavlov_PlayerProxy*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APavlov_PlayerProxy* UPavlov_HandProxy::GetPlayerProxy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.GetPlayerProxy");

	UPavlov_HandProxy_GetPlayerProxy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002135E0
//		Name   -> Function PavlovProxy.Pavlov_HandProxy.GetOverlappingInteractInterface
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UPavlov_HandProxy::GetOverlappingInteractInterface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_HandProxy.GetOverlappingInteractInterface");

	UPavlov_HandProxy_GetOverlappingInteractInterface_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00214100
//		Name   -> Function PavlovProxy.Pavlov_InteractBox.InteractServer
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractBox::InteractServer(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractBox.InteractServer");

	UPavlov_InteractBox_InteractServer_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00213D10
//		Name   -> Function PavlovProxy.Pavlov_InteractBox.InteractClient
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractBox::InteractClient(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractBox.InteractClient");

	UPavlov_InteractBox_InteractClient_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00214010
//		Name   -> Function PavlovProxy.Pavlov_InteractInterface.InteractServer
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractInterface::InteractServer(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractInterface.InteractServer");

	UPavlov_InteractInterface_InteractServer_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00213C10
//		Name   -> Function PavlovProxy.Pavlov_InteractInterface.InteractClient
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractInterface::InteractClient(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractInterface.InteractClient");

	UPavlov_InteractInterface_InteractClient_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00214200
//		Name   -> Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractServer
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractSkeletalMesh::InteractServer(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractServer");

	UPavlov_InteractSkeletalMesh_InteractServer_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00213E10
//		Name   -> Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractClient
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractSkeletalMesh::InteractClient(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractSkeletalMesh.InteractClient");

	UPavlov_InteractSkeletalMesh_InteractClient_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00214300
//		Name   -> Function PavlovProxy.Pavlov_InteractStaticMesh.InteractServer
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractStaticMesh::InteractServer(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractStaticMesh.InteractServer");

	UPavlov_InteractStaticMesh_InteractServer_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00213F10
//		Name   -> Function PavlovProxy.Pavlov_InteractStaticMesh.InteractClient
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PavlovProxy_EInteractType                          InteractType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_HandProxy*                           HandProxy                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     InteractObj                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_InteractStaticMesh::InteractClient(PavlovProxy_EInteractType InteractType, class UPavlov_HandProxy* HandProxy, class UObject* InteractObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_InteractStaticMesh.InteractClient");

	UPavlov_InteractStaticMesh_InteractClient_Params params {};
	params.InteractType = InteractType;
	params.HandProxy = HandProxy;
	params.InteractObj = InteractObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002151D0
//		Name   -> Function PavlovProxy.Pavlov_Library.SendMsg
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMessage                                    Msg                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_Library::STATIC_SendMsg(struct FMessage* Msg, class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SendMsg");

	UPavlov_Library_SendMsg_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;

}


// Function:
//		Offset -> 0x00214E50
//		Name   -> Function PavlovProxy.Pavlov_Library.SendAllMsg
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMessage                                    Msg                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_Library::STATIC_SendAllMsg(struct FMessage* Msg, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SendAllMsg");

	UPavlov_Library_SendAllMsg_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;

}


// Function:
//		Offset -> 0x00214C90
//		Name   -> Function PavlovProxy.Pavlov_Library.SaveStringToFile
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     String                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowOverwrite                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_SaveStringToFile(class UObject* WorldContextObject, struct FString* String, const struct FString& Filename, bool bAllowOverwrite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SaveStringToFile");

	UPavlov_Library_SaveStringToFile_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;
	params.bAllowOverwrite = bAllowOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00214AB0
//		Name   -> Function PavlovProxy.Pavlov_Library.SaveStringArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             SaveArray                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               AllowOverwrite                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_SaveStringArray(class UObject* WorldContextObject, TArray<struct FString>* SaveArray, const struct FString& Filename, bool AllowOverwrite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.SaveStringArray");

	UPavlov_Library_SaveStringArray_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;
	params.AllowOverwrite = AllowOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveArray != nullptr)
		*SaveArray = params.SaveArray;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00214890
//		Name   -> Function PavlovProxy.Pavlov_Library.LogToConsole
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     LogMsg                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bError                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_Library::STATIC_LogToConsole(const struct FString& LogMsg, bool bError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.LogToConsole");

	UPavlov_Library_LogToConsole_Params params {};
	params.LogMsg = LogMsg;
	params.bError = bError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00214630
//		Name   -> Function PavlovProxy.Pavlov_Library.LoadStringFromFile
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_LoadStringFromFile(class UObject* WorldContextObject, struct FString* String, const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.LoadStringFromFile");

	UPavlov_Library_LoadStringFromFile_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00214480
//		Name   -> Function PavlovProxy.Pavlov_Library.LoadStringArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Strings                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_LoadStringArray(class UObject* WorldContextObject, TArray<struct FString>* Strings, const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.LoadStringArray");

	UPavlov_Library_LoadStringArray_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Strings != nullptr)
		*Strings = params.Strings;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00214400
//		Name   -> Function PavlovProxy.Pavlov_Library.IsCommunityServer
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_IsCommunityServer(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.IsCommunityServer");

	UPavlov_Library_IsCommunityServer_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213B90
//		Name   -> Function PavlovProxy.Pavlov_Library.HasPlayerProxy
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_HasPlayerProxy(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.HasPlayerProxy");

	UPavlov_Library_HasPlayerProxy_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213B10
//		Name   -> Function PavlovProxy.Pavlov_Library.HasPlayerInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_HasPlayerInfo(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.HasPlayerInfo");

	UPavlov_Library_HasPlayerInfo_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213A90
//		Name   -> Function PavlovProxy.Pavlov_Library.HasMsgHandler
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_HasMsgHandler(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.HasMsgHandler");

	UPavlov_Library_HasMsgHandler_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213910
//		Name   -> Function PavlovProxy.Pavlov_Library.GetWhitelist
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Whitelist                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UPavlov_Library::STATIC_GetWhitelist(class UObject* WorldContextObject, bool* bSuccessful, TArray<struct FString>* Whitelist)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetWhitelist");

	UPavlov_Library_GetWhitelist_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Whitelist != nullptr)
		*Whitelist = params.Whitelist;

}


// Function:
//		Offset -> 0x00213720
//		Name   -> Function PavlovProxy.Pavlov_Library.GetPlayerProxy
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APavlov_PlayerProxy*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APavlov_PlayerProxy* UPavlov_Library::STATIC_GetPlayerProxy(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetPlayerProxy");

	UPavlov_Library_GetPlayerProxy_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213670
//		Name   -> Function PavlovProxy.Pavlov_Library.GetPlayerInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_PlayerInfo*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPavlov_PlayerInfo* UPavlov_Library::STATIC_GetPlayerInfo(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetPlayerInfo");

	UPavlov_Library_GetPlayerInfo_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213560
//		Name   -> Function PavlovProxy.Pavlov_Library.GetMsgHandler
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_MsgHandler*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPavlov_MsgHandler* UPavlov_Library::STATIC_GetMsgHandler(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetMsgHandler");

	UPavlov_Library_GetMsgHandler_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213400
//		Name   -> Function PavlovProxy.Pavlov_Library.GetModerators
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Mods                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UPavlov_Library::STATIC_GetModerators(class UObject* WorldContextObject, bool* bSuccessful, TArray<struct FString>* Mods)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetModerators");

	UPavlov_Library_GetModerators_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
	if (Mods != nullptr)
		*Mods = params.Mods;

}


// Function:
//		Offset -> 0x00213120
//		Name   -> Function PavlovProxy.Pavlov_Library.GetGlobalInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_GlobalInfo*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPavlov_GlobalInfo* UPavlov_Library::STATIC_GetGlobalInfo(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetGlobalInfo");

	UPavlov_Library_GetGlobalInfo_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002130A0
//		Name   -> Function PavlovProxy.Pavlov_Library.GetGameLogic
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APavlov_GameLogic*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APavlov_GameLogic* UPavlov_Library::STATIC_GetGameLogic(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetGameLogic");

	UPavlov_Library_GetGameLogic_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212FE0
//		Name   -> Function PavlovProxy.Pavlov_Library.GetDayOfWeek
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   DateTime                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		PavlovProxy_EDay                                   DayOfTheWeek                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_Library::STATIC_GetDayOfWeek(const struct FDateTime& DateTime, PavlovProxy_EDay* DayOfTheWeek)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetDayOfWeek");

	UPavlov_Library_GetDayOfWeek_Params params {};
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DayOfTheWeek != nullptr)
		*DayOfTheWeek = params.DayOfTheWeek;

}


// Function:
//		Offset -> 0x00212EE0
//		Name   -> Function PavlovProxy.Pavlov_Library.GetCustomItemByClass
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      CustomItemClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APavlov_CustomItem*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APavlov_CustomItem* UPavlov_Library::STATIC_GetCustomItemByClass(class AActor* Item, class UClass* CustomItemClass, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetCustomItemByClass");

	UPavlov_Library_GetCustomItemByClass_Params params {};
	params.Item = Item;
	params.CustomItemClass = CustomItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212DD0
//		Name   -> Function PavlovProxy.Pavlov_Library.GetBanListInternal
//		Flags  -> (Final, Native, Static, Public, HasOutParms)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             BanList                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_GetBanListInternal(class UObject* WorldContextObject, TArray<struct FString>* BanList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.GetBanListInternal");

	UPavlov_Library_GetBanListInternal_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BanList != nullptr)
		*BanList = params.BanList;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212950
//		Name   -> Function PavlovProxy.Pavlov_Library.AddPlayerProxy
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      PlayerProxyClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APavlov_PlayerProxy*                         PlayerProxy                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_AddPlayerProxy(class UClass* PlayerProxyClass, class APawn* Pawn, class APavlov_PlayerProxy** PlayerProxy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.AddPlayerProxy");

	UPavlov_Library_AddPlayerProxy_Params params {};
	params.PlayerProxyClass = PlayerProxyClass;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerProxy != nullptr)
		*PlayerProxy = params.PlayerProxy;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212850
//		Name   -> Function PavlovProxy.Pavlov_Library.AddPlayerInfo
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      PlayerInfoClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_PlayerInfo*                          PlayerInfo                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_AddPlayerInfo(class UClass* PlayerInfoClass, class APlayerState* PlayerState, class UPavlov_PlayerInfo** PlayerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.AddPlayerInfo");

	UPavlov_Library_AddPlayerInfo_Params params {};
	params.PlayerInfoClass = PlayerInfoClass;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212780
//		Name   -> Function PavlovProxy.Pavlov_Library.AddMsgHandler
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPavlov_MsgHandler*                          MsgHandler                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPavlov_Library::STATIC_AddMsgHandler(class APlayerState* PlayerState, class UPavlov_MsgHandler** MsgHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_Library.AddMsgHandler");

	UPavlov_Library_AddMsgHandler_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MsgHandler != nullptr)
		*MsgHandler = params.MsgHandler;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00215370
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.SetMaxMessages
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_MsgHandler::SetMaxMessages(int Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.SetMaxMessages");

	UPavlov_MsgHandler_SetMaxMessages_Params params {};
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002150A0
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.SendMessageToTeam
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMessage                                    Msg                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_MsgHandler::SendMessageToTeam(struct FMessage* Msg, int TeamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.SendMessageToTeam");

	UPavlov_MsgHandler_SendMessageToTeam_Params params {};
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;

}


// Function:
//		Offset -> 0x00214F70
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.SendMessage
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FMessage                                    Msg                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_MsgHandler::SendMessage(struct FMessage* Msg, class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.SendMessage");

	UPavlov_MsgHandler_SendMessage_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;

}


// Function:
//		Offset -> 0x002147B0
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.LocalSendMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMessage                                    Msg                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPavlov_MsgHandler::LocalSendMessage(struct FMessage* Msg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.LocalSendMessage");

	UPavlov_MsgHandler_LocalSendMessage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Msg != nullptr)
		*Msg = params.Msg;

}


// Function:
//		Offset -> 0x002137A0
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.GetPlayerState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APlayerState*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerState* UPavlov_MsgHandler::GetPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.GetPlayerState");

	UPavlov_MsgHandler_GetPlayerState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00213300
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.GetMessages
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FMessage>                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMessage> UPavlov_MsgHandler::GetMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.GetMessages");

	UPavlov_MsgHandler_GetMessages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002132D0
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.GetMaxMessages
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPavlov_MsgHandler::GetMaxMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.GetMaxMessages");

	UPavlov_MsgHandler_GetMaxMessages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00212A50
//		Name   -> Function PavlovProxy.Pavlov_MsgHandler.Client_ReceivedMsg
//		Flags  -> (Net, Native, Event, Protected, NetClient)
// Parameters:
//		struct FMessage                                    Msg                                                        (Parm, NativeAccessSpecifierPublic)
void UPavlov_MsgHandler::Client_ReceivedMsg(const struct FMessage& Msg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_MsgHandler.Client_ReceivedMsg");

	UPavlov_MsgHandler_Client_ReceivedMsg_Params params {};
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218620
//		Name   -> Function PavlovProxy.Pavlov_PHTaunts.GetRandomTaunt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPavlov_PHTaunts::GetRandomTaunt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PHTaunts.GetRandomTaunt");

	UPavlov_PHTaunts_GetRandomTaunt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00219150
//		Name   -> Function PavlovProxy.Pavlov_PlayerInfo.SetRadioChannel
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewRadioChannel                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlov_PlayerInfo::SetRadioChannel(int NewRadioChannel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.SetRadioChannel");

	UPavlov_PlayerInfo_SetRadioChannel_Params params {};
	params.NewRadioChannel = NewRadioChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetVRDevice__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		PavlovProxy_EVRDevice                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PavlovProxy_EVRDevice UPavlov_PlayerInfo::OnGetVRDevice__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetVRDevice__DelegateSignature");

	UPavlov_PlayerInfo_OnGetVRDevice__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetTeamId__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPavlov_PlayerInfo::OnGetTeamId__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnGetTeamId__DelegateSignature");

	UPavlov_PlayerInfo_OnGetTeamId__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnDisableFallSound__DelegateSignature
//		Flags  -> (Public, Delegate)
void UPavlov_PlayerInfo::OnDisableFallSound__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerInfo.OnDisableFallSound__DelegateSignature");

	UPavlov_PlayerInfo_OnDisableFallSound__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002186F0
//		Name   -> Function PavlovProxy.Pavlov_PlayerInfo.GetVRDevice
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		PavlovProxy_EVRDevice                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PavlovProxy_EVRDevice UPavlov_PlayerInfo::GetVRDevice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.GetVRDevice");

	UPavlov_PlayerInfo_GetVRDevice_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002186C0
//		Name   -> Function PavlovProxy.Pavlov_PlayerInfo.GetTeam
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPavlov_PlayerInfo::GetTeam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.GetTeam");

	UPavlov_PlayerInfo_GetTeam_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002137A0
//		Name   -> Function PavlovProxy.Pavlov_PlayerInfo.GetPlayerState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APlayerState*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerState* UPavlov_PlayerInfo::GetPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.GetPlayerState");

	UPavlov_PlayerInfo_GetPlayerState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00217B10
//		Name   -> Function PavlovProxy.Pavlov_PlayerInfo.DisableFallSound
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
void UPavlov_PlayerInfo::DisableFallSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerInfo.DisableFallSound");

	UPavlov_PlayerInfo_DisableFallSound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002192D0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.StartSkinRetryTimer
//		Flags  -> (Final, Native, Private)
void APavlov_PlayerProxy::StartSkinRetryTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.StartSkinRetryTimer");

	APavlov_PlayerProxy_StartSkinRetryTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00219250
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.SetVoiceAttenuation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USoundAttenuation*                           Attenuation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::SetVoiceAttenuation(class USoundAttenuation* Attenuation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetVoiceAttenuation");

	APavlov_PlayerProxy_SetVoiceAttenuation_Params params {};
	params.Attenuation = Attenuation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002191D0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.SetSkinName
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FName                                       NewSkin                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::SetSkinName(const struct FName& NewSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetSkinName");

	APavlov_PlayerProxy_SetSkinName_Params params {};
	params.NewSkin = NewSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002190D0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerSkin
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Skin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::SetPlayerSkin(const struct FName& Skin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerSkin");

	APavlov_PlayerProxy_SetPlayerSkin_Params params {};
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00219050
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerCullDistance
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              CullDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::SetPlayerCullDistance(float CullDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetPlayerCullDistance");

	APavlov_PlayerProxy_SetPlayerCullDistance_Params params {};
	params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218F40
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.SetPainkillerDetails
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Painkillers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumOfPainkillers                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HealPerPainkiller                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::SetPainkillerDetails(class AActor* Painkillers, int NumOfPainkillers, float HealPerPainkiller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetPainkillerDetails");

	APavlov_PlayerProxy_SetPainkillerDetails_Params params {};
	params.Painkillers = Painkillers;
	params.NumOfPainkillers = NumOfPainkillers;
	params.HealPerPainkiller = HealPerPainkiller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218E80
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.SetNumOfSyringeRevives
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Syringe                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumOfRevives                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::SetNumOfSyringeRevives(class AActor* Syringe, int NumOfRevives)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.SetNumOfSyringeRevives");

	APavlov_PlayerProxy_SetNumOfSyringeRevives_Params params {};
	params.Syringe = Syringe;
	params.NumOfRevives = NumOfRevives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218E50
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.RevivePlayer
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::RevivePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.RevivePlayer");

	APavlov_PlayerProxy_RevivePlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218D90
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.RemoveAmmo
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::RemoveAmmo(const struct FName& AmmoId, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.RemoveAmmo");

	APavlov_PlayerProxy_RemoveAmmo_Params params {};
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218D00
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.PlayerDied
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::PlayerDied(class AActor* KilledActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.PlayerDied");

	APavlov_PlayerProxy_PlayerDied_Params params {};
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218C80
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.PlayerDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::PlayerDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.PlayerDestroyed");

	APavlov_PlayerProxy_PlayerDestroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218C00
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.OwnerDied
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OwnerDied(class AActor* KilledActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OwnerDied");

	APavlov_PlayerProxy_OwnerDied_Params params {};
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChangeFailed
//		Flags  -> (Final, Native, Private)
void APavlov_PlayerProxy::OnSkinChangeFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChangeFailed");

	APavlov_PlayerProxy_OnSkinChangeFailed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       Skin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnSkinChanged(const struct FName& Skin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnSkinChanged");

	APavlov_PlayerProxy_OnSkinChanged_Params params {};
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetSyringeRevives__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AActor*                                      Syringe                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumOfRevives                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnSetSyringeRevives__DelegateSignature(class AActor* Syringe, int NumOfRevives)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetSyringeRevives__DelegateSignature");

	APavlov_PlayerProxy_OnSetSyringeRevives__DelegateSignature_Params params {};
	params.Syringe = Syringe;
	params.NumOfRevives = NumOfRevives;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPlayerSkin__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       PlayerSkin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnSetPlayerSkin__DelegateSignature(const struct FName& PlayerSkin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPlayerSkin__DelegateSignature");

	APavlov_PlayerProxy_OnSetPlayerSkin__DelegateSignature_Params params {};
	params.PlayerSkin = PlayerSkin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPainkillerDetails__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AActor*                                      Painkillers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumOfPills                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              AmountPerHeal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnSetPainkillerDetails__DelegateSignature(class AActor* Painkillers, int NumOfPills, float AmountPerHeal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetPainkillerDetails__DelegateSignature");

	APavlov_PlayerProxy_OnSetPainkillerDetails__DelegateSignature_Params params {};
	params.Painkillers = Painkillers;
	params.NumOfPills = NumOfPills;
	params.AmountPerHeal = AmountPerHeal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetAttenuation__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class USoundAttenuation*                           Attenuation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnSetAttenuation__DelegateSignature(class USoundAttenuation* Attenuation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnSetAttenuation__DelegateSignature");

	APavlov_PlayerProxy_OnSetAttenuation__DelegateSignature_Params params {};
	params.Attenuation = Attenuation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRevivePlayer__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnRevivePlayer__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRevivePlayer__DelegateSignature");

	APavlov_PlayerProxy_OnRevivePlayer__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.OnRep_PlayerSkinChanged
//		Flags  -> (Final, Native, Private)
void APavlov_PlayerProxy::OnRep_PlayerSkinChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnRep_PlayerSkinChanged");

	APavlov_PlayerProxy_OnRep_PlayerSkinChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRemoveAmmo__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::OnRemoveAmmo__DelegateSignature(const struct FName& AmmoId, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnRemoveAmmo__DelegateSignature");

	APavlov_PlayerProxy_OnRemoveAmmo__DelegateSignature_Params params {};
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.OnPlayerDeath
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnPlayerDeath(class AActor* KilledActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.OnPlayerDeath");

	APavlov_PlayerProxy_OnPlayerDeath_Params params {};
	params.KilledActor = KilledActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnLeaveVehicle__DelegateSignature
//		Flags  -> (Public, Delegate)
void APavlov_PlayerProxy::OnLeaveVehicle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnLeaveVehicle__DelegateSignature");

	APavlov_PlayerProxy_OnLeaveVehicle__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsPickupDisabled__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnIsPickupDisabled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsPickupDisabled__DelegateSignature");

	APavlov_PlayerProxy_OnIsPickupDisabled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsLobbyLeader__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnIsLobbyLeader__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsLobbyLeader__DelegateSignature");

	APavlov_PlayerProxy_OnIsLobbyLeader__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsInVehicle__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnIsInVehicle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnIsInVehicle__DelegateSignature");

	APavlov_PlayerProxy_OnIsInVehicle__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasItem__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* APavlov_PlayerProxy::OnHasItem__DelegateSignature(const struct FName& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasItem__DelegateSignature");

	APavlov_PlayerProxy_OnHasItem__DelegateSignature_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasAmmo__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::OnHasAmmo__DelegateSignature(const struct FName& AmmoId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnHasAmmo__DelegateSignature");

	APavlov_PlayerProxy_OnHasAmmo__DelegateSignature_Params params {};
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetSkinSkeleton__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* APavlov_PlayerProxy::OnGetSkinSkeleton__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetSkinSkeleton__DelegateSignature");

	APavlov_PlayerProxy_OnGetSkinSkeleton__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetNumPainkillerPills__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AActor*                                      Painkillers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::OnGetNumPainkillerPills__DelegateSignature(class AActor* Painkillers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetNumPainkillerPills__DelegateSignature");

	APavlov_PlayerProxy_OnGetNumPainkillerPills__DelegateSignature_Params params {};
	params.Painkillers = Painkillers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetNumOfSyringeRevives__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AActor*                                      Syringe                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::OnGetNumOfSyringeRevives__DelegateSignature(class AActor* Syringe)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetNumOfSyringeRevives__DelegateSignature");

	APavlov_PlayerProxy_OnGetNumOfSyringeRevives__DelegateSignature_Params params {};
	params.Syringe = Syringe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetInventorySlotVis__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnGetInventorySlotVis__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetInventorySlotVis__DelegateSignature");

	APavlov_PlayerProxy_OnGetInventorySlotVis__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetCompatibleSlot__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char APavlov_PlayerProxy::OnGetCompatibleSlot__DelegateSignature(const struct FName& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetCompatibleSlot__DelegateSignature");

	APavlov_PlayerProxy_OnGetCompatibleSlot__DelegateSignature_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAttachments__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AActor*                                      Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> APavlov_PlayerProxy::OnGetAttachments__DelegateSignature(class AActor* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAttachments__DelegateSignature");

	APavlov_PlayerProxy_OnGetAttachments__DelegateSignature_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAmmoId__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AActor*                                      Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName APavlov_PlayerProxy::OnGetAmmoId__DelegateSignature(class AActor* Weapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnGetAmmoId__DelegateSignature");

	APavlov_PlayerProxy_OnGetAmmoId__DelegateSignature_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItems__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bDominant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnDropItems__DelegateSignature(bool bDominant, bool bDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItems__DelegateSignature");

	APavlov_PlayerProxy_OnDropItems__DelegateSignature_Params params {};
	params.bDominant = bDominant;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItem__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromHandsOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnDropItem__DelegateSignature(const struct FName& Item, bool bDestroy, bool bFromHandsOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropItem__DelegateSignature");

	APavlov_PlayerProxy_OnDropItem__DelegateSignature_Params params {};
	params.Item = Item;
	params.bDestroy = bDestroy;
	params.bFromHandsOnly = bFromHandsOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropHeldItems__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bDominant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bBoth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnDropHeldItems__DelegateSignature(bool bDominant, bool bBoth, bool bDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDropHeldItems__DelegateSignature");

	APavlov_PlayerProxy_OnDropHeldItems__DelegateSignature_Params params {};
	params.bDominant = bDominant;
	params.bBoth = bBoth;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDisablePickup__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bDisablePickup                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnDisablePickup__DelegateSignature(bool bDisablePickup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnDisablePickup__DelegateSignature");

	APavlov_PlayerProxy_OnDisablePickup__DelegateSignature_Params params {};
	params.bDisablePickup = bDisablePickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnCanRevive__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::OnCanRevive__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnCanRevive__DelegateSignature");

	APavlov_PlayerProxy_OnCanRevive__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnAddAmmo__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::OnAddAmmo__DelegateSignature(const struct FName& AmmoId, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PlayerProxy.OnAddAmmo__DelegateSignature");

	APavlov_PlayerProxy_OnAddAmmo__DelegateSignature_Params params {};
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BC0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.LeaveVehicle
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void APavlov_PlayerProxy::LeaveVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.LeaveVehicle");

	APavlov_PlayerProxy_LeaveVehicle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218B90
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.IsPickupDisabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::IsPickupDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.IsPickupDisabled");

	APavlov_PlayerProxy_IsPickupDisabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218B60
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.IsLobbyLeader
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::IsLobbyLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.IsLobbyLeader");

	APavlov_PlayerProxy_IsLobbyLeader_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218B30
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.IsInVehicle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::IsInVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.IsInVehicle");

	APavlov_PlayerProxy_IsInVehicle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218B10
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.InitializeClient
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
void APavlov_PlayerProxy::InitializeClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.InitializeClient");

	APavlov_PlayerProxy_InitializeClient_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002189F0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.HasItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       ItemId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHasItem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::HasItem(const struct FName& ItemId, bool* bHasItem, class AActor** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.HasItem");

	APavlov_PlayerProxy_HasItem_Params params {};
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasItem != nullptr)
		*bHasItem = params.bHasItem;
	if (Item != nullptr)
		*Item = params.Item;

}


// Function:
//		Offset -> 0x00218920
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.HasAmmo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AmmoAmount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::HasAmmo(const struct FName& AmmoId, int* AmmoAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.HasAmmo");

	APavlov_PlayerProxy_HasAmmo_Params params {};
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AmmoAmount != nullptr)
		*AmmoAmount = params.AmmoAmount;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218820
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAttachments
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AActor*                                      Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FName>                               Attachments                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::GetWeaponAttachments(class AActor* Weapon, TArray<struct FName>* Attachments)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAttachments");

	APavlov_PlayerProxy_GetWeaponAttachments_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Attachments != nullptr)
		*Attachments = params.Attachments;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218750
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAmmoId
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AActor*                                      Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AmmoId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::GetWeaponAmmoId(class AActor* Weapon, struct FName* AmmoId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetWeaponAmmoId");

	APavlov_PlayerProxy_GetWeaponAmmoId_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AmmoId != nullptr)
		*AmmoId = params.AmmoId;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218720
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetVoiceAttenuation
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class USoundAttenuation*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundAttenuation* APavlov_PlayerProxy::GetVoiceAttenuation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetVoiceAttenuation");

	APavlov_PlayerProxy_GetVoiceAttenuation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218690
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetSkinSkeleton
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* APavlov_PlayerProxy::GetSkinSkeleton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetSkinSkeleton");

	APavlov_PlayerProxy_GetSkinSkeleton_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218580
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerVitality
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPlayerVitality                             PlayerVitality                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::GetPlayerVitality(struct FPlayerVitality* PlayerVitality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerVitality");

	APavlov_PlayerProxy_GetPlayerVitality_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerVitality != nullptr)
		*PlayerVitality = params.PlayerVitality;

}


// Function:
//		Offset -> 0x00218540
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkin
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName APavlov_PlayerProxy::GetPlayerSkin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkin");

	APavlov_PlayerProxy_GetPlayerSkin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218510
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkeleton
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* APavlov_PlayerProxy::GetPlayerSkeleton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPlayerSkeleton");

	APavlov_PlayerProxy_GetPlayerSkeleton_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002184E0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* APavlov_PlayerProxy::GetPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetPawn");

	APavlov_PlayerProxy_GetPawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218410
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetNumOfSyringeRevives
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AActor*                                      Syringe                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumOfRevives                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::GetNumOfSyringeRevives(class AActor* Syringe, int* NumOfRevives)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetNumOfSyringeRevives");

	APavlov_PlayerProxy_GetNumOfSyringeRevives_Params params {};
	params.Syringe = Syringe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumOfRevives != nullptr)
		*NumOfRevives = params.NumOfRevives;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218340
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetNumOfPainkillerPills
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AActor*                                      Painkillers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumOfPills                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::GetNumOfPainkillerPills(class AActor* Painkillers, int* NumOfPills)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetNumOfPainkillerPills");

	APavlov_PlayerProxy_GetNumOfPainkillerPills_Params params {};
	params.Painkillers = Painkillers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumOfPills != nullptr)
		*NumOfPills = params.NumOfPills;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002181F0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetHeldItem
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               bDominantHand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHasItem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPlayerItem                                 Item                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::GetHeldItem(bool bDominantHand, bool* bHasItem, struct FPlayerItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetHeldItem");

	APavlov_PlayerProxy_GetHeldItem_Params params {};
	params.bDominantHand = bDominantHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bHasItem != nullptr)
		*bHasItem = params.bHasItem;
	if (Item != nullptr)
		*Item = params.Item;

}


// Function:
//		Offset -> 0x00218150
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetCustomHand
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       SkinName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMesh* APavlov_PlayerProxy::GetCustomHand(const struct FName& SkinName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetCustomHand");

	APavlov_PlayerProxy_GetCustomHand_Params params {};
	params.SkinName = SkinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00218080
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetCompatibleSlot
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       ItemId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Slot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::GetCompatibleSlot(const struct FName& ItemId, unsigned char* Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetCompatibleSlot");

	APavlov_PlayerProxy_GetCompatibleSlot_Params params {};
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00217FD0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetAllItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FPlayerItem>                         Items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::GetAllItems(TArray<struct FPlayerItem>* Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetAllItems");

	APavlov_PlayerProxy_GetAllItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function:
//		Offset -> 0x00217F20
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.GetAllInventoryItems
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FInventoryItem>                      InvItems                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::GetAllInventoryItems(TArray<struct FInventoryItem>* InvItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.GetAllInventoryItems");

	APavlov_PlayerProxy_GetAllInventoryItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InvItems != nullptr)
		*InvItems = params.InvItems;

}


// Function:
//		Offset -> 0x00217ED0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.EnableClientInput
//		Flags  -> (Final, Native, Private)
void APavlov_PlayerProxy::EnableClientInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.EnableClientInput");

	APavlov_PlayerProxy_EnableClientInput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00217D60
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.DropItem
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromHandsOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::DropItem(const struct FName& Item, bool bDestroy, bool bFromHandsOnly, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DropItem");

	APavlov_PlayerProxy_DropItem_Params params {};
	params.Item = Item;
	params.bDestroy = bDestroy;
	params.bFromHandsOnly = bFromHandsOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

}


// Function:
//		Offset -> 0x00217C90
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.DropHeld
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		PavlovProxy_EHands                                 hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDestroyItems                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::DropHeld(PavlovProxy_EHands hand, bool bDestroyItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DropHeld");

	APavlov_PlayerProxy_DropHeld_Params params {};
	params.hand = hand;
	params.bDestroyItems = bDestroyItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00217BC0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.DropAll
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDestroyItems                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInventoryOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::DropAll(bool bDestroyItems, bool bInventoryOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DropAll");

	APavlov_PlayerProxy_DropAll_Params params {};
	params.bDestroyItems = bDestroyItems;
	params.bInventoryOnly = bInventoryOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00217B30
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.DisablePickup
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDisablePickup                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::DisablePickup(bool bDisablePickup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DisablePickup");

	APavlov_PlayerProxy_DisablePickup_Params params {};
	params.bDisablePickup = bDisablePickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00217AF0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.DisableClientInput
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
void APavlov_PlayerProxy::DisableClientInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.DisableClientInput");

	APavlov_PlayerProxy_DisableClientInput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00217A20
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.CustomRemoveAmmo
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RemoveAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::CustomRemoveAmmo(const struct FName& AmmoId, int RemoveAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.CustomRemoveAmmo");

	APavlov_PlayerProxy_CustomRemoveAmmo_Params params {};
	params.AmmoId = AmmoId;
	params.RemoveAmount = RemoveAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00217910
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.CustomGiveAmmoForBuy
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       GunId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MagMaxAmmo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::CustomGiveAmmoForBuy(const struct FName& AmmoId, const struct FName& GunId, int MagMaxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.CustomGiveAmmoForBuy");

	APavlov_PlayerProxy_CustomGiveAmmoForBuy_Params params {};
	params.AmmoId = AmmoId;
	params.GunId = GunId;
	params.MagMaxAmmo = MagMaxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00217870
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.CustomGetAmmoAmount
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::CustomGetAmmoAmount(const struct FName& AmmoId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.CustomGetAmmoAmount");

	APavlov_PlayerProxy_CustomGetAmmoAmount_Params params {};
	params.AmmoId = AmmoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002177A0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.CustomAddAmmo
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PlayerProxy::CustomAddAmmo(const struct FName& AmmoId, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.CustomAddAmmo");

	APavlov_PlayerProxy_CustomAddAmmo_Params params {};
	params.AmmoId = AmmoId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00217770
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.CanRevive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PlayerProxy::CanRevive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.CanRevive");

	APavlov_PlayerProxy_CanRevive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x002176B0
//		Name   -> Function PavlovProxy.Pavlov_PlayerProxy.AddAmmo
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       AmmoId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AmountToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PlayerProxy::AddAmmo(const struct FName& AmmoId, int AmountToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PlayerProxy.AddAmmo");

	APavlov_PlayerProxy_AddAmmo_Params params {};
	params.AmmoId = AmmoId;
	params.AmountToAdd = AmountToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnSwitchedTeams_Server__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void APavlov_PushBombObjective::OnSwitchedTeams_Server__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnSwitchedTeams_Server__DelegateSignature");

	APavlov_PushBombObjective_OnSwitchedTeams_Server__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnPushObjectiveStateChanged__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		PavlovProxy_EPushObjectiveState                    ObjectiveState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APavlov_PushBombObjective::OnPushObjectiveStateChanged__DelegateSignature(PavlovProxy_EPushObjectiveState ObjectiveState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnPushObjectiveStateChanged__DelegateSignature");

	APavlov_PushBombObjective_OnPushObjectiveStateChanged__DelegateSignature_Params params {};
	params.ObjectiveState = ObjectiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnGetObjectiveState__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		PavlovProxy_EPushObjectiveState                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PavlovProxy_EPushObjectiveState APavlov_PushBombObjective::OnGetObjectiveState__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnGetObjectiveState__DelegateSignature");

	APavlov_PushBombObjective_OnGetObjectiveState__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00968520
//		Name   -> DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnGetActiveObjectiveID__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PushBombObjective::OnGetActiveObjectiveID__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction PavlovProxy.Pavlov_PushBombObjective.OnGetActiveObjectiveID__DelegateSignature");

	APavlov_PushBombObjective_OnGetActiveObjectiveID__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0020DD10
//		Name   -> Function PavlovProxy.Pavlov_PushBombObjective.GetObjectiveState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		PavlovProxy_EPushObjectiveState                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PavlovProxy_EPushObjectiveState APavlov_PushBombObjective::GetObjectiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PushBombObjective.GetObjectiveState");

	APavlov_PushBombObjective_GetObjectiveState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00217EF0
//		Name   -> Function PavlovProxy.Pavlov_PushBombObjective.GetActiveObjectiveID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int APavlov_PushBombObjective::GetActiveObjectiveID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PushBombObjective.GetActiveObjectiveID");

	APavlov_PushBombObjective_GetActiveObjectiveID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0021A6C0
//		Name   -> Function PavlovProxy.Pavlov_PushLoadoutProxy.OnLoadoutTaken
//		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FName                                       LoadoutSlot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APavlov_PushLoadoutProxy::OnLoadoutTaken(const struct FName& LoadoutSlot, class APawn* Pawn, struct FTransform* SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.Pavlov_PushLoadoutProxy.OnLoadoutTaken");

	APavlov_PushLoadoutProxy_OnLoadoutTaken_Params params {};
	params.LoadoutSlot = LoadoutSlot;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0021A5C0
//		Name   -> Function PavlovProxy.PavlovProxyStatics.GetTeamScore
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlovProxyStatics::STATIC_GetTeamScore(class UObject* WorldContextObject, int TeamId, int* Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetTeamScore");

	UPavlovProxyStatics_GetTeamScore_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;

}


// Function:
//		Offset -> 0x0021A480
//		Name   -> Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPavlovPlayerStatus                         PlayerStatus                                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               bSucceeded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlovProxyStatics::STATIC_GetPavlovPlayerStatusByPawn(class APawn* Pawn, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatusByPawn");

	UPavlovProxyStatics_GetPavlovPlayerStatusByPawn_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStatus != nullptr)
		*PlayerStatus = params.PlayerStatus;
	if (bSucceeded != nullptr)
		*bSucceeded = params.bSucceeded;

}


// Function:
//		Offset -> 0x0021A340
//		Name   -> Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPavlovPlayerStatus                         PlayerStatus                                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               bSucceeded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPavlovProxyStatics::STATIC_GetPavlovPlayerStatus(class APlayerState* PlayerState, struct FPavlovPlayerStatus* PlayerStatus, bool* bSucceeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PavlovProxy.PavlovProxyStatics.GetPavlovPlayerStatus");

	UPavlovProxyStatics_GetPavlovPlayerStatus_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStatus != nullptr)
		*PlayerStatus = params.PlayerStatus;
	if (bSucceeded != nullptr)
		*bSucceeded = params.bSucceeded;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
