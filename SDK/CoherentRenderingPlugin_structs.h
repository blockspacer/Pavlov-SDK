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

// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class CoherentRenderingPlugin_ECoherentRenderingSettingsSeverity : uint8_t
{
	ECoherentRenderingSettingsSeverity__Trace = 0,
	ECoherentRenderingSettingsSeverity__Debug = 1,
	ECoherentRenderingSettingsSeverity__Info = 2,
	ECoherentRenderingSettingsSeverity__Warning = 3,
	ECoherentRenderingSettingsSeverity__AssertFailure = 4,
	ECoherentRenderingSettingsSeverity__Error = 5,
	ECoherentRenderingSettingsSeverity__ECoherentRenderingSettingsSeverity_MAX = 6,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
