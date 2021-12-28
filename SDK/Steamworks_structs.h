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

// Enum Steamworks.ESteamAuthResponse
enum class Steamworks_ESteamAuthResponse : uint8_t
{
	ESteamAuthResponse__Success    = 0,
	ESteamAuthResponse__NotConnectedToSteam = 1,
	ESteamAuthResponse__NoLicenseOrExpired = 2,
	ESteamAuthResponse__LoggedInElseWhere = 3,
	ESteamAuthResponse__VACCheckTimedOut = 4,
	ESteamAuthResponse__Invalid    = 5,
	ESteamAuthResponse__Canceled   = 6,
	ESteamAuthResponse__Banned     = 7,
	ESteamAuthResponse__ESteamAuthResponse_MAX = 8,

};

// Enum Steamworks.ESteamLobbyType
enum class Steamworks_ESteamLobbyType : uint8_t
{
	Private                        = 0,
	FriendsOnly                    = 1,
	Public                         = 2,
	Invisible                      = 3,
	ESteamLobbyType_MAX            = 4,

};

// Enum Steamworks.ESteamLobbyDistanceFilter
enum class Steamworks_ESteamLobbyDistanceFilter : uint8_t
{
	ESteamLobbyDistanceFilter__Close = 0,
	ESteamLobbyDistanceFilter__Default = 1,
	ESteamLobbyDistanceFilter__Far = 2,
	ESteamLobbyDistanceFilter__Worldwide = 3,
	ESteamLobbyDistanceFilter__ESteamLobbyDistanceFilter_MAX = 4,

};

// Enum Steamworks.ESteamLobbyComparison
enum class Steamworks_ESteamLobbyComparison : uint8_t
{
	ESteamLobbyComparison__EqualToOrLessThan = 0,
	ESteamLobbyComparison__LessThan = 1,
	ESteamLobbyComparison__Equal   = 2,
	ESteamLobbyComparison__GreaterThan = 3,
	ESteamLobbyComparison__EqualToOrGreaterThan = 4,
	ESteamLobbyComparison__NotEqual = 5,
	ESteamLobbyComparison__ESteamLobbyComparison_MAX = 6,

};

// Enum Steamworks.ESteamLobbyChatMemberStateChange
enum class Steamworks_ESteamLobbyChatMemberStateChange : uint8_t
{
	ESteamLobbyChatMemberStateChange__Entered = 0,
	ESteamLobbyChatMemberStateChange__Left = 1,
	ESteamLobbyChatMemberStateChange__Disconnected = 2,
	ESteamLobbyChatMemberStateChange__Kicked = 3,
	ESteamLobbyChatMemberStateChange__Banned = 4,
	ESteamLobbyChatMemberStateChange__ESteamLobbyChatMemberStateChange_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Steamworks.SteamLobbyDataEntry
// 0x0020
struct FSteamLobbyDataEntry
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Steamworks.SteamServerInfo
// 0x0058
struct FSteamServerInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameTags;                                                  // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Ping;                                                      // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_00ML[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ConnectAddress;                                            // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSlots;                                                  // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slots;                                                     // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BotSlots;                                                  // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedPassword;                                             // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecure;                                                   // 0x0055(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUX7[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Steamworks.SteamServerListKeyValue
// 0x0010
struct FSteamServerListKeyValue
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Value;                                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Steamworks.SteamLobbyInfo
// 0x0038
struct FSteamLobbyInfo
{
	unsigned char                                      UnknownData_P2D8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriend;                                                   // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M34I[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSteamLobbyDataEntry>                MetaData;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HI40[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Steamworks.SteamLobbyMember
// 0x0088
struct FSteamLobbyMember
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOwner;                                                    // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWRR[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               Attributes;                                                // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AvatarTexture;                                             // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IO5U[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
