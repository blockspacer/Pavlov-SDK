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

// Class JsonUtils.JsonUtilsLib
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UJsonUtilsLib : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class JsonUtils.JsonUtilsLib");
		return ptr;
	}



	TArray<class UJsonUtilsValue*> STATIC_StringToJsonValueArray(const struct FString& JsonString, bool* bSuccessful);
	class UJsonUtilsObj* STATIC_StringToJson(const struct FString& JsonString, bool* bSuccessful);
	bool STATIC_SaveJsonToFile(class UJsonUtilsObj* JsonObj, const struct FString& Filename, bool bAllowOverwrite);
	class UJsonUtilsValue* STATIC_MakeJsonStringVal(const struct FString& ValueString);
	class UJsonUtilsObj* STATIC_MakeJsonObj();
	class UJsonUtilsValue* STATIC_MakeJsonIntValue(int ValueNumber);
	class UJsonUtilsValue* STATIC_MakeJsonFloatValue(float ValueNumber);
	class UJsonUtilsValue* STATIC_MakeJsonBoolVal(bool ValueBool);
	class UJsonUtilsRequest* STATIC_MakeHttpRequest();
	class UJsonUtilsObj* STATIC_LoadJsonFromFile(const struct FString& Filename, bool* bSuccessful);
	bool STATIC_JsonToString(class UJsonUtilsObj* JsonObj, struct FString* JsonAsString);
	bool STATIC_JsonToCompressedData(class UJsonUtilsObj* JsonObj, TArray<unsigned char>* Data);
	class UJsonUtilsObj* STATIC_CompressedDataToJson(TArray<unsigned char> Data, bool* bSuccessful);
};

// Class JsonUtils.JsonUtilsObj
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UJsonUtilsObj : public UObject
{
public:
	unsigned char                                      UnknownData_LSB1[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class JsonUtils.JsonUtilsObj");
		return ptr;
	}



	void RemoveField(const struct FString& FieldName);
	bool HasField(const struct FString& FieldName);
	bool GetStringField(const struct FString& FieldName, struct FString* StringValue);
	class UJsonUtilsObj* GetObjField(const struct FString& FieldName, bool* bSuccessful);
	bool GetIntField(const struct FString& FieldName, int* NumberValue);
	bool GetFloatField(const struct FString& FieldName, float* NumberValue);
	TArray<struct FString> GetFieldNames();
	bool GetFieldAsTimeStamp(const struct FString& FieldName, struct FDateTime* DateTime);
	class UJsonUtilsValue* GetField(const struct FString& FieldName, bool* bSuccessful);
	bool GetBoolField(const struct FString& FieldName, bool* BoolValue);
	bool GetArrayFieldAsStrings(const struct FString& FieldName, TArray<struct FString>* StringArray);
	bool GetArrayFieldAsInts(const struct FString& FieldName, TArray<int>* Ints);
	bool GetArrayFieldAsFloats(const struct FString& FieldName, TArray<float>* Floats);
	bool GetArrayFieldAsBools(const struct FString& FieldName, TArray<bool>* Bools);
	TArray<class UJsonUtilsValue*> GetArrayField(const struct FString& FieldName, bool* bSuccessful);
	TArray<class UJsonUtilsObj*> GetArrayAsObjects(const struct FString& FieldName, bool* bSuccessful);
	void ClearObject();
	void AddTimestamp(const struct FString& FieldName, const struct FDateTime& DateTime);
	void AddStringField(const struct FString& FieldName, const struct FString& StringValue);
	bool AddStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	void AddObjField(const struct FString& FieldName, class UJsonUtilsObj* JsonUtilsObj);
	bool AddObjectArrayField(const struct FString& FieldName, TArray<class UJsonUtilsObj*> JsonObjects);
	void AddIntField(const struct FString& FieldName, int NumberValue);
	bool AddIntArrayField(const struct FString& FieldName, TArray<int> IntArray);
	void AddFloatField(const struct FString& FieldName, float NumberValue);
	bool AddFloatArrayField(const struct FString& FieldName, TArray<float> FloatArray);
	void AddField(const struct FString& FieldName, class UJsonUtilsValue* JsonValue);
	void AddBoolField(const struct FString& FieldName, bool BoolValue);
	bool AddBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	bool AddArrayField(const struct FString& FieldName, TArray<class UJsonUtilsValue*> JsonValues);
};

// Class JsonUtils.JsonUtilsRequest
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
class UJsonUtilsRequest : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnResponseReceived;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bLogging;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6MOK[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ResponseString;                                            // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              ResponseData;                                              // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UJsonUtilsObj*                               ResponseObj;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasJsonResponse;                                          // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5QSA[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ResponseCode;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     URL;                                                       // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FString, struct FString>               RequestHeaders;                                            // 0x0080(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct FString, struct FString>               ResponseHeaders;                                           // 0x00D0(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0VNU[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class JsonUtils.JsonUtilsRequest");
		return ptr;
	}



	void SetVerb(JsonUtils_ERequestType RequestType);
	void SetURL(const struct FString& InURL);
	void SetRequestUserAgent(const struct FString& UserAgentValue);
	void SetCustomContentType(const struct FString& ContentType);
	void SetContentType(JsonUtils_EContentType ContentType);
	void SetContentAsString(const struct FString& ContentString);
	void SetContentAsJson(class UJsonUtilsObj* ContentObj);
	void SetContent(TArray<unsigned char> Content);
	void ProcessRequest();
	struct FString GetURL();
	TMap<struct FString, struct FString> GetResponseHeaders();
	int GetResponseCode();
	struct FString GetResponseAsString();
	TArray<class UJsonUtilsValue*> GetResponseAsJsonArray(bool* bSuccessful);
	class UJsonUtilsObj* GetResponseAsJson(bool* bSuccessful);
	TArray<unsigned char> GetResponse();
	TMap<struct FString, struct FString> GetRequestHeaders();
	void EnableLogging(bool bEnabled);
	void ClearRequestHeaders();
	void AddRequestHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
};

// Class JsonUtils.JsonUtilsValue
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UJsonUtilsValue : public UObject
{
public:
	unsigned char                                      UnknownData_UB8I[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class JsonUtils.JsonUtilsValue");
		return ptr;
	}



	struct FString GetValueAsString();
	class UJsonUtilsObj* GetValueAsObj();
	int GetValueAsInt();
	float GetValueAsFloat();
	bool GetValueAsBool();
	JsonUtils_EJsonValue GetType();
	TArray<class UJsonUtilsValue*> GetArray(bool* bSuccessful);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
