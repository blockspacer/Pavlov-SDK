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

// Class CohtmlPlugin.CohtmlAssetReferencer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCohtmlAssetReferencer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAssetReferencer");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlAtlasContainedTextures
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UCohtmlAtlasContainedTextures : public UObject
{
public:
	unsigned char                                      Textures[0x50];                                            // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty CohtmlPlugin.CohtmlAtlasContainedTextures.Textures


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAtlasContainedTextures");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlTextureAtlasDetails
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UCohtmlTextureAtlasDetails : public UObject
{
public:
	struct FString                                     AtlasPath;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PixelFormat;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAtlasWidth;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAtlasHeight;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTextureWidth;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTextureHeight;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlTextureAtlasDetails");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlAudioWrapper
// 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
class UCohtmlAudioWrapper : public UObject
{
public:
	class UObject*                                     Owner;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<int, struct FCohtmlSound>                     Sounds;                                                    // 0x0030(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TTPG[0x2B0];                                   // 0x0080(0x02B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlAudioWrapper");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlBaseComponent
// 0x00D0 (FullSize[0x01C0] - InheritedSize[0x00F0])
class UCohtmlBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                          // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BindingsReleased;                                          // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ScriptingReady;                                            // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          PreloadedTextures;                                         // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bEnableComplexCSSSupport;                                  // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K41V[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      Texture;                                                   // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureFilter>                 Filter;                                                    // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReceiveInput;                                             // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDelayedUpdate;                                            // 0x0142(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseWideColorTextures;                                     // 0x0143(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5U2H[0x1C];                                    // 0x0144(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCohtmlAudioWrapper*                         AudioWrapper;                                              // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XI8R[0x58];                                    // 0x0168(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlBaseComponent");
		return ptr;
	}



	void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCohtmlJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool Show);
	void SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings);
	void Resize(int Width, int Height);
	bool RemovePreloadedTextureFromPath(const struct FString& AssetPath);
	bool RemovePreloadedTexture(class UTexture2D* Texture);
	void RemoveAllPreloadedTextures();
	void Reload();
	void PreloadTextureSync(const struct FString& AssetPath);
	void PreloadTextureAsync(const struct FString& AssetPath);
	void Load(const struct FString& Path);
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool HasRequestedView();
	void EndDebugFrameSave();
	void EnableRendering(bool bEnabled);
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCohtmlJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
	void AddPreloadedTexture(class UTexture2D* Texture);
};

// Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCohtmlBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_TriggerJSEvent(class UCohtmlBaseComponent* Component, const struct FString& EventName, class UCohtmlJSEvent* JSEvent);
	class UCohtmlJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
	void STATIC_AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg);
	void STATIC_AddString(class UCohtmlJSEvent* JSEvent, const struct FString& Arg);
	void STATIC_AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg);
	void STATIC_AddInt32(class UCohtmlJSEvent* JSEvent, int Arg);
	void STATIC_AddFloat(class UCohtmlJSEvent* JSEvent, float Arg);
	void STATIC_AddByte(class UCohtmlJSEvent* JSEvent, unsigned char Arg);
	void STATIC_AddBool(class UCohtmlJSEvent* JSEvent, bool Arg);
	void STATIC_AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int> Arg);
	void STATIC_AddArray(class UCohtmlJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
};

// Class CohtmlPlugin.CohtmlComponent
// 0x0038 (FullSize[0x01F8] - InheritedSize[0x01C0])
class UCohtmlComponent : public UCohtmlBaseComponent
{
public:
	struct FString                                     URL;                                                       // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ManualTexture;                                             // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IA5G[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PrimitiveName;                                             // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHG9[0x10];                                    // 0x01E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlComponent");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlEventHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCohtmlEventHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlEventHelpers");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlGameHUD
// 0x00A8 (FullSize[0x04C0] - InheritedSize[0x0418])
class ACohtmlGameHUD : public AHUD
{
public:
	class UCohtmlHUD*                                  CohtmlHUD;                                                 // 0x0418(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCohtmlHUD*                                  CohtmlHUDInternal;                                         // 0x0420(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MNKI[0x98];                                    // 0x0428(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlGameHUD");
		return ptr;
	}



	void SetupView(const struct FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate, bool bUseWideColorTextures);
};

// Class CohtmlPlugin.CohtmlHUD
// 0x0030 (FullSize[0x01F0] - InheritedSize[0x01C0])
class UCohtmlHUD : public UCohtmlBaseComponent
{
public:
	struct FSoftObjectPath                             HUDMaterialName;                                           // 0x01C0(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   HUDMaterial;                                               // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                       // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXJ5[0x8];                                     // 0x01E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlHUD");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlInputActor
// 0x0058 (FullSize[0x0380] - InheritedSize[0x0328])
class ACohtmlInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCohtmlInputActorMouseButtonDown;                         // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCohtmlInputActorMouseButtonUp;                           // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCohtmlInputActorKeyDown;                                 // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCohtmlInputActorKeyUp;                                   // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNOY[0x18];                                    // 0x0368(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlInputActor");
		return ptr;
	}



	void ToggleCohtmlInputFocus();
	void SetLineTraceMode(TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation);
	void SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView);
	void SetCohtmlInputFocus(bool FocusUI);
	bool IsCohtmlFocused();
	void Initialize(TEnumAsByte<Engine_ECollisionChannel> CollisionChannel, TEnumAsByte<Engine_ETextureAddress> AddressMode, TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
};

// Class CohtmlPlugin.CohtmlJSEvent
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UCohtmlJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData_VJSU[0x80];                                    // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStruct*>                             StructTypes;                                               // 0x00A8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlJSEvent");
		return ptr;
	}



	void AddText(const struct FText& Text);
	void AddStructArg(class UStructProperty* Arg);
	void AddString(const struct FString& str);
	void AddObject(class UObject* Object);
	void AddName(const struct FName& Name);
	void AddInt32(int integer);
	void AddFloat(float fl);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
};

// Class CohtmlPlugin.CohtmlSettings
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UCohtmlSettings : public UObject
{
public:
	bool                                               EnableLiveReload;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GBNW[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DevToolsPort;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableLocalization;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableBreakIterator;                                       // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HandleInputOnHTMLBody;                                     // 0x0032(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DOFW[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             InputTransparentCssClasses;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                              ScrollDelta;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowWarningsOnScreen;                                      // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CohtmlPlugin_ECohtmlSettingsSeverity               LogSeverity;                                               // 0x004D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRespectTitleSafeZone;                                     // 0x004E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRespectLetterboxing;                                      // 0x004F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TickWhileGameIsPaused;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLowerCaseNamesForAutoExposedProperties;                // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CohtmlPlugin_ECohtmlMSAA                           MSAA;                                                      // 0x0052(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QSAT[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSingleFormatFallbacks>              FallbacksForAllFormats;                                    // 0x0058(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FString                                     DefaultStyleFontFamily;                                    // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AsynchronousResourceRequestCalls;                          // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseInputPreprocessor;                                     // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVO3[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlSettings");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlSystem
// 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
class ACohtmlSystem : public AActor
{
public:
	unsigned char                                      UnknownData_P6PL[0x40];                                    // 0x0328(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlSystem");
		return ptr;
	}



};

// Class CohtmlPlugin.CohtmlWidget
// 0x0100 (FullSize[0x0200] - InheritedSize[0x0100])
class UCohtmlWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_F0TD[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Owner;                                                     // 0x0118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BindingsReleased;                                          // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ScriptingReady;                                            // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bEnableComplexCSSSupport;                                  // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureFilter>                 Filter;                                                    // 0x0151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReceiveInput;                                             // 0x0152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> InputPropagationBehaviour;                                 // 0x0153(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGammaCorrectedMaterial;                                   // 0x0154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseWideColorTextures;                                     // 0x0155(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2S7L[0x2];                                     // 0x0156(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TickPeriodInMinimizedGame;                                 // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYW9[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTexture2D*>                          PreloadedTextures;                                         // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCohtmlAudioWrapper*                         AudioWrapper;                                              // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0XZF[0x78];                                    // 0x0178(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.CohtmlWidget");
		return ptr;
	}



	void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCohtmlJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool Show);
	void SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings);
	void SetInputPropagationBehaviour(TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation);
	bool RemovePreloadedTextureFromPath(const struct FString& AssetPath);
	bool RemovePreloadedTexture(class UTexture2D* Texture);
	void RemoveAllPreloadedTextures();
	void Reload();
	void PreloadTextureSync(const struct FString& AssetPath);
	void PreloadTextureAsync(const struct FString& AssetPath);
	void Load(const struct FString& Path);
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool HasRequestedView();
	class UTextureRenderTarget2D* GetRenderTexture();
	TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> GetInputPropagationBehaviour();
	class UCohtmlJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Struct);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void AddPreloadedTexture(class UTexture2D* Texture);
};

// Class CohtmlPlugin.HummingbirdBaseComponent
// 0x0000 (FullSize[0x01C0] - InheritedSize[0x01C0])
class UHummingbirdBaseComponent : public UCohtmlBaseComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdBaseComponent");
		return ptr;
	}



};

// Class CohtmlPlugin.HummingbirdComponent
// 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
class UHummingbirdComponent : public UCohtmlComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdComponent");
		return ptr;
	}



};

// Class CohtmlPlugin.HummingbirdGameHUD
// 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
class AHummingbirdGameHUD : public ACohtmlGameHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdGameHUD");
		return ptr;
	}



};

// Class CohtmlPlugin.HummingbirdHUD
// 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
class UHummingbirdHUD : public UCohtmlHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdHUD");
		return ptr;
	}



};

// Class CohtmlPlugin.HummingbirdInputActor
// 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
class AHummingbirdInputActor : public ACohtmlInputActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdInputActor");
		return ptr;
	}



};

// Class CohtmlPlugin.HummingbirdSystem
// 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
class AHummingbirdSystem : public ACohtmlSystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CohtmlPlugin.HummingbirdSystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
