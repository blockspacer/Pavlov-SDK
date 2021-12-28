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
//		Offset -> 0x00968520
//		Name   -> Function BP_ZAICharacter.BP_ZAICharacter_C.GetMeshAndAnimInstance
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMesh*                               SkeletalMesh                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_ZAICharacter_C::GetMeshAndAnimInstance(int Index, class USkeletalMesh** SkeletalMesh, class UClass** AnimInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.GetMeshAndAnimInstance");

	ABP_ZAICharacter_C_GetMeshAndAnimInstance_Params params {};
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
//		Offset -> 0x00968520
//		Name   -> Function BP_ZAICharacter.BP_ZAICharacter_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ZAICharacter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.UserConstructionScript");

	ABP_ZAICharacter_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_ZAICharacter.BP_ZAICharacter_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ZAICharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.ReceiveTick");

	ABP_ZAICharacter_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_ZAICharacter.BP_ZAICharacter_C.ServerKillAI
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_ZAICharacter_C::ServerKillAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.ServerKillAI");

	ABP_ZAICharacter_C_ServerKillAI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_ZAICharacter.BP_ZAICharacter_C.KillThisAI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_ZAICharacter_C::KillThisAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.KillThisAI");

	ABP_ZAICharacter_C_KillThisAI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00968520
//		Name   -> Function BP_ZAICharacter.BP_ZAICharacter_C.ExecuteUbergraph_BP_ZAICharacter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ZAICharacter_C::ExecuteUbergraph_BP_ZAICharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZAICharacter.BP_ZAICharacter_C.ExecuteUbergraph_BP_ZAICharacter");

	ABP_ZAICharacter_C_ExecuteUbergraph_BP_ZAICharacter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
