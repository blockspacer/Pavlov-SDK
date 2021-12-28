﻿#pragma once

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

// Class Steamworks.SteamworksManager
// 0x0578 (FullSize[0x05A0] - InheritedSize[0x0028])
class USteamworksManager : public UObject
{
public:
	unsigned char                                      UnknownData_88UP[0x40];                                    // 0x0028(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameInstance*                               GameInstance;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<uint64_t, class UTexture2D*>                  Avatars;                                                   // 0x0070(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FString                                     PublicIpAddress;                                           // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServersConnected;                                        // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZM8[0x20];                                    // 0x00E0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSteamLobbyInfo>                     LobbyList;                                                 // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAuthSessionTicketResponse;                               // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTicketValidation;                                        // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIC7[0x410];                                   // 0x0130(0x0410) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnServerResponded;                                         // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerFailedToRespond;                                   // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerRefreshCompleted;                                  // 0x0560(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerListUpdated;                                       // 0x0570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FSteamServerInfo>                    ServerList;                                                // 0x0580(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJXQ[0x10];                                    // 0x0590(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Steamworks.SteamworksManager");
		return ptr;
	}



	void Tick();
	void RequestServerList(TArray<struct FSteamServerListKeyValue> Filter);
	void RequestLobbyList(bool bWithData);
	void RefreshServerList();
	void OnPublicIpAddressResolved(const struct FString& IPAddress);
	void LeaveLobby();
	void JoinLobby(const struct FSteamLobbyInfo& LobbyInfo);
	bool IsServerListActive();
	bool IsRefreshingServerList();
	void GetServerInfo(int Index, struct FSteamServerInfo* ServerInfo, bool* bSuccessful);
	int GetServerCount();
	struct FString GetPlayerNameByStringId(const struct FString& StringId);
	void GetAuthSessionTicket();
	class USteamworksManager* STATIC_Get(class UObject* WorldContextObject);
	void CreateLobby(int LobbyMemberLimit, bool bPublic);
	void CancelAuthTicket();
	void AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, Steamworks_ESteamLobbyComparison ComparisonType);
	void AddRequestLobbyListResultCountFilter(int MaxResults);
	void AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, Steamworks_ESteamLobbyComparison ComparisonType);
	void AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo);
	void AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable);
	void AddRequestLobbyListDistanceFilter(Steamworks_ESteamLobbyDistanceFilter DistanceFilter);
};

// Class Steamworks.SteamworksStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamworksStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Steamworks.SteamworksStatics");
		return ptr;
	}



	struct FString STATIC_GetSteamPersonaName(class UObject* WorldContextObject);
	struct FString STATIC_GetLocalSteamId(class UObject* WorldContextObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
