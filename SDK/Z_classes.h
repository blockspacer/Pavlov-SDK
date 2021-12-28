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
// Classes
//---------------------------------------------------------------------------

// Class Z.AIDamageComponent
// 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
class UAIDamageComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnApplyDamage;                                             // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActiveStateChange;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bCanTakeDamage;                                            // 0x0110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HP31[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.AIDamageComponent");
		return ptr;
	}



	void SetCanTakeDamage(bool InCanTakeDamage);
	void ResetDamageComponent(bool toState);
	void OnRep_CanTakeDamage();
	void MulticastDamageAplied(const struct FAIDamageResult& DamageResult);
	void IncomingDamage(const struct FAIDamageResult& DamageResult);
	bool GetCanTakeDamage();
	void ApplyDamage(const struct FAIDamageResult& DamageResult);
};

// Class Z.AIDamageComponentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDamageComponentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.AIDamageComponentInterface");
		return ptr;
	}



	class UAIDamageComponent* GetAIDamageComponent();
};

// Class Z.AIDirector
// 0x0100 (FullSize[0x0428] - InheritedSize[0x0328])
class AAIDirector : public AActor
{
public:
	float                                              NeighborAreaRadius;                                        // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PopulateNeighborGroupsFrequency;                           // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNeighborGroup>                      NeighborGroups;                                            // 0x0330(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FFlockingWeight                             FlockingWeight;                                            // 0x0340(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G4TY[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                PopulateNeightborListTimerHandle;                          // 0x0350(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DynamicNavPointUpdateTime;                                 // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PoolingLocationOffset;                                     // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumberOfAIToSpawn;                                         // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                bIsEnabled;                                                // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bPoolOnBeginPlay;                                          // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseEQSSpawning;                                           // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FQM3[0x16];                                    // 0x036A(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              ResetableObjectList;                                       // 0x0380(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                               bSpawnActive;                                              // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LKJ8[0x1F];                                    // 0x0391(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AISpawnCharacter;                                          // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I3YR[0x28];                                    // 0x03B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAIKilled;                                                // 0x03E0(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9IM4[0x4];                                     // 0x03F0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RespawnTime;                                               // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RespawnTimeDeviation;                                      // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumberOfDynamicNavPoints;                                  // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0918[0x10];                                    // 0x0400(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DynamicNavMeshClass;                                       // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                DynamicNavPointUpdate;                                     // 0x0418(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ALBI[0x8];                                     // 0x0420(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.AIDirector");
		return ptr;
	}



	void UpdateDynamicNavLinks();
	void TrickleOutAI_OverTime();
	void TrickleOutAI_OnDeath();
	void TrickleOut_AndKill();
	void TrickleInAI();
	void TrickleIn();
	Z_EAISetDirectorResponse SetDirectorMode(float TrickleTimeIn, int NumberOfDesiredActiveAI, Z_EAIDirectorMode NewDirectorState);
	void SetALLAiPooled();
	void SetAllAIActive();
	void SetAIPoolAmount(int NewPoolAmount);
	void PopulateNeighborGroups();
	void K2_SetPlayersInPlay(TArray<class ACharacter*> ListOfPlayersInPlay);
	void K2_RemovePlayersInPlay(TArray<class ACharacter*> ListOfPlayersToRemove);
	void K2_RemoveAPlayerInPlay(class ACharacter* PlayerToRemove);
	void K2_AddPlayerToPlayList(class ACharacter* PlayerToAdd);
	void InitAIPool();
	int GetVersion();
	int GetAIPoolAmount();
	class AActor* CreateAIPawnAtLocation(const struct FTransform& SpawnLocation);
	void AIWasKilled(class AZAICharacter* KilledAI, class APlayerState* KillerPlayerState);
};

// Class Z.AISlotManager
// 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
class UAISlotManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_577V[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfAISlots;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KU0R[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              AISlots;                                                   // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                               bIsValidTarget;                                            // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SHFR[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDistanceTarget;                                         // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DistanceOffset;                                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EQSTargetWeight;                                           // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.AISlotManager");
		return ptr;
	}



	void SetNumberOfMaxAISlots(int NumberOfslots);
	void SetIsValidTarget(bool IsValid);
	bool RemoveAICharacterFromSlot(class AActor* Character);
	bool IsValidTarget();
	bool IsActorInSlots(class AActor* Actor);
	bool HasEmptySlot();
	int GetNumberOfActiveSlots();
	int GetMaxNumberOfAISlots();
	void AssignSlotToActor(class AActor* Actor);
};

// Class Z.BaseAICharacter
// 0x0008 (FullSize[0x0740] - InheritedSize[0x0738])
class ABaseAICharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_LT7S[0x8];                                     // 0x0738(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BaseAICharacter");
		return ptr;
	}



	struct FMovementDirection GetMovementDirection();
};

// Class Z.BaseAIController
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class ABaseAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BaseAIController");
		return ptr;
	}



};

// Class Z.BaseDestructibleActor
// 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
class ABaseDestructibleActor : public AActor
{
public:
	unsigned char                                      UnknownData_42ZR[0x10];                                    // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIDamageComponent*                          DamageComponent;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAISlotManager*                              SlotManagerComponent;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BaseDestructibleActor");
		return ptr;
	}



};

// Class Z.BTTask_AssignToSlot
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UBTTask_AssignToSlot : public UBTTask_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_AssignToSlot");
		return ptr;
	}



};

// Class Z.BTTask_AttackTarget
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UBTTask_AttackTarget : public UBTTask_BlackboardBase
{
public:
	float                                              AttackTime;                                                // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackRange;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageComponentDamage;                                     // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerDamage;                                              // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AttackMontage;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_AttackTarget");
		return ptr;
	}



};

// Class Z.BTTask_FindSpawnZone
// 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
class UBTTask_FindSpawnZone : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyRotation;                                     // 0x0098(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_FindSpawnZone");
		return ptr;
	}



};

// Class Z.BTTask_FindTarget
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTTask_FindTarget : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_FindTarget");
		return ptr;
	}



};

// Class Z.BTTask_RespawnAI
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTTask_RespawnAI : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_RespawnAI");
		return ptr;
	}



};

// Class Z.BTTask_RespawnDelay
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTTask_RespawnDelay : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_RespawnDelay");
		return ptr;
	}



};

// Class Z.BTTask_SetAIState
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_SetAIState : public UBTTaskNode
{
public:
	Z_EAIState                                         StateToChangeTo;                                           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4WQO[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_SetAIState");
		return ptr;
	}



};

// Class Z.BTTask_SetPawnLocation
// 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
class UBTTask_SetPawnLocation : public UBTTask_BlackboardBase
{
public:
	float                                              ZOffset;                                                   // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KW2[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BlackboardKeyRotation;                                     // 0x00A0(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_SetPawnLocation");
		return ptr;
	}



};

// Class Z.BTTask_ZCheckAndSetAttackState
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTTask_ZCheckAndSetAttackState : public UBTTask_BlackboardBase
{
public:
	float                                              StartPreparingForAttackDistance;                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartAttackingDistance;                                    // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_ZCheckAndSetAttackState");
		return ptr;
	}



};

// Class Z.BTTask_ZMoveTo
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UBTTask_ZMoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              ObservedBlackboardValueTolerance;                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bObserveBlackboardValue : 1;                               // 0x009C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JQR[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AcceptanceRadius;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StuckMaxTime;                                              // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.BTTask_ZMoveTo");
		return ptr;
	}



};

// Class Z.DynamivNavArea
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ADynamivNavArea : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.DynamivNavArea");
		return ptr;
	}



};

// Class Z.EnvQueryGenerator_ByComponent
// 0x0070 (FullSize[0x00C0] - InheritedSize[0x0050])
class UEnvQueryGenerator_ByComponent : public UEnvQueryGenerator
{
public:
	class UClass*                                      ComponentToSearchFor;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                                // 0x0058(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SearchRadius;                                              // 0x0088(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      SearchCenter;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.EnvQueryGenerator_ByComponent");
		return ptr;
	}



};

// Class Z.EnvQueryGenerator_ByInterface
// 0x0070 (FullSize[0x00C0] - InheritedSize[0x0050])
class UEnvQueryGenerator_ByInterface : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedInterfaceClass;                                    // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                                // 0x0058(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SearchRadius;                                              // 0x0088(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      SearchCenter;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.EnvQueryGenerator_ByInterface");
		return ptr;
	}



};

// Class Z.EnvQueryTest_CheckSlots
// 0x0000 (FullSize[0x01C0] - InheritedSize[0x01C0])
class UEnvQueryTest_CheckSlots : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.EnvQueryTest_CheckSlots");
		return ptr;
	}



};

// Class Z.EnvQueryTest_DamageableActors
// 0x0000 (FullSize[0x01C0] - InheritedSize[0x01C0])
class UEnvQueryTest_DamageableActors : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.EnvQueryTest_DamageableActors");
		return ptr;
	}



};

// Class Z.EnvQueryTest_ValidTarget
// 0x0000 (FullSize[0x01C0] - InheritedSize[0x01C0])
class UEnvQueryTest_ValidTarget : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.EnvQueryTest_ValidTarget");
		return ptr;
	}



};

// Class Z.LootCrate
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ALootCrate : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.LootCrate");
		return ptr;
	}



};

// Class Z.NavArea_Climb
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Climb : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.NavArea_Climb");
		return ptr;
	}



};

// Class Z.NavArea_DynamicObstacle
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_DynamicObstacle : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.NavArea_DynamicObstacle");
		return ptr;
	}



};

// Class Z.NavArea_Jump
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Jump : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.NavArea_Jump");
		return ptr;
	}



};

// Class Z.NavArea_NoSprinting
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_NoSprinting : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.NavArea_NoSprinting");
		return ptr;
	}



};

// Class Z.ProxyPlayerCharacter
// 0x0028 (FullSize[0x0760] - InheritedSize[0x0738])
class AProxyPlayerCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_V9RJ[0x8];                                     // 0x0738(0x0008) Fix Super Size
	class USpringArmComponent*                         SpringArm;                                                 // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                            CameraComp;                                                // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDead;                                                     // 0x0750(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFH9[0x3];                                     // 0x0751(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Health;                                                    // 0x0754(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAISlotManager*                              AISlotManager;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ProxyPlayerCharacter");
		return ptr;
	}



	void ReviveCharacter();
};

// Class Z.QueryContext_BaseZ
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UQueryContext_BaseZ : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.QueryContext_BaseZ");
		return ptr;
	}



};

// Class Z.QueryContext_AllPlayers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UQueryContext_AllPlayers : public UQueryContext_BaseZ
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.QueryContext_AllPlayers");
		return ptr;
	}



	void ProvideActorsSet(class UObject* QuerierObject, TArray<class AActor*>* ResultingActorSet);
};

// Class Z.QueryContext_PlayerContext
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UQueryContext_PlayerContext : public UQueryContext_BaseZ
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.QueryContext_PlayerContext");
		return ptr;
	}



	void ProvideSingleActor(class UObject* QuerierObject, class AActor** ResultingActor);
};

// Class Z.RoundInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URoundInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.RoundInterface");
		return ptr;
	}



	void ResetToDefaultState();
};

// Class Z.SlotSystemInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlotSystemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.SlotSystemInterface");
		return ptr;
	}



	class UAISlotManager* GetPlayerSlotManager();
};

// Class Z.ZAICharacter
// 0x00F0 (FullSize[0x0830] - InheritedSize[0x0740])
class AZAICharacter : public ABaseAICharacter
{
public:
	int                                                CosmeticId;                                                // 0x0740(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGRG[0x4];                                     // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FZProperties                                Properties;                                                // 0x0748(0x0038) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKnockBack;                                               // 0x0780(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              KnockBackDelay;                                            // 0x0790(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GKMD[0x4];                                     // 0x0794(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      VehicleClass;                                              // 0x0798(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDead;                                                   // 0x07A0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2DZ6[0x17];                                    // 0x07A1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Z_EZKnockBackState                                 KnockBackState;                                            // 0x07B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M1X9[0xF];                                     // 0x07B9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LandedDelayTime;                                           // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bDelayedAirCollisions;                                     // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T5N0[0xB];                                     // 0x07CD(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Z_EAIState                                         AIControllerState;                                         // 0x07D8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8DJV[0x7];                                     // 0x07D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      AITarget;                                                  // 0x07E0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Z_EAIAttackState                                   AttackingState;                                            // 0x07E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GUKA[0x17];                                    // 0x07E9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PoolAttackDelay;                                           // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Z_EAIClimbingState                                 ClimbingState;                                             // 0x0804(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JFZ1[0x3];                                     // 0x0805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomSprintDelayCheckTime;                                // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RandomSprintChance;                                        // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsSprinting;                                              // 0x0810(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XSA6[0x3];                                     // 0x0811(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StopSprintingDistance;                                     // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AttackRange;                                               // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CapsuleWidth;                                              // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CapsuleLength;                                             // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamageToPlayer;                                            // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamageToObjects;                                           // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S9WL[0x4];                                     // 0x082C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAICharacter");
		return ptr;
	}



	bool ShouldDamageOtherActor(class AActor* DamageTarget, class AActor** OtherActor);
	void SetSprinting(bool inIsSprinting);
	void SetKnockBackState(Z_EZKnockBackState NewState);
	void SetClimbing(Z_EAIClimbingState inIsClimbing);
	void SetCanSprint(bool inCanSprint);
	void SetAttackState(Z_EAIAttackState AttackingState);
	void ReEnableMovement();
	void OnRep_Target();
	void OnRep_Sprint();
	void OnRep_Climb();
	void OnRep_bIsDead();
	void OnRep_Attacking();
	void OnRep_AIControllerState();
	void OnMontangeStarted(class UAnimMontage* Montange);
	void OnMontangeEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnAnimInit();
	void NewTargetSelected(class AActor* NewTarget, class UAISlotManager* SlotManager);
	void MulticastKnockBack(Z_EZKnockBackDirection Direction, unsigned char Flags, class AController* bY);
	void KnockBack(Z_EZKnockBackDirection Direction);
	void K2_KillAI();
	class AActor* GetTarget();
	bool GetSprinting();
	void GetMeshAndAnimInstance(int Index, class USkeletalMesh** SkeletalMesh, class UClass** AnimInstance);
	Z_EZKnockBackState GetKnockBackState();
	Z_EAIState GetCurrentAIstate();
	Z_EAIClimbingState GetClimbingState();
	Z_EAIAttackState GetAttackState();
	void DelayedReturnToNormalCollision();
	void AttemptRandomSprint();
	void AttackTargetInRange();
	void AIStateChange(Z_EAIState NewState);
};

// Class Z.ZAIController
// 0x0188 (FullSize[0x05C0] - InheritedSize[0x0438])
class AZAIController : public ABaseAIController
{
public:
	struct FScriptMulticastDelegate                    OnTargetSelected;                                          // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAIStateChanged;                                          // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAIJumpTo;                                                // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AZNavLinkProxy*>                      ClaimedNavLinks;                                           // 0x0468(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AK6R[0x8];                                     // 0x0478(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SelectedTarget;                                            // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Z_EAIState                                         AIPlayState;                                               // 0x0488(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3P5L[0x7];                                     // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnvQuery*                                   TargetPlayerSelectionQuery;                                // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardData*                             BlackboardDataAsset;                                       // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBehaviorTree*                               BehaviorTreeAsset;                                         // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEnvQueryRequest                            TargetSelectionQueryRequest;                               // 0x04A8(0x0068) (NativeAccessSpecifierPrivate)
	float                                              AcceptanceRadius;                                          // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsClimbing;                                               // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZE2R[0x13];                                    // 0x0515(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinClimbDistanceCheck;                                     // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CompairedMoveClimbDistanceCheck;                           // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       BlackboardTargetKey;                                       // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       BlackboardUseEQSKey;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       BlackboardUsePoolOnDeath;                                  // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       BlackboardStateKey;                                        // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9JJJ[0x8];                                     // 0x0550(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxStuckTime;                                              // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StuckSpeed;                                                // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ROXN[0x40];                                    // 0x0560(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartJumpAnimationTimer;                                   // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndJumpAnimationTimer;                                     // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F9ZI[0x18];                                    // 0x05A8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAIController");
		return ptr;
	}



	void SetState(Z_EAIState inState);
	bool SetCurrentTarget(class AActor* InTarget);
	void RandomDeviationFindTarget();
	void OnSlotsCleared();
	void JumpTo(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor);
	bool IsDecelerationgOnPath();
	bool HasTarget();
	Z_EAIState GetState();
	class AActor* GetCurrentTarget();
	void FinishClimb();
	void FindTarget();
	bool DoJumpLaunch_PrecomputedVelocity(const struct FTransform& Destination, float Arc, const struct FVector& InLaunchVelocity, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime);
	bool DoJumpLaunch(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime);
	void ClimbTo(const struct FTransform& LedgeTransform, const struct FVector& EndPosition, uint32_t NavLinkID);
	void ClearTarget();
	void ClearAITargets();
};

// Class Z.ZAIDataProvide_AIManager
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UZAIDataProvide_AIManager : public UAIDataProvider_QueryParams
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAIDataProvide_AIManager");
		return ptr;
	}



};

// Class Z.ZAISpawnZone
// 0x0058 (FullSize[0x0380] - InheritedSize[0x0328])
class AZAISpawnZone : public AActor
{
public:
	unsigned char                                      UnknownData_1VED[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  MidPoint;                                                  // 0x0330(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BP5N[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SpawnBoxExtent;                                            // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5CD5[0xC];                                     // 0x0374(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAISpawnZone");
		return ptr;
	}



};

// Class Z.ZAnimInstance
// 0x0088 (FullSize[0x03E0] - InheritedSize[0x0358])
class UZAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_MNHM[0x4];                                     // 0x0358(0x0004) Fix Super Size
	float                                              ForwardTime;                                               // 0x035C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                                    SavedRotation;                                             // 0x0360(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1MHL[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimSequence*>                       SprintAnimations;                                          // 0x0370(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              ReferenceSpeed;                                            // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLeaningAngle;                                           // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLeanAngleDelta;                                         // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaningExp;                                                // 0x038C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnleaningStrength;                                         // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackBlendExp;                                            // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoving;                                                   // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFalling;                                                  // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRaging;                                                   // 0x039A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSprinting;                                                // 0x039B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13F7[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               SprintAnimation;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveRatioX;                                                // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveRatioY;                                                // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveRatio;                                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SprintRootRotation;                                        // 0x03B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bShouldLookAt;                                             // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7N52[0x3];                                     // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LookAtTarget;                                              // 0x03C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Z_EAIAttackState                                   AttackState;                                               // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Z_EAIClimbingState                                 ClimbingState;                                             // 0x03D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6VOJ[0x2];                                     // 0x03D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttackAlpha;                                               // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaningRatio;                                              // 0x03D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EFKK[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAnimInstance");
		return ptr;
	}



};

// Class Z.ZAnimNotify_Attack
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UZAnimNotify_Attack : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAnimNotify_Attack");
		return ptr;
	}



};

// Class Z.ZAnimNotify_FootStep
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UZAnimNotify_FootStep : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAnimNotify_FootStep");
		return ptr;
	}



};

// Class Z.ZAnimNotify_VO
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UZAnimNotify_VO : public UAnimNotify_PlaySound
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZAnimNotify_VO");
		return ptr;
	}



};

// Class Z.ZBaseDamageType
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UZBaseDamageType : public UDamageType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZBaseDamageType");
		return ptr;
	}



};

// Class Z.ZCharacterMovementComponent
// 0x0060 (FullSize[0x0780] - InheritedSize[0x0720])
class UZCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData_4A25[0x10];                                    // 0x0720(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              JumpLandingTimerDelay;                                     // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SprintAccelerationMultiplier;                              // 0x0734(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SprintMaxSpeedMultiplier;                                  // 0x0738(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IER[0x4];                                     // 0x073C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLanded;                                                  // 0x0740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bCanSprint;                                                // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5IXI[0x13];                                    // 0x0751(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClimbingTargetScale;                                       // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BaseBreakingFactor;                                        // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SW7T[0x4];                                     // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeTransitionScale;                                       // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JU9F[0xC];                                     // 0x0774(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZCharacterMovementComponent");
		return ptr;
	}



	void SetSprinting(bool inWantsToSprint, float DesiredSpeed);
	void SetSprintEnabled(bool inbIsSprintEnabled);
	void ServerFinishLanding();
	void FinishLanding();
	bool CanSprint();
};

// Class Z.ZCheatManager
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UZCheatManager : public UCheatManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZCheatManager");
		return ptr;
	}



	void TogglePathFollowingDebug();
};

// Class Z.ZNavLineBatchComponent
// 0x0000 (FullSize[0x05A0] - InheritedSize[0x05A0])
class UZNavLineBatchComponent : public ULineBatchComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZNavLineBatchComponent");
		return ptr;
	}



};

// Class Z.ZNavLinkComponent
// 0x0000 (FullSize[0x01C8] - InheritedSize[0x01C8])
class UZNavLinkComponent : public UNavLinkCustomComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZNavLinkComponent");
		return ptr;
	}



	void ToggleNavLink(bool IsEnabled);
};

// Class Z.ZNavLinkProxy
// 0x0018 (FullSize[0x0390] - InheritedSize[0x0378])
class AZNavLinkProxy : public ANavLinkProxy
{
public:
	class AZAIController*                              ClaimedBy;                                                 // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QRVG[0x8];                                     // 0x0380(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClaimReleaseDelay;                                         // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J60H[0x4];                                     // 0x038C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZNavLinkProxy");
		return ptr;
	}



};

// Class Z.ZNavLinkProxy_Climb
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AZNavLinkProxy_Climb : public AZNavLinkProxy
{
public:
	class UArrowComponent*                             LedgeAlignmentComponent;                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZNavLinkProxy_Climb");
		return ptr;
	}



};

// Class Z.ZNavLinkProxy_Destructible
// 0x0028 (FullSize[0x03B8] - InheritedSize[0x0390])
class AZNavLinkProxy_Destructible : public AZNavLinkProxy
{
public:
	unsigned char                                      UnknownData_R8DP[0x10];                                    // 0x0390(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIDamageComponent*                          AIDamageComponent;                                         // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bDefaultState;                                             // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K40H[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAISlotManager*                              SlotManager;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZNavLinkProxy_Destructible");
		return ptr;
	}



	void ToggleNavLinkState(bool bEnable);
	void OnTakeDamage(const struct FAIDamageResult& DamageTaken);
	void OnCanTakeDamageChange(bool CurrentState);
	class UAIDamageComponent* GetAIDamageComponent();
};

// Class Z.ZNavLinkProxy_Jump
// 0x0060 (FullSize[0x03F0] - InheritedSize[0x0390])
class AZNavLinkProxy_Jump : public AZNavLinkProxy
{
public:
	float                                              JumpArc;                                                   // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTracedPath;                                               // 0x0394(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceHit;                                                 // 0x0395(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0T9Y[0x2];                                     // 0x0396(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictProjectilePathPointData             TraceStartPoint;                                           // 0x0398(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FPredictProjectilePathPointData             TraceApex;                                                 // 0x03B4(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FPredictProjectilePathPointData             TraceEndPoint;                                             // 0x03D0(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFMT[0x4];                                     // 0x03EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZNavLinkProxy_Jump");
		return ptr;
	}



	void RefreshPathVisualizer();
};

// Class Z.ZombieDamageType
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UZombieDamageType : public UZBaseDamageType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZombieDamageType");
		return ptr;
	}



};

// Class Z.ZombieRecastNavMesh
// 0x0000 (FullSize[0x05A0] - InheritedSize[0x05A0])
class AZombieRecastNavMesh : public ARecastNavMesh
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZombieRecastNavMesh");
		return ptr;
	}



};

// Class Z.ZPathFollowingComponent
// 0x0110 (FullSize[0x03A8] - InheritedSize[0x0298])
class UZPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData_L5M4[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZAIController*                              OwningZController;                                         // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAISlotManager*                              TargetSlotManager;                                         // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ArcLineScale;                                              // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SlowDistance;                                              // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TotalFlockingScale;                                        // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XA50[0x88];                                    // 0x02BC(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PursueDistanceOffset;                                      // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PursueMinimumAlpha;                                        // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PursueModifier;                                            // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SeekRandomCircleRadius;                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SeekRandomCircleDistance;                                  // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SeekRandomAngleRange;                                      // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SeekTargetScale;                                           // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6OXZ[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomSeekScale;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RandomSeekTimeMax;                                         // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AL5F[0x4];                                     // 0x0370(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomSeekChance;                                          // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SeekRandomDistance;                                        // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AvoidanceScale;                                            // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovementTraceSettings                      MovementTraceSettings;                                     // 0x0380(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              MaxSprintingRotation;                                      // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxJockeyRotation;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZPathFollowingComponent");
		return ptr;
	}



	void OnTargetSelectionUpdate(class AActor* NewTarget, class UAISlotManager* SlotManager);
};

// Class Z.ZPlayerTestingController
// 0x0000 (FullSize[0x0688] - InheritedSize[0x0688])
class AZPlayerTestingController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZPlayerTestingController");
		return ptr;
	}



};

// Class Z.ZSpawn
// 0x0088 (FullSize[0x0178] - InheritedSize[0x00F0])
class UZSpawn : public UActorComponent
{
public:
	class AAIDirector*                                 AIDirector;                                                // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ACharacter*>                          ZBodies;                                                   // 0x00F8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                                AutoSpawnTimerHandle;                                      // 0x0108(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAutoSpawnProperties                        AutoZSettings;                                             // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int                                                ZAmountToSpawn;                                            // 0x0120(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ZAlive;                                                    // 0x0124(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      AIDirectorClass;                                           // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxZBodies;                                                // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CashPerZKill;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQuery*                                   ZSpawnQuery;                                               // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  LootCrateTable;                                            // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQuery*                                   LootCrateEQS;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LootCrateToSpawn;                                          // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnZKilled;                                                 // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAutoSpawnFinished;                                       // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Z.ZSpawn");
		return ptr;
	}



	void ZombieKilled(class AZAICharacter* Zombie, class APlayerState* Killer);
	void SpawnLootCrate(const struct FName& LootCrateID, class AActor* EQSContext);
	void SetZombiesToAutoSpawn(int Amount);
	void SetZBodyCount(int BodyCount);
	void SetCashPerZKill(int CashPerKill);
	void SetAutoSpawnProperties(const struct FAutoSpawnProperties& AutoSpawnProperties);
	void ManualSpawnZombies(int Amount, TArray<struct FTransform> RandomLocations, bool* Successful, TArray<class ACharacter*>* Zombies);
	class AActor* ManualSpawnLootCrate(const struct FName& LootCrateID, const struct FTransform& SpawnTransform);
	void KillAllZombies();
	int GetZombiesToAutoSpawn();
	int GetZombiesAliveCount();
	class UClass* GetLootCrateClass(const struct FName& LootCrateID);
	class AAIDirector* GetAIDirector();
	void CleanupBodies();
	void AddZombiesToAutoSpawn(int Amount, int* AmtToSpawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
