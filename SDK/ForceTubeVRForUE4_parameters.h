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

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.TempoToKickPower
struct UForceTubeVRFunctions_TempoToKickPower_Params
{
	float                                              tempo;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Shot
struct UForceTubeVRFunctions_Shot_Params
{
	unsigned char                                      kickPower;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RumblePower;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RumbleDuration;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ForceTubeVRForUE4_EForceTubeVRChannel              Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.SetActiveResearch
struct UForceTubeVRFunctions_SetActiveResearch_Params
{
	bool                                               active;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Rumble
struct UForceTubeVRFunctions_Rumble_Params
{
	unsigned char                                      power;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              timeInSeconds;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ForceTubeVRForUE4_EForceTubeVRChannel              Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.OpenAndroidBluetoothSettings
struct UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Params
{
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.Kick
struct UForceTubeVRFunctions_Kick_Params
{
	unsigned char                                      power;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ForceTubeVRForUE4_EForceTubeVRChannel              Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.InitAsync
struct UForceTubeVRFunctions_InitAsync_Params
{
	bool                                               pistolsFirst;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ForceTubeVRForUE4.ForceTubeVRFunctions.GetBatteryLevel
struct UForceTubeVRFunctions_GetBatteryLevel_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
