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

// Class ForceTubeVRForUE4.ForceTubeVRFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UForceTubeVRFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ForceTubeVRForUE4.ForceTubeVRFunctions");
		return ptr;
	}



	unsigned char STATIC_TempoToKickPower(float tempo);
	void STATIC_Shot(unsigned char kickPower, unsigned char RumblePower, float RumbleDuration, ForceTubeVRForUE4_EForceTubeVRChannel Channel);
	void STATIC_SetActiveResearch(bool active);
	void STATIC_Rumble(unsigned char power, float timeInSeconds, ForceTubeVRForUE4_EForceTubeVRChannel Channel);
	void STATIC_OpenAndroidBluetoothSettings();
	void STATIC_Kick(unsigned char power, ForceTubeVRForUE4_EForceTubeVRChannel Channel);
	void STATIC_InitAsync(bool pistolsFirst);
	unsigned char STATIC_GetBatteryLevel();
};

// Class ForceTubeVRForUE4.PlayerControllerCppExample
// 0x0020 (FullSize[0x06A8] - InheritedSize[0x0688])
class APlayerControllerCppExample : public APlayerController
{
public:
	unsigned char                                      UnknownData_A3X5[0x20];                                    // 0x0688(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ForceTubeVRForUE4.PlayerControllerCppExample");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
