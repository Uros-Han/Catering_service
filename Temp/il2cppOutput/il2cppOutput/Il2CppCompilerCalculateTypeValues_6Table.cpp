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


// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.BinaryReader
struct BinaryReader_t2428077293;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t3549834567;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t2132996019;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t1637949902;
// System.Resources.ResourceReader
struct ResourceReader_t3300492639;
// System.Resources.IResourceReader
struct IResourceReader_t1191025619;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.SortedList
struct SortedList_t2427694641;
// System.String
struct String_t;
// System.Resources.NameOrId
struct NameOrId_t2364694642;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1787725097;
// System.Resources.Win32IconResource[]
struct Win32IconResourceU5BU5D_t3415674191;
// System.Resources.ICONDIRENTRY
struct ICONDIRENTRY_t3612437535;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Version
struct Version_t3456873960;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Exception[]
struct ExceptionU5BU5D_t2535001212;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Assembly
struct Assembly_t;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t2155025054;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1073948154;




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
#ifndef MISSING_T508514592_H
#define MISSING_T508514592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t508514592  : public RuntimeObject
{
public:

public:
};

struct Missing_t508514592_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t508514592 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t508514592_StaticFields, ___Value_0)); }
	inline Missing_t508514592 * get_Value_0() const { return ___Value_0; }
	inline Missing_t508514592 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t508514592 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T508514592_H
#ifndef ICONDIRENTRY_T3612437535_H
#define ICONDIRENTRY_T3612437535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ICONDIRENTRY
struct  ICONDIRENTRY_t3612437535  : public RuntimeObject
{
public:
	// System.Byte System.Resources.ICONDIRENTRY::bWidth
	uint8_t ___bWidth_0;
	// System.Byte System.Resources.ICONDIRENTRY::bHeight
	uint8_t ___bHeight_1;
	// System.Byte System.Resources.ICONDIRENTRY::bColorCount
	uint8_t ___bColorCount_2;
	// System.Byte System.Resources.ICONDIRENTRY::bReserved
	uint8_t ___bReserved_3;
	// System.Int16 System.Resources.ICONDIRENTRY::wPlanes
	int16_t ___wPlanes_4;
	// System.Int16 System.Resources.ICONDIRENTRY::wBitCount
	int16_t ___wBitCount_5;
	// System.Int32 System.Resources.ICONDIRENTRY::dwBytesInRes
	int32_t ___dwBytesInRes_6;
	// System.Int32 System.Resources.ICONDIRENTRY::dwImageOffset
	int32_t ___dwImageOffset_7;
	// System.Byte[] System.Resources.ICONDIRENTRY::image
	ByteU5BU5D_t4116647657* ___image_8;

public:
	inline static int32_t get_offset_of_bWidth_0() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___bWidth_0)); }
	inline uint8_t get_bWidth_0() const { return ___bWidth_0; }
	inline uint8_t* get_address_of_bWidth_0() { return &___bWidth_0; }
	inline void set_bWidth_0(uint8_t value)
	{
		___bWidth_0 = value;
	}

	inline static int32_t get_offset_of_bHeight_1() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___bHeight_1)); }
	inline uint8_t get_bHeight_1() const { return ___bHeight_1; }
	inline uint8_t* get_address_of_bHeight_1() { return &___bHeight_1; }
	inline void set_bHeight_1(uint8_t value)
	{
		___bHeight_1 = value;
	}

	inline static int32_t get_offset_of_bColorCount_2() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___bColorCount_2)); }
	inline uint8_t get_bColorCount_2() const { return ___bColorCount_2; }
	inline uint8_t* get_address_of_bColorCount_2() { return &___bColorCount_2; }
	inline void set_bColorCount_2(uint8_t value)
	{
		___bColorCount_2 = value;
	}

	inline static int32_t get_offset_of_bReserved_3() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___bReserved_3)); }
	inline uint8_t get_bReserved_3() const { return ___bReserved_3; }
	inline uint8_t* get_address_of_bReserved_3() { return &___bReserved_3; }
	inline void set_bReserved_3(uint8_t value)
	{
		___bReserved_3 = value;
	}

	inline static int32_t get_offset_of_wPlanes_4() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___wPlanes_4)); }
	inline int16_t get_wPlanes_4() const { return ___wPlanes_4; }
	inline int16_t* get_address_of_wPlanes_4() { return &___wPlanes_4; }
	inline void set_wPlanes_4(int16_t value)
	{
		___wPlanes_4 = value;
	}

	inline static int32_t get_offset_of_wBitCount_5() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___wBitCount_5)); }
	inline int16_t get_wBitCount_5() const { return ___wBitCount_5; }
	inline int16_t* get_address_of_wBitCount_5() { return &___wBitCount_5; }
	inline void set_wBitCount_5(int16_t value)
	{
		___wBitCount_5 = value;
	}

	inline static int32_t get_offset_of_dwBytesInRes_6() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___dwBytesInRes_6)); }
	inline int32_t get_dwBytesInRes_6() const { return ___dwBytesInRes_6; }
	inline int32_t* get_address_of_dwBytesInRes_6() { return &___dwBytesInRes_6; }
	inline void set_dwBytesInRes_6(int32_t value)
	{
		___dwBytesInRes_6 = value;
	}

	inline static int32_t get_offset_of_dwImageOffset_7() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___dwImageOffset_7)); }
	inline int32_t get_dwImageOffset_7() const { return ___dwImageOffset_7; }
	inline int32_t* get_address_of_dwImageOffset_7() { return &___dwImageOffset_7; }
	inline void set_dwImageOffset_7(int32_t value)
	{
		___dwImageOffset_7 = value;
	}

	inline static int32_t get_offset_of_image_8() { return static_cast<int32_t>(offsetof(ICONDIRENTRY_t3612437535, ___image_8)); }
	inline ByteU5BU5D_t4116647657* get_image_8() const { return ___image_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_image_8() { return &___image_8; }
	inline void set_image_8(ByteU5BU5D_t4116647657* value)
	{
		___image_8 = value;
		Il2CppCodeGenWriteBarrier((&___image_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICONDIRENTRY_T3612437535_H
#ifndef WIN32ICONFILEREADER_T4011199266_H
#define WIN32ICONFILEREADER_T4011199266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32IconFileReader
struct  Win32IconFileReader_t4011199266  : public RuntimeObject
{
public:
	// System.IO.Stream System.Resources.Win32IconFileReader::iconFile
	Stream_t1273022909 * ___iconFile_0;

public:
	inline static int32_t get_offset_of_iconFile_0() { return static_cast<int32_t>(offsetof(Win32IconFileReader_t4011199266, ___iconFile_0)); }
	inline Stream_t1273022909 * get_iconFile_0() const { return ___iconFile_0; }
	inline Stream_t1273022909 ** get_address_of_iconFile_0() { return &___iconFile_0; }
	inline void set_iconFile_0(Stream_t1273022909 * value)
	{
		___iconFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___iconFile_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32ICONFILEREADER_T4011199266_H
#ifndef CALLCONVCDECL_T3709376166_H
#define CALLCONVCDECL_T3709376166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CallConvCdecl
struct  CallConvCdecl_t3709376166  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONVCDECL_T3709376166_H
#ifndef CALLCONVFASTCALL_T4144316669_H
#define CALLCONVFASTCALL_T4144316669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CallConvFastcall
struct  CallConvFastcall_t4144316669  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONVFASTCALL_T4144316669_H
#ifndef CALLCONVSTDCALL_T154229111_H
#define CALLCONVSTDCALL_T154229111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CallConvStdcall
struct  CallConvStdcall_t154229111  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONVSTDCALL_T154229111_H
#ifndef CALLCONVTHISCALL_T2437542697_H
#define CALLCONVTHISCALL_T2437542697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CallConvThiscall
struct  CallConvThiscall_t2437542697  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONVTHISCALL_T2437542697_H
#ifndef COMPILERMARSHALOVERRIDE_T1400199096_H
#define COMPILERMARSHALOVERRIDE_T1400199096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerMarshalOverride
struct  CompilerMarshalOverride_t1400199096  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERMARSHALOVERRIDE_T1400199096_H
#ifndef WIN32RESFILEREADER_T615293285_H
#define WIN32RESFILEREADER_T615293285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32ResFileReader
struct  Win32ResFileReader_t615293285  : public RuntimeObject
{
public:
	// System.IO.Stream System.Resources.Win32ResFileReader::res_file
	Stream_t1273022909 * ___res_file_0;

public:
	inline static int32_t get_offset_of_res_file_0() { return static_cast<int32_t>(offsetof(Win32ResFileReader_t615293285, ___res_file_0)); }
	inline Stream_t1273022909 * get_res_file_0() const { return ___res_file_0; }
	inline Stream_t1273022909 ** get_address_of_res_file_0() { return &___res_file_0; }
	inline void set_res_file_0(Stream_t1273022909 * value)
	{
		___res_file_0 = value;
		Il2CppCodeGenWriteBarrier((&___res_file_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32RESFILEREADER_T615293285_H
#ifndef RESOURCEREADER_T3300492639_H
#define RESOURCEREADER_T3300492639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t3300492639  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t2428077293 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t1281789340* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t385246372* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t2132996019* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t1637949902* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___reader_0)); }
	inline BinaryReader_t2428077293 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t2428077293 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t2428077293 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___typeNames_5)); }
	inline StringU5BU5D_t1281789340* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t1281789340** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t1281789340* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___hashes_6)); }
	inline Int32U5BU5D_t385246372* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t385246372* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___infos_7)); }
	inline ResourceInfoU5BU5D_t2132996019* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t2132996019** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t2132996019* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t1637949902* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t1637949902** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t1637949902* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t3300492639, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T3300492639_H
#ifndef RESOURCEENUMERATOR_T2106512554_H
#define RESOURCEENUMERATOR_T2106512554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t2106512554  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t3300492639 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2106512554, ___reader_0)); }
	inline ResourceReader_t3300492639 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t3300492639 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t3300492639 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2106512554, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2106512554, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T2106512554_H
#ifndef RESOURCESET_T2827911187_H
#define RESOURCESET_T2827911187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t2827911187  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t1853889766 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t2827911187, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t2827911187, ___Table_1)); }
	inline Hashtable_t1853889766 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t1853889766 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t1853889766 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t2827911187, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t2827911187, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T2827911187_H
#ifndef RESOURCEWRITER_T1892498018_H
#define RESOURCEWRITER_T1892498018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceWriter
struct  ResourceWriter_t1892498018  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Resources.ResourceWriter::resources
	SortedList_t2427694641 * ___resources_0;
	// System.IO.Stream System.Resources.ResourceWriter::stream
	Stream_t1273022909 * ___stream_1;

public:
	inline static int32_t get_offset_of_resources_0() { return static_cast<int32_t>(offsetof(ResourceWriter_t1892498018, ___resources_0)); }
	inline SortedList_t2427694641 * get_resources_0() const { return ___resources_0; }
	inline SortedList_t2427694641 ** get_address_of_resources_0() { return &___resources_0; }
	inline void set_resources_0(SortedList_t2427694641 * value)
	{
		___resources_0 = value;
		Il2CppCodeGenWriteBarrier((&___resources_0), value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(ResourceWriter_t1892498018, ___stream_1)); }
	inline Stream_t1273022909 * get_stream_1() const { return ___stream_1; }
	inline Stream_t1273022909 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t1273022909 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___stream_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEWRITER_T1892498018_H
#ifndef TYPEBYNAMEOBJECT_T584266494_H
#define TYPEBYNAMEOBJECT_T584266494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceWriter/TypeByNameObject
struct  TypeByNameObject_t584266494  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceWriter/TypeByNameObject::TypeName
	String_t* ___TypeName_0;
	// System.Byte[] System.Resources.ResourceWriter/TypeByNameObject::Value
	ByteU5BU5D_t4116647657* ___Value_1;

public:
	inline static int32_t get_offset_of_TypeName_0() { return static_cast<int32_t>(offsetof(TypeByNameObject_t584266494, ___TypeName_0)); }
	inline String_t* get_TypeName_0() const { return ___TypeName_0; }
	inline String_t** get_address_of_TypeName_0() { return &___TypeName_0; }
	inline void set_TypeName_0(String_t* value)
	{
		___TypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeName_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypeByNameObject_t584266494, ___Value_1)); }
	inline ByteU5BU5D_t4116647657* get_Value_1() const { return ___Value_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(ByteU5BU5D_t4116647657* value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((&___Value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBYNAMEOBJECT_T584266494_H
#ifndef NAMEORID_T2364694642_H
#define NAMEORID_T2364694642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NameOrId
struct  NameOrId_t2364694642  : public RuntimeObject
{
public:
	// System.String System.Resources.NameOrId::name
	String_t* ___name_0;
	// System.Int32 System.Resources.NameOrId::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t2364694642, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t2364694642, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEORID_T2364694642_H
#ifndef WIN32RESOURCE_T884101579_H
#define WIN32RESOURCE_T884101579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
struct  Win32Resource_t884101579  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t2364694642 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t2364694642 * ___name_1;
	// System.Int32 System.Resources.Win32Resource::language
	int32_t ___language_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t884101579, ___type_0)); }
	inline NameOrId_t2364694642 * get_type_0() const { return ___type_0; }
	inline NameOrId_t2364694642 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t2364694642 * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t884101579, ___name_1)); }
	inline NameOrId_t2364694642 * get_name_1() const { return ___name_1; }
	inline NameOrId_t2364694642 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t2364694642 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_language_2() { return static_cast<int32_t>(offsetof(Win32Resource_t884101579, ___language_2)); }
	inline int32_t get_language_2() const { return ___language_2; }
	inline int32_t* get_address_of_language_2() { return &___language_2; }
	inline void set_language_2(int32_t value)
	{
		___language_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32RESOURCE_T884101579_H
#ifndef ISBOXED_T2307617342_H
#define ISBOXED_T2307617342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsBoxed
struct  IsBoxed_t2307617342  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISBOXED_T2307617342_H
#ifndef ISSIGNUNSPECIFIEDBYTE_T1046340408_H
#define ISSIGNUNSPECIFIEDBYTE_T1046340408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsSignUnspecifiedByte
struct  IsSignUnspecifiedByte_t1046340408  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISSIGNUNSPECIFIEDBYTE_T1046340408_H
#ifndef ISUDTRETURN_T511234034_H
#define ISUDTRETURN_T511234034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsUdtReturn
struct  IsUdtReturn_t511234034  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISUDTRETURN_T511234034_H
#ifndef ISVOLATILE_T2097058663_H
#define ISVOLATILE_T2097058663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t2097058663  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T2097058663_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef ISPINNED_T3756751599_H
#define ISPINNED_T3756751599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsPinned
struct  IsPinned_t3756751599  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISPINNED_T3756751599_H
#ifndef ISBYVALUE_T2518041768_H
#define ISBYVALUE_T2518041768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsByValue
struct  IsByValue_t2518041768  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISBYVALUE_T2518041768_H
#ifndef ISCONST_T1717557917_H
#define ISCONST_T1717557917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsConst
struct  IsConst_t1717557917  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISCONST_T1717557917_H
#ifndef ISCOPYCONSTRUCTED_T402909680_H
#define ISCOPYCONSTRUCTED_T402909680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsCopyConstructed
struct  IsCopyConstructed_t402909680  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISCOPYCONSTRUCTED_T402909680_H
#ifndef ISEXPLICITLYDEREFERENCED_T2011423353_H
#define ISEXPLICITLYDEREFERENCED_T2011423353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsExplicitlyDereferenced
struct  IsExplicitlyDereferenced_t2011423353  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISEXPLICITLYDEREFERENCED_T2011423353_H
#ifndef ISIMPLICITLYDEREFERENCED_T3098267079_H
#define ISIMPLICITLYDEREFERENCED_T3098267079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsImplicitlyDereferenced
struct  IsImplicitlyDereferenced_t3098267079  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISIMPLICITLYDEREFERENCED_T3098267079_H
#ifndef ISJITINTRINSIC_T2933263994_H
#define ISJITINTRINSIC_T2933263994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsJitIntrinsic
struct  IsJitIntrinsic_t2933263994  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISJITINTRINSIC_T2933263994_H
#ifndef ISLONG_T3231425864_H
#define ISLONG_T3231425864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsLong
struct  IsLong_t3231425864  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISLONG_T3231425864_H
#ifndef STRONGNAMEKEYPAIR_T3411219591_H
#define STRONGNAMEKEYPAIR_T3411219591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t3411219591  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t4116647657* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t4116647657* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t2385438082 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____publicKey_0)); }
	inline ByteU5BU5D_t4116647657* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t4116647657* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairArray_3)); }
	inline ByteU5BU5D_t4116647657* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t4116647657* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____rsa_4)); }
	inline RSA_t2385438082 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t2385438082 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t2385438082 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T3411219591_H
#ifndef POINTER_T2088917139_H
#define POINTER_T2088917139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t2088917139  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T2088917139_H
#ifndef HASCOPYSEMANTICSATTRIBUTE_T2474409306_H
#define HASCOPYSEMANTICSATTRIBUTE_T2474409306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.HasCopySemanticsAttribute
struct  HasCopySemanticsAttribute_t2474409306  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASCOPYSEMANTICSATTRIBUTE_T2474409306_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2897418192* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byref_0)); }
	inline BooleanU5BU5D_t2897418192* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2897418192* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef ACCESSEDTHROUGHPROPERTYATTRIBUTE_T2534421912_H
#define ACCESSEDTHROUGHPROPERTYATTRIBUTE_T2534421912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AccessedThroughPropertyAttribute
struct  AccessedThroughPropertyAttribute_t2534421912  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.AccessedThroughPropertyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AccessedThroughPropertyAttribute_t2534421912, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCESSEDTHROUGHPROPERTYATTRIBUTE_T2534421912_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1787725097 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1787725097 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1787725097 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1787725097 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef WIN32VERSIONRESOURCE_T1367628464_H
#define WIN32VERSIONRESOURCE_T1367628464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32VersionResource
struct  Win32VersionResource_t1367628464  : public Win32Resource_t884101579
{
public:
	// System.String[] System.Resources.Win32VersionResource::WellKnownProperties
	StringU5BU5D_t1281789340* ___WellKnownProperties_3;
	// System.Int64 System.Resources.Win32VersionResource::signature
	int64_t ___signature_4;
	// System.Int32 System.Resources.Win32VersionResource::struct_version
	int32_t ___struct_version_5;
	// System.Int64 System.Resources.Win32VersionResource::file_version
	int64_t ___file_version_6;
	// System.Int64 System.Resources.Win32VersionResource::product_version
	int64_t ___product_version_7;
	// System.Int32 System.Resources.Win32VersionResource::file_flags_mask
	int32_t ___file_flags_mask_8;
	// System.Int32 System.Resources.Win32VersionResource::file_flags
	int32_t ___file_flags_9;
	// System.Int32 System.Resources.Win32VersionResource::file_os
	int32_t ___file_os_10;
	// System.Int32 System.Resources.Win32VersionResource::file_type
	int32_t ___file_type_11;
	// System.Int32 System.Resources.Win32VersionResource::file_subtype
	int32_t ___file_subtype_12;
	// System.Int64 System.Resources.Win32VersionResource::file_date
	int64_t ___file_date_13;
	// System.Int32 System.Resources.Win32VersionResource::file_lang
	int32_t ___file_lang_14;
	// System.Int32 System.Resources.Win32VersionResource::file_codepage
	int32_t ___file_codepage_15;
	// System.Collections.Hashtable System.Resources.Win32VersionResource::properties
	Hashtable_t1853889766 * ___properties_16;

public:
	inline static int32_t get_offset_of_WellKnownProperties_3() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___WellKnownProperties_3)); }
	inline StringU5BU5D_t1281789340* get_WellKnownProperties_3() const { return ___WellKnownProperties_3; }
	inline StringU5BU5D_t1281789340** get_address_of_WellKnownProperties_3() { return &___WellKnownProperties_3; }
	inline void set_WellKnownProperties_3(StringU5BU5D_t1281789340* value)
	{
		___WellKnownProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___WellKnownProperties_3), value);
	}

	inline static int32_t get_offset_of_signature_4() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___signature_4)); }
	inline int64_t get_signature_4() const { return ___signature_4; }
	inline int64_t* get_address_of_signature_4() { return &___signature_4; }
	inline void set_signature_4(int64_t value)
	{
		___signature_4 = value;
	}

	inline static int32_t get_offset_of_struct_version_5() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___struct_version_5)); }
	inline int32_t get_struct_version_5() const { return ___struct_version_5; }
	inline int32_t* get_address_of_struct_version_5() { return &___struct_version_5; }
	inline void set_struct_version_5(int32_t value)
	{
		___struct_version_5 = value;
	}

	inline static int32_t get_offset_of_file_version_6() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_version_6)); }
	inline int64_t get_file_version_6() const { return ___file_version_6; }
	inline int64_t* get_address_of_file_version_6() { return &___file_version_6; }
	inline void set_file_version_6(int64_t value)
	{
		___file_version_6 = value;
	}

	inline static int32_t get_offset_of_product_version_7() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___product_version_7)); }
	inline int64_t get_product_version_7() const { return ___product_version_7; }
	inline int64_t* get_address_of_product_version_7() { return &___product_version_7; }
	inline void set_product_version_7(int64_t value)
	{
		___product_version_7 = value;
	}

	inline static int32_t get_offset_of_file_flags_mask_8() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_flags_mask_8)); }
	inline int32_t get_file_flags_mask_8() const { return ___file_flags_mask_8; }
	inline int32_t* get_address_of_file_flags_mask_8() { return &___file_flags_mask_8; }
	inline void set_file_flags_mask_8(int32_t value)
	{
		___file_flags_mask_8 = value;
	}

	inline static int32_t get_offset_of_file_flags_9() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_flags_9)); }
	inline int32_t get_file_flags_9() const { return ___file_flags_9; }
	inline int32_t* get_address_of_file_flags_9() { return &___file_flags_9; }
	inline void set_file_flags_9(int32_t value)
	{
		___file_flags_9 = value;
	}

	inline static int32_t get_offset_of_file_os_10() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_os_10)); }
	inline int32_t get_file_os_10() const { return ___file_os_10; }
	inline int32_t* get_address_of_file_os_10() { return &___file_os_10; }
	inline void set_file_os_10(int32_t value)
	{
		___file_os_10 = value;
	}

	inline static int32_t get_offset_of_file_type_11() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_type_11)); }
	inline int32_t get_file_type_11() const { return ___file_type_11; }
	inline int32_t* get_address_of_file_type_11() { return &___file_type_11; }
	inline void set_file_type_11(int32_t value)
	{
		___file_type_11 = value;
	}

	inline static int32_t get_offset_of_file_subtype_12() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_subtype_12)); }
	inline int32_t get_file_subtype_12() const { return ___file_subtype_12; }
	inline int32_t* get_address_of_file_subtype_12() { return &___file_subtype_12; }
	inline void set_file_subtype_12(int32_t value)
	{
		___file_subtype_12 = value;
	}

	inline static int32_t get_offset_of_file_date_13() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_date_13)); }
	inline int64_t get_file_date_13() const { return ___file_date_13; }
	inline int64_t* get_address_of_file_date_13() { return &___file_date_13; }
	inline void set_file_date_13(int64_t value)
	{
		___file_date_13 = value;
	}

	inline static int32_t get_offset_of_file_lang_14() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_lang_14)); }
	inline int32_t get_file_lang_14() const { return ___file_lang_14; }
	inline int32_t* get_address_of_file_lang_14() { return &___file_lang_14; }
	inline void set_file_lang_14(int32_t value)
	{
		___file_lang_14 = value;
	}

	inline static int32_t get_offset_of_file_codepage_15() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___file_codepage_15)); }
	inline int32_t get_file_codepage_15() const { return ___file_codepage_15; }
	inline int32_t* get_address_of_file_codepage_15() { return &___file_codepage_15; }
	inline void set_file_codepage_15(int32_t value)
	{
		___file_codepage_15 = value;
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(Win32VersionResource_t1367628464, ___properties_16)); }
	inline Hashtable_t1853889766 * get_properties_16() const { return ___properties_16; }
	inline Hashtable_t1853889766 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(Hashtable_t1853889766 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32VERSIONRESOURCE_T1367628464_H
#ifndef WIN32GROUPICONRESOURCE_T3674785737_H
#define WIN32GROUPICONRESOURCE_T3674785737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32GroupIconResource
struct  Win32GroupIconResource_t3674785737  : public Win32Resource_t884101579
{
public:
	// System.Resources.Win32IconResource[] System.Resources.Win32GroupIconResource::icons
	Win32IconResourceU5BU5D_t3415674191* ___icons_3;

public:
	inline static int32_t get_offset_of_icons_3() { return static_cast<int32_t>(offsetof(Win32GroupIconResource_t3674785737, ___icons_3)); }
	inline Win32IconResourceU5BU5D_t3415674191* get_icons_3() const { return ___icons_3; }
	inline Win32IconResourceU5BU5D_t3415674191** get_address_of_icons_3() { return &___icons_3; }
	inline void set_icons_3(Win32IconResourceU5BU5D_t3415674191* value)
	{
		___icons_3 = value;
		Il2CppCodeGenWriteBarrier((&___icons_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32GROUPICONRESOURCE_T3674785737_H
#ifndef WIN32ICONRESOURCE_T829689418_H
#define WIN32ICONRESOURCE_T829689418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32IconResource
struct  Win32IconResource_t829689418  : public Win32Resource_t884101579
{
public:
	// System.Resources.ICONDIRENTRY System.Resources.Win32IconResource::icon
	ICONDIRENTRY_t3612437535 * ___icon_3;

public:
	inline static int32_t get_offset_of_icon_3() { return static_cast<int32_t>(offsetof(Win32IconResource_t829689418, ___icon_3)); }
	inline ICONDIRENTRY_t3612437535 * get_icon_3() const { return ___icon_3; }
	inline ICONDIRENTRY_t3612437535 ** get_address_of_icon_3() { return &___icon_3; }
	inline void set_icon_3(ICONDIRENTRY_t3612437535 * value)
	{
		___icon_3 = value;
		Il2CppCodeGenWriteBarrier((&___icon_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32ICONRESOURCE_T829689418_H
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
#ifndef OBFUSCATEASSEMBLYATTRIBUTE_T3454775168_H
#define OBFUSCATEASSEMBLYATTRIBUTE_T3454775168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ObfuscateAssemblyAttribute
struct  ObfuscateAssemblyAttribute_t3454775168  : public Attribute_t861562559
{
public:
	// System.Boolean System.Reflection.ObfuscateAssemblyAttribute::is_private
	bool ___is_private_0;
	// System.Boolean System.Reflection.ObfuscateAssemblyAttribute::strip
	bool ___strip_1;

public:
	inline static int32_t get_offset_of_is_private_0() { return static_cast<int32_t>(offsetof(ObfuscateAssemblyAttribute_t3454775168, ___is_private_0)); }
	inline bool get_is_private_0() const { return ___is_private_0; }
	inline bool* get_address_of_is_private_0() { return &___is_private_0; }
	inline void set_is_private_0(bool value)
	{
		___is_private_0 = value;
	}

	inline static int32_t get_offset_of_strip_1() { return static_cast<int32_t>(offsetof(ObfuscateAssemblyAttribute_t3454775168, ___strip_1)); }
	inline bool get_strip_1() const { return ___strip_1; }
	inline bool* get_address_of_strip_1() { return &___strip_1; }
	inline void set_strip_1(bool value)
	{
		___strip_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBFUSCATEASSEMBLYATTRIBUTE_T3454775168_H
#ifndef OBFUSCATIONATTRIBUTE_T626338001_H
#define OBFUSCATIONATTRIBUTE_T626338001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ObfuscationAttribute
struct  ObfuscationAttribute_t626338001  : public Attribute_t861562559
{
public:
	// System.Boolean System.Reflection.ObfuscationAttribute::exclude
	bool ___exclude_0;
	// System.Boolean System.Reflection.ObfuscationAttribute::strip
	bool ___strip_1;
	// System.Boolean System.Reflection.ObfuscationAttribute::applyToMembers
	bool ___applyToMembers_2;
	// System.String System.Reflection.ObfuscationAttribute::feature
	String_t* ___feature_3;

public:
	inline static int32_t get_offset_of_exclude_0() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t626338001, ___exclude_0)); }
	inline bool get_exclude_0() const { return ___exclude_0; }
	inline bool* get_address_of_exclude_0() { return &___exclude_0; }
	inline void set_exclude_0(bool value)
	{
		___exclude_0 = value;
	}

	inline static int32_t get_offset_of_strip_1() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t626338001, ___strip_1)); }
	inline bool get_strip_1() const { return ___strip_1; }
	inline bool* get_address_of_strip_1() { return &___strip_1; }
	inline void set_strip_1(bool value)
	{
		___strip_1 = value;
	}

	inline static int32_t get_offset_of_applyToMembers_2() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t626338001, ___applyToMembers_2)); }
	inline bool get_applyToMembers_2() const { return ___applyToMembers_2; }
	inline bool* get_address_of_applyToMembers_2() { return &___applyToMembers_2; }
	inline void set_applyToMembers_2(bool value)
	{
		___applyToMembers_2 = value;
	}

	inline static int32_t get_offset_of_feature_3() { return static_cast<int32_t>(offsetof(ObfuscationAttribute_t626338001, ___feature_3)); }
	inline String_t* get_feature_3() const { return ___feature_3; }
	inline String_t** get_address_of_feature_3() { return &___feature_3; }
	inline void set_feature_3(String_t* value)
	{
		___feature_3 = value;
		Il2CppCodeGenWriteBarrier((&___feature_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBFUSCATIONATTRIBUTE_T626338001_H
#ifndef FIXEDADDRESSVALUETYPEATTRIBUTE_T456371173_H
#define FIXEDADDRESSVALUETYPEATTRIBUTE_T456371173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedAddressValueTypeAttribute
struct  FixedAddressValueTypeAttribute_t456371173  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDADDRESSVALUETYPEATTRIBUTE_T456371173_H
#ifndef DISCARDABLEATTRIBUTE_T1017720777_H
#define DISCARDABLEATTRIBUTE_T1017720777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DiscardableAttribute
struct  DiscardableAttribute_t1017720777  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISCARDABLEATTRIBUTE_T1017720777_H
#ifndef NATIVECPPCLASSATTRIBUTE_T3264448089_H
#define NATIVECPPCLASSATTRIBUTE_T3264448089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.NativeCppClassAttribute
struct  NativeCppClassAttribute_t3264448089  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECPPCLASSATTRIBUTE_T3264448089_H
#ifndef RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#define RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeWrappedException
struct  RuntimeWrappedException_t2169265577  : public Exception_t
{
public:
	// System.Object System.Runtime.CompilerServices.RuntimeWrappedException::wrapped_exception
	RuntimeObject * ___wrapped_exception_11;

public:
	inline static int32_t get_offset_of_wrapped_exception_11() { return static_cast<int32_t>(offsetof(RuntimeWrappedException_t2169265577, ___wrapped_exception_11)); }
	inline RuntimeObject * get_wrapped_exception_11() const { return ___wrapped_exception_11; }
	inline RuntimeObject ** get_address_of_wrapped_exception_11() { return &___wrapped_exception_11; }
	inline void set_wrapped_exception_11(RuntimeObject * value)
	{
		___wrapped_exception_11 = value;
		Il2CppCodeGenWriteBarrier((&___wrapped_exception_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#ifndef CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#define CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CustomConstantAttribute
struct  CustomConstantAttribute_t1681301359  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCONSTANTATTRIBUTE_T1681301359_H
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
#ifndef COMPILERGLOBALSCOPEATTRIBUTE_T1669517540_H
#define COMPILERGLOBALSCOPEATTRIBUTE_T1669517540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGlobalScopeAttribute
struct  CompilerGlobalScopeAttribute_t1669517540  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGLOBALSCOPEATTRIBUTE_T1669517540_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t1721442111  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t1721442111, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#ifndef WIN32ENCODEDRESOURCE_T3551168484_H
#define WIN32ENCODEDRESOURCE_T3551168484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32EncodedResource
struct  Win32EncodedResource_t3551168484  : public Win32Resource_t884101579
{
public:
	// System.Byte[] System.Resources.Win32EncodedResource::data
	ByteU5BU5D_t4116647657* ___data_3;

public:
	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(Win32EncodedResource_t3551168484, ___data_3)); }
	inline ByteU5BU5D_t4116647657* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_t4116647657* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32ENCODEDRESOURCE_T3551168484_H
#ifndef TARGETEXCEPTION_T3386045725_H
#define TARGETEXCEPTION_T3386045725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t3386045725  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T3386045725_H
#ifndef TARGETINVOCATIONEXCEPTION_T4266643902_H
#define TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4266643902  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifndef RESOURCECACHEITEM_T51292791_H
#define RESOURCECACHEITEM_T51292791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t51292791 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t51292791, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t51292791, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t51292791_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t51292791_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T51292791_H
#ifndef RESOURCEINFO_T2872965302_H
#define RESOURCEINFO_T2872965302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t2872965302 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t2872965302, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2872965302_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2872965302_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T2872965302_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1216617239  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
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
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef RUNTIMERESOURCESET_T3081501575_H
#define RUNTIMERESOURCESET_T3081501575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t3081501575  : public ResourceSet_t2827911187
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T3081501575_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T3549813284_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T3549813284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t3549813284  : public Attribute_t861562559
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t3456873960 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t3549813284, ___ver_0)); }
	inline Version_t3456873960 * get_ver_0() const { return ___ver_0; }
	inline Version_t3456873960 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t3456873960 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T3549813284_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	intptr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	intptr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline intptr_t get_klass_1() const { return ___klass_1; }
	inline intptr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(intptr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline intptr_t get_handle_2() const { return ___handle_2; }
	inline intptr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(intptr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef RESOLVETOKENERROR_T3520275515_H
#define RESOLVETOKENERROR_T3520275515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResolveTokenError
struct  ResolveTokenError_t3520275515 
{
public:
	// System.Int32 System.Reflection.ResolveTokenError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResolveTokenError_t3520275515, ___value___1)); }
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
#endif // RESOLVETOKENERROR_T3520275515_H
#ifndef METHODCODETYPE_T920515152_H
#define METHODCODETYPE_T920515152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodCodeType
struct  MethodCodeType_t920515152 
{
public:
	// System.Int32 System.Runtime.CompilerServices.MethodCodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodCodeType_t920515152, ___value___1)); }
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
#endif // METHODCODETYPE_T920515152_H
#ifndef LOADHINT_T3743314490_H
#define LOADHINT_T3743314490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t3743314490 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t3743314490, ___value___1)); }
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
#endif // LOADHINT_T3743314490_H
#ifndef PINFO_T446749821_H
#define PINFO_T446749821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t446749821 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t446749821, ___value___1)); }
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
#endif // PINFO_T446749821_H
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
#ifndef METHODIMPLOPTIONS_T4141524024_H
#define METHODIMPLOPTIONS_T4141524024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplOptions
struct  MethodImplOptions_t4141524024 
{
public:
	// System.Int32 System.Runtime.CompilerServices.MethodImplOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplOptions_t4141524024, ___value___1)); }
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
#endif // METHODIMPLOPTIONS_T4141524024_H
#ifndef METHODIMPLATTRIBUTES_T3646023817_H
#define METHODIMPLATTRIBUTES_T3646023817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t3646023817 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t3646023817, ___value___1)); }
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
#endif // METHODIMPLATTRIBUTES_T3646023817_H
#ifndef CALLINGCONVENTIONS_T2253234531_H
#define CALLINGCONVENTIONS_T2253234531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2253234531 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t2253234531, ___value___1)); }
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
#endif // CALLINGCONVENTIONS_T2253234531_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef EVENTATTRIBUTES_T1153671773_H
#define EVENTATTRIBUTES_T1153671773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t1153671773 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t1153671773, ___value___1)); }
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
#endif // EVENTATTRIBUTES_T1153671773_H
#ifndef METHODATTRIBUTES_T2366443849_H
#define METHODATTRIBUTES_T2366443849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2366443849 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2366443849, ___value___1)); }
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
#endif // METHODATTRIBUTES_T2366443849_H
#ifndef FIELDATTRIBUTES_T400321159_H
#define FIELDATTRIBUTES_T400321159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t400321159 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t400321159, ___value___1)); }
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
#endif // FIELDATTRIBUTES_T400321159_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef PORTABLEEXECUTABLEKINDS_T1191923110_H
#define PORTABLEEXECUTABLEKINDS_T1191923110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PortableExecutableKinds
struct  PortableExecutableKinds_t1191923110 
{
public:
	// System.Int32 System.Reflection.PortableExecutableKinds::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PortableExecutableKinds_t1191923110, ___value___1)); }
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
#endif // PORTABLEEXECUTABLEKINDS_T1191923110_H
#ifndef REFLECTIONTYPELOADEXCEPTION_T440884068_H
#define REFLECTIONTYPELOADEXCEPTION_T440884068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t440884068  : public SystemException_t176217640
{
public:
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::loaderExceptions
	ExceptionU5BU5D_t2535001212* ___loaderExceptions_12;
	// System.Type[] System.Reflection.ReflectionTypeLoadException::types
	TypeU5BU5D_t3940880105* ___types_13;

public:
	inline static int32_t get_offset_of_loaderExceptions_12() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t440884068, ___loaderExceptions_12)); }
	inline ExceptionU5BU5D_t2535001212* get_loaderExceptions_12() const { return ___loaderExceptions_12; }
	inline ExceptionU5BU5D_t2535001212** get_address_of_loaderExceptions_12() { return &___loaderExceptions_12; }
	inline void set_loaderExceptions_12(ExceptionU5BU5D_t2535001212* value)
	{
		___loaderExceptions_12 = value;
		Il2CppCodeGenWriteBarrier((&___loaderExceptions_12), value);
	}

	inline static int32_t get_offset_of_types_13() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t440884068, ___types_13)); }
	inline TypeU5BU5D_t3940880105* get_types_13() const { return ___types_13; }
	inline TypeU5BU5D_t3940880105** get_address_of_types_13() { return &___types_13; }
	inline void set_types_13(TypeU5BU5D_t3940880105* value)
	{
		___types_13 = value;
		Il2CppCodeGenWriteBarrier((&___types_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONTYPELOADEXCEPTION_T440884068_H
#ifndef PROPERTYATTRIBUTES_T3388002996_H
#define PROPERTYATTRIBUTES_T3388002996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t3388002996 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t3388002996, ___value___1)); }
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
#endif // PROPERTYATTRIBUTES_T3388002996_H
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T305929193_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef COMPILATIONRELAXATIONS_T3292409279_H
#define COMPILATIONRELAXATIONS_T3292409279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t3292409279 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t3292409279, ___value___1)); }
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
#endif // COMPILATIONRELAXATIONS_T3292409279_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef RESOURCEATTRIBUTES_T3997964906_H
#define RESOURCEATTRIBUTES_T3997964906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t3997964906 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t3997964906, ___value___1)); }
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
#endif // RESOURCEATTRIBUTES_T3997964906_H
#ifndef MISSINGMANIFESTRESOURCEEXCEPTION_T85971840_H
#define MISSINGMANIFESTRESOURCEEXCEPTION_T85971840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.MissingManifestResourceException
struct  MissingManifestResourceException_t85971840  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMANIFESTRESOURCEEXCEPTION_T85971840_H
#ifndef MISSINGSATELLITEASSEMBLYEXCEPTION_T2337567603_H
#define MISSINGSATELLITEASSEMBLYEXCEPTION_T2337567603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.MissingSatelliteAssemblyException
struct  MissingSatelliteAssemblyException_t2337567603  : public SystemException_t176217640
{
public:
	// System.String System.Resources.MissingSatelliteAssemblyException::culture
	String_t* ___culture_12;

public:
	inline static int32_t get_offset_of_culture_12() { return static_cast<int32_t>(offsetof(MissingSatelliteAssemblyException_t2337567603, ___culture_12)); }
	inline String_t* get_culture_12() const { return ___culture_12; }
	inline String_t** get_address_of_culture_12() { return &___culture_12; }
	inline void set_culture_12(String_t* value)
	{
		___culture_12 = value;
		Il2CppCodeGenWriteBarrier((&___culture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGSATELLITEASSEMBLYEXCEPTION_T2337567603_H
#ifndef PREDEFINEDRESOURCETYPE_T4229135164_H
#define PREDEFINEDRESOURCETYPE_T4229135164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t4229135164 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t4229135164, ___value___1)); }
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
#endif // PREDEFINEDRESOURCETYPE_T4229135164_H
#ifndef U3CRESOURCEVALUEASSTREAMU3EC__ANONSTOREY2_T3934650216_H
#define U3CRESOURCEVALUEASSTREAMU3EC__ANONSTOREY2_T3934650216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/<ResourceValueAsStream>c__AnonStorey2
struct  U3CResourceValueAsStreamU3Ec__AnonStorey2_t3934650216  : public RuntimeObject
{
public:
	// System.IntPtr System.Resources.ResourceReader/<ResourceValueAsStream>c__AnonStorey2::ptr
	intptr_t ___ptr_0;

public:
	inline static int32_t get_offset_of_ptr_0() { return static_cast<int32_t>(offsetof(U3CResourceValueAsStreamU3Ec__AnonStorey2_t3934650216, ___ptr_0)); }
	inline intptr_t get_ptr_0() const { return ___ptr_0; }
	inline intptr_t* get_address_of_ptr_0() { return &___ptr_0; }
	inline void set_ptr_0(intptr_t value)
	{
		___ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESOURCEVALUEASSTREAMU3EC__ANONSTOREY2_T3934650216_H
#ifndef RESOURCELOCATION_T1891396988_H
#define RESOURCELOCATION_T1891396988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceLocation
struct  ResourceLocation_t1891396988 
{
public:
	// System.Int32 System.Reflection.ResourceLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceLocation_t1891396988, ___value___1)); }
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
#endif // RESOURCELOCATION_T1891396988_H
#ifndef ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#define ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.UltimateResourceFallbackLocation
struct  UltimateResourceFallbackLocation_t690808888 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_t690808888, ___value___1)); }
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
#endif // ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifndef WIN32RESOURCETYPE_T878705926_H
#define WIN32RESOURCETYPE_T878705926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32ResourceType
struct  Win32ResourceType_t878705926 
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Win32ResourceType_t878705926, ___value___1)); }
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
#endif // WIN32RESOURCETYPE_T878705926_H
#ifndef IDISPATCHCONSTANTATTRIBUTE_T227612748_H
#define IDISPATCHCONSTANTATTRIBUTE_T227612748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IDispatchConstantAttribute
struct  IDispatchConstantAttribute_t227612748  : public CustomConstantAttribute_t1681301359
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDISPATCHCONSTANTATTRIBUTE_T227612748_H
#ifndef TYPEATTRIBUTES_T113483779_H
#define TYPEATTRIBUTES_T113483779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t113483779 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t113483779, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T113483779_H
#ifndef IUNKNOWNCONSTANTATTRIBUTE_T3255902090_H
#define IUNKNOWNCONSTANTATTRIBUTE_T3255902090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IUnknownConstantAttribute
struct  IUnknownConstantAttribute_t3255902090  : public CustomConstantAttribute_t1681301359
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IUNKNOWNCONSTANTATTRIBUTE_T3255902090_H
#ifndef DATETIMECONSTANTATTRIBUTE_T375130962_H
#define DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t375130962  : public CustomConstantAttribute_t1681301359
{
public:
	// System.Int64 System.Runtime.CompilerServices.DateTimeConstantAttribute::ticks
	int64_t ___ticks_0;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t375130962, ___ticks_0)); }
	inline int64_t get_ticks_0() const { return ___ticks_0; }
	inline int64_t* get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(int64_t value)
	{
		___ticks_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifndef MONOPROPERTYINFO_T3087356066_H
#define MONOPROPERTYINFO_T3087356066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t3087356066 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3087356066_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3087356066_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T3087356066_H
#ifndef RESOURCEMANAGER_T4037989559_H
#define RESOURCEMANAGER_T4037989559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t4037989559  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_4;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_5;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t1853889766 * ___ResourceSets_6;
	// System.Boolean System.Resources.ResourceManager::ignoreCase
	bool ___ignoreCase_7;
	// System.Type System.Resources.ResourceManager::resourceSource
	Type_t * ___resourceSource_8;
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_9;
	// System.String System.Resources.ResourceManager::resourceDir
	String_t* ___resourceDir_10;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::neutral_culture
	CultureInfo_t4157843068 * ___neutral_culture_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::fallbackLocation
	int32_t ___fallbackLocation_12;

public:
	inline static int32_t get_offset_of_BaseNameField_4() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___BaseNameField_4)); }
	inline String_t* get_BaseNameField_4() const { return ___BaseNameField_4; }
	inline String_t** get_address_of_BaseNameField_4() { return &___BaseNameField_4; }
	inline void set_BaseNameField_4(String_t* value)
	{
		___BaseNameField_4 = value;
		Il2CppCodeGenWriteBarrier((&___BaseNameField_4), value);
	}

	inline static int32_t get_offset_of_MainAssembly_5() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___MainAssembly_5)); }
	inline Assembly_t * get_MainAssembly_5() const { return ___MainAssembly_5; }
	inline Assembly_t ** get_address_of_MainAssembly_5() { return &___MainAssembly_5; }
	inline void set_MainAssembly_5(Assembly_t * value)
	{
		___MainAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___MainAssembly_5), value);
	}

	inline static int32_t get_offset_of_ResourceSets_6() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___ResourceSets_6)); }
	inline Hashtable_t1853889766 * get_ResourceSets_6() const { return ___ResourceSets_6; }
	inline Hashtable_t1853889766 ** get_address_of_ResourceSets_6() { return &___ResourceSets_6; }
	inline void set_ResourceSets_6(Hashtable_t1853889766 * value)
	{
		___ResourceSets_6 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceSets_6), value);
	}

	inline static int32_t get_offset_of_ignoreCase_7() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___ignoreCase_7)); }
	inline bool get_ignoreCase_7() const { return ___ignoreCase_7; }
	inline bool* get_address_of_ignoreCase_7() { return &___ignoreCase_7; }
	inline void set_ignoreCase_7(bool value)
	{
		___ignoreCase_7 = value;
	}

	inline static int32_t get_offset_of_resourceSource_8() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceSource_8)); }
	inline Type_t * get_resourceSource_8() const { return ___resourceSource_8; }
	inline Type_t ** get_address_of_resourceSource_8() { return &___resourceSource_8; }
	inline void set_resourceSource_8(Type_t * value)
	{
		___resourceSource_8 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSource_8), value);
	}

	inline static int32_t get_offset_of_resourceSetType_9() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceSetType_9)); }
	inline Type_t * get_resourceSetType_9() const { return ___resourceSetType_9; }
	inline Type_t ** get_address_of_resourceSetType_9() { return &___resourceSetType_9; }
	inline void set_resourceSetType_9(Type_t * value)
	{
		___resourceSetType_9 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_9), value);
	}

	inline static int32_t get_offset_of_resourceDir_10() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceDir_10)); }
	inline String_t* get_resourceDir_10() const { return ___resourceDir_10; }
	inline String_t** get_address_of_resourceDir_10() { return &___resourceDir_10; }
	inline void set_resourceDir_10(String_t* value)
	{
		___resourceDir_10 = value;
		Il2CppCodeGenWriteBarrier((&___resourceDir_10), value);
	}

	inline static int32_t get_offset_of_neutral_culture_11() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___neutral_culture_11)); }
	inline CultureInfo_t4157843068 * get_neutral_culture_11() const { return ___neutral_culture_11; }
	inline CultureInfo_t4157843068 ** get_address_of_neutral_culture_11() { return &___neutral_culture_11; }
	inline void set_neutral_culture_11(CultureInfo_t4157843068 * value)
	{
		___neutral_culture_11 = value;
		Il2CppCodeGenWriteBarrier((&___neutral_culture_11), value);
	}

	inline static int32_t get_offset_of_fallbackLocation_12() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___fallbackLocation_12)); }
	inline int32_t get_fallbackLocation_12() const { return ___fallbackLocation_12; }
	inline int32_t* get_address_of_fallbackLocation_12() { return &___fallbackLocation_12; }
	inline void set_fallbackLocation_12(int32_t value)
	{
		___fallbackLocation_12 = value;
	}
};

struct ResourceManager_t4037989559_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t1853889766 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t1853889766 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t1853889766 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t1853889766 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t1853889766 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t1853889766 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t1853889766 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t1853889766 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T4037989559_H
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
#ifndef MONOEVENTINFO_T346866618_H
#define MONOEVENTINFO_T346866618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t346866618 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t2572182361* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t2572182361* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t346866618_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t346866618_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;
};
#endif // MONOEVENTINFO_T346866618_H
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T2987026101_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	intptr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t1871169219  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t1871169219  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t1871169219 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t1871169219  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t2027633532  : public Attribute_t861562559
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.NeutralResourcesLanguageAttribute::loc
	int32_t ___loc_1;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t2027633532, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}

	inline static int32_t get_offset_of_loc_1() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t2027633532, ___loc_1)); }
	inline int32_t get_loc_1() const { return ___loc_1; }
	inline int32_t* get_address_of_loc_1() { return &___loc_1; }
	inline void set_loc_1(int32_t value)
	{
		___loc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MONOCMETHOD_T3191134373_H
#define MONOCMETHOD_T3191134373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t3191134373  : public ConstructorInfo_t5769829
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	intptr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___mhandle_2)); }
	inline intptr_t get_mhandle_2() const { return ___mhandle_2; }
	inline intptr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(intptr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T3191134373_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#define DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t548613883  : public Attribute_t861562559
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t548613883, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#ifndef DEPENDENCYATTRIBUTE_T1606102833_H
#define DEPENDENCYATTRIBUTE_T1606102833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DependencyAttribute
struct  DependencyAttribute_t1606102833  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.DependencyAttribute::dependentAssembly
	String_t* ___dependentAssembly_0;
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DependencyAttribute::hint
	int32_t ___hint_1;

public:
	inline static int32_t get_offset_of_dependentAssembly_0() { return static_cast<int32_t>(offsetof(DependencyAttribute_t1606102833, ___dependentAssembly_0)); }
	inline String_t* get_dependentAssembly_0() const { return ___dependentAssembly_0; }
	inline String_t** get_address_of_dependentAssembly_0() { return &___dependentAssembly_0; }
	inline void set_dependentAssembly_0(String_t* value)
	{
		___dependentAssembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___dependentAssembly_0), value);
	}

	inline static int32_t get_offset_of_hint_1() { return static_cast<int32_t>(offsetof(DependencyAttribute_t1606102833, ___hint_1)); }
	inline int32_t get_hint_1() const { return ___hint_1; }
	inline int32_t* get_address_of_hint_1() { return &___hint_1; }
	inline void set_hint_1(int32_t value)
	{
		___hint_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPENDENCYATTRIBUTE_T1606102833_H
#ifndef MONOMETHODINFO_T1248819020_H
#define MONOMETHODINFO_T1248819020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t1248819020 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1248819020_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1248819020_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T1248819020_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	intptr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline intptr_t get_mhandle_0() const { return ___mhandle_0; }
	inline intptr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(intptr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3087356066  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t2155025054 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline intptr_t get_prop_1() const { return ___prop_1; }
	inline intptr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(intptr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t3087356066  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t3087356066 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t3087356066  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t2155025054 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t2155025054 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t2155025054 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef TYPEDELEGATOR_T3617470028_H
#define TYPEDELEGATOR_T3617470028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
struct  TypeDelegator_t3617470028  : public Type_t
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t3617470028, ___typeImpl_8)); }
	inline Type_t * get_typeImpl_8() const { return ___typeImpl_8; }
	inline Type_t ** get_address_of_typeImpl_8() { return &___typeImpl_8; }
	inline void set_typeImpl_8(Type_t * value)
	{
		___typeImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEGATOR_T3617470028_H
#ifndef GETTERADAPTER_T2155025054_H
#define GETTERADAPTER_T2155025054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t2155025054  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T2155025054_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef MONOGENERICCMETHOD_T4239028627_H
#define MONOGENERICCMETHOD_T4239028627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t4239028627  : public MonoCMethod_t3191134373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T4239028627_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H
#ifndef MONOGENERICCLASS_T1055971354_H
#define MONOGENERICCLASS_T1055971354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericClass
struct  MonoGenericClass_t1055971354  : public MonoType_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.MonoGenericClass::generic_type
	TypeBuilder_t1073948154 * ___generic_type_10;
	// System.Type[] System.Reflection.MonoGenericClass::type_arguments
	TypeU5BU5D_t3940880105* ___type_arguments_11;
	// System.Boolean System.Reflection.MonoGenericClass::initialized
	bool ___initialized_12;
	// System.Collections.Hashtable System.Reflection.MonoGenericClass::fields
	Hashtable_t1853889766 * ___fields_13;
	// System.Collections.Hashtable System.Reflection.MonoGenericClass::ctors
	Hashtable_t1853889766 * ___ctors_14;
	// System.Collections.Hashtable System.Reflection.MonoGenericClass::methods
	Hashtable_t1853889766 * ___methods_15;
	// System.Int32 System.Reflection.MonoGenericClass::event_count
	int32_t ___event_count_16;

public:
	inline static int32_t get_offset_of_generic_type_10() { return static_cast<int32_t>(offsetof(MonoGenericClass_t1055971354, ___generic_type_10)); }
	inline TypeBuilder_t1073948154 * get_generic_type_10() const { return ___generic_type_10; }
	inline TypeBuilder_t1073948154 ** get_address_of_generic_type_10() { return &___generic_type_10; }
	inline void set_generic_type_10(TypeBuilder_t1073948154 * value)
	{
		___generic_type_10 = value;
		Il2CppCodeGenWriteBarrier((&___generic_type_10), value);
	}

	inline static int32_t get_offset_of_type_arguments_11() { return static_cast<int32_t>(offsetof(MonoGenericClass_t1055971354, ___type_arguments_11)); }
	inline TypeU5BU5D_t3940880105* get_type_arguments_11() const { return ___type_arguments_11; }
	inline TypeU5BU5D_t3940880105** get_address_of_type_arguments_11() { return &___type_arguments_11; }
	inline void set_type_arguments_11(TypeU5BU5D_t3940880105* value)
	{
		___type_arguments_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_arguments_11), value);
	}

	inline static int32_t get_offset_of_initialized_12() { return static_cast<int32_t>(offsetof(MonoGenericClass_t1055971354, ___initialized_12)); }
	inline bool get_initialized_12() const { return ___initialized_12; }
	inline bool* get_address_of_initialized_12() { return &___initialized_12; }
	inline void set_initialized_12(bool value)
	{
		___initialized_12 = value;
	}

	inline static int32_t get_offset_of_fields_13() { return static_cast<int32_t>(offsetof(MonoGenericClass_t1055971354, ___fields_13)); }
	inline Hashtable_t1853889766 * get_fields_13() const { return ___fields_13; }
	inline Hashtable_t1853889766 ** get_address_of_fields_13() { return &___fields_13; }
	inline void set_fields_13(Hashtable_t1853889766 * value)
	{
		___fields_13 = value;
		Il2CppCodeGenWriteBarrier((&___fields_13), value);
	}

	inline static int32_t get_offset_of_ctors_14() { return static_cast<int32_t>(offsetof(MonoGenericClass_t1055971354, ___ctors_14)); }
	inline Hashtable_t1853889766 * get_ctors_14() const { return ___ctors_14; }
	inline Hashtable_t1853889766 ** get_address_of_ctors_14() { return &___ctors_14; }
	inline void set_ctors_14(Hashtable_t1853889766 * value)
	{
		___ctors_14 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_14), value);
	}

	inline static int32_t get_offset_of_methods_15() { return static_cast<int32_t>(offsetof(MonoGenericClass_t1055971354, ___methods_15)); }
	inline Hashtable_t1853889766 * get_methods_15() const { return ___methods_15; }
	inline Hashtable_t1853889766 ** get_address_of_methods_15() { return &___methods_15; }
	inline void set_methods_15(Hashtable_t1853889766 * value)
	{
		___methods_15 = value;
		Il2CppCodeGenWriteBarrier((&___methods_15), value);
	}

	inline static int32_t get_offset_of_event_count_16() { return static_cast<int32_t>(offsetof(MonoGenericClass_t1055971354, ___event_count_16)); }
	inline int32_t get_event_count_16() const { return ___event_count_16; }
	inline int32_t* get_address_of_event_count_16() { return &___event_count_16; }
	inline void set_event_count_16(int32_t value)
	{
		___event_count_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCLASS_T1055971354_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (Missing_t508514592), -1, sizeof(Missing_t508514592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable600[1] = 
{
	Missing_t508514592_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (ResolveTokenError_t3520275515)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable601[4] = 
{
	ResolveTokenError_t3520275515::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (Module_t2987026101), -1, sizeof(Module_t2987026101_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable602[10] = 
{
	0,
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t2987026101::get_offset_of__impl_3(),
	Module_t2987026101::get_offset_of_assembly_4(),
	Module_t2987026101::get_offset_of_fqname_5(),
	Module_t2987026101::get_offset_of_name_6(),
	Module_t2987026101::get_offset_of_scopename_7(),
	Module_t2987026101::get_offset_of_is_resource_8(),
	Module_t2987026101::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (MonoEventInfo_t346866618)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable603[8] = 
{
	MonoEventInfo_t346866618::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable604[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable605[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (MonoGenericClass_t1055971354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable606[8] = 
{
	0,
	MonoGenericClass_t1055971354::get_offset_of_generic_type_10(),
	MonoGenericClass_t1055971354::get_offset_of_type_arguments_11(),
	MonoGenericClass_t1055971354::get_offset_of_initialized_12(),
	MonoGenericClass_t1055971354::get_offset_of_fields_13(),
	MonoGenericClass_t1055971354::get_offset_of_ctors_14(),
	MonoGenericClass_t1055971354::get_offset_of_methods_15(),
	MonoGenericClass_t1055971354::get_offset_of_event_count_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (MonoGenericCMethod_t4239028627), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (MonoMethodInfo_t1248819020)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable609[5] = 
{
	MonoMethodInfo_t1248819020::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable610[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (MonoCMethod_t3191134373), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable611[3] = 
{
	MonoCMethod_t3191134373::get_offset_of_mhandle_2(),
	MonoCMethod_t3191134373::get_offset_of_name_3(),
	MonoCMethod_t3191134373::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (MonoPropertyInfo_t3087356066)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable612[5] = 
{
	MonoPropertyInfo_t3087356066::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (PInfo_t446749821)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable613[7] = 
{
	PInfo_t446749821::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable614[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (GetterAdapter_t2155025054), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (ObfuscateAssemblyAttribute_t3454775168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable618[2] = 
{
	ObfuscateAssemblyAttribute_t3454775168::get_offset_of_is_private_0(),
	ObfuscateAssemblyAttribute_t3454775168::get_offset_of_strip_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (ObfuscationAttribute_t626338001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable619[4] = 
{
	ObfuscationAttribute_t626338001::get_offset_of_exclude_0(),
	ObfuscationAttribute_t626338001::get_offset_of_strip_1(),
	ObfuscationAttribute_t626338001::get_offset_of_applyToMembers_2(),
	ObfuscationAttribute_t626338001::get_offset_of_feature_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (ParameterAttributes_t1826424051)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable620[12] = 
{
	ParameterAttributes_t1826424051::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (ParameterInfo_t1861056598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable621[7] = 
{
	ParameterInfo_t1861056598::get_offset_of_ClassImpl_0(),
	ParameterInfo_t1861056598::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t1861056598::get_offset_of_MemberImpl_2(),
	ParameterInfo_t1861056598::get_offset_of_NameImpl_3(),
	ParameterInfo_t1861056598::get_offset_of_PositionImpl_4(),
	ParameterInfo_t1861056598::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t1861056598::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (ParameterModifier_t1461694466)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t1461694466_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable622[1] = 
{
	ParameterModifier_t1461694466::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (Pointer_t2088917139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable623[2] = 
{
	Pointer_t2088917139::get_offset_of_data_0(),
	Pointer_t2088917139::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (PortableExecutableKinds_t1191923110)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable624[6] = 
{
	PortableExecutableKinds_t1191923110::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (ProcessorArchitecture_t305929193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable625[6] = 
{
	ProcessorArchitecture_t305929193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (PropertyAttributes_t3388002996)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable626[9] = 
{
	PropertyAttributes_t3388002996::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (ReflectionTypeLoadException_t440884068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable628[2] = 
{
	ReflectionTypeLoadException_t440884068::get_offset_of_loaderExceptions_12(),
	ReflectionTypeLoadException_t440884068::get_offset_of_types_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (ResourceAttributes_t3997964906)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable629[3] = 
{
	ResourceAttributes_t3997964906::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (ResourceLocation_t1891396988)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable630[4] = 
{
	ResourceLocation_t1891396988::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (StrongNameKeyPair_t3411219591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable631[5] = 
{
	StrongNameKeyPair_t3411219591::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3411219591::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (TargetException_t3386045725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (TargetInvocationException_t4266643902), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (TargetParameterCountException_t1216617239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (TypeAttributes_t113483779)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable635[32] = 
{
	TypeAttributes_t113483779::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (TypeDelegator_t3617470028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable636[1] = 
{
	TypeDelegator_t3617470028::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (MissingManifestResourceException_t85971840), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (MissingSatelliteAssemblyException_t2337567603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable640[1] = 
{
	MissingSatelliteAssemblyException_t2337567603::get_offset_of_culture_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (NeutralResourcesLanguageAttribute_t2027633532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable641[2] = 
{
	NeutralResourcesLanguageAttribute_t2027633532::get_offset_of_culture_0(),
	NeutralResourcesLanguageAttribute_t2027633532::get_offset_of_loc_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (ResourceManager_t4037989559), -1, sizeof(ResourceManager_t4037989559_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable642[13] = 
{
	ResourceManager_t4037989559_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t4037989559::get_offset_of_BaseNameField_4(),
	ResourceManager_t4037989559::get_offset_of_MainAssembly_5(),
	ResourceManager_t4037989559::get_offset_of_ResourceSets_6(),
	ResourceManager_t4037989559::get_offset_of_ignoreCase_7(),
	ResourceManager_t4037989559::get_offset_of_resourceSource_8(),
	ResourceManager_t4037989559::get_offset_of_resourceSetType_9(),
	ResourceManager_t4037989559::get_offset_of_resourceDir_10(),
	ResourceManager_t4037989559::get_offset_of_neutral_culture_11(),
	ResourceManager_t4037989559::get_offset_of_fallbackLocation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (PredefinedResourceType_t4229135164)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable643[21] = 
{
	PredefinedResourceType_t4229135164::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (ResourceReader_t3300492639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable644[13] = 
{
	ResourceReader_t3300492639::get_offset_of_reader_0(),
	ResourceReader_t3300492639::get_offset_of_readerLock_1(),
	ResourceReader_t3300492639::get_offset_of_formatter_2(),
	ResourceReader_t3300492639::get_offset_of_resourceCount_3(),
	ResourceReader_t3300492639::get_offset_of_typeCount_4(),
	ResourceReader_t3300492639::get_offset_of_typeNames_5(),
	ResourceReader_t3300492639::get_offset_of_hashes_6(),
	ResourceReader_t3300492639::get_offset_of_infos_7(),
	ResourceReader_t3300492639::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t3300492639::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t3300492639::get_offset_of_resource_ver_10(),
	ResourceReader_t3300492639::get_offset_of_cache_11(),
	ResourceReader_t3300492639::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (ResourceInfo_t2872965302)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t2872965302_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable645[3] = 
{
	ResourceInfo_t2872965302::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2872965302::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2872965302::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (ResourceCacheItem_t51292791)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t51292791_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable646[2] = 
{
	ResourceCacheItem_t51292791::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t51292791::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (ResourceEnumerator_t2106512554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable647[3] = 
{
	ResourceEnumerator_t2106512554::get_offset_of_reader_0(),
	ResourceEnumerator_t2106512554::get_offset_of_index_1(),
	ResourceEnumerator_t2106512554::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (U3CResourceValueAsStreamU3Ec__AnonStorey2_t3934650216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[1] = 
{
	U3CResourceValueAsStreamU3Ec__AnonStorey2_t3934650216::get_offset_of_ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (ResourceSet_t2827911187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable649[4] = 
{
	ResourceSet_t2827911187::get_offset_of_Reader_0(),
	ResourceSet_t2827911187::get_offset_of_Table_1(),
	ResourceSet_t2827911187::get_offset_of_resources_read_2(),
	ResourceSet_t2827911187::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (ResourceWriter_t1892498018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable650[2] = 
{
	ResourceWriter_t1892498018::get_offset_of_resources_0(),
	ResourceWriter_t1892498018::get_offset_of_stream_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (TypeByNameObject_t584266494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable651[2] = 
{
	TypeByNameObject_t584266494::get_offset_of_TypeName_0(),
	TypeByNameObject_t584266494::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (RuntimeResourceSet_t3081501575), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (SatelliteContractVersionAttribute_t3549813284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable653[1] = 
{
	SatelliteContractVersionAttribute_t3549813284::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (UltimateResourceFallbackLocation_t690808888)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable654[3] = 
{
	UltimateResourceFallbackLocation_t690808888::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (Win32ResourceType_t878705926)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable655[21] = 
{
	Win32ResourceType_t878705926::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (NameOrId_t2364694642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable656[2] = 
{
	NameOrId_t2364694642::get_offset_of_name_0(),
	NameOrId_t2364694642::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (Win32Resource_t884101579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable657[3] = 
{
	Win32Resource_t884101579::get_offset_of_type_0(),
	Win32Resource_t884101579::get_offset_of_name_1(),
	Win32Resource_t884101579::get_offset_of_language_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (Win32EncodedResource_t3551168484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable658[1] = 
{
	Win32EncodedResource_t3551168484::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (Win32IconResource_t829689418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable659[1] = 
{
	Win32IconResource_t829689418::get_offset_of_icon_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (Win32GroupIconResource_t3674785737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable660[1] = 
{
	Win32GroupIconResource_t3674785737::get_offset_of_icons_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (Win32VersionResource_t1367628464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable661[14] = 
{
	Win32VersionResource_t1367628464::get_offset_of_WellKnownProperties_3(),
	Win32VersionResource_t1367628464::get_offset_of_signature_4(),
	Win32VersionResource_t1367628464::get_offset_of_struct_version_5(),
	Win32VersionResource_t1367628464::get_offset_of_file_version_6(),
	Win32VersionResource_t1367628464::get_offset_of_product_version_7(),
	Win32VersionResource_t1367628464::get_offset_of_file_flags_mask_8(),
	Win32VersionResource_t1367628464::get_offset_of_file_flags_9(),
	Win32VersionResource_t1367628464::get_offset_of_file_os_10(),
	Win32VersionResource_t1367628464::get_offset_of_file_type_11(),
	Win32VersionResource_t1367628464::get_offset_of_file_subtype_12(),
	Win32VersionResource_t1367628464::get_offset_of_file_date_13(),
	Win32VersionResource_t1367628464::get_offset_of_file_lang_14(),
	Win32VersionResource_t1367628464::get_offset_of_file_codepage_15(),
	Win32VersionResource_t1367628464::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (Win32ResFileReader_t615293285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable662[1] = 
{
	Win32ResFileReader_t615293285::get_offset_of_res_file_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (ICONDIRENTRY_t3612437535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable663[9] = 
{
	ICONDIRENTRY_t3612437535::get_offset_of_bWidth_0(),
	ICONDIRENTRY_t3612437535::get_offset_of_bHeight_1(),
	ICONDIRENTRY_t3612437535::get_offset_of_bColorCount_2(),
	ICONDIRENTRY_t3612437535::get_offset_of_bReserved_3(),
	ICONDIRENTRY_t3612437535::get_offset_of_wPlanes_4(),
	ICONDIRENTRY_t3612437535::get_offset_of_wBitCount_5(),
	ICONDIRENTRY_t3612437535::get_offset_of_dwBytesInRes_6(),
	ICONDIRENTRY_t3612437535::get_offset_of_dwImageOffset_7(),
	ICONDIRENTRY_t3612437535::get_offset_of_image_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (Win32IconFileReader_t4011199266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable664[1] = 
{
	Win32IconFileReader_t4011199266::get_offset_of_iconFile_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (AccessedThroughPropertyAttribute_t2534421912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable665[1] = 
{
	AccessedThroughPropertyAttribute_t2534421912::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (CallConvCdecl_t3709376166), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (CallConvFastcall_t4144316669), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (CallConvStdcall_t154229111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (CallConvThiscall_t2437542697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (CompilationRelaxations_t3292409279)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable670[2] = 
{
	CompilationRelaxations_t3292409279::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (CompilationRelaxationsAttribute_t1721442111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable671[1] = 
{
	CompilationRelaxationsAttribute_t1721442111::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (CompilerGlobalScopeAttribute_t1669517540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (CompilerMarshalOverride_t1400199096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (CustomConstantAttribute_t1681301359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (DateTimeConstantAttribute_t375130962), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable675[1] = 
{
	DateTimeConstantAttribute_t375130962::get_offset_of_ticks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (DefaultDependencyAttribute_t548613883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[1] = 
{
	DefaultDependencyAttribute_t548613883::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (DependencyAttribute_t1606102833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable677[2] = 
{
	DependencyAttribute_t1606102833::get_offset_of_dependentAssembly_0(),
	DependencyAttribute_t1606102833::get_offset_of_hint_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (DiscardableAttribute_t1017720777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (FixedAddressValueTypeAttribute_t456371173), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (HasCopySemanticsAttribute_t2474409306), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (IDispatchConstantAttribute_t227612748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (IUnknownConstantAttribute_t3255902090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (IsBoxed_t2307617342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (IsByValue_t2518041768), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (IsConst_t1717557917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (IsCopyConstructed_t402909680), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (IsExplicitlyDereferenced_t2011423353), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { sizeof (IsImplicitlyDereferenced_t3098267079), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (IsJitIntrinsic_t2933263994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (IsLong_t3231425864), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (IsPinned_t3756751599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (IsSignUnspecifiedByte_t1046340408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (IsUdtReturn_t511234034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (IsVolatile_t2097058663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (LoadHint_t3743314490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable695[4] = 
{
	LoadHint_t3743314490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (MethodCodeType_t920515152)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable696[5] = 
{
	MethodCodeType_t920515152::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (MethodImplOptions_t4141524024)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable697[8] = 
{
	MethodImplOptions_t4141524024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (NativeCppClassAttribute_t3264448089), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (RuntimeWrappedException_t2169265577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable699[1] = 
{
	RuntimeWrappedException_t2169265577::get_offset_of_wrapped_exception_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
