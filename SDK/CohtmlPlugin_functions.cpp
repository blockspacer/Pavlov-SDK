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
//		Offset -> 0x003C7FF0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UStructProperty*                             Struct                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct");

	UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params params {};
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CED50
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject");

	UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params params {};
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CEA80
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCohtmlJSEvent*                              EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::TriggerJSEvent(const struct FString& Name, class UCohtmlJSEvent* EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent");

	UCohtmlBaseComponent_TriggerJSEvent_Params params {};
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CEA20
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
void UCohtmlBaseComponent::SynchronizeModels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels");

	UCohtmlBaseComponent_SynchronizeModels_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE900
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::ShowPaintRects(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects");

	UCohtmlBaseComponent_ShowPaintRects_Params params {};
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE5E0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSoundAttenuationSettings                   Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation");

	UCohtmlBaseComponent_SetSoundAttenuation_Params params {};
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE290
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.Resize
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::Resize(int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Resize");

	UCohtmlBaseComponent_Resize_Params params {};
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE130
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTextureFromPath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlBaseComponent::RemovePreloadedTextureFromPath(const struct FString& AssetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTextureFromPath");

	UCohtmlBaseComponent_RemovePreloadedTextureFromPath_Params params {};
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CE010
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlBaseComponent::RemovePreloadedTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.RemovePreloadedTexture");

	UCohtmlBaseComponent_RemovePreloadedTexture_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CDFD0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.RemoveAllPreloadedTextures
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCohtmlBaseComponent::RemoveAllPreloadedTextures()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.RemoveAllPreloadedTextures");

	UCohtmlBaseComponent_RemoveAllPreloadedTextures_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDF90
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.Reload
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCohtmlBaseComponent::Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Reload");

	UCohtmlBaseComponent_Reload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDE50
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureSync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::PreloadTextureSync(const struct FString& AssetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureSync");

	UCohtmlBaseComponent_PreloadTextureSync_Params params {};
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDD10
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::PreloadTextureAsync(const struct FString& AssetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.PreloadTextureAsync");

	UCohtmlBaseComponent_PreloadTextureAsync_Params params {};
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDBD0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.Load
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::Load(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Load");

	UCohtmlBaseComponent_Load_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDBA0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlBaseComponent::IsReadyToCreateView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView");

	UCohtmlBaseComponent_IsReadyToCreateView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CDB40
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlBaseComponent::IsReadyForBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings");

	UCohtmlBaseComponent_IsReadyForBindings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD960
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlBaseComponent::HasRequestedView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView");

	UCohtmlBaseComponent_HasRequestedView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD8B0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCohtmlBaseComponent::EndDebugFrameSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave");

	UCohtmlBaseComponent_EndDebugFrameSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD820
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::EnableRendering(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering");

	UCohtmlBaseComponent_EnableRendering_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD790
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::EnableDelayedUpdate(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate");

	UCohtmlBaseComponent_EnableDelayedUpdate_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD770
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCohtmlBaseComponent::DebugSaveNextFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame");

	UCohtmlBaseComponent_DebugSaveNextFrame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD6C0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCohtmlJSEvent* UCohtmlBaseComponent::CreateJSEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent");

	UCohtmlBaseComponent_CreateJSEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003C7D20
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct");

	UCohtmlBaseComponent_CreateDataModelFromStruct_Params params {};
	params.Name = Name;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD500
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::CreateDataModelFromObject(const struct FString& Name, class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject");

	UCohtmlBaseComponent_CreateDataModelFromObject_Params params {};
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD4E0
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCohtmlBaseComponent::BeginDebugFrameSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave");

	UCohtmlBaseComponent_BeginDebugFrameSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD030
//		Name   -> Function CohtmlPlugin.CohtmlBaseComponent.AddPreloadedTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBaseComponent::AddPreloadedTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.AddPreloadedTexture");

	UCohtmlBaseComponent_AddPreloadedTexture_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CEB60
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlBaseComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCohtmlBaseComponent* Component, const struct FString& EventName, class UCohtmlJSEvent* JSEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent");

	UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params params {};
	params.Component = Component;
	params.EventName = EventName;
	params.JSEvent = JSEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD6F0
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCohtmlJSEvent*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCohtmlJSEvent* UCohtmlBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent");

	UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD2A0
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg");

	UCohtmlBlueprintFunctionLibrary_AddStructArg_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD130
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Arg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddString(class UCohtmlJSEvent* JSEvent, const struct FString& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString");

	UCohtmlBlueprintFunctionLibrary_AddString_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCF00
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject");

	UCohtmlBlueprintFunctionLibrary_AddObject_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCD40
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddInt32(class UCohtmlJSEvent* JSEvent, int Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32");

	UCohtmlBlueprintFunctionLibrary_AddInt32_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCC00
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddFloat(class UCohtmlJSEvent* JSEvent, float Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat");

	UCohtmlBlueprintFunctionLibrary_AddFloat_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCAD0
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddByte(class UCohtmlJSEvent* JSEvent, unsigned char Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte");

	UCohtmlBlueprintFunctionLibrary_AddByte_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CC980
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Arg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddBool(class UCohtmlJSEvent* JSEvent, bool Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool");

	UCohtmlBlueprintFunctionLibrary_AddBool_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CC800
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int> Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs");

	UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CC6E0
//		Name   -> Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              JSEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Arg                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                ArrayType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlBlueprintFunctionLibrary::STATIC_AddArray(class UCohtmlJSEvent* JSEvent, TArray<int> Arg, int ArrayType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray");

	UCohtmlBlueprintFunctionLibrary_AddArray_Params params {};
	params.JSEvent = JSEvent;
	params.Arg = Arg;
	params.ArrayType = ArrayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE780
//		Name   -> Function CohtmlPlugin.CohtmlGameHUD.SetupView
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     PageUrl                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnableComplexCSSSupport                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDelayedUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseWideColorTextures                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACohtmlGameHUD::SetupView(const struct FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate, bool bUseWideColorTextures)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlGameHUD.SetupView");

	ACohtmlGameHUD_SetupView_Params params {};
	params.PageUrl = PageUrl;
	params.bEnableComplexCSSSupport = bEnableComplexCSSSupport;
	params.bDelayedUpdate = bDelayedUpdate;
	params.bUseWideColorTextures = bUseWideColorTextures;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CEA60
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ACohtmlInputActor::ToggleCohtmlInputFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus");

	ACohtmlInputActor_ToggleCohtmlInputFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE560
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetLineTraceMode> Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACohtmlInputActor::SetLineTraceMode(TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetLineTraceMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode");

	ACohtmlInputActor_SetLineTraceMode_Params params {};
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE460
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACohtmlInputActor::SetInputPropagationBehaviour(TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour");

	ACohtmlInputActor_SetInputPropagationBehaviour_Params params {};
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE3E0
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlBaseComponent*                        NewFocusedView                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACohtmlInputActor::SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus");

	ACohtmlInputActor_SetCohtmlViewFocus_Params params {};
	params.NewFocusedView = NewFocusedView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE350
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               FocusUI                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACohtmlInputActor::SetCohtmlInputFocus(bool FocusUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus");

	ACohtmlInputActor_SetCohtmlInputFocus_Params params {};
	params.FocusUI = FocusUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDB10
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACohtmlInputActor::IsCohtmlFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused");

	ACohtmlInputActor_IsCohtmlFocused_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD9C0
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.Initialize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<Engine_ECollisionChannel>              CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ETextureAddress>                AddressMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetRaycastQuality> RaycastQuality                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                UVChannel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACohtmlInputActor::Initialize(TEnumAsByte<Engine_ECollisionChannel> CollisionChannel, TEnumAsByte<Engine_ETextureAddress> AddressMode, TEnumAsByte<CohtmlPlugin_ECohtmlInputWidgetRaycastQuality> RaycastQuality, int UVChannel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.Initialize");

	ACohtmlInputActor_Initialize_Params params {};
	params.CollisionChannel = CollisionChannel;
	params.AddressMode = AddressMode;
	params.RaycastQuality = RaycastQuality;
	params.UVChannel = UVChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD8D0
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> ACohtmlInputActor::GetInputPropagationBehaviour()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour");

	ACohtmlInputActor_GetInputPropagationBehaviour_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD450
//		Name   -> Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACohtmlInputActor::AlwaysAcceptMouseInput(bool bAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput");

	ACohtmlInputActor_AlwaysAcceptMouseInput_Params params {};
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD380
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddText");

	UCohtmlJSEvent_AddText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003C7C70
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UStructProperty*                             Arg                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddStructArg(class UStructProperty* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddStructArg");

	UCohtmlJSEvent_AddStructArg_Params params {};
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD200
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddString(const struct FString& str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddString");

	UCohtmlJSEvent_AddString_Params params {};
	params.str = str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCFB0
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddObject(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddObject");

	UCohtmlJSEvent_AddObject_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCE70
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddName
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddName(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddName");

	UCohtmlJSEvent_AddName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCDF0
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddInt32
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                integer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddInt32(int integer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddInt32");

	UCohtmlJSEvent_AddInt32_Params params {};
	params.integer = integer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCCC0
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              fl                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddFloat(float fl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddFloat");

	UCohtmlJSEvent_AddFloat_Params params {};
	params.fl = fl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCB80
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddByte
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      byte                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddByte(unsigned char byte)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddByte");

	UCohtmlJSEvent_AddByte_Params params {};
	params.byte = byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CCA40
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddBool(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddBool");

	UCohtmlJSEvent_AddBool_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003C7A90
//		Name   -> Function CohtmlPlugin.CohtmlJSEvent.AddArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UCohtmlJSEvent::AddArray(TArray<int> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddArray");

	UCohtmlJSEvent_AddArray_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003C8110
//		Name   -> Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UStructProperty*                             Struct                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct");

	UCohtmlWidget_UpdateWholeDataModelFromStruct_Params params {};
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CEDD0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject");

	UCohtmlWidget_UpdateWholeDataModelFromObject_Params params {};
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CEC70
//		Name   -> Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCohtmlJSEvent*                              EventData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::TriggerJSEvent(const struct FString& Name, class UCohtmlJSEvent* EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent");

	UCohtmlWidget_TriggerJSEvent_Params params {};
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CEA40
//		Name   -> Function CohtmlPlugin.CohtmlWidget.SynchronizeModels
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
void UCohtmlWidget::SynchronizeModels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SynchronizeModels");

	UCohtmlWidget_SynchronizeModels_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE990
//		Name   -> Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::ShowPaintRects(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.ShowPaintRects");

	UCohtmlWidget_ShowPaintRects_Params params {};
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE6B0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSoundAttenuationSettings                   Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCohtmlWidget::SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation");

	UCohtmlWidget_SetSoundAttenuation_Params params {};
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE4E0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::SetInputPropagationBehaviour(TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> Propagation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour");

	UCohtmlWidget_SetInputPropagationBehaviour_Params params {};
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CE1E0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTextureFromPath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlWidget::RemovePreloadedTextureFromPath(const struct FString& AssetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTextureFromPath");

	UCohtmlWidget_RemovePreloadedTextureFromPath_Params params {};
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CE0A0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlWidget::RemovePreloadedTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.RemovePreloadedTexture");

	UCohtmlWidget_RemovePreloadedTexture_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CDFF0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.RemoveAllPreloadedTextures
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCohtmlWidget::RemoveAllPreloadedTextures()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.RemoveAllPreloadedTextures");

	UCohtmlWidget_RemoveAllPreloadedTextures_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDFB0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.Reload
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCohtmlWidget::Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.Reload");

	UCohtmlWidget_Reload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDEF0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.PreloadTextureSync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::PreloadTextureSync(const struct FString& AssetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.PreloadTextureSync");

	UCohtmlWidget_PreloadTextureSync_Params params {};
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDDB0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.PreloadTextureAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::PreloadTextureAsync(const struct FString& AssetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.PreloadTextureAsync");

	UCohtmlWidget_PreloadTextureAsync_Params params {};
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDC70
//		Name   -> Function CohtmlPlugin.CohtmlWidget.Load
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::Load(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.Load");

	UCohtmlWidget_Load_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CDBA0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlWidget::IsReadyToCreateView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView");

	UCohtmlWidget_IsReadyToCreateView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CDB70
//		Name   -> Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlWidget::IsReadyForBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings");

	UCohtmlWidget_IsReadyForBindings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD990
//		Name   -> Function CohtmlPlugin.CohtmlWidget.HasRequestedView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCohtmlWidget::HasRequestedView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.HasRequestedView");

	UCohtmlWidget_HasRequestedView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD930
//		Name   -> Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* UCohtmlWidget::GetRenderTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.GetRenderTexture");

	UCohtmlWidget_GetRenderTexture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD900
//		Name   -> Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CohtmlPlugin_ECohtmlInputPropagationBehaviour> UCohtmlWidget::GetInputPropagationBehaviour()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour");

	UCohtmlWidget_GetInputPropagationBehaviour_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003CD6C0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCohtmlJSEvent*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCohtmlJSEvent* UCohtmlWidget::CreateJSEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateJSEvent");

	UCohtmlWidget_CreateJSEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003C7E70
//		Name   -> Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStructProperty*                             Struct                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Struct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct");

	UCohtmlWidget_CreateDataModelFromStruct_Params params {};
	params.Name = Name;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD5E0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Model                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::CreateDataModelFromObject(const struct FString& Name, class UObject* Model)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject");

	UCohtmlWidget_CreateDataModelFromObject_Params params {};
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003CD0B0
//		Name   -> Function CohtmlPlugin.CohtmlWidget.AddPreloadedTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCohtmlWidget::AddPreloadedTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.AddPreloadedTexture");

	UCohtmlWidget_AddPreloadedTexture_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
