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
//		Offset -> 0x0033C0B0
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.TempoToKickPower
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              tempo                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UForceTubeVRFunctions::STATIC_TempoToKickPower(float tempo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.TempoToKickPower");

	UForceTubeVRFunctions_TempoToKickPower_Params params {};
	params.tempo = tempo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033BF80
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.Shot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      kickPower                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      RumblePower                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              RumbleDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		ForceTubeVRForUE4_EForceTubeVRChannel              Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UForceTubeVRFunctions::STATIC_Shot(unsigned char kickPower, unsigned char RumblePower, float RumbleDuration, ForceTubeVRForUE4_EForceTubeVRChannel Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.Shot");

	UForceTubeVRFunctions_Shot_Params params {};
	params.kickPower = kickPower;
	params.RumblePower = RumblePower;
	params.RumbleDuration = RumbleDuration;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BF00
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.SetActiveResearch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UForceTubeVRFunctions::STATIC_SetActiveResearch(bool active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.SetActiveResearch");

	UForceTubeVRFunctions_SetActiveResearch_Params params {};
	params.active = active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BE10
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.Rumble
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      power                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              timeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		ForceTubeVRForUE4_EForceTubeVRChannel              Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UForceTubeVRFunctions::STATIC_Rumble(unsigned char power, float timeInSeconds, ForceTubeVRForUE4_EForceTubeVRChannel Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.Rumble");

	UForceTubeVRFunctions_Rumble_Params params {};
	params.power = power;
	params.timeInSeconds = timeInSeconds;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BDF0
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.OpenAndroidBluetoothSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UForceTubeVRFunctions::STATIC_OpenAndroidBluetoothSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.OpenAndroidBluetoothSettings");

	UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BD40
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.Kick
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      power                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		ForceTubeVRForUE4_EForceTubeVRChannel              Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UForceTubeVRFunctions::STATIC_Kick(unsigned char power, ForceTubeVRForUE4_EForceTubeVRChannel Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.Kick");

	UForceTubeVRFunctions_Kick_Params params {};
	params.power = power;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BCC0
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.InitAsync
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               pistolsFirst                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UForceTubeVRFunctions::STATIC_InitAsync(bool pistolsFirst)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.InitAsync");

	UForceTubeVRFunctions_InitAsync_Params params {};
	params.pistolsFirst = pistolsFirst;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033BC90
//		Name   -> Function ForceTubeVRForUE4.ForceTubeVRFunctions.GetBatteryLevel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UForceTubeVRFunctions::STATIC_GetBatteryLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ForceTubeVRForUE4.ForceTubeVRFunctions.GetBatteryLevel");

	UForceTubeVRFunctions_GetBatteryLevel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
