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
//		Offset -> 0x0030DAD0
//		Name   -> Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class USoundWave*                                  SoundWave                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TimeLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AmplitudeBuckets                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      OutAmplitudes                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USoundVisualizationStatics::STATIC_GetAmplitude(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int AmplitudeBuckets, TArray<float>* OutAmplitudes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude");

	USoundVisualizationStatics_GetAmplitude_Params params {};
	params.SoundWave = SoundWave;
	params.Channel = Channel;
	params.StartTime = StartTime;
	params.TimeLength = TimeLength;
	params.AmplitudeBuckets = AmplitudeBuckets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAmplitudes != nullptr)
		*OutAmplitudes = params.OutAmplitudes;

}


// Function:
//		Offset -> 0x0030DAD0
//		Name   -> Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class USoundWave*                                  SoundWave                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TimeLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SpectrumWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      OutSpectrum                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USoundVisualizationStatics::STATIC_CalculateFrequencySpectrum(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int SpectrumWidth, TArray<float>* OutSpectrum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum");

	USoundVisualizationStatics_CalculateFrequencySpectrum_Params params {};
	params.SoundWave = SoundWave;
	params.Channel = Channel;
	params.StartTime = StartTime;
	params.TimeLength = TimeLength;
	params.SpectrumWidth = SpectrumWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSpectrum != nullptr)
		*OutSpectrum = params.OutSpectrum;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
