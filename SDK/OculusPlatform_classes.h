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

// Class OculusPlatform.OculusPlatformStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOculusPlatformStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OculusPlatform.OculusPlatformStatics");
		return ptr;
	}



	OculusPlatform_EOculusEntitleStatus STATIC_GetEntitleStatus(class UObject* WorldContextObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
