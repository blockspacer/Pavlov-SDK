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
//		Offset -> 0x00347000
//		Name   -> Function JsonUtils.JsonUtilsLib.StringToJsonValueArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UJsonUtilsValue*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UJsonUtilsValue*> UJsonUtilsLib::STATIC_StringToJsonValueArray(const struct FString& JsonString, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.StringToJsonValueArray");

	UJsonUtilsLib_StringToJsonValueArray_Params params {};
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346F10
//		Name   -> Function JsonUtils.JsonUtilsLib.StringToJson
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsObj*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsObj* UJsonUtilsLib::STATIC_StringToJson(const struct FString& JsonString, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.StringToJson");

	UJsonUtilsLib_StringToJson_Params params {};
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346940
//		Name   -> Function JsonUtils.JsonUtilsLib.SaveJsonToFile
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UJsonUtilsObj*                               JsonObj                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowOverwrite                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsLib::STATIC_SaveJsonToFile(class UJsonUtilsObj* JsonObj, const struct FString& Filename, bool bAllowOverwrite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.SaveJsonToFile");

	UJsonUtilsLib_SaveJsonToFile_Params params {};
	params.JsonObj = JsonObj;
	params.Filename = Filename;
	params.bAllowOverwrite = bAllowOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003467E0
//		Name   -> Function JsonUtils.JsonUtilsLib.MakeJsonStringVal
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ValueString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsValue*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonStringVal(const struct FString& ValueString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonStringVal");

	UJsonUtilsLib_MakeJsonStringVal_Params params {};
	params.ValueString = ValueString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003467B0
//		Name   -> Function JsonUtils.JsonUtilsLib.MakeJsonObj
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UJsonUtilsObj*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsObj* UJsonUtilsLib::STATIC_MakeJsonObj()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonObj");

	UJsonUtilsLib_MakeJsonObj_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346730
//		Name   -> Function JsonUtils.JsonUtilsLib.MakeJsonIntValue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ValueNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsValue*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonIntValue(int ValueNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonIntValue");

	UJsonUtilsLib_MakeJsonIntValue_Params params {};
	params.ValueNumber = ValueNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003466B0
//		Name   -> Function JsonUtils.JsonUtilsLib.MakeJsonFloatValue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              ValueNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsValue*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonFloatValue(float ValueNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonFloatValue");

	UJsonUtilsLib_MakeJsonFloatValue_Params params {};
	params.ValueNumber = ValueNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346620
//		Name   -> Function JsonUtils.JsonUtilsLib.MakeJsonBoolVal
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ValueBool                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsValue*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsValue* UJsonUtilsLib::STATIC_MakeJsonBoolVal(bool ValueBool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeJsonBoolVal");

	UJsonUtilsLib_MakeJsonBoolVal_Params params {};
	params.ValueBool = ValueBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003465F0
//		Name   -> Function JsonUtils.JsonUtilsLib.MakeHttpRequest
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UJsonUtilsRequest*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsRequest* UJsonUtilsLib::STATIC_MakeHttpRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.MakeHttpRequest");

	UJsonUtilsLib_MakeHttpRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346500
//		Name   -> Function JsonUtils.JsonUtilsLib.LoadJsonFromFile
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsObj*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsObj* UJsonUtilsLib::STATIC_LoadJsonFromFile(const struct FString& Filename, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.LoadJsonFromFile");

	UJsonUtilsLib_LoadJsonFromFile_Params params {};
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346410
//		Name   -> Function JsonUtils.JsonUtilsLib.JsonToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UJsonUtilsObj*                               JsonObj                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     JsonAsString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsLib::STATIC_JsonToString(class UJsonUtilsObj* JsonObj, struct FString* JsonAsString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.JsonToString");

	UJsonUtilsLib_JsonToString_Params params {};
	params.JsonObj = JsonObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JsonAsString != nullptr)
		*JsonAsString = params.JsonAsString;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346320
//		Name   -> Function JsonUtils.JsonUtilsLib.JsonToCompressedData
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UJsonUtilsObj*                               JsonObj                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsLib::STATIC_JsonToCompressedData(class UJsonUtilsObj* JsonObj, TArray<unsigned char>* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.JsonToCompressedData");

	UJsonUtilsLib_JsonToCompressedData_Params params {};
	params.JsonObj = JsonObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344B40
//		Name   -> Function JsonUtils.JsonUtilsLib.CompressedDataToJson
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsObj*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsObj* UJsonUtilsLib::STATIC_CompressedDataToJson(TArray<unsigned char> Data, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsLib.CompressedDataToJson");

	UJsonUtilsLib_CompressedDataToJson_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003468A0
//		Name   -> Function JsonUtils.JsonUtilsObj.RemoveField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::RemoveField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.RemoveField");

	UJsonUtilsObj_RemoveField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346270
//		Name   -> Function JsonUtils.JsonUtilsObj.HasField
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::HasField(const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.HasField");

	UJsonUtilsObj_HasField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345F70
//		Name   -> Function JsonUtils.JsonUtilsObj.GetStringField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StringValue                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetStringField(const struct FString& FieldName, struct FString* StringValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetStringField");

	UJsonUtilsObj_GetStringField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StringValue != nullptr)
		*StringValue = params.StringValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345A80
//		Name   -> Function JsonUtils.JsonUtilsObj.GetObjField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsObj*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsObj* UJsonUtilsObj::GetObjField(const struct FString& FieldName, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetObjField");

	UJsonUtilsObj_GetObjField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345990
//		Name   -> Function JsonUtils.JsonUtilsObj.GetIntField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumberValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetIntField(const struct FString& FieldName, int* NumberValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetIntField");

	UJsonUtilsObj_GetIntField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberValue != nullptr)
		*NumberValue = params.NumberValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345890
//		Name   -> Function JsonUtils.JsonUtilsObj.GetFloatField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              NumberValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetFloatField(const struct FString& FieldName, float* NumberValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetFloatField");

	UJsonUtilsObj_GetFloatField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberValue != nullptr)
		*NumberValue = params.NumberValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003457B0
//		Name   -> Function JsonUtils.JsonUtilsObj.GetFieldNames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UJsonUtilsObj::GetFieldNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetFieldNames");

	UJsonUtilsObj_GetFieldNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003456C0
//		Name   -> Function JsonUtils.JsonUtilsObj.GetFieldAsTimeStamp
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   DateTime                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetFieldAsTimeStamp(const struct FString& FieldName, struct FDateTime* DateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetFieldAsTimeStamp");

	UJsonUtilsObj_GetFieldAsTimeStamp_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003455C0
//		Name   -> Function JsonUtils.JsonUtilsObj.GetField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsValue*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsValue* UJsonUtilsObj::GetField(const struct FString& FieldName, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetField");

	UJsonUtilsObj_GetField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003454C0
//		Name   -> Function JsonUtils.JsonUtilsObj.GetBoolField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               BoolValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetBoolField(const struct FString& FieldName, bool* BoolValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetBoolField");

	UJsonUtilsObj_GetBoolField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BoolValue != nullptr)
		*BoolValue = params.BoolValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345390
//		Name   -> Function JsonUtils.JsonUtilsObj.GetArrayFieldAsStrings
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             StringArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetArrayFieldAsStrings(const struct FString& FieldName, TArray<struct FString>* StringArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsStrings");

	UJsonUtilsObj_GetArrayFieldAsStrings_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345280
//		Name   -> Function JsonUtils.JsonUtilsObj.GetArrayFieldAsInts
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Ints                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetArrayFieldAsInts(const struct FString& FieldName, TArray<int>* Ints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsInts");

	UJsonUtilsObj_GetArrayFieldAsInts_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ints != nullptr)
		*Ints = params.Ints;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345170
//		Name   -> Function JsonUtils.JsonUtilsObj.GetArrayFieldAsFloats
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      Floats                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetArrayFieldAsFloats(const struct FString& FieldName, TArray<float>* Floats)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsFloats");

	UJsonUtilsObj_GetArrayFieldAsFloats_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Floats != nullptr)
		*Floats = params.Floats;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345060
//		Name   -> Function JsonUtils.JsonUtilsObj.GetArrayFieldAsBools
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<bool>                                       Bools                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::GetArrayFieldAsBools(const struct FString& FieldName, TArray<bool>* Bools)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayFieldAsBools");

	UJsonUtilsObj_GetArrayFieldAsBools_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bools != nullptr)
		*Bools = params.Bools;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344F20
//		Name   -> Function JsonUtils.JsonUtilsObj.GetArrayField
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UJsonUtilsValue*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UJsonUtilsValue*> UJsonUtilsObj::GetArrayField(const struct FString& FieldName, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayField");

	UJsonUtilsObj_GetArrayField_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344DE0
//		Name   -> Function JsonUtils.JsonUtilsObj.GetArrayAsObjects
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UJsonUtilsObj*>                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UJsonUtilsObj*> UJsonUtilsObj::GetArrayAsObjects(const struct FString& FieldName, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.GetArrayAsObjects");

	UJsonUtilsObj_GetArrayAsObjects_Params params {};
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344B00
//		Name   -> Function JsonUtils.JsonUtilsObj.ClearObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UJsonUtilsObj::ClearObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.ClearObject");

	UJsonUtilsObj_ClearObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00344A30
//		Name   -> Function JsonUtils.JsonUtilsObj.AddTimestamp
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   DateTime                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::AddTimestamp(const struct FString& FieldName, const struct FDateTime& DateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddTimestamp");

	UJsonUtilsObj_AddTimestamp_Params params {};
	params.FieldName = FieldName;
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00344940
//		Name   -> Function JsonUtils.JsonUtilsObj.AddStringField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::AddStringField(const struct FString& FieldName, const struct FString& StringValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddStringField");

	UJsonUtilsObj_AddStringField_Params params {};
	params.FieldName = FieldName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00344760
//		Name   -> Function JsonUtils.JsonUtilsObj.AddStringArrayField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             StringArray                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::AddStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddStringArrayField");

	UJsonUtilsObj_AddStringArrayField_Params params {};
	params.FieldName = FieldName;
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344440
//		Name   -> Function JsonUtils.JsonUtilsObj.AddObjField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsObj*                               JsonUtilsObj                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::AddObjField(const struct FString& FieldName, class UJsonUtilsObj* JsonUtilsObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddObjField");

	UJsonUtilsObj_AddObjField_Params params {};
	params.FieldName = FieldName;
	params.JsonUtilsObj = JsonUtilsObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00344520
//		Name   -> Function JsonUtils.JsonUtilsObj.AddObjectArrayField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UJsonUtilsObj*>                       JsonObjects                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::AddObjectArrayField(const struct FString& FieldName, TArray<class UJsonUtilsObj*> JsonObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddObjectArrayField");

	UJsonUtilsObj_AddObjectArrayField_Params params {};
	params.FieldName = FieldName;
	params.JsonObjects = JsonObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344360
//		Name   -> Function JsonUtils.JsonUtilsObj.AddIntField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumberValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::AddIntField(const struct FString& FieldName, int NumberValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddIntField");

	UJsonUtilsObj_AddIntField_Params params {};
	params.FieldName = FieldName;
	params.NumberValue = NumberValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00344210
//		Name   -> Function JsonUtils.JsonUtilsObj.AddIntArrayField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        IntArray                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::AddIntArrayField(const struct FString& FieldName, TArray<int> IntArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddIntArrayField");

	UJsonUtilsObj_AddIntArrayField_Params params {};
	params.FieldName = FieldName;
	params.IntArray = IntArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344130
//		Name   -> Function JsonUtils.JsonUtilsObj.AddFloatField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              NumberValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::AddFloatField(const struct FString& FieldName, float NumberValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddFloatField");

	UJsonUtilsObj_AddFloatField_Params params {};
	params.FieldName = FieldName;
	params.NumberValue = NumberValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00343FE0
//		Name   -> Function JsonUtils.JsonUtilsObj.AddFloatArrayField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      FloatArray                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::AddFloatArrayField(const struct FString& FieldName, TArray<float> FloatArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddFloatArrayField");

	UJsonUtilsObj_AddFloatArrayField_Params params {};
	params.FieldName = FieldName;
	params.FloatArray = FloatArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00343F00
//		Name   -> Function JsonUtils.JsonUtilsObj.AddField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsValue*                             JsonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::AddField(const struct FString& FieldName, class UJsonUtilsValue* JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddField");

	UJsonUtilsObj_AddField_Params params {};
	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00343E20
//		Name   -> Function JsonUtils.JsonUtilsObj.AddBoolField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               BoolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsObj::AddBoolField(const struct FString& FieldName, bool BoolValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddBoolField");

	UJsonUtilsObj_AddBoolField_Params params {};
	params.FieldName = FieldName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00343CE0
//		Name   -> Function JsonUtils.JsonUtilsObj.AddBoolArrayField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<bool>                                       BoolArray                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::AddBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddBoolArrayField");

	UJsonUtilsObj_AddBoolArrayField_Params params {};
	params.FieldName = FieldName;
	params.BoolArray = BoolArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00343B90
//		Name   -> Function JsonUtils.JsonUtilsObj.AddArrayField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UJsonUtilsValue*>                     JsonValues                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsObj::AddArrayField(const struct FString& FieldName, TArray<class UJsonUtilsValue*> JsonValues)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsObj.AddArrayField");

	UJsonUtilsObj_AddArrayField_Params params {};
	params.FieldName = FieldName;
	params.JsonValues = JsonValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346E90
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetVerb
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		JsonUtils_ERequestType                             RequestType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetVerb(JsonUtils_ERequestType RequestType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetVerb");

	UJsonUtilsRequest_SetVerb_Params params {};
	params.RequestType = RequestType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346DF0
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetURL
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetURL(const struct FString& InURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetURL");

	UJsonUtilsRequest_SetURL_Params params {};
	params.InURL = InURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346D50
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetRequestUserAgent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     UserAgentValue                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetRequestUserAgent(const struct FString& UserAgentValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetRequestUserAgent");

	UJsonUtilsRequest_SetRequestUserAgent_Params params {};
	params.UserAgentValue = UserAgentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346CB0
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetCustomContentType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetCustomContentType(const struct FString& ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetCustomContentType");

	UJsonUtilsRequest_SetCustomContentType_Params params {};
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346C30
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetContentType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		JsonUtils_EContentType                             ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetContentType(JsonUtils_EContentType ContentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContentType");

	UJsonUtilsRequest_SetContentType_Params params {};
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346B90
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetContentAsString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ContentString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetContentAsString(const struct FString& ContentString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContentAsString");

	UJsonUtilsRequest_SetContentAsString_Params params {};
	params.ContentString = ContentString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346B10
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetContentAsJson
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UJsonUtilsObj*                               ContentObj                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetContentAsJson(class UJsonUtilsObj* ContentObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContentAsJson");

	UJsonUtilsRequest_SetContentAsJson_Params params {};
	params.ContentObj = ContentObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346A60
//		Name   -> Function JsonUtils.JsonUtilsRequest.SetContent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::SetContent(TArray<unsigned char> Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.SetContent");

	UJsonUtilsRequest_SetContent_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00346880
//		Name   -> Function JsonUtils.JsonUtilsRequest.ProcessRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UJsonUtilsRequest::ProcessRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.ProcessRequest");

	UJsonUtilsRequest_ProcessRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003460B0
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetURL
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UJsonUtilsRequest::GetURL()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetURL");

	UJsonUtilsRequest_GetURL_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345ED0
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetResponseHeaders
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TMap<struct FString, struct FString>               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TMap<struct FString, struct FString> UJsonUtilsRequest::GetResponseHeaders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseHeaders");

	UJsonUtilsRequest_GetResponseHeaders_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345EA0
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetResponseCode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UJsonUtilsRequest::GetResponseCode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseCode");

	UJsonUtilsRequest_GetResponseCode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345E20
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetResponseAsString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UJsonUtilsRequest::GetResponseAsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseAsString");

	UJsonUtilsRequest_GetResponseAsString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345D40
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetResponseAsJsonArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UJsonUtilsValue*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UJsonUtilsValue*> UJsonUtilsRequest::GetResponseAsJsonArray(bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseAsJsonArray");

	UJsonUtilsRequest_GetResponseAsJsonArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345CA0
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetResponseAsJson
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UJsonUtilsObj*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsObj* UJsonUtilsRequest::GetResponseAsJson(bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponseAsJson");

	UJsonUtilsRequest_GetResponseAsJson_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345C20
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetResponse
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UJsonUtilsRequest::GetResponse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetResponse");

	UJsonUtilsRequest_GetResponse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00345B80
//		Name   -> Function JsonUtils.JsonUtilsRequest.GetRequestHeaders
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TMap<struct FString, struct FString>               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TMap<struct FString, struct FString> UJsonUtilsRequest::GetRequestHeaders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.GetRequestHeaders");

	UJsonUtilsRequest_GetRequestHeaders_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344C70
//		Name   -> Function JsonUtils.JsonUtilsRequest.EnableLogging
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::EnableLogging(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.EnableLogging");

	UJsonUtilsRequest_EnableLogging_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00344B20
//		Name   -> Function JsonUtils.JsonUtilsRequest.ClearRequestHeaders
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UJsonUtilsRequest::ClearRequestHeaders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.ClearRequestHeaders");

	UJsonUtilsRequest_ClearRequestHeaders_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00344670
//		Name   -> Function JsonUtils.JsonUtilsRequest.AddRequestHeader
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     HeaderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     HeaderValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UJsonUtilsRequest::AddRequestHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsRequest.AddRequestHeader");

	UJsonUtilsRequest_AddRequestHeader_Params params {};
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003461F0
//		Name   -> Function JsonUtils.JsonUtilsValue.GetValueAsString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UJsonUtilsValue::GetValueAsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsString");

	UJsonUtilsValue_GetValueAsString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003461C0
//		Name   -> Function JsonUtils.JsonUtilsValue.GetValueAsObj
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UJsonUtilsObj*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJsonUtilsObj* UJsonUtilsValue::GetValueAsObj()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsObj");

	UJsonUtilsValue_GetValueAsObj_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346190
//		Name   -> Function JsonUtils.JsonUtilsValue.GetValueAsInt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UJsonUtilsValue::GetValueAsInt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsInt");

	UJsonUtilsValue_GetValueAsInt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346160
//		Name   -> Function JsonUtils.JsonUtilsValue.GetValueAsFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UJsonUtilsValue::GetValueAsFloat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsFloat");

	UJsonUtilsValue_GetValueAsFloat_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346130
//		Name   -> Function JsonUtils.JsonUtilsValue.GetValueAsBool
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UJsonUtilsValue::GetValueAsBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetValueAsBool");

	UJsonUtilsValue_GetValueAsBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346080
//		Name   -> Function JsonUtils.JsonUtilsValue.GetType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		JsonUtils_EJsonValue                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
JsonUtils_EJsonValue UJsonUtilsValue::GetType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetType");

	UJsonUtilsValue_GetType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00344D00
//		Name   -> Function JsonUtils.JsonUtilsValue.GetArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UJsonUtilsValue*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UJsonUtilsValue*> UJsonUtilsValue::GetArray(bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtils.JsonUtilsValue.GetArray");

	UJsonUtilsValue_GetArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
