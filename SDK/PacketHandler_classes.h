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

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHandlerComponentFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}



};

// Class PacketHandler.NetAnalyticsAggregatorConfig
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>             NetAnalyticsData;                                          // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PacketHandler.NetAnalyticsAggregatorConfig");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
