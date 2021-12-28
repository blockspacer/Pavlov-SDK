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

// Class SteamVR.SteamVRChaperoneComponent
// 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
class USteamVRChaperoneComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLeaveBounds;                                             // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReturnToBounds;                                          // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W97W[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamVR.SteamVRChaperoneComponent");
		return ptr;
	}



	void SteamVRChaperoneEvent__DelegateSignature();
	TArray<struct FVector> GetBounds();
};

// Class SteamVR.SteamVRFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamVR.SteamVRFunctionLibrary");
		return ptr;
	}



	void STATIC_GetValidTrackedDeviceIds(SteamVR_ESteamVRTrackedDeviceType DeviceType, TArray<int>* OutTrackedDeviceIds);
	bool STATIC_GetTrackedDevicePositionAndOrientation(int DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation);
	bool STATIC_GetHandPositionAndOrientation(int ControllerIndex, InputCore_EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
