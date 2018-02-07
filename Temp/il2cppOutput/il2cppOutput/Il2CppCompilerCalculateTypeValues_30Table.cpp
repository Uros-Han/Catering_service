#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t1207486601;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// ES3Settings
struct ES3Settings_t387698538;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// ES3Cloud
struct ES3Cloud_t3549563097;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t2238294894;
// System.Type
struct Type_t;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;
// ES3Types.ES3Type
struct ES3Type_t2986191463;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// ES3Internal.ES3Reflection/ES3ReflectedMethod
struct ES3ReflectedMethod_t1166233027;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t3325964508;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// iTween/EasingFunction
struct EasingFunction_t2767217938;
// iTween/ApplyTween
struct ApplyTween_t3327999347;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Color[0...,0...]
struct ColorU5B0___U2C0___U5D_t941916414;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.Rect[]
struct RectU5BU5D_t2936723554;
// iTween/CRSpline
struct CRSpline_t2815350084;
// UnityEngine.Transform
struct Transform_t3600365921;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ES3WEBCLASS_T2809229527_H
#define ES3WEBCLASS_T2809229527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Internal.ES3WebClass
struct  ES3WebClass_t2809229527  : public RuntimeObject
{
public:
	// System.String ES3Internal.ES3WebClass::url
	String_t* ___url_0;
	// System.String ES3Internal.ES3WebClass::apiKey
	String_t* ___apiKey_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> ES3Internal.ES3WebClass::formData
	List_1_t1207486601 * ___formData_2;
	// System.Boolean ES3Internal.ES3WebClass::isDone
	bool ___isDone_3;
	// System.String ES3Internal.ES3WebClass::error
	String_t* ___error_4;
	// System.Int64 ES3Internal.ES3WebClass::errorCode
	int64_t ___errorCode_5;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(ES3WebClass_t2809229527, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_apiKey_1() { return static_cast<int32_t>(offsetof(ES3WebClass_t2809229527, ___apiKey_1)); }
	inline String_t* get_apiKey_1() const { return ___apiKey_1; }
	inline String_t** get_address_of_apiKey_1() { return &___apiKey_1; }
	inline void set_apiKey_1(String_t* value)
	{
		___apiKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___apiKey_1), value);
	}

	inline static int32_t get_offset_of_formData_2() { return static_cast<int32_t>(offsetof(ES3WebClass_t2809229527, ___formData_2)); }
	inline List_1_t1207486601 * get_formData_2() const { return ___formData_2; }
	inline List_1_t1207486601 ** get_address_of_formData_2() { return &___formData_2; }
	inline void set_formData_2(List_1_t1207486601 * value)
	{
		___formData_2 = value;
		Il2CppCodeGenWriteBarrier((&___formData_2), value);
	}

	inline static int32_t get_offset_of_isDone_3() { return static_cast<int32_t>(offsetof(ES3WebClass_t2809229527, ___isDone_3)); }
	inline bool get_isDone_3() const { return ___isDone_3; }
	inline bool* get_address_of_isDone_3() { return &___isDone_3; }
	inline void set_isDone_3(bool value)
	{
		___isDone_3 = value;
	}

	inline static int32_t get_offset_of_error_4() { return static_cast<int32_t>(offsetof(ES3WebClass_t2809229527, ___error_4)); }
	inline String_t* get_error_4() const { return ___error_4; }
	inline String_t** get_address_of_error_4() { return &___error_4; }
	inline void set_error_4(String_t* value)
	{
		___error_4 = value;
		Il2CppCodeGenWriteBarrier((&___error_4), value);
	}

	inline static int32_t get_offset_of_errorCode_5() { return static_cast<int32_t>(offsetof(ES3WebClass_t2809229527, ___errorCode_5)); }
	inline int64_t get_errorCode_5() const { return ___errorCode_5; }
	inline int64_t* get_address_of_errorCode_5() { return &___errorCode_5; }
	inline void set_errorCode_5(int64_t value)
	{
		___errorCode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3WEBCLASS_T2809229527_H
#ifndef U3CDOWNLOADTIMESTAMPU3EC__ITERATOR5_T3840275284_H
#define U3CDOWNLOADTIMESTAMPU3EC__ITERATOR5_T3840275284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Cloud/<DownloadTimestamp>c__Iterator5
struct  U3CDownloadTimestampU3Ec__Iterator5_t3840275284  : public RuntimeObject
{
public:
	// UnityEngine.WWWForm ES3Cloud/<DownloadTimestamp>c__Iterator5::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_0;
	// ES3Settings ES3Cloud/<DownloadTimestamp>c__Iterator5::settings
	ES3Settings_t387698538 * ___settings_1;
	// System.String ES3Cloud/<DownloadTimestamp>c__Iterator5::user
	String_t* ___user_2;
	// System.String ES3Cloud/<DownloadTimestamp>c__Iterator5::password
	String_t* ___password_3;
	// UnityEngine.Networking.UnityWebRequest ES3Cloud/<DownloadTimestamp>c__Iterator5::<webRequest>__1
	UnityWebRequest_t463507806 * ___U3CwebRequestU3E__1_4;
	// ES3Cloud ES3Cloud/<DownloadTimestamp>c__Iterator5::$this
	ES3Cloud_t3549563097 * ___U24this_5;
	// System.Object ES3Cloud/<DownloadTimestamp>c__Iterator5::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean ES3Cloud/<DownloadTimestamp>c__Iterator5::$disposing
	bool ___U24disposing_7;
	// System.Int32 ES3Cloud/<DownloadTimestamp>c__Iterator5::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CformU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___U3CformU3E__0_0)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_0() const { return ___U3CformU3E__0_0; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_0() { return &___U3CformU3E__0_0; }
	inline void set_U3CformU3E__0_0(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_0), value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___settings_1)); }
	inline ES3Settings_t387698538 * get_settings_1() const { return ___settings_1; }
	inline ES3Settings_t387698538 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(ES3Settings_t387698538 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((&___settings_1), value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___user_2)); }
	inline String_t* get_user_2() const { return ___user_2; }
	inline String_t** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(String_t* value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}

	inline static int32_t get_offset_of_password_3() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___password_3)); }
	inline String_t* get_password_3() const { return ___password_3; }
	inline String_t** get_address_of_password_3() { return &___password_3; }
	inline void set_password_3(String_t* value)
	{
		___password_3 = value;
		Il2CppCodeGenWriteBarrier((&___password_3), value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E__1_4() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___U3CwebRequestU3E__1_4)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3E__1_4() const { return ___U3CwebRequestU3E__1_4; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3E__1_4() { return &___U3CwebRequestU3E__1_4; }
	inline void set_U3CwebRequestU3E__1_4(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___U24this_5)); }
	inline ES3Cloud_t3549563097 * get_U24this_5() const { return ___U24this_5; }
	inline ES3Cloud_t3549563097 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(ES3Cloud_t3549563097 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CDownloadTimestampU3Ec__Iterator5_t3840275284, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOWNLOADTIMESTAMPU3EC__ITERATOR5_T3840275284_H
#ifndef U3CDOWNLOADFILENAMESU3EC__ITERATOR4_T1805858378_H
#define U3CDOWNLOADFILENAMESU3EC__ITERATOR4_T1805858378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Cloud/<DownloadFilenames>c__Iterator4
struct  U3CDownloadFilenamesU3Ec__Iterator4_t1805858378  : public RuntimeObject
{
public:
	// UnityEngine.WWWForm ES3Cloud/<DownloadFilenames>c__Iterator4::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_0;
	// System.String ES3Cloud/<DownloadFilenames>c__Iterator4::user
	String_t* ___user_1;
	// System.String ES3Cloud/<DownloadFilenames>c__Iterator4::password
	String_t* ___password_2;
	// UnityEngine.Networking.UnityWebRequest ES3Cloud/<DownloadFilenames>c__Iterator4::<webRequest>__1
	UnityWebRequest_t463507806 * ___U3CwebRequestU3E__1_3;
	// ES3Cloud ES3Cloud/<DownloadFilenames>c__Iterator4::$this
	ES3Cloud_t3549563097 * ___U24this_4;
	// System.Object ES3Cloud/<DownloadFilenames>c__Iterator4::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean ES3Cloud/<DownloadFilenames>c__Iterator4::$disposing
	bool ___U24disposing_6;
	// System.Int32 ES3Cloud/<DownloadFilenames>c__Iterator4::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CformU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___U3CformU3E__0_0)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_0() const { return ___U3CformU3E__0_0; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_0() { return &___U3CformU3E__0_0; }
	inline void set_U3CformU3E__0_0(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_0), value);
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___user_1)); }
	inline String_t* get_user_1() const { return ___user_1; }
	inline String_t** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(String_t* value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier((&___user_1), value);
	}

	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier((&___password_2), value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E__1_3() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___U3CwebRequestU3E__1_3)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3E__1_3() const { return ___U3CwebRequestU3E__1_3; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3E__1_3() { return &___U3CwebRequestU3E__1_3; }
	inline void set_U3CwebRequestU3E__1_3(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3E__1_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___U24this_4)); }
	inline ES3Cloud_t3549563097 * get_U24this_4() const { return ___U24this_4; }
	inline ES3Cloud_t3549563097 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(ES3Cloud_t3549563097 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CDownloadFilenamesU3Ec__Iterator4_t1805858378, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOWNLOADFILENAMESU3EC__ITERATOR4_T1805858378_H
#ifndef U3CDELETEFILEU3EC__ITERATOR3_T4009450454_H
#define U3CDELETEFILEU3EC__ITERATOR3_T4009450454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Cloud/<DeleteFile>c__Iterator3
struct  U3CDeleteFileU3Ec__Iterator3_t4009450454  : public RuntimeObject
{
public:
	// UnityEngine.WWWForm ES3Cloud/<DeleteFile>c__Iterator3::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_0;
	// ES3Settings ES3Cloud/<DeleteFile>c__Iterator3::settings
	ES3Settings_t387698538 * ___settings_1;
	// System.String ES3Cloud/<DeleteFile>c__Iterator3::user
	String_t* ___user_2;
	// System.String ES3Cloud/<DeleteFile>c__Iterator3::password
	String_t* ___password_3;
	// UnityEngine.Networking.UnityWebRequest ES3Cloud/<DeleteFile>c__Iterator3::<webRequest>__1
	UnityWebRequest_t463507806 * ___U3CwebRequestU3E__1_4;
	// ES3Cloud ES3Cloud/<DeleteFile>c__Iterator3::$this
	ES3Cloud_t3549563097 * ___U24this_5;
	// System.Object ES3Cloud/<DeleteFile>c__Iterator3::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean ES3Cloud/<DeleteFile>c__Iterator3::$disposing
	bool ___U24disposing_7;
	// System.Int32 ES3Cloud/<DeleteFile>c__Iterator3::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CformU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___U3CformU3E__0_0)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_0() const { return ___U3CformU3E__0_0; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_0() { return &___U3CformU3E__0_0; }
	inline void set_U3CformU3E__0_0(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_0), value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___settings_1)); }
	inline ES3Settings_t387698538 * get_settings_1() const { return ___settings_1; }
	inline ES3Settings_t387698538 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(ES3Settings_t387698538 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((&___settings_1), value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___user_2)); }
	inline String_t* get_user_2() const { return ___user_2; }
	inline String_t** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(String_t* value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}

	inline static int32_t get_offset_of_password_3() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___password_3)); }
	inline String_t* get_password_3() const { return ___password_3; }
	inline String_t** get_address_of_password_3() { return &___password_3; }
	inline void set_password_3(String_t* value)
	{
		___password_3 = value;
		Il2CppCodeGenWriteBarrier((&___password_3), value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E__1_4() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___U3CwebRequestU3E__1_4)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3E__1_4() const { return ___U3CwebRequestU3E__1_4; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3E__1_4() { return &___U3CwebRequestU3E__1_4; }
	inline void set_U3CwebRequestU3E__1_4(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___U24this_5)); }
	inline ES3Cloud_t3549563097 * get_U24this_5() const { return ___U24this_5; }
	inline ES3Cloud_t3549563097 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(ES3Cloud_t3549563097 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CDeleteFileU3Ec__Iterator3_t4009450454, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELETEFILEU3EC__ITERATOR3_T4009450454_H
#ifndef U3CDOWNLOADFILEU3EC__ITERATOR2_T3501553842_H
#define U3CDOWNLOADFILEU3EC__ITERATOR2_T3501553842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Cloud/<DownloadFile>c__Iterator2
struct  U3CDownloadFileU3Ec__Iterator2_t3501553842  : public RuntimeObject
{
public:
	// UnityEngine.WWWForm ES3Cloud/<DownloadFile>c__Iterator2::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_0;
	// ES3Settings ES3Cloud/<DownloadFile>c__Iterator2::settings
	ES3Settings_t387698538 * ___settings_1;
	// System.String ES3Cloud/<DownloadFile>c__Iterator2::user
	String_t* ___user_2;
	// System.String ES3Cloud/<DownloadFile>c__Iterator2::password
	String_t* ___password_3;
	// System.Int64 ES3Cloud/<DownloadFile>c__Iterator2::timestamp
	int64_t ___timestamp_4;
	// UnityEngine.Networking.UnityWebRequest ES3Cloud/<DownloadFile>c__Iterator2::<webRequest>__1
	UnityWebRequest_t463507806 * ___U3CwebRequestU3E__1_5;
	// ES3Cloud ES3Cloud/<DownloadFile>c__Iterator2::$this
	ES3Cloud_t3549563097 * ___U24this_6;
	// System.Object ES3Cloud/<DownloadFile>c__Iterator2::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean ES3Cloud/<DownloadFile>c__Iterator2::$disposing
	bool ___U24disposing_8;
	// System.Int32 ES3Cloud/<DownloadFile>c__Iterator2::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CformU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___U3CformU3E__0_0)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_0() const { return ___U3CformU3E__0_0; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_0() { return &___U3CformU3E__0_0; }
	inline void set_U3CformU3E__0_0(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_0), value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___settings_1)); }
	inline ES3Settings_t387698538 * get_settings_1() const { return ___settings_1; }
	inline ES3Settings_t387698538 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(ES3Settings_t387698538 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((&___settings_1), value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___user_2)); }
	inline String_t* get_user_2() const { return ___user_2; }
	inline String_t** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(String_t* value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}

	inline static int32_t get_offset_of_password_3() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___password_3)); }
	inline String_t* get_password_3() const { return ___password_3; }
	inline String_t** get_address_of_password_3() { return &___password_3; }
	inline void set_password_3(String_t* value)
	{
		___password_3 = value;
		Il2CppCodeGenWriteBarrier((&___password_3), value);
	}

	inline static int32_t get_offset_of_timestamp_4() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___timestamp_4)); }
	inline int64_t get_timestamp_4() const { return ___timestamp_4; }
	inline int64_t* get_address_of_timestamp_4() { return &___timestamp_4; }
	inline void set_timestamp_4(int64_t value)
	{
		___timestamp_4 = value;
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E__1_5() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___U3CwebRequestU3E__1_5)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3E__1_5() const { return ___U3CwebRequestU3E__1_5; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3E__1_5() { return &___U3CwebRequestU3E__1_5; }
	inline void set_U3CwebRequestU3E__1_5(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3E__1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3E__1_5), value);
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___U24this_6)); }
	inline ES3Cloud_t3549563097 * get_U24this_6() const { return ___U24this_6; }
	inline ES3Cloud_t3549563097 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(ES3Cloud_t3549563097 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ec__Iterator2_t3501553842, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOWNLOADFILEU3EC__ITERATOR2_T3501553842_H
#ifndef U3CUPLOADFILEU3EC__ITERATOR1_T1771474460_H
#define U3CUPLOADFILEU3EC__ITERATOR1_T1771474460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Cloud/<UploadFile>c__Iterator1
struct  U3CUploadFileU3Ec__Iterator1_t1771474460  : public RuntimeObject
{
public:
	// UnityEngine.WWWForm ES3Cloud/<UploadFile>c__Iterator1::<form>__0
	WWWForm_t4064702195 * ___U3CformU3E__0_0;
	// ES3Settings ES3Cloud/<UploadFile>c__Iterator1::settings
	ES3Settings_t387698538 * ___settings_1;
	// System.String ES3Cloud/<UploadFile>c__Iterator1::user
	String_t* ___user_2;
	// System.String ES3Cloud/<UploadFile>c__Iterator1::password
	String_t* ___password_3;
	// UnityEngine.Networking.UnityWebRequest ES3Cloud/<UploadFile>c__Iterator1::<webRequest>__1
	UnityWebRequest_t463507806 * ___U3CwebRequestU3E__1_4;
	// ES3Cloud ES3Cloud/<UploadFile>c__Iterator1::$this
	ES3Cloud_t3549563097 * ___U24this_5;
	// System.Object ES3Cloud/<UploadFile>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean ES3Cloud/<UploadFile>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 ES3Cloud/<UploadFile>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CformU3E__0_0() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___U3CformU3E__0_0)); }
	inline WWWForm_t4064702195 * get_U3CformU3E__0_0() const { return ___U3CformU3E__0_0; }
	inline WWWForm_t4064702195 ** get_address_of_U3CformU3E__0_0() { return &___U3CformU3E__0_0; }
	inline void set_U3CformU3E__0_0(WWWForm_t4064702195 * value)
	{
		___U3CformU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CformU3E__0_0), value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___settings_1)); }
	inline ES3Settings_t387698538 * get_settings_1() const { return ___settings_1; }
	inline ES3Settings_t387698538 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(ES3Settings_t387698538 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((&___settings_1), value);
	}

	inline static int32_t get_offset_of_user_2() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___user_2)); }
	inline String_t* get_user_2() const { return ___user_2; }
	inline String_t** get_address_of_user_2() { return &___user_2; }
	inline void set_user_2(String_t* value)
	{
		___user_2 = value;
		Il2CppCodeGenWriteBarrier((&___user_2), value);
	}

	inline static int32_t get_offset_of_password_3() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___password_3)); }
	inline String_t* get_password_3() const { return ___password_3; }
	inline String_t** get_address_of_password_3() { return &___password_3; }
	inline void set_password_3(String_t* value)
	{
		___password_3 = value;
		Il2CppCodeGenWriteBarrier((&___password_3), value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E__1_4() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___U3CwebRequestU3E__1_4)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3E__1_4() const { return ___U3CwebRequestU3E__1_4; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3E__1_4() { return &___U3CwebRequestU3E__1_4; }
	inline void set_U3CwebRequestU3E__1_4(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___U24this_5)); }
	inline ES3Cloud_t3549563097 * get_U24this_5() const { return ___U24this_5; }
	inline ES3Cloud_t3549563097 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(ES3Cloud_t3549563097 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CUploadFileU3Ec__Iterator1_t1771474460, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPLOADFILEU3EC__ITERATOR1_T1771474460_H
#ifndef U3CSYNCU3EC__ITERATOR0_T1635105512_H
#define U3CSYNCU3EC__ITERATOR0_T1635105512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Cloud/<Sync>c__Iterator0
struct  U3CSyncU3Ec__Iterator0_t1635105512  : public RuntimeObject
{
public:
	// ES3Settings ES3Cloud/<Sync>c__Iterator0::settings
	ES3Settings_t387698538 * ___settings_0;
	// System.String ES3Cloud/<Sync>c__Iterator0::user
	String_t* ___user_1;
	// System.String ES3Cloud/<Sync>c__Iterator0::password
	String_t* ___password_2;
	// ES3Cloud ES3Cloud/<Sync>c__Iterator0::$this
	ES3Cloud_t3549563097 * ___U24this_3;
	// System.Object ES3Cloud/<Sync>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean ES3Cloud/<Sync>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 ES3Cloud/<Sync>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(U3CSyncU3Ec__Iterator0_t1635105512, ___settings_0)); }
	inline ES3Settings_t387698538 * get_settings_0() const { return ___settings_0; }
	inline ES3Settings_t387698538 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(ES3Settings_t387698538 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(U3CSyncU3Ec__Iterator0_t1635105512, ___user_1)); }
	inline String_t* get_user_1() const { return ___user_1; }
	inline String_t** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(String_t* value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier((&___user_1), value);
	}

	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(U3CSyncU3Ec__Iterator0_t1635105512, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier((&___password_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CSyncU3Ec__Iterator0_t1635105512, ___U24this_3)); }
	inline ES3Cloud_t3549563097 * get_U24this_3() const { return ___U24this_3; }
	inline ES3Cloud_t3549563097 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(ES3Cloud_t3549563097 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CSyncU3Ec__Iterator0_t1635105512, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CSyncU3Ec__Iterator0_t1635105512, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CSyncU3Ec__Iterator0_t1635105512, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSYNCU3EC__ITERATOR0_T1635105512_H
#ifndef ES3TYPE_T2986191463_H
#define ES3TYPE_T2986191463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type
struct  ES3Type_t2986191463  : public RuntimeObject
{
public:
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t2238294894* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t * ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isUnityObject
	bool ___isUnityObject_7;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_8;

public:
	inline static int32_t get_offset_of_members_1() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___members_1)); }
	inline ES3MemberU5BU5D_t2238294894* get_members_1() const { return ___members_1; }
	inline ES3MemberU5BU5D_t2238294894** get_address_of_members_1() { return &___members_1; }
	inline void set_members_1(ES3MemberU5BU5D_t2238294894* value)
	{
		___members_1 = value;
		Il2CppCodeGenWriteBarrier((&___members_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}

	inline static int32_t get_offset_of_isPrimitive_3() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___isPrimitive_3)); }
	inline bool get_isPrimitive_3() const { return ___isPrimitive_3; }
	inline bool* get_address_of_isPrimitive_3() { return &___isPrimitive_3; }
	inline void set_isPrimitive_3(bool value)
	{
		___isPrimitive_3 = value;
	}

	inline static int32_t get_offset_of_isValueType_4() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___isValueType_4)); }
	inline bool get_isValueType_4() const { return ___isValueType_4; }
	inline bool* get_address_of_isValueType_4() { return &___isValueType_4; }
	inline void set_isValueType_4(bool value)
	{
		___isValueType_4 = value;
	}

	inline static int32_t get_offset_of_isCollection_5() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___isCollection_5)); }
	inline bool get_isCollection_5() const { return ___isCollection_5; }
	inline bool* get_address_of_isCollection_5() { return &___isCollection_5; }
	inline void set_isCollection_5(bool value)
	{
		___isCollection_5 = value;
	}

	inline static int32_t get_offset_of_isDictionary_6() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___isDictionary_6)); }
	inline bool get_isDictionary_6() const { return ___isDictionary_6; }
	inline bool* get_address_of_isDictionary_6() { return &___isDictionary_6; }
	inline void set_isDictionary_6(bool value)
	{
		___isDictionary_6 = value;
	}

	inline static int32_t get_offset_of_isUnityObject_7() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___isUnityObject_7)); }
	inline bool get_isUnityObject_7() const { return ___isUnityObject_7; }
	inline bool* get_address_of_isUnityObject_7() { return &___isUnityObject_7; }
	inline void set_isUnityObject_7(bool value)
	{
		___isUnityObject_7 = value;
	}

	inline static int32_t get_offset_of_isReflectedType_8() { return static_cast<int32_t>(offsetof(ES3Type_t2986191463, ___isReflectedType_8)); }
	inline bool get_isReflectedType_8() const { return ___isReflectedType_8; }
	inline bool* get_address_of_isReflectedType_8() { return &___isReflectedType_8; }
	inline void set_isReflectedType_8(bool value)
	{
		___isReflectedType_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_T2986191463_H
#ifndef ES3WRITER_T1475660490_H
#define ES3WRITER_T1475660490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Writer
struct  ES3Writer_t1475660490  : public RuntimeObject
{
public:
	// ES3Settings ES3Writer::settings
	ES3Settings_t387698538 * ___settings_0;
	// System.Collections.Generic.HashSet`1<System.String> ES3Writer::keysToDelete
	HashSet_1_t412400163 * ___keysToDelete_1;
	// System.Boolean ES3Writer::writeHeaderAndFooter
	bool ___writeHeaderAndFooter_2;
	// System.Boolean ES3Writer::overwriteKeys
	bool ___overwriteKeys_3;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(ES3Writer_t1475660490, ___settings_0)); }
	inline ES3Settings_t387698538 * get_settings_0() const { return ___settings_0; }
	inline ES3Settings_t387698538 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(ES3Settings_t387698538 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}

	inline static int32_t get_offset_of_keysToDelete_1() { return static_cast<int32_t>(offsetof(ES3Writer_t1475660490, ___keysToDelete_1)); }
	inline HashSet_1_t412400163 * get_keysToDelete_1() const { return ___keysToDelete_1; }
	inline HashSet_1_t412400163 ** get_address_of_keysToDelete_1() { return &___keysToDelete_1; }
	inline void set_keysToDelete_1(HashSet_1_t412400163 * value)
	{
		___keysToDelete_1 = value;
		Il2CppCodeGenWriteBarrier((&___keysToDelete_1), value);
	}

	inline static int32_t get_offset_of_writeHeaderAndFooter_2() { return static_cast<int32_t>(offsetof(ES3Writer_t1475660490, ___writeHeaderAndFooter_2)); }
	inline bool get_writeHeaderAndFooter_2() const { return ___writeHeaderAndFooter_2; }
	inline bool* get_address_of_writeHeaderAndFooter_2() { return &___writeHeaderAndFooter_2; }
	inline void set_writeHeaderAndFooter_2(bool value)
	{
		___writeHeaderAndFooter_2 = value;
	}

	inline static int32_t get_offset_of_overwriteKeys_3() { return static_cast<int32_t>(offsetof(ES3Writer_t1475660490, ___overwriteKeys_3)); }
	inline bool get_overwriteKeys_3() const { return ___overwriteKeys_3; }
	inline bool* get_address_of_overwriteKeys_3() { return &___overwriteKeys_3; }
	inline void set_overwriteKeys_3(bool value)
	{
		___overwriteKeys_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3WRITER_T1475660490_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ES3XMLWRITER_T156895229_H
#define ES3XMLWRITER_T156895229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Internal.ES3XMLWriter
struct  ES3XMLWriter_t156895229  : public ES3Writer_t1475660490
{
public:
	// System.IO.StreamWriter ES3Internal.ES3XMLWriter::baseWriter
	StreamWriter_t1266378904 * ___baseWriter_4;

public:
	inline static int32_t get_offset_of_baseWriter_4() { return static_cast<int32_t>(offsetof(ES3XMLWriter_t156895229, ___baseWriter_4)); }
	inline StreamWriter_t1266378904 * get_baseWriter_4() const { return ___baseWriter_4; }
	inline StreamWriter_t1266378904 ** get_address_of_baseWriter_4() { return &___baseWriter_4; }
	inline void set_baseWriter_4(StreamWriter_t1266378904 * value)
	{
		___baseWriter_4 = value;
		Il2CppCodeGenWriteBarrier((&___baseWriter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3XMLWRITER_T156895229_H
#ifndef ES3TYPE_SHAPEMODULE_T2773077851_H
#define ES3TYPE_SHAPEMODULE_T2773077851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_ShapeModule
struct  ES3Type_ShapeModule_t2773077851  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_ShapeModule_t2773077851_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ShapeModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_ShapeModule::<>f__switch$map18
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map18_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_ShapeModule_t2773077851_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map18_10() { return static_cast<int32_t>(offsetof(ES3Type_ShapeModule_t2773077851_StaticFields, ___U3CU3Ef__switchU24map18_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map18_10() const { return ___U3CU3Ef__switchU24map18_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map18_10() { return &___U3CU3Ef__switchU24map18_10; }
	inline void set_U3CU3Ef__switchU24map18_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map18_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map18_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SHAPEMODULE_T2773077851_H
#ifndef ES3TYPE_TEXTURESHEETANIMATIONMODULE_T3872385314_H
#define ES3TYPE_TEXTURESHEETANIMATIONMODULE_T3872385314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_TextureSheetAnimationModule
struct  ES3Type_TextureSheetAnimationModule_t3872385314  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_TextureSheetAnimationModule_t3872385314_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_TextureSheetAnimationModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_TextureSheetAnimationModule::<>f__switch$map1D
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1D_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_TextureSheetAnimationModule_t3872385314_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1D_10() { return static_cast<int32_t>(offsetof(ES3Type_TextureSheetAnimationModule_t3872385314_StaticFields, ___U3CU3Ef__switchU24map1D_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1D_10() const { return ___U3CU3Ef__switchU24map1D_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1D_10() { return &___U3CU3Ef__switchU24map1D_10; }
	inline void set_U3CU3Ef__switchU24map1D_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1D_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1D_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_TEXTURESHEETANIMATIONMODULE_T3872385314_H
#ifndef ES3TYPE_TRAILMODULE_T3348837668_H
#define ES3TYPE_TRAILMODULE_T3348837668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_TrailModule
struct  ES3Type_TrailModule_t3348837668  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_TrailModule_t3348837668_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_TrailModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_TrailModule::<>f__switch$map1E
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1E_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_TrailModule_t3348837668_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1E_10() { return static_cast<int32_t>(offsetof(ES3Type_TrailModule_t3348837668_StaticFields, ___U3CU3Ef__switchU24map1E_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1E_10() const { return ___U3CU3Ef__switchU24map1E_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1E_10() { return &___U3CU3Ef__switchU24map1E_10; }
	inline void set_U3CU3Ef__switchU24map1E_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1E_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1E_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_TRAILMODULE_T3348837668_H
#ifndef ES3TYPE_LIMITVELOCITYOVERLIFETIMEMODULE_T3182766872_H
#define ES3TYPE_LIMITVELOCITYOVERLIFETIMEMODULE_T3182766872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_LimitVelocityOverLifetimeModule
struct  ES3Type_LimitVelocityOverLifetimeModule_t3182766872  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_LimitVelocityOverLifetimeModule_t3182766872_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_LimitVelocityOverLifetimeModule::<>f__switch$mapD
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapD_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_LimitVelocityOverLifetimeModule_t3182766872_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_10() { return static_cast<int32_t>(offsetof(ES3Type_LimitVelocityOverLifetimeModule_t3182766872_StaticFields, ___U3CU3Ef__switchU24mapD_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapD_10() const { return ___U3CU3Ef__switchU24mapD_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapD_10() { return &___U3CU3Ef__switchU24mapD_10; }
	inline void set_U3CU3Ef__switchU24mapD_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapD_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapD_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_LIMITVELOCITYOVERLIFETIMEMODULE_T3182766872_H
#ifndef ES3TYPE_LIGHTSMODULE_T2233667868_H
#define ES3TYPE_LIGHTSMODULE_T2233667868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_LightsModule
struct  ES3Type_LightsModule_t2233667868  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_LightsModule_t2233667868_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_LightsModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_LightsModule::<>f__switch$mapC
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapC_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_LightsModule_t2233667868_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_10() { return static_cast<int32_t>(offsetof(ES3Type_LightsModule_t2233667868_StaticFields, ___U3CU3Ef__switchU24mapC_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapC_10() const { return ___U3CU3Ef__switchU24mapC_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapC_10() { return &___U3CU3Ef__switchU24mapC_10; }
	inline void set_U3CU3Ef__switchU24mapC_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapC_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_LIGHTSMODULE_T2233667868_H
#ifndef ES3TYPE_SIZEBYSPEEDMODULE_T3490101348_H
#define ES3TYPE_SIZEBYSPEEDMODULE_T3490101348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SizeBySpeedModule
struct  ES3Type_SizeBySpeedModule_t3490101348  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_SizeBySpeedModule_t3490101348_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SizeBySpeedModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_SizeBySpeedModule::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_SizeBySpeedModule_t3490101348_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_10() { return static_cast<int32_t>(offsetof(ES3Type_SizeBySpeedModule_t3490101348_StaticFields, ___U3CU3Ef__switchU24map19_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_10() const { return ___U3CU3Ef__switchU24map19_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_10() { return &___U3CU3Ef__switchU24map19_10; }
	inline void set_U3CU3Ef__switchU24map19_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SIZEBYSPEEDMODULE_T3490101348_H
#ifndef ES3TYPE_LAYERMASK_T3626129422_H
#define ES3TYPE_LAYERMASK_T3626129422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_LayerMask
struct  ES3Type_LayerMask_t3626129422  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_LayerMask_t3626129422_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_LayerMask::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_LayerMask_t3626129422_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_LAYERMASK_T3626129422_H
#ifndef ES3TYPE_SIZEOVERLIFETIMEMODULE_T489396103_H
#define ES3TYPE_SIZEOVERLIFETIMEMODULE_T489396103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SizeOverLifetimeModule
struct  ES3Type_SizeOverLifetimeModule_t489396103  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_SizeOverLifetimeModule_t489396103_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SizeOverLifetimeModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_SizeOverLifetimeModule::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_SizeOverLifetimeModule_t489396103_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_10() { return static_cast<int32_t>(offsetof(ES3Type_SizeOverLifetimeModule_t489396103_StaticFields, ___U3CU3Ef__switchU24map1A_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_10() const { return ___U3CU3Ef__switchU24map1A_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_10() { return &___U3CU3Ef__switchU24map1A_10; }
	inline void set_U3CU3Ef__switchU24map1A_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SIZEOVERLIFETIMEMODULE_T489396103_H
#ifndef ES3OBJECTTYPE_T3267764567_H
#define ES3OBJECTTYPE_T3267764567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3ObjectType
struct  ES3ObjectType_t3267764567  : public ES3Type_t2986191463
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3OBJECTTYPE_T3267764567_H
#ifndef ES3TYPE_KEYFRAME_T3628684357_H
#define ES3TYPE_KEYFRAME_T3628684357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Keyframe
struct  ES3Type_Keyframe_t3628684357  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Keyframe_t3628684357_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Keyframe::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Keyframe_t3628684357_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_KEYFRAME_T3628684357_H
#ifndef ES3TYPE_MATRIX4X4_T1081099893_H
#define ES3TYPE_MATRIX4X4_T1081099893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Matrix4x4
struct  ES3Type_Matrix4x4_t1081099893  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Matrix4x4_t1081099893_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Matrix4x4_t1081099893_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MATRIX4X4_T1081099893_H
#ifndef ES3TYPE_QUATERNION_T1950346486_H
#define ES3TYPE_QUATERNION_T1950346486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Quaternion
struct  ES3Type_Quaternion_t1950346486  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Quaternion_t1950346486_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Quaternion::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Quaternion_t1950346486_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_QUATERNION_T1950346486_H
#ifndef ES3TYPE_ROTATIONBYSPEEDMODULE_T2040755836_H
#define ES3TYPE_ROTATIONBYSPEEDMODULE_T2040755836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_RotationBySpeedModule
struct  ES3Type_RotationBySpeedModule_t2040755836  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_RotationBySpeedModule_t2040755836_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_RotationBySpeedModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_RotationBySpeedModule::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_RotationBySpeedModule_t2040755836_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_10() { return static_cast<int32_t>(offsetof(ES3Type_RotationBySpeedModule_t2040755836_StaticFields, ___U3CU3Ef__switchU24map16_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_10() const { return ___U3CU3Ef__switchU24map16_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_10() { return &___U3CU3Ef__switchU24map16_10; }
	inline void set_U3CU3Ef__switchU24map16_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_ROTATIONBYSPEEDMODULE_T2040755836_H
#ifndef ES3TYPE_ROTATIONOVERLIFETIMEMODULE_T1847753153_H
#define ES3TYPE_ROTATIONOVERLIFETIMEMODULE_T1847753153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_RotationOverLifetimeModule
struct  ES3Type_RotationOverLifetimeModule_t1847753153  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_RotationOverLifetimeModule_t1847753153_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_RotationOverLifetimeModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_RotationOverLifetimeModule::<>f__switch$map17
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map17_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_RotationOverLifetimeModule_t1847753153_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map17_10() { return static_cast<int32_t>(offsetof(ES3Type_RotationOverLifetimeModule_t1847753153_StaticFields, ___U3CU3Ef__switchU24map17_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map17_10() const { return ___U3CU3Ef__switchU24map17_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map17_10() { return &___U3CU3Ef__switchU24map17_10; }
	inline void set_U3CU3Ef__switchU24map17_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map17_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map17_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_ROTATIONOVERLIFETIMEMODULE_T1847753153_H
#ifndef ES3TYPE_SHADER_T1905025538_H
#define ES3TYPE_SHADER_T1905025538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Shader
struct  ES3Type_Shader_t1905025538  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Shader_t1905025538_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Shader::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Shader_t1905025538_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SHADER_T1905025538_H
#ifndef ES3JSONWRITER_T2366476223_H
#define ES3JSONWRITER_T2366476223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Internal.ES3JSONWriter
struct  ES3JSONWriter_t2366476223  : public ES3Writer_t1475660490
{
public:
	// System.IO.StreamWriter ES3Internal.ES3JSONWriter::baseWriter
	StreamWriter_t1266378904 * ___baseWriter_4;
	// System.Boolean ES3Internal.ES3JSONWriter::isFirstProperty
	bool ___isFirstProperty_5;

public:
	inline static int32_t get_offset_of_baseWriter_4() { return static_cast<int32_t>(offsetof(ES3JSONWriter_t2366476223, ___baseWriter_4)); }
	inline StreamWriter_t1266378904 * get_baseWriter_4() const { return ___baseWriter_4; }
	inline StreamWriter_t1266378904 ** get_address_of_baseWriter_4() { return &___baseWriter_4; }
	inline void set_baseWriter_4(StreamWriter_t1266378904 * value)
	{
		___baseWriter_4 = value;
		Il2CppCodeGenWriteBarrier((&___baseWriter_4), value);
	}

	inline static int32_t get_offset_of_isFirstProperty_5() { return static_cast<int32_t>(offsetof(ES3JSONWriter_t2366476223, ___isFirstProperty_5)); }
	inline bool get_isFirstProperty_5() const { return ___isFirstProperty_5; }
	inline bool* get_address_of_isFirstProperty_5() { return &___isFirstProperty_5; }
	inline void set_isFirstProperty_5(bool value)
	{
		___isFirstProperty_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3JSONWRITER_T2366476223_H
#ifndef ES3TYPE_NOISEMODULE_T1851086636_H
#define ES3TYPE_NOISEMODULE_T1851086636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_NoiseModule
struct  ES3Type_NoiseModule_t1851086636  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_NoiseModule_t1851086636_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_NoiseModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_NoiseModule::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_NoiseModule_t1851086636_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_10() { return static_cast<int32_t>(offsetof(ES3Type_NoiseModule_t1851086636_StaticFields, ___U3CU3Ef__switchU24map14_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_10() const { return ___U3CU3Ef__switchU24map14_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_10() { return &___U3CU3Ef__switchU24map14_10; }
	inline void set_U3CU3Ef__switchU24map14_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_NOISEMODULE_T1851086636_H
#ifndef ES3TYPE_MINMAXGRADIENT_T3705984238_H
#define ES3TYPE_MINMAXGRADIENT_T3705984238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_MinMaxGradient
struct  ES3Type_MinMaxGradient_t3705984238  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_MinMaxGradient_t3705984238_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_MinMaxGradient::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_MinMaxGradient_t3705984238_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_10() { return static_cast<int32_t>(offsetof(ES3Type_MinMaxGradient_t3705984238_StaticFields, ___U3CU3Ef__switchU24map13_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_10() const { return ___U3CU3Ef__switchU24map13_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_10() { return &___U3CU3Ef__switchU24map13_10; }
	inline void set_U3CU3Ef__switchU24map13_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MINMAXGRADIENT_T3705984238_H
#ifndef ES3TYPE_MINMAXCURVE_T3242994506_H
#define ES3TYPE_MINMAXCURVE_T3242994506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_MinMaxCurve
struct  ES3Type_MinMaxCurve_t3242994506  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_MinMaxCurve_t3242994506_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_MinMaxCurve::<>f__switch$map11
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map11_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_MinMaxCurve::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_11;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_MinMaxCurve_t3242994506_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_10() { return static_cast<int32_t>(offsetof(ES3Type_MinMaxCurve_t3242994506_StaticFields, ___U3CU3Ef__switchU24map11_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map11_10() const { return ___U3CU3Ef__switchU24map11_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map11_10() { return &___U3CU3Ef__switchU24map11_10; }
	inline void set_U3CU3Ef__switchU24map11_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map11_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_11() { return static_cast<int32_t>(offsetof(ES3Type_MinMaxCurve_t3242994506_StaticFields, ___U3CU3Ef__switchU24map12_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_11() const { return ___U3CU3Ef__switchU24map12_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_11() { return &___U3CU3Ef__switchU24map12_11; }
	inline void set_U3CU3Ef__switchU24map12_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MINMAXCURVE_T3242994506_H
#ifndef ES3TYPE_SUBEMITTERSMODULE_T1160148017_H
#define ES3TYPE_SUBEMITTERSMODULE_T1160148017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SubEmittersModule
struct  ES3Type_SubEmittersModule_t1160148017  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_SubEmittersModule_t1160148017_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SubEmittersModule::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_SubEmittersModule_t1160148017_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SUBEMITTERSMODULE_T1160148017_H
#ifndef ES3TYPE_RECT_T699777296_H
#define ES3TYPE_RECT_T699777296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Rect
struct  ES3Type_Rect_t699777296  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Rect_t699777296_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Rect::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Rect_t699777296_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_RECT_T699777296_H
#ifndef ES3TYPE_INHERITVELOCITYMODULE_T2399959633_H
#define ES3TYPE_INHERITVELOCITYMODULE_T2399959633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_InheritVelocityModule
struct  ES3Type_InheritVelocityModule_t2399959633  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_InheritVelocityModule_t2399959633_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_InheritVelocityModule::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_InheritVelocityModule_t2399959633_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_INHERITVELOCITYMODULE_T2399959633_H
#ifndef ES3TYPE_BOUNDS_T3190001344_H
#define ES3TYPE_BOUNDS_T3190001344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Bounds
struct  ES3Type_Bounds_t3190001344  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Bounds_t3190001344_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Bounds::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Bounds_t3190001344_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_BOUNDS_T3190001344_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef ES3TYPE_COLLISIONMODULE_T1758539909_H
#define ES3TYPE_COLLISIONMODULE_T1758539909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_CollisionModule
struct  ES3Type_CollisionModule_t1758539909  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_CollisionModule_t1758539909_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_CollisionModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_CollisionModule::<>f__switch$map8
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map8_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_CollisionModule_t1758539909_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_10() { return static_cast<int32_t>(offsetof(ES3Type_CollisionModule_t1758539909_StaticFields, ___U3CU3Ef__switchU24map8_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map8_10() const { return ___U3CU3Ef__switchU24map8_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map8_10() { return &___U3CU3Ef__switchU24map8_10; }
	inline void set_U3CU3Ef__switchU24map8_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map8_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_COLLISIONMODULE_T1758539909_H
#ifndef ES3TYPE_COLOR_T664829079_H
#define ES3TYPE_COLOR_T664829079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Color
struct  ES3Type_Color_t664829079  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Color_t664829079_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Color_t664829079_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_COLOR_T664829079_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ES3TYPE_COLOR32_T1003926911_H
#define ES3TYPE_COLOR32_T1003926911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Color32
struct  ES3Type_Color32_t1003926911  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Color32_t1003926911_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Color32::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Color32_t1003926911_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_COLOR32_T1003926911_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ES3TYPE_VECTOR4_T1650624223_H
#define ES3TYPE_VECTOR4_T1650624223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Vector4
struct  ES3Type_Vector4_t1650624223  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Vector4_t1650624223_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Vector4_t1650624223_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_VECTOR4_T1650624223_H
#ifndef ES3TYPE_VELOCITYOVERLIFETIMEMODULE_T3163033246_H
#define ES3TYPE_VELOCITYOVERLIFETIMEMODULE_T3163033246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_VelocityOverLifetimeModule
struct  ES3Type_VelocityOverLifetimeModule_t3163033246  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_VelocityOverLifetimeModule_t3163033246_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_VelocityOverLifetimeModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_VelocityOverLifetimeModule::<>f__switch$map1F
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_VelocityOverLifetimeModule_t3163033246_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(ES3Type_VelocityOverLifetimeModule_t3163033246_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_VELOCITYOVERLIFETIMEMODULE_T3163033246_H
#ifndef ES3TYPE_ANIMATIONCURVE_T3208054300_H
#define ES3TYPE_ANIMATIONCURVE_T3208054300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_AnimationCurve
struct  ES3Type_AnimationCurve_t3208054300  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_AnimationCurve_t3208054300_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_AnimationCurve::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_AnimationCurve_t3208054300_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_ANIMATIONCURVE_T3208054300_H
#ifndef ES3TYPE_VECTOR3_T3224602335_H
#define ES3TYPE_VECTOR3_T3224602335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Vector3
struct  ES3Type_Vector3_t3224602335  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Vector3_t3224602335_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Vector3_t3224602335_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_VECTOR3_T3224602335_H
#ifndef ES3COLLECTIONTYPE_T2530582680_H
#define ES3COLLECTIONTYPE_T2530582680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3CollectionType
struct  ES3CollectionType_t2530582680  : public ES3Type_t2986191463
{
public:
	// ES3Types.ES3Type ES3Types.ES3CollectionType::elementType
	ES3Type_t2986191463 * ___elementType_9;
	// ES3Internal.ES3Reflection/ES3ReflectedMethod ES3Types.ES3CollectionType::readMethod
	ES3ReflectedMethod_t1166233027 * ___readMethod_10;
	// ES3Internal.ES3Reflection/ES3ReflectedMethod ES3Types.ES3CollectionType::readIntoMethod
	ES3ReflectedMethod_t1166233027 * ___readIntoMethod_11;

public:
	inline static int32_t get_offset_of_elementType_9() { return static_cast<int32_t>(offsetof(ES3CollectionType_t2530582680, ___elementType_9)); }
	inline ES3Type_t2986191463 * get_elementType_9() const { return ___elementType_9; }
	inline ES3Type_t2986191463 ** get_address_of_elementType_9() { return &___elementType_9; }
	inline void set_elementType_9(ES3Type_t2986191463 * value)
	{
		___elementType_9 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_9), value);
	}

	inline static int32_t get_offset_of_readMethod_10() { return static_cast<int32_t>(offsetof(ES3CollectionType_t2530582680, ___readMethod_10)); }
	inline ES3ReflectedMethod_t1166233027 * get_readMethod_10() const { return ___readMethod_10; }
	inline ES3ReflectedMethod_t1166233027 ** get_address_of_readMethod_10() { return &___readMethod_10; }
	inline void set_readMethod_10(ES3ReflectedMethod_t1166233027 * value)
	{
		___readMethod_10 = value;
		Il2CppCodeGenWriteBarrier((&___readMethod_10), value);
	}

	inline static int32_t get_offset_of_readIntoMethod_11() { return static_cast<int32_t>(offsetof(ES3CollectionType_t2530582680, ___readIntoMethod_11)); }
	inline ES3ReflectedMethod_t1166233027 * get_readIntoMethod_11() const { return ___readIntoMethod_11; }
	inline ES3ReflectedMethod_t1166233027 ** get_address_of_readIntoMethod_11() { return &___readIntoMethod_11; }
	inline void set_readIntoMethod_11(ES3ReflectedMethod_t1166233027 * value)
	{
		___readIntoMethod_11 = value;
		Il2CppCodeGenWriteBarrier((&___readIntoMethod_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3COLLECTIONTYPE_T2530582680_H
#ifndef ES3TYPE_BONEWEIGHT_T3433704701_H
#define ES3TYPE_BONEWEIGHT_T3433704701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_BoneWeight
struct  ES3Type_BoneWeight_t3433704701  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_BoneWeight_t3433704701_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_BoneWeight::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_BoneWeight_t3433704701_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_BONEWEIGHT_T3433704701_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ES3TYPE_FORCEOVERLIFETIMEMODULE_T2092998349_H
#define ES3TYPE_FORCEOVERLIFETIMEMODULE_T2092998349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_ForceOverLifetimeModule
struct  ES3Type_ForceOverLifetimeModule_t2092998349  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_ForceOverLifetimeModule_t2092998349_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ForceOverLifetimeModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_ForceOverLifetimeModule::<>f__switch$map9
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map9_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_ForceOverLifetimeModule_t2092998349_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_10() { return static_cast<int32_t>(offsetof(ES3Type_ForceOverLifetimeModule_t2092998349_StaticFields, ___U3CU3Ef__switchU24map9_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map9_10() const { return ___U3CU3Ef__switchU24map9_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map9_10() { return &___U3CU3Ef__switchU24map9_10; }
	inline void set_U3CU3Ef__switchU24map9_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map9_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_FORCEOVERLIFETIMEMODULE_T2092998349_H
#ifndef ES3TYPE_GAMEOBJECT_T3260742322_H
#define ES3TYPE_GAMEOBJECT_T3260742322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_GameObject
struct  ES3Type_GameObject_t3260742322  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_GameObject_t3260742322_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_GameObject::Instance
	ES3Type_t2986191463 * ___Instance_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_GameObject::<>f__switch$mapA
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapA_11;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_GameObject_t3260742322_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_11() { return static_cast<int32_t>(offsetof(ES3Type_GameObject_t3260742322_StaticFields, ___U3CU3Ef__switchU24mapA_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapA_11() const { return ___U3CU3Ef__switchU24mapA_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapA_11() { return &___U3CU3Ef__switchU24mapA_11; }
	inline void set_U3CU3Ef__switchU24mapA_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapA_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_GAMEOBJECT_T3260742322_H
#ifndef ES3TYPE_VECTOR2_T1268287199_H
#define ES3TYPE_VECTOR2_T1268287199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Vector2
struct  ES3Type_Vector2_t1268287199  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Vector2_t1268287199_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Vector2_t1268287199_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_VECTOR2_T1268287199_H
#ifndef ES3TYPE_GRADIENT_T370452579_H
#define ES3TYPE_GRADIENT_T370452579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Gradient
struct  ES3Type_Gradient_t370452579  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Gradient_t370452579_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Gradient::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Gradient_t370452579_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_GRADIENT_T370452579_H
#ifndef ES3TYPE_GRADIENTALPHAKEY_T3617003156_H
#define ES3TYPE_GRADIENTALPHAKEY_T3617003156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_GradientAlphaKey
struct  ES3Type_GradientAlphaKey_t3617003156  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_GradientAlphaKey_t3617003156_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_GradientAlphaKey::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_GradientAlphaKey_t3617003156_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_GRADIENTALPHAKEY_T3617003156_H
#ifndef ES3TYPE_GRADIENTCOLORKEY_T1898629468_H
#define ES3TYPE_GRADIENTCOLORKEY_T1898629468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_GradientColorKey
struct  ES3Type_GradientColorKey_t1898629468  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_GradientColorKey_t1898629468_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_GradientColorKey::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_GradientColorKey_t1898629468_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_GRADIENTCOLORKEY_T1898629468_H
#ifndef ES3TYPE_MAINMODULE_T704798469_H
#define ES3TYPE_MAINMODULE_T704798469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_MainModule
struct  ES3Type_MainModule_t704798469  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_MainModule_t704798469_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_MainModule::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_MainModule::<>f__switch$mapE
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapE_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_MainModule_t704798469_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_10() { return static_cast<int32_t>(offsetof(ES3Type_MainModule_t704798469_StaticFields, ___U3CU3Ef__switchU24mapE_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapE_10() const { return ___U3CU3Ef__switchU24mapE_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapE_10() { return &___U3CU3Ef__switchU24mapE_10; }
	inline void set_U3CU3Ef__switchU24mapE_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapE_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MAINMODULE_T704798469_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ES3TYPE_COLORBYSPEEDMODULE_T3111583667_H
#define ES3TYPE_COLORBYSPEEDMODULE_T3111583667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_ColorBySpeedModule
struct  ES3Type_ColorBySpeedModule_t3111583667  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_ColorBySpeedModule_t3111583667_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ColorBySpeedModule::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_ColorBySpeedModule_t3111583667_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_COLORBYSPEEDMODULE_T3111583667_H
#ifndef ES3TYPE_COLOROVERLIFETIMEMODULE_T3396808298_H
#define ES3TYPE_COLOROVERLIFETIMEMODULE_T3396808298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_ColorOverLifetimeModule
struct  ES3Type_ColorOverLifetimeModule_t3396808298  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_ColorOverLifetimeModule_t3396808298_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ColorOverLifetimeModule::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_ColorOverLifetimeModule_t3396808298_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_COLOROVERLIFETIMEMODULE_T3396808298_H
#ifndef ES3TYPE_EMISSIONMODULE_T1575730623_H
#define ES3TYPE_EMISSIONMODULE_T1575730623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_EmissionModule
struct  ES3Type_EmissionModule_t1575730623  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_EmissionModule_t1575730623_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_EmissionModule::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_EmissionModule_t1575730623_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_EMISSIONMODULE_T1575730623_H
#ifndef ES3TYPE_EXTERNALFORCESMODULE_T3541143745_H
#define ES3TYPE_EXTERNALFORCESMODULE_T3541143745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_ExternalForcesModule
struct  ES3Type_ExternalForcesModule_t3541143745  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_ExternalForcesModule_t3541143745_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ExternalForcesModule::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_ExternalForcesModule_t3541143745_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_EXTERNALFORCESMODULE_T3541143745_H
#ifndef ES3TYPE_FLARE_T3352812165_H
#define ES3TYPE_FLARE_T3352812165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Flare
struct  ES3Type_Flare_t3352812165  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Flare_t3352812165_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Flare::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Flare_t3352812165_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_FLARE_T3352812165_H
#ifndef ES3CLOUD_T3549563097_H
#define ES3CLOUD_T3549563097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Cloud
struct  ES3Cloud_t3549563097  : public ES3WebClass_t2809229527
{
public:
	// System.Text.Encoding ES3Cloud::encoding
	Encoding_t1523322056 * ___encoding_6;
	// System.Byte[] ES3Cloud::_data
	ByteU5BU5D_t4116647657* ____data_7;

public:
	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(ES3Cloud_t3549563097, ___encoding_6)); }
	inline Encoding_t1523322056 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t1523322056 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t1523322056 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_6), value);
	}

	inline static int32_t get_offset_of__data_7() { return static_cast<int32_t>(offsetof(ES3Cloud_t3549563097, ____data_7)); }
	inline ByteU5BU5D_t4116647657* get__data_7() const { return ____data_7; }
	inline ByteU5BU5D_t4116647657** get_address_of__data_7() { return &____data_7; }
	inline void set__data_7(ByteU5BU5D_t4116647657* value)
	{
		____data_7 = value;
		Il2CppCodeGenWriteBarrier((&____data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3CLOUD_T3549563097_H
#ifndef ES3TYPE_FONT_T1041595570_H
#define ES3TYPE_FONT_T1041595570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Font
struct  ES3Type_Font_t1041595570  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_Font_t1041595570_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Font::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Font_t1041595570_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_FONT_T1041595570_H
#ifndef ES3TYPE_TRIGGERMODULE_T1545301523_H
#define ES3TYPE_TRIGGERMODULE_T1545301523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_TriggerModule
struct  ES3Type_TriggerModule_t1545301523  : public ES3Type_t2986191463
{
public:

public:
};

struct ES3Type_TriggerModule_t1545301523_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_TriggerModule::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_TriggerModule_t1545301523_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_TRIGGERMODULE_T1545301523_H
#ifndef ES3ARRAYTYPE_T1078489078_H
#define ES3ARRAYTYPE_T1078489078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3ArrayType
struct  ES3ArrayType_t1078489078  : public ES3CollectionType_t2530582680
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3ARRAYTYPE_T1078489078_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ES3UNITYOBJECTTYPE_T4268728443_H
#define ES3UNITYOBJECTTYPE_T4268728443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3UnityObjectType
struct  ES3UnityObjectType_t4268728443  : public ES3ObjectType_t3267764567
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3UNITYOBJECTTYPE_T4268728443_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T654135784_H
#ifndef ES3TYPE_AUDIOCLIP_T1629432118_H
#define ES3TYPE_AUDIOCLIP_T1629432118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_AudioClip
struct  ES3Type_AudioClip_t1629432118  : public ES3ObjectType_t3267764567
{
public:

public:
};

struct ES3Type_AudioClip_t1629432118_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_AudioClip::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_AudioClip_t1629432118_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_AUDIOCLIP_T1629432118_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef ES3COMPONENTTYPE_T1527516020_H
#define ES3COMPONENTTYPE_T1527516020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3ComponentType
struct  ES3ComponentType_t1527516020  : public ES3ObjectType_t3267764567
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3COMPONENTTYPE_T1527516020_H
#ifndef EASETYPE_T2573404410_H
#define EASETYPE_T2573404410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/EaseType
struct  EaseType_t2573404410 
{
public:
	// System.Int32 iTween/EaseType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EaseType_t2573404410, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASETYPE_T2573404410_H
#ifndef ES3TYPE_PHYSICSMATERIAL2D_T2800933526_H
#define ES3TYPE_PHYSICSMATERIAL2D_T2800933526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_PhysicsMaterial2D
struct  ES3Type_PhysicsMaterial2D_t2800933526  : public ES3ObjectType_t3267764567
{
public:

public:
};

struct ES3Type_PhysicsMaterial2D_t2800933526_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_PhysicsMaterial2D::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_PhysicsMaterial2D_t2800933526_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_PHYSICSMATERIAL2D_T2800933526_H
#ifndef LOOPTYPE_T369612249_H
#define LOOPTYPE_T369612249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/LoopType
struct  LoopType_t369612249 
{
public:
	// System.Int32 iTween/LoopType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoopType_t369612249, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPTYPE_T369612249_H
#ifndef ES3TYPE_PHYSICMATERIAL_T1304651895_H
#define ES3TYPE_PHYSICMATERIAL_T1304651895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_PhysicMaterial
struct  ES3Type_PhysicMaterial_t1304651895  : public ES3ObjectType_t3267764567
{
public:

public:
};

struct ES3Type_PhysicMaterial_t1304651895_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_PhysicMaterial::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_PhysicMaterial_t1304651895_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_PHYSICMATERIAL_T1304651895_H
#ifndef NAMEDVALUECOLOR_T1091574706_H
#define NAMEDVALUECOLOR_T1091574706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/NamedValueColor
struct  NamedValueColor_t1091574706 
{
public:
	// System.Int32 iTween/NamedValueColor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamedValueColor_t1091574706, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEDVALUECOLOR_T1091574706_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef DEFAULTS_T3148213711_H
#define DEFAULTS_T3148213711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/Defaults
struct  Defaults_t3148213711  : public RuntimeObject
{
public:

public:
};

struct Defaults_t3148213711_StaticFields
{
public:
	// System.Single iTween/Defaults::time
	float ___time_0;
	// System.Single iTween/Defaults::delay
	float ___delay_1;
	// iTween/NamedValueColor iTween/Defaults::namedColorValue
	int32_t ___namedColorValue_2;
	// iTween/LoopType iTween/Defaults::loopType
	int32_t ___loopType_3;
	// iTween/EaseType iTween/Defaults::easeType
	int32_t ___easeType_4;
	// System.Single iTween/Defaults::lookSpeed
	float ___lookSpeed_5;
	// System.Boolean iTween/Defaults::isLocal
	bool ___isLocal_6;
	// UnityEngine.Space iTween/Defaults::space
	int32_t ___space_7;
	// System.Boolean iTween/Defaults::orientToPath
	bool ___orientToPath_8;
	// UnityEngine.Color iTween/Defaults::color
	Color_t2555686324  ___color_9;
	// System.Single iTween/Defaults::updateTimePercentage
	float ___updateTimePercentage_10;
	// System.Single iTween/Defaults::updateTime
	float ___updateTime_11;
	// System.Int32 iTween/Defaults::cameraFadeDepth
	int32_t ___cameraFadeDepth_12;
	// System.Single iTween/Defaults::lookAhead
	float ___lookAhead_13;
	// System.Boolean iTween/Defaults::useRealTime
	bool ___useRealTime_14;
	// UnityEngine.Vector3 iTween/Defaults::up
	Vector3_t3722313464  ___up_15;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_namedColorValue_2() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___namedColorValue_2)); }
	inline int32_t get_namedColorValue_2() const { return ___namedColorValue_2; }
	inline int32_t* get_address_of_namedColorValue_2() { return &___namedColorValue_2; }
	inline void set_namedColorValue_2(int32_t value)
	{
		___namedColorValue_2 = value;
	}

	inline static int32_t get_offset_of_loopType_3() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___loopType_3)); }
	inline int32_t get_loopType_3() const { return ___loopType_3; }
	inline int32_t* get_address_of_loopType_3() { return &___loopType_3; }
	inline void set_loopType_3(int32_t value)
	{
		___loopType_3 = value;
	}

	inline static int32_t get_offset_of_easeType_4() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___easeType_4)); }
	inline int32_t get_easeType_4() const { return ___easeType_4; }
	inline int32_t* get_address_of_easeType_4() { return &___easeType_4; }
	inline void set_easeType_4(int32_t value)
	{
		___easeType_4 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_5() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___lookSpeed_5)); }
	inline float get_lookSpeed_5() const { return ___lookSpeed_5; }
	inline float* get_address_of_lookSpeed_5() { return &___lookSpeed_5; }
	inline void set_lookSpeed_5(float value)
	{
		___lookSpeed_5 = value;
	}

	inline static int32_t get_offset_of_isLocal_6() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___isLocal_6)); }
	inline bool get_isLocal_6() const { return ___isLocal_6; }
	inline bool* get_address_of_isLocal_6() { return &___isLocal_6; }
	inline void set_isLocal_6(bool value)
	{
		___isLocal_6 = value;
	}

	inline static int32_t get_offset_of_space_7() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___space_7)); }
	inline int32_t get_space_7() const { return ___space_7; }
	inline int32_t* get_address_of_space_7() { return &___space_7; }
	inline void set_space_7(int32_t value)
	{
		___space_7 = value;
	}

	inline static int32_t get_offset_of_orientToPath_8() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___orientToPath_8)); }
	inline bool get_orientToPath_8() const { return ___orientToPath_8; }
	inline bool* get_address_of_orientToPath_8() { return &___orientToPath_8; }
	inline void set_orientToPath_8(bool value)
	{
		___orientToPath_8 = value;
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___color_9)); }
	inline Color_t2555686324  get_color_9() const { return ___color_9; }
	inline Color_t2555686324 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_t2555686324  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_updateTimePercentage_10() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___updateTimePercentage_10)); }
	inline float get_updateTimePercentage_10() const { return ___updateTimePercentage_10; }
	inline float* get_address_of_updateTimePercentage_10() { return &___updateTimePercentage_10; }
	inline void set_updateTimePercentage_10(float value)
	{
		___updateTimePercentage_10 = value;
	}

	inline static int32_t get_offset_of_updateTime_11() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___updateTime_11)); }
	inline float get_updateTime_11() const { return ___updateTime_11; }
	inline float* get_address_of_updateTime_11() { return &___updateTime_11; }
	inline void set_updateTime_11(float value)
	{
		___updateTime_11 = value;
	}

	inline static int32_t get_offset_of_cameraFadeDepth_12() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___cameraFadeDepth_12)); }
	inline int32_t get_cameraFadeDepth_12() const { return ___cameraFadeDepth_12; }
	inline int32_t* get_address_of_cameraFadeDepth_12() { return &___cameraFadeDepth_12; }
	inline void set_cameraFadeDepth_12(int32_t value)
	{
		___cameraFadeDepth_12 = value;
	}

	inline static int32_t get_offset_of_lookAhead_13() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___lookAhead_13)); }
	inline float get_lookAhead_13() const { return ___lookAhead_13; }
	inline float* get_address_of_lookAhead_13() { return &___lookAhead_13; }
	inline void set_lookAhead_13(float value)
	{
		___lookAhead_13 = value;
	}

	inline static int32_t get_offset_of_useRealTime_14() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___useRealTime_14)); }
	inline bool get_useRealTime_14() const { return ___useRealTime_14; }
	inline bool* get_address_of_useRealTime_14() { return &___useRealTime_14; }
	inline void set_useRealTime_14(bool value)
	{
		___useRealTime_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(Defaults_t3148213711_StaticFields, ___up_15)); }
	inline Vector3_t3722313464  get_up_15() const { return ___up_15; }
	inline Vector3_t3722313464 * get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(Vector3_t3722313464  value)
	{
		___up_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTS_T3148213711_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ES3TYPE_VECTOR4ARRAY_T1441997058_H
#define ES3TYPE_VECTOR4ARRAY_T1441997058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Vector4Array
struct  ES3Type_Vector4Array_t1441997058  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_Vector4Array_t1441997058_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector4Array::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Vector4Array_t1441997058_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_VECTOR4ARRAY_T1441997058_H
#ifndef ES3TYPE_FONTARRAY_T1034124082_H
#define ES3TYPE_FONTARRAY_T1034124082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_FontArray
struct  ES3Type_FontArray_t1034124082  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_FontArray_t1034124082_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_FontArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_FontArray_t1034124082_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_FONTARRAY_T1034124082_H
#ifndef ES3TYPE_GAMEOBJECTARRAY_T46764601_H
#define ES3TYPE_GAMEOBJECTARRAY_T46764601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_GameObjectArray
struct  ES3Type_GameObjectArray_t46764601  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_GameObjectArray_t46764601_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_GameObjectArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_GameObjectArray_t46764601_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_GAMEOBJECTARRAY_T46764601_H
#ifndef ES3TYPE_GRADIENTALPHAKEYARRAY_T3488675688_H
#define ES3TYPE_GRADIENTALPHAKEYARRAY_T3488675688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_GradientAlphaKeyArray
struct  ES3Type_GradientAlphaKeyArray_t3488675688  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_GradientAlphaKeyArray_t3488675688_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_GradientAlphaKeyArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_GradientAlphaKeyArray_t3488675688_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_GRADIENTALPHAKEYARRAY_T3488675688_H
#ifndef ES3TYPE_GRADIENTCOLORKEYARRAY_T4168811185_H
#define ES3TYPE_GRADIENTCOLORKEYARRAY_T4168811185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_GradientColorKeyArray
struct  ES3Type_GradientColorKeyArray_t4168811185  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_GradientColorKeyArray_t4168811185_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_GradientColorKeyArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_GradientColorKeyArray_t4168811185_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_GRADIENTCOLORKEYARRAY_T4168811185_H
#ifndef ES3TYPE_KEYFRAMEARRAY_T3886725817_H
#define ES3TYPE_KEYFRAMEARRAY_T3886725817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_KeyframeArray
struct  ES3Type_KeyframeArray_t3886725817  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_KeyframeArray_t3886725817_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_KeyframeArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_KeyframeArray_t3886725817_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_KEYFRAMEARRAY_T3886725817_H
#ifndef ES3TYPE_LIGHT_T4093458496_H
#define ES3TYPE_LIGHT_T4093458496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Light
struct  ES3Type_Light_t4093458496  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_Light_t4093458496_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Light::Instance
	ES3Type_t2986191463 * ___Instance_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_Light::<>f__switch$mapB
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapB_11;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_Light_t4093458496_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_11() { return static_cast<int32_t>(offsetof(ES3Type_Light_t4093458496_StaticFields, ___U3CU3Ef__switchU24mapB_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapB_11() const { return ___U3CU3Ef__switchU24mapB_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapB_11() { return &___U3CU3Ef__switchU24mapB_11; }
	inline void set_U3CU3Ef__switchU24mapB_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapB_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_LIGHT_T4093458496_H
#ifndef ES3TYPE_MATERIAL_T1206130923_H
#define ES3TYPE_MATERIAL_T1206130923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Material
struct  ES3Type_Material_t1206130923  : public ES3UnityObjectType_t4268728443
{
public:

public:
};

struct ES3Type_Material_t1206130923_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Material::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_Material::<>f__switch$mapF
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapF_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Material_t1206130923_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_10() { return static_cast<int32_t>(offsetof(ES3Type_Material_t1206130923_StaticFields, ___U3CU3Ef__switchU24mapF_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapF_10() const { return ___U3CU3Ef__switchU24mapF_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapF_10() { return &___U3CU3Ef__switchU24mapF_10; }
	inline void set_U3CU3Ef__switchU24mapF_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapF_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MATERIAL_T1206130923_H
#ifndef ES3TYPE_MATERIALARRAY_T54532990_H
#define ES3TYPE_MATERIALARRAY_T54532990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_MaterialArray
struct  ES3Type_MaterialArray_t54532990  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_MaterialArray_t54532990_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_MaterialArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_MaterialArray_t54532990_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MATERIALARRAY_T54532990_H
#ifndef ES3TYPE_FLAREARRAY_T2778840297_H
#define ES3TYPE_FLAREARRAY_T2778840297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_FlareArray
struct  ES3Type_FlareArray_t2778840297  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_FlareArray_t2778840297_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_FlareArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_FlareArray_t2778840297_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_FLAREARRAY_T2778840297_H
#ifndef ES3TYPE_POLYGONCOLLIDER2DARRAY_T3179813255_H
#define ES3TYPE_POLYGONCOLLIDER2DARRAY_T3179813255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_PolygonCollider2DArray
struct  ES3Type_PolygonCollider2DArray_t3179813255  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_PolygonCollider2DArray_t3179813255_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_PolygonCollider2DArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_PolygonCollider2DArray_t3179813255_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_POLYGONCOLLIDER2DARRAY_T3179813255_H
#ifndef ES3TYPE_SPHERECOLLIDER_T112840568_H
#define ES3TYPE_SPHERECOLLIDER_T112840568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SphereCollider
struct  ES3Type_SphereCollider_t112840568  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_SphereCollider_t112840568_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SphereCollider::Instance
	ES3Type_t2986191463 * ___Instance_10;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_SphereCollider_t112840568_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SPHERECOLLIDER_T112840568_H
#ifndef ES3TYPE_TEXT_T3798778128_H
#define ES3TYPE_TEXT_T3798778128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Text
struct  ES3Type_Text_t3798778128  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_Text_t3798778128_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Text::Instance
	ES3Type_t2986191463 * ___Instance_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_Text::<>f__switch$map7
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map7_11;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_Text_t3798778128_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_11() { return static_cast<int32_t>(offsetof(ES3Type_Text_t3798778128_StaticFields, ___U3CU3Ef__switchU24map7_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map7_11() const { return ___U3CU3Ef__switchU24map7_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map7_11() { return &___U3CU3Ef__switchU24map7_11; }
	inline void set_U3CU3Ef__switchU24map7_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map7_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_TEXT_T3798778128_H
#ifndef ES3TYPE_TRANSFORM_T2213223219_H
#define ES3TYPE_TRANSFORM_T2213223219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Transform
struct  ES3Type_Transform_t2213223219  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_Transform_t2213223219_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Transform::Instance
	ES3Type_t2986191463 * ___Instance_10;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_Transform_t2213223219_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_TRANSFORM_T2213223219_H
#ifndef ES3TYPE_AUDIOCLIPARRAY_T2423306104_H
#define ES3TYPE_AUDIOCLIPARRAY_T2423306104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_AudioClipArray
struct  ES3Type_AudioClipArray_t2423306104  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_AudioClipArray_t2423306104_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_AudioClipArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_AudioClipArray_t2423306104_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_AUDIOCLIPARRAY_T2423306104_H
#ifndef ES3TYPE_BONEWEIGHTARRAY_T658534837_H
#define ES3TYPE_BONEWEIGHTARRAY_T658534837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_BoneWeightArray
struct  ES3Type_BoneWeightArray_t658534837  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_BoneWeightArray_t658534837_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_BoneWeightArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_BoneWeightArray_t658534837_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_BONEWEIGHTARRAY_T658534837_H
#ifndef ES3TYPE_BOUNDSARRAY_T1623079373_H
#define ES3TYPE_BOUNDSARRAY_T1623079373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_BoundsArray
struct  ES3Type_BoundsArray_t1623079373  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_BoundsArray_t1623079373_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_BoundsArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_BoundsArray_t1623079373_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_BOUNDSARRAY_T1623079373_H
#ifndef ES3TYPE_COLORARRAY_T1339422367_H
#define ES3TYPE_COLORARRAY_T1339422367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_ColorArray
struct  ES3Type_ColorArray_t1339422367  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_ColorArray_t1339422367_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ColorArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_ColorArray_t1339422367_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_COLORARRAY_T1339422367_H
#ifndef ES3TYPE_COLOR32ARRAY_T1587983387_H
#define ES3TYPE_COLOR32ARRAY_T1587983387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Color32Array
struct  ES3Type_Color32Array_t1587983387  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_Color32Array_t1587983387_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Color32Array::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Color32Array_t1587983387_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_COLOR32ARRAY_T1587983387_H
#ifndef ES3TYPE_MATRIX4X4ARRAY_T2171231211_H
#define ES3TYPE_MATRIX4X4ARRAY_T2171231211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Matrix4x4Array
struct  ES3Type_Matrix4x4Array_t2171231211  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_Matrix4x4Array_t2171231211_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Matrix4x4Array::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Matrix4x4Array_t2171231211_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MATRIX4X4ARRAY_T2171231211_H
#ifndef ES3TYPE_SKINNEDMESHRENDERER_T245045146_H
#define ES3TYPE_SKINNEDMESHRENDERER_T245045146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SkinnedMeshRenderer
struct  ES3Type_SkinnedMeshRenderer_t245045146  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_SkinnedMeshRenderer_t245045146_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SkinnedMeshRenderer::Instance
	ES3Type_t2986191463 * ___Instance_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_SkinnedMeshRenderer::<>f__switch$map1B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1B_11;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_SkinnedMeshRenderer_t245045146_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1B_11() { return static_cast<int32_t>(offsetof(ES3Type_SkinnedMeshRenderer_t245045146_StaticFields, ___U3CU3Ef__switchU24map1B_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1B_11() const { return ___U3CU3Ef__switchU24map1B_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1B_11() { return &___U3CU3Ef__switchU24map1B_11; }
	inline void set_U3CU3Ef__switchU24map1B_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1B_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1B_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SKINNEDMESHRENDERER_T245045146_H
#ifndef ES3TYPE_SKINNEDMESHRENDERERARRAY_T1106663448_H
#define ES3TYPE_SKINNEDMESHRENDERERARRAY_T1106663448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SkinnedMeshRendererArray
struct  ES3Type_SkinnedMeshRendererArray_t1106663448  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_SkinnedMeshRendererArray_t1106663448_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SkinnedMeshRendererArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_SkinnedMeshRendererArray_t1106663448_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SKINNEDMESHRENDERERARRAY_T1106663448_H
#ifndef ES3TYPE_SPRITE_T2578511106_H
#define ES3TYPE_SPRITE_T2578511106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Sprite
struct  ES3Type_Sprite_t2578511106  : public ES3UnityObjectType_t4268728443
{
public:

public:
};

struct ES3Type_Sprite_t2578511106_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Sprite::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Sprite_t2578511106_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SPRITE_T2578511106_H
#ifndef ES3TYPE_SPRITERENDERER_T2906969013_H
#define ES3TYPE_SPRITERENDERER_T2906969013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SpriteRenderer
struct  ES3Type_SpriteRenderer_t2906969013  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_SpriteRenderer_t2906969013_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SpriteRenderer::Instance
	ES3Type_t2986191463 * ___Instance_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_SpriteRenderer::<>f__switch$map1C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1C_11;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_SpriteRenderer_t2906969013_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_11() { return static_cast<int32_t>(offsetof(ES3Type_SpriteRenderer_t2906969013_StaticFields, ___U3CU3Ef__switchU24map1C_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1C_11() const { return ___U3CU3Ef__switchU24map1C_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1C_11() { return &___U3CU3Ef__switchU24map1C_11; }
	inline void set_U3CU3Ef__switchU24map1C_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1C_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SPRITERENDERER_T2906969013_H
#ifndef ES3TYPE_SPRITERENDERERARRAY_T3807664935_H
#define ES3TYPE_SPRITERENDERERARRAY_T3807664935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_SpriteRendererArray
struct  ES3Type_SpriteRendererArray_t3807664935  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_SpriteRendererArray_t3807664935_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_SpriteRendererArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_SpriteRendererArray_t3807664935_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SPRITERENDERERARRAY_T3807664935_H
#ifndef ES3TYPE_TEXTURE2D_T3987340876_H
#define ES3TYPE_TEXTURE2D_T3987340876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Texture2D
struct  ES3Type_Texture2D_t3987340876  : public ES3UnityObjectType_t4268728443
{
public:

public:
};

struct ES3Type_Texture2D_t3987340876_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Texture2D::Instance
	ES3Type_t2986191463 * ___Instance_9;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Texture2D_t3987340876_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_TEXTURE2D_T3987340876_H
#ifndef ES3TYPE_TEXTURE2DARRAY_T2222923391_H
#define ES3TYPE_TEXTURE2DARRAY_T2222923391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Texture2DArray
struct  ES3Type_Texture2DArray_t2222923391  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_Texture2DArray_t2222923391_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Texture2DArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Texture2DArray_t2222923391_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_TEXTURE2DARRAY_T2222923391_H
#ifndef ES3TYPE_VECTOR2ARRAY_T409542914_H
#define ES3TYPE_VECTOR2ARRAY_T409542914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Vector2Array
struct  ES3Type_Vector2Array_t409542914  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_Vector2Array_t409542914_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2Array::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Vector2Array_t409542914_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_VECTOR2ARRAY_T409542914_H
#ifndef ES3TYPE_VECTOR3ARRAY_T3805946114_H
#define ES3TYPE_VECTOR3ARRAY_T3805946114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Vector3Array
struct  ES3Type_Vector3Array_t3805946114  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_Vector3Array_t3805946114_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Vector3Array::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_Vector3Array_t3805946114_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_VECTOR3ARRAY_T3805946114_H
#ifndef ES3TYPE_POLYGONCOLLIDER2D_T2015057788_H
#define ES3TYPE_POLYGONCOLLIDER2D_T2015057788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_PolygonCollider2D
struct  ES3Type_PolygonCollider2D_t2015057788  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_PolygonCollider2D_t2015057788_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_PolygonCollider2D::Instance
	ES3Type_t2986191463 * ___Instance_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_PolygonCollider2D::<>f__switch$map6
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map6_11;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_PolygonCollider2D_t2015057788_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_11() { return static_cast<int32_t>(offsetof(ES3Type_PolygonCollider2D_t2015057788_StaticFields, ___U3CU3Ef__switchU24map6_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map6_11() const { return ___U3CU3Ef__switchU24map6_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map6_11() { return &___U3CU3Ef__switchU24map6_11; }
	inline void set_U3CU3Ef__switchU24map6_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map6_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_POLYGONCOLLIDER2D_T2015057788_H
#ifndef ES3TYPE_MESH_T3700080892_H
#define ES3TYPE_MESH_T3700080892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_Mesh
struct  ES3Type_Mesh_t3700080892  : public ES3UnityObjectType_t4268728443
{
public:

public:
};

struct ES3Type_Mesh_t3700080892_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_Mesh::Instance
	ES3Type_t2986191463 * ___Instance_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_Mesh::<>f__switch$map10
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map10_10;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(ES3Type_Mesh_t3700080892_StaticFields, ___Instance_9)); }
	inline ES3Type_t2986191463 * get_Instance_9() const { return ___Instance_9; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(ES3Type_t2986191463 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_10() { return static_cast<int32_t>(offsetof(ES3Type_Mesh_t3700080892_StaticFields, ___U3CU3Ef__switchU24map10_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map10_10() const { return ___U3CU3Ef__switchU24map10_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map10_10() { return &___U3CU3Ef__switchU24map10_10; }
	inline void set_U3CU3Ef__switchU24map10_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map10_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_MESH_T3700080892_H
#ifndef ES3TYPE_PHYSICMATERIALARRAY_T1159900901_H
#define ES3TYPE_PHYSICMATERIALARRAY_T1159900901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_PhysicMaterialArray
struct  ES3Type_PhysicMaterialArray_t1159900901  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_PhysicMaterialArray_t1159900901_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_PhysicMaterialArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_PhysicMaterialArray_t1159900901_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_PHYSICMATERIALARRAY_T1159900901_H
#ifndef ES3TYPE_PHYSICSMATERIAL2DARRAY_T4060554193_H
#define ES3TYPE_PHYSICSMATERIAL2DARRAY_T4060554193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_PhysicsMaterial2DArray
struct  ES3Type_PhysicsMaterial2DArray_t4060554193  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_PhysicsMaterial2DArray_t4060554193_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_PhysicsMaterial2DArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_PhysicsMaterial2DArray_t4060554193_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_PHYSICSMATERIAL2DARRAY_T4060554193_H
#ifndef ES3TYPE_SHADERARRAY_T2751257173_H
#define ES3TYPE_SHADERARRAY_T2751257173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_ShaderArray
struct  ES3Type_ShaderArray_t2751257173  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_ShaderArray_t2751257173_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_ShaderArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_ShaderArray_t2751257173_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_SHADERARRAY_T2751257173_H
#ifndef ES3TYPE_RECTTRANSFORM_T600588258_H
#define ES3TYPE_RECTTRANSFORM_T600588258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_RectTransform
struct  ES3Type_RectTransform_t600588258  : public ES3ComponentType_t1527516020
{
public:

public:
};

struct ES3Type_RectTransform_t600588258_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_RectTransform::Instance
	ES3Type_t2986191463 * ___Instance_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES3Types.ES3Type_RectTransform::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_11;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(ES3Type_RectTransform_t600588258_StaticFields, ___Instance_10)); }
	inline ES3Type_t2986191463 * get_Instance_10() const { return ___Instance_10; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(ES3Type_t2986191463 * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_11() { return static_cast<int32_t>(offsetof(ES3Type_RectTransform_t600588258_StaticFields, ___U3CU3Ef__switchU24map15_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_11() const { return ___U3CU3Ef__switchU24map15_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_11() { return &___U3CU3Ef__switchU24map15_11; }
	inline void set_U3CU3Ef__switchU24map15_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_RECTTRANSFORM_T600588258_H
#ifndef ES3TYPE_QUATERNIONARRAY_T3053990138_H
#define ES3TYPE_QUATERNIONARRAY_T3053990138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Types.ES3Type_QuaternionArray
struct  ES3Type_QuaternionArray_t3053990138  : public ES3ArrayType_t1078489078
{
public:

public:
};

struct ES3Type_QuaternionArray_t3053990138_StaticFields
{
public:
	// ES3Types.ES3Type ES3Types.ES3Type_QuaternionArray::Instance
	ES3Type_t2986191463 * ___Instance_12;

public:
	inline static int32_t get_offset_of_Instance_12() { return static_cast<int32_t>(offsetof(ES3Type_QuaternionArray_t3053990138_StaticFields, ___Instance_12)); }
	inline ES3Type_t2986191463 * get_Instance_12() const { return ___Instance_12; }
	inline ES3Type_t2986191463 ** get_address_of_Instance_12() { return &___Instance_12; }
	inline void set_Instance_12(ES3Type_t2986191463 * value)
	{
		___Instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ES3TYPE_QUATERNIONARRAY_T3053990138_H
#ifndef APPLYTWEEN_T3327999347_H
#define APPLYTWEEN_T3327999347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/ApplyTween
struct  ApplyTween_t3327999347  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLYTWEEN_T3327999347_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef EASINGFUNCTION_T2767217938_H
#define EASINGFUNCTION_T2767217938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/EasingFunction
struct  EasingFunction_t2767217938  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASINGFUNCTION_T2767217938_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ITWEEN_T770867771_H
#define ITWEEN_T770867771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween
struct  iTween_t770867771  : public MonoBehaviour_t3962482529
{
public:
	// System.String iTween::id
	String_t* ___id_3;
	// System.String iTween::type
	String_t* ___type_4;
	// System.String iTween::method
	String_t* ___method_5;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType_6;
	// System.Single iTween::time
	float ___time_7;
	// System.Single iTween::delay
	float ___delay_8;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType_9;
	// System.Boolean iTween::isRunning
	bool ___isRunning_10;
	// System.Boolean iTween::isPaused
	bool ___isPaused_11;
	// System.String iTween::_name
	String_t* ____name_12;
	// System.Single iTween::runningTime
	float ___runningTime_13;
	// System.Single iTween::percentage
	float ___percentage_14;
	// System.Single iTween::delayStarted
	float ___delayStarted_15;
	// System.Boolean iTween::kinematic
	bool ___kinematic_16;
	// System.Boolean iTween::isLocal
	bool ___isLocal_17;
	// System.Boolean iTween::loop
	bool ___loop_18;
	// System.Boolean iTween::reverse
	bool ___reverse_19;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_20;
	// System.Boolean iTween::physics
	bool ___physics_21;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_t1853889766 * ___tweenArguments_22;
	// UnityEngine.Space iTween::space
	int32_t ___space_23;
	// iTween/EasingFunction iTween::ease
	EasingFunction_t2767217938 * ___ease_24;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t3327999347 * ___apply_25;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t3935305588 * ___audioSource_26;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_t1718750761* ___vector3s_27;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_t1457185986* ___vector2s_28;
	// UnityEngine.Color[0...,0...] iTween::colors
	ColorU5B0___U2C0___U5D_t941916414* ___colors_29;
	// System.Single[] iTween::floats
	SingleU5BU5D_t1444911251* ___floats_30;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_t2936723554* ___rects_31;
	// iTween/CRSpline iTween::path
	CRSpline_t2815350084 * ___path_32;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t3722313464  ___preUpdate_33;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t3722313464  ___postUpdate_34;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_35;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_36;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_37;
	// UnityEngine.Transform iTween::thisTransform
	Transform_t3600365921 * ___thisTransform_38;

public:
	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((&___id_3), value);
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___type_4)); }
	inline String_t* get_type_4() const { return ___type_4; }
	inline String_t** get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(String_t* value)
	{
		___type_4 = value;
		Il2CppCodeGenWriteBarrier((&___type_4), value);
	}

	inline static int32_t get_offset_of_method_5() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___method_5)); }
	inline String_t* get_method_5() const { return ___method_5; }
	inline String_t** get_address_of_method_5() { return &___method_5; }
	inline void set_method_5(String_t* value)
	{
		___method_5 = value;
		Il2CppCodeGenWriteBarrier((&___method_5), value);
	}

	inline static int32_t get_offset_of_easeType_6() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___easeType_6)); }
	inline int32_t get_easeType_6() const { return ___easeType_6; }
	inline int32_t* get_address_of_easeType_6() { return &___easeType_6; }
	inline void set_easeType_6(int32_t value)
	{
		___easeType_6 = value;
	}

	inline static int32_t get_offset_of_time_7() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___time_7)); }
	inline float get_time_7() const { return ___time_7; }
	inline float* get_address_of_time_7() { return &___time_7; }
	inline void set_time_7(float value)
	{
		___time_7 = value;
	}

	inline static int32_t get_offset_of_delay_8() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___delay_8)); }
	inline float get_delay_8() const { return ___delay_8; }
	inline float* get_address_of_delay_8() { return &___delay_8; }
	inline void set_delay_8(float value)
	{
		___delay_8 = value;
	}

	inline static int32_t get_offset_of_loopType_9() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___loopType_9)); }
	inline int32_t get_loopType_9() const { return ___loopType_9; }
	inline int32_t* get_address_of_loopType_9() { return &___loopType_9; }
	inline void set_loopType_9(int32_t value)
	{
		___loopType_9 = value;
	}

	inline static int32_t get_offset_of_isRunning_10() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___isRunning_10)); }
	inline bool get_isRunning_10() const { return ___isRunning_10; }
	inline bool* get_address_of_isRunning_10() { return &___isRunning_10; }
	inline void set_isRunning_10(bool value)
	{
		___isRunning_10 = value;
	}

	inline static int32_t get_offset_of_isPaused_11() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___isPaused_11)); }
	inline bool get_isPaused_11() const { return ___isPaused_11; }
	inline bool* get_address_of_isPaused_11() { return &___isPaused_11; }
	inline void set_isPaused_11(bool value)
	{
		___isPaused_11 = value;
	}

	inline static int32_t get_offset_of__name_12() { return static_cast<int32_t>(offsetof(iTween_t770867771, ____name_12)); }
	inline String_t* get__name_12() const { return ____name_12; }
	inline String_t** get_address_of__name_12() { return &____name_12; }
	inline void set__name_12(String_t* value)
	{
		____name_12 = value;
		Il2CppCodeGenWriteBarrier((&____name_12), value);
	}

	inline static int32_t get_offset_of_runningTime_13() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___runningTime_13)); }
	inline float get_runningTime_13() const { return ___runningTime_13; }
	inline float* get_address_of_runningTime_13() { return &___runningTime_13; }
	inline void set_runningTime_13(float value)
	{
		___runningTime_13 = value;
	}

	inline static int32_t get_offset_of_percentage_14() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___percentage_14)); }
	inline float get_percentage_14() const { return ___percentage_14; }
	inline float* get_address_of_percentage_14() { return &___percentage_14; }
	inline void set_percentage_14(float value)
	{
		___percentage_14 = value;
	}

	inline static int32_t get_offset_of_delayStarted_15() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___delayStarted_15)); }
	inline float get_delayStarted_15() const { return ___delayStarted_15; }
	inline float* get_address_of_delayStarted_15() { return &___delayStarted_15; }
	inline void set_delayStarted_15(float value)
	{
		___delayStarted_15 = value;
	}

	inline static int32_t get_offset_of_kinematic_16() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___kinematic_16)); }
	inline bool get_kinematic_16() const { return ___kinematic_16; }
	inline bool* get_address_of_kinematic_16() { return &___kinematic_16; }
	inline void set_kinematic_16(bool value)
	{
		___kinematic_16 = value;
	}

	inline static int32_t get_offset_of_isLocal_17() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___isLocal_17)); }
	inline bool get_isLocal_17() const { return ___isLocal_17; }
	inline bool* get_address_of_isLocal_17() { return &___isLocal_17; }
	inline void set_isLocal_17(bool value)
	{
		___isLocal_17 = value;
	}

	inline static int32_t get_offset_of_loop_18() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___loop_18)); }
	inline bool get_loop_18() const { return ___loop_18; }
	inline bool* get_address_of_loop_18() { return &___loop_18; }
	inline void set_loop_18(bool value)
	{
		___loop_18 = value;
	}

	inline static int32_t get_offset_of_reverse_19() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___reverse_19)); }
	inline bool get_reverse_19() const { return ___reverse_19; }
	inline bool* get_address_of_reverse_19() { return &___reverse_19; }
	inline void set_reverse_19(bool value)
	{
		___reverse_19 = value;
	}

	inline static int32_t get_offset_of_wasPaused_20() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___wasPaused_20)); }
	inline bool get_wasPaused_20() const { return ___wasPaused_20; }
	inline bool* get_address_of_wasPaused_20() { return &___wasPaused_20; }
	inline void set_wasPaused_20(bool value)
	{
		___wasPaused_20 = value;
	}

	inline static int32_t get_offset_of_physics_21() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___physics_21)); }
	inline bool get_physics_21() const { return ___physics_21; }
	inline bool* get_address_of_physics_21() { return &___physics_21; }
	inline void set_physics_21(bool value)
	{
		___physics_21 = value;
	}

	inline static int32_t get_offset_of_tweenArguments_22() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___tweenArguments_22)); }
	inline Hashtable_t1853889766 * get_tweenArguments_22() const { return ___tweenArguments_22; }
	inline Hashtable_t1853889766 ** get_address_of_tweenArguments_22() { return &___tweenArguments_22; }
	inline void set_tweenArguments_22(Hashtable_t1853889766 * value)
	{
		___tweenArguments_22 = value;
		Il2CppCodeGenWriteBarrier((&___tweenArguments_22), value);
	}

	inline static int32_t get_offset_of_space_23() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___space_23)); }
	inline int32_t get_space_23() const { return ___space_23; }
	inline int32_t* get_address_of_space_23() { return &___space_23; }
	inline void set_space_23(int32_t value)
	{
		___space_23 = value;
	}

	inline static int32_t get_offset_of_ease_24() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___ease_24)); }
	inline EasingFunction_t2767217938 * get_ease_24() const { return ___ease_24; }
	inline EasingFunction_t2767217938 ** get_address_of_ease_24() { return &___ease_24; }
	inline void set_ease_24(EasingFunction_t2767217938 * value)
	{
		___ease_24 = value;
		Il2CppCodeGenWriteBarrier((&___ease_24), value);
	}

	inline static int32_t get_offset_of_apply_25() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___apply_25)); }
	inline ApplyTween_t3327999347 * get_apply_25() const { return ___apply_25; }
	inline ApplyTween_t3327999347 ** get_address_of_apply_25() { return &___apply_25; }
	inline void set_apply_25(ApplyTween_t3327999347 * value)
	{
		___apply_25 = value;
		Il2CppCodeGenWriteBarrier((&___apply_25), value);
	}

	inline static int32_t get_offset_of_audioSource_26() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___audioSource_26)); }
	inline AudioSource_t3935305588 * get_audioSource_26() const { return ___audioSource_26; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_26() { return &___audioSource_26; }
	inline void set_audioSource_26(AudioSource_t3935305588 * value)
	{
		___audioSource_26 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_26), value);
	}

	inline static int32_t get_offset_of_vector3s_27() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___vector3s_27)); }
	inline Vector3U5BU5D_t1718750761* get_vector3s_27() const { return ___vector3s_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_vector3s_27() { return &___vector3s_27; }
	inline void set_vector3s_27(Vector3U5BU5D_t1718750761* value)
	{
		___vector3s_27 = value;
		Il2CppCodeGenWriteBarrier((&___vector3s_27), value);
	}

	inline static int32_t get_offset_of_vector2s_28() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___vector2s_28)); }
	inline Vector2U5BU5D_t1457185986* get_vector2s_28() const { return ___vector2s_28; }
	inline Vector2U5BU5D_t1457185986** get_address_of_vector2s_28() { return &___vector2s_28; }
	inline void set_vector2s_28(Vector2U5BU5D_t1457185986* value)
	{
		___vector2s_28 = value;
		Il2CppCodeGenWriteBarrier((&___vector2s_28), value);
	}

	inline static int32_t get_offset_of_colors_29() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___colors_29)); }
	inline ColorU5B0___U2C0___U5D_t941916414* get_colors_29() const { return ___colors_29; }
	inline ColorU5B0___U2C0___U5D_t941916414** get_address_of_colors_29() { return &___colors_29; }
	inline void set_colors_29(ColorU5B0___U2C0___U5D_t941916414* value)
	{
		___colors_29 = value;
		Il2CppCodeGenWriteBarrier((&___colors_29), value);
	}

	inline static int32_t get_offset_of_floats_30() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___floats_30)); }
	inline SingleU5BU5D_t1444911251* get_floats_30() const { return ___floats_30; }
	inline SingleU5BU5D_t1444911251** get_address_of_floats_30() { return &___floats_30; }
	inline void set_floats_30(SingleU5BU5D_t1444911251* value)
	{
		___floats_30 = value;
		Il2CppCodeGenWriteBarrier((&___floats_30), value);
	}

	inline static int32_t get_offset_of_rects_31() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___rects_31)); }
	inline RectU5BU5D_t2936723554* get_rects_31() const { return ___rects_31; }
	inline RectU5BU5D_t2936723554** get_address_of_rects_31() { return &___rects_31; }
	inline void set_rects_31(RectU5BU5D_t2936723554* value)
	{
		___rects_31 = value;
		Il2CppCodeGenWriteBarrier((&___rects_31), value);
	}

	inline static int32_t get_offset_of_path_32() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___path_32)); }
	inline CRSpline_t2815350084 * get_path_32() const { return ___path_32; }
	inline CRSpline_t2815350084 ** get_address_of_path_32() { return &___path_32; }
	inline void set_path_32(CRSpline_t2815350084 * value)
	{
		___path_32 = value;
		Il2CppCodeGenWriteBarrier((&___path_32), value);
	}

	inline static int32_t get_offset_of_preUpdate_33() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___preUpdate_33)); }
	inline Vector3_t3722313464  get_preUpdate_33() const { return ___preUpdate_33; }
	inline Vector3_t3722313464 * get_address_of_preUpdate_33() { return &___preUpdate_33; }
	inline void set_preUpdate_33(Vector3_t3722313464  value)
	{
		___preUpdate_33 = value;
	}

	inline static int32_t get_offset_of_postUpdate_34() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___postUpdate_34)); }
	inline Vector3_t3722313464  get_postUpdate_34() const { return ___postUpdate_34; }
	inline Vector3_t3722313464 * get_address_of_postUpdate_34() { return &___postUpdate_34; }
	inline void set_postUpdate_34(Vector3_t3722313464  value)
	{
		___postUpdate_34 = value;
	}

	inline static int32_t get_offset_of_namedcolorvalue_35() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___namedcolorvalue_35)); }
	inline int32_t get_namedcolorvalue_35() const { return ___namedcolorvalue_35; }
	inline int32_t* get_address_of_namedcolorvalue_35() { return &___namedcolorvalue_35; }
	inline void set_namedcolorvalue_35(int32_t value)
	{
		___namedcolorvalue_35 = value;
	}

	inline static int32_t get_offset_of_lastRealTime_36() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___lastRealTime_36)); }
	inline float get_lastRealTime_36() const { return ___lastRealTime_36; }
	inline float* get_address_of_lastRealTime_36() { return &___lastRealTime_36; }
	inline void set_lastRealTime_36(float value)
	{
		___lastRealTime_36 = value;
	}

	inline static int32_t get_offset_of_useRealTime_37() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___useRealTime_37)); }
	inline bool get_useRealTime_37() const { return ___useRealTime_37; }
	inline bool* get_address_of_useRealTime_37() { return &___useRealTime_37; }
	inline void set_useRealTime_37(bool value)
	{
		___useRealTime_37 = value;
	}

	inline static int32_t get_offset_of_thisTransform_38() { return static_cast<int32_t>(offsetof(iTween_t770867771, ___thisTransform_38)); }
	inline Transform_t3600365921 * get_thisTransform_38() const { return ___thisTransform_38; }
	inline Transform_t3600365921 ** get_address_of_thisTransform_38() { return &___thisTransform_38; }
	inline void set_thisTransform_38(Transform_t3600365921 * value)
	{
		___thisTransform_38 = value;
		Il2CppCodeGenWriteBarrier((&___thisTransform_38), value);
	}
};

struct iTween_t770867771_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t3325964508 * ___tweens_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map20
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map20_39;

public:
	inline static int32_t get_offset_of_tweens_2() { return static_cast<int32_t>(offsetof(iTween_t770867771_StaticFields, ___tweens_2)); }
	inline List_1_t3325964508 * get_tweens_2() const { return ___tweens_2; }
	inline List_1_t3325964508 ** get_address_of_tweens_2() { return &___tweens_2; }
	inline void set_tweens_2(List_1_t3325964508 * value)
	{
		___tweens_2 = value;
		Il2CppCodeGenWriteBarrier((&___tweens_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_39() { return static_cast<int32_t>(offsetof(iTween_t770867771_StaticFields, ___U3CU3Ef__switchU24map20_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map20_39() const { return ___U3CU3Ef__switchU24map20_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map20_39() { return &___U3CU3Ef__switchU24map20_39; }
	inline void set_U3CU3Ef__switchU24map20_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map20_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITWEEN_T770867771_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3000 = { sizeof (ES3Type_PolygonCollider2D_t2015057788), -1, sizeof(ES3Type_PolygonCollider2D_t2015057788_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3000[2] = 
{
	ES3Type_PolygonCollider2D_t2015057788_StaticFields::get_offset_of_Instance_10(),
	ES3Type_PolygonCollider2D_t2015057788_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3001 = { sizeof (ES3Type_PolygonCollider2DArray_t3179813255), -1, sizeof(ES3Type_PolygonCollider2DArray_t3179813255_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3001[1] = 
{
	ES3Type_PolygonCollider2DArray_t3179813255_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3002 = { sizeof (ES3Type_SphereCollider_t112840568), -1, sizeof(ES3Type_SphereCollider_t112840568_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3002[1] = 
{
	ES3Type_SphereCollider_t112840568_StaticFields::get_offset_of_Instance_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3003 = { sizeof (ES3Type_Text_t3798778128), -1, sizeof(ES3Type_Text_t3798778128_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3003[2] = 
{
	ES3Type_Text_t3798778128_StaticFields::get_offset_of_Instance_10(),
	ES3Type_Text_t3798778128_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3004 = { sizeof (ES3Type_Transform_t2213223219), -1, sizeof(ES3Type_Transform_t2213223219_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3004[1] = 
{
	ES3Type_Transform_t2213223219_StaticFields::get_offset_of_Instance_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3005 = { sizeof (ES3Type_AnimationCurve_t3208054300), -1, sizeof(ES3Type_AnimationCurve_t3208054300_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3005[1] = 
{
	ES3Type_AnimationCurve_t3208054300_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3006 = { sizeof (ES3Type_AudioClip_t1629432118), -1, sizeof(ES3Type_AudioClip_t1629432118_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3006[1] = 
{
	ES3Type_AudioClip_t1629432118_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3007 = { sizeof (ES3Type_AudioClipArray_t2423306104), -1, sizeof(ES3Type_AudioClipArray_t2423306104_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3007[1] = 
{
	ES3Type_AudioClipArray_t2423306104_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3008 = { sizeof (ES3Type_BoneWeight_t3433704701), -1, sizeof(ES3Type_BoneWeight_t3433704701_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3008[1] = 
{
	ES3Type_BoneWeight_t3433704701_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3009 = { sizeof (ES3Type_BoneWeightArray_t658534837), -1, sizeof(ES3Type_BoneWeightArray_t658534837_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3009[1] = 
{
	ES3Type_BoneWeightArray_t658534837_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3010 = { sizeof (ES3Type_Bounds_t3190001344), -1, sizeof(ES3Type_Bounds_t3190001344_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3010[1] = 
{
	ES3Type_Bounds_t3190001344_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3011 = { sizeof (ES3Type_BoundsArray_t1623079373), -1, sizeof(ES3Type_BoundsArray_t1623079373_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3011[1] = 
{
	ES3Type_BoundsArray_t1623079373_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3012 = { sizeof (ES3Type_CollisionModule_t1758539909), -1, sizeof(ES3Type_CollisionModule_t1758539909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3012[2] = 
{
	ES3Type_CollisionModule_t1758539909_StaticFields::get_offset_of_Instance_9(),
	ES3Type_CollisionModule_t1758539909_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3013 = { sizeof (ES3Type_Color_t664829079), -1, sizeof(ES3Type_Color_t664829079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3013[1] = 
{
	ES3Type_Color_t664829079_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3014 = { sizeof (ES3Type_ColorArray_t1339422367), -1, sizeof(ES3Type_ColorArray_t1339422367_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3014[1] = 
{
	ES3Type_ColorArray_t1339422367_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3015 = { sizeof (ES3Type_Color32_t1003926911), -1, sizeof(ES3Type_Color32_t1003926911_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3015[1] = 
{
	ES3Type_Color32_t1003926911_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3016 = { sizeof (ES3Type_Color32Array_t1587983387), -1, sizeof(ES3Type_Color32Array_t1587983387_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3016[1] = 
{
	ES3Type_Color32Array_t1587983387_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3017 = { sizeof (ES3Type_ColorBySpeedModule_t3111583667), -1, sizeof(ES3Type_ColorBySpeedModule_t3111583667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3017[1] = 
{
	ES3Type_ColorBySpeedModule_t3111583667_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3018 = { sizeof (ES3Type_ColorOverLifetimeModule_t3396808298), -1, sizeof(ES3Type_ColorOverLifetimeModule_t3396808298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3018[1] = 
{
	ES3Type_ColorOverLifetimeModule_t3396808298_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3019 = { sizeof (ES3Type_EmissionModule_t1575730623), -1, sizeof(ES3Type_EmissionModule_t1575730623_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3019[1] = 
{
	ES3Type_EmissionModule_t1575730623_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3020 = { sizeof (ES3Type_ExternalForcesModule_t3541143745), -1, sizeof(ES3Type_ExternalForcesModule_t3541143745_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3020[1] = 
{
	ES3Type_ExternalForcesModule_t3541143745_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3021 = { sizeof (ES3Type_Flare_t3352812165), -1, sizeof(ES3Type_Flare_t3352812165_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3021[1] = 
{
	ES3Type_Flare_t3352812165_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3022 = { sizeof (ES3Type_FlareArray_t2778840297), -1, sizeof(ES3Type_FlareArray_t2778840297_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3022[1] = 
{
	ES3Type_FlareArray_t2778840297_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3023 = { sizeof (ES3Type_Font_t1041595570), -1, sizeof(ES3Type_Font_t1041595570_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3023[1] = 
{
	ES3Type_Font_t1041595570_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3024 = { sizeof (ES3Type_FontArray_t1034124082), -1, sizeof(ES3Type_FontArray_t1034124082_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3024[1] = 
{
	ES3Type_FontArray_t1034124082_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3025 = { sizeof (ES3Type_ForceOverLifetimeModule_t2092998349), -1, sizeof(ES3Type_ForceOverLifetimeModule_t2092998349_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3025[2] = 
{
	ES3Type_ForceOverLifetimeModule_t2092998349_StaticFields::get_offset_of_Instance_9(),
	ES3Type_ForceOverLifetimeModule_t2092998349_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3026 = { sizeof (ES3Type_GameObject_t3260742322), -1, sizeof(ES3Type_GameObject_t3260742322_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3026[3] = 
{
	0,
	ES3Type_GameObject_t3260742322_StaticFields::get_offset_of_Instance_10(),
	ES3Type_GameObject_t3260742322_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3027 = { sizeof (ES3Type_GameObjectArray_t46764601), -1, sizeof(ES3Type_GameObjectArray_t46764601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3027[1] = 
{
	ES3Type_GameObjectArray_t46764601_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3028 = { sizeof (ES3Type_Gradient_t370452579), -1, sizeof(ES3Type_Gradient_t370452579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3028[1] = 
{
	ES3Type_Gradient_t370452579_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3029 = { sizeof (ES3Type_GradientAlphaKey_t3617003156), -1, sizeof(ES3Type_GradientAlphaKey_t3617003156_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3029[1] = 
{
	ES3Type_GradientAlphaKey_t3617003156_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3030 = { sizeof (ES3Type_GradientAlphaKeyArray_t3488675688), -1, sizeof(ES3Type_GradientAlphaKeyArray_t3488675688_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3030[1] = 
{
	ES3Type_GradientAlphaKeyArray_t3488675688_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3031 = { sizeof (ES3Type_GradientColorKey_t1898629468), -1, sizeof(ES3Type_GradientColorKey_t1898629468_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3031[1] = 
{
	ES3Type_GradientColorKey_t1898629468_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3032 = { sizeof (ES3Type_GradientColorKeyArray_t4168811185), -1, sizeof(ES3Type_GradientColorKeyArray_t4168811185_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3032[1] = 
{
	ES3Type_GradientColorKeyArray_t4168811185_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3033 = { sizeof (ES3Type_InheritVelocityModule_t2399959633), -1, sizeof(ES3Type_InheritVelocityModule_t2399959633_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3033[1] = 
{
	ES3Type_InheritVelocityModule_t2399959633_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3034 = { sizeof (ES3Type_Keyframe_t3628684357), -1, sizeof(ES3Type_Keyframe_t3628684357_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3034[1] = 
{
	ES3Type_Keyframe_t3628684357_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3035 = { sizeof (ES3Type_KeyframeArray_t3886725817), -1, sizeof(ES3Type_KeyframeArray_t3886725817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3035[1] = 
{
	ES3Type_KeyframeArray_t3886725817_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3036 = { sizeof (ES3Type_LayerMask_t3626129422), -1, sizeof(ES3Type_LayerMask_t3626129422_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3036[1] = 
{
	ES3Type_LayerMask_t3626129422_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3037 = { sizeof (ES3Type_Light_t4093458496), -1, sizeof(ES3Type_Light_t4093458496_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3037[2] = 
{
	ES3Type_Light_t4093458496_StaticFields::get_offset_of_Instance_10(),
	ES3Type_Light_t4093458496_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3038 = { sizeof (ES3Type_LightsModule_t2233667868), -1, sizeof(ES3Type_LightsModule_t2233667868_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3038[2] = 
{
	ES3Type_LightsModule_t2233667868_StaticFields::get_offset_of_Instance_9(),
	ES3Type_LightsModule_t2233667868_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3039 = { sizeof (ES3Type_LimitVelocityOverLifetimeModule_t3182766872), -1, sizeof(ES3Type_LimitVelocityOverLifetimeModule_t3182766872_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3039[2] = 
{
	ES3Type_LimitVelocityOverLifetimeModule_t3182766872_StaticFields::get_offset_of_Instance_9(),
	ES3Type_LimitVelocityOverLifetimeModule_t3182766872_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3040 = { sizeof (ES3Type_MainModule_t704798469), -1, sizeof(ES3Type_MainModule_t704798469_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3040[2] = 
{
	ES3Type_MainModule_t704798469_StaticFields::get_offset_of_Instance_9(),
	ES3Type_MainModule_t704798469_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3041 = { sizeof (ES3Type_Material_t1206130923), -1, sizeof(ES3Type_Material_t1206130923_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3041[2] = 
{
	ES3Type_Material_t1206130923_StaticFields::get_offset_of_Instance_9(),
	ES3Type_Material_t1206130923_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3042 = { sizeof (ES3Type_MaterialArray_t54532990), -1, sizeof(ES3Type_MaterialArray_t54532990_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3042[1] = 
{
	ES3Type_MaterialArray_t54532990_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3043 = { sizeof (ES3Type_Matrix4x4_t1081099893), -1, sizeof(ES3Type_Matrix4x4_t1081099893_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3043[1] = 
{
	ES3Type_Matrix4x4_t1081099893_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3044 = { sizeof (ES3Type_Matrix4x4Array_t2171231211), -1, sizeof(ES3Type_Matrix4x4Array_t2171231211_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3044[1] = 
{
	ES3Type_Matrix4x4Array_t2171231211_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3045 = { sizeof (ES3Type_Mesh_t3700080892), -1, sizeof(ES3Type_Mesh_t3700080892_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3045[2] = 
{
	ES3Type_Mesh_t3700080892_StaticFields::get_offset_of_Instance_9(),
	ES3Type_Mesh_t3700080892_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3046 = { sizeof (ES3Type_MinMaxCurve_t3242994506), -1, sizeof(ES3Type_MinMaxCurve_t3242994506_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3046[3] = 
{
	ES3Type_MinMaxCurve_t3242994506_StaticFields::get_offset_of_Instance_9(),
	ES3Type_MinMaxCurve_t3242994506_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_10(),
	ES3Type_MinMaxCurve_t3242994506_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3047 = { sizeof (ES3Type_MinMaxGradient_t3705984238), -1, sizeof(ES3Type_MinMaxGradient_t3705984238_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3047[2] = 
{
	ES3Type_MinMaxGradient_t3705984238_StaticFields::get_offset_of_Instance_9(),
	ES3Type_MinMaxGradient_t3705984238_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3048 = { sizeof (ES3Type_NoiseModule_t1851086636), -1, sizeof(ES3Type_NoiseModule_t1851086636_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3048[2] = 
{
	ES3Type_NoiseModule_t1851086636_StaticFields::get_offset_of_Instance_9(),
	ES3Type_NoiseModule_t1851086636_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3049 = { sizeof (ES3Type_PhysicMaterial_t1304651895), -1, sizeof(ES3Type_PhysicMaterial_t1304651895_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3049[1] = 
{
	ES3Type_PhysicMaterial_t1304651895_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3050 = { sizeof (ES3Type_PhysicMaterialArray_t1159900901), -1, sizeof(ES3Type_PhysicMaterialArray_t1159900901_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3050[1] = 
{
	ES3Type_PhysicMaterialArray_t1159900901_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3051 = { sizeof (ES3Type_PhysicsMaterial2D_t2800933526), -1, sizeof(ES3Type_PhysicsMaterial2D_t2800933526_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3051[1] = 
{
	ES3Type_PhysicsMaterial2D_t2800933526_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3052 = { sizeof (ES3Type_PhysicsMaterial2DArray_t4060554193), -1, sizeof(ES3Type_PhysicsMaterial2DArray_t4060554193_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3052[1] = 
{
	ES3Type_PhysicsMaterial2DArray_t4060554193_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3053 = { sizeof (ES3Type_Quaternion_t1950346486), -1, sizeof(ES3Type_Quaternion_t1950346486_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3053[1] = 
{
	ES3Type_Quaternion_t1950346486_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3054 = { sizeof (ES3Type_QuaternionArray_t3053990138), -1, sizeof(ES3Type_QuaternionArray_t3053990138_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3054[1] = 
{
	ES3Type_QuaternionArray_t3053990138_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3055 = { sizeof (ES3Type_Rect_t699777296), -1, sizeof(ES3Type_Rect_t699777296_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3055[1] = 
{
	ES3Type_Rect_t699777296_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3056 = { sizeof (ES3Type_RectTransform_t600588258), -1, sizeof(ES3Type_RectTransform_t600588258_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3056[2] = 
{
	ES3Type_RectTransform_t600588258_StaticFields::get_offset_of_Instance_10(),
	ES3Type_RectTransform_t600588258_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3057 = { sizeof (ES3Type_RotationBySpeedModule_t2040755836), -1, sizeof(ES3Type_RotationBySpeedModule_t2040755836_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3057[2] = 
{
	ES3Type_RotationBySpeedModule_t2040755836_StaticFields::get_offset_of_Instance_9(),
	ES3Type_RotationBySpeedModule_t2040755836_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3058 = { sizeof (ES3Type_RotationOverLifetimeModule_t1847753153), -1, sizeof(ES3Type_RotationOverLifetimeModule_t1847753153_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3058[2] = 
{
	ES3Type_RotationOverLifetimeModule_t1847753153_StaticFields::get_offset_of_Instance_9(),
	ES3Type_RotationOverLifetimeModule_t1847753153_StaticFields::get_offset_of_U3CU3Ef__switchU24map17_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3059 = { sizeof (ES3Type_Shader_t1905025538), -1, sizeof(ES3Type_Shader_t1905025538_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3059[1] = 
{
	ES3Type_Shader_t1905025538_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3060 = { sizeof (ES3Type_ShaderArray_t2751257173), -1, sizeof(ES3Type_ShaderArray_t2751257173_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3060[1] = 
{
	ES3Type_ShaderArray_t2751257173_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3061 = { sizeof (ES3Type_ShapeModule_t2773077851), -1, sizeof(ES3Type_ShapeModule_t2773077851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3061[2] = 
{
	ES3Type_ShapeModule_t2773077851_StaticFields::get_offset_of_Instance_9(),
	ES3Type_ShapeModule_t2773077851_StaticFields::get_offset_of_U3CU3Ef__switchU24map18_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3062 = { sizeof (ES3Type_SizeBySpeedModule_t3490101348), -1, sizeof(ES3Type_SizeBySpeedModule_t3490101348_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3062[2] = 
{
	ES3Type_SizeBySpeedModule_t3490101348_StaticFields::get_offset_of_Instance_9(),
	ES3Type_SizeBySpeedModule_t3490101348_StaticFields::get_offset_of_U3CU3Ef__switchU24map19_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3063 = { sizeof (ES3Type_SizeOverLifetimeModule_t489396103), -1, sizeof(ES3Type_SizeOverLifetimeModule_t489396103_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3063[2] = 
{
	ES3Type_SizeOverLifetimeModule_t489396103_StaticFields::get_offset_of_Instance_9(),
	ES3Type_SizeOverLifetimeModule_t489396103_StaticFields::get_offset_of_U3CU3Ef__switchU24map1A_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3064 = { sizeof (ES3Type_SkinnedMeshRenderer_t245045146), -1, sizeof(ES3Type_SkinnedMeshRenderer_t245045146_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3064[2] = 
{
	ES3Type_SkinnedMeshRenderer_t245045146_StaticFields::get_offset_of_Instance_10(),
	ES3Type_SkinnedMeshRenderer_t245045146_StaticFields::get_offset_of_U3CU3Ef__switchU24map1B_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3065 = { sizeof (ES3Type_SkinnedMeshRendererArray_t1106663448), -1, sizeof(ES3Type_SkinnedMeshRendererArray_t1106663448_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3065[1] = 
{
	ES3Type_SkinnedMeshRendererArray_t1106663448_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3066 = { sizeof (ES3Type_Sprite_t2578511106), -1, sizeof(ES3Type_Sprite_t2578511106_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3066[1] = 
{
	ES3Type_Sprite_t2578511106_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3067 = { sizeof (ES3Type_SpriteRenderer_t2906969013), -1, sizeof(ES3Type_SpriteRenderer_t2906969013_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3067[2] = 
{
	ES3Type_SpriteRenderer_t2906969013_StaticFields::get_offset_of_Instance_10(),
	ES3Type_SpriteRenderer_t2906969013_StaticFields::get_offset_of_U3CU3Ef__switchU24map1C_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3068 = { sizeof (ES3Type_SpriteRendererArray_t3807664935), -1, sizeof(ES3Type_SpriteRendererArray_t3807664935_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3068[1] = 
{
	ES3Type_SpriteRendererArray_t3807664935_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3069 = { sizeof (ES3Type_SubEmittersModule_t1160148017), -1, sizeof(ES3Type_SubEmittersModule_t1160148017_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3069[1] = 
{
	ES3Type_SubEmittersModule_t1160148017_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3070 = { sizeof (ES3Type_Texture2D_t3987340876), -1, sizeof(ES3Type_Texture2D_t3987340876_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3070[1] = 
{
	ES3Type_Texture2D_t3987340876_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3071 = { sizeof (ES3Type_Texture2DArray_t2222923391), -1, sizeof(ES3Type_Texture2DArray_t2222923391_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3071[1] = 
{
	ES3Type_Texture2DArray_t2222923391_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3072 = { sizeof (ES3Type_TextureSheetAnimationModule_t3872385314), -1, sizeof(ES3Type_TextureSheetAnimationModule_t3872385314_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3072[2] = 
{
	ES3Type_TextureSheetAnimationModule_t3872385314_StaticFields::get_offset_of_Instance_9(),
	ES3Type_TextureSheetAnimationModule_t3872385314_StaticFields::get_offset_of_U3CU3Ef__switchU24map1D_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3073 = { sizeof (ES3Type_TrailModule_t3348837668), -1, sizeof(ES3Type_TrailModule_t3348837668_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3073[2] = 
{
	ES3Type_TrailModule_t3348837668_StaticFields::get_offset_of_Instance_9(),
	ES3Type_TrailModule_t3348837668_StaticFields::get_offset_of_U3CU3Ef__switchU24map1E_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3074 = { sizeof (ES3Type_TriggerModule_t1545301523), -1, sizeof(ES3Type_TriggerModule_t1545301523_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3074[1] = 
{
	ES3Type_TriggerModule_t1545301523_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3075 = { sizeof (ES3Type_Vector2_t1268287199), -1, sizeof(ES3Type_Vector2_t1268287199_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3075[1] = 
{
	ES3Type_Vector2_t1268287199_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3076 = { sizeof (ES3Type_Vector2Array_t409542914), -1, sizeof(ES3Type_Vector2Array_t409542914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3076[1] = 
{
	ES3Type_Vector2Array_t409542914_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3077 = { sizeof (ES3Type_Vector3_t3224602335), -1, sizeof(ES3Type_Vector3_t3224602335_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3077[1] = 
{
	ES3Type_Vector3_t3224602335_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3078 = { sizeof (ES3Type_Vector3Array_t3805946114), -1, sizeof(ES3Type_Vector3Array_t3805946114_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3078[1] = 
{
	ES3Type_Vector3Array_t3805946114_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3079 = { sizeof (ES3Type_Vector4_t1650624223), -1, sizeof(ES3Type_Vector4_t1650624223_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3079[1] = 
{
	ES3Type_Vector4_t1650624223_StaticFields::get_offset_of_Instance_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3080 = { sizeof (ES3Type_Vector4Array_t1441997058), -1, sizeof(ES3Type_Vector4Array_t1441997058_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3080[1] = 
{
	ES3Type_Vector4Array_t1441997058_StaticFields::get_offset_of_Instance_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3081 = { sizeof (ES3Type_VelocityOverLifetimeModule_t3163033246), -1, sizeof(ES3Type_VelocityOverLifetimeModule_t3163033246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3081[2] = 
{
	ES3Type_VelocityOverLifetimeModule_t3163033246_StaticFields::get_offset_of_Instance_9(),
	ES3Type_VelocityOverLifetimeModule_t3163033246_StaticFields::get_offset_of_U3CU3Ef__switchU24map1F_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3082 = { sizeof (ES3Cloud_t3549563097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3082[2] = 
{
	ES3Cloud_t3549563097::get_offset_of_encoding_6(),
	ES3Cloud_t3549563097::get_offset_of__data_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3083 = { sizeof (U3CSyncU3Ec__Iterator0_t1635105512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3083[7] = 
{
	U3CSyncU3Ec__Iterator0_t1635105512::get_offset_of_settings_0(),
	U3CSyncU3Ec__Iterator0_t1635105512::get_offset_of_user_1(),
	U3CSyncU3Ec__Iterator0_t1635105512::get_offset_of_password_2(),
	U3CSyncU3Ec__Iterator0_t1635105512::get_offset_of_U24this_3(),
	U3CSyncU3Ec__Iterator0_t1635105512::get_offset_of_U24current_4(),
	U3CSyncU3Ec__Iterator0_t1635105512::get_offset_of_U24disposing_5(),
	U3CSyncU3Ec__Iterator0_t1635105512::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3084 = { sizeof (U3CUploadFileU3Ec__Iterator1_t1771474460), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3084[9] = 
{
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_U3CformU3E__0_0(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_settings_1(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_user_2(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_password_3(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_U3CwebRequestU3E__1_4(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_U24this_5(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_U24current_6(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_U24disposing_7(),
	U3CUploadFileU3Ec__Iterator1_t1771474460::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3085 = { sizeof (U3CDownloadFileU3Ec__Iterator2_t3501553842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3085[10] = 
{
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_U3CformU3E__0_0(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_settings_1(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_user_2(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_password_3(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_timestamp_4(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_U3CwebRequestU3E__1_5(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_U24this_6(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_U24current_7(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_U24disposing_8(),
	U3CDownloadFileU3Ec__Iterator2_t3501553842::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3086 = { sizeof (U3CDeleteFileU3Ec__Iterator3_t4009450454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3086[9] = 
{
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_U3CformU3E__0_0(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_settings_1(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_user_2(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_password_3(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_U3CwebRequestU3E__1_4(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_U24this_5(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_U24current_6(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_U24disposing_7(),
	U3CDeleteFileU3Ec__Iterator3_t4009450454::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3087 = { sizeof (U3CDownloadFilenamesU3Ec__Iterator4_t1805858378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3087[8] = 
{
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_U3CformU3E__0_0(),
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_user_1(),
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_password_2(),
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_U3CwebRequestU3E__1_3(),
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_U24this_4(),
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_U24current_5(),
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_U24disposing_6(),
	U3CDownloadFilenamesU3Ec__Iterator4_t1805858378::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3088 = { sizeof (U3CDownloadTimestampU3Ec__Iterator5_t3840275284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3088[9] = 
{
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_U3CformU3E__0_0(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_settings_1(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_user_2(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_password_3(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_U3CwebRequestU3E__1_4(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_U24this_5(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_U24current_6(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_U24disposing_7(),
	U3CDownloadTimestampU3Ec__Iterator5_t3840275284::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3089 = { sizeof (ES3WebClass_t2809229527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3089[6] = 
{
	ES3WebClass_t2809229527::get_offset_of_url_0(),
	ES3WebClass_t2809229527::get_offset_of_apiKey_1(),
	ES3WebClass_t2809229527::get_offset_of_formData_2(),
	ES3WebClass_t2809229527::get_offset_of_isDone_3(),
	ES3WebClass_t2809229527::get_offset_of_error_4(),
	ES3WebClass_t2809229527::get_offset_of_errorCode_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3090 = { sizeof (ES3JSONWriter_t2366476223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3090[2] = 
{
	ES3JSONWriter_t2366476223::get_offset_of_baseWriter_4(),
	ES3JSONWriter_t2366476223::get_offset_of_isFirstProperty_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3091 = { sizeof (ES3Writer_t1475660490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3091[4] = 
{
	ES3Writer_t1475660490::get_offset_of_settings_0(),
	ES3Writer_t1475660490::get_offset_of_keysToDelete_1(),
	ES3Writer_t1475660490::get_offset_of_writeHeaderAndFooter_2(),
	ES3Writer_t1475660490::get_offset_of_overwriteKeys_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3092 = { sizeof (ES3XMLWriter_t156895229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3092[1] = 
{
	ES3XMLWriter_t156895229::get_offset_of_baseWriter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3093 = { sizeof (iTween_t770867771), -1, sizeof(iTween_t770867771_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3093[38] = 
{
	iTween_t770867771_StaticFields::get_offset_of_tweens_2(),
	iTween_t770867771::get_offset_of_id_3(),
	iTween_t770867771::get_offset_of_type_4(),
	iTween_t770867771::get_offset_of_method_5(),
	iTween_t770867771::get_offset_of_easeType_6(),
	iTween_t770867771::get_offset_of_time_7(),
	iTween_t770867771::get_offset_of_delay_8(),
	iTween_t770867771::get_offset_of_loopType_9(),
	iTween_t770867771::get_offset_of_isRunning_10(),
	iTween_t770867771::get_offset_of_isPaused_11(),
	iTween_t770867771::get_offset_of__name_12(),
	iTween_t770867771::get_offset_of_runningTime_13(),
	iTween_t770867771::get_offset_of_percentage_14(),
	iTween_t770867771::get_offset_of_delayStarted_15(),
	iTween_t770867771::get_offset_of_kinematic_16(),
	iTween_t770867771::get_offset_of_isLocal_17(),
	iTween_t770867771::get_offset_of_loop_18(),
	iTween_t770867771::get_offset_of_reverse_19(),
	iTween_t770867771::get_offset_of_wasPaused_20(),
	iTween_t770867771::get_offset_of_physics_21(),
	iTween_t770867771::get_offset_of_tweenArguments_22(),
	iTween_t770867771::get_offset_of_space_23(),
	iTween_t770867771::get_offset_of_ease_24(),
	iTween_t770867771::get_offset_of_apply_25(),
	iTween_t770867771::get_offset_of_audioSource_26(),
	iTween_t770867771::get_offset_of_vector3s_27(),
	iTween_t770867771::get_offset_of_vector2s_28(),
	iTween_t770867771::get_offset_of_colors_29(),
	iTween_t770867771::get_offset_of_floats_30(),
	iTween_t770867771::get_offset_of_rects_31(),
	iTween_t770867771::get_offset_of_path_32(),
	iTween_t770867771::get_offset_of_preUpdate_33(),
	iTween_t770867771::get_offset_of_postUpdate_34(),
	iTween_t770867771::get_offset_of_namedcolorvalue_35(),
	iTween_t770867771::get_offset_of_lastRealTime_36(),
	iTween_t770867771::get_offset_of_useRealTime_37(),
	iTween_t770867771::get_offset_of_thisTransform_38(),
	iTween_t770867771_StaticFields::get_offset_of_U3CU3Ef__switchU24map20_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3094 = { sizeof (EasingFunction_t2767217938), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3095 = { sizeof (ApplyTween_t3327999347), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3096 = { sizeof (EaseType_t2573404410)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3096[34] = 
{
	EaseType_t2573404410::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3097 = { sizeof (LoopType_t369612249)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3097[4] = 
{
	LoopType_t369612249::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3098 = { sizeof (NamedValueColor_t1091574706)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3098[5] = 
{
	NamedValueColor_t1091574706::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3099 = { sizeof (Defaults_t3148213711), -1, sizeof(Defaults_t3148213711_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3099[16] = 
{
	Defaults_t3148213711_StaticFields::get_offset_of_time_0(),
	Defaults_t3148213711_StaticFields::get_offset_of_delay_1(),
	Defaults_t3148213711_StaticFields::get_offset_of_namedColorValue_2(),
	Defaults_t3148213711_StaticFields::get_offset_of_loopType_3(),
	Defaults_t3148213711_StaticFields::get_offset_of_easeType_4(),
	Defaults_t3148213711_StaticFields::get_offset_of_lookSpeed_5(),
	Defaults_t3148213711_StaticFields::get_offset_of_isLocal_6(),
	Defaults_t3148213711_StaticFields::get_offset_of_space_7(),
	Defaults_t3148213711_StaticFields::get_offset_of_orientToPath_8(),
	Defaults_t3148213711_StaticFields::get_offset_of_color_9(),
	Defaults_t3148213711_StaticFields::get_offset_of_updateTimePercentage_10(),
	Defaults_t3148213711_StaticFields::get_offset_of_updateTime_11(),
	Defaults_t3148213711_StaticFields::get_offset_of_cameraFadeDepth_12(),
	Defaults_t3148213711_StaticFields::get_offset_of_lookAhead_13(),
	Defaults_t3148213711_StaticFields::get_offset_of_useRealTime_14(),
	Defaults_t3148213711_StaticFields::get_offset_of_up_15(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
