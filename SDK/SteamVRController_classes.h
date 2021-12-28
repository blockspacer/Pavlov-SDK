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

// Class SteamVRController.SteamVRControllerLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamVRControllerLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamVRController.SteamVRControllerLibrary");
		return ptr;
	}



	void STATIC_SetTouchDPadMapping(SteamVRController_ESteamVRTouchDPadMapping NewMapping);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
