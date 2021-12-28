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

// BlueprintGeneratedClass BP_BloodPuddle.BP_BloodPuddle_C
// 0x0018 (FullSize[0x0390] - InheritedSize[0x0378])
class ABP_BloodPuddle_C : public ABloodPuddle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Plane;                                                     // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BloodPuddle.BP_BloodPuddle_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnPour(const struct FTransform& Transform);
	void ExecuteUbergraph_BP_BloodPuddle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
