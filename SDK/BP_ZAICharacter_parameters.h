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

// Function BP_ZAICharacter.BP_ZAICharacter_C.GetMeshAndAnimInstance
struct ABP_ZAICharacter_C_GetMeshAndAnimInstance_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AnimInstance;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.UserConstructionScript
struct ABP_ZAICharacter_C_UserConstructionScript_Params
{
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.ReceiveTick
struct ABP_ZAICharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.ServerKillAI
struct ABP_ZAICharacter_C_ServerKillAI_Params
{
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.KillThisAI
struct ABP_ZAICharacter_C_KillThisAI_Params
{
};

// Function BP_ZAICharacter.BP_ZAICharacter_C.ExecuteUbergraph_BP_ZAICharacter
struct ABP_ZAICharacter_C_ExecuteUbergraph_BP_ZAICharacter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
