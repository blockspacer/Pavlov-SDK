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

// Enum Pavlov.EMatchResult
enum class Pavlov_EMatchResult : uint8_t
{
	EMatchResult__Victory          = 0,
	EMatchResult__Defeat           = 1,
	EMatchResult__Draw             = 2,
	EMatchResult__EMatchResult_MAX = 3,

};

// Enum Pavlov.EHolidays
enum class Pavlov_EHolidays : uint8_t
{
	EHolidays__None                = 0,
	EHolidays__AprilFools          = 1,
	EHolidays__Halloween           = 2,
	EHolidays__Xmas                = 3,
	EHolidays__EHolidays_MAX       = 4,

};

// Enum Pavlov.ECompetitiveMode
enum class Pavlov_ECompetitiveMode : uint8_t
{
	ECompetitiveMode__Disabled     = 0,
	ECompetitiveMode__Normal       = 1,
	ECompetitiveMode__Enhanced     = 2,
	ECompetitiveMode__ECompetitiveMode_MAX = 3,

};

// Enum Pavlov.EWeaponFilter
enum class Pavlov_EWeaponFilter : uint8_t
{
	EWeaponFilter__None            = 0,
	EWeaponFilter__RiflesOnly      = 1,
	EWeaponFilter__HandGunsOnly    = 2,
	EWeaponFilter__KnivesOnly      = 3,
	EWeaponFilter__GrenadesOnly    = 4,
	EWeaponFilter__EWeaponFilter_MAX = 5,

};

// Enum Pavlov.EMatchType
enum class Pavlov_EMatchType : uint8_t
{
	EMatchType__Normal             = 0,
	EMatchType__NormalWithBots     = 1,
	EMatchType__Coop               = 2,
	EMatchType__EMatchType_MAX     = 3,

};

// Enum Pavlov.EOnlineJoinServerState
enum class Pavlov_EOnlineJoinServerState : uint8_t
{
	EOnlineJoinServerState__None   = 0,
	EOnlineJoinServerState__Standby = 1,
	EOnlineJoinServerState__Connecting = 2,
	EOnlineJoinServerState__WaitingForPin = 3,
	EOnlineJoinServerState__Timeout = 4,
	EOnlineJoinServerState__EOnlineJoinServerState_MAX = 5,

};

// Enum Pavlov.EOnlineError
enum class Pavlov_EOnlineError : uint8_t
{
	EOnlineError__Undefined        = 0,
	EOnlineError__LobbyCreateFailed = 1,
	EOnlineError__JoinLobbyFailed  = 2,
	EOnlineError__JoinLobbyPinMismatch = 3,
	EOnlineError__LobbySearchFailed = 4,
	EOnlineError__LobbyDisconnect  = 5,
	EOnlineError__LobbyKick        = 6,
	EOnlineError__IpPortConnectFailure = 7,
	EOnlineError__EOnlineError_MAX = 8,

};

// Enum Pavlov.ELobbyPermission
enum class Pavlov_ELobbyPermission : uint8_t
{
	ELobbyPermission__Public       = 0,
	ELobbyPermission__JoinViaPresence = 1,
	ELobbyPermission__InviteOnly   = 2,
	ELobbyPermission__ELobbyPermission_MAX = 3,

};

// Enum Pavlov.EMatchmakingStatus
enum class Pavlov_EMatchmakingStatus : uint8_t
{
	EMatchmakingStatus__None       = 0,
	EMatchmakingStatus__Waiting    = 1,
	EMatchmakingStatus__Polling    = 2,
	EMatchmakingStatus__Matched    = 3,
	EMatchmakingStatus__EMatchmakingStatus_MAX = 4,

};

// Enum Pavlov.EUserInterfaceType
enum class Pavlov_EUserInterfaceType : uint8_t
{
	EUserInterfaceType__None       = 0,
	EUserInterfaceType__Info       = 1,
	EUserInterfaceType__MainMenu   = 2,
	EUserInterfaceType__PlayOnline = 3,
	EUserInterfaceType__PlayOffline = 4,
	EUserInterfaceType__Training   = 5,
	EUserInterfaceType__Friends    = 6,
	EUserInterfaceType__Customize  = 7,
	EUserInterfaceType__Moderation = 8,
	EUserInterfaceType__Stats      = 9,
	EUserInterfaceType__Settings   = 10,
	EUserInterfaceType__Connecting = 11,
	EUserInterfaceType__Matchmaking = 12,
	EUserInterfaceType__Filters    = 13,
	EUserInterfaceType__EUserInterfaceType_MAX = 14,

};

// Enum Pavlov.EMatchmakingState
enum class Pavlov_EMatchmakingState : uint8_t
{
	EMatchmakingState__Standby     = 0,
	EMatchmakingState__Searching   = 1,
	EMatchmakingState__Lobby       = 2,
	EMatchmakingState__Connecting  = 3,
	EMatchmakingState__EMatchmakingState_MAX = 4,

};

// Enum Pavlov.ELobbyState
enum class Pavlov_ELobbyState : uint8_t
{
	ELobbyState__Standby           = 0,
	ELobbyState__FindingGameServer = 1,
	ELobbyState__Playing           = 2,
	ELobbyState__ELobbyState_MAX   = 3,

};

// Enum Pavlov.EConnectorFailureReason
enum class Pavlov_EConnectorFailureReason : uint8_t
{
	EConnectorFailureReason__None  = 0,
	EConnectorFailureReason__Unreachable = 1,
	EConnectorFailureReason__Timeout = 2,
	EConnectorFailureReason__WrongPin = 3,
	EConnectorFailureReason__ServerFull = 4,
	EConnectorFailureReason__Banned = 5,
	EConnectorFailureReason__WhitelistOnly = 6,
	EConnectorFailureReason__ReconnectError = 7,
	EConnectorFailureReason__MissingMap = 8,
	EConnectorFailureReason__EConnectorFailureReason_MAX = 9,

};

// Enum Pavlov.ELauncherState
enum class Pavlov_ELauncherState : uint8_t
{
	ELauncherState__Unloaded       = 0,
	ELauncherState__Loaded         = 1,
	ELauncherState__Cocked         = 2,
	ELauncherState__ELauncherState_MAX = 3,

};

// Enum Pavlov.EHillState
enum class Pavlov_EHillState : uint8_t
{
	EHillState__Inactive           = 0,
	EHillState__ActiveNeutral      = 1,
	EHillState__ActiveTeam0        = 2,
	EHillState__ActiveTeam1        = 3,
	EHillState__EHillState_MAX     = 4,

};

// Enum Pavlov.EWorkshopVoteType
enum class Pavlov_EWorkshopVoteType : uint8_t
{
	EWorkshopVoteType__Up          = 0,
	EWorkshopVoteType__Down        = 1,
	EWorkshopVoteType__Skipped     = 2,
	EWorkshopVoteType__EWorkshopVoteType_MAX = 3,

};

// Enum Pavlov.EVehicleDamageState
enum class Pavlov_EVehicleDamageState : uint8_t
{
	EVehicleDamageState__Normal    = 0,
	EVehicleDamageState__Light     = 1,
	EVehicleDamageState__Medium    = 2,
	EVehicleDamageState__Heavy     = 3,
	EVehicleDamageState__Critical  = 4,
	EVehicleDamageState__Destroyed = 5,
	EVehicleDamageState__EVehicleDamageState_MAX = 6,

};

// Enum Pavlov.EBattlegroundsWaitingState
enum class Pavlov_EBattlegroundsWaitingState : uint8_t
{
	EBattlegroundsWaitingState__Waiting = 0,
	EBattlegroundsWaitingState__Launching = 1,
	EBattlegroundsWaitingState__Playing = 2,
	EBattlegroundsWaitingState__Dead = 3,
	EBattlegroundsWaitingState__EBattlegroundsWaitingState_MAX = 4,

};

// Enum Pavlov.EBattlegroundsServerType
enum class Pavlov_EBattlegroundsServerType : uint8_t
{
	EBattlegroundsServerType__WaitingServer = 0,
	EBattlegroundsServerType__GameServer = 1,
	EBattlegroundsServerType__EBattlegroundsServerType_MAX = 2,

};

// Enum Pavlov.EBombState
enum class Pavlov_EBombState : uint8_t
{
	EBombState__StandBy            = 0,
	EBombState__Armed              = 1,
	EBombState__Planted            = 2,
	EBombState__Detonating         = 3,
	EBombState__Detonated          = 4,
	EBombState__Defused            = 5,
	EBombState__EBombState_MAX     = 6,

};

// Enum Pavlov.EConditionType
enum class Pavlov_EConditionType : uint8_t
{
	EConditionType__None           = 0,
	EConditionType__TeamID         = 1,
	EConditionType__EConditionType_MAX = 2,

};

// Enum Pavlov.EConditionOperator
enum class Pavlov_EConditionOperator : uint8_t
{
	EConditionOperator__Equal      = 0,
	EConditionOperator__NotEqual   = 1,
	EConditionOperator__Greater    = 2,
	EConditionOperator__Less       = 3,
	EConditionOperator__EConditionOperator_MAX = 4,

};

// Enum Pavlov.EGameSessionState
enum class Pavlov_EGameSessionState : uint8_t
{
	EGameSessionState__Standby     = 0,
	EGameSessionState__Querying    = 1,
	EGameSessionState__Active      = 2,
	EGameSessionState__EGameSessionState_MAX = 3,

};

// Enum Pavlov.EGestureType
enum class Pavlov_EGestureType : uint8_t
{
	EGestureType__AngularPitch     = 0,
	EGestureType__AngularYaw       = 1,
	EGestureType__AngularRoll      = 2,
	EGestureType__AngularVelocityPitch = 3,
	EGestureType__AngularVelocityYaw = 4,
	EGestureType__AngularVelocityRoll = 5,
	EGestureType__LinearVelocityX  = 6,
	EGestureType__LinearVelocityY  = 7,
	EGestureType__LinearVelocityZ  = 8,
	EGestureType__EGestureType_MAX = 9,

};

// Enum Pavlov.EGhostPointMode
enum class Pavlov_EGhostPointMode : uint8_t
{
	EGhostPointMode__Teleport      = 0,
	EGhostPointMode__PlayerCycle   = 1,
	EGhostPointMode__EGhostPointMode_MAX = 2,

};

// Enum Pavlov.EPlayerEffectState
enum class Pavlov_EPlayerEffectState : uint8_t
{
	EPlayerEffectState__Normal     = 0,
	EPlayerEffectState__Flashed    = 1,
	EPlayerEffectState__FlashedVision = 2,
	EPlayerEffectState__Supressed  = 3,
	EPlayerEffectState__Ghost      = 4,
	EPlayerEffectState__Tank       = 5,
	EPlayerEffectState__EPlayerEffectState_MAX = 6,

};

// Enum Pavlov.EGrenadeType
enum class Pavlov_EGrenadeType : uint8_t
{
	EGrenadeType__Grenade          = 0,
	EGrenadeType__Smoke            = 1,
	EGrenadeType__Flash            = 2,
	EGrenadeType__Other            = 3,
	EGrenadeType__EGrenadeType_MAX = 4,

};

// Enum Pavlov.EGrenadeState
enum class Pavlov_EGrenadeState : uint8_t
{
	EGrenadeState__SafeWithPin     = 0,
	EGrenadeState__Safe            = 1,
	EGrenadeState__Cooking         = 2,
	EGrenadeState__Detonated       = 3,
	EGrenadeState__EGrenadeState_MAX = 4,

};

// Enum Pavlov.ETwoHandStockState
enum class Pavlov_ETwoHandStockState : uint8_t
{
	ETwoHandStockState__Unstocked  = 0,
	ETwoHandStockState__Stocking   = 1,
	ETwoHandStockState__Stocked    = 2,
	ETwoHandStockState__Destocking = 3,
	ETwoHandStockState__ETwoHandStockState_MAX = 4,

};

// Enum Pavlov.EHighlightColor
enum class Pavlov_EHighlightColor : uint8_t
{
	EHighlightColor__Team0         = 0,
	EHighlightColor__Team1         = 1,
	EHighlightColor__Orange        = 2,
	EHighlightColor__White         = 3,
	EHighlightColor__EHighlightColor_MAX = 4,

};

// Enum Pavlov.EImpairedType
enum class Pavlov_EImpairedType : uint8_t
{
	EImpairedType__Flash           = 0,
	EImpairedType__Stun            = 1,
	EImpairedType__Frozen          = 2,
	EImpairedType__EImpairedType_MAX = 3,

};

// Enum Pavlov.EMenuUniverseDockingType
enum class Pavlov_EMenuUniverseDockingType : uint8_t
{
	EMenuUniverseDockingType__CenterOverlay = 0,
	EMenuUniverseDockingType__LeftStack = 1,
	EMenuUniverseDockingType__RightStack = 2,
	EMenuUniverseDockingType__BottomBar = 3,
	EMenuUniverseDockingType__EMenuUniverseDockingType_MAX = 4,

};

// Enum Pavlov.EModalMessageBoxType
enum class Pavlov_EModalMessageBoxType : uint8_t
{
	EModalMessageBoxType__None     = 0,
	EModalMessageBoxType__Accept   = 1,
	EModalMessageBoxType__Ok       = 2,
	EModalMessageBoxType__AcceptCancel = 3,
	EModalMessageBoxType__Cancel   = 4,
	EModalMessageBoxType__SpinnerCancel = 5,
	EModalMessageBoxType__Vote     = 6,
	EModalMessageBoxType__EModalMessageBoxType_MAX = 7,

};

// Enum Pavlov.EBackendResult
enum class Pavlov_EBackendResult : uint8_t
{
	EBackendResult__Success        = 0,
	EBackendResult__Failure        = 1,
	EBackendResult__Pending        = 2,
	EBackendResult__InvalidCredentials = 3,
	EBackendResult__InvalidParameters = 4,
	EBackendResult__TooManyRequests = 5,
	EBackendResult__Forbidden      = 6,
	EBackendResult__Invalid        = 7,
	EBackendResult__EBackendResult_MAX = 8,

};

// Enum Pavlov.EOnlineServerIdType
enum class Pavlov_EOnlineServerIdType : uint8_t
{
	EOnlineServerIdType__Invalid   = 0,
	EOnlineServerIdType__LobbyId   = 1,
	EOnlineServerIdType__IpPort    = 2,
	EOnlineServerIdType__EOnlineServerIdType_MAX = 3,

};

// Enum Pavlov.EComparisonOp
enum class Pavlov_EComparisonOp : uint8_t
{
	EComparisonOp__Equal           = 0,
	EComparisonOp__NotEqual        = 1,
	EComparisonOp__AnyOf           = 2,
	EComparisonOp__NotAnyOf        = 3,
	EComparisonOp__EComparisonOp_MAX = 4,

};

// Enum Pavlov.EAIEngageState
enum class Pavlov_EAIEngageState : uint8_t
{
	EAIEngageState__Reacting       = 0,
	EAIEngageState__Aiming         = 1,
	EAIEngageState__Shooting       = 2,
	EAIEngageState__Scanning       = 3,
	EAIEngageState__EAIEngageState_MAX = 4,

};

// Enum Pavlov.EBuildVersionStatus
enum class Pavlov_EBuildVersionStatus : uint8_t
{
	EBuildVersionStatus__Waiting   = 0,
	EBuildVersionStatus__Unknown   = 1,
	EBuildVersionStatus__OutOfDate = 2,
	EBuildVersionStatus__UpToDate  = 3,
	EBuildVersionStatus__EBuildVersionStatus_MAX = 4,

};

// Enum Pavlov.EGameDifficulty
enum class Pavlov_EGameDifficulty : uint8_t
{
	EGameDifficulty__Easy          = 0,
	EGameDifficulty__Normal        = 1,
	EGameDifficulty__Hard          = 2,
	EGameDifficulty__EGameDifficulty_MAX = 3,

};

// Enum Pavlov.EGoreLevel
enum class Pavlov_EGoreLevel : uint8_t
{
	EGoreLevel__Disabled           = 0,
	EGoreLevel__Normal             = 1,
	EGoreLevel__Gruesome           = 2,
	EGoreLevel__EGoreLevel_MAX     = 3,

};

// Enum Pavlov.ECustomAction
enum class Pavlov_ECustomAction : uint8_t
{
	ECustomAction__None            = 0,
	ECustomAction__RotationReset   = 1,
	ECustomAction__RadioToggle     = 2,
	ECustomAction__MagBoltRelease  = 3,
	ECustomAction__ECustomAction_MAX = 4,

};

// Enum Pavlov.EGripMode
enum class Pavlov_EGripMode : uint8_t
{
	EGripMode__Auto                = 0,
	EGripMode__Click               = 1,
	EGripMode__Hold                = 2,
	EGripMode__EGripMode_MAX       = 3,

};

// Enum Pavlov.ELocomotionMode
enum class Pavlov_ELocomotionMode : uint8_t
{
	ELocomotionMode__OutOfBody     = 0,
	ELocomotionMode__StandingOnly  = 1,
	ELocomotionMode__RoomScale     = 2,
	ELocomotionMode__ELocomotionMode_MAX = 3,

};

// Enum Pavlov.EOnlineRegion
enum class Pavlov_EOnlineRegion : uint8_t
{
	EOnlineRegion__America         = 0,
	EOnlineRegion__Europe          = 1,
	EOnlineRegion__AsiaPacific     = 2,
	EOnlineRegion__EOnlineRegion_MAX = 3,

};

// Enum Pavlov.EServerSearchType
enum class Pavlov_EServerSearchType : uint8_t
{
	EServerSearchType__ShowLobby   = 0,
	EServerSearchType__ShowCommunityServer = 1,
	EServerSearchType__ShowBoth    = 2,
	EServerSearchType__EServerSearchType_MAX = 3,

};

// Enum Pavlov.EServerSortType
enum class Pavlov_EServerSortType : uint8_t
{
	EServerSortType__None          = 0,
	EServerSortType__PingAscending = 1,
	EServerSortType__PingDescending = 2,
	EServerSortType__PlayerCountAscending = 3,
	EServerSortType__PlayerCountDescending = 4,
	EServerSortType__EServerSortType_MAX = 5,

};

// Enum Pavlov.EFinger
enum class Pavlov_EFinger : uint8_t
{
	EFinger__Index                 = 0,
	EFinger__Middle                = 1,
	EFinger__Ring                  = 2,
	EFinger__Pinky                 = 3,
	EFinger__Thumb                 = 4,
	EFinger__EFinger_MAX           = 5,

};

// Enum Pavlov.ESessionStatus
enum class Pavlov_ESessionStatus : uint8_t
{
	ESessionStatus__Pending        = 0,
	ESessionStatus__Fullfilled     = 1,
	ESessionStatus__Dispatching    = 2,
	ESessionStatus__InProgress     = 3,
	ESessionStatus__Ended          = 4,
	ESessionStatus__ESessionStatus_MAX = 5,

};

// Enum Pavlov.EServerHostingType
enum class Pavlov_EServerHostingType : uint8_t
{
	EServerHostingType__Official   = 0,
	EServerHostingType__BestAvailable = 1,
	EServerHostingType__Local      = 2,
	EServerHostingType__EServerHostingType_MAX = 3,

};

// Enum Pavlov.EParachuteState
enum class Pavlov_EParachuteState : uint8_t
{
	EParachuteState__Packed        = 0,
	EParachuteState__Deploying     = 1,
	EParachuteState__Deployed      = 2,
	EParachuteState__Ditched       = 3,
	EParachuteState__EParachuteState_MAX = 4,

};

// Enum Pavlov.EHitFeedbackType
enum class Pavlov_EHitFeedbackType : uint8_t
{
	EHitFeedbackType__Body         = 0,
	EHitFeedbackType__BodyArmor    = 1,
	EHitFeedbackType__Helmet       = 2,
	EHitFeedbackType__Headshot     = 3,
	EHitFeedbackType__EHitFeedbackType_MAX = 4,

};

// Enum Pavlov.EPlayerFlair
enum class Pavlov_EPlayerFlair : uint8_t
{
	EPlayerFlair__None             = 0,
	EPlayerFlair__Patron           = 1,
	EPlayerFlair__Moderator        = 2,
	EPlayerFlair__Developer        = 3,
	EPlayerFlair__EPlayerFlair_MAX = 4,

};

// Enum Pavlov.EShackDeviceType
enum class Pavlov_EShackDeviceType : uint8_t
{
	EShackDeviceType__None         = 0,
	EShackDeviceType__OculusQuest  = 1,
	EShackDeviceType__OculusQuest2 = 2,
	EShackDeviceType__HTCSunrise   = 3,
	EShackDeviceType__PSVR2        = 4,
	EShackDeviceType__PC           = 5,
	EShackDeviceType__EShackDeviceType_MAX = 6,

};

// Enum Pavlov.EPliersState
enum class Pavlov_EPliersState : uint8_t
{
	EPliersState__Standby          = 0,
	EPliersState__Cutting          = 1,
	EPliersState__Cut              = 2,
	EPliersState__EPliersState_MAX = 3,

};

// Enum Pavlov.EPushWinCondition
enum class Pavlov_EPushWinCondition : uint8_t
{
	EPushWinCondition__OutOfTime   = 0,
	EPushWinCondition__OutOfTicketsAttackers = 1,
	EPushWinCondition__OutOfTicketsDefenders = 2,
	EPushWinCondition__SitesDestroyed = 3,
	EPushWinCondition__EPushWinCondition_MAX = 4,

};

// Enum Pavlov.EPushDialog
enum class Pavlov_EPushDialog : uint8_t
{
	EPushDialog__None              = 0,
	EPushDialog__PushRevived       = 1,
	EPushDialog__PushLowHealth     = 2,
	EPushDialog__PushLowAmmo       = 3,
	EPushDialog__PushMineDeployed  = 4,
	EPushDialog__PushAmmoDeployed  = 5,
	EPushDialog__PushMedkitDeployed = 6,
	EPushDialog__PushOutOfBounds   = 7,
	EPushDialog__PushChant         = 8,
	EPushDialog__PushGrenadeOut    = 9,
	EPushDialog__PushSmokeOut      = 10,
	EPushDialog__EPushDialog_MAX   = 11,

};

// Enum Pavlov.ERconCommands
enum class Pavlov_ERconCommands : uint8_t
{
	ERconCommands__Default         = 0,
	ERconCommands__Kick            = 1,
	ERconCommands__Kill            = 2,
	ERconCommands__Ban             = 3,
	ERconCommands__Unban           = 4,
	ERconCommands__BanList         = 5,
	ERconCommands__AddMod          = 6,
	ERconCommands__RemoveMod       = 7,
	ERconCommands__ModeratorList   = 8,
	ERconCommands__Whitelist       = 9,
	ERconCommands__Unwhitelist     = 10,
	ERconCommands__RotateMap       = 11,
	ERconCommands__SwitchMap       = 12,
	ERconCommands__MapList         = 13,
	ERconCommands__SwitchTeam      = 14,
	ERconCommands__ItemList        = 15,
	ERconCommands__GiveItem        = 16,
	ERconCommands__GiveAll         = 17,
	ERconCommands__GiveVehicle     = 18,
	ERconCommands__SetCash         = 19,
	ERconCommands__GiveCash        = 20,
	ERconCommands__GiveTeamCash    = 21,
	ERconCommands__InspectPlayer   = 22,
	ERconCommands__RefreshList     = 23,
	ERconCommands__Help            = 24,
	ERconCommands__ServerInfo      = 25,
	ERconCommands__SetLimitedAmmoType = 26,
	ERconCommands__ResetSND        = 27,
	ERconCommands__SetPlayerSkin   = 28,
	ERconCommands__Slap            = 29,
	ERconCommands__SetPin          = 30,
	ERconCommands__SetRconSpectator = 31,
	ERconCommands__TTTFlushKarma   = 32,
	ERconCommands__TTTSetKarma     = 33,
	ERconCommands__TTTSetRole      = 34,
	ERconCommands__TTTEndRound     = 35,
	ERconCommands__TTTPauseTimer   = 36,
	ERconCommands__TTTAlwaysEnableSkinMenu = 37,
	ERconCommands__ShowNametags    = 38,
	ERconCommands__ERconCommands_MAX = 39,

};

// Enum Pavlov.ERotationHandleOffset
enum class Pavlov_ERotationHandleOffset : uint8_t
{
	ERotationHandleOffset__None    = 0,
	ERotationHandleOffset__GrabLocation = 1,
	ERotationHandleOffset__SpecifiedStartingAngle = 2,
	ERotationHandleOffset__ERotationHandleOffset_MAX = 3,

};

// Enum Pavlov.EServerType
enum class Pavlov_EServerType : uint8_t
{
	EServerType__LobbyWaiting      = 0,
	EServerType__LobbyPlaying      = 1,
	EServerType__CommunityServer   = 2,
	EServerType__MatchMakingWaiting = 3,
	EServerType__MatchMakingConnecting = 4,
	EServerType__MatchMakingPlaying = 5,
	EServerType__EServerType_MAX   = 6,

};

// Enum Pavlov.ESkinFamily
enum class Pavlov_ESkinFamily : uint8_t
{
	ESkinFamily__Default           = 0,
	ESkinFamily__Patreon           = 1,
	ESkinFamily__Developer         = 2,
	ESkinFamily__QA                = 3,
	ESkinFamily__Glacial           = 4,
	ESkinFamily__Billibong         = 5,
	ESkinFamily__Rekt              = 6,
	ESkinFamily__Royalty           = 7,
	ESkinFamily__DragonGolden      = 8,
	ESkinFamily__DragonPapyrus     = 9,
	ESkinFamily__WaveTrip          = 10,
	ESkinFamily__Scifi             = 11,
	ESkinFamily__Massacre          = 12,
	ESkinFamily__Circuit           = 13,
	ESkinFamily__Jungle            = 14,
	ESkinFamily__Wargo             = 15,
	ESkinFamily__ESkinFamily_MAX   = 16,

};

// Enum Pavlov.EPlayerStats
enum class Pavlov_EPlayerStats : uint8_t
{
	EPlayerStats__Kill             = 0,
	EPlayerStats__Death            = 1,
	EPlayerStats__Assist           = 2,
	EPlayerStats__Headshot         = 3,
	EPlayerStats__TeamKill         = 4,
	EPlayerStats__BombDefused      = 5,
	EPlayerStats__BombPlanted      = 6,
	EPlayerStats__ChickenKilled    = 7,
	EPlayerStats__Experience       = 8,
	EPlayerStats__Karma            = 9,
	EPlayerStats__ELO              = 10,
	EPlayerStats__EPlayerStats_MAX = 11,

};

// Enum Pavlov.EStereoOverlayMode
enum class Pavlov_EStereoOverlayMode : uint8_t
{
	EStereoOverlayMode__SimpleFrontal = 0,
	EStereoOverlayMode__Frontal    = 1,
	EStereoOverlayMode__Sidearm    = 2,
	EStereoOverlayMode__EStereoOverlayMode_MAX = 3,

};

// Enum Pavlov.EToolTipState
enum class Pavlov_EToolTipState : uint8_t
{
	EToolTipState__None            = 0,
	EToolTipState__ShowingUp       = 1,
	EToolTipState__Waiting         = 2,
	EToolTipState__Terminating     = 3,
	EToolTipState__EToolTipState_MAX = 4,

};

// Enum Pavlov.EVoteState
enum class Pavlov_EVoteState : uint8_t
{
	EVoteState__Voting             = 0,
	EVoteState__Succeed            = 1,
	EVoteState__Failed             = 2,
	EVoteState__EVoteState_MAX     = 3,

};

// Enum Pavlov.EWorkshopQueryType
enum class Pavlov_EWorkshopQueryType : uint8_t
{
	EWorkshopQueryType__Installed  = 0,
	EWorkshopQueryType__Favorite   = 1,
	EWorkshopQueryType__MostPopular = 2,
	EWorkshopQueryType__MostSubscribed = 3,
	EWorkshopQueryType__MostRecent = 4,
	EWorkshopQueryType__EWorkshopQueryType_MAX = 5,

};

// Enum Pavlov.EWoundMaterialType
enum class Pavlov_EWoundMaterialType : uint8_t
{
	EWoundMaterialType__None       = 0,
	EWoundMaterialType__Simple     = 1,
	EWoundMaterialType__Complex    = 2,
	EWoundMaterialType__EWoundMaterialType_MAX = 3,

};

// Enum Pavlov.EWoundSeverity
enum class Pavlov_EWoundSeverity : uint8_t
{
	EWoundSeverity__None           = 0,
	EWoundSeverity__Small          = 1,
	EWoundSeverity__Medium         = 2,
	EWoundSeverity__Large          = 3,
	EWoundSeverity__Shotgun        = 4,
	EWoundSeverity__EWoundSeverity_MAX = 5,

};

// Enum Pavlov.EAIZombieState
enum class Pavlov_EAIZombieState : uint8_t
{
	EAIZombieState__Idle           = 0,
	EAIZombieState__Alerted        = 1,
	EAIZombieState__Attacking      = 2,
	EAIZombieState__EAIZombieState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pavlov.AirdropDetails
// 0x001C
struct FAirdropDetails
{
	float                                              TotalTravelTime;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlaneStartLocation;                                        // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlaneEndLocation;                                          // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.BayonetDamage
// 0x0030
struct FBayonetDamage
{
	class APavlovPawn*                                 StabbedPawn;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSlashed;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ULKW[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       HitBone;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BodyHitLocation;                                           // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitDirection;                                              // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.AttachProxyInfo
// 0x0050
struct FAttachProxyInfo
{
	class USceneComponent*                             AttachParent;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68CK[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LocalOffset;                                               // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9Z9[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.AIPersonality
// 0x0020 (0x0028 - 0x0008)
struct FAIPersonality : public FTableRowBase
{
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Courage;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Reaction;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strategy;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Skill;                                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.BuyRestrictions
// 0x0140
struct FBuyRestrictions
{
	TMap<struct FName, unsigned char>                  MaxPurchasesPerTeam;                                       // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FName, unsigned char>                  MaxPurchasesPerPlayer;                                     // 0x0050(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FName, unsigned char>                  Team0Purchases;                                            // 0x00A0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, unsigned char>                  Team1Purchases;                                            // 0x00F0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.DamageTrackInfo
// 0x0038
struct FDamageTrackInfo
{
	class APavlovPlayerState*                          Instigator;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OriginLocation;                                            // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactLocation;                                            // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLastHit;                                                  // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBullet;                                                   // 0x0025(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJ86[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DamageCauser;                                              // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeadshot;                                                 // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NWDV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.BuyMenuEquipment
// 0x0028
struct FBuyMenuEquipment
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconTexture;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cost;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAbleToBuy;                                              // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAbleToAttach;                                           // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4FTJ[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.ConditionStatement
// 0x0008
struct FConditionStatement
{
	Pavlov_EConditionType                              ConditionType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EConditionOperator                          ConditionOperator;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RC4A[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CompareValue;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.BuyMenuSlot
// 0x0018
struct FBuyMenuSlot
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Category;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionStatement                         BuyCondition;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.BuyMenuContainer
// 0x0010
struct FBuyMenuContainer
{
	TArray<struct FBuyMenuSlot>                        BuyWheelSlots;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.UIPlayerInfoModel
// 0x0040
struct FUIPlayerInfoModel
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AvatarImage;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpeaking;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMuted;                                                    // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocal;                                                    // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4X7K[0x1];                                     // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TeamId;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeKicked;                                              // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBot;                                                      // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S6XY[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.ContentViewGlobals
// 0x0038
struct FContentViewGlobals
{
	struct FString                                     Interface;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SideInterface;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUIPlayerInfoModel>                  Players;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               PlayingOnline;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LobbyActive;                                               // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSwitchTeam;                                            // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSuicide;                                               // 0x0033(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanVote;                                                  // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanCallVote;                                              // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllMuted;                                                 // 0x0036(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJL0[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.UILobbyMemberModel
// 0x0048
struct FUILobbyMemberModel
{
	bool                                               bTaken;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3RG9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTalking;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMuted;                                                    // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A471[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserId;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Avatar;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOwner;                                                    // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelf;                                                     // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReady;                                                    // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PF9D[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.ServerSettings
// 0x0030
struct FServerSettings
{
	Pavlov_EMatchType                                  MatchType;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWZE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MatchLength;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompetitive;                                              // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHardcore;                                                 // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EWeaponFilter                               WeaponFilter;                                              // 0x000A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NHS6[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Team0;                                                     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Team1;                                                     // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ModalCommitParams
// 0x0020
struct FModalCommitParams
{
	int                                                Value;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZFC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ValueStr;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     UserObject;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.UILobbyModel
// 0x00C0
struct FUILobbyModel
{
	bool                                               bBusy;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFindingServer;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEK2[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MapThumbnail;                                              // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalOwner;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriendsOnly;                                              // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsToStart;                                             // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBots;                                                     // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCoop;                                                     // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WIGS[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUILobbyMemberModel>                 Members;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Pin;                                                       // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapId;                                                     // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapLabel;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsMatchLengthOverride;                              // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsCompetitive;                                      // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8FW[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FServerSettings                             Settings;                                                  // 0x0090(0x0030) (NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.DamageEffectHit
// 0x0010
struct FDamageEffectHit
{
	struct FVector                                     HitVector;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitTime;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.RotatedMap
// 0x0020
struct FRotatedMap
{
	struct FString                                     MapId;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ServerDetails
// 0x00A0
struct FServerDetails
{
	struct FString                                     Hash;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ip;                                                        // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNX9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapLabel;                                                  // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapId;                                                     // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slots;                                                     // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSlots;                                                  // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPasswordProtected;                                        // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecured;                                                  // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W93E[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Tags;                                                      // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Ping;                                                      // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0DBG[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.GestureSetup
// 0x0028
struct FGestureSetup
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EGestureType                                Type;                                                      // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQ68[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Threshold;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLY7[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.KillInfo
// 0x0070
struct FKillInfo
{
	struct FVector                                     BulletOrigin;                                              // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BulletImpact;                                              // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bByBullet;                                                 // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4N9[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APavlovPlayerState*                          Killer;                                                    // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageTrackInfo                            LastHit;                                                   // 0x0028(0x0038) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FDamageTrackInfo>                    Assists;                                                   // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ShotConcurrencyQuality
// 0x0028
struct FShotConcurrencyQuality
{
	class USoundConcurrency*                           Default;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           High;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           Medium;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           Low;                                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           Quest;                                                     // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.GunAttachmentSetup
// 0x0030
struct FGunAttachmentSetup
{
	class UClass*                                      SuppresorClass;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SightClass;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PicatinnyOffset;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F2ZT[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GripClass;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AccessoryClass;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CantedClass;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ReplayInfo
// 0x0050
struct FReplayInfo
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLive;                                                     // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGI6[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimespan                                   Elapsed;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Users;                                                     // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.HitBox
// 0x0080
struct FHitBox
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                    // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIKH[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Bone;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneMirror;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               BoxComponent;                                              // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YWJC[0x40];                                    // 0x0040(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.HitBoxHistory
// 0x0018
struct FHitBoxHistory
{
	unsigned char                                      UnknownData_WUMX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitBox>                             Instances;                                                 // 0x0008(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.EOSStat
// 0x0028
struct FEOSStat
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PNC0[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.StatOption
// 0x0030
struct FStatOption
{
	unsigned char                                      UnknownData_IK7Z[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEOSStat                                    EOSStat;                                                   // 0x0008(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.EquipmentCost
// 0x0008 (0x0010 - 0x0008)
struct FEquipmentCost : public FTableRowBase
{
	int                                                Cost;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DUA6[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.VehicleInfo
// 0x0028 (0x0030 - 0x0008)
struct FVehicleInfo : public FTableRowBase
{
	unsigned char                                      VehicleClass[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Pavlov.VehicleInfo.VehicleClass

};

// ScriptStruct Pavlov.HitboxInfo
// 0x0030 (0x0038 - 0x0008)
struct FHitboxInfo : public FTableRowBase
{
	float                                              DamageMul;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Slows;                                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Demoralizes;                                               // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J42H[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      HitSound[0x28];                                            // 0x000E(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Pavlov.HitboxInfo.HitSound

};

// ScriptStruct Pavlov.UISoundMixingChannelModel
// 0x0018
struct FUISoundMixingChannelModel
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.UIMiscSettingsModel
// 0x0038
struct FUIMiscSettingsModel
{
	TArray<struct FUISoundMixingChannelModel>          MixingChannels;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             CaptureDevices;                                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                RenderScale;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AntialiasQuality;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EffectsQuality;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AudioQuality;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KV36[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.StatData
// 0x0008
struct FStatData
{
	Pavlov_EPlayerStats                                StatType;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXFW[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Amount;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PlayerStats
// 0x0038
struct FPlayerStats
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H7DS[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStatData>                           Stats;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.AllPlayerStats
// 0x0010
struct FAllPlayerStats
{
	TArray<struct FPlayerStats>                        AllStats;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.WheelSegment
// 0x0030
struct FWheelSegment
{
	struct FText                                       Label;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       ID;                                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I70D[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ContentClass;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.LobbyStatusMessage
// 0x0018
struct FLobbyStatusMessage
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDownloading;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3V3I[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Progress;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.UIViewModel
// 0x0002
struct FUIViewModel
{
	bool                                               bIsOculus;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsShack;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.VoiceAudioBuffer
// 0x0010
struct FVoiceAudioBuffer
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ZombieBalanceData
// 0x0008 (0x0010 - 0x0008)
struct FZombieBalanceData : public FTableRowBase
{
	unsigned char                                      Damage;                                                    // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WoundRate;                                                 // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIXR[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.LoadoutItem
// 0x0018
struct FLoadoutItem
{
	struct FString                                     ItemName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInHand;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInRightHand;                                              // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InventorySlot;                                             // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P18B[0x5];                                     // 0x0013(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.Loadout
// 0x0018
struct FLoadout
{
	TArray<struct FLoadoutItem>                        LoadoutItems;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConditionStatement                         LoadoutCondition;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.LoadoutProperties
// 0x0050
struct FLoadoutProperties
{
	TMap<struct FString, struct FLoadout>              Loadouts;                                                  // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.UIMapModel
// 0x0040
struct FUIMapModel
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Thumbnail;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rating;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelected;                                                 // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInstalled;                                                // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFavorite;                                                 // 0x0036(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustom;                                                   // 0x0037(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDownloading;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VG4Q[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DownloadProgress;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PartyInfo
// 0x0030
struct FPartyInfo
{
	struct FString                                     Label;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Network;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntityId;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.MatchSettings
// 0x0028
struct FMatchSettings
{
	TArray<struct FString>                             GameModes;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Maps;                                                      // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bPrivate;                                                  // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JBW[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.PartyMember
// 0x0030
struct FPartyMember
{
	struct FString                                     EntityId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   JoinTimestamp;                                             // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocal;                                                    // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeader;                                                   // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasMetadata;                                              // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTalking;                                                  // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8FZS[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.LobbyTalker
// 0x0018
struct FLobbyTalker
{
	unsigned char                                      UnknownData_XXBN[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             AudioComponent;                                            // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TalkTimer;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8Q6L[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.LobbySearchAttributeFilter
// 0x0028
struct FLobbySearchAttributeFilter
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EComparisonOp                               Operator;                                                  // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_331A[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.AvatarTextureInstance
// 0x0010
struct FAvatarTextureInstance
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoaded;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1H7S[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.FriendRichPresence
// 0x0050
struct FFriendRichPresence
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformId;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayStatus;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerId;                                                  // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.OutOfBoundsInfo
// 0x0018
struct FOutOfBoundsInfo
{
	struct FVector                                     GuideToLocation;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_86BU[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APavlov_OutOfBoundsVolume*                   OutOfBoundsVolume;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PavlovAdvancedMap
// 0x0010
struct FPavlovAdvancedMap
{
	class UPavlov_Map*                                 Map;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPublic;                                                   // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFavorite;                                                 // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHFI[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Score;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ServerConnectParams
// 0x0040
struct FServerConnectParams
{
	struct FString                                     ConnectURL;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapId;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ConnectDelay;                                              // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5TAY[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Pin;                                                       // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReconnect;                                                // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIN5[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.EquipmentData
// 0x0048 (0x0050 - 0x0008)
struct FEquipmentData : public FTableRowBase
{
	int                                                MagazineCount;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cost;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillBonus;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BaseDamage;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArmourDamage;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArmourPenetration;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HelmetDamage;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HelmetBleed;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Penetration;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassiveDamage;                                            // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1MTH[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    Icon;                                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Weight;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FalloffModifier;                                           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFalloffDist;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxFalloffDist;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PreloadedSkins
// 0x0050
struct FPreloadedSkins
{
	TMap<int, class UClass*>                           SkinFamilyClassMap;                                        // 0x0000(0x0050) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.KillfeedEntry
// 0x0078
struct FKillfeedEntry
{
	class APavlovPlayerState*                          Killer;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APavlovPlayerState*                          Victim;                                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DamageCauser;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeadshot;                                                 // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIEL[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KillerName;                                                // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillerTeamId;                                              // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FAJX[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KillerId;                                                  // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VictimName;                                                // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VictimTeamId;                                              // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZA2D[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VictimId;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EntryLifespan;                                             // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalPlayer;                                              // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YD9T[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.FavoriteServer
// 0x0020
struct FFavoriteServer
{
	struct FString                                     ServerName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIdentifier;                                          // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.EquipmentDefinition
// 0x0048
struct FEquipmentDefinition
{
	class UClass*                                      Primary;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Secondary;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Knife;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Nades;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      Other;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Inventory;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bByBuyMenu;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBundle;                                                   // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WS6V[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.HandFingerState
// 0x0001
struct FHandFingerState
{
	unsigned char                                      Index : 1;                                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Midle : 1;                                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Ring : 1;                                                  // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Pinky : 1;                                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Thumb : 1;                                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.FingerTracking
// 0x0003
struct FFingerTracking
{
	struct FHandFingerState                            LeftHand;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FHandFingerState                            RightHand;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      Supported : 1;                                             // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.WoundInfo
// 0x0030
struct FWoundInfo
{
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitDirection;                                              // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLastHit;                                                  // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8Z8[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scale;                                                     // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WoundRate;                                                 // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F3W2[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.PlayerAvatar
// 0x0010
struct FPlayerAvatar
{
	class UClass*                                      AvatarSkinClass;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CustomMesh;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ImpactDamage
// 0x0038
struct FImpactDamage
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C01F[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BoneName;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpulseForce;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WoundRate;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J5Y9[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WoundScale;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Instigator;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.GiveItemInventoryParams
// 0x0018
struct FGiveItemInventoryParams
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Slot;                                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithAttachments;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoaded;                                                   // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YP44[0x5];                                     // 0x0013(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.GiveItemParams
// 0x0018
struct FGiveItemParams
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDominant;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWithAttachments;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoaded;                                                   // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LN0P[0x5];                                     // 0x0013(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.ClientZombieBulletHit
// 0x0020
struct FClientZombieBulletHit
{
	class AZombie*                                     Zombie;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Location;                                                  // 0x0008(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      TotalDamage;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6HTI[0x1];                                     // 0x0015(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           BoneIndex;                                                 // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GunClass;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ClientBulletHit
// 0x0048
struct FClientBulletHit
{
	class APavlovPawn*                                 Target;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Hit;                                                       // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHeadshot;                                                 // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPenetrated;                                               // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQW9[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BulletClass;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GunClass;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4AN[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BoneName;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GBDM[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.RconCommand
// 0x0028
struct FRconCommand
{
	Pavlov_ERconCommands                               RconCommand;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3DZ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ActOn;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Option;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ReplicatedWheelState
// 0x0008
struct FReplicatedWheelState
{
	float                                              BrakeTorque;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DriveTorque;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.LobbySearchOptions
// 0x0028
struct FLobbySearchOptions
{
	int                                                MaxResults;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I0BD[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SearchByUserId;                                            // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLobbySearchAttributeFilter>         AttributeFilters;                                          // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PushLoadoutEquipment
// 0x0050
struct FPushLoadoutEquipment
{
	struct FName                                       LoadoutId;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PrimaryHandWeaponClass;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PrimaryBackWeaponClass;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SecondaryWeaponClass;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnWithDefaultAttachments;                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWG3[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              GrenadeClasses;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	PavlovProxy_EPushHipSlot                           KnifeSlot;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnMeds;                                                // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnSyringe;                                             // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EMineType                              SpawnWithMine;                                             // 0x003B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Health;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Armour;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHelmet;                                                   // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFLI[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlayersWithLoadout;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayerMultiplier;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PushMeshLazyLoad
// 0x0030
struct FPushMeshLazyLoad
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LazyLoadMesh[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Pavlov.PushMeshLazyLoad.LazyLoadMesh

};

// ScriptStruct Pavlov.PushMeshLoaded
// 0x0010
struct FPushMeshLoaded
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               LoadedMesh;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PushLoadoutCount
// 0x0008
struct FPushLoadoutCount
{
	int                                                NumOfLoadouts;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoadouts;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.LastPushDialog
// 0x0010
struct FLastPushDialog
{
	Pavlov_EPushDialog                                 LastDialogType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GG7L[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             LastDialogComp;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PushChant
// 0x0020
struct FPushChant
{
	class USoundCue*                                   InitialChant;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ResponseChant;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResponseChantDelay;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P8KS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   ResponseChantChorus;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.SoundMixingChannel
// 0x0030
struct FSoundMixingChannel
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class USoundMix*                                   SoundMix;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ID97[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.UICreateModalParams
// 0x0040
struct FUICreateModalParams
{
	class UClass*                                      ModalClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ViewClass;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContextValue;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JUL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ContextValueStr;                                           // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ViewContent;                                               // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateView;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Y62[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.PavlovVoicePacket
// 0x0010
struct FPavlovVoicePacket
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.PavlovServerInfo
// 0x00A0
struct FPavlovServerInfo
{
	unsigned char                                      UnknownData_BT34[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyIdString;                                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPinProtected;                                             // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VNP[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Map;                                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapLabel;                                                  // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotLimit;                                                 // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slots;                                                     // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlaying;                                                  // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriendsOnly;                                              // 0x0069(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriendLobby;                                              // 0x006A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JS75[0x5];                                     // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FServerSettings                             Settings;                                                  // 0x0070(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.SpectatorViews
// 0x0018
struct FSpectatorViews
{
	struct FName                                       MapName;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Views;                                                     // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.TimestampTeleport
// 0x0020
struct FTimestampTeleport
{
	struct FVector                                     TeleportLocation;                                          // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TeleportRotation;                                          // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   Timestamp;                                                 // 0x0018(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ServerPingInfo
// 0x0020
struct FServerPingInfo
{
	unsigned char                                      UnknownData_X32I[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.LobbyDetails
// 0x0090
struct FLobbyDetails
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OwnerUserId;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OwnerName;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_ELobbyPermission                            PermissionLevel;                                           // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WDZV[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AvailableSlots;                                            // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSlots;                                                  // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriendsOnly;                                              // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XLE8[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               Attributes;                                                // 0x0040(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ServerStatusInfo
// 0x0058
struct FServerStatusInfo
{
	struct FString                                     MapId;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapVersion;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCK0[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameMode;                                                  // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DepotURL;                                                  // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayerCount;                                            // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerNames;                                               // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bCanJoin;                                                  // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotating;                                                 // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_638U[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.ServerContainerInfo
// 0x00F0
struct FServerContainerInfo
{
	Pavlov_EServerType                                 ServerType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KV9O[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ID;                                                        // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ip;                                                        // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZO9[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPasswordProtected;                                        // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23ED[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MapId;                                                     // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapLabel;                                                  // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slots;                                                     // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSlots;                                                  // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriendsPlaying;                                           // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFavorite;                                                 // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFJA[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FServerSettings                             ServerSettings;                                            // 0x0088(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Tags;                                                      // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Ping;                                                      // 0x00C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GM78[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Region;                                                    // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Pin;                                                       // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ServerStatusMsg
// 0x0020
struct FServerStatusMsg
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Address;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.UIFriendsModel
// 0x0010
struct FUIFriendsModel
{
	TArray<struct FFriendRichPresence>                 Friends;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.KnifeDamage
// 0x0008 (0x0010 - 0x0008)
struct FKnifeDamage : public FTableRowBase
{
	float                                              BodyPartDamage;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OMWY[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.LootMesh
// 0x0028 (0x0030 - 0x0008)
struct FLootMesh : public FTableRowBase
{
	unsigned char                                      LootMesh[0x28];                                            // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Pavlov.LootMesh.LootMesh

};

// ScriptStruct Pavlov.ServerRegion
// 0x0028
struct FServerRegion
{
	struct FString                                     RegionName;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PingHost;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latency;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AIL6[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.LeaderboardQuery
// 0x0020
struct FLeaderboardQuery
{
	unsigned char                                      UnknownData_RQHL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderboardId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7AEB[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.PreBakedWound
// 0x0048 (0x0050 - 0x0008)
struct FPreBakedWound : public FTableRowBase
{
	struct FName                                       SimulateBone;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    BloodMap;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AuxClass;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Location;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                UProjection;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VProjection;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.EquipmentSnapshot
// 0x0090
struct FEquipmentSnapshot
{
	TArray<class UClass*>                              InventorySlots;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGunAttachmentSetup>                 InventorySlotsAttachments;                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      LeftController;                                            // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGunAttachmentSetup                         LeftAttachments;                                           // 0x0028(0x0030) (NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      RightController;                                           // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGunAttachmentSetup                         RightAttachments;                                          // 0x0060(0x0030) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ClientKnifeDamage
// 0x0050
struct FClientKnifeDamage
{
	class APavlovPawn*                                 Victim;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalDamage;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1YOF[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKnife*                                      Knife;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HitBone;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  LocalOffset;                                               // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ScoreboardSlot
// 0x0048
struct FScoreboardSlot
{
	bool                                               bEmpty;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_28IN[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Avatar;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cash;                                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTalking;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBombCarrier;                                              // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocal;                                                    // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMuted;                                                    // 0x003B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDead;                                                     // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBot;                                                      // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDev;                                                      // 0x003E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F13S[0x1];                                     // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Ping;                                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60UQ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.CombinedServerList
// 0x0148
struct FCombinedServerList
{
	struct FServerDetails                              ServerDetails;                                             // 0x0000(0x00A0) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPavlovServerInfo                           LobbyDetails;                                              // 0x00A0(0x00A0) (BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bLobby;                                                    // 0x0140(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7OB9[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.UIServerBrowserEntryModel
// 0x0060
struct FUIServerBrowserEntryModel
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerName;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slots;                                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotsMax;                                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Latency;                                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasPin;                                                   // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLobby;                                                    // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFavorite;                                                 // 0x005E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OCB6[0x1];                                     // 0x005F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.LobbySearchResult
// 0x0018
struct FLobbySearchResult
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VYWN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ResultCode;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLobbyDetails>                       LobbyList;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.VoicePacketBunch
// 0x0020
struct FVoicePacketBunch
{
	TArray<class APlayerState*>                        Players;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPavlovVoicePacket>                  Packets;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.WorkshopItem
// 0x0038
struct FWorkshopItem
{
	struct FName                                       ID;                                                        // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSubscribed;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9BZS[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Score;                                                     // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Preview;                                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.WoundBoneState
// 0x0020
struct FWoundBoneState
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WoundRatio;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUQ5[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MajorHitIndex;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Pavlov_EWoundSeverity                              CurrentSeverity;                                           // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JVJR[0xF];                                     // 0x0011(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.WoundMaterialSet
// 0x0020
struct FWoundMaterialSet
{
	class UMaterialInterface*                          Simple;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Complex;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    SimpleInstance;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ComplexInstance;                                           // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.WoundMeshInstance
// 0x0068
struct FWoundMeshInstance
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int, struct FWoundMaterialSet>                MaterialSets;                                              // 0x0010(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UWoundComponent*                             WoundComponent;                                            // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.MemberFX
// 0x0020
struct FMemberFX
{
	class USurfaceFXAsset*                             SurfaceFX;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USurfaceFXAsset*                             DismemberSurfaceFX;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Bones;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.ZombieHitInfo
// 0x0038
struct FZombieHitInfo
{
	struct FVector_NetQuantizeNormal                   Direction;                                                 // 0x0000(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x000C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      TotalDamage;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Distance;                                                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WoundRate;                                                 // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S263[0x5];                                     // 0x001B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GunClass;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           BoneIndex;                                                 // 0x0028(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValid;                                                    // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EY2L[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 Instigator;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.WaypointInfo
// 0x0018
struct FWaypointInfo
{
	class AWaypoint*                                   Waypoint;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.LeaderboardRecord
// 0x0018
struct FLeaderboardRecord
{
	int                                                Rank;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserDisplayName;                                           // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.LeaderboardData
// 0x0028
struct FLeaderboardData
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LP7P[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ReturnCode;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LeaderboardId;                                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLeaderboardRecord>                  LeaderboardRecords;                                        // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.SightZeroing
// 0x0010 (0x0018 - 0x0008)
struct FSightZeroing : public FTableRowBase
{
	int                                                ZeroDefault;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZeroAt25m;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZeroAt50m;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZeroAt100m;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.AvatarInfo
// 0x0008 (0x0010 - 0x0008)
struct FAvatarInfo : public FTableRowBase
{
	class UClass*                                      AvatarComponentClass;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Pavlov.UIFiltersModel
// 0x0038
struct FUIFiltersModel
{
	TArray<struct FString>                             GM;                                                        // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Regions;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	Pavlov_EServerSearchType                           Server;                                                    // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideEmpty;                                                // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideFull;                                                 // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideLocked;                                               // 0x0033(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyFavorites;                                            // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GOTA[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Pavlov.StatReturn
// 0x0030
struct FStatReturn
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4H10[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ResultCode;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStat                                    EOSStat;                                                   // 0x0008(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
