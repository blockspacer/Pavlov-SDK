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
// Parameters
//---------------------------------------------------------------------------

// Function Steamworks.SteamworksManager.Tick
struct USteamworksManager_Tick_Params
{
};

// Function Steamworks.SteamworksManager.RequestServerList
struct USteamworksManager_RequestServerList_Params
{
	TArray<struct FSteamServerListKeyValue>            Filter;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.RequestLobbyList
struct USteamworksManager_RequestLobbyList_Params
{
	bool                                               bWithData;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.RefreshServerList
struct USteamworksManager_RefreshServerList_Params
{
};

// Function Steamworks.SteamworksManager.OnPublicIpAddressResolved
struct USteamworksManager_OnPublicIpAddressResolved_Params
{
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.LeaveLobby
struct USteamworksManager_LeaveLobby_Params
{
};

// Function Steamworks.SteamworksManager.JoinLobby
struct USteamworksManager_JoinLobby_Params
{
	struct FSteamLobbyInfo                             LobbyInfo;                                                 // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.IsServerListActive
struct USteamworksManager_IsServerListActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.IsRefreshingServerList
struct USteamworksManager_IsRefreshingServerList_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.GetServerInfo
struct USteamworksManager_GetServerInfo_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamServerInfo                            ServerInfo;                                                // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.GetServerCount
struct USteamworksManager_GetServerCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.GetPlayerNameByStringId
struct USteamworksManager_GetPlayerNameByStringId_Params
{
	struct FString                                     StringId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.GetAuthSessionTicket
struct USteamworksManager_GetAuthSessionTicket_Params
{
};

// Function Steamworks.SteamworksManager.Get
struct USteamworksManager_Get_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamworksManager*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.CreateLobby
struct USteamworksManager_CreateLobby_Params
{
	int                                                LobbyMemberLimit;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPublic;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.CancelAuthTicket
struct USteamworksManager_CancelAuthTicket_Params
{
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter
struct USteamworksManager_AddRequestLobbyListStringFilter_Params
{
	struct FString                                     KeyToMatch;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ValueToMatch;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Steamworks_ESteamLobbyComparison                   ComparisonType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListResultCountFilter
struct USteamworksManager_AddRequestLobbyListResultCountFilter_Params
{
	int                                                MaxResults;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter
struct USteamworksManager_AddRequestLobbyListNumericalFilter_Params
{
	struct FString                                     KeyToMatch;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueToMatch;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Steamworks_ESteamLobbyComparison                   ComparisonType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter
struct USteamworksManager_AddRequestLobbyListNearValueFilter_Params
{
	struct FString                                     KeyToMatch;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueToBeCloseTo;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable
struct USteamworksManager_AddRequestLobbyListFilterSlotsAvailable_Params
{
	int                                                SlotsAvailable;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter
struct USteamworksManager_AddRequestLobbyListDistanceFilter_Params
{
	Steamworks_ESteamLobbyDistanceFilter               DistanceFilter;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksStatics.GetSteamPersonaName
struct USteamworksStatics_GetSteamPersonaName_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Steamworks.SteamworksStatics.GetLocalSteamId
struct USteamworksStatics_GetLocalSteamId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
