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

// Class CoherentRenderingPlugin.CoherentRenderingSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UCoherentRenderingSettings : public UObject
{
public:
	CoherentRenderingPlugin_ECoherentRenderingSettingsSeverity RenderingLogSeverity;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowWarningsOnScreen;                                      // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0ZX[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeveloperOptions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentRenderingPlugin.CoherentRenderingSettings");
		return ptr;
	}



};

// Class CoherentRenderingPlugin.CohTextureUserWrapData
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UCohTextureUserWrapData : public UObject
{
public:
	unsigned char                                      UnknownData_MFVW[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    Texture;                                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoherentRenderingPlugin.CohTextureUserWrapData");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
