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


// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Threading.ReaderWriterLock
struct ReaderWriterLock_t367846299;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3523102303;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Encoder
struct Encoder_t2198218980;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Security.SecurityContext
struct SecurityContext_t2435442044;
// System.Reflection.Assembly
struct Assembly_t;
// System.Text.EncodingInfo[]
struct EncodingInfoU5BU5D_t2292552583;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Security.IPermission
struct IPermission_t4015543450;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2891196107;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2954997752;
// System.Collections.SortedList
struct SortedList_t2427694641;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2402303981;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Threading.LockQueue
struct LockQueue_t2679652224;
// System.Threading.Timer/Scheduler
struct Scheduler_t3215764947;
// System.Threading.TimerCallback
struct TimerCallback_t1438585625;
// System.Void
struct Void_t1185182177;
// System.AppDomain
struct AppDomain_t1571427825;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Threading.Mutex
struct Mutex_t3066672582;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1973723282;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Type
struct Type_t;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Reflection.AssemblyName
struct AssemblyName_t270931938;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;




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
#ifndef ENCODERFALLBACKBUFFER_T3523102303_H
#define ENCODERFALLBACKBUFFER_T3523102303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3523102303  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3523102303_H
#ifndef ENCODERFALLBACK_T1188251036_H
#define ENCODERFALLBACK_T1188251036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1188251036  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t1188251036_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t1188251036 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t1188251036 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t1188251036 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t1188251036 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t1188251036 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t1188251036 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t1188251036 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t1188251036 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t1188251036 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t1188251036 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t1188251036 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1188251036_H
#ifndef LOCKQUEUE_T2679652224_H
#define LOCKQUEUE_T2679652224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.LockQueue
struct  LockQueue_t2679652224  : public RuntimeObject
{
public:
	// System.Threading.ReaderWriterLock System.Threading.LockQueue::rwlock
	ReaderWriterLock_t367846299 * ___rwlock_0;
	// System.Int32 System.Threading.LockQueue::lockCount
	int32_t ___lockCount_1;

public:
	inline static int32_t get_offset_of_rwlock_0() { return static_cast<int32_t>(offsetof(LockQueue_t2679652224, ___rwlock_0)); }
	inline ReaderWriterLock_t367846299 * get_rwlock_0() const { return ___rwlock_0; }
	inline ReaderWriterLock_t367846299 ** get_address_of_rwlock_0() { return &___rwlock_0; }
	inline void set_rwlock_0(ReaderWriterLock_t367846299 * value)
	{
		___rwlock_0 = value;
		Il2CppCodeGenWriteBarrier((&___rwlock_0), value);
	}

	inline static int32_t get_offset_of_lockCount_1() { return static_cast<int32_t>(offsetof(LockQueue_t2679652224, ___lockCount_1)); }
	inline int32_t get_lockCount_1() const { return ___lockCount_1; }
	inline int32_t* get_address_of_lockCount_1() { return &___lockCount_1; }
	inline void set_lockCount_1(int32_t value)
	{
		___lockCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCKQUEUE_T2679652224_H
#ifndef MONITOR_T2197244473_H
#define MONITOR_T2197244473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Monitor
struct  Monitor_t2197244473  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITOR_T2197244473_H
#ifndef ENCODER_T2198218980_H
#define ENCODER_T2198218980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoder
struct  Encoder_t2198218980  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::fallback
	EncoderFallback_t1188251036 * ___fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::fallback_buffer
	EncoderFallbackBuffer_t3523102303 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___fallback_0)); }
	inline EncoderFallback_t1188251036 * get_fallback_0() const { return ___fallback_0; }
	inline EncoderFallback_t1188251036 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(EncoderFallback_t1188251036 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___fallback_buffer_1)); }
	inline EncoderFallbackBuffer_t3523102303 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline EncoderFallbackBuffer_t3523102303 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(EncoderFallbackBuffer_t3523102303 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T2198218980_H
#ifndef NATIVEEVENTCALLS_T570794723_H
#define NATIVEEVENTCALLS_T570794723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.NativeEventCalls
struct  NativeEventCalls_t570794723  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLS_T570794723_H
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:
	// System.Boolean System.Threading.SynchronizationContext::notification_required
	bool ___notification_required_0;

public:
	inline static int32_t get_offset_of_notification_required_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723, ___notification_required_0)); }
	inline bool get_notification_required_0() const { return ___notification_required_0; }
	inline bool* get_address_of_notification_required_0() { return &___notification_required_0; }
	inline void set_notification_required_0(bool value)
	{
		___notification_required_0 = value;
	}
};

struct SynchronizationContext_t2326897723_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2326897723 * ___currentContext_1;

public:
	inline static int32_t get_offset_of_currentContext_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_ThreadStaticFields, ___currentContext_1)); }
	inline SynchronizationContext_t2326897723 * get_currentContext_1() const { return ___currentContext_1; }
	inline SynchronizationContext_t2326897723 ** get_address_of_currentContext_1() { return &___currentContext_1; }
	inline void set_currentContext_1(SynchronizationContext_t2326897723 * value)
	{
		___currentContext_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifndef DECODERFALLBACKBUFFER_T2402303981_H
#define DECODERFALLBACKBUFFER_T2402303981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t2402303981  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T2402303981_H
#ifndef DECODERFALLBACK_T3123823036_H
#define DECODERFALLBACK_T3123823036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t3123823036  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t3123823036_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t3123823036 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t3123823036 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t3123823036 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t3123823036 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t3123823036 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t3123823036 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t3123823036 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t3123823036 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t3123823036 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t3123823036 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T3123823036_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef SURROGATEENCODER_T151277398_H
#define SURROGATEENCODER_T151277398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.SurrogateEncoder
struct  SurrogateEncoder_t151277398  : public RuntimeObject
{
public:
	// System.Text.Encoding System.Text.SurrogateEncoder::encoding
	Encoding_t1523322056 * ___encoding_0;
	// System.Text.Encoder System.Text.SurrogateEncoder::realObject
	Encoder_t2198218980 * ___realObject_1;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(SurrogateEncoder_t151277398, ___encoding_0)); }
	inline Encoding_t1523322056 * get_encoding_0() const { return ___encoding_0; }
	inline Encoding_t1523322056 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(Encoding_t1523322056 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_realObject_1() { return static_cast<int32_t>(offsetof(SurrogateEncoder_t151277398, ___realObject_1)); }
	inline Encoder_t2198218980 * get_realObject_1() const { return ___realObject_1; }
	inline Encoder_t2198218980 ** get_address_of_realObject_1() { return &___realObject_1; }
	inline void set_realObject_1(Encoder_t2198218980 * value)
	{
		___realObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___realObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURROGATEENCODER_T151277398_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef MLANGDECODER_T1334549542_H
#define MLANGDECODER_T1334549542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.MLangCodePageEncoding/MLangDecoder
struct  MLangDecoder_t1334549542  : public RuntimeObject
{
public:
	// System.Text.Encoding System.Text.MLangCodePageEncoding/MLangDecoder::encoding
	Encoding_t1523322056 * ___encoding_0;
	// System.Text.Decoder System.Text.MLangCodePageEncoding/MLangDecoder::realObject
	Decoder_t2204182725 * ___realObject_1;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(MLangDecoder_t1334549542, ___encoding_0)); }
	inline Encoding_t1523322056 * get_encoding_0() const { return ___encoding_0; }
	inline Encoding_t1523322056 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(Encoding_t1523322056 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_realObject_1() { return static_cast<int32_t>(offsetof(MLangDecoder_t1334549542, ___realObject_1)); }
	inline Decoder_t2204182725 * get_realObject_1() const { return ___realObject_1; }
	inline Decoder_t2204182725 ** get_address_of_realObject_1() { return &___realObject_1; }
	inline void set_realObject_1(Decoder_t2204182725 * value)
	{
		___realObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___realObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLANGDECODER_T1334549542_H
#ifndef MLANGENCODER_T818322359_H
#define MLANGENCODER_T818322359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.MLangCodePageEncoding/MLangEncoder
struct  MLangEncoder_t818322359  : public RuntimeObject
{
public:
	// System.Text.Encoding System.Text.MLangCodePageEncoding/MLangEncoder::encoding
	Encoding_t1523322056 * ___encoding_0;
	// System.Text.Encoder System.Text.MLangCodePageEncoding/MLangEncoder::realObject
	Encoder_t2198218980 * ___realObject_1;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(MLangEncoder_t818322359, ___encoding_0)); }
	inline Encoding_t1523322056 * get_encoding_0() const { return ___encoding_0; }
	inline Encoding_t1523322056 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(Encoding_t1523322056 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_realObject_1() { return static_cast<int32_t>(offsetof(MLangEncoder_t818322359, ___realObject_1)); }
	inline Encoder_t2198218980 * get_realObject_1() const { return ___realObject_1; }
	inline Encoder_t2198218980 ** get_address_of_realObject_1() { return &___realObject_1; }
	inline void set_realObject_1(Encoder_t2198218980 * value)
	{
		___realObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___realObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLANGENCODER_T818322359_H
#ifndef MLANGCODEPAGEENCODING_T4092273897_H
#define MLANGCODEPAGEENCODING_T4092273897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.MLangCodePageEncoding
struct  MLangCodePageEncoding_t4092273897  : public RuntimeObject
{
public:
	// System.Int32 System.Text.MLangCodePageEncoding::codePage
	int32_t ___codePage_0;
	// System.Boolean System.Text.MLangCodePageEncoding::isReadOnly
	bool ___isReadOnly_1;
	// System.Text.EncoderFallback System.Text.MLangCodePageEncoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_2;
	// System.Text.DecoderFallback System.Text.MLangCodePageEncoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_3;
	// System.Text.Encoding System.Text.MLangCodePageEncoding::realObject
	Encoding_t1523322056 * ___realObject_4;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(MLangCodePageEncoding_t4092273897, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(MLangCodePageEncoding_t4092273897, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_2() { return static_cast<int32_t>(offsetof(MLangCodePageEncoding_t4092273897, ___encoderFallback_2)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_2() const { return ___encoderFallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_2() { return &___encoderFallback_2; }
	inline void set_encoderFallback_2(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_2), value);
	}

	inline static int32_t get_offset_of_decoderFallback_3() { return static_cast<int32_t>(offsetof(MLangCodePageEncoding_t4092273897, ___decoderFallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_3() const { return ___decoderFallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_3() { return &___decoderFallback_3; }
	inline void set_decoderFallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_3), value);
	}

	inline static int32_t get_offset_of_realObject_4() { return static_cast<int32_t>(offsetof(MLangCodePageEncoding_t4092273897, ___realObject_4)); }
	inline Encoding_t1523322056 * get_realObject_4() const { return ___realObject_4; }
	inline Encoding_t1523322056 ** get_address_of_realObject_4() { return &___realObject_4; }
	inline void set_realObject_4(Encoding_t1523322056 * value)
	{
		___realObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___realObject_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLANGCODEPAGEENCODING_T4092273897_H
#ifndef COMPRESSEDSTACK_T1202932761_H
#define COMPRESSEDSTACK_T1202932761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t1202932761  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t1202932761, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSEDSTACK_T1202932761_H
#ifndef ENCODINGINFO_T3933047410_H
#define ENCODINGINFO_T3933047410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingInfo
struct  EncodingInfo_t3933047410  : public RuntimeObject
{
public:
	// System.Int32 System.Text.EncodingInfo::codepage
	int32_t ___codepage_0;
	// System.Text.Encoding System.Text.EncodingInfo::encoding
	Encoding_t1523322056 * ___encoding_1;

public:
	inline static int32_t get_offset_of_codepage_0() { return static_cast<int32_t>(offsetof(EncodingInfo_t3933047410, ___codepage_0)); }
	inline int32_t get_codepage_0() const { return ___codepage_0; }
	inline int32_t* get_address_of_codepage_0() { return &___codepage_0; }
	inline void set_codepage_0(int32_t value)
	{
		___codepage_0 = value;
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(EncodingInfo_t3933047410, ___encoding_1)); }
	inline Encoding_t1523322056 * get_encoding_1() const { return ___encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(Encoding_t1523322056 * value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGINFO_T3933047410_H
#ifndef EXECUTIONCONTEXT_T1748372627_H
#define EXECUTIONCONTEXT_T1748372627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ExecutionContext
struct  ExecutionContext_t1748372627  : public RuntimeObject
{
public:
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t2435442044 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;

public:
	inline static int32_t get_offset_of__sc_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____sc_0)); }
	inline SecurityContext_t2435442044 * get__sc_0() const { return ____sc_0; }
	inline SecurityContext_t2435442044 ** get_address_of__sc_0() { return &____sc_0; }
	inline void set__sc_0(SecurityContext_t2435442044 * value)
	{
		____sc_0 = value;
		Il2CppCodeGenWriteBarrier((&____sc_0), value);
	}

	inline static int32_t get_offset_of__suppressFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____suppressFlow_1)); }
	inline bool get__suppressFlow_1() const { return ____suppressFlow_1; }
	inline bool* get_address_of__suppressFlow_1() { return &____suppressFlow_1; }
	inline void set__suppressFlow_1(bool value)
	{
		____suppressFlow_1 = value;
	}

	inline static int32_t get_offset_of__capture_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____capture_2)); }
	inline bool get__capture_2() const { return ____capture_2; }
	inline bool* get_address_of__capture_2() { return &____capture_2; }
	inline void set__capture_2(bool value)
	{
		____capture_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONCONTEXT_T1748372627_H
#ifndef HOSTEXECUTIONCONTEXT_T2396354767_H
#define HOSTEXECUTIONCONTEXT_T2396354767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.HostExecutionContext
struct  HostExecutionContext_t2396354767  : public RuntimeObject
{
public:
	// System.Object System.Threading.HostExecutionContext::_state
	RuntimeObject * ____state_0;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(HostExecutionContext_t2396354767, ____state_0)); }
	inline RuntimeObject * get__state_0() const { return ____state_0; }
	inline RuntimeObject ** get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(RuntimeObject * value)
	{
		____state_0 = value;
		Il2CppCodeGenWriteBarrier((&____state_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTEXECUTIONCONTEXT_T2396354767_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_9;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_10;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_11;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_12;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_13;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_14;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_15;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_16;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_9)); }
	inline String_t* get_body_name_9() const { return ___body_name_9; }
	inline String_t** get_address_of_body_name_9() { return &___body_name_9; }
	inline void set_body_name_9(String_t* value)
	{
		___body_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_9), value);
	}

	inline static int32_t get_offset_of_encoding_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_10)); }
	inline String_t* get_encoding_name_10() const { return ___encoding_name_10; }
	inline String_t** get_address_of_encoding_name_10() { return &___encoding_name_10; }
	inline void set_encoding_name_10(String_t* value)
	{
		___encoding_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_10), value);
	}

	inline static int32_t get_offset_of_header_name_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_11)); }
	inline String_t* get_header_name_11() const { return ___header_name_11; }
	inline String_t** get_address_of_header_name_11() { return &___header_name_11; }
	inline void set_header_name_11(String_t* value)
	{
		___header_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_11), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_12)); }
	inline bool get_is_mail_news_display_12() const { return ___is_mail_news_display_12; }
	inline bool* get_address_of_is_mail_news_display_12() { return &___is_mail_news_display_12; }
	inline void set_is_mail_news_display_12(bool value)
	{
		___is_mail_news_display_12 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_13)); }
	inline bool get_is_mail_news_save_13() const { return ___is_mail_news_save_13; }
	inline bool* get_address_of_is_mail_news_save_13() { return &___is_mail_news_save_13; }
	inline void set_is_mail_news_save_13(bool value)
	{
		___is_mail_news_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_14)); }
	inline bool get_is_browser_save_14() const { return ___is_browser_save_14; }
	inline bool* get_address_of_is_browser_save_14() { return &___is_browser_save_14; }
	inline void set_is_browser_save_14(bool value)
	{
		___is_browser_save_14 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_15)); }
	inline bool get_is_browser_display_15() const { return ___is_browser_display_15; }
	inline bool* get_address_of_is_browser_display_15() { return &___is_browser_display_15; }
	inline void set_is_browser_display_15(bool value)
	{
		___is_browser_display_15 = value;
	}

	inline static int32_t get_offset_of_web_name_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_16)); }
	inline String_t* get_web_name_16() const { return ___web_name_16; }
	inline String_t** get_address_of_web_name_16() { return &___web_name_16; }
	inline void set_web_name_16(String_t* value)
	{
		___web_name_16 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_16), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Text.EncodingInfo[] System.Text.Encoding::encoding_infos
	EncodingInfoU5BU5D_t2292552583* ___encoding_infos_7;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_8;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_26;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_27;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_28;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encoding_infos_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encoding_infos_7)); }
	inline EncodingInfoU5BU5D_t2292552583* get_encoding_infos_7() const { return ___encoding_infos_7; }
	inline EncodingInfoU5BU5D_t2292552583** get_address_of_encoding_infos_7() { return &___encoding_infos_7; }
	inline void set_encoding_infos_7(EncodingInfoU5BU5D_t2292552583* value)
	{
		___encoding_infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_infos_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_8() const { return ___encodings_8; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_17)); }
	inline Encoding_t1523322056 * get_asciiEncoding_17() const { return ___asciiEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_17() { return &___asciiEncoding_17; }
	inline void set_asciiEncoding_17(Encoding_t1523322056 * value)
	{
		___asciiEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_17), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_18)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_18() const { return ___bigEndianEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_18() { return &___bigEndianEncoding_18; }
	inline void set_bigEndianEncoding_18(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_18), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_19)); }
	inline Encoding_t1523322056 * get_defaultEncoding_19() const { return ___defaultEncoding_19; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_19() { return &___defaultEncoding_19; }
	inline void set_defaultEncoding_19(Encoding_t1523322056 * value)
	{
		___defaultEncoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_19), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_20)); }
	inline Encoding_t1523322056 * get_utf7Encoding_20() const { return ___utf7Encoding_20; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_20() { return &___utf7Encoding_20; }
	inline void set_utf7Encoding_20(Encoding_t1523322056 * value)
	{
		___utf7Encoding_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_21() const { return ___utf8EncodingWithMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_21() { return &___utf8EncodingWithMarkers_21; }
	inline void set_utf8EncodingWithMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_21), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_22)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_22() const { return ___utf8EncodingWithoutMarkers_22; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_22() { return &___utf8EncodingWithoutMarkers_22; }
	inline void set_utf8EncodingWithoutMarkers_22(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_22 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_22), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_23)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_23() const { return ___unicodeEncoding_23; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_23() { return &___unicodeEncoding_23; }
	inline void set_unicodeEncoding_23(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_23), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_24)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_24() const { return ___isoLatin1Encoding_24; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_24() { return &___isoLatin1Encoding_24; }
	inline void set_isoLatin1Encoding_24(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_24 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_24), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_25)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_25() const { return ___utf8EncodingUnsafe_25; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_25() { return &___utf8EncodingUnsafe_25; }
	inline void set_utf8EncodingUnsafe_25(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_25), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_26)); }
	inline Encoding_t1523322056 * get_utf32Encoding_26() const { return ___utf32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_26() { return &___utf32Encoding_26; }
	inline void set_utf32Encoding_26(Encoding_t1523322056 * value)
	{
		___utf32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_26), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_27)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_27() const { return ___bigEndianUTF32Encoding_27; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_27() { return &___bigEndianUTF32Encoding_27; }
	inline void set_bigEndianUTF32Encoding_27(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_27 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_27), value);
	}

	inline static int32_t get_offset_of_lockobj_28() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_28)); }
	inline RuntimeObject * get_lockobj_28() const { return ___lockobj_28; }
	inline RuntimeObject ** get_address_of_lockobj_28() { return &___lockobj_28; }
	inline void set_lockobj_28(RuntimeObject * value)
	{
		___lockobj_28 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef HOSTEXECUTIONCONTEXTMANAGER_T2582009786_H
#define HOSTEXECUTIONCONTEXTMANAGER_T2582009786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.HostExecutionContextManager
struct  HostExecutionContextManager_t2582009786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTEXECUTIONCONTEXTMANAGER_T2582009786_H
#ifndef THREADPOOL_T2177989550_H
#define THREADPOOL_T2177989550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPool
struct  ThreadPool_t2177989550  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPOOL_T2177989550_H
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
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef SECURITYMANAGER_T3383402582_H
#define SECURITYMANAGER_T3383402582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3383402582  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t3383402582_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t2718874744 * ____hierarchy_1;
	// System.Security.IPermission System.Security.SecurityManager::_unmanagedCode
	RuntimeObject* ____unmanagedCode_2;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1853889766 * ____declsecCache_3;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t2891196107 * ____level_4;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t2954997752 * ____execution_5;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__hierarchy_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____hierarchy_1)); }
	inline ArrayList_t2718874744 * get__hierarchy_1() const { return ____hierarchy_1; }
	inline ArrayList_t2718874744 ** get_address_of__hierarchy_1() { return &____hierarchy_1; }
	inline void set__hierarchy_1(ArrayList_t2718874744 * value)
	{
		____hierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&____hierarchy_1), value);
	}

	inline static int32_t get_offset_of__unmanagedCode_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____unmanagedCode_2)); }
	inline RuntimeObject* get__unmanagedCode_2() const { return ____unmanagedCode_2; }
	inline RuntimeObject** get_address_of__unmanagedCode_2() { return &____unmanagedCode_2; }
	inline void set__unmanagedCode_2(RuntimeObject* value)
	{
		____unmanagedCode_2 = value;
		Il2CppCodeGenWriteBarrier((&____unmanagedCode_2), value);
	}

	inline static int32_t get_offset_of__declsecCache_3() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____declsecCache_3)); }
	inline Hashtable_t1853889766 * get__declsecCache_3() const { return ____declsecCache_3; }
	inline Hashtable_t1853889766 ** get_address_of__declsecCache_3() { return &____declsecCache_3; }
	inline void set__declsecCache_3(Hashtable_t1853889766 * value)
	{
		____declsecCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_3), value);
	}

	inline static int32_t get_offset_of__level_4() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____level_4)); }
	inline PolicyLevel_t2891196107 * get__level_4() const { return ____level_4; }
	inline PolicyLevel_t2891196107 ** get_address_of__level_4() { return &____level_4; }
	inline void set__level_4(PolicyLevel_t2891196107 * value)
	{
		____level_4 = value;
		Il2CppCodeGenWriteBarrier((&____level_4), value);
	}

	inline static int32_t get_offset_of__execution_5() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____execution_5)); }
	inline SecurityPermission_t2954997752 * get__execution_5() const { return ____execution_5; }
	inline SecurityPermission_t2954997752 ** get_address_of__execution_5() { return &____execution_5; }
	inline void set__execution_5(SecurityPermission_t2954997752 * value)
	{
		____execution_5 = value;
		Il2CppCodeGenWriteBarrier((&____execution_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T3383402582_H
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
#ifndef SECURITYSTATE_T982520134_H
#define SECURITYSTATE_T982520134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityState
struct  SecurityState_t982520134  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSTATE_T982520134_H
#ifndef SCHEDULER_T3215764947_H
#define SCHEDULER_T3215764947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/Scheduler
struct  Scheduler_t3215764947  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t2427694641 * ___list_1;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_t3215764947, ___list_1)); }
	inline SortedList_t2427694641 * get_list_1() const { return ___list_1; }
	inline SortedList_t2427694641 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t2427694641 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

struct Scheduler_t3215764947_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_t3215764947 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_t3215764947_StaticFields, ___instance_0)); }
	inline Scheduler_t3215764947 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_t3215764947 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_t3215764947 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T3215764947_H
#ifndef TIMEOUT_T1450424021_H
#define TIMEOUT_T1450424021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timeout
struct  Timeout_t1450424021  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUT_T1450424021_H
#ifndef DECODER_T2204182725_H
#define DECODER_T2204182725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2204182725  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t3123823036 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t2402303981 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___fallback_0)); }
	inline DecoderFallback_t3123823036 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t2402303981 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t2402303981 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2204182725_H
#ifndef DECODER_T727205015_H
#define DECODER_T727205015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.CodePageEncoding/Decoder
struct  Decoder_t727205015  : public RuntimeObject
{
public:
	// System.Text.Encoding System.Text.CodePageEncoding/Decoder::encoding
	Encoding_t1523322056 * ___encoding_0;
	// System.Text.Decoder System.Text.CodePageEncoding/Decoder::realObject
	Decoder_t2204182725 * ___realObject_1;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(Decoder_t727205015, ___encoding_0)); }
	inline Encoding_t1523322056 * get_encoding_0() const { return ___encoding_0; }
	inline Encoding_t1523322056 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(Encoding_t1523322056 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_realObject_1() { return static_cast<int32_t>(offsetof(Decoder_t727205015, ___realObject_1)); }
	inline Decoder_t2204182725 * get_realObject_1() const { return ___realObject_1; }
	inline Decoder_t2204182725 ** get_address_of_realObject_1() { return &___realObject_1; }
	inline void set_realObject_1(Decoder_t2204182725 * value)
	{
		___realObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___realObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T727205015_H
#ifndef CODEPAGEENCODING_T3101721897_H
#define CODEPAGEENCODING_T3101721897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.CodePageEncoding
struct  CodePageEncoding_t3101721897  : public RuntimeObject
{
public:
	// System.Int32 System.Text.CodePageEncoding::codePage
	int32_t ___codePage_0;
	// System.Boolean System.Text.CodePageEncoding::isReadOnly
	bool ___isReadOnly_1;
	// System.Text.EncoderFallback System.Text.CodePageEncoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_2;
	// System.Text.DecoderFallback System.Text.CodePageEncoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_3;
	// System.Text.Encoding System.Text.CodePageEncoding::realObject
	Encoding_t1523322056 * ___realObject_4;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(CodePageEncoding_t3101721897, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(CodePageEncoding_t3101721897, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_2() { return static_cast<int32_t>(offsetof(CodePageEncoding_t3101721897, ___encoderFallback_2)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_2() const { return ___encoderFallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_2() { return &___encoderFallback_2; }
	inline void set_encoderFallback_2(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_2), value);
	}

	inline static int32_t get_offset_of_decoderFallback_3() { return static_cast<int32_t>(offsetof(CodePageEncoding_t3101721897, ___decoderFallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_3() const { return ___decoderFallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_3() { return &___decoderFallback_3; }
	inline void set_decoderFallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_3), value);
	}

	inline static int32_t get_offset_of_realObject_4() { return static_cast<int32_t>(offsetof(CodePageEncoding_t3101721897, ___realObject_4)); }
	inline Encoding_t1523322056 * get_realObject_4() const { return ___realObject_4; }
	inline Encoding_t1523322056 ** get_address_of_realObject_4() { return &___realObject_4; }
	inline void set_realObject_4(Encoding_t1523322056 * value)
	{
		___realObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___realObject_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPAGEENCODING_T3101721897_H
#ifndef SECURITYATTRIBUTE_T3566489056_H
#define SECURITYATTRIBUTE_T3566489056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t3566489056  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3566489056_H
#ifndef TIMERCOMPARER_T2774265395_H
#define TIMERCOMPARER_T2774265395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/TimerComparer
struct  TimerComparer_t2774265395  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCOMPARER_T2774265395_H
#ifndef SECURITYELEMENT_T1046076091_H
#define SECURITYELEMENT_T1046076091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t1046076091  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t2718874744 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t2718874744 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___attributes_2)); }
	inline ArrayList_t2718874744 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t2718874744 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t2718874744 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___children_3)); }
	inline ArrayList_t2718874744 * get_children_3() const { return ___children_3; }
	inline ArrayList_t2718874744 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t2718874744 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t1046076091_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3528271667* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3528271667* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3528271667* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3528271667* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3528271667* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3528271667* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3528271667* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3528271667* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3528271667* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3528271667* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3528271667* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T1046076091_H
#ifndef UNICODEDECODER_T872550992_H
#define UNICODEDECODER_T872550992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t872550992  : public Decoder_t2204182725
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t872550992, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t872550992, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T872550992_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
#ifndef UNICODEENCODING_T1959134050_H
#define UNICODEENCODING_T1959134050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t1959134050  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_32;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_33;

public:
	inline static int32_t get_offset_of_bigEndian_32() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___bigEndian_32)); }
	inline bool get_bigEndian_32() const { return ___bigEndian_32; }
	inline bool* get_address_of_bigEndian_32() { return &___bigEndian_32; }
	inline void set_bigEndian_32(bool value)
	{
		___bigEndian_32 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_33() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___byteOrderMark_33)); }
	inline bool get_byteOrderMark_33() const { return ___byteOrderMark_33; }
	inline bool* get_address_of_byteOrderMark_33() { return &___byteOrderMark_33; }
	inline void set_byteOrderMark_33(bool value)
	{
		___byteOrderMark_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T1959134050_H
#ifndef UTF8ENCODER_T3216382797_H
#define UTF8ENCODER_T3216382797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Encoder
struct  UTF8Encoder_t3216382797  : public Encoder_t2198218980
{
public:
	// System.Char System.Text.UTF8Encoding/UTF8Encoder::leftOverForCount
	Il2CppChar ___leftOverForCount_2;
	// System.Char System.Text.UTF8Encoding/UTF8Encoder::leftOverForConv
	Il2CppChar ___leftOverForConv_3;

public:
	inline static int32_t get_offset_of_leftOverForCount_2() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3216382797, ___leftOverForCount_2)); }
	inline Il2CppChar get_leftOverForCount_2() const { return ___leftOverForCount_2; }
	inline Il2CppChar* get_address_of_leftOverForCount_2() { return &___leftOverForCount_2; }
	inline void set_leftOverForCount_2(Il2CppChar value)
	{
		___leftOverForCount_2 = value;
	}

	inline static int32_t get_offset_of_leftOverForConv_3() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3216382797, ___leftOverForConv_3)); }
	inline Il2CppChar get_leftOverForConv_3() const { return ___leftOverForConv_3; }
	inline Il2CppChar* get_address_of_leftOverForConv_3() { return &___leftOverForConv_3; }
	inline void set_leftOverForConv_3(Il2CppChar value)
	{
		___leftOverForConv_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODER_T3216382797_H
#ifndef UTF8DECODER_T2159214862_H
#define UTF8DECODER_T2159214862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t2159214862  : public Decoder_t2204182725
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T2159214862_H
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_30;

public:
	inline static int32_t get_offset_of_emitIdentifier_30() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitIdentifier_30)); }
	inline bool get_emitIdentifier_30() const { return ___emitIdentifier_30; }
	inline bool* get_address_of_emitIdentifier_30() { return &___emitIdentifier_30; }
	inline void set_emitIdentifier_30(bool value)
	{
		___emitIdentifier_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef READERWRITERLOCK_T367846299_H
#define READERWRITERLOCK_T367846299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ReaderWriterLock
struct  ReaderWriterLock_t367846299  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.ReaderWriterLock::seq_num
	int32_t ___seq_num_0;
	// System.Int32 System.Threading.ReaderWriterLock::state
	int32_t ___state_1;
	// System.Int32 System.Threading.ReaderWriterLock::readers
	int32_t ___readers_2;
	// System.Threading.LockQueue System.Threading.ReaderWriterLock::writer_queue
	LockQueue_t2679652224 * ___writer_queue_3;
	// System.Collections.Hashtable System.Threading.ReaderWriterLock::reader_locks
	Hashtable_t1853889766 * ___reader_locks_4;
	// System.Int32 System.Threading.ReaderWriterLock::writer_lock_owner
	int32_t ___writer_lock_owner_5;

public:
	inline static int32_t get_offset_of_seq_num_0() { return static_cast<int32_t>(offsetof(ReaderWriterLock_t367846299, ___seq_num_0)); }
	inline int32_t get_seq_num_0() const { return ___seq_num_0; }
	inline int32_t* get_address_of_seq_num_0() { return &___seq_num_0; }
	inline void set_seq_num_0(int32_t value)
	{
		___seq_num_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(ReaderWriterLock_t367846299, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_readers_2() { return static_cast<int32_t>(offsetof(ReaderWriterLock_t367846299, ___readers_2)); }
	inline int32_t get_readers_2() const { return ___readers_2; }
	inline int32_t* get_address_of_readers_2() { return &___readers_2; }
	inline void set_readers_2(int32_t value)
	{
		___readers_2 = value;
	}

	inline static int32_t get_offset_of_writer_queue_3() { return static_cast<int32_t>(offsetof(ReaderWriterLock_t367846299, ___writer_queue_3)); }
	inline LockQueue_t2679652224 * get_writer_queue_3() const { return ___writer_queue_3; }
	inline LockQueue_t2679652224 ** get_address_of_writer_queue_3() { return &___writer_queue_3; }
	inline void set_writer_queue_3(LockQueue_t2679652224 * value)
	{
		___writer_queue_3 = value;
		Il2CppCodeGenWriteBarrier((&___writer_queue_3), value);
	}

	inline static int32_t get_offset_of_reader_locks_4() { return static_cast<int32_t>(offsetof(ReaderWriterLock_t367846299, ___reader_locks_4)); }
	inline Hashtable_t1853889766 * get_reader_locks_4() const { return ___reader_locks_4; }
	inline Hashtable_t1853889766 ** get_address_of_reader_locks_4() { return &___reader_locks_4; }
	inline void set_reader_locks_4(Hashtable_t1853889766 * value)
	{
		___reader_locks_4 = value;
		Il2CppCodeGenWriteBarrier((&___reader_locks_4), value);
	}

	inline static int32_t get_offset_of_writer_lock_owner_5() { return static_cast<int32_t>(offsetof(ReaderWriterLock_t367846299, ___writer_lock_owner_5)); }
	inline int32_t get_writer_lock_owner_5() const { return ___writer_lock_owner_5; }
	inline int32_t* get_address_of_writer_lock_owner_5() { return &___writer_lock_owner_5; }
	inline void set_writer_lock_owner_5(int32_t value)
	{
		___writer_lock_owner_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READERWRITERLOCK_T367846299_H
#ifndef TIMER_T716671026_H
#define TIMER_T716671026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer
struct  Timer_t716671026  : public MarshalByRefObject_t2760389100
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t1438585625 * ___callback_3;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_4;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_5;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_6;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_7;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_8;

public:
	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___callback_3)); }
	inline TimerCallback_t1438585625 * get_callback_3() const { return ___callback_3; }
	inline TimerCallback_t1438585625 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(TimerCallback_t1438585625 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___callback_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___state_4)); }
	inline RuntimeObject * get_state_4() const { return ___state_4; }
	inline RuntimeObject ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(RuntimeObject * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_due_time_ms_5() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___due_time_ms_5)); }
	inline int64_t get_due_time_ms_5() const { return ___due_time_ms_5; }
	inline int64_t* get_address_of_due_time_ms_5() { return &___due_time_ms_5; }
	inline void set_due_time_ms_5(int64_t value)
	{
		___due_time_ms_5 = value;
	}

	inline static int32_t get_offset_of_period_ms_6() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___period_ms_6)); }
	inline int64_t get_period_ms_6() const { return ___period_ms_6; }
	inline int64_t* get_address_of_period_ms_6() { return &___period_ms_6; }
	inline void set_period_ms_6(int64_t value)
	{
		___period_ms_6 = value;
	}

	inline static int32_t get_offset_of_next_run_7() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___next_run_7)); }
	inline int64_t get_next_run_7() const { return ___next_run_7; }
	inline int64_t* get_address_of_next_run_7() { return &___next_run_7; }
	inline void set_next_run_7(int64_t value)
	{
		___next_run_7 = value;
	}

	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}
};

struct Timer_t716671026_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t3215764947 * ___scheduler_2;

public:
	inline static int32_t get_offset_of_scheduler_2() { return static_cast<int32_t>(offsetof(Timer_t716671026_StaticFields, ___scheduler_2)); }
	inline Scheduler_t3215764947 * get_scheduler_2() const { return ___scheduler_2; }
	inline Scheduler_t3215764947 ** get_address_of_scheduler_2() { return &___scheduler_2; }
	inline void set_scheduler_2(Scheduler_t3215764947 * value)
	{
		___scheduler_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T716671026_H
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
#ifndef LOCKCOOKIE_T2972311325_H
#define LOCKCOOKIE_T2972311325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.LockCookie
struct  LockCookie_t2972311325 
{
public:
	// System.Int32 System.Threading.LockCookie::ThreadId
	int32_t ___ThreadId_0;
	// System.Int32 System.Threading.LockCookie::ReaderLocks
	int32_t ___ReaderLocks_1;
	// System.Int32 System.Threading.LockCookie::WriterLocks
	int32_t ___WriterLocks_2;

public:
	inline static int32_t get_offset_of_ThreadId_0() { return static_cast<int32_t>(offsetof(LockCookie_t2972311325, ___ThreadId_0)); }
	inline int32_t get_ThreadId_0() const { return ___ThreadId_0; }
	inline int32_t* get_address_of_ThreadId_0() { return &___ThreadId_0; }
	inline void set_ThreadId_0(int32_t value)
	{
		___ThreadId_0 = value;
	}

	inline static int32_t get_offset_of_ReaderLocks_1() { return static_cast<int32_t>(offsetof(LockCookie_t2972311325, ___ReaderLocks_1)); }
	inline int32_t get_ReaderLocks_1() const { return ___ReaderLocks_1; }
	inline int32_t* get_address_of_ReaderLocks_1() { return &___ReaderLocks_1; }
	inline void set_ReaderLocks_1(int32_t value)
	{
		___ReaderLocks_1 = value;
	}

	inline static int32_t get_offset_of_WriterLocks_2() { return static_cast<int32_t>(offsetof(LockCookie_t2972311325, ___WriterLocks_2)); }
	inline int32_t get_WriterLocks_2() const { return ___WriterLocks_2; }
	inline int32_t* get_address_of_WriterLocks_2() { return &___WriterLocks_2; }
	inline void set_WriterLocks_2(int32_t value)
	{
		___WriterLocks_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCKCOOKIE_T2972311325_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef UTF7ENCODER_T3519702240_H
#define UTF7ENCODER_T3519702240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Encoder
struct  UTF7Encoder_t3519702240  : public Encoder_t2198218980
{
public:
	// System.Boolean System.Text.UTF7Encoding/UTF7Encoder::allowOptionals
	bool ___allowOptionals_2;
	// System.Int32 System.Text.UTF7Encoding/UTF7Encoder::leftOver
	int32_t ___leftOver_3;
	// System.Boolean System.Text.UTF7Encoding/UTF7Encoder::isInShifted
	bool ___isInShifted_4;

public:
	inline static int32_t get_offset_of_allowOptionals_2() { return static_cast<int32_t>(offsetof(UTF7Encoder_t3519702240, ___allowOptionals_2)); }
	inline bool get_allowOptionals_2() const { return ___allowOptionals_2; }
	inline bool* get_address_of_allowOptionals_2() { return &___allowOptionals_2; }
	inline void set_allowOptionals_2(bool value)
	{
		___allowOptionals_2 = value;
	}

	inline static int32_t get_offset_of_leftOver_3() { return static_cast<int32_t>(offsetof(UTF7Encoder_t3519702240, ___leftOver_3)); }
	inline int32_t get_leftOver_3() const { return ___leftOver_3; }
	inline int32_t* get_address_of_leftOver_3() { return &___leftOver_3; }
	inline void set_leftOver_3(int32_t value)
	{
		___leftOver_3 = value;
	}

	inline static int32_t get_offset_of_isInShifted_4() { return static_cast<int32_t>(offsetof(UTF7Encoder_t3519702240, ___isInShifted_4)); }
	inline bool get_isInShifted_4() const { return ___isInShifted_4; }
	inline bool* get_address_of_isInShifted_4() { return &___isInShifted_4; }
	inline void set_isInShifted_4(bool value)
	{
		___isInShifted_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODER_T3519702240_H
#ifndef FORWARDINGENCODER_T2987501656_H
#define FORWARDINGENCODER_T2987501656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingEncoder
struct  ForwardingEncoder_t2987501656  : public Encoder_t2198218980
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingEncoder::encoding
	Encoding_t1523322056 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingEncoder_t2987501656, ___encoding_2)); }
	inline Encoding_t1523322056 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1523322056 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGENCODER_T2987501656_H
#ifndef FORWARDINGDECODER_T3503728819_H
#define FORWARDINGDECODER_T3503728819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t3503728819  : public Decoder_t2204182725
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t1523322056 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t3503728819, ___encoding_2)); }
	inline Encoding_t1523322056 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1523322056 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T3503728819_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t1863187162  : public EncoderFallbackBuffer_t3523102303
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1623206753_H
#define ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1623206753  : public EncoderFallback_t1188251036
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1623206753, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3597232471  : public EncoderFallbackBuffer_t3523102303
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifndef SECURITYFRAME_T1422462475_H
#define SECURITYFRAME_T1422462475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t1422462475 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t1571427825 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t223948603 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t223948603 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t223948603 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____domain_0)); }
	inline AppDomain_t1571427825 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t1571427825 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t1571427825 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____assert_2)); }
	inline PermissionSet_t223948603 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t223948603 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t223948603 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____deny_3)); }
	inline PermissionSet_t223948603 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t223948603 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t223948603 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____permitonly_4)); }
	inline PermissionSet_t223948603 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t223948603 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t223948603 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1422462475_marshaled_pinvoke
{
	AppDomain_t1571427825 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t223948603 * ____assert_2;
	PermissionSet_t223948603 * ____deny_3;
	PermissionSet_t223948603 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1422462475_marshaled_com
{
	AppDomain_t1571427825 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t223948603 * ____assert_2;
	PermissionSet_t223948603 * ____deny_3;
	PermissionSet_t223948603 * ____permitonly_4;
};
#endif // SECURITYFRAME_T1422462475_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#define SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t3505979402  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#ifndef DECODEREXCEPTIONFALLBACK_T3981484394_H
#define DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t3981484394  : public DecoderFallback_t3123823036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifndef DECODERREPLACEMENTFALLBACK_T1462101135_H
#define DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t1462101135  : public DecoderFallback_t3123823036
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t1462101135, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifndef ASCIIENCODING_T3446586211_H
#define ASCIIENCODING_T3446586211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3446586211  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3446586211_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t841144779  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifndef ENCODEREXCEPTIONFALLBACK_T1243849599_H
#define ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t1243849599  : public EncoderFallback_t1188251036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifndef SECURITYTREATASSAFEATTRIBUTE_T3506736250_H
#define SECURITYTREATASSAFEATTRIBUTE_T3506736250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityTreatAsSafeAttribute
struct  SecurityTreatAsSafeAttribute_t3506736250  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYTREATASSAFEATTRIBUTE_T3506736250_H
#ifndef UTF7DECODER_T2247208115_H
#define UTF7DECODER_T2247208115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t2247208115  : public Decoder_t2204182725
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t2247208115, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T2247208115_H
#ifndef UTF7ENCODING_T2644108479_H
#define UTF7ENCODING_T2644108479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t2644108479  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_31;

public:
	inline static int32_t get_offset_of_allowOptionals_31() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___allowOptionals_31)); }
	inline bool get_allowOptionals_31() const { return ___allowOptionals_31; }
	inline bool* get_address_of_allowOptionals_31() { return &___allowOptionals_31; }
	inline void set_allowOptionals_31(bool value)
	{
		___allowOptionals_31 = value;
	}
};

struct UTF7Encoding_t2644108479_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t4116647657* ___encodingRules_32;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t2651576203* ___base64Values_33;

public:
	inline static int32_t get_offset_of_encodingRules_32() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479_StaticFields, ___encodingRules_32)); }
	inline ByteU5BU5D_t4116647657* get_encodingRules_32() const { return ___encodingRules_32; }
	inline ByteU5BU5D_t4116647657** get_address_of_encodingRules_32() { return &___encodingRules_32; }
	inline void set_encodingRules_32(ByteU5BU5D_t4116647657* value)
	{
		___encodingRules_32 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_32), value);
	}

	inline static int32_t get_offset_of_base64Values_33() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479_StaticFields, ___base64Values_33)); }
	inline SByteU5BU5D_t2651576203* get_base64Values_33() const { return ___base64Values_33; }
	inline SByteU5BU5D_t2651576203** get_address_of_base64Values_33() { return &___base64Values_33; }
	inline void set_base64Values_33(SByteU5BU5D_t2651576203* value)
	{
		___base64Values_33 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T2644108479_H
#ifndef UTF32DECODER_T635925672_H
#define UTF32DECODER_T635925672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t635925672  : public Decoder_t2204182725
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T635925672_H
#ifndef UTF32ENCODING_T312252005_H
#define UTF32ENCODING_T312252005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t312252005  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_31;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_32;

public:
	inline static int32_t get_offset_of_bigEndian_31() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___bigEndian_31)); }
	inline bool get_bigEndian_31() const { return ___bigEndian_31; }
	inline bool* get_address_of_bigEndian_31() { return &___bigEndian_31; }
	inline void set_bigEndian_31(bool value)
	{
		___bigEndian_31 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_32() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___byteOrderMark_32)); }
	inline bool get_byteOrderMark_32() const { return ___byteOrderMark_32; }
	inline bool* get_address_of_byteOrderMark_32() { return &___byteOrderMark_32; }
	inline void set_byteOrderMark_32(bool value)
	{
		___byteOrderMark_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T312252005_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t90938522  : public DecoderFallbackBuffer_t2402303981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t744305558  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#ifndef LATIN1ENCODING_T950549005_H
#define LATIN1ENCODING_T950549005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t950549005  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T950549005_H
#ifndef SECURITYTRANSPARENTATTRIBUTE_T2529084213_H
#define SECURITYTRANSPARENTATTRIBUTE_T2529084213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityTransparentAttribute
struct  SecurityTransparentAttribute_t2529084213  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYTRANSPARENTATTRIBUTE_T2529084213_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T3228760399_H
#define UNVERIFIABLECODEATTRIBUTE_T3228760399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t3228760399  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T3228760399_H
#ifndef THREADPRIORITY_T1551740086_H
#define THREADPRIORITY_T1551740086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPriority
struct  ThreadPriority_t1551740086 
{
public:
	// System.Int32 System.Threading.ThreadPriority::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadPriority_t1551740086, ___value___1)); }
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
#endif // THREADPRIORITY_T1551740086_H
#ifndef THREADSTARTEXCEPTION_T2917002433_H
#define THREADSTARTEXCEPTION_T2917002433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStartException
struct  ThreadStartException_t2917002433  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTARTEXCEPTION_T2917002433_H
#ifndef ACCESSVIOLATIONEXCEPTION_T339633883_H
#define ACCESSVIOLATIONEXCEPTION_T339633883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AccessViolationException
struct  AccessViolationException_t339633883  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCESSVIOLATIONEXCEPTION_T339633883_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
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
#endif // THREADSTATE_T2533302383_H
#ifndef THREADSTATEEXCEPTION_T3003788475_H
#define THREADSTATEEXCEPTION_T3003788475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStateException
struct  ThreadStateException_t3003788475  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATEEXCEPTION_T3003788475_H
#ifndef VERIFICATIONEXCEPTION_T1599351733_H
#define VERIFICATIONEXCEPTION_T1599351733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.VerificationException
struct  VerificationException_t1599351733  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERIFICATIONEXCEPTION_T1599351733_H
#ifndef SECURITYZONE_T1272287263_H
#define SECURITYZONE_T1272287263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t1272287263 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityZone_t1272287263, ___value___1)); }
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
#endif // SECURITYZONE_T1272287263_H
#ifndef CONTEXTFORM_T1052573041_H
#define CONTEXTFORM_T1052573041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ActivationContext/ContextForm
struct  ContextForm_t1052573041 
{
public:
	// System.Int32 System.ActivationContext/ContextForm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContextForm_t1052573041, ___value___1)); }
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
#endif // CONTEXTFORM_T1052573041_H
#ifndef XMLSYNTAXEXCEPTION_T2973594484_H
#define XMLSYNTAXEXCEPTION_T2973594484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.XmlSyntaxException
struct  XmlSyntaxException_t2973594484  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSYNTAXEXCEPTION_T2973594484_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef WAITHANDLECANNOTBEOPENEDEXCEPTION_T4284829474_H
#define WAITHANDLECANNOTBEOPENEDEXCEPTION_T4284829474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandleCannotBeOpenedException
struct  WaitHandleCannotBeOpenedException_t4284829474  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLECANNOTBEOPENEDEXCEPTION_T4284829474_H
#ifndef RUNTIMEDECLSECURITYENTRY_T3144469156_H
#define RUNTIMEDECLSECURITYENTRY_T3144469156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t3144469156 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	intptr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___blob_0)); }
	inline intptr_t get_blob_0() const { return ___blob_0; }
	inline intptr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(intptr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T3144469156_H
#ifndef EVENTRESETMODE_T3817241503_H
#define EVENTRESETMODE_T3817241503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t3817241503 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t3817241503, ___value___1)); }
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
#endif // EVENTRESETMODE_T3817241503_H
#ifndef SECURITYCRITICALSCOPE_T606020417_H
#define SECURITYCRITICALSCOPE_T606020417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t606020417 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t606020417, ___value___1)); }
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
#endif // SECURITYCRITICALSCOPE_T606020417_H
#ifndef ASYNCFLOWCONTROLTYPE_T4205194786_H
#define ASYNCFLOWCONTROLTYPE_T4205194786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AsyncFlowControlType
struct  AsyncFlowControlType_t4205194786 
{
public:
	// System.Int32 System.Threading.AsyncFlowControlType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AsyncFlowControlType_t4205194786, ___value___1)); }
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
#endif // ASYNCFLOWCONTROLTYPE_T4205194786_H
#ifndef APARTMENTSTATE_T920447174_H
#define APARTMENTSTATE_T920447174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ApartmentState
struct  ApartmentState_t920447174 
{
public:
	// System.Int32 System.Threading.ApartmentState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ApartmentState_t920447174, ___value___1)); }
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
#endif // APARTMENTSTATE_T920447174_H
#ifndef ABANDONEDMUTEXEXCEPTION_T2390562684_H
#define ABANDONEDMUTEXEXCEPTION_T2390562684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AbandonedMutexException
struct  AbandonedMutexException_t2390562684  : public SystemException_t176217640
{
public:
	// System.Threading.Mutex System.Threading.AbandonedMutexException::mutex
	Mutex_t3066672582 * ___mutex_12;
	// System.Int32 System.Threading.AbandonedMutexException::mutex_index
	int32_t ___mutex_index_13;

public:
	inline static int32_t get_offset_of_mutex_12() { return static_cast<int32_t>(offsetof(AbandonedMutexException_t2390562684, ___mutex_12)); }
	inline Mutex_t3066672582 * get_mutex_12() const { return ___mutex_12; }
	inline Mutex_t3066672582 ** get_address_of_mutex_12() { return &___mutex_12; }
	inline void set_mutex_12(Mutex_t3066672582 * value)
	{
		___mutex_12 = value;
		Il2CppCodeGenWriteBarrier((&___mutex_12), value);
	}

	inline static int32_t get_offset_of_mutex_index_13() { return static_cast<int32_t>(offsetof(AbandonedMutexException_t2390562684, ___mutex_index_13)); }
	inline int32_t get_mutex_index_13() const { return ___mutex_index_13; }
	inline int32_t* get_address_of_mutex_index_13() { return &___mutex_index_13; }
	inline void set_mutex_index_13(int32_t value)
	{
		___mutex_index_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABANDONEDMUTEXEXCEPTION_T2390562684_H
#ifndef NORMALIZATIONFORM_T3110136658_H
#define NORMALIZATIONFORM_T3110136658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.NormalizationForm
struct  NormalizationForm_t3110136658 
{
public:
	// System.Int32 System.Text.NormalizationForm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NormalizationForm_t3110136658, ___value___1)); }
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
#endif // NORMALIZATIONFORM_T3110136658_H
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___1)); }
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
#endif // SECURITYACTION_T569814076_H
#ifndef THREADINTERRUPTEDEXCEPTION_T3240955163_H
#define THREADINTERRUPTEDEXCEPTION_T3240955163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t3240955163  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINTERRUPTEDEXCEPTION_T3240955163_H
#ifndef THREADABORTEXCEPTION_T4074510458_H
#define THREADABORTEXCEPTION_T4074510458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadAbortException
struct  ThreadAbortException_t4074510458  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABORTEXCEPTION_T4074510458_H
#ifndef SYNCHRONIZATIONLOCKEXCEPTION_T841761767_H
#define SYNCHRONIZATIONLOCKEXCEPTION_T841761767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationLockException
struct  SynchronizationLockException_t841761767  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONLOCKEXCEPTION_T841761767_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_13;

public:
	inline static int32_t get_offset_of_param_name_13() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_13)); }
	inline String_t* get_param_name_13() const { return ___param_name_13; }
	inline String_t** get_address_of_param_name_13() { return &___param_name_13; }
	inline void set_param_name_13(String_t* value)
	{
		___param_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef REGISTEREDWAITHANDLE_T1529538454_H
#define REGISTEREDWAITHANDLE_T1529538454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.RegisteredWaitHandle
struct  RegisteredWaitHandle_t1529538454  : public MarshalByRefObject_t2760389100
{
public:
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_waitObject
	WaitHandle_t1743403487 * ____waitObject_1;
	// System.Threading.WaitOrTimerCallback System.Threading.RegisteredWaitHandle::_callback
	WaitOrTimerCallback_t1973723282 * ____callback_2;
	// System.TimeSpan System.Threading.RegisteredWaitHandle::_timeout
	TimeSpan_t881159249  ____timeout_3;
	// System.Object System.Threading.RegisteredWaitHandle::_state
	RuntimeObject * ____state_4;
	// System.Boolean System.Threading.RegisteredWaitHandle::_executeOnlyOnce
	bool ____executeOnlyOnce_5;
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_finalEvent
	WaitHandle_t1743403487 * ____finalEvent_6;
	// System.Threading.ManualResetEvent System.Threading.RegisteredWaitHandle::_cancelEvent
	ManualResetEvent_t451242010 * ____cancelEvent_7;
	// System.Int32 System.Threading.RegisteredWaitHandle::_callsInProcess
	int32_t ____callsInProcess_8;
	// System.Boolean System.Threading.RegisteredWaitHandle::_unregistered
	bool ____unregistered_9;

public:
	inline static int32_t get_offset_of__waitObject_1() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____waitObject_1)); }
	inline WaitHandle_t1743403487 * get__waitObject_1() const { return ____waitObject_1; }
	inline WaitHandle_t1743403487 ** get_address_of__waitObject_1() { return &____waitObject_1; }
	inline void set__waitObject_1(WaitHandle_t1743403487 * value)
	{
		____waitObject_1 = value;
		Il2CppCodeGenWriteBarrier((&____waitObject_1), value);
	}

	inline static int32_t get_offset_of__callback_2() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____callback_2)); }
	inline WaitOrTimerCallback_t1973723282 * get__callback_2() const { return ____callback_2; }
	inline WaitOrTimerCallback_t1973723282 ** get_address_of__callback_2() { return &____callback_2; }
	inline void set__callback_2(WaitOrTimerCallback_t1973723282 * value)
	{
		____callback_2 = value;
		Il2CppCodeGenWriteBarrier((&____callback_2), value);
	}

	inline static int32_t get_offset_of__timeout_3() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____timeout_3)); }
	inline TimeSpan_t881159249  get__timeout_3() const { return ____timeout_3; }
	inline TimeSpan_t881159249 * get_address_of__timeout_3() { return &____timeout_3; }
	inline void set__timeout_3(TimeSpan_t881159249  value)
	{
		____timeout_3 = value;
	}

	inline static int32_t get_offset_of__state_4() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____state_4)); }
	inline RuntimeObject * get__state_4() const { return ____state_4; }
	inline RuntimeObject ** get_address_of__state_4() { return &____state_4; }
	inline void set__state_4(RuntimeObject * value)
	{
		____state_4 = value;
		Il2CppCodeGenWriteBarrier((&____state_4), value);
	}

	inline static int32_t get_offset_of__executeOnlyOnce_5() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____executeOnlyOnce_5)); }
	inline bool get__executeOnlyOnce_5() const { return ____executeOnlyOnce_5; }
	inline bool* get_address_of__executeOnlyOnce_5() { return &____executeOnlyOnce_5; }
	inline void set__executeOnlyOnce_5(bool value)
	{
		____executeOnlyOnce_5 = value;
	}

	inline static int32_t get_offset_of__finalEvent_6() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____finalEvent_6)); }
	inline WaitHandle_t1743403487 * get__finalEvent_6() const { return ____finalEvent_6; }
	inline WaitHandle_t1743403487 ** get_address_of__finalEvent_6() { return &____finalEvent_6; }
	inline void set__finalEvent_6(WaitHandle_t1743403487 * value)
	{
		____finalEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&____finalEvent_6), value);
	}

	inline static int32_t get_offset_of__cancelEvent_7() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____cancelEvent_7)); }
	inline ManualResetEvent_t451242010 * get__cancelEvent_7() const { return ____cancelEvent_7; }
	inline ManualResetEvent_t451242010 ** get_address_of__cancelEvent_7() { return &____cancelEvent_7; }
	inline void set__cancelEvent_7(ManualResetEvent_t451242010 * value)
	{
		____cancelEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&____cancelEvent_7), value);
	}

	inline static int32_t get_offset_of__callsInProcess_8() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____callsInProcess_8)); }
	inline int32_t get__callsInProcess_8() const { return ____callsInProcess_8; }
	inline int32_t* get_address_of__callsInProcess_8() { return &____callsInProcess_8; }
	inline void set__callsInProcess_8(int32_t value)
	{
		____callsInProcess_8 = value;
	}

	inline static int32_t get_offset_of__unregistered_9() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____unregistered_9)); }
	inline bool get__unregistered_9() const { return ____unregistered_9; }
	inline bool* get_address_of__unregistered_9() { return &____unregistered_9; }
	inline void set__unregistered_9(bool value)
	{
		____unregistered_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTEREDWAITHANDLE_T1529538454_H
#ifndef OVERLAPPED_T682382437_H
#define OVERLAPPED_T682382437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Overlapped
struct  Overlapped_t682382437  : public RuntimeObject
{
public:
	// System.IAsyncResult System.Threading.Overlapped::ares
	RuntimeObject* ___ares_0;
	// System.Int32 System.Threading.Overlapped::offsetL
	int32_t ___offsetL_1;
	// System.Int32 System.Threading.Overlapped::offsetH
	int32_t ___offsetH_2;
	// System.Int32 System.Threading.Overlapped::evt
	int32_t ___evt_3;
	// System.IntPtr System.Threading.Overlapped::evt_ptr
	intptr_t ___evt_ptr_4;

public:
	inline static int32_t get_offset_of_ares_0() { return static_cast<int32_t>(offsetof(Overlapped_t682382437, ___ares_0)); }
	inline RuntimeObject* get_ares_0() const { return ___ares_0; }
	inline RuntimeObject** get_address_of_ares_0() { return &___ares_0; }
	inline void set_ares_0(RuntimeObject* value)
	{
		___ares_0 = value;
		Il2CppCodeGenWriteBarrier((&___ares_0), value);
	}

	inline static int32_t get_offset_of_offsetL_1() { return static_cast<int32_t>(offsetof(Overlapped_t682382437, ___offsetL_1)); }
	inline int32_t get_offsetL_1() const { return ___offsetL_1; }
	inline int32_t* get_address_of_offsetL_1() { return &___offsetL_1; }
	inline void set_offsetL_1(int32_t value)
	{
		___offsetL_1 = value;
	}

	inline static int32_t get_offset_of_offsetH_2() { return static_cast<int32_t>(offsetof(Overlapped_t682382437, ___offsetH_2)); }
	inline int32_t get_offsetH_2() const { return ___offsetH_2; }
	inline int32_t* get_address_of_offsetH_2() { return &___offsetH_2; }
	inline void set_offsetH_2(int32_t value)
	{
		___offsetH_2 = value;
	}

	inline static int32_t get_offset_of_evt_3() { return static_cast<int32_t>(offsetof(Overlapped_t682382437, ___evt_3)); }
	inline int32_t get_evt_3() const { return ___evt_3; }
	inline int32_t* get_address_of_evt_3() { return &___evt_3; }
	inline void set_evt_3(int32_t value)
	{
		___evt_3 = value;
	}

	inline static int32_t get_offset_of_evt_ptr_4() { return static_cast<int32_t>(offsetof(Overlapped_t682382437, ___evt_ptr_4)); }
	inline intptr_t get_evt_ptr_4() const { return ___evt_ptr_4; }
	inline intptr_t* get_address_of_evt_ptr_4() { return &___evt_ptr_4; }
	inline void set_evt_ptr_4(intptr_t value)
	{
		___evt_ptr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERLAPPED_T682382437_H
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
#ifndef SECURITYEXCEPTION_T975544473_H
#define SECURITYEXCEPTION_T975544473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t975544473  : public SystemException_t176217640
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_12;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_13;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_14;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_15;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_16;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_17;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_18;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2008144148 * ____evidence_19;
	// System.Security.Permissions.SecurityAction System.Security.SecurityException::_action
	int32_t ____action_20;
	// System.Object System.Security.SecurityException::_denyset
	RuntimeObject * ____denyset_21;
	// System.Object System.Security.SecurityException::_permitset
	RuntimeObject * ____permitset_22;
	// System.Reflection.AssemblyName System.Security.SecurityException::_assembly
	AssemblyName_t270931938 * ____assembly_23;
	// System.String System.Security.SecurityException::_url
	String_t* ____url_24;
	// System.Security.SecurityZone System.Security.SecurityException::_zone
	int32_t ____zone_25;

public:
	inline static int32_t get_offset_of_permissionState_12() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionState_12)); }
	inline String_t* get_permissionState_12() const { return ___permissionState_12; }
	inline String_t** get_address_of_permissionState_12() { return &___permissionState_12; }
	inline void set_permissionState_12(String_t* value)
	{
		___permissionState_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_12), value);
	}

	inline static int32_t get_offset_of_permissionType_13() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionType_13)); }
	inline Type_t * get_permissionType_13() const { return ___permissionType_13; }
	inline Type_t ** get_address_of_permissionType_13() { return &___permissionType_13; }
	inline void set_permissionType_13(Type_t * value)
	{
		___permissionType_13 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_13), value);
	}

	inline static int32_t get_offset_of__granted_14() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____granted_14)); }
	inline String_t* get__granted_14() const { return ____granted_14; }
	inline String_t** get_address_of__granted_14() { return &____granted_14; }
	inline void set__granted_14(String_t* value)
	{
		____granted_14 = value;
		Il2CppCodeGenWriteBarrier((&____granted_14), value);
	}

	inline static int32_t get_offset_of__refused_15() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____refused_15)); }
	inline String_t* get__refused_15() const { return ____refused_15; }
	inline String_t** get_address_of__refused_15() { return &____refused_15; }
	inline void set__refused_15(String_t* value)
	{
		____refused_15 = value;
		Il2CppCodeGenWriteBarrier((&____refused_15), value);
	}

	inline static int32_t get_offset_of__demanded_16() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____demanded_16)); }
	inline RuntimeObject * get__demanded_16() const { return ____demanded_16; }
	inline RuntimeObject ** get_address_of__demanded_16() { return &____demanded_16; }
	inline void set__demanded_16(RuntimeObject * value)
	{
		____demanded_16 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_16), value);
	}

	inline static int32_t get_offset_of__firstperm_17() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____firstperm_17)); }
	inline RuntimeObject* get__firstperm_17() const { return ____firstperm_17; }
	inline RuntimeObject** get_address_of__firstperm_17() { return &____firstperm_17; }
	inline void set__firstperm_17(RuntimeObject* value)
	{
		____firstperm_17 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_17), value);
	}

	inline static int32_t get_offset_of__method_18() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____method_18)); }
	inline MethodInfo_t * get__method_18() const { return ____method_18; }
	inline MethodInfo_t ** get_address_of__method_18() { return &____method_18; }
	inline void set__method_18(MethodInfo_t * value)
	{
		____method_18 = value;
		Il2CppCodeGenWriteBarrier((&____method_18), value);
	}

	inline static int32_t get_offset_of__evidence_19() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____evidence_19)); }
	inline Evidence_t2008144148 * get__evidence_19() const { return ____evidence_19; }
	inline Evidence_t2008144148 ** get_address_of__evidence_19() { return &____evidence_19; }
	inline void set__evidence_19(Evidence_t2008144148 * value)
	{
		____evidence_19 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_19), value);
	}

	inline static int32_t get_offset_of__action_20() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____action_20)); }
	inline int32_t get__action_20() const { return ____action_20; }
	inline int32_t* get_address_of__action_20() { return &____action_20; }
	inline void set__action_20(int32_t value)
	{
		____action_20 = value;
	}

	inline static int32_t get_offset_of__denyset_21() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____denyset_21)); }
	inline RuntimeObject * get__denyset_21() const { return ____denyset_21; }
	inline RuntimeObject ** get_address_of__denyset_21() { return &____denyset_21; }
	inline void set__denyset_21(RuntimeObject * value)
	{
		____denyset_21 = value;
		Il2CppCodeGenWriteBarrier((&____denyset_21), value);
	}

	inline static int32_t get_offset_of__permitset_22() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____permitset_22)); }
	inline RuntimeObject * get__permitset_22() const { return ____permitset_22; }
	inline RuntimeObject ** get_address_of__permitset_22() { return &____permitset_22; }
	inline void set__permitset_22(RuntimeObject * value)
	{
		____permitset_22 = value;
		Il2CppCodeGenWriteBarrier((&____permitset_22), value);
	}

	inline static int32_t get_offset_of__assembly_23() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____assembly_23)); }
	inline AssemblyName_t270931938 * get__assembly_23() const { return ____assembly_23; }
	inline AssemblyName_t270931938 ** get_address_of__assembly_23() { return &____assembly_23; }
	inline void set__assembly_23(AssemblyName_t270931938 * value)
	{
		____assembly_23 = value;
		Il2CppCodeGenWriteBarrier((&____assembly_23), value);
	}

	inline static int32_t get_offset_of__url_24() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____url_24)); }
	inline String_t* get__url_24() const { return ____url_24; }
	inline String_t** get_address_of__url_24() { return &____url_24; }
	inline void set__url_24(String_t* value)
	{
		____url_24 = value;
		Il2CppCodeGenWriteBarrier((&____url_24), value);
	}

	inline static int32_t get_offset_of__zone_25() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____zone_25)); }
	inline int32_t get__zone_25() const { return ____zone_25; }
	inline int32_t* get_address_of__zone_25() { return &____zone_25; }
	inline void set__zone_25(int32_t value)
	{
		____zone_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T975544473_H
#ifndef RUNTIMEDECLSECURITYACTIONS_T582952764_H
#define RUNTIMEDECLSECURITYACTIONS_T582952764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityActions
struct  RuntimeDeclSecurityActions_t582952764 
{
public:
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::cas
	RuntimeDeclSecurityEntry_t3144469156  ___cas_0;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::noncas
	RuntimeDeclSecurityEntry_t3144469156  ___noncas_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::choice
	RuntimeDeclSecurityEntry_t3144469156  ___choice_2;

public:
	inline static int32_t get_offset_of_cas_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___cas_0)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_cas_0() const { return ___cas_0; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_cas_0() { return &___cas_0; }
	inline void set_cas_0(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___cas_0 = value;
	}

	inline static int32_t get_offset_of_noncas_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___noncas_1)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_noncas_1() const { return ___noncas_1; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_noncas_1() { return &___noncas_1; }
	inline void set_noncas_1(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___noncas_1 = value;
	}

	inline static int32_t get_offset_of_choice_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___choice_2)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_choice_2() const { return ___choice_2; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_choice_2() { return &___choice_2; }
	inline void set_choice_2(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___choice_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYACTIONS_T582952764_H
#ifndef RUNTIMESECURITYFRAME_T536173748_H
#define RUNTIMESECURITYFRAME_T536173748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t536173748  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t1571427825 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t3144469156  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t3144469156  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t3144469156  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___domain_0)); }
	inline AppDomain_t1571427825 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t1571427825 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t1571427825 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T536173748_H
#ifndef ASYNCFLOWCONTROL_T153243767_H
#define ASYNCFLOWCONTROL_T153243767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AsyncFlowControl
struct  AsyncFlowControl_t153243767 
{
public:
	// System.Threading.Thread System.Threading.AsyncFlowControl::_t
	Thread_t2300836069 * ____t_0;
	// System.Threading.AsyncFlowControlType System.Threading.AsyncFlowControl::_type
	int32_t ____type_1;

public:
	inline static int32_t get_offset_of__t_0() { return static_cast<int32_t>(offsetof(AsyncFlowControl_t153243767, ____t_0)); }
	inline Thread_t2300836069 * get__t_0() const { return ____t_0; }
	inline Thread_t2300836069 ** get_address_of__t_0() { return &____t_0; }
	inline void set__t_0(Thread_t2300836069 * value)
	{
		____t_0 = value;
		Il2CppCodeGenWriteBarrier((&____t_0), value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(AsyncFlowControl_t153243767, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t153243767_marshaled_pinvoke
{
	Thread_t2300836069 * ____t_0;
	int32_t ____type_1;
};
// Native definition for COM marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t153243767_marshaled_com
{
	Thread_t2300836069 * ____t_0;
	int32_t ____type_1;
};
#endif // ASYNCFLOWCONTROL_T153243767_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef ENCODERFALLBACKEXCEPTION_T2773771926_H
#define ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t2773771926  : public ArgumentException_t132251570
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_15;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_16;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_17;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_18;

public:
	inline static int32_t get_offset_of_char_unknown_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_15)); }
	inline Il2CppChar get_char_unknown_15() const { return ___char_unknown_15; }
	inline Il2CppChar* get_address_of_char_unknown_15() { return &___char_unknown_15; }
	inline void set_char_unknown_15(Il2CppChar value)
	{
		___char_unknown_15 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_high_16)); }
	inline Il2CppChar get_char_unknown_high_16() const { return ___char_unknown_high_16; }
	inline Il2CppChar* get_address_of_char_unknown_high_16() { return &___char_unknown_high_16; }
	inline void set_char_unknown_high_16(Il2CppChar value)
	{
		___char_unknown_high_16 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_17() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_low_17)); }
	inline Il2CppChar get_char_unknown_low_17() const { return ___char_unknown_low_17; }
	inline Il2CppChar* get_address_of_char_unknown_low_17() { return &___char_unknown_low_17; }
	inline void set_char_unknown_low_17(Il2CppChar value)
	{
		___char_unknown_low_17 = value;
	}

	inline static int32_t get_offset_of_index_18() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___index_18)); }
	inline int32_t get_index_18() const { return ___index_18; }
	inline int32_t* get_address_of_index_18() { return &___index_18; }
	inline void set_index_18(int32_t value)
	{
		___index_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifndef SECURITYCRITICALATTRIBUTE_T2279322844_H
#define SECURITYCRITICALATTRIBUTE_T2279322844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t2279322844  : public Attribute_t861562559
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t2279322844, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T2279322844_H
#ifndef MUTEX_T3066672582_H
#define MUTEX_T3066672582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Mutex
struct  Mutex_t3066672582  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUTEX_T3066672582_H
#ifndef DECODERFALLBACKEXCEPTION_T1661362184_H
#define DECODERFALLBACKEXCEPTION_T1661362184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t1661362184  : public ArgumentException_t132251570
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t4116647657* ___bytes_unknown_15;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_bytes_unknown_15() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___bytes_unknown_15)); }
	inline ByteU5BU5D_t4116647657* get_bytes_unknown_15() const { return ___bytes_unknown_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_unknown_15() { return &___bytes_unknown_15; }
	inline void set_bytes_unknown_15(ByteU5BU5D_t4116647657* value)
	{
		___bytes_unknown_15 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_15), value);
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T1661362184_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef ACTIVATIONCONTEXT_T976916018_H
#define ACTIVATIONCONTEXT_T976916018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ActivationContext
struct  ActivationContext_t976916018  : public RuntimeObject
{
public:
	// System.ActivationContext/ContextForm System.ActivationContext::_form
	int32_t ____form_0;
	// System.ApplicationIdentity System.ActivationContext::_appid
	ApplicationIdentity_t1917735356 * ____appid_1;
	// System.Boolean System.ActivationContext::_disposed
	bool ____disposed_2;

public:
	inline static int32_t get_offset_of__form_0() { return static_cast<int32_t>(offsetof(ActivationContext_t976916018, ____form_0)); }
	inline int32_t get__form_0() const { return ____form_0; }
	inline int32_t* get_address_of__form_0() { return &____form_0; }
	inline void set__form_0(int32_t value)
	{
		____form_0 = value;
	}

	inline static int32_t get_offset_of__appid_1() { return static_cast<int32_t>(offsetof(ActivationContext_t976916018, ____appid_1)); }
	inline ApplicationIdentity_t1917735356 * get__appid_1() const { return ____appid_1; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__appid_1() { return &____appid_1; }
	inline void set__appid_1(ApplicationIdentity_t1917735356 * value)
	{
		____appid_1 = value;
		Il2CppCodeGenWriteBarrier((&____appid_1), value);
	}

	inline static int32_t get_offset_of__disposed_2() { return static_cast<int32_t>(offsetof(ActivationContext_t976916018, ____disposed_2)); }
	inline bool get__disposed_2() const { return ____disposed_2; }
	inline bool* get_address_of__disposed_2() { return &____disposed_2; }
	inline void set__disposed_2(bool value)
	{
		____disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONCONTEXT_T976916018_H
#ifndef AUTORESETEVENT_T1333520283_H
#define AUTORESETEVENT_T1333520283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t1333520283  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T1333520283_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (SecurityCriticalAttribute_t2279322844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1500[1] = 
{
	SecurityCriticalAttribute_t2279322844::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (SecurityCriticalScope_t606020417)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1501[3] = 
{
	SecurityCriticalScope_t606020417::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (SecurityElement_t1046076091), -1, sizeof(SecurityElement_t1046076091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1502[9] = 
{
	SecurityElement_t1046076091::get_offset_of_text_0(),
	SecurityElement_t1046076091::get_offset_of_tag_1(),
	SecurityElement_t1046076091::get_offset_of_attributes_2(),
	SecurityElement_t1046076091::get_offset_of_children_3(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (SecurityAttribute_t3566489056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1503[2] = 
{
	SecurityAttribute_t3566489056::get_offset_of__name_0(),
	SecurityAttribute_t3566489056::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (SecurityException_t975544473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1504[14] = 
{
	SecurityException_t975544473::get_offset_of_permissionState_12(),
	SecurityException_t975544473::get_offset_of_permissionType_13(),
	SecurityException_t975544473::get_offset_of__granted_14(),
	SecurityException_t975544473::get_offset_of__refused_15(),
	SecurityException_t975544473::get_offset_of__demanded_16(),
	SecurityException_t975544473::get_offset_of__firstperm_17(),
	SecurityException_t975544473::get_offset_of__method_18(),
	SecurityException_t975544473::get_offset_of__evidence_19(),
	SecurityException_t975544473::get_offset_of__action_20(),
	SecurityException_t975544473::get_offset_of__denyset_21(),
	SecurityException_t975544473::get_offset_of__permitset_22(),
	SecurityException_t975544473::get_offset_of__assembly_23(),
	SecurityException_t975544473::get_offset_of__url_24(),
	SecurityException_t975544473::get_offset_of__zone_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (RuntimeDeclSecurityEntry_t3144469156)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t3144469156 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1505[3] = 
{
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (RuntimeSecurityFrame_t536173748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1506[5] = 
{
	RuntimeSecurityFrame_t536173748::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t536173748::get_offset_of_method_1(),
	RuntimeSecurityFrame_t536173748::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t536173748::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t536173748::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (SecurityFrame_t1422462475)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1507[5] = 
{
	SecurityFrame_t1422462475::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (RuntimeDeclSecurityActions_t582952764)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityActions_t582952764 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1508[3] = 
{
	RuntimeDeclSecurityActions_t582952764::get_offset_of_cas_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t582952764::get_offset_of_noncas_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t582952764::get_offset_of_choice_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (SecurityManager_t3383402582), -1, sizeof(SecurityManager_t3383402582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1509[6] = 
{
	SecurityManager_t3383402582_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__hierarchy_1(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__unmanagedCode_2(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__declsecCache_3(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__level_4(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__execution_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (SecuritySafeCriticalAttribute_t3505979402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (SecurityState_t982520134), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (SecurityTransparentAttribute_t2529084213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (SecurityTreatAsSafeAttribute_t3506736250), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (SecurityZone_t1272287263)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1514[7] = 
{
	SecurityZone_t1272287263::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t744305558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (UnverifiableCodeAttribute_t3228760399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (VerificationException_t1599351733), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (XmlSyntaxException_t2973594484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (ASCIIEncoding_t3446586211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1519[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (CodePageEncoding_t3101721897), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1520[5] = 
{
	CodePageEncoding_t3101721897::get_offset_of_codePage_0(),
	CodePageEncoding_t3101721897::get_offset_of_isReadOnly_1(),
	CodePageEncoding_t3101721897::get_offset_of_encoderFallback_2(),
	CodePageEncoding_t3101721897::get_offset_of_decoderFallback_3(),
	CodePageEncoding_t3101721897::get_offset_of_realObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (Decoder_t727205015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1521[2] = 
{
	Decoder_t727205015::get_offset_of_encoding_0(),
	Decoder_t727205015::get_offset_of_realObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (Decoder_t2204182725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1522[2] = 
{
	Decoder_t2204182725::get_offset_of_fallback_0(),
	Decoder_t2204182725::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (DecoderExceptionFallback_t3981484394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (DecoderExceptionFallbackBuffer_t90938522), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (DecoderFallback_t3123823036), -1, sizeof(DecoderFallback_t3123823036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1525[3] = 
{
	DecoderFallback_t3123823036_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (DecoderFallbackBuffer_t2402303981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (DecoderFallbackException_t1661362184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1527[3] = 
{
	0,
	DecoderFallbackException_t1661362184::get_offset_of_bytes_unknown_15(),
	DecoderFallbackException_t1661362184::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (DecoderReplacementFallback_t1462101135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1528[1] = 
{
	DecoderReplacementFallback_t1462101135::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (DecoderReplacementFallbackBuffer_t841144779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1529[3] = 
{
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (Encoder_t2198218980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1530[2] = 
{
	Encoder_t2198218980::get_offset_of_fallback_0(),
	Encoder_t2198218980::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (EncoderExceptionFallback_t1243849599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (EncoderExceptionFallbackBuffer_t3597232471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (EncoderFallback_t1188251036), -1, sizeof(EncoderFallback_t1188251036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1533[3] = 
{
	EncoderFallback_t1188251036_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (EncoderFallbackBuffer_t3523102303), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (EncoderFallbackException_t2773771926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1535[5] = 
{
	0,
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_15(),
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_high_16(),
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_low_17(),
	EncoderFallbackException_t2773771926::get_offset_of_index_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (EncoderReplacementFallback_t1623206753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1536[1] = 
{
	EncoderReplacementFallback_t1623206753::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (EncoderReplacementFallbackBuffer_t1863187162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1537[3] = 
{
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (Encoding_t1523322056), -1, sizeof(Encoding_t1523322056_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1538[29] = 
{
	Encoding_t1523322056::get_offset_of_codePage_0(),
	Encoding_t1523322056::get_offset_of_windows_code_page_1(),
	Encoding_t1523322056::get_offset_of_is_readonly_2(),
	Encoding_t1523322056::get_offset_of_decoder_fallback_3(),
	Encoding_t1523322056::get_offset_of_encoder_fallback_4(),
	Encoding_t1523322056_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t1523322056_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t1523322056_StaticFields::get_offset_of_encoding_infos_7(),
	Encoding_t1523322056_StaticFields::get_offset_of_encodings_8(),
	Encoding_t1523322056::get_offset_of_body_name_9(),
	Encoding_t1523322056::get_offset_of_encoding_name_10(),
	Encoding_t1523322056::get_offset_of_header_name_11(),
	Encoding_t1523322056::get_offset_of_is_mail_news_display_12(),
	Encoding_t1523322056::get_offset_of_is_mail_news_save_13(),
	Encoding_t1523322056::get_offset_of_is_browser_save_14(),
	Encoding_t1523322056::get_offset_of_is_browser_display_15(),
	Encoding_t1523322056::get_offset_of_web_name_16(),
	Encoding_t1523322056_StaticFields::get_offset_of_asciiEncoding_17(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianEncoding_18(),
	Encoding_t1523322056_StaticFields::get_offset_of_defaultEncoding_19(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf7Encoding_20(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingWithMarkers_21(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_22(),
	Encoding_t1523322056_StaticFields::get_offset_of_unicodeEncoding_23(),
	Encoding_t1523322056_StaticFields::get_offset_of_isoLatin1Encoding_24(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingUnsafe_25(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf32Encoding_26(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianUTF32Encoding_27(),
	Encoding_t1523322056_StaticFields::get_offset_of_lockobj_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (ForwardingDecoder_t3503728819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1539[1] = 
{
	ForwardingDecoder_t3503728819::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (ForwardingEncoder_t2987501656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1540[1] = 
{
	ForwardingEncoder_t2987501656::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (EncodingInfo_t3933047410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1541[2] = 
{
	EncodingInfo_t3933047410::get_offset_of_codepage_0(),
	EncodingInfo_t3933047410::get_offset_of_encoding_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (Latin1Encoding_t950549005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1542[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (MLangCodePageEncoding_t4092273897), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1543[5] = 
{
	MLangCodePageEncoding_t4092273897::get_offset_of_codePage_0(),
	MLangCodePageEncoding_t4092273897::get_offset_of_isReadOnly_1(),
	MLangCodePageEncoding_t4092273897::get_offset_of_encoderFallback_2(),
	MLangCodePageEncoding_t4092273897::get_offset_of_decoderFallback_3(),
	MLangCodePageEncoding_t4092273897::get_offset_of_realObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (MLangEncoder_t818322359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1544[2] = 
{
	MLangEncoder_t818322359::get_offset_of_encoding_0(),
	MLangEncoder_t818322359::get_offset_of_realObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (MLangDecoder_t1334549542), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[2] = 
{
	MLangDecoder_t1334549542::get_offset_of_encoding_0(),
	MLangDecoder_t1334549542::get_offset_of_realObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (NormalizationForm_t3110136658)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1546[5] = 
{
	NormalizationForm_t3110136658::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (StringBuilder_t), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable1547[5] = 
{
	0,
	StringBuilder_t::get_offset_of__length_1(),
	StringBuilder_t::get_offset_of__str_2(),
	StringBuilder_t::get_offset_of__cached_str_3(),
	StringBuilder_t::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (SurrogateEncoder_t151277398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[2] = 
{
	SurrogateEncoder_t151277398::get_offset_of_encoding_0(),
	SurrogateEncoder_t151277398::get_offset_of_realObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (UTF32Encoding_t312252005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1549[4] = 
{
	0,
	0,
	UTF32Encoding_t312252005::get_offset_of_bigEndian_31(),
	UTF32Encoding_t312252005::get_offset_of_byteOrderMark_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (UTF32Decoder_t635925672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1550[3] = 
{
	UTF32Decoder_t635925672::get_offset_of_bigEndian_2(),
	UTF32Decoder_t635925672::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t635925672::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (UTF7Encoding_t2644108479), -1, sizeof(UTF7Encoding_t2644108479_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1551[5] = 
{
	0,
	0,
	UTF7Encoding_t2644108479::get_offset_of_allowOptionals_31(),
	UTF7Encoding_t2644108479_StaticFields::get_offset_of_encodingRules_32(),
	UTF7Encoding_t2644108479_StaticFields::get_offset_of_base64Values_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (UTF7Decoder_t2247208115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1552[1] = 
{
	UTF7Decoder_t2247208115::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (UTF7Encoder_t3519702240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1553[3] = 
{
	UTF7Encoder_t3519702240::get_offset_of_allowOptionals_2(),
	UTF7Encoder_t3519702240::get_offset_of_leftOver_3(),
	UTF7Encoder_t3519702240::get_offset_of_isInShifted_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (UTF8Encoding_t3956466879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1554[2] = 
{
	0,
	UTF8Encoding_t3956466879::get_offset_of_emitIdentifier_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (UTF8Decoder_t2159214862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1555[2] = 
{
	UTF8Decoder_t2159214862::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t2159214862::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (UTF8Encoder_t3216382797), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1556[2] = 
{
	UTF8Encoder_t3216382797::get_offset_of_leftOverForCount_2(),
	UTF8Encoder_t3216382797::get_offset_of_leftOverForConv_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (UnicodeEncoding_t1959134050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1557[5] = 
{
	0,
	0,
	0,
	UnicodeEncoding_t1959134050::get_offset_of_bigEndian_32(),
	UnicodeEncoding_t1959134050::get_offset_of_byteOrderMark_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (UnicodeDecoder_t872550992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1558[2] = 
{
	UnicodeDecoder_t872550992::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t872550992::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (AbandonedMutexException_t2390562684), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1559[2] = 
{
	AbandonedMutexException_t2390562684::get_offset_of_mutex_12(),
	AbandonedMutexException_t2390562684::get_offset_of_mutex_index_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (ApartmentState_t920447174)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1560[4] = 
{
	ApartmentState_t920447174::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (AsyncFlowControlType_t4205194786)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1561[4] = 
{
	AsyncFlowControlType_t4205194786::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (AsyncFlowControl_t153243767)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1562[2] = 
{
	AsyncFlowControl_t153243767::get_offset_of__t_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncFlowControl_t153243767::get_offset_of__type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (AutoResetEvent_t1333520283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (CompressedStack_t1202932761), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1564[1] = 
{
	CompressedStack_t1202932761::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (EventResetMode_t3817241503)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1565[3] = 
{
	EventResetMode_t3817241503::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (EventWaitHandle_t777845177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (ExecutionContext_t1748372627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1567[3] = 
{
	ExecutionContext_t1748372627::get_offset_of__sc_0(),
	ExecutionContext_t1748372627::get_offset_of__suppressFlow_1(),
	ExecutionContext_t1748372627::get_offset_of__capture_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (HostExecutionContext_t2396354767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1568[1] = 
{
	HostExecutionContext_t2396354767::get_offset_of__state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (HostExecutionContextManager_t2582009786), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (Interlocked_t2273387594), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (LockCookie_t2972311325)+ sizeof (RuntimeObject), sizeof(LockCookie_t2972311325 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1571[3] = 
{
	LockCookie_t2972311325::get_offset_of_ThreadId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LockCookie_t2972311325::get_offset_of_ReaderLocks_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LockCookie_t2972311325::get_offset_of_WriterLocks_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (LockQueue_t2679652224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1572[2] = 
{
	LockQueue_t2679652224::get_offset_of_rwlock_0(),
	LockQueue_t2679652224::get_offset_of_lockCount_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (ManualResetEvent_t451242010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (Monitor_t2197244473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (Mutex_t3066672582), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (NativeEventCalls_t570794723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (NativeOverlapped_t1521107632)+ sizeof (RuntimeObject), sizeof(NativeOverlapped_t1521107632 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1577[7] = 
{
	NativeOverlapped_t1521107632::get_offset_of_EventHandle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NativeOverlapped_t1521107632::get_offset_of_InternalHigh_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NativeOverlapped_t1521107632::get_offset_of_InternalLow_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NativeOverlapped_t1521107632::get_offset_of_OffsetHigh_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NativeOverlapped_t1521107632::get_offset_of_OffsetLow_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NativeOverlapped_t1521107632::get_offset_of_Handle1_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NativeOverlapped_t1521107632::get_offset_of_Handle2_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (Overlapped_t682382437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1578[5] = 
{
	Overlapped_t682382437::get_offset_of_ares_0(),
	Overlapped_t682382437::get_offset_of_offsetL_1(),
	Overlapped_t682382437::get_offset_of_offsetH_2(),
	Overlapped_t682382437::get_offset_of_evt_3(),
	Overlapped_t682382437::get_offset_of_evt_ptr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (ReaderWriterLock_t367846299), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1579[6] = 
{
	ReaderWriterLock_t367846299::get_offset_of_seq_num_0(),
	ReaderWriterLock_t367846299::get_offset_of_state_1(),
	ReaderWriterLock_t367846299::get_offset_of_readers_2(),
	ReaderWriterLock_t367846299::get_offset_of_writer_queue_3(),
	ReaderWriterLock_t367846299::get_offset_of_reader_locks_4(),
	ReaderWriterLock_t367846299::get_offset_of_writer_lock_owner_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (RegisteredWaitHandle_t1529538454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1580[9] = 
{
	RegisteredWaitHandle_t1529538454::get_offset_of__waitObject_1(),
	RegisteredWaitHandle_t1529538454::get_offset_of__callback_2(),
	RegisteredWaitHandle_t1529538454::get_offset_of__timeout_3(),
	RegisteredWaitHandle_t1529538454::get_offset_of__state_4(),
	RegisteredWaitHandle_t1529538454::get_offset_of__executeOnlyOnce_5(),
	RegisteredWaitHandle_t1529538454::get_offset_of__finalEvent_6(),
	RegisteredWaitHandle_t1529538454::get_offset_of__cancelEvent_7(),
	RegisteredWaitHandle_t1529538454::get_offset_of__callsInProcess_8(),
	RegisteredWaitHandle_t1529538454::get_offset_of__unregistered_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (SynchronizationContext_t2326897723), -1, 0, sizeof(SynchronizationContext_t2326897723_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable1581[2] = 
{
	SynchronizationContext_t2326897723::get_offset_of_notification_required_0(),
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (SynchronizationLockException_t841761767), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (Thread_t2300836069), -1, sizeof(Thread_t2300836069_StaticFields), sizeof(Thread_t2300836069_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable1583[52] = 
{
	Thread_t2300836069::get_offset_of_lock_thread_id_0(),
	Thread_t2300836069::get_offset_of_system_thread_handle_1(),
	Thread_t2300836069::get_offset_of_cached_culture_info_2(),
	Thread_t2300836069::get_offset_of_unused0_3(),
	Thread_t2300836069::get_offset_of_threadpool_thread_4(),
	Thread_t2300836069::get_offset_of_name_5(),
	Thread_t2300836069::get_offset_of_name_len_6(),
	Thread_t2300836069::get_offset_of_state_7(),
	Thread_t2300836069::get_offset_of_abort_exc_8(),
	Thread_t2300836069::get_offset_of_abort_state_handle_9(),
	Thread_t2300836069::get_offset_of_thread_id_10(),
	Thread_t2300836069::get_offset_of_start_notify_11(),
	Thread_t2300836069::get_offset_of_stack_ptr_12(),
	Thread_t2300836069::get_offset_of_static_data_13(),
	Thread_t2300836069::get_offset_of_jit_data_14(),
	Thread_t2300836069::get_offset_of_lock_data_15(),
	Thread_t2300836069::get_offset_of_current_appcontext_16(),
	Thread_t2300836069::get_offset_of_stack_size_17(),
	Thread_t2300836069::get_offset_of_start_obj_18(),
	Thread_t2300836069::get_offset_of_appdomain_refs_19(),
	Thread_t2300836069::get_offset_of_interruption_requested_20(),
	Thread_t2300836069::get_offset_of_suspend_event_21(),
	Thread_t2300836069::get_offset_of_suspended_event_22(),
	Thread_t2300836069::get_offset_of_resume_event_23(),
	Thread_t2300836069::get_offset_of_synch_cs_24(),
	Thread_t2300836069::get_offset_of_serialized_culture_info_25(),
	Thread_t2300836069::get_offset_of_serialized_culture_info_len_26(),
	Thread_t2300836069::get_offset_of_serialized_ui_culture_info_27(),
	Thread_t2300836069::get_offset_of_serialized_ui_culture_info_len_28(),
	Thread_t2300836069::get_offset_of_thread_dump_requested_29(),
	Thread_t2300836069::get_offset_of_end_stack_30(),
	Thread_t2300836069::get_offset_of_thread_interrupt_requested_31(),
	Thread_t2300836069::get_offset_of_apartment_state_32(),
	Thread_t2300836069::get_offset_of_critical_region_level_33(),
	Thread_t2300836069::get_offset_of_small_id_34(),
	Thread_t2300836069::get_offset_of_manage_callback_35(),
	Thread_t2300836069::get_offset_of_pending_exception_36(),
	Thread_t2300836069::get_offset_of_ec_to_set_37(),
	Thread_t2300836069::get_offset_of_interrupt_on_stop_38(),
	Thread_t2300836069::get_offset_of_unused3_39(),
	Thread_t2300836069::get_offset_of_unused4_40(),
	Thread_t2300836069::get_offset_of_unused5_41(),
	Thread_t2300836069::get_offset_of_unused6_42(),
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	Thread_t2300836069::get_offset_of_threadstart_45(),
	Thread_t2300836069::get_offset_of_managed_id_46(),
	Thread_t2300836069::get_offset_of__principal_47(),
	Thread_t2300836069_StaticFields::get_offset_of_datastorehash_48(),
	Thread_t2300836069_StaticFields::get_offset_of_datastore_lock_49(),
	Thread_t2300836069::get_offset_of_in_currentculture_50(),
	Thread_t2300836069_StaticFields::get_offset_of_culture_lock_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (ThreadAbortException_t4074510458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (ThreadInterruptedException_t3240955163), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (ThreadPool_t2177989550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (ThreadPriority_t1551740086)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1587[6] = 
{
	ThreadPriority_t1551740086::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (ThreadStartException_t2917002433), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (ThreadState_t2533302383)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1589[11] = 
{
	ThreadState_t2533302383::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (ThreadStateException_t3003788475), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (Timeout_t1450424021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1591[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (Timer_t716671026), -1, sizeof(Timer_t716671026_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1592[8] = 
{
	0,
	Timer_t716671026_StaticFields::get_offset_of_scheduler_2(),
	Timer_t716671026::get_offset_of_callback_3(),
	Timer_t716671026::get_offset_of_state_4(),
	Timer_t716671026::get_offset_of_due_time_ms_5(),
	Timer_t716671026::get_offset_of_period_ms_6(),
	Timer_t716671026::get_offset_of_next_run_7(),
	Timer_t716671026::get_offset_of_disposed_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (TimerComparer_t2774265395), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (Scheduler_t3215764947), -1, sizeof(Scheduler_t3215764947_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1594[2] = 
{
	Scheduler_t3215764947_StaticFields::get_offset_of_instance_0(),
	Scheduler_t3215764947::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (WaitHandle_t1743403487), -1, sizeof(WaitHandle_t1743403487_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1595[4] = 
{
	0,
	WaitHandle_t1743403487::get_offset_of_safe_wait_handle_2(),
	WaitHandle_t1743403487_StaticFields::get_offset_of_InvalidHandle_3(),
	WaitHandle_t1743403487::get_offset_of_disposed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (WaitHandleCannotBeOpenedException_t4284829474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (AccessViolationException_t339633883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1597[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (ActivationContext_t976916018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1598[3] = 
{
	ActivationContext_t976916018::get_offset_of__form_0(),
	ActivationContext_t976916018::get_offset_of__appid_1(),
	ActivationContext_t976916018::get_offset_of__disposed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (ContextForm_t1052573041)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1599[3] = 
{
	ContextForm_t1052573041::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
