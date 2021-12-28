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

// Enum OculusPlatform.EOculusEntitleStatus
enum class OculusPlatform_EOculusEntitleStatus : uint8_t
{
	EOculusEntitleStatus__Waiting  = 0,
	EOculusEntitleStatus__Entitled = 1,
	EOculusEntitleStatus__NotEntitled = 2,
	EOculusEntitleStatus__EOculusEntitleStatus_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
