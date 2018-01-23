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
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.UInt64
struct UInt64_t4134040092;
// System.Int32
struct Int32_t2950945753;
// System.Char
struct Char_t3634460470;
// System.Int64
struct Int64_t3736567304;
// System.Void
struct Void_t1185182177;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.DaylightTime
struct DaylightTime_t2582425773;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Version
struct Version_t3456873960;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t204812840;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t2987026101;
// System.ResolveEventArgs
struct ResolveEventArgs_t1779456501;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Mono.Math.BigInteger
struct BigInteger_t2902905089;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2792010465;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t3423053037;
// System.EventArgs
struct EventArgs_t3591816995;
// System.Reflection.Assembly
struct Assembly_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2886101344;
// System.String[]
struct StringU5BU5D_t1281789340;




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
#ifndef PARSER_T2112344768_H
#define PARSER_T2112344768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t2112344768  : public RuntimeObject
{
public:
	// System.String System.TimeSpan/Parser::_src
	String_t* ____src_0;
	// System.Int32 System.TimeSpan/Parser::_cur
	int32_t ____cur_1;
	// System.Int32 System.TimeSpan/Parser::_length
	int32_t ____length_2;
	// System.Boolean System.TimeSpan/Parser::formatError
	bool ___formatError_3;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ___formatError_3)); }
	inline bool get_formatError_3() const { return ___formatError_3; }
	inline bool* get_address_of_formatError_3() { return &___formatError_3; }
	inline void set_formatError_3(bool value)
	{
		___formatError_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T2112344768_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_5)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3301955079 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3301955079 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3301955079 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3301955079 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3301955079 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3301955079 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3301955079 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3301955079 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3301955079 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3301955079 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3301955079 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3301955079 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3301955079 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3301955079 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef TIMEZONE_T2038656743_H
#define TIMEZONE_T2038656743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t2038656743  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t2038656743_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t2038656743 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t2038656743 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t2038656743 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t2038656743 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T2038656743_H
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef NULLABLE_T1979957197_H
#define NULLABLE_T1979957197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable
struct  Nullable_t1979957197  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_T1979957197_H
#ifndef NUMBERFORMATTER_T1182924621_H
#define NUMBERFORMATTER_T1182924621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter
struct  NumberFormatter_t1182924621  : public RuntimeObject
{
public:
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t2300836069 * ____thread_29;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t435877138 * ____nfi_30;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN_31;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity_32;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_33;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_34;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive_35;
	// System.Char System.NumberFormatter::_specifier
	Il2CppChar ____specifier_36;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision_37;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision_38;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen_39;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset_40;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos_41;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1_42;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2_43;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3_44;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4_45;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t3528271667* ____cbuf_46;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind_47;

public:
	inline static int32_t get_offset_of__thread_29() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____thread_29)); }
	inline Thread_t2300836069 * get__thread_29() const { return ____thread_29; }
	inline Thread_t2300836069 ** get_address_of__thread_29() { return &____thread_29; }
	inline void set__thread_29(Thread_t2300836069 * value)
	{
		____thread_29 = value;
		Il2CppCodeGenWriteBarrier((&____thread_29), value);
	}

	inline static int32_t get_offset_of__nfi_30() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____nfi_30)); }
	inline NumberFormatInfo_t435877138 * get__nfi_30() const { return ____nfi_30; }
	inline NumberFormatInfo_t435877138 ** get_address_of__nfi_30() { return &____nfi_30; }
	inline void set__nfi_30(NumberFormatInfo_t435877138 * value)
	{
		____nfi_30 = value;
		Il2CppCodeGenWriteBarrier((&____nfi_30), value);
	}

	inline static int32_t get_offset_of__NaN_31() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____NaN_31)); }
	inline bool get__NaN_31() const { return ____NaN_31; }
	inline bool* get_address_of__NaN_31() { return &____NaN_31; }
	inline void set__NaN_31(bool value)
	{
		____NaN_31 = value;
	}

	inline static int32_t get_offset_of__infinity_32() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____infinity_32)); }
	inline bool get__infinity_32() const { return ____infinity_32; }
	inline bool* get_address_of__infinity_32() { return &____infinity_32; }
	inline void set__infinity_32(bool value)
	{
		____infinity_32 = value;
	}

	inline static int32_t get_offset_of__isCustomFormat_33() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____isCustomFormat_33)); }
	inline bool get__isCustomFormat_33() const { return ____isCustomFormat_33; }
	inline bool* get_address_of__isCustomFormat_33() { return &____isCustomFormat_33; }
	inline void set__isCustomFormat_33(bool value)
	{
		____isCustomFormat_33 = value;
	}

	inline static int32_t get_offset_of__specifierIsUpper_34() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____specifierIsUpper_34)); }
	inline bool get__specifierIsUpper_34() const { return ____specifierIsUpper_34; }
	inline bool* get_address_of__specifierIsUpper_34() { return &____specifierIsUpper_34; }
	inline void set__specifierIsUpper_34(bool value)
	{
		____specifierIsUpper_34 = value;
	}

	inline static int32_t get_offset_of__positive_35() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____positive_35)); }
	inline bool get__positive_35() const { return ____positive_35; }
	inline bool* get_address_of__positive_35() { return &____positive_35; }
	inline void set__positive_35(bool value)
	{
		____positive_35 = value;
	}

	inline static int32_t get_offset_of__specifier_36() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____specifier_36)); }
	inline Il2CppChar get__specifier_36() const { return ____specifier_36; }
	inline Il2CppChar* get_address_of__specifier_36() { return &____specifier_36; }
	inline void set__specifier_36(Il2CppChar value)
	{
		____specifier_36 = value;
	}

	inline static int32_t get_offset_of__precision_37() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____precision_37)); }
	inline int32_t get__precision_37() const { return ____precision_37; }
	inline int32_t* get_address_of__precision_37() { return &____precision_37; }
	inline void set__precision_37(int32_t value)
	{
		____precision_37 = value;
	}

	inline static int32_t get_offset_of__defPrecision_38() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____defPrecision_38)); }
	inline int32_t get__defPrecision_38() const { return ____defPrecision_38; }
	inline int32_t* get_address_of__defPrecision_38() { return &____defPrecision_38; }
	inline void set__defPrecision_38(int32_t value)
	{
		____defPrecision_38 = value;
	}

	inline static int32_t get_offset_of__digitsLen_39() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____digitsLen_39)); }
	inline int32_t get__digitsLen_39() const { return ____digitsLen_39; }
	inline int32_t* get_address_of__digitsLen_39() { return &____digitsLen_39; }
	inline void set__digitsLen_39(int32_t value)
	{
		____digitsLen_39 = value;
	}

	inline static int32_t get_offset_of__offset_40() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____offset_40)); }
	inline int32_t get__offset_40() const { return ____offset_40; }
	inline int32_t* get_address_of__offset_40() { return &____offset_40; }
	inline void set__offset_40(int32_t value)
	{
		____offset_40 = value;
	}

	inline static int32_t get_offset_of__decPointPos_41() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____decPointPos_41)); }
	inline int32_t get__decPointPos_41() const { return ____decPointPos_41; }
	inline int32_t* get_address_of__decPointPos_41() { return &____decPointPos_41; }
	inline void set__decPointPos_41(int32_t value)
	{
		____decPointPos_41 = value;
	}

	inline static int32_t get_offset_of__val1_42() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val1_42)); }
	inline uint32_t get__val1_42() const { return ____val1_42; }
	inline uint32_t* get_address_of__val1_42() { return &____val1_42; }
	inline void set__val1_42(uint32_t value)
	{
		____val1_42 = value;
	}

	inline static int32_t get_offset_of__val2_43() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val2_43)); }
	inline uint32_t get__val2_43() const { return ____val2_43; }
	inline uint32_t* get_address_of__val2_43() { return &____val2_43; }
	inline void set__val2_43(uint32_t value)
	{
		____val2_43 = value;
	}

	inline static int32_t get_offset_of__val3_44() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val3_44)); }
	inline uint32_t get__val3_44() const { return ____val3_44; }
	inline uint32_t* get_address_of__val3_44() { return &____val3_44; }
	inline void set__val3_44(uint32_t value)
	{
		____val3_44 = value;
	}

	inline static int32_t get_offset_of__val4_45() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val4_45)); }
	inline uint32_t get__val4_45() const { return ____val4_45; }
	inline uint32_t* get_address_of__val4_45() { return &____val4_45; }
	inline void set__val4_45(uint32_t value)
	{
		____val4_45 = value;
	}

	inline static int32_t get_offset_of__cbuf_46() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____cbuf_46)); }
	inline CharU5BU5D_t3528271667* get__cbuf_46() const { return ____cbuf_46; }
	inline CharU5BU5D_t3528271667** get_address_of__cbuf_46() { return &____cbuf_46; }
	inline void set__cbuf_46(CharU5BU5D_t3528271667* value)
	{
		____cbuf_46 = value;
		Il2CppCodeGenWriteBarrier((&____cbuf_46), value);
	}

	inline static int32_t get_offset_of__ind_47() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____ind_47)); }
	inline int32_t get__ind_47() const { return ____ind_47; }
	inline int32_t* get_address_of__ind_47() { return &____ind_47; }
	inline void set__ind_47(int32_t value)
	{
		____ind_47 = value;
	}
};

struct NumberFormatter_t1182924621_StaticFields
{
public:
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable_23;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable_24;
	// System.Char* System.NumberFormatter::DigitLowerTable
	Il2CppChar* ___DigitLowerTable_25;
	// System.Char* System.NumberFormatter::DigitUpperTable
	Il2CppChar* ___DigitUpperTable_26;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList_27;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits_28;

public:
	inline static int32_t get_offset_of_MantissaBitsTable_23() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___MantissaBitsTable_23)); }
	inline uint64_t* get_MantissaBitsTable_23() const { return ___MantissaBitsTable_23; }
	inline uint64_t** get_address_of_MantissaBitsTable_23() { return &___MantissaBitsTable_23; }
	inline void set_MantissaBitsTable_23(uint64_t* value)
	{
		___MantissaBitsTable_23 = value;
	}

	inline static int32_t get_offset_of_TensExponentTable_24() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___TensExponentTable_24)); }
	inline int32_t* get_TensExponentTable_24() const { return ___TensExponentTable_24; }
	inline int32_t** get_address_of_TensExponentTable_24() { return &___TensExponentTable_24; }
	inline void set_TensExponentTable_24(int32_t* value)
	{
		___TensExponentTable_24 = value;
	}

	inline static int32_t get_offset_of_DigitLowerTable_25() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___DigitLowerTable_25)); }
	inline Il2CppChar* get_DigitLowerTable_25() const { return ___DigitLowerTable_25; }
	inline Il2CppChar** get_address_of_DigitLowerTable_25() { return &___DigitLowerTable_25; }
	inline void set_DigitLowerTable_25(Il2CppChar* value)
	{
		___DigitLowerTable_25 = value;
	}

	inline static int32_t get_offset_of_DigitUpperTable_26() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___DigitUpperTable_26)); }
	inline Il2CppChar* get_DigitUpperTable_26() const { return ___DigitUpperTable_26; }
	inline Il2CppChar** get_address_of_DigitUpperTable_26() { return &___DigitUpperTable_26; }
	inline void set_DigitUpperTable_26(Il2CppChar* value)
	{
		___DigitUpperTable_26 = value;
	}

	inline static int32_t get_offset_of_TenPowersList_27() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___TenPowersList_27)); }
	inline int64_t* get_TenPowersList_27() const { return ___TenPowersList_27; }
	inline int64_t** get_address_of_TenPowersList_27() { return &___TenPowersList_27; }
	inline void set_TenPowersList_27(int64_t* value)
	{
		___TenPowersList_27 = value;
	}

	inline static int32_t get_offset_of_DecHexDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___DecHexDigits_28)); }
	inline int32_t* get_DecHexDigits_28() const { return ___DecHexDigits_28; }
	inline int32_t** get_address_of_DecHexDigits_28() { return &___DecHexDigits_28; }
	inline void set_DecHexDigits_28(int32_t* value)
	{
		___DecHexDigits_28 = value;
	}
};

struct NumberFormatter_t1182924621_ThreadStaticFields
{
public:
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t1182924621 * ___threadNumberFormatter_48;

public:
	inline static int32_t get_offset_of_threadNumberFormatter_48() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_ThreadStaticFields, ___threadNumberFormatter_48)); }
	inline NumberFormatter_t1182924621 * get_threadNumberFormatter_48() const { return ___threadNumberFormatter_48; }
	inline NumberFormatter_t1182924621 ** get_address_of_threadNumberFormatter_48() { return &___threadNumberFormatter_48; }
	inline void set_threadNumberFormatter_48(NumberFormatter_t1182924621 * value)
	{
		___threadNumberFormatter_48 = value;
		Il2CppCodeGenWriteBarrier((&___threadNumberFormatter_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATTER_T1182924621_H
#ifndef CUSTOMINFO_T435179798_H
#define CUSTOMINFO_T435179798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter/CustomInfo
struct  CustomInfo_t435179798  : public RuntimeObject
{
public:
	// System.Boolean System.NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean System.NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean System.NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 System.NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 System.NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 System.NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;

public:
	inline static int32_t get_offset_of_UseGroup_0() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___UseGroup_0)); }
	inline bool get_UseGroup_0() const { return ___UseGroup_0; }
	inline bool* get_address_of_UseGroup_0() { return &___UseGroup_0; }
	inline void set_UseGroup_0(bool value)
	{
		___UseGroup_0 = value;
	}

	inline static int32_t get_offset_of_DecimalDigits_1() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DecimalDigits_1)); }
	inline int32_t get_DecimalDigits_1() const { return ___DecimalDigits_1; }
	inline int32_t* get_address_of_DecimalDigits_1() { return &___DecimalDigits_1; }
	inline void set_DecimalDigits_1(int32_t value)
	{
		___DecimalDigits_1 = value;
	}

	inline static int32_t get_offset_of_DecimalPointPos_2() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DecimalPointPos_2)); }
	inline int32_t get_DecimalPointPos_2() const { return ___DecimalPointPos_2; }
	inline int32_t* get_address_of_DecimalPointPos_2() { return &___DecimalPointPos_2; }
	inline void set_DecimalPointPos_2(int32_t value)
	{
		___DecimalPointPos_2 = value;
	}

	inline static int32_t get_offset_of_DecimalTailSharpDigits_3() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DecimalTailSharpDigits_3)); }
	inline int32_t get_DecimalTailSharpDigits_3() const { return ___DecimalTailSharpDigits_3; }
	inline int32_t* get_address_of_DecimalTailSharpDigits_3() { return &___DecimalTailSharpDigits_3; }
	inline void set_DecimalTailSharpDigits_3(int32_t value)
	{
		___DecimalTailSharpDigits_3 = value;
	}

	inline static int32_t get_offset_of_IntegerDigits_4() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___IntegerDigits_4)); }
	inline int32_t get_IntegerDigits_4() const { return ___IntegerDigits_4; }
	inline int32_t* get_address_of_IntegerDigits_4() { return &___IntegerDigits_4; }
	inline void set_IntegerDigits_4(int32_t value)
	{
		___IntegerDigits_4 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadSharpDigits_5() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___IntegerHeadSharpDigits_5)); }
	inline int32_t get_IntegerHeadSharpDigits_5() const { return ___IntegerHeadSharpDigits_5; }
	inline int32_t* get_address_of_IntegerHeadSharpDigits_5() { return &___IntegerHeadSharpDigits_5; }
	inline void set_IntegerHeadSharpDigits_5(int32_t value)
	{
		___IntegerHeadSharpDigits_5 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadPos_6() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___IntegerHeadPos_6)); }
	inline int32_t get_IntegerHeadPos_6() const { return ___IntegerHeadPos_6; }
	inline int32_t* get_address_of_IntegerHeadPos_6() { return &___IntegerHeadPos_6; }
	inline void set_IntegerHeadPos_6(int32_t value)
	{
		___IntegerHeadPos_6 = value;
	}

	inline static int32_t get_offset_of_UseExponent_7() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___UseExponent_7)); }
	inline bool get_UseExponent_7() const { return ___UseExponent_7; }
	inline bool* get_address_of_UseExponent_7() { return &___UseExponent_7; }
	inline void set_UseExponent_7(bool value)
	{
		___UseExponent_7 = value;
	}

	inline static int32_t get_offset_of_ExponentDigits_8() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___ExponentDigits_8)); }
	inline int32_t get_ExponentDigits_8() const { return ___ExponentDigits_8; }
	inline int32_t* get_address_of_ExponentDigits_8() { return &___ExponentDigits_8; }
	inline void set_ExponentDigits_8(int32_t value)
	{
		___ExponentDigits_8 = value;
	}

	inline static int32_t get_offset_of_ExponentTailSharpDigits_9() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___ExponentTailSharpDigits_9)); }
	inline int32_t get_ExponentTailSharpDigits_9() const { return ___ExponentTailSharpDigits_9; }
	inline int32_t* get_address_of_ExponentTailSharpDigits_9() { return &___ExponentTailSharpDigits_9; }
	inline void set_ExponentTailSharpDigits_9(int32_t value)
	{
		___ExponentTailSharpDigits_9 = value;
	}

	inline static int32_t get_offset_of_ExponentNegativeSignOnly_10() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___ExponentNegativeSignOnly_10)); }
	inline bool get_ExponentNegativeSignOnly_10() const { return ___ExponentNegativeSignOnly_10; }
	inline bool* get_address_of_ExponentNegativeSignOnly_10() { return &___ExponentNegativeSignOnly_10; }
	inline void set_ExponentNegativeSignOnly_10(bool value)
	{
		___ExponentNegativeSignOnly_10 = value;
	}

	inline static int32_t get_offset_of_DividePlaces_11() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DividePlaces_11)); }
	inline int32_t get_DividePlaces_11() const { return ___DividePlaces_11; }
	inline int32_t* get_address_of_DividePlaces_11() { return &___DividePlaces_11; }
	inline void set_DividePlaces_11(int32_t value)
	{
		___DividePlaces_11 = value;
	}

	inline static int32_t get_offset_of_Percents_12() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___Percents_12)); }
	inline int32_t get_Percents_12() const { return ___Percents_12; }
	inline int32_t* get_address_of_Percents_12() { return &___Percents_12; }
	inline void set_Percents_12(int32_t value)
	{
		___Percents_12 = value;
	}

	inline static int32_t get_offset_of_Permilles_13() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___Permilles_13)); }
	inline int32_t get_Permilles_13() const { return ___Permilles_13; }
	inline int32_t* get_address_of_Permilles_13() { return &___Permilles_13; }
	inline void set_Permilles_13(int32_t value)
	{
		___Permilles_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINFO_T435179798_H
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
#ifndef U24ARRAYTYPEU24380_T3540195945_H
#define U24ARRAYTYPEU24380_T3540195945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$380
struct  U24ArrayTypeU24380_t3540195945 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24380_t3540195945__padding[380];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24380_T3540195945_H
#ifndef U24ARRAYTYPEU24128_T4289081659_H
#define U24ARRAYTYPEU24128_T4289081659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t4289081659 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t4289081659__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T4289081659_H
#ifndef U24ARRAYTYPEU241668_T760361261_H
#define U24ARRAYTYPEU241668_T760361261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1668
struct  U24ArrayTypeU241668_t760361261 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241668_t760361261__padding[1668];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241668_T760361261_H
#ifndef U24ARRAYTYPEU24256_T1929481982_H
#define U24ARRAYTYPEU24256_T1929481982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481982 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t1929481982__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481982_H
#ifndef U24ARRAYTYPEU242048_T3505032960_H
#define U24ARRAYTYPEU242048_T3505032960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t3505032960 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t3505032960__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T3505032960_H
#ifndef U24ARRAYTYPEU2496_T2898536284_H
#define U24ARRAYTYPEU2496_T2898536284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t2898536284 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t2898536284__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T2898536284_H
#ifndef U24ARRAYTYPEU24124_T4289081647_H
#define U24ARRAYTYPEU24124_T4289081647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t4289081647 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t4289081647__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T4289081647_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2886101344  : public EventArgs_t3591816995
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef U24ARRAYTYPEU2484_T950115319_H
#define U24ARRAYTYPEU2484_T950115319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$84
struct  U24ArrayTypeU2484_t950115319 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2484_t950115319__padding[84];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2484_T950115319_H
#ifndef U24ARRAYTYPEU248_T3244137463_H
#define U24ARRAYTYPEU248_T3244137463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3244137463 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3244137463__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3244137463_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef U24ARRAYTYPEU24136_T1950429485_H
#define U24ARRAYTYPEU24136_T1950429485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1950429485 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t1950429485__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1950429485_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef U24ARRAYTYPEU241024_T3907531057_H
#define U24ARRAYTYPEU241024_T3907531057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3907531057 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t3907531057__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3907531057_H
#ifndef U24ARRAYTYPEU24640_T2298765680_H
#define U24ARRAYTYPEU24640_T2298765680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2298765680 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t2298765680__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2298765680_H
#ifndef U24ARRAYTYPEU24160_T758788403_H
#define U24ARRAYTYPEU24160_T758788403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$160
struct  U24ArrayTypeU24160_t758788403 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24160_t758788403__padding[160];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24160_T758788403_H
#ifndef U24ARRAYTYPEU2436_T122598762_H
#define U24ARRAYTYPEU2436_T122598762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$36
struct  U24ArrayTypeU2436_t122598762 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2436_t122598762__padding[36];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2436_T122598762_H
#ifndef ORDINALCOMPARER_T3407243298_H
#define ORDINALCOMPARER_T3407243298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3407243298  : public StringComparer_t3301955079
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3407243298, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3407243298_H
#ifndef CULTUREAWARECOMPARER_T30646139_H
#define CULTUREAWARECOMPARER_T30646139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t30646139  : public StringComparer_t3301955079
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1092934962 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t30646139, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t30646139, ____compareInfo_5)); }
	inline CompareInfo_t1092934962 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t1092934962 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t1092934962 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T30646139_H
#ifndef U24ARRAYTYPEU2412_T2490092596_H
#define U24ARRAYTYPEU2412_T2490092596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2490092596 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2490092596__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2490092596_H
#ifndef U24ARRAYTYPEU243132_T2732071528_H
#define U24ARRAYTYPEU243132_T2732071528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t2732071528 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t2732071528__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T2732071528_H
#ifndef STATHREADATTRIBUTE_T2720218673_H
#define STATHREADATTRIBUTE_T2720218673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.STAThreadAttribute
struct  STAThreadAttribute_t2720218673  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATHREADATTRIBUTE_T2720218673_H
#ifndef U24ARRAYTYPEU2420_T1704471045_H
#define U24ARRAYTYPEU2420_T1704471045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t1704471045 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t1704471045__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T1704471045_H
#ifndef RESOLVEEVENTARGS_T1779456501_H
#define RESOLVEEVENTARGS_T1779456501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t1779456501  : public EventArgs_t3591816995
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t1779456501, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T1779456501_H
#ifndef U24ARRAYTYPEU2432_T3652892010_H
#define U24ARRAYTYPEU2432_T3652892010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t3652892010 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t3652892010__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T3652892010_H
#ifndef U24ARRAYTYPEU2464_T499776625_H
#define U24ARRAYTYPEU2464_T499776625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t499776625 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t499776625__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T499776625_H
#ifndef U24ARRAYTYPEU2452_T520724128_H
#define U24ARRAYTYPEU2452_T520724128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t520724128 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t520724128__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T520724128_H
#ifndef U24ARRAYTYPEU2448_T1337922363_H
#define U24ARRAYTYPEU2448_T1337922363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t1337922363 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t1337922363__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T1337922363_H
#ifndef U24ARRAYTYPEU24120_T4289081651_H
#define U24ARRAYTYPEU24120_T4289081651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t4289081651 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t4289081651__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T4289081651_H
#ifndef U24ARRAYTYPEU2456_T1285398176_H
#define U24ARRAYTYPEU2456_T1285398176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t1285398176 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t1285398176__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T1285398176_H
#ifndef U24ARRAYTYPEU2424_T2469145093_H
#define U24ARRAYTYPEU2424_T2469145093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t2469145093 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t2469145093__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T2469145093_H
#ifndef U24ARRAYTYPEU2416_T3254766644_H
#define U24ARRAYTYPEU2416_T3254766644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t3254766644 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t3254766644__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T3254766644_H
#ifndef U24ARRAYTYPEU241452_T377631024_H
#define U24ARRAYTYPEU241452_T377631024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1452
struct  U24ArrayTypeU241452_t377631024 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241452_t377631024__padding[1452];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241452_T377631024_H
#ifndef U24ARRAYTYPEU242100_T1165856516_H
#define U24ARRAYTYPEU242100_T1165856516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2100
struct  U24ArrayTypeU242100_t1165856516 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242100_t1165856516__padding[2100];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242100_T1165856516_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef U24ARRAYTYPEU2472_T1683523542_H
#define U24ARRAYTYPEU2472_T1683523542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t1683523542 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t1683523542__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T1683523542_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef U24ARRAYTYPEU2440_T2867270459_H
#define U24ARRAYTYPEU2440_T2867270459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$40
struct  U24ArrayTypeU2440_t2867270459 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2440_t2867270459__padding[40];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2440_T2867270459_H
#ifndef THREADSTATICATTRIBUTE_T3840787420_H
#define THREADSTATICATTRIBUTE_T3840787420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3840787420  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3840787420_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255361  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t1285398176  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$40 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU2440_t2867270459  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$40 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU2440_t2867270459  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$36 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU2436_t122598762  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$36 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU2436_t122598762  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU24120_t4289081651  ___U24U24fieldU2D11_11;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-12
	U24ArrayTypeU24120_t4289081651  ___U24U24fieldU2D12_12;
	// <PrivateImplementationDetails>/$ArrayType$36 <PrivateImplementationDetails>::$$field-13
	U24ArrayTypeU2436_t122598762  ___U24U24fieldU2D13_13;
	// <PrivateImplementationDetails>/$ArrayType$36 <PrivateImplementationDetails>::$$field-14
	U24ArrayTypeU2436_t122598762  ___U24U24fieldU2D14_14;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t2732071528  ___U24U24fieldU2D15_15;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t1704471045  ___U24U24fieldU2D16_16;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t3652892010  ___U24U24fieldU2D17_17;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t1337922363  ___U24U24fieldU2D18_18;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D19_19;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D20_20;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D21_21;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D22_22;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D23_23;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D24_24;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D25_25;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D26_26;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t1950429485  ___U24U24fieldU2D27_27;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-28
	U24ArrayTypeU248_t3244137463  ___U24U24fieldU2D28_28;
	// <PrivateImplementationDetails>/$ArrayType$84 <PrivateImplementationDetails>::$$field-29
	U24ArrayTypeU2484_t950115319  ___U24U24fieldU2D29_29;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t1683523542  ___U24U24fieldU2D30_30;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t3244137463  ___U24U24fieldU2D31_31;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t1704471045  ___U24U24fieldU2D32_32;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D33_33;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t4289081647  ___U24U24fieldU2D34_34;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t3652892010  ___U24U24fieldU2D35_35;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t2898536284  ___U24U24fieldU2D36_36;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t3505032960  ___U24U24fieldU2D37_37;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t1285398176  ___U24U24fieldU2D38_38;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D39_39;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t1337922363  ___U24U24fieldU2D40_40;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t3505032960  ___U24U24fieldU2D41_41;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t3505032960  ___U24U24fieldU2D42_42;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D43_43;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D44_44;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t4289081651  ___U24U24fieldU2D45_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D46_46;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D47_47;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D48_48;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D49_49;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D50_50;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D51_51;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D52_52;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D53_53;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D54_54;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D55_55;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D56_56;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t2298765680  ___U24U24fieldU2D57_57;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-58
	U24ArrayTypeU2496_t2898536284  ___U24U24fieldU2D58_58;
	// <PrivateImplementationDetails>/$ArrayType$160 <PrivateImplementationDetails>::$$field-59
	U24ArrayTypeU24160_t758788403  ___U24U24fieldU2D59_59;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D60_60;
	// <PrivateImplementationDetails>/$ArrayType$380 <PrivateImplementationDetails>::$$field-61
	U24ArrayTypeU24380_t3540195945  ___U24U24fieldU2D61_61;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t4289081659  ___U24U24fieldU2D62_62;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D63_63;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t520724128  ___U24U24fieldU2D64_64;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t520724128  ___U24U24fieldU2D65_65;
	// <PrivateImplementationDetails>/$ArrayType$1668 <PrivateImplementationDetails>::$$field-66
	U24ArrayTypeU241668_t760361261  ___U24U24fieldU2D66_66;
	// <PrivateImplementationDetails>/$ArrayType$2100 <PrivateImplementationDetails>::$$field-67
	U24ArrayTypeU242100_t1165856516  ___U24U24fieldU2D67_67;
	// <PrivateImplementationDetails>/$ArrayType$1452 <PrivateImplementationDetails>::$$field-68
	U24ArrayTypeU241452_t377631024  ___U24U24fieldU2D68_68;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t1285398176  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t1285398176 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t1285398176  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU2440_t2867270459  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU2440_t2867270459 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU2440_t2867270459  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU2440_t2867270459  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU2440_t2867270459 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU2440_t2867270459  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU2436_t122598762  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU2436_t122598762 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU2436_t122598762  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU2436_t122598762  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU2436_t122598762 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU2436_t122598762  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU24120_t4289081651  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU24120_t4289081651 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU24120_t4289081651  value)
	{
		___U24U24fieldU2D11_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D12_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D12_12)); }
	inline U24ArrayTypeU24120_t4289081651  get_U24U24fieldU2D12_12() const { return ___U24U24fieldU2D12_12; }
	inline U24ArrayTypeU24120_t4289081651 * get_address_of_U24U24fieldU2D12_12() { return &___U24U24fieldU2D12_12; }
	inline void set_U24U24fieldU2D12_12(U24ArrayTypeU24120_t4289081651  value)
	{
		___U24U24fieldU2D12_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D13_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D13_13)); }
	inline U24ArrayTypeU2436_t122598762  get_U24U24fieldU2D13_13() const { return ___U24U24fieldU2D13_13; }
	inline U24ArrayTypeU2436_t122598762 * get_address_of_U24U24fieldU2D13_13() { return &___U24U24fieldU2D13_13; }
	inline void set_U24U24fieldU2D13_13(U24ArrayTypeU2436_t122598762  value)
	{
		___U24U24fieldU2D13_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D14_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D14_14)); }
	inline U24ArrayTypeU2436_t122598762  get_U24U24fieldU2D14_14() const { return ___U24U24fieldU2D14_14; }
	inline U24ArrayTypeU2436_t122598762 * get_address_of_U24U24fieldU2D14_14() { return &___U24U24fieldU2D14_14; }
	inline void set_U24U24fieldU2D14_14(U24ArrayTypeU2436_t122598762  value)
	{
		___U24U24fieldU2D14_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D15_15)); }
	inline U24ArrayTypeU243132_t2732071528  get_U24U24fieldU2D15_15() const { return ___U24U24fieldU2D15_15; }
	inline U24ArrayTypeU243132_t2732071528 * get_address_of_U24U24fieldU2D15_15() { return &___U24U24fieldU2D15_15; }
	inline void set_U24U24fieldU2D15_15(U24ArrayTypeU243132_t2732071528  value)
	{
		___U24U24fieldU2D15_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D16_16)); }
	inline U24ArrayTypeU2420_t1704471045  get_U24U24fieldU2D16_16() const { return ___U24U24fieldU2D16_16; }
	inline U24ArrayTypeU2420_t1704471045 * get_address_of_U24U24fieldU2D16_16() { return &___U24U24fieldU2D16_16; }
	inline void set_U24U24fieldU2D16_16(U24ArrayTypeU2420_t1704471045  value)
	{
		___U24U24fieldU2D16_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D17_17)); }
	inline U24ArrayTypeU2432_t3652892010  get_U24U24fieldU2D17_17() const { return ___U24U24fieldU2D17_17; }
	inline U24ArrayTypeU2432_t3652892010 * get_address_of_U24U24fieldU2D17_17() { return &___U24U24fieldU2D17_17; }
	inline void set_U24U24fieldU2D17_17(U24ArrayTypeU2432_t3652892010  value)
	{
		___U24U24fieldU2D17_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D18_18)); }
	inline U24ArrayTypeU2448_t1337922363  get_U24U24fieldU2D18_18() const { return ___U24U24fieldU2D18_18; }
	inline U24ArrayTypeU2448_t1337922363 * get_address_of_U24U24fieldU2D18_18() { return &___U24U24fieldU2D18_18; }
	inline void set_U24U24fieldU2D18_18(U24ArrayTypeU2448_t1337922363  value)
	{
		___U24U24fieldU2D18_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D19_19)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D19_19() const { return ___U24U24fieldU2D19_19; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D19_19() { return &___U24U24fieldU2D19_19; }
	inline void set_U24U24fieldU2D19_19(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D19_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D20_20)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D20_20() const { return ___U24U24fieldU2D20_20; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D20_20() { return &___U24U24fieldU2D20_20; }
	inline void set_U24U24fieldU2D20_20(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D20_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D21_21)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D21_21() const { return ___U24U24fieldU2D21_21; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D21_21() { return &___U24U24fieldU2D21_21; }
	inline void set_U24U24fieldU2D21_21(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D21_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D22_22)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D22_22() const { return ___U24U24fieldU2D22_22; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D22_22() { return &___U24U24fieldU2D22_22; }
	inline void set_U24U24fieldU2D22_22(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D22_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D23_23)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D23_23() const { return ___U24U24fieldU2D23_23; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D23_23() { return &___U24U24fieldU2D23_23; }
	inline void set_U24U24fieldU2D23_23(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D23_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D24_24)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D24_24() const { return ___U24U24fieldU2D24_24; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D24_24() { return &___U24U24fieldU2D24_24; }
	inline void set_U24U24fieldU2D24_24(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D24_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D25_25)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D25_25() const { return ___U24U24fieldU2D25_25; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D25_25() { return &___U24U24fieldU2D25_25; }
	inline void set_U24U24fieldU2D25_25(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D25_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D26_26)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D26_26() const { return ___U24U24fieldU2D26_26; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D26_26() { return &___U24U24fieldU2D26_26; }
	inline void set_U24U24fieldU2D26_26(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D26_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D27_27)); }
	inline U24ArrayTypeU24136_t1950429485  get_U24U24fieldU2D27_27() const { return ___U24U24fieldU2D27_27; }
	inline U24ArrayTypeU24136_t1950429485 * get_address_of_U24U24fieldU2D27_27() { return &___U24U24fieldU2D27_27; }
	inline void set_U24U24fieldU2D27_27(U24ArrayTypeU24136_t1950429485  value)
	{
		___U24U24fieldU2D27_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D28_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D28_28)); }
	inline U24ArrayTypeU248_t3244137463  get_U24U24fieldU2D28_28() const { return ___U24U24fieldU2D28_28; }
	inline U24ArrayTypeU248_t3244137463 * get_address_of_U24U24fieldU2D28_28() { return &___U24U24fieldU2D28_28; }
	inline void set_U24U24fieldU2D28_28(U24ArrayTypeU248_t3244137463  value)
	{
		___U24U24fieldU2D28_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D29_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D29_29)); }
	inline U24ArrayTypeU2484_t950115319  get_U24U24fieldU2D29_29() const { return ___U24U24fieldU2D29_29; }
	inline U24ArrayTypeU2484_t950115319 * get_address_of_U24U24fieldU2D29_29() { return &___U24U24fieldU2D29_29; }
	inline void set_U24U24fieldU2D29_29(U24ArrayTypeU2484_t950115319  value)
	{
		___U24U24fieldU2D29_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D30_30)); }
	inline U24ArrayTypeU2472_t1683523542  get_U24U24fieldU2D30_30() const { return ___U24U24fieldU2D30_30; }
	inline U24ArrayTypeU2472_t1683523542 * get_address_of_U24U24fieldU2D30_30() { return &___U24U24fieldU2D30_30; }
	inline void set_U24U24fieldU2D30_30(U24ArrayTypeU2472_t1683523542  value)
	{
		___U24U24fieldU2D30_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D31_31)); }
	inline U24ArrayTypeU248_t3244137463  get_U24U24fieldU2D31_31() const { return ___U24U24fieldU2D31_31; }
	inline U24ArrayTypeU248_t3244137463 * get_address_of_U24U24fieldU2D31_31() { return &___U24U24fieldU2D31_31; }
	inline void set_U24U24fieldU2D31_31(U24ArrayTypeU248_t3244137463  value)
	{
		___U24U24fieldU2D31_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D32_32)); }
	inline U24ArrayTypeU2420_t1704471045  get_U24U24fieldU2D32_32() const { return ___U24U24fieldU2D32_32; }
	inline U24ArrayTypeU2420_t1704471045 * get_address_of_U24U24fieldU2D32_32() { return &___U24U24fieldU2D32_32; }
	inline void set_U24U24fieldU2D32_32(U24ArrayTypeU2420_t1704471045  value)
	{
		___U24U24fieldU2D32_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D33_33)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D33_33() const { return ___U24U24fieldU2D33_33; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D33_33() { return &___U24U24fieldU2D33_33; }
	inline void set_U24U24fieldU2D33_33(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D33_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D34_34)); }
	inline U24ArrayTypeU24124_t4289081647  get_U24U24fieldU2D34_34() const { return ___U24U24fieldU2D34_34; }
	inline U24ArrayTypeU24124_t4289081647 * get_address_of_U24U24fieldU2D34_34() { return &___U24U24fieldU2D34_34; }
	inline void set_U24U24fieldU2D34_34(U24ArrayTypeU24124_t4289081647  value)
	{
		___U24U24fieldU2D34_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D35_35)); }
	inline U24ArrayTypeU2432_t3652892010  get_U24U24fieldU2D35_35() const { return ___U24U24fieldU2D35_35; }
	inline U24ArrayTypeU2432_t3652892010 * get_address_of_U24U24fieldU2D35_35() { return &___U24U24fieldU2D35_35; }
	inline void set_U24U24fieldU2D35_35(U24ArrayTypeU2432_t3652892010  value)
	{
		___U24U24fieldU2D35_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D36_36)); }
	inline U24ArrayTypeU2496_t2898536284  get_U24U24fieldU2D36_36() const { return ___U24U24fieldU2D36_36; }
	inline U24ArrayTypeU2496_t2898536284 * get_address_of_U24U24fieldU2D36_36() { return &___U24U24fieldU2D36_36; }
	inline void set_U24U24fieldU2D36_36(U24ArrayTypeU2496_t2898536284  value)
	{
		___U24U24fieldU2D36_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D37_37)); }
	inline U24ArrayTypeU242048_t3505032960  get_U24U24fieldU2D37_37() const { return ___U24U24fieldU2D37_37; }
	inline U24ArrayTypeU242048_t3505032960 * get_address_of_U24U24fieldU2D37_37() { return &___U24U24fieldU2D37_37; }
	inline void set_U24U24fieldU2D37_37(U24ArrayTypeU242048_t3505032960  value)
	{
		___U24U24fieldU2D37_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D38_38)); }
	inline U24ArrayTypeU2456_t1285398176  get_U24U24fieldU2D38_38() const { return ___U24U24fieldU2D38_38; }
	inline U24ArrayTypeU2456_t1285398176 * get_address_of_U24U24fieldU2D38_38() { return &___U24U24fieldU2D38_38; }
	inline void set_U24U24fieldU2D38_38(U24ArrayTypeU2456_t1285398176  value)
	{
		___U24U24fieldU2D38_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D39_39)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D39_39() const { return ___U24U24fieldU2D39_39; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D39_39() { return &___U24U24fieldU2D39_39; }
	inline void set_U24U24fieldU2D39_39(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D39_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D40_40)); }
	inline U24ArrayTypeU2448_t1337922363  get_U24U24fieldU2D40_40() const { return ___U24U24fieldU2D40_40; }
	inline U24ArrayTypeU2448_t1337922363 * get_address_of_U24U24fieldU2D40_40() { return &___U24U24fieldU2D40_40; }
	inline void set_U24U24fieldU2D40_40(U24ArrayTypeU2448_t1337922363  value)
	{
		___U24U24fieldU2D40_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D41_41)); }
	inline U24ArrayTypeU242048_t3505032960  get_U24U24fieldU2D41_41() const { return ___U24U24fieldU2D41_41; }
	inline U24ArrayTypeU242048_t3505032960 * get_address_of_U24U24fieldU2D41_41() { return &___U24U24fieldU2D41_41; }
	inline void set_U24U24fieldU2D41_41(U24ArrayTypeU242048_t3505032960  value)
	{
		___U24U24fieldU2D41_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D42_42)); }
	inline U24ArrayTypeU242048_t3505032960  get_U24U24fieldU2D42_42() const { return ___U24U24fieldU2D42_42; }
	inline U24ArrayTypeU242048_t3505032960 * get_address_of_U24U24fieldU2D42_42() { return &___U24U24fieldU2D42_42; }
	inline void set_U24U24fieldU2D42_42(U24ArrayTypeU242048_t3505032960  value)
	{
		___U24U24fieldU2D42_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D43_43)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D43_43() const { return ___U24U24fieldU2D43_43; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D43_43() { return &___U24U24fieldU2D43_43; }
	inline void set_U24U24fieldU2D43_43(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D43_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D44_44)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D44_44() const { return ___U24U24fieldU2D44_44; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D44_44() { return &___U24U24fieldU2D44_44; }
	inline void set_U24U24fieldU2D44_44(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D44_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D45_45)); }
	inline U24ArrayTypeU24120_t4289081651  get_U24U24fieldU2D45_45() const { return ___U24U24fieldU2D45_45; }
	inline U24ArrayTypeU24120_t4289081651 * get_address_of_U24U24fieldU2D45_45() { return &___U24U24fieldU2D45_45; }
	inline void set_U24U24fieldU2D45_45(U24ArrayTypeU24120_t4289081651  value)
	{
		___U24U24fieldU2D45_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D46_46)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D46_46() const { return ___U24U24fieldU2D46_46; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D46_46() { return &___U24U24fieldU2D46_46; }
	inline void set_U24U24fieldU2D46_46(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D46_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D47_47)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D47_47() const { return ___U24U24fieldU2D47_47; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D47_47() { return &___U24U24fieldU2D47_47; }
	inline void set_U24U24fieldU2D47_47(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D47_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D48_48)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D48_48() const { return ___U24U24fieldU2D48_48; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D48_48() { return &___U24U24fieldU2D48_48; }
	inline void set_U24U24fieldU2D48_48(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D48_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D49_49)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D49_49() const { return ___U24U24fieldU2D49_49; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D49_49() { return &___U24U24fieldU2D49_49; }
	inline void set_U24U24fieldU2D49_49(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D49_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D50_50)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D50_50() const { return ___U24U24fieldU2D50_50; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D50_50() { return &___U24U24fieldU2D50_50; }
	inline void set_U24U24fieldU2D50_50(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D50_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D51_51)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D51_51() const { return ___U24U24fieldU2D51_51; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D51_51() { return &___U24U24fieldU2D51_51; }
	inline void set_U24U24fieldU2D51_51(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D51_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D52_52)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D52_52() const { return ___U24U24fieldU2D52_52; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D52_52() { return &___U24U24fieldU2D52_52; }
	inline void set_U24U24fieldU2D52_52(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D52_52 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_53() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D53_53)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D53_53() const { return ___U24U24fieldU2D53_53; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D53_53() { return &___U24U24fieldU2D53_53; }
	inline void set_U24U24fieldU2D53_53(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D53_53 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_54() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D54_54)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D54_54() const { return ___U24U24fieldU2D54_54; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D54_54() { return &___U24U24fieldU2D54_54; }
	inline void set_U24U24fieldU2D54_54(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D54_54 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_55() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D55_55)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D55_55() const { return ___U24U24fieldU2D55_55; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D55_55() { return &___U24U24fieldU2D55_55; }
	inline void set_U24U24fieldU2D55_55(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D55_55 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_56() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D56_56)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D56_56() const { return ___U24U24fieldU2D56_56; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D56_56() { return &___U24U24fieldU2D56_56; }
	inline void set_U24U24fieldU2D56_56(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D56_56 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_57() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D57_57)); }
	inline U24ArrayTypeU24640_t2298765680  get_U24U24fieldU2D57_57() const { return ___U24U24fieldU2D57_57; }
	inline U24ArrayTypeU24640_t2298765680 * get_address_of_U24U24fieldU2D57_57() { return &___U24U24fieldU2D57_57; }
	inline void set_U24U24fieldU2D57_57(U24ArrayTypeU24640_t2298765680  value)
	{
		___U24U24fieldU2D57_57 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D58_58() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D58_58)); }
	inline U24ArrayTypeU2496_t2898536284  get_U24U24fieldU2D58_58() const { return ___U24U24fieldU2D58_58; }
	inline U24ArrayTypeU2496_t2898536284 * get_address_of_U24U24fieldU2D58_58() { return &___U24U24fieldU2D58_58; }
	inline void set_U24U24fieldU2D58_58(U24ArrayTypeU2496_t2898536284  value)
	{
		___U24U24fieldU2D58_58 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D59_59() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D59_59)); }
	inline U24ArrayTypeU24160_t758788403  get_U24U24fieldU2D59_59() const { return ___U24U24fieldU2D59_59; }
	inline U24ArrayTypeU24160_t758788403 * get_address_of_U24U24fieldU2D59_59() { return &___U24U24fieldU2D59_59; }
	inline void set_U24U24fieldU2D59_59(U24ArrayTypeU24160_t758788403  value)
	{
		___U24U24fieldU2D59_59 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_60() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D60_60)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D60_60() const { return ___U24U24fieldU2D60_60; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D60_60() { return &___U24U24fieldU2D60_60; }
	inline void set_U24U24fieldU2D60_60(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D60_60 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D61_61() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D61_61)); }
	inline U24ArrayTypeU24380_t3540195945  get_U24U24fieldU2D61_61() const { return ___U24U24fieldU2D61_61; }
	inline U24ArrayTypeU24380_t3540195945 * get_address_of_U24U24fieldU2D61_61() { return &___U24U24fieldU2D61_61; }
	inline void set_U24U24fieldU2D61_61(U24ArrayTypeU24380_t3540195945  value)
	{
		___U24U24fieldU2D61_61 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_62() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D62_62)); }
	inline U24ArrayTypeU24128_t4289081659  get_U24U24fieldU2D62_62() const { return ___U24U24fieldU2D62_62; }
	inline U24ArrayTypeU24128_t4289081659 * get_address_of_U24U24fieldU2D62_62() { return &___U24U24fieldU2D62_62; }
	inline void set_U24U24fieldU2D62_62(U24ArrayTypeU24128_t4289081659  value)
	{
		___U24U24fieldU2D62_62 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_63() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D63_63)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D63_63() const { return ___U24U24fieldU2D63_63; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D63_63() { return &___U24U24fieldU2D63_63; }
	inline void set_U24U24fieldU2D63_63(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D63_63 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_64() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D64_64)); }
	inline U24ArrayTypeU2452_t520724128  get_U24U24fieldU2D64_64() const { return ___U24U24fieldU2D64_64; }
	inline U24ArrayTypeU2452_t520724128 * get_address_of_U24U24fieldU2D64_64() { return &___U24U24fieldU2D64_64; }
	inline void set_U24U24fieldU2D64_64(U24ArrayTypeU2452_t520724128  value)
	{
		___U24U24fieldU2D64_64 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_65() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D65_65)); }
	inline U24ArrayTypeU2452_t520724128  get_U24U24fieldU2D65_65() const { return ___U24U24fieldU2D65_65; }
	inline U24ArrayTypeU2452_t520724128 * get_address_of_U24U24fieldU2D65_65() { return &___U24U24fieldU2D65_65; }
	inline void set_U24U24fieldU2D65_65(U24ArrayTypeU2452_t520724128  value)
	{
		___U24U24fieldU2D65_65 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D66_66() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D66_66)); }
	inline U24ArrayTypeU241668_t760361261  get_U24U24fieldU2D66_66() const { return ___U24U24fieldU2D66_66; }
	inline U24ArrayTypeU241668_t760361261 * get_address_of_U24U24fieldU2D66_66() { return &___U24U24fieldU2D66_66; }
	inline void set_U24U24fieldU2D66_66(U24ArrayTypeU241668_t760361261  value)
	{
		___U24U24fieldU2D66_66 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D67_67() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D67_67)); }
	inline U24ArrayTypeU242100_t1165856516  get_U24U24fieldU2D67_67() const { return ___U24U24fieldU2D67_67; }
	inline U24ArrayTypeU242100_t1165856516 * get_address_of_U24U24fieldU2D67_67() { return &___U24U24fieldU2D67_67; }
	inline void set_U24U24fieldU2D67_67(U24ArrayTypeU242100_t1165856516  value)
	{
		___U24U24fieldU2D67_67 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D68_68() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D68_68)); }
	inline U24ArrayTypeU241452_t377631024  get_U24U24fieldU2D68_68() const { return ___U24U24fieldU2D68_68; }
	inline U24ArrayTypeU241452_t377631024 * get_address_of_U24U24fieldU2D68_68() { return &___U24U24fieldU2D68_68; }
	inline void set_U24U24fieldU2D68_68(U24ArrayTypeU241452_t377631024  value)
	{
		___U24U24fieldU2D68_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#ifndef RUNTIMEMETHODHANDLE_T1133924984_H
#define RUNTIMEMETHODHANDLE_T1133924984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t1133924984 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1133924984, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T1133924984_H
#ifndef STACKOVERFLOWEXCEPTION_T3629451388_H
#define STACKOVERFLOWEXCEPTION_T3629451388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t3629451388  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T3629451388_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef STRINGSPLITOPTIONS_T641086070_H
#define STRINGSPLITOPTIONS_T641086070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t641086070 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t641086070, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T641086070_H
#ifndef TERMINFOBOOLEANS_T682718491_H
#define TERMINFOBOOLEANS_T682718491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoBooleans
struct  TermInfoBooleans_t682718491 
{
public:
	// System.Int32 System.TermInfoBooleans::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TermInfoBooleans_t682718491, ___value___1)); }
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
#endif // TERMINFOBOOLEANS_T682718491_H
#ifndef CURRENTSYSTEMTIMEZONE_T3998352255_H
#define CURRENTSYSTEMTIMEZONE_T3998352255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t3998352255  : public TimeZone_t2038656743
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1853889766 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t881159249  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t881159249  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t1853889766 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t1853889766 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t1853889766 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t881159249  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t881159249 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t881159249  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t881159249  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t881159249 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t881159249  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t3998352255_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t2582425773 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t2582425773 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t2582425773 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t2582425773 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T3998352255_H
#ifndef RANKEXCEPTION_T3812021567_H
#define RANKEXCEPTION_T3812021567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t3812021567  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T3812021567_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef OPERATIONCANCELEDEXCEPTION_T926488448_H
#define OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperationCanceledException
struct  OperationCanceledException_t926488448  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifndef OUTOFMEMORYEXCEPTION_T2437671686_H
#define OUTOFMEMORYEXCEPTION_T2437671686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t2437671686  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T2437671686_H
#ifndef PLATFORMID_T897822290_H
#define PLATFORMID_T897822290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t897822290 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t897822290, ___value___1)); }
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
#endif // PLATFORMID_T897822290_H
#ifndef TIMEZONEDATA_T4225661805_H
#define TIMEZONEDATA_T4225661805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone/TimeZoneData
struct  TimeZoneData_t4225661805 
{
public:
	// System.Int32 System.CurrentSystemTimeZone/TimeZoneData::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TimeZoneData_t4225661805, ___value___1)); }
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
#endif // TIMEZONEDATA_T4225661805_H
#ifndef UNITYTYPE_T3666003507_H
#define UNITYTYPE_T3666003507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t3666003507 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t3666003507, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T3666003507_H
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
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef __COMOBJECT_T2735933417_H
#define __COMOBJECT_T2735933417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__ComObject
struct  __ComObject_t2735933417  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.__ComObject::iunknown
	intptr_t ___iunknown_1;
	// System.IntPtr System.__ComObject::hash_table
	intptr_t ___hash_table_2;

public:
	inline static int32_t get_offset_of_iunknown_1() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___iunknown_1)); }
	inline intptr_t get_iunknown_1() const { return ___iunknown_1; }
	inline intptr_t* get_address_of_iunknown_1() { return &___iunknown_1; }
	inline void set_iunknown_1(intptr_t value)
	{
		___iunknown_1 = value;
	}

	inline static int32_t get_offset_of_hash_table_2() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___hash_table_2)); }
	inline intptr_t get_hash_table_2() const { return ___hash_table_2; }
	inline intptr_t* get_address_of_hash_table_2() { return &___hash_table_2; }
	inline void set_hash_table_2(intptr_t value)
	{
		___hash_table_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __COMOBJECT_T2735933417_H
#ifndef NATIVEOVERLAPPED_T1521107632_H
#define NATIVEOVERLAPPED_T1521107632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.NativeOverlapped
struct  NativeOverlapped_t1521107632 
{
public:
	// System.IntPtr System.Threading.NativeOverlapped::EventHandle
	intptr_t ___EventHandle_0;
	// System.IntPtr System.Threading.NativeOverlapped::InternalHigh
	intptr_t ___InternalHigh_1;
	// System.IntPtr System.Threading.NativeOverlapped::InternalLow
	intptr_t ___InternalLow_2;
	// System.Int32 System.Threading.NativeOverlapped::OffsetHigh
	int32_t ___OffsetHigh_3;
	// System.Int32 System.Threading.NativeOverlapped::OffsetLow
	int32_t ___OffsetLow_4;
	// System.Int32 System.Threading.NativeOverlapped::Handle1
	int32_t ___Handle1_5;
	// System.Int32 System.Threading.NativeOverlapped::Handle2
	int32_t ___Handle2_6;

public:
	inline static int32_t get_offset_of_EventHandle_0() { return static_cast<int32_t>(offsetof(NativeOverlapped_t1521107632, ___EventHandle_0)); }
	inline intptr_t get_EventHandle_0() const { return ___EventHandle_0; }
	inline intptr_t* get_address_of_EventHandle_0() { return &___EventHandle_0; }
	inline void set_EventHandle_0(intptr_t value)
	{
		___EventHandle_0 = value;
	}

	inline static int32_t get_offset_of_InternalHigh_1() { return static_cast<int32_t>(offsetof(NativeOverlapped_t1521107632, ___InternalHigh_1)); }
	inline intptr_t get_InternalHigh_1() const { return ___InternalHigh_1; }
	inline intptr_t* get_address_of_InternalHigh_1() { return &___InternalHigh_1; }
	inline void set_InternalHigh_1(intptr_t value)
	{
		___InternalHigh_1 = value;
	}

	inline static int32_t get_offset_of_InternalLow_2() { return static_cast<int32_t>(offsetof(NativeOverlapped_t1521107632, ___InternalLow_2)); }
	inline intptr_t get_InternalLow_2() const { return ___InternalLow_2; }
	inline intptr_t* get_address_of_InternalLow_2() { return &___InternalLow_2; }
	inline void set_InternalLow_2(intptr_t value)
	{
		___InternalLow_2 = value;
	}

	inline static int32_t get_offset_of_OffsetHigh_3() { return static_cast<int32_t>(offsetof(NativeOverlapped_t1521107632, ___OffsetHigh_3)); }
	inline int32_t get_OffsetHigh_3() const { return ___OffsetHigh_3; }
	inline int32_t* get_address_of_OffsetHigh_3() { return &___OffsetHigh_3; }
	inline void set_OffsetHigh_3(int32_t value)
	{
		___OffsetHigh_3 = value;
	}

	inline static int32_t get_offset_of_OffsetLow_4() { return static_cast<int32_t>(offsetof(NativeOverlapped_t1521107632, ___OffsetLow_4)); }
	inline int32_t get_OffsetLow_4() const { return ___OffsetLow_4; }
	inline int32_t* get_address_of_OffsetLow_4() { return &___OffsetLow_4; }
	inline void set_OffsetLow_4(int32_t value)
	{
		___OffsetLow_4 = value;
	}

	inline static int32_t get_offset_of_Handle1_5() { return static_cast<int32_t>(offsetof(NativeOverlapped_t1521107632, ___Handle1_5)); }
	inline int32_t get_Handle1_5() const { return ___Handle1_5; }
	inline int32_t* get_address_of_Handle1_5() { return &___Handle1_5; }
	inline void set_Handle1_5(int32_t value)
	{
		___Handle1_5 = value;
	}

	inline static int32_t get_offset_of_Handle2_6() { return static_cast<int32_t>(offsetof(NativeOverlapped_t1521107632, ___Handle2_6)); }
	inline int32_t get_Handle2_6() const { return ___Handle2_6; }
	inline int32_t* get_address_of_Handle2_6() { return &___Handle2_6; }
	inline void set_Handle2_6(int32_t value)
	{
		___Handle2_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEOVERLAPPED_T1521107632_H
#ifndef CONFIDENCEFACTOR_T2516000285_H
#define CONFIDENCEFACTOR_T2516000285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2516000285 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2516000285, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T2516000285_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#define UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t490705335  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifndef TIMEZONENAMES_T1588231017_H
#define TIMEZONENAMES_T1588231017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone/TimeZoneNames
struct  TimeZoneNames_t1588231017 
{
public:
	// System.Int32 System.CurrentSystemTimeZone/TimeZoneNames::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TimeZoneNames_t1588231017, ___value___1)); }
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
#endif // TIMEZONENAMES_T1588231017_H
#ifndef TIMEOUTEXCEPTION_T407538241_H
#define TIMEOUTEXCEPTION_T407538241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeoutException
struct  TimeoutException_t407538241  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUTEXCEPTION_T407538241_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___1)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#define TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t2973684290  : public SystemException_t176217640
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_12;

public:
	inline static int32_t get_offset_of_type_name_12() { return static_cast<int32_t>(offsetof(TypeInitializationException_t2973684290, ___type_name_12)); }
	inline String_t* get_type_name_12() const { return ___type_name_12; }
	inline String_t** get_address_of_type_name_12() { return &___type_name_12; }
	inline void set_type_name_12(String_t* value)
	{
		___type_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_13;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_14;

public:
	inline static int32_t get_offset_of_className_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___className_13)); }
	inline String_t* get_className_13() const { return ___className_13; }
	inline String_t** get_address_of_className_13() { return &___className_13; }
	inline void set_className_13(String_t* value)
	{
		___className_13 = value;
		Il2CppCodeGenWriteBarrier((&___className_13), value);
	}

	inline static int32_t get_offset_of_assemblyName_14() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___assemblyName_14)); }
	inline String_t* get_assemblyName_14() const { return ___assemblyName_14; }
	inline String_t** get_address_of_assemblyName_14() { return &___assemblyName_14; }
	inline void set_assemblyName_14(String_t* value)
	{
		___assemblyName_14 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef TYPEUNLOADEDEXCEPTION_T1152478041_H
#define TYPEUNLOADEDEXCEPTION_T1152478041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeUnloadedException
struct  TypeUnloadedException_t1152478041  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEUNLOADEDEXCEPTION_T1152478041_H
#ifndef BRECORD_T3470580684_H
#define BRECORD_T3470580684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BRECORD
struct  BRECORD_t3470580684 
{
public:
	// System.IntPtr System.BRECORD::pvRecord
	intptr_t ___pvRecord_0;
	// System.IntPtr System.BRECORD::pRecInfo
	intptr_t ___pRecInfo_1;

public:
	inline static int32_t get_offset_of_pvRecord_0() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pvRecord_0)); }
	inline intptr_t get_pvRecord_0() const { return ___pvRecord_0; }
	inline intptr_t* get_address_of_pvRecord_0() { return &___pvRecord_0; }
	inline void set_pvRecord_0(intptr_t value)
	{
		___pvRecord_0 = value;
	}

	inline static int32_t get_offset_of_pRecInfo_1() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pRecInfo_1)); }
	inline intptr_t get_pRecInfo_1() const { return ___pRecInfo_1; }
	inline intptr_t* get_address_of_pRecInfo_1() { return &___pRecInfo_1; }
	inline void set_pRecInfo_1(intptr_t value)
	{
		___pRecInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BRECORD_T3470580684_H
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
#ifndef NOTFINITENUMBEREXCEPTION_T4049580392_H
#define NOTFINITENUMBEREXCEPTION_T4049580392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotFiniteNumberException
struct  NotFiniteNumberException_t4049580392  : public ArithmeticException_t4283546778
{
public:
	// System.Double System.NotFiniteNumberException::offending_number
	double ___offending_number_14;

public:
	inline static int32_t get_offset_of_offending_number_14() { return static_cast<int32_t>(offsetof(NotFiniteNumberException_t4049580392, ___offending_number_14)); }
	inline double get_offending_number_14() const { return ___offending_number_14; }
	inline double* get_address_of_offending_number_14() { return &___offending_number_14; }
	inline void set_offending_number_14(double value)
	{
		___offending_number_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTFINITENUMBEREXCEPTION_T4049580392_H
#ifndef VARIANT_T2753289927_H
#define VARIANT_T2753289927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Variant
struct  Variant_t2753289927 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Variant::vt
			int16_t ___vt_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___vt_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved1_1_OffsetPadding[2];
			// System.UInt16 System.Variant::wReserved1
			uint16_t ___wReserved1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved1_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___wReserved1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved2_2_OffsetPadding[4];
			// System.UInt16 System.Variant::wReserved2
			uint16_t ___wReserved2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved2_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___wReserved2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved3_3_OffsetPadding[6];
			// System.UInt16 System.Variant::wReserved3
			uint16_t ___wReserved3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved3_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___wReserved3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___llVal_4_OffsetPadding[8];
			// System.Int64 System.Variant::llVal
			int64_t ___llVal_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___llVal_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ___llVal_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lVal_5_OffsetPadding[8];
			// System.Int32 System.Variant::lVal
			int32_t ___lVal_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lVal_5_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lVal_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bVal_6_OffsetPadding[8];
			// System.Byte System.Variant::bVal
			uint8_t ___bVal_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bVal_6_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___bVal_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___iVal_7_OffsetPadding[8];
			// System.Int16 System.Variant::iVal
			int16_t ___iVal_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___iVal_7_OffsetPadding_forAlignmentOnly[8];
			int16_t ___iVal_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___fltVal_8_OffsetPadding[8];
			// System.Single System.Variant::fltVal
			float ___fltVal_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___fltVal_8_OffsetPadding_forAlignmentOnly[8];
			float ___fltVal_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___dblVal_9_OffsetPadding[8];
			// System.Double System.Variant::dblVal
			double ___dblVal_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___dblVal_9_OffsetPadding_forAlignmentOnly[8];
			double ___dblVal_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolVal_10_OffsetPadding[8];
			// System.Int16 System.Variant::boolVal
			int16_t ___boolVal_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolVal_10_OffsetPadding_forAlignmentOnly[8];
			int16_t ___boolVal_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bstrVal_11_OffsetPadding[8];
			// System.IntPtr System.Variant::bstrVal
			intptr_t ___bstrVal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bstrVal_11_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___bstrVal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___cVal_12_OffsetPadding[8];
			// System.SByte System.Variant::cVal
			int8_t ___cVal_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___cVal_12_OffsetPadding_forAlignmentOnly[8];
			int8_t ___cVal_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uiVal_13_OffsetPadding[8];
			// System.UInt16 System.Variant::uiVal
			uint16_t ___uiVal_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uiVal_13_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uiVal_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulVal_14_OffsetPadding[8];
			// System.UInt32 System.Variant::ulVal
			uint32_t ___ulVal_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulVal_14_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulVal_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ullVal_15_OffsetPadding[8];
			// System.UInt64 System.Variant::ullVal
			uint64_t ___ullVal_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ullVal_15_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ullVal_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intVal_16_OffsetPadding[8];
			// System.Int32 System.Variant::intVal
			int32_t ___intVal_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intVal_16_OffsetPadding_forAlignmentOnly[8];
			int32_t ___intVal_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintVal_17_OffsetPadding[8];
			// System.UInt32 System.Variant::uintVal
			uint32_t ___uintVal_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintVal_17_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uintVal_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pdispVal_18_OffsetPadding[8];
			// System.IntPtr System.Variant::pdispVal
			intptr_t ___pdispVal_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___pdispVal_18_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___pdispVal_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bRecord_19_OffsetPadding[8];
			// System.BRECORD System.Variant::bRecord
			BRECORD_t3470580684  ___bRecord_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bRecord_19_OffsetPadding_forAlignmentOnly[8];
			BRECORD_t3470580684  ___bRecord_19_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_vt_0() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___vt_0)); }
	inline int16_t get_vt_0() const { return ___vt_0; }
	inline int16_t* get_address_of_vt_0() { return &___vt_0; }
	inline void set_vt_0(int16_t value)
	{
		___vt_0 = value;
	}

	inline static int32_t get_offset_of_wReserved1_1() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved1_1)); }
	inline uint16_t get_wReserved1_1() const { return ___wReserved1_1; }
	inline uint16_t* get_address_of_wReserved1_1() { return &___wReserved1_1; }
	inline void set_wReserved1_1(uint16_t value)
	{
		___wReserved1_1 = value;
	}

	inline static int32_t get_offset_of_wReserved2_2() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved2_2)); }
	inline uint16_t get_wReserved2_2() const { return ___wReserved2_2; }
	inline uint16_t* get_address_of_wReserved2_2() { return &___wReserved2_2; }
	inline void set_wReserved2_2(uint16_t value)
	{
		___wReserved2_2 = value;
	}

	inline static int32_t get_offset_of_wReserved3_3() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved3_3)); }
	inline uint16_t get_wReserved3_3() const { return ___wReserved3_3; }
	inline uint16_t* get_address_of_wReserved3_3() { return &___wReserved3_3; }
	inline void set_wReserved3_3(uint16_t value)
	{
		___wReserved3_3 = value;
	}

	inline static int32_t get_offset_of_llVal_4() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___llVal_4)); }
	inline int64_t get_llVal_4() const { return ___llVal_4; }
	inline int64_t* get_address_of_llVal_4() { return &___llVal_4; }
	inline void set_llVal_4(int64_t value)
	{
		___llVal_4 = value;
	}

	inline static int32_t get_offset_of_lVal_5() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___lVal_5)); }
	inline int32_t get_lVal_5() const { return ___lVal_5; }
	inline int32_t* get_address_of_lVal_5() { return &___lVal_5; }
	inline void set_lVal_5(int32_t value)
	{
		___lVal_5 = value;
	}

	inline static int32_t get_offset_of_bVal_6() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bVal_6)); }
	inline uint8_t get_bVal_6() const { return ___bVal_6; }
	inline uint8_t* get_address_of_bVal_6() { return &___bVal_6; }
	inline void set_bVal_6(uint8_t value)
	{
		___bVal_6 = value;
	}

	inline static int32_t get_offset_of_iVal_7() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___iVal_7)); }
	inline int16_t get_iVal_7() const { return ___iVal_7; }
	inline int16_t* get_address_of_iVal_7() { return &___iVal_7; }
	inline void set_iVal_7(int16_t value)
	{
		___iVal_7 = value;
	}

	inline static int32_t get_offset_of_fltVal_8() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___fltVal_8)); }
	inline float get_fltVal_8() const { return ___fltVal_8; }
	inline float* get_address_of_fltVal_8() { return &___fltVal_8; }
	inline void set_fltVal_8(float value)
	{
		___fltVal_8 = value;
	}

	inline static int32_t get_offset_of_dblVal_9() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___dblVal_9)); }
	inline double get_dblVal_9() const { return ___dblVal_9; }
	inline double* get_address_of_dblVal_9() { return &___dblVal_9; }
	inline void set_dblVal_9(double value)
	{
		___dblVal_9 = value;
	}

	inline static int32_t get_offset_of_boolVal_10() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___boolVal_10)); }
	inline int16_t get_boolVal_10() const { return ___boolVal_10; }
	inline int16_t* get_address_of_boolVal_10() { return &___boolVal_10; }
	inline void set_boolVal_10(int16_t value)
	{
		___boolVal_10 = value;
	}

	inline static int32_t get_offset_of_bstrVal_11() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bstrVal_11)); }
	inline intptr_t get_bstrVal_11() const { return ___bstrVal_11; }
	inline intptr_t* get_address_of_bstrVal_11() { return &___bstrVal_11; }
	inline void set_bstrVal_11(intptr_t value)
	{
		___bstrVal_11 = value;
	}

	inline static int32_t get_offset_of_cVal_12() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___cVal_12)); }
	inline int8_t get_cVal_12() const { return ___cVal_12; }
	inline int8_t* get_address_of_cVal_12() { return &___cVal_12; }
	inline void set_cVal_12(int8_t value)
	{
		___cVal_12 = value;
	}

	inline static int32_t get_offset_of_uiVal_13() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uiVal_13)); }
	inline uint16_t get_uiVal_13() const { return ___uiVal_13; }
	inline uint16_t* get_address_of_uiVal_13() { return &___uiVal_13; }
	inline void set_uiVal_13(uint16_t value)
	{
		___uiVal_13 = value;
	}

	inline static int32_t get_offset_of_ulVal_14() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ulVal_14)); }
	inline uint32_t get_ulVal_14() const { return ___ulVal_14; }
	inline uint32_t* get_address_of_ulVal_14() { return &___ulVal_14; }
	inline void set_ulVal_14(uint32_t value)
	{
		___ulVal_14 = value;
	}

	inline static int32_t get_offset_of_ullVal_15() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ullVal_15)); }
	inline uint64_t get_ullVal_15() const { return ___ullVal_15; }
	inline uint64_t* get_address_of_ullVal_15() { return &___ullVal_15; }
	inline void set_ullVal_15(uint64_t value)
	{
		___ullVal_15 = value;
	}

	inline static int32_t get_offset_of_intVal_16() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___intVal_16)); }
	inline int32_t get_intVal_16() const { return ___intVal_16; }
	inline int32_t* get_address_of_intVal_16() { return &___intVal_16; }
	inline void set_intVal_16(int32_t value)
	{
		___intVal_16 = value;
	}

	inline static int32_t get_offset_of_uintVal_17() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uintVal_17)); }
	inline uint32_t get_uintVal_17() const { return ___uintVal_17; }
	inline uint32_t* get_address_of_uintVal_17() { return &___uintVal_17; }
	inline void set_uintVal_17(uint32_t value)
	{
		___uintVal_17 = value;
	}

	inline static int32_t get_offset_of_pdispVal_18() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___pdispVal_18)); }
	inline intptr_t get_pdispVal_18() const { return ___pdispVal_18; }
	inline intptr_t* get_address_of_pdispVal_18() { return &___pdispVal_18; }
	inline void set_pdispVal_18(intptr_t value)
	{
		___pdispVal_18 = value;
	}

	inline static int32_t get_offset_of_bRecord_19() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bRecord_19)); }
	inline BRECORD_t3470580684  get_bRecord_19() const { return ___bRecord_19; }
	inline BRECORD_t3470580684 * get_address_of_bRecord_19() { return &___bRecord_19; }
	inline void set_bRecord_19(BRECORD_t3470580684  value)
	{
		___bRecord_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIANT_T2753289927_H
#ifndef UNITYSERIALIZATIONHOLDER_T431912834_H
#define UNITYSERIALIZATIONHOLDER_T431912834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t431912834  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T431912834_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t3572244504  : public NotSupportedException_t1314879016
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#ifndef OVERFLOWEXCEPTION_T2020128637_H
#define OVERFLOWEXCEPTION_T2020128637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2020128637  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2020128637_H
#ifndef OPERATINGSYSTEM_T3730783609_H
#define OPERATINGSYSTEM_T3730783609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t3730783609  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t3456873960 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t3730783609, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t3730783609, ____version_1)); }
	inline Version_t3456873960 * get__version_1() const { return ____version_1; }
	inline Version_t3456873960 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t3456873960 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t3730783609, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T3730783609_H
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_13;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_14;

public:
	inline static int32_t get_offset_of_obj_name_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___obj_name_13)); }
	inline String_t* get_obj_name_13() const { return ___obj_name_13; }
	inline String_t** get_address_of_obj_name_13() { return &___obj_name_13; }
	inline void set_obj_name_13(String_t* value)
	{
		___obj_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_13), value);
	}

	inline static int32_t get_offset_of_msg_14() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___msg_14)); }
	inline String_t* get_msg_14() const { return ___msg_14; }
	inline String_t** get_address_of_msg_14() { return &___msg_14; }
	inline void set_msg_14(String_t* value)
	{
		___msg_14 = value;
		Il2CppCodeGenWriteBarrier((&___msg_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifndef OBJECTCREATIONDELEGATE_T3727257075_H
#define OBJECTCREATIONDELEGATE_T3727257075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ObjectCreationDelegate
struct  ObjectCreationDelegate_t3727257075  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTCREATIONDELEGATE_T3727257075_H
#ifndef CROSSCONTEXTDELEGATE_T387175271_H
#define CROSSCONTEXTDELEGATE_T387175271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t387175271  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T387175271_H
#ifndef HEADERHANDLER_T2878040134_H
#define HEADERHANDLER_T2878040134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t2878040134  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T2878040134_H
#ifndef TYPEFILTER_T2356120900_H
#define TYPEFILTER_T2356120900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t2356120900  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T2356120900_H
#ifndef GETTERADAPTER_T3985712271_H
#define GETTERADAPTER_T3985712271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.GetterAdapter
struct  GetterAdapter_t3985712271  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T3985712271_H
#ifndef MODULERESOLVEEVENTHANDLER_T797517678_H
#define MODULERESOLVEEVENTHANDLER_T797517678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ModuleResolveEventHandler
struct  ModuleResolveEventHandler_t797517678  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULERESOLVEEVENTHANDLER_T797517678_H
#ifndef MEMBERFILTER_T426314064_H
#define MEMBERFILTER_T426314064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t426314064  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T426314064_H
#ifndef PRIMALITYTEST_T1539325943_H
#define PRIMALITYTEST_T1539325943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t1539325943  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T1539325943_H
#ifndef MESSAGESURROGATEFILTER_T3375266246_H
#define MESSAGESURROGATEFILTER_T3375266246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MessageSurrogateFilter
struct  MessageSurrogateFilter_t3375266246  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGESURROGATEFILTER_T3375266246_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T107971893_H
#define ASSEMBLYLOADEVENTHANDLER_T107971893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t107971893  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T107971893_H
#ifndef CONSOLECANCELEVENTHANDLER_T3919940372_H
#define CONSOLECANCELEVENTHANDLER_T3919940372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleCancelEventHandler
struct  ConsoleCancelEventHandler_t3919940372  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECANCELEVENTHANDLER_T3919940372_H
#ifndef CROSSAPPDOMAINDELEGATE_T2801560188_H
#define CROSSAPPDOMAINDELEGATE_T2801560188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CrossAppDomainDelegate
struct  CrossAppDomainDelegate_t2801560188  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDELEGATE_T2801560188_H
#ifndef EVENTHANDLER_T1348719766_H
#define EVENTHANDLER_T1348719766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1348719766  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1348719766_H
#ifndef RESOLVEEVENTHANDLER_T2775508208_H
#define RESOLVEEVENTHANDLER_T2775508208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t2775508208  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T2775508208_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3101989324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifndef APPDOMAININITIALIZER_T682969308_H
#define APPDOMAININITIALIZER_T682969308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t682969308  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T682969308_H
#ifndef CONTEXTCALLBACK_T3823316192_H
#define CONTEXTCALLBACK_T3823316192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ContextCallback
struct  ContextCallback_t3823316192  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACK_T3823316192_H
#ifndef IOCOMPLETIONCALLBACK_T1634628208_H
#define IOCOMPLETIONCALLBACK_T1634628208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.IOCompletionCallback
struct  IOCompletionCallback_t1634628208  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOCOMPLETIONCALLBACK_T1634628208_H
#ifndef SENDORPOSTCALLBACK_T2750080073_H
#define SENDORPOSTCALLBACK_T2750080073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2750080073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2750080073_H
#ifndef THREADSTART_T1006689297_H
#define THREADSTART_T1006689297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1006689297  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1006689297_H
#ifndef TIMERCALLBACK_T1438585625_H
#define TIMERCALLBACK_T1438585625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t1438585625  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T1438585625_H
#ifndef WAITCALLBACK_T2448485498_H
#define WAITCALLBACK_T2448485498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2448485498  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2448485498_H
#ifndef WAITORTIMERCALLBACK_T1973723282_H
#define WAITORTIMERCALLBACK_T1973723282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t1973723282  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T1973723282_H
#ifndef PARAMETERIZEDTHREADSTART_T3696804522_H
#define PARAMETERIZEDTHREADSTART_T3696804522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_t3696804522  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDTHREADSTART_T3696804522_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (NotFiniteNumberException_t4049580392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[2] = 
{
	0,
	NotFiniteNumberException_t4049580392::get_offset_of_offending_number_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (NotImplementedException_t3489357830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (NotSupportedException_t1314879016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (NullReferenceException_t1023182353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (Nullable_t1979957197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (NumberFormatter_t1182924621), -1, sizeof(NumberFormatter_t1182924621_StaticFields), sizeof(NumberFormatter_t1182924621_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable1705[49] = 
{
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
	NumberFormatter_t1182924621_StaticFields::get_offset_of_MantissaBitsTable_23(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_TensExponentTable_24(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_DigitLowerTable_25(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_DigitUpperTable_26(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_TenPowersList_27(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_DecHexDigits_28(),
	NumberFormatter_t1182924621::get_offset_of__thread_29(),
	NumberFormatter_t1182924621::get_offset_of__nfi_30(),
	NumberFormatter_t1182924621::get_offset_of__NaN_31(),
	NumberFormatter_t1182924621::get_offset_of__infinity_32(),
	NumberFormatter_t1182924621::get_offset_of__isCustomFormat_33(),
	NumberFormatter_t1182924621::get_offset_of__specifierIsUpper_34(),
	NumberFormatter_t1182924621::get_offset_of__positive_35(),
	NumberFormatter_t1182924621::get_offset_of__specifier_36(),
	NumberFormatter_t1182924621::get_offset_of__precision_37(),
	NumberFormatter_t1182924621::get_offset_of__defPrecision_38(),
	NumberFormatter_t1182924621::get_offset_of__digitsLen_39(),
	NumberFormatter_t1182924621::get_offset_of__offset_40(),
	NumberFormatter_t1182924621::get_offset_of__decPointPos_41(),
	NumberFormatter_t1182924621::get_offset_of__val1_42(),
	NumberFormatter_t1182924621::get_offset_of__val2_43(),
	NumberFormatter_t1182924621::get_offset_of__val3_44(),
	NumberFormatter_t1182924621::get_offset_of__val4_45(),
	NumberFormatter_t1182924621::get_offset_of__cbuf_46(),
	NumberFormatter_t1182924621::get_offset_of__ind_47(),
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (CustomInfo_t435179798), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[14] = 
{
	CustomInfo_t435179798::get_offset_of_UseGroup_0(),
	CustomInfo_t435179798::get_offset_of_DecimalDigits_1(),
	CustomInfo_t435179798::get_offset_of_DecimalPointPos_2(),
	CustomInfo_t435179798::get_offset_of_DecimalTailSharpDigits_3(),
	CustomInfo_t435179798::get_offset_of_IntegerDigits_4(),
	CustomInfo_t435179798::get_offset_of_IntegerHeadSharpDigits_5(),
	CustomInfo_t435179798::get_offset_of_IntegerHeadPos_6(),
	CustomInfo_t435179798::get_offset_of_UseExponent_7(),
	CustomInfo_t435179798::get_offset_of_ExponentDigits_8(),
	CustomInfo_t435179798::get_offset_of_ExponentTailSharpDigits_9(),
	CustomInfo_t435179798::get_offset_of_ExponentNegativeSignOnly_10(),
	CustomInfo_t435179798::get_offset_of_DividePlaces_11(),
	CustomInfo_t435179798::get_offset_of_Percents_12(),
	CustomInfo_t435179798::get_offset_of_Permilles_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (ObjectDisposedException_t21392786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[2] = 
{
	ObjectDisposedException_t21392786::get_offset_of_obj_name_13(),
	ObjectDisposedException_t21392786::get_offset_of_msg_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (OperatingSystem_t3730783609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[3] = 
{
	OperatingSystem_t3730783609::get_offset_of__platform_0(),
	OperatingSystem_t3730783609::get_offset_of__version_1(),
	OperatingSystem_t3730783609::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (OperationCanceledException_t926488448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (OutOfMemoryException_t2437671686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1710[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (OverflowException_t2020128637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (PlatformID_t897822290)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1712[8] = 
{
	PlatformID_t897822290::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (PlatformNotSupportedException_t3572244504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1713[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (Random_t108471755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[6] = 
{
	0,
	0,
	0,
	Random_t108471755::get_offset_of_inext_3(),
	Random_t108471755::get_offset_of_inextp_4(),
	Random_t108471755::get_offset_of_SeedArray_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (RankException_t3812021567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (ResolveEventArgs_t1779456501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[1] = 
{
	ResolveEventArgs_t1779456501::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (RuntimeMethodHandle_t1133924984)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t1133924984 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1717[1] = 
{
	RuntimeMethodHandle_t1133924984::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (STAThreadAttribute_t2720218673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (StackOverflowException_t3629451388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (StringComparer_t3301955079), -1, sizeof(StringComparer_t3301955079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1720[4] = 
{
	StringComparer_t3301955079_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t3301955079_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t3301955079_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t3301955079_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (CultureAwareComparer_t30646139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[2] = 
{
	CultureAwareComparer_t30646139::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t30646139::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (OrdinalComparer_t3407243298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1722[1] = 
{
	OrdinalComparer_t3407243298::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (StringComparison_t3657712135)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1723[7] = 
{
	StringComparison_t3657712135::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (StringSplitOptions_t641086070)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1724[3] = 
{
	StringSplitOptions_t641086070::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (SystemException_t176217640), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1725[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (TermInfoBooleans_t682718491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1726[39] = 
{
	TermInfoBooleans_t682718491::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { sizeof (ThreadStaticAttribute_t3840787420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1728 = { sizeof (TimeSpan_t881159249)+ sizeof (RuntimeObject), sizeof(TimeSpan_t881159249 ), sizeof(TimeSpan_t881159249_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1728[9] = 
{
	0,
	0,
	0,
	0,
	0,
	TimeSpan_t881159249_StaticFields::get_offset_of_MaxValue_5(),
	TimeSpan_t881159249_StaticFields::get_offset_of_MinValue_6(),
	TimeSpan_t881159249_StaticFields::get_offset_of_Zero_7(),
	TimeSpan_t881159249::get_offset_of__ticks_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1729 = { sizeof (Parser_t2112344768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1729[4] = 
{
	Parser_t2112344768::get_offset_of__src_0(),
	Parser_t2112344768::get_offset_of__cur_1(),
	Parser_t2112344768::get_offset_of__length_2(),
	Parser_t2112344768::get_offset_of_formatError_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1730 = { sizeof (TimeZone_t2038656743), -1, sizeof(TimeZone_t2038656743_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1730[3] = 
{
	TimeZone_t2038656743_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t2038656743_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t2038656743_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1731 = { sizeof (CurrentSystemTimeZone_t3998352255), -1, sizeof(CurrentSystemTimeZone_t3998352255_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1731[8] = 
{
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t3998352255_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t3998352255_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1732 = { sizeof (TimeZoneData_t4225661805)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1732[5] = 
{
	TimeZoneData_t4225661805::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1733 = { sizeof (TimeZoneNames_t1588231017)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1733[3] = 
{
	TimeZoneNames_t1588231017::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1734 = { sizeof (TimeoutException_t407538241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1734[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1735 = { sizeof (TypeCode_t2987224087)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1735[19] = 
{
	TypeCode_t2987224087::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1736 = { sizeof (TypeInitializationException_t2973684290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1736[1] = 
{
	TypeInitializationException_t2973684290::get_offset_of_type_name_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1737 = { sizeof (TypeLoadException_t3707937253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1737[3] = 
{
	0,
	TypeLoadException_t3707937253::get_offset_of_className_13(),
	TypeLoadException_t3707937253::get_offset_of_assemblyName_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1738 = { sizeof (TypeUnloadedException_t1152478041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1739 = { sizeof (UnauthorizedAccessException_t490705335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1739[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1740 = { sizeof (UnhandledExceptionEventArgs_t2886101344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1740[2] = 
{
	UnhandledExceptionEventArgs_t2886101344::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t2886101344::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1741 = { sizeof (UnitySerializationHolder_t431912834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1741[3] = 
{
	UnitySerializationHolder_t431912834::get_offset_of__data_0(),
	UnitySerializationHolder_t431912834::get_offset_of__unityType_1(),
	UnitySerializationHolder_t431912834::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1742 = { sizeof (UnityType_t3666003507)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1742[5] = 
{
	UnityType_t3666003507::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1743 = { sizeof (Variant_t2753289927)+ sizeof (RuntimeObject), sizeof(Variant_t2753289927 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1743[20] = 
{
	Variant_t2753289927::get_offset_of_vt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_wReserved1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_wReserved2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_wReserved3_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_llVal_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_lVal_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_bVal_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_iVal_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_fltVal_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_dblVal_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_boolVal_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_bstrVal_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_cVal_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_uiVal_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_ulVal_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_ullVal_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_intVal_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_uintVal_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_pdispVal_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_bRecord_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1744 = { sizeof (BRECORD_t3470580684)+ sizeof (RuntimeObject), sizeof(BRECORD_t3470580684 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1744[2] = 
{
	BRECORD_t3470580684::get_offset_of_pvRecord_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BRECORD_t3470580684::get_offset_of_pRecInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1745 = { sizeof (Version_t3456873960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1745[5] = 
{
	0,
	Version_t3456873960::get_offset_of__Major_1(),
	Version_t3456873960::get_offset_of__Minor_2(),
	Version_t3456873960::get_offset_of__Build_3(),
	Version_t3456873960::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1746 = { sizeof (WeakReference_t1334886716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1746[2] = 
{
	WeakReference_t1334886716::get_offset_of_isLongReference_0(),
	WeakReference_t1334886716::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1747 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1748 = { sizeof (__ComObject_t2735933417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1748[2] = 
{
	__ComObject_t2735933417::get_offset_of_iunknown_1(),
	__ComObject_t2735933417::get_offset_of_hash_table_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1749 = { sizeof (PrimalityTest_t1539325943), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1750 = { sizeof (MemberFilter_t426314064), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1751 = { sizeof (ModuleResolveEventHandler_t797517678), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1752 = { sizeof (GetterAdapter_t3985712271), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1753 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1754 = { sizeof (TypeFilter_t2356120900), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1755 = { sizeof (ObjectCreationDelegate_t3727257075), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1756 = { sizeof (CrossContextDelegate_t387175271), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1757 = { sizeof (HeaderHandler_t2878040134), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1758 = { sizeof (MessageSurrogateFilter_t3375266246), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1759 = { sizeof (ContextCallback_t3823316192), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1760 = { sizeof (IOCompletionCallback_t1634628208), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1761 = { sizeof (ParameterizedThreadStart_t3696804522), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1762 = { sizeof (SendOrPostCallback_t2750080073), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1763 = { sizeof (ThreadStart_t1006689297), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1764 = { sizeof (TimerCallback_t1438585625), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1765 = { sizeof (WaitCallback_t2448485498), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1766 = { sizeof (WaitOrTimerCallback_t1973723282), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1767 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1768 = { sizeof (AppDomainInitializer_t682969308), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1769 = { sizeof (AssemblyLoadEventHandler_t107971893), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1770 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1771 = { sizeof (ConsoleCancelEventHandler_t3919940372), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1772 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1773 = { sizeof (CrossAppDomainDelegate_t2801560188), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1774 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1775 = { sizeof (EventHandler_t1348719766), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1776 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1777 = { sizeof (ResolveEventHandler_t2775508208), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1778 = { sizeof (UnhandledExceptionEventHandler_t3101989324), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1779 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255361), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1779[69] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D7_7(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D8_8(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D9_9(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D10_10(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D11_11(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D12_12(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D13_13(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D14_14(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D15_15(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D16_16(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D17_17(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D18_18(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D19_19(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D20_20(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D21_21(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D22_22(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D23_23(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D24_24(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D25_25(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D26_26(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D27_27(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D28_28(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D29_29(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D30_30(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D31_31(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D32_32(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D33_33(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D34_34(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D35_35(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D36_36(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D37_37(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D38_38(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D39_39(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D40_40(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D41_41(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D42_42(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D43_43(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D44_44(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D45_45(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D46_46(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D47_47(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D48_48(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D49_49(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D50_50(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D51_51(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D52_52(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D53_53(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D54_54(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D55_55(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D56_56(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D57_57(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D58_58(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D59_59(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D60_60(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D61_61(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D62_62(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D63_63(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D64_64(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D65_65(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D66_66(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D67_67(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D68_68(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1780 = { sizeof (U24ArrayTypeU2456_t1285398176)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t1285398176 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1781 = { sizeof (U24ArrayTypeU2424_t2469145093)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t2469145093 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1782 = { sizeof (U24ArrayTypeU2416_t3254766644)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t3254766644 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1783 = { sizeof (U24ArrayTypeU2440_t2867270459)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2440_t2867270459 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1784 = { sizeof (U24ArrayTypeU2436_t122598762)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2436_t122598762 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1785 = { sizeof (U24ArrayTypeU24120_t4289081651)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t4289081651 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1786 = { sizeof (U24ArrayTypeU243132_t2732071528)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t2732071528 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1787 = { sizeof (U24ArrayTypeU2420_t1704471045)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t1704471045 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1788 = { sizeof (U24ArrayTypeU2432_t3652892010)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t3652892010 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1789 = { sizeof (U24ArrayTypeU2448_t1337922363)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t1337922363 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1790 = { sizeof (U24ArrayTypeU2464_t499776625)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t499776625 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1791 = { sizeof (U24ArrayTypeU2412_t2490092596)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2490092596 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1792 = { sizeof (U24ArrayTypeU24136_t1950429485)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t1950429485 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1793 = { sizeof (U24ArrayTypeU248_t3244137463)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t3244137463 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1794 = { sizeof (U24ArrayTypeU2484_t950115319)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2484_t950115319 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1795 = { sizeof (U24ArrayTypeU2472_t1683523542)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t1683523542 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1796 = { sizeof (U24ArrayTypeU24124_t4289081647)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t4289081647 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1797 = { sizeof (U24ArrayTypeU2496_t2898536284)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t2898536284 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1798 = { sizeof (U24ArrayTypeU242048_t3505032960)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t3505032960 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1799 = { sizeof (U24ArrayTypeU24256_t1929481982)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t1929481982 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
