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
// Enums
//---------------------------------------------------------------------------

// Enum SteamAudio.EIplAudioEngine
enum class SteamAudio_EIplAudioEngine : uint8_t
{
	EIplAudioEngine__UNREAL        = 0,
	EIplAudioEngine__EIplAudioEngine_MAX = 1,

};

// Enum SteamAudio.EIplConvolutionType
enum class SteamAudio_EIplConvolutionType : uint8_t
{
	EIplConvolutionType__PHONON    = 0,
	EIplConvolutionType__TRUEAUDIONEXT = 1,
	EIplConvolutionType__EIplConvolutionType_MAX = 2,

};

// Enum SteamAudio.EIplSimulationType
enum class SteamAudio_EIplSimulationType : uint8_t
{
	EIplSimulationType__REALTIME   = 0,
	EIplSimulationType__BAKED      = 1,
	EIplSimulationType__DISABLED   = 2,
	EIplSimulationType__EIplSimulationType_MAX = 3,

};

// Enum SteamAudio.EIplDirectOcclusionMode
enum class SteamAudio_EIplDirectOcclusionMode : uint8_t
{
	EIplDirectOcclusionMode__NONE  = 0,
	EIplDirectOcclusionMode__DIRECTOCCLUSION_NOTRANSMISSION = 1,
	EIplDirectOcclusionMode__DIRECTOCCLUSION_TRANSMISSIONBYVOLUME = 2,
	EIplDirectOcclusionMode__DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY = 3,
	EIplDirectOcclusionMode__EIplDirectOcclusionMode_MAX = 4,

};

// Enum SteamAudio.EIplDirectOcclusionMethod
enum class SteamAudio_EIplDirectOcclusionMethod : uint8_t
{
	EIplDirectOcclusionMethod__RAYCAST = 0,
	EIplDirectOcclusionMethod__VOLUMETRIC = 1,
	EIplDirectOcclusionMethod__EIplDirectOcclusionMethod_MAX = 2,

};

// Enum SteamAudio.EIplHrtfInterpolationMethod
enum class SteamAudio_EIplHrtfInterpolationMethod : uint8_t
{
	EIplHrtfInterpolationMethod__NEAREST = 0,
	EIplHrtfInterpolationMethod__BILINEAR = 1,
	EIplHrtfInterpolationMethod__EIplHrtfInterpolationMethod_MAX = 2,

};

// Enum SteamAudio.EIplSpatializationMethod
enum class SteamAudio_EIplSpatializationMethod : uint8_t
{
	EIplSpatializationMethod__PANNING = 0,
	EIplSpatializationMethod__HRTF = 1,
	EIplSpatializationMethod__EIplSpatializationMethod_MAX = 2,

};

// Enum SteamAudio.EQualitySettings
enum class SteamAudio_EQualitySettings : uint8_t
{
	EQualitySettings__LOW          = 0,
	EQualitySettings__MEDIUM       = 1,
	EQualitySettings__HIGH         = 2,
	EQualitySettings__CUSTOM       = 3,
	EQualitySettings__EQualitySettings_MAX = 4,

};

// Enum SteamAudio.EPhononMaterial
enum class SteamAudio_EPhononMaterial : uint8_t
{
	EPhononMaterial__GENERIC       = 0,
	EPhononMaterial__BRICK         = 1,
	EPhononMaterial__CONCRETE      = 2,
	EPhononMaterial__CERAMIC       = 3,
	EPhononMaterial__GRAVEL        = 4,
	EPhononMaterial__CARPET        = 5,
	EPhononMaterial__GLASS         = 6,
	EPhononMaterial__PLASTER       = 7,
	EPhononMaterial__WOOD          = 8,
	EPhononMaterial__METAL         = 9,
	EPhononMaterial__ROCK          = 10,
	EPhononMaterial__CUSTOM        = 11,
	EPhononMaterial__EPhononMaterial_MAX = 12,

};

// Enum SteamAudio.EPhononProbeMobility
enum class SteamAudio_EPhononProbeMobility : uint8_t
{
	EPhononProbeMobility__STATIC   = 0,
	EPhononProbeMobility__DYNAMIC  = 1,
	EPhononProbeMobility__EPhononProbeMobility_MAX = 2,

};

// Enum SteamAudio.EPhononProbePlacementStrategy
enum class SteamAudio_EPhononProbePlacementStrategy : uint8_t
{
	EPhononProbePlacementStrategy__CENTROID = 0,
	EPhononProbePlacementStrategy__UNIFORM_FLOOR = 1,
	EPhononProbePlacementStrategy__EPhononProbePlacementStrategy_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteamAudio.BakedDataInfo
// 0x0010
struct FBakedDataInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AEBN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SteamAudio.SubmixEffectReverbPluginSettings
// 0x0001
struct FSubmixEffectReverbPluginSettings
{
	unsigned char                                      UnknownData_HH1G[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
