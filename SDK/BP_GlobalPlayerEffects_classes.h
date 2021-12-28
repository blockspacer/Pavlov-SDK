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

// BlueprintGeneratedClass BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class ABP_GlobalPlayerEffects_C : public AGlobalPlayerEffects
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GlobalPlayerEffects.BP_GlobalPlayerEffects_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GlobalPlayerEffects(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
