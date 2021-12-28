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

// Enum PavlovProxy.ELimitedAmmoType
enum class PavlovProxy_ELimitedAmmoType : uint8_t
{
	ELimitedAmmoType__Unlimited    = 0,
	ELimitedAmmoType__LimitedGeneric = 1,
	ELimitedAmmoType__LimitedSpecific = 2,
	ELimitedAmmoType__Custom       = 3,
	ELimitedAmmoType__LimitSpecialOnly = 4,
	ELimitedAmmoType__BoxlessMode  = 5,
	ELimitedAmmoType__ELimitedAmmoType_MAX = 6,

};

// Enum PavlovProxy.EProxyItemState
enum class PavlovProxy_EProxyItemState : uint8_t
{
	EProxyItemState__InWorld       = 0,
	EProxyItemState__InHand        = 1,
	EProxyItemState__InInventory   = 2,
	EProxyItemState__EProxyItemState_MAX = 3,

};

// Enum PavlovProxy.EHoldingAnim
enum class PavlovProxy_EHoldingAnim : uint8_t
{
	EHoldingAnim__GenericGrip1     = 0,
	EHoldingAnim__GenericGrip2     = 1,
	EHoldingAnim__PillGrip         = 2,
	EHoldingAnim__RifleGrip        = 3,
	EHoldingAnim__PistolGrip       = 4,
	EHoldingAnim__GrenadeGrip      = 5,
	EHoldingAnim__AmmoBoxGrip      = 6,
	EHoldingAnim__MagazineGrip     = 7,
	EHoldingAnim__VerticalGrip     = 8,
	EHoldingAnim__SuppressorGrip   = 9,
	EHoldingAnim__EHoldingAnim_MAX = 10,

};

// Enum PavlovProxy.EInteractType
enum class PavlovProxy_EInteractType : uint8_t
{
	EInteractType__Grabbed         = 0,
	EInteractType__Trigger         = 1,
	EInteractType__EInteractType_MAX = 2,

};

// Enum PavlovProxy.EVRDevice
enum class PavlovProxy_EVRDevice : uint8_t
{
	EVRDevice__SteamVR_Vive        = 0,
	EVRDevice__SteamVR_Oculus      = 1,
	EVRDevice__SteamVR_Index       = 2,
	EVRDevice__SteamVR_WMR         = 3,
	EVRDevice__Oculus              = 4,
	EVRDevice__Oculus_Quest        = 5,
	EVRDevice__EVRDevice_MAX       = 6,

};

// Enum PavlovProxy.EHands
enum class PavlovProxy_EHands : uint8_t
{
	EHands__NonDominant            = 0,
	EHands__Dominant               = 1,
	EHands__Both                   = 2,
	EHands__EHands_MAX             = 3,

};

// Enum PavlovProxy.EPushObjectiveState
enum class PavlovProxy_EPushObjectiveState : uint8_t
{
	EPushObjectiveState__Inactive  = 0,
	EPushObjectiveState__Active    = 1,
	EPushObjectiveState__Armed     = 2,
	EPushObjectiveState__Destroyed = 3,
	EPushObjectiveState__EPushObjectiveState_MAX = 4,

};

// Enum PavlovProxy.EObjectiveMarker
enum class PavlovProxy_EObjectiveMarker : uint8_t
{
	EObjectiveMarker__A            = 0,
	EObjectiveMarker__B            = 1,
	EObjectiveMarker__C            = 2,
	EObjectiveMarker__D            = 3,
	EObjectiveMarker__E            = 4,
	EObjectiveMarker__F            = 5,
	EObjectiveMarker__EObjectiveMarker_MAX = 6,

};

// Enum PavlovProxy.EPavlovReverbType
enum class PavlovProxy_EPavlovReverbType : uint8_t
{
	EPavlovReverbType__None        = 0,
	EPavlovReverbType__ParkingGarage = 1,
	EPavlovReverbType__Warehouse   = 2,
	EPavlovReverbType__Tunnel      = 3,
	EPavlovReverbType__EPavlovReverbType_MAX = 4,

};

// Enum PavlovProxy.EPavlovRoundState
enum class PavlovProxy_EPavlovRoundState : uint8_t
{
	EPavlovRoundState__Starting    = 0,
	EPavlovRoundState__StandBy     = 1,
	EPavlovRoundState__Started     = 2,
	EPavlovRoundState__Ended       = 3,
	EPavlovRoundState__EPavlovRoundState_MAX = 4,

};

// Enum PavlovProxy.EDay
enum class PavlovProxy_EDay : uint8_t
{
	EDay__Monday                   = 0,
	EDay__Tuesday                  = 1,
	EDay__Wednesday                = 2,
	EDay__Thursday                 = 3,
	EDay__Friday                   = 4,
	EDay__Saturday                 = 5,
	EDay__Sunday                   = 6,
	EDay__EDay_MAX                 = 7,

};

// Enum PavlovProxy.EPavlovGameModeType
enum class PavlovProxy_EPavlovGameModeType : uint8_t
{
	EPavlovGameModeType__Custom    = 0,
	EPavlovGameModeType__Deathmatch = 1,
	EPavlovGameModeType__TeamDeathmatch = 2,
	EPavlovGameModeType__SearchAndDestroy = 3,
	EPavlovGameModeType__LastManStanding = 4,
	EPavlovGameModeType__Siege     = 5,
	EPavlovGameModeType__GunGame   = 6,
	EPavlovGameModeType__CaptureTheFlag = 7,
	EPavlovGameModeType__TTT       = 8,
	EPavlovGameModeType__Jailbreak = 9,
	EPavlovGameModeType__ZombieCoop = 10,
	EPavlovGameModeType__TheHidden = 11,
	EPavlovGameModeType__Push      = 12,
	EPavlovGameModeType__PropHunt  = 13,
	EPavlovGameModeType__OITC      = 14,
	EPavlovGameModeType__Infection = 15,
	EPavlovGameModeType__Hunt      = 16,
	EPavlovGameModeType__Tutorial  = 17,
	EPavlovGameModeType__None      = 18,
	EPavlovGameModeType__KOTH      = 19,
	EPavlovGameModeType__EPavlovGameModeType_MAX = 20,

};

// Enum PavlovProxy.EGloves
enum class PavlovProxy_EGloves : uint8_t
{
	EGloves__BareHands             = 0,
	EGloves__NATOGloves            = 1,
	EGloves__RussianGloves         = 2,
	EGloves__Custom                = 3,
	EGloves__EGloves_MAX           = 4,

};

// Enum PavlovProxy.EPushHipSlot
enum class PavlovProxy_EPushHipSlot : uint8_t
{
	EPushHipSlot__None             = 0,
	EPushHipSlot__Knife            = 1,
	EPushHipSlot__Medkit           = 2,
	EPushHipSlot__AmmoCrate        = 3,
	EPushHipSlot__RepairTool       = 4,
	EPushHipSlot__EPushHipSlot_MAX = 5,

};

// Enum PavlovProxy.EMineType
enum class PavlovProxy_EMineType : uint8_t
{
	EMineType__None                = 0,
	EMineType__AntiTankMine        = 1,
	EMineType__AntiPersonnelMine   = 2,
	EMineType__EMineType_MAX       = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PavlovProxy.PavlovItemSpawnParams
// 0x0060
struct FPavlovItemSpawnParams
{
	struct FName                                       ID;                                                        // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                Player;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDominantHand;                                             // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnInInventory;                                         // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G717[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InventorySlot;                                             // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnInWorld;                                             // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3IO[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnWithMagazine;                                        // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnWithDefaultAttachments;                              // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4MVV[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)

};

// ScriptStruct PavlovProxy.PavlovAttachmentSpawnParams
// 0x0030
struct FPavlovAttachmentSpawnParams
{
	TArray<struct FName>                               AttachmentsId;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                      WeaponToAttachTo;                                          // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttachById;                                               // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPWP[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachToGunId;                                             // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                Player;                                                    // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.PavlovGameModeProperties
// 0x002C
struct FPavlovGameModeProperties
{
	bool                                               bNoTeams;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysScore;                                              // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceNoScoring;                                           // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJS0[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaximumCash;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashKillReward;                                            // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CashTeamKillPenalty;                                       // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncrementTeamScore;                                       // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoRespawn;                                              // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q967[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RespawnMaxDelay;                                           // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepBodies;                                               // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepPawnIfAlive;                                          // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6E20[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InactivityThreashold;                                      // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InactivityDormantThreashold;                               // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDynamicSpawns;                                            // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnGhostOnLogin;                                        // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XMO2[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RoundDuration;                                             // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.PavlovPlayerStatus
// 0x0050
struct FPavlovPlayerStatus
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Controller;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamId;                                                   // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cash;                                                      // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Health;                                                    // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Armour;                                                    // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHelmet;                                                   // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDead;                                                     // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBuy;                                                   // 0x003E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCrouching;                                                // 0x003F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGagged;                                                   // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRightHanded;                                              // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LE31[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeadTime;                                                  // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AliveTime;                                                 // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E3Q3[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PavlovProxy.ItemList
// 0x0018
struct FItemList
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemClass;                                                 // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustomItem;                                               // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CIG[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PavlovProxy.TTTPlayerInfo
// 0x0030
struct FTTTPlayerInfo
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMissing;                                                  // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T9GC[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Credits;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Karma;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKarmaKicked;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9LD5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RoleName;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.AsyncLoadLootMesh
// 0x0018
struct FAsyncLoadLootMesh
{
	struct FScriptDelegate                             OnLoadedLoot;                                              // 0x0000(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       LootMeshId;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.Message
// 0x0028
struct FMessage
{
	struct FString                                     Sender;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.HandsProxy
// 0x0010
struct FHandsProxy
{
	class UPavlov_HandProxy*                           NonDominantHand;                                           // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPavlov_HandProxy*                           DominantHand;                                              // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.PlayerVitality
// 0x000C
struct FPlayerVitality
{
	int                                                Health;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Armour;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHelmet;                                                   // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDead;                                                     // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C95Y[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PavlovProxy.PlayerItem
// 0x0010
struct FPlayerItem
{
	class AActor*                                      Item;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.InventoryItem
// 0x0018
struct FInventoryItem
{
	class AActor*                                      Item;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Slot;                                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S7KS[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct PavlovProxy.LoadoutProxy
// 0x0050
struct FLoadoutProxy
{
	struct FName                                       LoadoutTitle;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PrimaryHand;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PrimaryBack;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Secondary;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnWithDefaultAttachments;                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EPushHipSlot                           KnifeSlot;                                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HZFH[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Grenades;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnWithMeds;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnWithSyringe;                                         // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EMineType                              SpawnWithMine;                                             // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAE7[0x1];                                     // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Health;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Armour;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHelmet;                                                   // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMS6[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlayersWithLoadout;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayerMultiplier;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.PushLoadoutLocation
// 0x0010
struct FPushLoadoutLocation
{
	bool                                               bOverrideLoadoutLocation;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5PE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LoadoutSpawnLocation;                                      // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.AsyncVehicleSpawnData
// 0x0060
struct FAsyncVehicleSpawnData
{
	struct FScriptDelegate                             OnSpawnComplete;                                           // 0x0000(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       VehicleID;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZ5I[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpawnTransform;                                            // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DespawnTime;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RE0S[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct PavlovProxy.CustomItemData
// 0x0008 (0x0010 - 0x0008)
struct FCustomItemData : public FTableRowBase
{
	class UClass*                                      CustomItemClass;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PavlovProxy.PlayerSkin
// 0x0010 (0x0018 - 0x0008)
struct FPlayerSkin : public FTableRowBase
{
	class USkeletalMesh*                               PlayerMesh;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PavlovProxy_EGloves                                HandMesh;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9NM7[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
