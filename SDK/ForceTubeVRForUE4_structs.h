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

// Enum ForceTubeVRForUE4.ForceTubeVRChannel
enum class ForceTubeVRForUE4_EForceTubeVRChannel : uint8_t
{
	ForceTubeVRChannel__all        = 0,
	ForceTubeVRChannel__rifle      = 1,
	ForceTubeVRChannel__rifleButt  = 2,
	ForceTubeVRChannel__rifleBolt  = 3,
	ForceTubeVRChannel__pistol1    = 4,
	ForceTubeVRChannel__pistol2    = 5,
	ForceTubeVRChannel__other      = 6,
	ForceTubeVRChannel__vest       = 7,
	ForceTubeVRChannel__ForceTubeVRChannel_MAX = 8,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
