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

// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
struct UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Struct;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
struct UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
struct UCohtmlBaseComponent_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                              EventData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels
struct UCohtmlBaseComponent_SynchronizeModels_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
struct UCohtmlBaseComponent_ShowPaintRects_Params
{
	bool                                               Show;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
struct UCohtmlBaseComponent_SetSoundAttenuation_Params
{
	struct FSoundAttenuationSettings                   Settings;                                                  // 0x0000(0x02A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.Resize
struct UCohtmlBaseComponent_Resize_Params
{
	int                                                Width;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTextureFromPath
struct UCohtmlBaseComponent_RemovePreloadedTextureFromPath_Params
{
	struct FString                                     AssetPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTexture
struct UCohtmlBaseComponent_RemovePreloadedTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.RemoveAllPreloadedTextures
struct UCohtmlBaseComponent_RemoveAllPreloadedTextures_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.Reload
struct UCohtmlBaseComponent_Reload_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureSync
struct UCohtmlBaseComponent_PreloadTextureSync_Params
{
	struct FString                                     AssetPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureAsync
struct UCohtmlBaseComponent_PreloadTextureAsync_Params
{
	struct FString                                     AssetPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.Load
struct UCohtmlBaseComponent_Load_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
struct UCohtmlBaseComponent_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
struct UCohtmlBaseComponent_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
struct UCohtmlBaseComponent_HasRequestedView_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave
struct UCohtmlBaseComponent_EndDebugFrameSave_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
struct UCohtmlBaseComponent_EnableRendering_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
struct UCohtmlBaseComponent_EnableDelayedUpdate_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame
struct UCohtmlBaseComponent_DebugSaveNextFrame_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
struct UCohtmlBaseComponent_CreateJSEvent_Params
{
	class UCohtmlJSEvent*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
struct UCohtmlBaseComponent_CreateDataModelFromStruct_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             Arg;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
struct UCohtmlBaseComponent_CreateDataModelFromObject_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Model;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave
struct UCohtmlBaseComponent_BeginDebugFrameSave_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.AddPreloadedTexture
struct UCohtmlBaseComponent_AddPreloadedTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
struct UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params
{
	class UCohtmlBaseComponent*                        Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
struct UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
struct UCohtmlBlueprintFunctionLibrary_AddStructArg_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             Arg;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
struct UCohtmlBlueprintFunctionLibrary_AddString_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Arg;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
struct UCohtmlBlueprintFunctionLibrary_AddObject_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Arg;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
struct UCohtmlBlueprintFunctionLibrary_AddInt32_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Arg;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
struct UCohtmlBlueprintFunctionLibrary_AddFloat_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Arg;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
struct UCohtmlBlueprintFunctionLibrary_AddByte_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Arg;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
struct UCohtmlBlueprintFunctionLibrary_AddBool_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Arg;                                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
struct UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Arg;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
struct UCohtmlBlueprintFunctionLibrary_AddArray_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Arg;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ArrayType;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlGameHUD.SetupView
struct ACohtmlGameHUD_SetupView_Params
{
	struct FString                                     PageUrl;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableComplexCSSSupport;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDelayedUpdate;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseWideColorTextures;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus
struct ACohtmlInputActor_ToggleCohtmlInputFocus_Params
{
};

// Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
struct ACohtmlInputActor_SetLineTraceMode_Params
{
	TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetLineTraceMode> Mode;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
struct ACohtmlInputActor_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
struct ACohtmlInputActor_SetCohtmlViewFocus_Params
{
	class UCohtmlBaseComponent*                        NewFocusedView;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
struct ACohtmlInputActor_SetCohtmlInputFocus_Params
{
	bool                                               FocusUI;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
struct ACohtmlInputActor_IsCohtmlFocused_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.Initialize
struct ACohtmlInputActor_Initialize_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              CollisionChannel;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                AddressMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetRaycastQuality> RaycastQuality;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UVChannel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
struct ACohtmlInputActor_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
struct ACohtmlInputActor_AlwaysAcceptMouseInput_Params
{
	bool                                               bAccept;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddText
struct UCohtmlJSEvent_AddText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
struct UCohtmlJSEvent_AddStructArg_Params
{
	class UStructProperty*                             Arg;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddString
struct UCohtmlJSEvent_AddString_Params
{
	struct FString                                     str;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddObject
struct UCohtmlJSEvent_AddObject_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddName
struct UCohtmlJSEvent_AddName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddInt32
struct UCohtmlJSEvent_AddInt32_Params
{
	int                                                integer;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddFloat
struct UCohtmlJSEvent_AddFloat_Params
{
	float                                              fl;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddByte
struct UCohtmlJSEvent_AddByte_Params
{
	unsigned char                                      byte;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddBool
struct UCohtmlJSEvent_AddBool_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddArray
struct UCohtmlJSEvent_AddArray_Params
{
	TArray<int>                                        Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
struct UCohtmlWidget_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Struct;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
struct UCohtmlWidget_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
struct UCohtmlWidget_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCohtmlJSEvent*                              EventData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.SynchronizeModels
struct UCohtmlWidget_SynchronizeModels_Params
{
};

// Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
struct UCohtmlWidget_ShowPaintRects_Params
{
	bool                                               Show;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
struct UCohtmlWidget_SetSoundAttenuation_Params
{
	struct FSoundAttenuationSettings                   Settings;                                                  // 0x0000(0x02A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
struct UCohtmlWidget_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTextureFromPath
struct UCohtmlWidget_RemovePreloadedTextureFromPath_Params
{
	struct FString                                     AssetPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTexture
struct UCohtmlWidget_RemovePreloadedTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.RemoveAllPreloadedTextures
struct UCohtmlWidget_RemoveAllPreloadedTextures_Params
{
};

// Function CohtmlPlugin.CohtmlWidget.Reload
struct UCohtmlWidget_Reload_Params
{
};

// Function CohtmlPlugin.CohtmlWidget.PreloadTextureSync
struct UCohtmlWidget_PreloadTextureSync_Params
{
	struct FString                                     AssetPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.PreloadTextureAsync
struct UCohtmlWidget_PreloadTextureAsync_Params
{
	struct FString                                     AssetPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.Load
struct UCohtmlWidget_Load_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
struct UCohtmlWidget_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
struct UCohtmlWidget_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.HasRequestedView
struct UCohtmlWidget_HasRequestedView_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
struct UCohtmlWidget_GetRenderTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
struct UCohtmlWidget_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
struct UCohtmlWidget_CreateJSEvent_Params
{
	class UCohtmlJSEvent*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
struct UCohtmlWidget_CreateDataModelFromStruct_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             Struct;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
struct UCohtmlWidget_CreateDataModelFromObject_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Model;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CohtmlPlugin.CohtmlWidget.AddPreloadedTexture
struct UCohtmlWidget_AddPreloadedTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
