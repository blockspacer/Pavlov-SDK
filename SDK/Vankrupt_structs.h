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

// Enum Vankrupt.EVHitEffect
enum class Vankrupt_EVHitEffect : uint8_t
{
	EVHitEffect__None              = 0,
	EVHitEffect__Slow              = 1,
	EVHitEffect__Demoralize        = 2,
	EVHitEffect__InstantKill       = 3,
	EVHitEffect__Bleed             = 4,
	EVHitEffect__Custom1           = 5,
	EVHitEffect__Custom2           = 6,
	EVHitEffect__Custom3           = 7,
	EVHitEffect__Custom4           = 8,
	EVHitEffect__EVHitEffect_MAX   = 9,

};

// Enum Vankrupt.EVLobbyMode
enum class Vankrupt_EVLobbyMode : uint8_t
{
	EVLobbyMode__Browser           = 0,
	EVLobbyMode__Lobby             = 1,
	EVLobbyMode__LobbyDedicated    = 2,
	EVLobbyMode__LobbyClient       = 3,
	EVLobbyMode__EVLobbyMode_MAX   = 4,

};

// Enum Vankrupt.EVMenuPopupType
enum class Vankrupt_EVMenuPopupType : uint8_t
{
	EVMenuPopupType__None          = 0,
	EVMenuPopupType__Spinner       = 1,
	EVMenuPopupType__Prompt        = 2,
	EVMenuPopupType__Alert         = 3,
	EVMenuPopupType__EVMenuPopupType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Vankrupt.VTriangleBSP
// 0x0024
struct FVTriangleBSP
{
	struct FVector                                     V0;                                                        // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     v1;                                                        // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     v2;                                                        // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Vankrupt.VGlobalStyle
// 0x0668 (0x0670 - 0x0008)
struct FVGlobalStyle : public FSlateWidgetStyle
{
	class USlateBrushAsset*                            BackgroundBrush;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                ButtonHoverEffect;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                                ButtonStyle;                                               // 0x0018(0x0278) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             ButtonTextStyle;                                           // 0x0290(0x01E8) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             PopupTextStyle;                                            // 0x0478(0x01E8) (Edit, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            PopupBorderBrush;                                          // 0x0660(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            SpinnerBrush;                                              // 0x0668(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Vankrupt.VHitboxInfo
// 0x0038 (0x0040 - 0x0008)
struct FVHitboxInfo : public FTableRowBase
{
	bool                                               bProcessArmor;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVWI[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Multiplier;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Vankrupt_EVHitEffect                               Effect;                                                    // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EOPS[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      HitSound[0x28];                                            // 0x0011(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Vankrupt.VHitboxInfo.HitSound

};

// ScriptStruct Vankrupt.VKillData
// 0x0028
struct FVKillData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Impulse;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         Component;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Vankrupt.VLobbySettings
// 0x0010
struct FVLobbySettings
{
	class UVGameOptions*                               Options;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFriendsOnly;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EVLP[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MapIndex;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Vankrupt.VLobbyStyle
// 0x0FF8 (0x1000 - 0x0008)
struct FVLobbyStyle : public FSlateWidgetStyle
{
	class USlateBrushAsset*                            Background;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TitleTextStyle;                                            // 0x0010(0x01E8) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x01F8(0x01E8) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             InfoTextStyle;                                             // 0x03E0(0x01E8) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             ButtonTextStyle;                                           // 0x05C8(0x01E8) (Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             ButtonSmallTextStyle;                                      // 0x07B0(0x01E8) (Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                                ButtonStyle;                                               // 0x0998(0x0278) (Edit, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            SlotBrush;                                                 // 0x0C10(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            SlotAvatarBrush;                                           // 0x0C18(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            MapOverlayBrush;                                           // 0x0C20(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComboBoxStyle                              ComboBoxStyle;                                             // 0x0C28(0x03D8) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Vankrupt.VSpawnPointDistance
// 0x0008
struct FVSpawnPointDistance
{
	unsigned char                                      UnknownData_89MO[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Vankrupt.VSpawnParams
// 0x0003
struct FVSpawnParams
{
	bool                                               bWithAIController;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOccluded;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClossest;                                                 // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Vankrupt.VNewsArticle
// 0x0030
struct FVNewsArticle
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Date;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
