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

// Enum SteamVRController.ESteamVRTouchDPadMapping
enum class SteamVRController_ESteamVRTouchDPadMapping : uint8_t
{
	ESteamVRTouchDPadMapping__FaceButtons = 0,
	ESteamVRTouchDPadMapping__ThumbstickDirections = 1,
	ESteamVRTouchDPadMapping__Disabled = 2,
	ESteamVRTouchDPadMapping__ESteamVRTouchDPadMapping_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
