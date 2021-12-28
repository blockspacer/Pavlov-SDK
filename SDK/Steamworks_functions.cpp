// Name: Pavlov, Version: 1.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x0133A010
//		Name   -> Function Steamworks.SteamworksManager.Tick
//		Flags  -> (Native, Public)
void USteamworksManager::Tick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.Tick");

	USteamworksManager_Tick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7FB60
//		Name   -> Function Steamworks.SteamworksManager.RequestServerList
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamServerListKeyValue>            Filter                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void USteamworksManager::RequestServerList(TArray<struct FSteamServerListKeyValue> Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.RequestServerList");

	USteamworksManager_RequestServerList_Params params {};
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003F34F0
//		Name   -> Function Steamworks.SteamworksManager.RequestLobbyList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bWithData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::RequestLobbyList(bool bWithData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.RequestLobbyList");

	USteamworksManager_RequestLobbyList_Params params {};
	params.bWithData = bWithData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7FB40
//		Name   -> Function Steamworks.SteamworksManager.RefreshServerList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USteamworksManager::RefreshServerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.RefreshServerList");

	USteamworksManager_RefreshServerList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7FAA0
//		Name   -> Function Steamworks.SteamworksManager.OnPublicIpAddressResolved
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FString                                     IPAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::OnPublicIpAddressResolved(const struct FString& IPAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.OnPublicIpAddressResolved");

	USteamworksManager_OnPublicIpAddressResolved_Params params {};
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00218BE0
//		Name   -> Function Steamworks.SteamworksManager.LeaveLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USteamworksManager::LeaveLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.LeaveLobby");

	USteamworksManager_LeaveLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F950
//		Name   -> Function Steamworks.SteamworksManager.JoinLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSteamLobbyInfo                             LobbyInfo                                                  (Parm, NativeAccessSpecifierPublic)
void USteamworksManager::JoinLobby(const struct FSteamLobbyInfo& LobbyInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.JoinLobby");

	USteamworksManager_JoinLobby_Params params {};
	params.LobbyInfo = LobbyInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F920
//		Name   -> Function Steamworks.SteamworksManager.IsServerListActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamworksManager::IsServerListActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.IsServerListActive");

	USteamworksManager_IsServerListActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01C7F8F0
//		Name   -> Function Steamworks.SteamworksManager.IsRefreshingServerList
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamworksManager::IsRefreshingServerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.IsRefreshingServerList");

	USteamworksManager_IsRefreshingServerList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01C7F770
//		Name   -> Function Steamworks.SteamworksManager.GetServerInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSteamServerInfo                            ServerInfo                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::GetServerInfo(int Index, struct FSteamServerInfo* ServerInfo, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetServerInfo");

	USteamworksManager_GetServerInfo_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServerInfo != nullptr)
		*ServerInfo = params.ServerInfo;
	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

}


// Function:
//		Offset -> 0x01C7F740
//		Name   -> Function Steamworks.SteamworksManager.GetServerCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamworksManager::GetServerCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetServerCount");

	USteamworksManager_GetServerCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01C7F650
//		Name   -> Function Steamworks.SteamworksManager.GetPlayerNameByStringId
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     StringId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamworksManager::GetPlayerNameByStringId(const struct FString& StringId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetPlayerNameByStringId");

	USteamworksManager_GetPlayerNameByStringId_Params params {};
	params.StringId = StringId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01C7F630
//		Name   -> Function Steamworks.SteamworksManager.GetAuthSessionTicket
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USteamworksManager::GetAuthSessionTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.GetAuthSessionTicket");

	USteamworksManager_GetAuthSessionTicket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F5B0
//		Name   -> Function Steamworks.SteamworksManager.Get
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USteamworksManager*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamworksManager* USteamworksManager::STATIC_Get(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.Get");

	USteamworksManager_Get_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01C7F4F0
//		Name   -> Function Steamworks.SteamworksManager.CreateLobby
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                LobbyMemberLimit                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPublic                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::CreateLobby(int LobbyMemberLimit, bool bPublic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.CreateLobby");

	USteamworksManager_CreateLobby_Params params {};
	params.LobbyMemberLimit = LobbyMemberLimit;
	params.bPublic = bPublic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F4D0
//		Name   -> Function Steamworks.SteamworksManager.CancelAuthTicket
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USteamworksManager::CancelAuthTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.CancelAuthTicket");

	USteamworksManager_CancelAuthTicket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F3A0
//		Name   -> Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ValueToMatch                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Steamworks_ESteamLobbyComparison                   ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::AddRequestLobbyListStringFilter(const struct FString& KeyToMatch, const struct FString& ValueToMatch, Steamworks_ESteamLobbyComparison ComparisonType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListStringFilter");

	USteamworksManager_AddRequestLobbyListStringFilter_Params params {};
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F320
//		Name   -> Function Steamworks.SteamworksManager.AddRequestLobbyListResultCountFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::AddRequestLobbyListResultCountFilter(int MaxResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListResultCountFilter");

	USteamworksManager_AddRequestLobbyListResultCountFilter_Params params {};
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F200
//		Name   -> Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ValueToMatch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Steamworks_ESteamLobbyComparison                   ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::AddRequestLobbyListNumericalFilter(const struct FString& KeyToMatch, int ValueToMatch, Steamworks_ESteamLobbyComparison ComparisonType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListNumericalFilter");

	USteamworksManager_AddRequestLobbyListNumericalFilter_Params params {};
	params.KeyToMatch = KeyToMatch;
	params.ValueToMatch = ValueToMatch;
	params.ComparisonType = ComparisonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F120
//		Name   -> Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ValueToBeCloseTo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::AddRequestLobbyListNearValueFilter(const struct FString& KeyToMatch, int ValueToBeCloseTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListNearValueFilter");

	USteamworksManager_AddRequestLobbyListNearValueFilter_Params params {};
	params.KeyToMatch = KeyToMatch;
	params.ValueToBeCloseTo = ValueToBeCloseTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F0A0
//		Name   -> Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SlotsAvailable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::AddRequestLobbyListFilterSlotsAvailable(int SlotsAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListFilterSlotsAvailable");

	USteamworksManager_AddRequestLobbyListFilterSlotsAvailable_Params params {};
	params.SlotsAvailable = SlotsAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7F020
//		Name   -> Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Steamworks_ESteamLobbyDistanceFilter               DistanceFilter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamworksManager::AddRequestLobbyListDistanceFilter(Steamworks_ESteamLobbyDistanceFilter DistanceFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksManager.AddRequestLobbyListDistanceFilter");

	USteamworksManager_AddRequestLobbyListDistanceFilter_Params params {};
	params.DistanceFilter = DistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01C7FE60
//		Name   -> Function Steamworks.SteamworksStatics.GetSteamPersonaName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamworksStatics::STATIC_GetSteamPersonaName(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksStatics.GetSteamPersonaName");

	USteamworksStatics_GetSteamPersonaName_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01C7FD90
//		Name   -> Function Steamworks.SteamworksStatics.GetLocalSteamId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamworksStatics::STATIC_GetLocalSteamId(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Steamworks.SteamworksStatics.GetLocalSteamId");

	USteamworksStatics_GetLocalSteamId_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
