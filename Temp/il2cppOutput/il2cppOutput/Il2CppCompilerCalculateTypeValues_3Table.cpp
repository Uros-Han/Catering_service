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


// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1997726418;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Globalization.Punycode
struct Punycode_t2881783740;
// System.Collections.SortedList
struct SortedList_t2427694641;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.SortedList/Slot[]
struct SlotU5BU5D_t227397015;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Queue
struct Queue_t3637523393;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.CCEastAsianLunisolarEraHandler
struct CCEastAsianLunisolarEraHandler_t3949638721;
// System.Type
struct Type_t;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2877834729;




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
#ifndef STACKTRACE_T1598645457_H
#define STACKTRACE_T1598645457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackTrace
struct  StackTrace_t1598645457  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t1997726418* ___frames_1;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_2;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457, ___frames_1)); }
	inline StackFrameU5BU5D_t1997726418* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t1997726418** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t1997726418* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((&___frames_1), value);
	}

	inline static int32_t get_offset_of_debug_info_2() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457, ___debug_info_2)); }
	inline bool get_debug_info_2() const { return ___debug_info_2; }
	inline bool* get_address_of_debug_info_2() { return &___debug_info_2; }
	inline void set_debug_info_2(bool value)
	{
		___debug_info_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACE_T1598645457_H
#ifndef CHARUNICODEINFO_T4268073907_H
#define CHARUNICODEINFO_T4268073907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CharUnicodeInfo
struct  CharUnicodeInfo_t4268073907  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARUNICODEINFO_T4268073907_H
#ifndef CODEPAGEDATAITEM_T2285235057_H
#define CODEPAGEDATAITEM_T2285235057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CodePageDataItem
struct  CodePageDataItem_t2285235057  : public RuntimeObject
{
public:
	// System.String System.Globalization.CodePageDataItem::m_bodyName
	String_t* ___m_bodyName_0;
	// System.Int32 System.Globalization.CodePageDataItem::m_codePage
	int32_t ___m_codePage_1;
	// System.Int32 System.Globalization.CodePageDataItem::m_dataIndex
	int32_t ___m_dataIndex_2;
	// System.String System.Globalization.CodePageDataItem::m_description
	String_t* ___m_description_3;
	// System.UInt32 System.Globalization.CodePageDataItem::m_flags
	uint32_t ___m_flags_4;
	// System.String System.Globalization.CodePageDataItem::m_headerName
	String_t* ___m_headerName_5;
	// System.Int32 System.Globalization.CodePageDataItem::m_uiFamilyCodePage
	int32_t ___m_uiFamilyCodePage_6;
	// System.String System.Globalization.CodePageDataItem::m_webName
	String_t* ___m_webName_7;

public:
	inline static int32_t get_offset_of_m_bodyName_0() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_bodyName_0)); }
	inline String_t* get_m_bodyName_0() const { return ___m_bodyName_0; }
	inline String_t** get_address_of_m_bodyName_0() { return &___m_bodyName_0; }
	inline void set_m_bodyName_0(String_t* value)
	{
		___m_bodyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_bodyName_0), value);
	}

	inline static int32_t get_offset_of_m_codePage_1() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_codePage_1)); }
	inline int32_t get_m_codePage_1() const { return ___m_codePage_1; }
	inline int32_t* get_address_of_m_codePage_1() { return &___m_codePage_1; }
	inline void set_m_codePage_1(int32_t value)
	{
		___m_codePage_1 = value;
	}

	inline static int32_t get_offset_of_m_dataIndex_2() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_dataIndex_2)); }
	inline int32_t get_m_dataIndex_2() const { return ___m_dataIndex_2; }
	inline int32_t* get_address_of_m_dataIndex_2() { return &___m_dataIndex_2; }
	inline void set_m_dataIndex_2(int32_t value)
	{
		___m_dataIndex_2 = value;
	}

	inline static int32_t get_offset_of_m_description_3() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_description_3)); }
	inline String_t* get_m_description_3() const { return ___m_description_3; }
	inline String_t** get_address_of_m_description_3() { return &___m_description_3; }
	inline void set_m_description_3(String_t* value)
	{
		___m_description_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_3), value);
	}

	inline static int32_t get_offset_of_m_flags_4() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_flags_4)); }
	inline uint32_t get_m_flags_4() const { return ___m_flags_4; }
	inline uint32_t* get_address_of_m_flags_4() { return &___m_flags_4; }
	inline void set_m_flags_4(uint32_t value)
	{
		___m_flags_4 = value;
	}

	inline static int32_t get_offset_of_m_headerName_5() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_headerName_5)); }
	inline String_t* get_m_headerName_5() const { return ___m_headerName_5; }
	inline String_t** get_address_of_m_headerName_5() { return &___m_headerName_5; }
	inline void set_m_headerName_5(String_t* value)
	{
		___m_headerName_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_headerName_5), value);
	}

	inline static int32_t get_offset_of_m_uiFamilyCodePage_6() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_uiFamilyCodePage_6)); }
	inline int32_t get_m_uiFamilyCodePage_6() const { return ___m_uiFamilyCodePage_6; }
	inline int32_t* get_address_of_m_uiFamilyCodePage_6() { return &___m_uiFamilyCodePage_6; }
	inline void set_m_uiFamilyCodePage_6(int32_t value)
	{
		___m_uiFamilyCodePage_6 = value;
	}

	inline static int32_t get_offset_of_m_webName_7() { return static_cast<int32_t>(offsetof(CodePageDataItem_t2285235057, ___m_webName_7)); }
	inline String_t* get_m_webName_7() const { return ___m_webName_7; }
	inline String_t** get_address_of_m_webName_7() { return &___m_webName_7; }
	inline void set_m_webName_7(String_t* value)
	{
		___m_webName_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_webName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPAGEDATAITEM_T2285235057_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef ENUMERATOR_T2929709194_H
#define ENUMERATOR_T2929709194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/Enumerator
struct  Enumerator_t2929709194  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/Enumerator::stack
	Stack_t2329662280 * ___stack_2;
	// System.Int32 System.Collections.Stack/Enumerator::modCount
	int32_t ___modCount_3;
	// System.Int32 System.Collections.Stack/Enumerator::current
	int32_t ___current_4;

public:
	inline static int32_t get_offset_of_stack_2() { return static_cast<int32_t>(offsetof(Enumerator_t2929709194, ___stack_2)); }
	inline Stack_t2329662280 * get_stack_2() const { return ___stack_2; }
	inline Stack_t2329662280 ** get_address_of_stack_2() { return &___stack_2; }
	inline void set_stack_2(Stack_t2329662280 * value)
	{
		___stack_2 = value;
		Il2CppCodeGenWriteBarrier((&___stack_2), value);
	}

	inline static int32_t get_offset_of_modCount_3() { return static_cast<int32_t>(offsetof(Enumerator_t2929709194, ___modCount_3)); }
	inline int32_t get_modCount_3() const { return ___modCount_3; }
	inline int32_t* get_address_of_modCount_3() { return &___modCount_3; }
	inline void set_modCount_3(int32_t value)
	{
		___modCount_3 = value;
	}

	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(Enumerator_t2929709194, ___current_4)); }
	inline int32_t get_current_4() const { return ___current_4; }
	inline int32_t* get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(int32_t value)
	{
		___current_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2929709194_H
#ifndef CCFIXED_T4160633277_H
#define CCFIXED_T4160633277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCFixed
struct  CCFixed_t4160633277  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCFIXED_T4160633277_H
#ifndef STACK_T2329662280_H
#define STACK_T2329662280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2329662280  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t2843939325* ___contents_1;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_2;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_3;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_4;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_5;

public:
	inline static int32_t get_offset_of_contents_1() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___contents_1)); }
	inline ObjectU5BU5D_t2843939325* get_contents_1() const { return ___contents_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_contents_1() { return &___contents_1; }
	inline void set_contents_1(ObjectU5BU5D_t2843939325* value)
	{
		___contents_1 = value;
		Il2CppCodeGenWriteBarrier((&___contents_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_capacity_4() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___capacity_4)); }
	inline int32_t get_capacity_4() const { return ___capacity_4; }
	inline int32_t* get_address_of_capacity_4() { return &___capacity_4; }
	inline void set_capacity_4(int32_t value)
	{
		___capacity_4 = value;
	}

	inline static int32_t get_offset_of_modCount_5() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___modCount_5)); }
	inline int32_t get_modCount_5() const { return ___modCount_5; }
	inline int32_t* get_address_of_modCount_5() { return &___modCount_5; }
	inline void set_modCount_5(int32_t value)
	{
		___modCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2329662280_H
#ifndef IDNMAPPING_T1700667501_H
#define IDNMAPPING_T1700667501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.IdnMapping
struct  IdnMapping_t1700667501  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.IdnMapping::allow_unassigned
	bool ___allow_unassigned_0;
	// System.Boolean System.Globalization.IdnMapping::use_std3
	bool ___use_std3_1;
	// System.Globalization.Punycode System.Globalization.IdnMapping::puny
	Punycode_t2881783740 * ___puny_2;

public:
	inline static int32_t get_offset_of_allow_unassigned_0() { return static_cast<int32_t>(offsetof(IdnMapping_t1700667501, ___allow_unassigned_0)); }
	inline bool get_allow_unassigned_0() const { return ___allow_unassigned_0; }
	inline bool* get_address_of_allow_unassigned_0() { return &___allow_unassigned_0; }
	inline void set_allow_unassigned_0(bool value)
	{
		___allow_unassigned_0 = value;
	}

	inline static int32_t get_offset_of_use_std3_1() { return static_cast<int32_t>(offsetof(IdnMapping_t1700667501, ___use_std3_1)); }
	inline bool get_use_std3_1() const { return ___use_std3_1; }
	inline bool* get_address_of_use_std3_1() { return &___use_std3_1; }
	inline void set_use_std3_1(bool value)
	{
		___use_std3_1 = value;
	}

	inline static int32_t get_offset_of_puny_2() { return static_cast<int32_t>(offsetof(IdnMapping_t1700667501, ___puny_2)); }
	inline Punycode_t2881783740 * get_puny_2() const { return ___puny_2; }
	inline Punycode_t2881783740 ** get_address_of_puny_2() { return &___puny_2; }
	inline void set_puny_2(Punycode_t2881783740 * value)
	{
		___puny_2 = value;
		Il2CppCodeGenWriteBarrier((&___puny_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDNMAPPING_T1700667501_H
#ifndef INTERNALACTIVATIONCONTEXTHELPER_T1145279873_H
#define INTERNALACTIVATIONCONTEXTHELPER_T1145279873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Deployment.Internal.InternalActivationContextHelper
struct  InternalActivationContextHelper_t1145279873  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALACTIVATIONCONTEXTHELPER_T1145279873_H
#ifndef CCHEBREWCALENDAR_T309704397_H
#define CCHEBREWCALENDAR_T309704397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCHebrewCalendar
struct  CCHebrewCalendar_t309704397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCHEBREWCALENDAR_T309704397_H
#ifndef CCHIJRICALENDAR_T105038385_H
#define CCHIJRICALENDAR_T105038385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCHijriCalendar
struct  CCHijriCalendar_t105038385  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCHIJRICALENDAR_T105038385_H
#ifndef CCEASTASIANLUNISOLARCALENDAR_T1348031750_H
#define CCEASTASIANLUNISOLARCALENDAR_T1348031750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCEastAsianLunisolarCalendar
struct  CCEastAsianLunisolarCalendar_t1348031750  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCEASTASIANLUNISOLARCALENDAR_T1348031750_H
#ifndef CCGREGORIANERAHANDLER_T3677769696_H
#define CCGREGORIANERAHANDLER_T3677769696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCGregorianEraHandler
struct  CCGregorianEraHandler_t3677769696  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Globalization.CCGregorianEraHandler::_Eras
	SortedList_t2427694641 * ____Eras_0;

public:
	inline static int32_t get_offset_of__Eras_0() { return static_cast<int32_t>(offsetof(CCGregorianEraHandler_t3677769696, ____Eras_0)); }
	inline SortedList_t2427694641 * get__Eras_0() const { return ____Eras_0; }
	inline SortedList_t2427694641 ** get_address_of__Eras_0() { return &____Eras_0; }
	inline void set__Eras_0(SortedList_t2427694641 * value)
	{
		____Eras_0 = value;
		Il2CppCodeGenWriteBarrier((&____Eras_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCGREGORIANERAHANDLER_T3677769696_H
#ifndef DEBUGGER_T2143709070_H
#define DEBUGGER_T2143709070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Debugger
struct  Debugger_t2143709070  : public RuntimeObject
{
public:

public:
};

struct Debugger_t2143709070_StaticFields
{
public:
	// System.String System.Diagnostics.Debugger::DefaultCategory
	String_t* ___DefaultCategory_0;

public:
	inline static int32_t get_offset_of_DefaultCategory_0() { return static_cast<int32_t>(offsetof(Debugger_t2143709070_StaticFields, ___DefaultCategory_0)); }
	inline String_t* get_DefaultCategory_0() const { return ___DefaultCategory_0; }
	inline String_t** get_address_of_DefaultCategory_0() { return &___DefaultCategory_0; }
	inline void set_DefaultCategory_0(String_t* value)
	{
		___DefaultCategory_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultCategory_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGER_T2143709070_H
#ifndef CCEASTASIANLUNISOLARERAHANDLER_T3949638721_H
#define CCEASTASIANLUNISOLARERAHANDLER_T3949638721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCEastAsianLunisolarEraHandler
struct  CCEastAsianLunisolarEraHandler_t3949638721  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Globalization.CCEastAsianLunisolarEraHandler::_Eras
	SortedList_t2427694641 * ____Eras_0;

public:
	inline static int32_t get_offset_of__Eras_0() { return static_cast<int32_t>(offsetof(CCEastAsianLunisolarEraHandler_t3949638721, ____Eras_0)); }
	inline SortedList_t2427694641 * get__Eras_0() const { return ____Eras_0; }
	inline SortedList_t2427694641 ** get_address_of__Eras_0() { return &____Eras_0; }
	inline void set__Eras_0(SortedList_t2427694641 * value)
	{
		____Eras_0 = value;
		Il2CppCodeGenWriteBarrier((&____Eras_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCEASTASIANLUNISOLARERAHANDLER_T3949638721_H
#ifndef CCGREGORIANCALENDAR_T1095914347_H
#define CCGREGORIANCALENDAR_T1095914347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCGregorianCalendar
struct  CCGregorianCalendar_t1095914347  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCGREGORIANCALENDAR_T1095914347_H
#ifndef INTERNALAPPLICATIONIDENTITYHELPER_T3717336422_H
#define INTERNALAPPLICATIONIDENTITYHELPER_T3717336422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Deployment.Internal.InternalApplicationIdentityHelper
struct  InternalApplicationIdentityHelper_t3717336422  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALAPPLICATIONIDENTITYHELPER_T3717336422_H
#ifndef LISTVALUES_T1796620884_H
#define LISTVALUES_T1796620884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ListValues
struct  ListValues_t1796620884  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ListValues::host
	SortedList_t2427694641 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(ListValues_t1796620884, ___host_0)); }
	inline SortedList_t2427694641 * get_host_0() const { return ___host_0; }
	inline SortedList_t2427694641 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_t2427694641 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTVALUES_T1796620884_H
#ifndef CALENDAR_T1661121569_H
#define CALENDAR_T1661121569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Calendar
struct  Calendar_t1661121569  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.Calendar::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.Int32 System.Globalization.Calendar::twoDigitYearMax
	int32_t ___twoDigitYearMax_2;
	// System.Int32 System.Globalization.Calendar::M_MaxYearValue
	int32_t ___M_MaxYearValue_3;
	// System.String[] System.Globalization.Calendar::M_AbbrEraNames
	StringU5BU5D_t1281789340* ___M_AbbrEraNames_4;
	// System.String[] System.Globalization.Calendar::M_EraNames
	StringU5BU5D_t1281789340* ___M_EraNames_5;
	// System.Int32 System.Globalization.Calendar::m_currentEraValue
	int32_t ___m_currentEraValue_6;

public:
	inline static int32_t get_offset_of_m_isReadOnly_1() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___m_isReadOnly_1)); }
	inline bool get_m_isReadOnly_1() const { return ___m_isReadOnly_1; }
	inline bool* get_address_of_m_isReadOnly_1() { return &___m_isReadOnly_1; }
	inline void set_m_isReadOnly_1(bool value)
	{
		___m_isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_twoDigitYearMax_2() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___twoDigitYearMax_2)); }
	inline int32_t get_twoDigitYearMax_2() const { return ___twoDigitYearMax_2; }
	inline int32_t* get_address_of_twoDigitYearMax_2() { return &___twoDigitYearMax_2; }
	inline void set_twoDigitYearMax_2(int32_t value)
	{
		___twoDigitYearMax_2 = value;
	}

	inline static int32_t get_offset_of_M_MaxYearValue_3() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___M_MaxYearValue_3)); }
	inline int32_t get_M_MaxYearValue_3() const { return ___M_MaxYearValue_3; }
	inline int32_t* get_address_of_M_MaxYearValue_3() { return &___M_MaxYearValue_3; }
	inline void set_M_MaxYearValue_3(int32_t value)
	{
		___M_MaxYearValue_3 = value;
	}

	inline static int32_t get_offset_of_M_AbbrEraNames_4() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___M_AbbrEraNames_4)); }
	inline StringU5BU5D_t1281789340* get_M_AbbrEraNames_4() const { return ___M_AbbrEraNames_4; }
	inline StringU5BU5D_t1281789340** get_address_of_M_AbbrEraNames_4() { return &___M_AbbrEraNames_4; }
	inline void set_M_AbbrEraNames_4(StringU5BU5D_t1281789340* value)
	{
		___M_AbbrEraNames_4 = value;
		Il2CppCodeGenWriteBarrier((&___M_AbbrEraNames_4), value);
	}

	inline static int32_t get_offset_of_M_EraNames_5() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___M_EraNames_5)); }
	inline StringU5BU5D_t1281789340* get_M_EraNames_5() const { return ___M_EraNames_5; }
	inline StringU5BU5D_t1281789340** get_address_of_M_EraNames_5() { return &___M_EraNames_5; }
	inline void set_M_EraNames_5(StringU5BU5D_t1281789340* value)
	{
		___M_EraNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___M_EraNames_5), value);
	}

	inline static int32_t get_offset_of_m_currentEraValue_6() { return static_cast<int32_t>(offsetof(Calendar_t1661121569, ___m_currentEraValue_6)); }
	inline int32_t get_m_currentEraValue_6() const { return ___m_currentEraValue_6; }
	inline int32_t* get_address_of_m_currentEraValue_6() { return &___m_currentEraValue_6; }
	inline void set_m_currentEraValue_6(int32_t value)
	{
		___m_currentEraValue_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDAR_T1661121569_H
#ifndef HASHVALUES_T618387445_H
#define HASHVALUES_T618387445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashValues
struct  HashValues_t618387445  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashValues::host
	Hashtable_t1853889766 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(HashValues_t618387445, ___host_0)); }
	inline Hashtable_t1853889766 * get_host_0() const { return ___host_0; }
	inline Hashtable_t1853889766 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Hashtable_t1853889766 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHVALUES_T618387445_H
#ifndef HASHKEYS_T1568156503_H
#define HASHKEYS_T1568156503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashKeys
struct  HashKeys_t1568156503  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashKeys::host
	Hashtable_t1853889766 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(HashKeys_t1568156503, ___host_0)); }
	inline Hashtable_t1853889766 * get_host_0() const { return ___host_0; }
	inline Hashtable_t1853889766 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Hashtable_t1853889766 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHKEYS_T1568156503_H
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
#ifndef KEYMARKER_T2496412495_H
#define KEYMARKER_T2496412495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/KeyMarker
struct  KeyMarker_t2496412495  : public RuntimeObject
{
public:

public:
};

struct KeyMarker_t2496412495_StaticFields
{
public:
	// System.Collections.Hashtable/KeyMarker System.Collections.Hashtable/KeyMarker::Removed
	KeyMarker_t2496412495 * ___Removed_0;

public:
	inline static int32_t get_offset_of_Removed_0() { return static_cast<int32_t>(offsetof(KeyMarker_t2496412495_StaticFields, ___Removed_0)); }
	inline KeyMarker_t2496412495 * get_Removed_0() const { return ___Removed_0; }
	inline KeyMarker_t2496412495 ** get_address_of_Removed_0() { return &___Removed_0; }
	inline void set_Removed_0(KeyMarker_t2496412495 * value)
	{
		___Removed_0 = value;
		Il2CppCodeGenWriteBarrier((&___Removed_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYMARKER_T2496412495_H
#ifndef STACKFRAME_T3217253059_H
#define STACKFRAME_T3217253059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackFrame
struct  StackFrame_t3217253059  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t * ___methodBase_3;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_4;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_5;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_6;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_7;

public:
	inline static int32_t get_offset_of_ilOffset_1() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___ilOffset_1)); }
	inline int32_t get_ilOffset_1() const { return ___ilOffset_1; }
	inline int32_t* get_address_of_ilOffset_1() { return &___ilOffset_1; }
	inline void set_ilOffset_1(int32_t value)
	{
		___ilOffset_1 = value;
	}

	inline static int32_t get_offset_of_nativeOffset_2() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___nativeOffset_2)); }
	inline int32_t get_nativeOffset_2() const { return ___nativeOffset_2; }
	inline int32_t* get_address_of_nativeOffset_2() { return &___nativeOffset_2; }
	inline void set_nativeOffset_2(int32_t value)
	{
		___nativeOffset_2 = value;
	}

	inline static int32_t get_offset_of_methodBase_3() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___methodBase_3)); }
	inline MethodBase_t * get_methodBase_3() const { return ___methodBase_3; }
	inline MethodBase_t ** get_address_of_methodBase_3() { return &___methodBase_3; }
	inline void set_methodBase_3(MethodBase_t * value)
	{
		___methodBase_3 = value;
		Il2CppCodeGenWriteBarrier((&___methodBase_3), value);
	}

	inline static int32_t get_offset_of_fileName_4() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___fileName_4)); }
	inline String_t* get_fileName_4() const { return ___fileName_4; }
	inline String_t** get_address_of_fileName_4() { return &___fileName_4; }
	inline void set_fileName_4(String_t* value)
	{
		___fileName_4 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_4), value);
	}

	inline static int32_t get_offset_of_lineNumber_5() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___lineNumber_5)); }
	inline int32_t get_lineNumber_5() const { return ___lineNumber_5; }
	inline int32_t* get_address_of_lineNumber_5() { return &___lineNumber_5; }
	inline void set_lineNumber_5(int32_t value)
	{
		___lineNumber_5 = value;
	}

	inline static int32_t get_offset_of_columnNumber_6() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___columnNumber_6)); }
	inline int32_t get_columnNumber_6() const { return ___columnNumber_6; }
	inline int32_t* get_address_of_columnNumber_6() { return &___columnNumber_6; }
	inline void set_columnNumber_6(int32_t value)
	{
		___columnNumber_6 = value;
	}

	inline static int32_t get_offset_of_internalMethodName_7() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___internalMethodName_7)); }
	inline String_t* get_internalMethodName_7() const { return ___internalMethodName_7; }
	inline String_t** get_address_of_internalMethodName_7() { return &___internalMethodName_7; }
	inline void set_internalMethodName_7(String_t* value)
	{
		___internalMethodName_7 = value;
		Il2CppCodeGenWriteBarrier((&___internalMethodName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKFRAME_T3217253059_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef QUEUE_T3637523393_H
#define QUEUE_T3637523393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t3637523393  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____tail_3)); }
	inline int32_t get__tail_3() const { return ____tail_3; }
	inline int32_t* get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(int32_t value)
	{
		____tail_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T3637523393_H
#ifndef LISTKEYS_T1506865728_H
#define LISTKEYS_T1506865728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ListKeys
struct  ListKeys_t1506865728  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ListKeys::host
	SortedList_t2427694641 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(ListKeys_t1506865728, ___host_0)); }
	inline SortedList_t2427694641 * get_host_0() const { return ___host_0; }
	inline SortedList_t2427694641 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_t2427694641 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTKEYS_T1506865728_H
#ifndef BOOTSTRING_T3302426383_H
#define BOOTSTRING_T3302426383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Bootstring
struct  Bootstring_t3302426383  : public RuntimeObject
{
public:
	// System.Char System.Globalization.Bootstring::delimiter
	Il2CppChar ___delimiter_0;
	// System.Int32 System.Globalization.Bootstring::base_num
	int32_t ___base_num_1;
	// System.Int32 System.Globalization.Bootstring::tmin
	int32_t ___tmin_2;
	// System.Int32 System.Globalization.Bootstring::tmax
	int32_t ___tmax_3;
	// System.Int32 System.Globalization.Bootstring::skew
	int32_t ___skew_4;
	// System.Int32 System.Globalization.Bootstring::damp
	int32_t ___damp_5;
	// System.Int32 System.Globalization.Bootstring::initial_bias
	int32_t ___initial_bias_6;
	// System.Int32 System.Globalization.Bootstring::initial_n
	int32_t ___initial_n_7;

public:
	inline static int32_t get_offset_of_delimiter_0() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___delimiter_0)); }
	inline Il2CppChar get_delimiter_0() const { return ___delimiter_0; }
	inline Il2CppChar* get_address_of_delimiter_0() { return &___delimiter_0; }
	inline void set_delimiter_0(Il2CppChar value)
	{
		___delimiter_0 = value;
	}

	inline static int32_t get_offset_of_base_num_1() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___base_num_1)); }
	inline int32_t get_base_num_1() const { return ___base_num_1; }
	inline int32_t* get_address_of_base_num_1() { return &___base_num_1; }
	inline void set_base_num_1(int32_t value)
	{
		___base_num_1 = value;
	}

	inline static int32_t get_offset_of_tmin_2() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___tmin_2)); }
	inline int32_t get_tmin_2() const { return ___tmin_2; }
	inline int32_t* get_address_of_tmin_2() { return &___tmin_2; }
	inline void set_tmin_2(int32_t value)
	{
		___tmin_2 = value;
	}

	inline static int32_t get_offset_of_tmax_3() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___tmax_3)); }
	inline int32_t get_tmax_3() const { return ___tmax_3; }
	inline int32_t* get_address_of_tmax_3() { return &___tmax_3; }
	inline void set_tmax_3(int32_t value)
	{
		___tmax_3 = value;
	}

	inline static int32_t get_offset_of_skew_4() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___skew_4)); }
	inline int32_t get_skew_4() const { return ___skew_4; }
	inline int32_t* get_address_of_skew_4() { return &___skew_4; }
	inline void set_skew_4(int32_t value)
	{
		___skew_4 = value;
	}

	inline static int32_t get_offset_of_damp_5() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___damp_5)); }
	inline int32_t get_damp_5() const { return ___damp_5; }
	inline int32_t* get_address_of_damp_5() { return &___damp_5; }
	inline void set_damp_5(int32_t value)
	{
		___damp_5 = value;
	}

	inline static int32_t get_offset_of_initial_bias_6() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___initial_bias_6)); }
	inline int32_t get_initial_bias_6() const { return ___initial_bias_6; }
	inline int32_t* get_address_of_initial_bias_6() { return &___initial_bias_6; }
	inline void set_initial_bias_6(int32_t value)
	{
		___initial_bias_6 = value;
	}

	inline static int32_t get_offset_of_initial_n_7() { return static_cast<int32_t>(offsetof(Bootstring_t3302426383, ___initial_n_7)); }
	inline int32_t get_initial_n_7() const { return ___initial_n_7; }
	inline int32_t* get_address_of_initial_n_7() { return &___initial_n_7; }
	inline void set_initial_n_7(int32_t value)
	{
		___initial_n_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOTSTRING_T3302426383_H
#ifndef CCMATH_T1752835476_H
#define CCMATH_T1752835476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCMath
struct  CCMath_t1752835476  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCMATH_T1752835476_H
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
#ifndef SORTEDLIST_T2427694641_H
#define SORTEDLIST_T2427694641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t2427694641  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.SortedList::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.SortedList::modificationCount
	int32_t ___modificationCount_2;
	// System.Collections.SortedList/Slot[] System.Collections.SortedList::table
	SlotU5BU5D_t227397015* ___table_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Int32 System.Collections.SortedList::defaultCapacity
	int32_t ___defaultCapacity_5;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___table_3)); }
	inline SlotU5BU5D_t227397015* get_table_3() const { return ___table_3; }
	inline SlotU5BU5D_t227397015** get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(SlotU5BU5D_t227397015* value)
	{
		___table_3 = value;
		Il2CppCodeGenWriteBarrier((&___table_3), value);
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_defaultCapacity_5() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___defaultCapacity_5)); }
	inline int32_t get_defaultCapacity_5() const { return ___defaultCapacity_5; }
	inline int32_t* get_address_of_defaultCapacity_5() { return &___defaultCapacity_5; }
	inline void set_defaultCapacity_5(int32_t value)
	{
		___defaultCapacity_5 = value;
	}
};

struct SortedList_t2427694641_StaticFields
{
public:
	// System.Int32 System.Collections.SortedList::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;

public:
	inline static int32_t get_offset_of_INITIAL_SIZE_0() { return static_cast<int32_t>(offsetof(SortedList_t2427694641_StaticFields, ___INITIAL_SIZE_0)); }
	inline int32_t get_INITIAL_SIZE_0() const { return ___INITIAL_SIZE_0; }
	inline int32_t* get_address_of_INITIAL_SIZE_0() { return &___INITIAL_SIZE_0; }
	inline void set_INITIAL_SIZE_0(int32_t value)
	{
		___INITIAL_SIZE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T2427694641_H
#ifndef READONLYCOLLECTIONBASE_T1836743899_H
#define READONLYCOLLECTIONBASE_T1836743899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1836743899  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1836743899, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1836743899_H
#ifndef QUEUEENUMERATOR_T4140714244_H
#define QUEUEENUMERATOR_T4140714244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t4140714244  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::queue
	Queue_t3637523393 * ___queue_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t4140714244, ___queue_0)); }
	inline Queue_t3637523393 * get_queue_0() const { return ___queue_0; }
	inline Queue_t3637523393 ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_t3637523393 * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((&___queue_0), value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t4140714244, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t4140714244, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T4140714244_H
#ifndef CCJULIANCALENDAR_T280102879_H
#define CCJULIANCALENDAR_T280102879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCJulianCalendar
struct  CCJulianCalendar_t280102879  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCJULIANCALENDAR_T280102879_H
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef PUNYCODE_T2881783740_H
#define PUNYCODE_T2881783740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Punycode
struct  Punycode_t2881783740  : public Bootstring_t3302426383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUNYCODE_T2881783740_H
#ifndef EASTASIANLUNISOLARCALENDAR_T4157518746_H
#define EASTASIANLUNISOLARCALENDAR_T4157518746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.EastAsianLunisolarCalendar
struct  EastAsianLunisolarCalendar_t4157518746  : public Calendar_t1661121569
{
public:
	// System.Globalization.CCEastAsianLunisolarEraHandler System.Globalization.EastAsianLunisolarCalendar::M_EraHandler
	CCEastAsianLunisolarEraHandler_t3949638721 * ___M_EraHandler_7;

public:
	inline static int32_t get_offset_of_M_EraHandler_7() { return static_cast<int32_t>(offsetof(EastAsianLunisolarCalendar_t4157518746, ___M_EraHandler_7)); }
	inline CCEastAsianLunisolarEraHandler_t3949638721 * get_M_EraHandler_7() const { return ___M_EraHandler_7; }
	inline CCEastAsianLunisolarEraHandler_t3949638721 ** get_address_of_M_EraHandler_7() { return &___M_EraHandler_7; }
	inline void set_M_EraHandler_7(CCEastAsianLunisolarEraHandler_t3949638721 * value)
	{
		___M_EraHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___M_EraHandler_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASTASIANLUNISOLARCALENDAR_T4157518746_H
#ifndef ERA_T901412335_H
#define ERA_T901412335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCEastAsianLunisolarEraHandler/Era
struct  Era_t901412335 
{
public:
	// System.Int32 System.Globalization.CCEastAsianLunisolarEraHandler/Era::_nr
	int32_t ____nr_0;
	// System.Int32 System.Globalization.CCEastAsianLunisolarEraHandler/Era::_start
	int32_t ____start_1;
	// System.Int32 System.Globalization.CCEastAsianLunisolarEraHandler/Era::_gregorianYearStart
	int32_t ____gregorianYearStart_2;
	// System.Int32 System.Globalization.CCEastAsianLunisolarEraHandler/Era::_end
	int32_t ____end_3;
	// System.Int32 System.Globalization.CCEastAsianLunisolarEraHandler/Era::_maxYear
	int32_t ____maxYear_4;

public:
	inline static int32_t get_offset_of__nr_0() { return static_cast<int32_t>(offsetof(Era_t901412335, ____nr_0)); }
	inline int32_t get__nr_0() const { return ____nr_0; }
	inline int32_t* get_address_of__nr_0() { return &____nr_0; }
	inline void set__nr_0(int32_t value)
	{
		____nr_0 = value;
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(Era_t901412335, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__gregorianYearStart_2() { return static_cast<int32_t>(offsetof(Era_t901412335, ____gregorianYearStart_2)); }
	inline int32_t get__gregorianYearStart_2() const { return ____gregorianYearStart_2; }
	inline int32_t* get_address_of__gregorianYearStart_2() { return &____gregorianYearStart_2; }
	inline void set__gregorianYearStart_2(int32_t value)
	{
		____gregorianYearStart_2 = value;
	}

	inline static int32_t get_offset_of__end_3() { return static_cast<int32_t>(offsetof(Era_t901412335, ____end_3)); }
	inline int32_t get__end_3() const { return ____end_3; }
	inline int32_t* get_address_of__end_3() { return &____end_3; }
	inline void set__end_3(int32_t value)
	{
		____end_3 = value;
	}

	inline static int32_t get_offset_of__maxYear_4() { return static_cast<int32_t>(offsetof(Era_t901412335, ____maxYear_4)); }
	inline int32_t get__maxYear_4() const { return ____maxYear_4; }
	inline int32_t* get_address_of__maxYear_4() { return &____maxYear_4; }
	inline void set__maxYear_4(int32_t value)
	{
		____maxYear_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERA_T901412335_H
#ifndef ERA_T434718289_H
#define ERA_T434718289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCGregorianEraHandler/Era
struct  Era_t434718289 
{
public:
	// System.Int32 System.Globalization.CCGregorianEraHandler/Era::_nr
	int32_t ____nr_0;
	// System.Int32 System.Globalization.CCGregorianEraHandler/Era::_start
	int32_t ____start_1;
	// System.Int32 System.Globalization.CCGregorianEraHandler/Era::_gregorianYearStart
	int32_t ____gregorianYearStart_2;
	// System.Int32 System.Globalization.CCGregorianEraHandler/Era::_end
	int32_t ____end_3;
	// System.Int32 System.Globalization.CCGregorianEraHandler/Era::_maxYear
	int32_t ____maxYear_4;

public:
	inline static int32_t get_offset_of__nr_0() { return static_cast<int32_t>(offsetof(Era_t434718289, ____nr_0)); }
	inline int32_t get__nr_0() const { return ____nr_0; }
	inline int32_t* get_address_of__nr_0() { return &____nr_0; }
	inline void set__nr_0(int32_t value)
	{
		____nr_0 = value;
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(Era_t434718289, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__gregorianYearStart_2() { return static_cast<int32_t>(offsetof(Era_t434718289, ____gregorianYearStart_2)); }
	inline int32_t get__gregorianYearStart_2() const { return ____gregorianYearStart_2; }
	inline int32_t* get_address_of__gregorianYearStart_2() { return &____gregorianYearStart_2; }
	inline void set__gregorianYearStart_2(int32_t value)
	{
		____gregorianYearStart_2 = value;
	}

	inline static int32_t get_offset_of__end_3() { return static_cast<int32_t>(offsetof(Era_t434718289, ____end_3)); }
	inline int32_t get__end_3() const { return ____end_3; }
	inline int32_t* get_address_of__end_3() { return &____end_3; }
	inline void set__end_3(int32_t value)
	{
		____end_3 = value;
	}

	inline static int32_t get_offset_of__maxYear_4() { return static_cast<int32_t>(offsetof(Era_t434718289, ____maxYear_4)); }
	inline int32_t get__maxYear_4() const { return ____maxYear_4; }
	inline int32_t* get_address_of__maxYear_4() { return &____maxYear_4; }
	inline void set__maxYear_4(int32_t value)
	{
		____maxYear_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERA_T434718289_H
#ifndef DEBUGGERVISUALIZERATTRIBUTE_T2240437510_H
#define DEBUGGERVISUALIZERATTRIBUTE_T2240437510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerVisualizerAttribute
struct  DebuggerVisualizerAttribute_t2240437510  : public Attribute_t861562559
{
public:
	// System.String System.Diagnostics.DebuggerVisualizerAttribute::description
	String_t* ___description_0;
	// System.String System.Diagnostics.DebuggerVisualizerAttribute::visualizerSourceName
	String_t* ___visualizerSourceName_1;
	// System.String System.Diagnostics.DebuggerVisualizerAttribute::visualizerName
	String_t* ___visualizerName_2;
	// System.String System.Diagnostics.DebuggerVisualizerAttribute::targetTypeName
	String_t* ___targetTypeName_3;
	// System.Type System.Diagnostics.DebuggerVisualizerAttribute::target
	Type_t * ___target_4;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(DebuggerVisualizerAttribute_t2240437510, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((&___description_0), value);
	}

	inline static int32_t get_offset_of_visualizerSourceName_1() { return static_cast<int32_t>(offsetof(DebuggerVisualizerAttribute_t2240437510, ___visualizerSourceName_1)); }
	inline String_t* get_visualizerSourceName_1() const { return ___visualizerSourceName_1; }
	inline String_t** get_address_of_visualizerSourceName_1() { return &___visualizerSourceName_1; }
	inline void set_visualizerSourceName_1(String_t* value)
	{
		___visualizerSourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___visualizerSourceName_1), value);
	}

	inline static int32_t get_offset_of_visualizerName_2() { return static_cast<int32_t>(offsetof(DebuggerVisualizerAttribute_t2240437510, ___visualizerName_2)); }
	inline String_t* get_visualizerName_2() const { return ___visualizerName_2; }
	inline String_t** get_address_of_visualizerName_2() { return &___visualizerName_2; }
	inline void set_visualizerName_2(String_t* value)
	{
		___visualizerName_2 = value;
		Il2CppCodeGenWriteBarrier((&___visualizerName_2), value);
	}

	inline static int32_t get_offset_of_targetTypeName_3() { return static_cast<int32_t>(offsetof(DebuggerVisualizerAttribute_t2240437510, ___targetTypeName_3)); }
	inline String_t* get_targetTypeName_3() const { return ___targetTypeName_3; }
	inline String_t** get_address_of_targetTypeName_3() { return &___targetTypeName_3; }
	inline void set_targetTypeName_3(String_t* value)
	{
		___targetTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeName_3), value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(DebuggerVisualizerAttribute_t2240437510, ___target_4)); }
	inline Type_t * get_target_4() const { return ___target_4; }
	inline Type_t ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Type_t * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERVISUALIZERATTRIBUTE_T2240437510_H
#ifndef SYNCQUEUE_T1435689100_H
#define SYNCQUEUE_T1435689100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/SyncQueue
struct  SyncQueue_t1435689100  : public Queue_t3637523393
{
public:
	// System.Collections.Queue System.Collections.Queue/SyncQueue::queue
	Queue_t3637523393 * ___queue_6;

public:
	inline static int32_t get_offset_of_queue_6() { return static_cast<int32_t>(offsetof(SyncQueue_t1435689100, ___queue_6)); }
	inline Queue_t3637523393 * get_queue_6() const { return ___queue_6; }
	inline Queue_t3637523393 ** get_address_of_queue_6() { return &___queue_6; }
	inline void set_queue_6(Queue_t3637523393 * value)
	{
		___queue_6 = value;
		Il2CppCodeGenWriteBarrier((&___queue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCQUEUE_T1435689100_H
#ifndef SLOT_T384495010_H
#define SLOT_T384495010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Slot
struct  Slot_t384495010 
{
public:
	// System.Object System.Collections.SortedList/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.SortedList/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t384495010, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t384495010, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.SortedList/Slot
struct Slot_t384495010_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.SortedList/Slot
struct Slot_t384495010_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T384495010_H
#ifndef SUPPRESSMESSAGEATTRIBUTE_T3139292579_H
#define SUPPRESSMESSAGEATTRIBUTE_T3139292579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
struct  SuppressMessageAttribute_t3139292579  : public Attribute_t861562559
{
public:
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::category
	String_t* ___category_0;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::checkId
	String_t* ___checkId_1;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::justification
	String_t* ___justification_2;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::messageId
	String_t* ___messageId_3;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::scope
	String_t* ___scope_4;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::target
	String_t* ___target_5;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3139292579, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_checkId_1() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3139292579, ___checkId_1)); }
	inline String_t* get_checkId_1() const { return ___checkId_1; }
	inline String_t** get_address_of_checkId_1() { return &___checkId_1; }
	inline void set_checkId_1(String_t* value)
	{
		___checkId_1 = value;
		Il2CppCodeGenWriteBarrier((&___checkId_1), value);
	}

	inline static int32_t get_offset_of_justification_2() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3139292579, ___justification_2)); }
	inline String_t* get_justification_2() const { return ___justification_2; }
	inline String_t** get_address_of_justification_2() { return &___justification_2; }
	inline void set_justification_2(String_t* value)
	{
		___justification_2 = value;
		Il2CppCodeGenWriteBarrier((&___justification_2), value);
	}

	inline static int32_t get_offset_of_messageId_3() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3139292579, ___messageId_3)); }
	inline String_t* get_messageId_3() const { return ___messageId_3; }
	inline String_t** get_address_of_messageId_3() { return &___messageId_3; }
	inline void set_messageId_3(String_t* value)
	{
		___messageId_3 = value;
		Il2CppCodeGenWriteBarrier((&___messageId_3), value);
	}

	inline static int32_t get_offset_of_scope_4() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3139292579, ___scope_4)); }
	inline String_t* get_scope_4() const { return ___scope_4; }
	inline String_t** get_address_of_scope_4() { return &___scope_4; }
	inline void set_scope_4(String_t* value)
	{
		___scope_4 = value;
		Il2CppCodeGenWriteBarrier((&___scope_4), value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3139292579, ___target_5)); }
	inline String_t* get_target_5() const { return ___target_5; }
	inline String_t** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(String_t* value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((&___target_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSMESSAGEATTRIBUTE_T3139292579_H
#ifndef SYNCHEDSORTEDLIST_T4014217660_H
#define SYNCHEDSORTEDLIST_T4014217660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SynchedSortedList
struct  SynchedSortedList_t4014217660  : public SortedList_t2427694641
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SynchedSortedList::host
	SortedList_t2427694641 * ___host_6;

public:
	inline static int32_t get_offset_of_host_6() { return static_cast<int32_t>(offsetof(SynchedSortedList_t4014217660, ___host_6)); }
	inline SortedList_t2427694641 * get_host_6() const { return ___host_6; }
	inline SortedList_t2427694641 ** get_address_of_host_6() { return &___host_6; }
	inline void set_host_6(SortedList_t2427694641 * value)
	{
		___host_6 = value;
		Il2CppCodeGenWriteBarrier((&___host_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHEDSORTEDLIST_T4014217660_H
#ifndef SYNCSTACK_T1114012165_H
#define SYNCSTACK_T1114012165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/SyncStack
struct  SyncStack_t1114012165  : public Stack_t2329662280
{
public:
	// System.Collections.Stack System.Collections.Stack/SyncStack::stack
	Stack_t2329662280 * ___stack_6;

public:
	inline static int32_t get_offset_of_stack_6() { return static_cast<int32_t>(offsetof(SyncStack_t1114012165, ___stack_6)); }
	inline Stack_t2329662280 * get_stack_6() const { return ___stack_6; }
	inline Stack_t2329662280 ** get_address_of_stack_6() { return &___stack_6; }
	inline void set_stack_6(Stack_t2329662280 * value)
	{
		___stack_6 = value;
		Il2CppCodeGenWriteBarrier((&___stack_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCSTACK_T1114012165_H
#ifndef SYMBOLTOKEN_T1296711471_H
#define SYMBOLTOKEN_T1296711471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SymbolStore.SymbolToken
struct  SymbolToken_t1296711471 
{
public:
	// System.Int32 System.Diagnostics.SymbolStore.SymbolToken::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(SymbolToken_t1296711471, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLTOKEN_T1296711471_H
#ifndef SYNCHASHTABLE_T3569774773_H
#define SYNCHASHTABLE_T3569774773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t3569774773  : public Hashtable_t1853889766
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::host
	Hashtable_t1853889766 * ___host_14;

public:
	inline static int32_t get_offset_of_host_14() { return static_cast<int32_t>(offsetof(SyncHashtable_t3569774773, ___host_14)); }
	inline Hashtable_t1853889766 * get_host_14() const { return ___host_14; }
	inline Hashtable_t1853889766 ** get_address_of_host_14() { return &___host_14; }
	inline void set_host_14(Hashtable_t1853889766 * value)
	{
		___host_14 = value;
		Il2CppCodeGenWriteBarrier((&___host_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T3569774773_H
#ifndef DEBUGGERTYPEPROXYATTRIBUTE_T1385406673_H
#define DEBUGGERTYPEPROXYATTRIBUTE_T1385406673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerTypeProxyAttribute
struct  DebuggerTypeProxyAttribute_t1385406673  : public Attribute_t861562559
{
public:
	// System.String System.Diagnostics.DebuggerTypeProxyAttribute::proxy_type_name
	String_t* ___proxy_type_name_0;
	// System.String System.Diagnostics.DebuggerTypeProxyAttribute::target_type_name
	String_t* ___target_type_name_1;
	// System.Type System.Diagnostics.DebuggerTypeProxyAttribute::target_type
	Type_t * ___target_type_2;

public:
	inline static int32_t get_offset_of_proxy_type_name_0() { return static_cast<int32_t>(offsetof(DebuggerTypeProxyAttribute_t1385406673, ___proxy_type_name_0)); }
	inline String_t* get_proxy_type_name_0() const { return ___proxy_type_name_0; }
	inline String_t** get_address_of_proxy_type_name_0() { return &___proxy_type_name_0; }
	inline void set_proxy_type_name_0(String_t* value)
	{
		___proxy_type_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_type_name_0), value);
	}

	inline static int32_t get_offset_of_target_type_name_1() { return static_cast<int32_t>(offsetof(DebuggerTypeProxyAttribute_t1385406673, ___target_type_name_1)); }
	inline String_t* get_target_type_name_1() const { return ___target_type_name_1; }
	inline String_t** get_address_of_target_type_name_1() { return &___target_type_name_1; }
	inline void set_target_type_name_1(String_t* value)
	{
		___target_type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_name_1), value);
	}

	inline static int32_t get_offset_of_target_type_2() { return static_cast<int32_t>(offsetof(DebuggerTypeProxyAttribute_t1385406673, ___target_type_2)); }
	inline Type_t * get_target_type_2() const { return ___target_type_2; }
	inline Type_t ** get_address_of_target_type_2() { return &___target_type_2; }
	inline void set_target_type_2(Type_t * value)
	{
		___target_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERTYPEPROXYATTRIBUTE_T1385406673_H
#ifndef DEBUGGERSTEPPERBOUNDARYATTRIBUTE_T3506931884_H
#define DEBUGGERSTEPPERBOUNDARYATTRIBUTE_T3506931884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerStepperBoundaryAttribute
struct  DebuggerStepperBoundaryAttribute_t3506931884  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERSTEPPERBOUNDARYATTRIBUTE_T3506931884_H
#ifndef DEBUGGERSTEPTHROUGHATTRIBUTE_T875708394_H
#define DEBUGGERSTEPTHROUGHATTRIBUTE_T875708394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerStepThroughAttribute
struct  DebuggerStepThroughAttribute_t875708394  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERSTEPTHROUGHATTRIBUTE_T875708394_H
#ifndef DEBUGGERNONUSERCODEATTRIBUTE_T1012762574_H
#define DEBUGGERNONUSERCODEATTRIBUTE_T1012762574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerNonUserCodeAttribute
struct  DebuggerNonUserCodeAttribute_t1012762574  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERNONUSERCODEATTRIBUTE_T1012762574_H
#ifndef SLOT_T3975888750_H
#define SLOT_T3975888750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/Slot
struct  Slot_t3975888750 
{
public:
	// System.Object System.Collections.Hashtable/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t3975888750, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t3975888750, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/Slot
struct Slot_t3975888750_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.Hashtable/Slot
struct Slot_t3975888750_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T3975888750_H
#ifndef DEBUGGERDISPLAYATTRIBUTE_T2957424906_H
#define DEBUGGERDISPLAYATTRIBUTE_T2957424906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerDisplayAttribute
struct  DebuggerDisplayAttribute_t2957424906  : public Attribute_t861562559
{
public:
	// System.String System.Diagnostics.DebuggerDisplayAttribute::value
	String_t* ___value_0;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::type
	String_t* ___type_1;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::name
	String_t* ___name_2;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::target_type_name
	String_t* ___target_type_name_3;
	// System.Type System.Diagnostics.DebuggerDisplayAttribute::target_type
	Type_t * ___target_type_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t2957424906, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t2957424906, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t2957424906, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_target_type_name_3() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t2957424906, ___target_type_name_3)); }
	inline String_t* get_target_type_name_3() const { return ___target_type_name_3; }
	inline String_t** get_address_of_target_type_name_3() { return &___target_type_name_3; }
	inline void set_target_type_name_3(String_t* value)
	{
		___target_type_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_name_3), value);
	}

	inline static int32_t get_offset_of_target_type_4() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t2957424906, ___target_type_4)); }
	inline Type_t * get_target_type_4() const { return ___target_type_4; }
	inline Type_t ** get_address_of_target_type_4() { return &___target_type_4; }
	inline void set_target_type_4(Type_t * value)
	{
		___target_type_4 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERDISPLAYATTRIBUTE_T2957424906_H
#ifndef COMPAREOPTIONS_T4130014775_H
#define COMPAREOPTIONS_T4130014775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t4130014775 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareOptions_t4130014775, ___value___1)); }
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
#endif // COMPAREOPTIONS_T4130014775_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef CULTURETYPES_T3483192109_H
#define CULTURETYPES_T3483192109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureTypes
struct  CultureTypes_t3483192109 
{
public:
	// System.Int32 System.Globalization.CultureTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CultureTypes_t3483192109, ___value___1)); }
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
#endif // CULTURETYPES_T3483192109_H
#ifndef DATETIMEFORMATFLAGS_T1884407083_H
#define DATETIMEFORMATFLAGS_T1884407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1884407083 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1884407083, ___value___1)); }
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
#endif // DATETIMEFORMATFLAGS_T1884407083_H
#ifndef DATETIMESTYLES_T840957420_H
#define DATETIMESTYLES_T840957420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t840957420 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeStyles_t840957420, ___value___1)); }
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
#endif // DATETIMESTYLES_T840957420_H
#ifndef DIGITSHAPES_T1975396291_H
#define DIGITSHAPES_T1975396291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DigitShapes
struct  DigitShapes_t1975396291 
{
public:
	// System.Int32 System.Globalization.DigitShapes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DigitShapes_t1975396291, ___value___1)); }
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
#endif // DIGITSHAPES_T1975396291_H
#ifndef GREGORIANCALENDARTYPES_T3815403233_H
#define GREGORIANCALENDARTYPES_T3815403233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendarTypes
struct  GregorianCalendarTypes_t3815403233 
{
public:
	// System.Int32 System.Globalization.GregorianCalendarTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GregorianCalendarTypes_t3815403233, ___value___1)); }
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
#endif // GREGORIANCALENDARTYPES_T3815403233_H
#ifndef ENUMERATORMODE_T3719608883_H
#define ENUMERATORMODE_T3719608883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/EnumeratorMode
struct  EnumeratorMode_t3719608883 
{
public:
	// System.Int32 System.Collections.SortedList/EnumeratorMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnumeratorMode_t3719608883, ___value___1)); }
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
#endif // ENUMERATORMODE_T3719608883_H
#ifndef ENUMERATORMODE_T1442366820_H
#define ENUMERATORMODE_T1442366820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/EnumeratorMode
struct  EnumeratorMode_t1442366820 
{
public:
	// System.Int32 System.Collections.Hashtable/EnumeratorMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnumeratorMode_t1442366820, ___value___1)); }
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
#endif // ENUMERATORMODE_T1442366820_H
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef MONTH_T2430253282_H
#define MONTH_T2430253282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCHijriCalendar/Month
struct  Month_t2430253282 
{
public:
	// System.Int32 System.Globalization.CCHijriCalendar/Month::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Month_t2430253282, ___value___1)); }
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
#endif // MONTH_T2430253282_H
#ifndef MONTH_T2174046904_H
#define MONTH_T2174046904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCHebrewCalendar/Month
struct  Month_t2174046904 
{
public:
	// System.Int32 System.Globalization.CCHebrewCalendar/Month::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Month_t2174046904, ___value___1)); }
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
#endif // MONTH_T2174046904_H
#ifndef DEBUGGERBROWSABLESTATE_T747501856_H
#define DEBUGGERBROWSABLESTATE_T747501856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerBrowsableState
struct  DebuggerBrowsableState_t747501856 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t747501856, ___value___1)); }
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
#endif // DEBUGGERBROWSABLESTATE_T747501856_H
#ifndef MONTH_T2827529699_H
#define MONTH_T2827529699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCGregorianCalendar/Month
struct  Month_t2827529699 
{
public:
	// System.Int32 System.Globalization.CCGregorianCalendar/Month::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Month_t2827529699, ___value___1)); }
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
#endif // MONTH_T2827529699_H
#ifndef DEBUGGINGMODES_T3662555298_H
#define DEBUGGINGMODES_T3662555298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct  DebuggingModes_t3662555298 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggingModes_t3662555298, ___value___1)); }
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
#endif // DEBUGGINGMODES_T3662555298_H
#ifndef MONTH_T1903313424_H
#define MONTH_T1903313424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCJulianCalendar/Month
struct  Month_t1903313424 
{
public:
	// System.Int32 System.Globalization.CCJulianCalendar/Month::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Month_t1903313424, ___value___1)); }
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
#endif // MONTH_T1903313424_H
#ifndef SYMLANGUAGEVENDOR_T1063089164_H
#define SYMLANGUAGEVENDOR_T1063089164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SymbolStore.SymLanguageVendor
struct  SymLanguageVendor_t1063089164  : public RuntimeObject
{
public:

public:
};

struct SymLanguageVendor_t1063089164_StaticFields
{
public:
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageVendor::Microsoft
	Guid_t  ___Microsoft_0;

public:
	inline static int32_t get_offset_of_Microsoft_0() { return static_cast<int32_t>(offsetof(SymLanguageVendor_t1063089164_StaticFields, ___Microsoft_0)); }
	inline Guid_t  get_Microsoft_0() const { return ___Microsoft_0; }
	inline Guid_t * get_address_of_Microsoft_0() { return &___Microsoft_0; }
	inline void set_Microsoft_0(Guid_t  value)
	{
		___Microsoft_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMLANGUAGEVENDOR_T1063089164_H
#ifndef CALENDARWEEKRULE_T1431246310_H
#define CALENDARWEEKRULE_T1431246310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CalendarWeekRule
struct  CalendarWeekRule_t1431246310 
{
public:
	// System.Int32 System.Globalization.CalendarWeekRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarWeekRule_t1431246310, ___value___1)); }
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
#endif // CALENDARWEEKRULE_T1431246310_H
#ifndef CALENDARALGORITHMTYPE_T3421237338_H
#define CALENDARALGORITHMTYPE_T3421237338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CalendarAlgorithmType
struct  CalendarAlgorithmType_t3421237338 
{
public:
	// System.Int32 System.Globalization.CalendarAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarAlgorithmType_t3421237338, ___value___1)); }
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
#endif // CALENDARALGORITHMTYPE_T3421237338_H
#ifndef SYMLANGUAGETYPE_T1848853089_H
#define SYMLANGUAGETYPE_T1848853089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SymbolStore.SymLanguageType
struct  SymLanguageType_t1848853089  : public RuntimeObject
{
public:

public:
};

struct SymLanguageType_t1848853089_StaticFields
{
public:
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::Basic
	Guid_t  ___Basic_0;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::C
	Guid_t  ___C_1;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::Cobol
	Guid_t  ___Cobol_2;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::CPlusPlus
	Guid_t  ___CPlusPlus_3;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::CSharp
	Guid_t  ___CSharp_4;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::ILAssembly
	Guid_t  ___ILAssembly_5;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::Java
	Guid_t  ___Java_6;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::JScript
	Guid_t  ___JScript_7;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::MCPlusPlus
	Guid_t  ___MCPlusPlus_8;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::Pascal
	Guid_t  ___Pascal_9;
	// System.Guid System.Diagnostics.SymbolStore.SymLanguageType::SMC
	Guid_t  ___SMC_10;

public:
	inline static int32_t get_offset_of_Basic_0() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___Basic_0)); }
	inline Guid_t  get_Basic_0() const { return ___Basic_0; }
	inline Guid_t * get_address_of_Basic_0() { return &___Basic_0; }
	inline void set_Basic_0(Guid_t  value)
	{
		___Basic_0 = value;
	}

	inline static int32_t get_offset_of_C_1() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___C_1)); }
	inline Guid_t  get_C_1() const { return ___C_1; }
	inline Guid_t * get_address_of_C_1() { return &___C_1; }
	inline void set_C_1(Guid_t  value)
	{
		___C_1 = value;
	}

	inline static int32_t get_offset_of_Cobol_2() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___Cobol_2)); }
	inline Guid_t  get_Cobol_2() const { return ___Cobol_2; }
	inline Guid_t * get_address_of_Cobol_2() { return &___Cobol_2; }
	inline void set_Cobol_2(Guid_t  value)
	{
		___Cobol_2 = value;
	}

	inline static int32_t get_offset_of_CPlusPlus_3() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___CPlusPlus_3)); }
	inline Guid_t  get_CPlusPlus_3() const { return ___CPlusPlus_3; }
	inline Guid_t * get_address_of_CPlusPlus_3() { return &___CPlusPlus_3; }
	inline void set_CPlusPlus_3(Guid_t  value)
	{
		___CPlusPlus_3 = value;
	}

	inline static int32_t get_offset_of_CSharp_4() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___CSharp_4)); }
	inline Guid_t  get_CSharp_4() const { return ___CSharp_4; }
	inline Guid_t * get_address_of_CSharp_4() { return &___CSharp_4; }
	inline void set_CSharp_4(Guid_t  value)
	{
		___CSharp_4 = value;
	}

	inline static int32_t get_offset_of_ILAssembly_5() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___ILAssembly_5)); }
	inline Guid_t  get_ILAssembly_5() const { return ___ILAssembly_5; }
	inline Guid_t * get_address_of_ILAssembly_5() { return &___ILAssembly_5; }
	inline void set_ILAssembly_5(Guid_t  value)
	{
		___ILAssembly_5 = value;
	}

	inline static int32_t get_offset_of_Java_6() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___Java_6)); }
	inline Guid_t  get_Java_6() const { return ___Java_6; }
	inline Guid_t * get_address_of_Java_6() { return &___Java_6; }
	inline void set_Java_6(Guid_t  value)
	{
		___Java_6 = value;
	}

	inline static int32_t get_offset_of_JScript_7() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___JScript_7)); }
	inline Guid_t  get_JScript_7() const { return ___JScript_7; }
	inline Guid_t * get_address_of_JScript_7() { return &___JScript_7; }
	inline void set_JScript_7(Guid_t  value)
	{
		___JScript_7 = value;
	}

	inline static int32_t get_offset_of_MCPlusPlus_8() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___MCPlusPlus_8)); }
	inline Guid_t  get_MCPlusPlus_8() const { return ___MCPlusPlus_8; }
	inline Guid_t * get_address_of_MCPlusPlus_8() { return &___MCPlusPlus_8; }
	inline void set_MCPlusPlus_8(Guid_t  value)
	{
		___MCPlusPlus_8 = value;
	}

	inline static int32_t get_offset_of_Pascal_9() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___Pascal_9)); }
	inline Guid_t  get_Pascal_9() const { return ___Pascal_9; }
	inline Guid_t * get_address_of_Pascal_9() { return &___Pascal_9; }
	inline void set_Pascal_9(Guid_t  value)
	{
		___Pascal_9 = value;
	}

	inline static int32_t get_offset_of_SMC_10() { return static_cast<int32_t>(offsetof(SymLanguageType_t1848853089_StaticFields, ___SMC_10)); }
	inline Guid_t  get_SMC_10() const { return ___SMC_10; }
	inline Guid_t * get_address_of_SMC_10() { return &___SMC_10; }
	inline void set_SMC_10(Guid_t  value)
	{
		___SMC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMLANGUAGETYPE_T1848853089_H
#ifndef SYMDOCUMENTTYPE_T3324260299_H
#define SYMDOCUMENTTYPE_T3324260299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SymbolStore.SymDocumentType
struct  SymDocumentType_t3324260299  : public RuntimeObject
{
public:

public:
};

struct SymDocumentType_t3324260299_StaticFields
{
public:
	// System.Guid System.Diagnostics.SymbolStore.SymDocumentType::Text
	Guid_t  ___Text_0;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(SymDocumentType_t3324260299_StaticFields, ___Text_0)); }
	inline Guid_t  get_Text_0() const { return ___Text_0; }
	inline Guid_t * get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(Guid_t  value)
	{
		___Text_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMDOCUMENTTYPE_T3324260299_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifndef SYMADDRESSKIND_T4097064995_H
#define SYMADDRESSKIND_T4097064995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SymbolStore.SymAddressKind
struct  SymAddressKind_t4097064995 
{
public:
	// System.Int32 System.Diagnostics.SymbolStore.SymAddressKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SymAddressKind_t4097064995, ___value___1)); }
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
#endif // SYMADDRESSKIND_T4097064995_H
#ifndef DEBUGGERBROWSABLEATTRIBUTE_T1026244177_H
#define DEBUGGERBROWSABLEATTRIBUTE_T1026244177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerBrowsableAttribute
struct  DebuggerBrowsableAttribute_t1026244177  : public Attribute_t861562559
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t1026244177, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERBROWSABLEATTRIBUTE_T1026244177_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef ENUMERATOR_T661358686_H
#define ENUMERATOR_T661358686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/Enumerator
struct  Enumerator_t661358686  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/Enumerator::host
	Hashtable_t1853889766 * ___host_0;
	// System.Int32 System.Collections.Hashtable/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.Hashtable/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.Hashtable/Enumerator::size
	int32_t ___size_3;
	// System.Collections.Hashtable/EnumeratorMode System.Collections.Hashtable/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.Hashtable/Enumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/Enumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t661358686, ___host_0)); }
	inline Hashtable_t1853889766 * get_host_0() const { return ___host_0; }
	inline Hashtable_t1853889766 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(Hashtable_t1853889766 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}

	inline static int32_t get_offset_of_stamp_1() { return static_cast<int32_t>(offsetof(Enumerator_t661358686, ___stamp_1)); }
	inline int32_t get_stamp_1() const { return ___stamp_1; }
	inline int32_t* get_address_of_stamp_1() { return &___stamp_1; }
	inline void set_stamp_1(int32_t value)
	{
		___stamp_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(Enumerator_t661358686, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Enumerator_t661358686, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(Enumerator_t661358686, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(Enumerator_t661358686, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(Enumerator_t661358686, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

struct Enumerator_t661358686_StaticFields
{
public:
	// System.String System.Collections.Hashtable/Enumerator::xstr
	String_t* ___xstr_7;

public:
	inline static int32_t get_offset_of_xstr_7() { return static_cast<int32_t>(offsetof(Enumerator_t661358686_StaticFields, ___xstr_7)); }
	inline String_t* get_xstr_7() const { return ___xstr_7; }
	inline String_t** get_address_of_xstr_7() { return &___xstr_7; }
	inline void set_xstr_7(String_t* value)
	{
		___xstr_7 = value;
		Il2CppCodeGenWriteBarrier((&___xstr_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T661358686_H
#ifndef ENUMERATOR_T3548462377_H
#define ENUMERATOR_T3548462377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Enumerator
struct  Enumerator_t3548462377  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/Enumerator::host
	SortedList_t2427694641 * ___host_0;
	// System.Int32 System.Collections.SortedList/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.SortedList/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.SortedList/Enumerator::size
	int32_t ___size_3;
	// System.Collections.SortedList/EnumeratorMode System.Collections.SortedList/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.SortedList/Enumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.SortedList/Enumerator::currentValue
	RuntimeObject * ___currentValue_6;
	// System.Boolean System.Collections.SortedList/Enumerator::invalid
	bool ___invalid_7;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___host_0)); }
	inline SortedList_t2427694641 * get_host_0() const { return ___host_0; }
	inline SortedList_t2427694641 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_t2427694641 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}

	inline static int32_t get_offset_of_stamp_1() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___stamp_1)); }
	inline int32_t get_stamp_1() const { return ___stamp_1; }
	inline int32_t* get_address_of_stamp_1() { return &___stamp_1; }
	inline void set_stamp_1(int32_t value)
	{
		___stamp_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}

	inline static int32_t get_offset_of_invalid_7() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377, ___invalid_7)); }
	inline bool get_invalid_7() const { return ___invalid_7; }
	inline bool* get_address_of_invalid_7() { return &___invalid_7; }
	inline void set_invalid_7(bool value)
	{
		___invalid_7 = value;
	}
};

struct Enumerator_t3548462377_StaticFields
{
public:
	// System.String System.Collections.SortedList/Enumerator::xstr
	String_t* ___xstr_8;

public:
	inline static int32_t get_offset_of_xstr_8() { return static_cast<int32_t>(offsetof(Enumerator_t3548462377_StaticFields, ___xstr_8)); }
	inline String_t* get_xstr_8() const { return ___xstr_8; }
	inline String_t** get_address_of_xstr_8() { return &___xstr_8; }
	inline void set_xstr_8(String_t* value)
	{
		___xstr_8 = value;
		Il2CppCodeGenWriteBarrier((&___xstr_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3548462377_H
#ifndef ASSEMBLYHASH_T704722890_H
#define ASSEMBLYHASH_T704722890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHash
struct  AssemblyHash_t704722890 
{
public:
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Configuration.Assemblies.AssemblyHash::_algorithm
	int32_t ____algorithm_0;
	// System.Byte[] System.Configuration.Assemblies.AssemblyHash::_value
	ByteU5BU5D_t4116647657* ____value_1;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(AssemblyHash_t704722890, ____algorithm_0)); }
	inline int32_t get__algorithm_0() const { return ____algorithm_0; }
	inline int32_t* get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(int32_t value)
	{
		____algorithm_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(AssemblyHash_t704722890, ____value_1)); }
	inline ByteU5BU5D_t4116647657* get__value_1() const { return ____value_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(ByteU5BU5D_t4116647657* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

struct AssemblyHash_t704722890_StaticFields
{
public:
	// System.Configuration.Assemblies.AssemblyHash System.Configuration.Assemblies.AssemblyHash::Empty
	AssemblyHash_t704722890  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(AssemblyHash_t704722890_StaticFields, ___Empty_2)); }
	inline AssemblyHash_t704722890  get_Empty_2() const { return ___Empty_2; }
	inline AssemblyHash_t704722890 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(AssemblyHash_t704722890  value)
	{
		___Empty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Configuration.Assemblies.AssemblyHash
struct AssemblyHash_t704722890_marshaled_pinvoke
{
	int32_t ____algorithm_0;
	uint8_t* ____value_1;
};
// Native definition for COM marshalling of System.Configuration.Assemblies.AssemblyHash
struct AssemblyHash_t704722890_marshaled_com
{
	int32_t ____algorithm_0;
	uint8_t* ____value_1;
};
#endif // ASSEMBLYHASH_T704722890_H
#ifndef DATETIMEFORMATINFO_T2405853701_H
#define DATETIMEFORMATINFO_T2405853701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2405853701  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_10;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_11;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_13;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_14;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_15;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_16;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_17;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_18;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_19;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_20;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_21;
	// System.String System.Globalization.DateTimeFormatInfo::_RFC1123Pattern
	String_t* ____RFC1123Pattern_22;
	// System.String System.Globalization.DateTimeFormatInfo::_SortableDateTimePattern
	String_t* ____SortableDateTimePattern_23;
	// System.String System.Globalization.DateTimeFormatInfo::_UniversalSortableDateTimePattern
	String_t* ____UniversalSortableDateTimePattern_24;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_25;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t1661121569 * ___calendar_26;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1281789340* ___abbreviatedDayNames_28;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1281789340* ___dayNames_29;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1281789340* ___monthNames_30;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1281789340* ___abbreviatedMonthNames_31;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1281789340* ___allShortDatePatterns_32;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1281789340* ___allLongDatePatterns_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1281789340* ___allShortTimePatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1281789340* ___allLongTimePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthDayPatterns
	StringU5BU5D_t1281789340* ___monthDayPatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::yearMonthPatterns
	StringU5BU5D_t1281789340* ___yearMonthPatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::shortDayNames
	StringU5BU5D_t1281789340* ___shortDayNames_38;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_39;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_40;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_41;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_43;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_44;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_45;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1281789340* ___m_eraNames_46;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEraNames_47;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEnglishEraNames_48;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1281789340* ___m_dateWords_49;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t385246372* ___optionalCalendars_50;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1281789340* ___m_superShortDayNames_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1281789340* ___genitiveMonthNames_52;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1281789340* ___m_genitiveAbbreviatedMonthNames_53;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1281789340* ___leapYearMonthNames_54;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_55;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_56;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::all_date_time_patterns
	StringU5BU5D_t1281789340* ___all_date_time_patterns_57;

public:
	inline static int32_t get_offset_of_m_isReadOnly_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isReadOnly_10)); }
	inline bool get_m_isReadOnly_10() const { return ___m_isReadOnly_10; }
	inline bool* get_address_of_m_isReadOnly_10() { return &___m_isReadOnly_10; }
	inline void set_m_isReadOnly_10(bool value)
	{
		___m_isReadOnly_10 = value;
	}

	inline static int32_t get_offset_of_amDesignator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___amDesignator_11)); }
	inline String_t* get_amDesignator_11() const { return ___amDesignator_11; }
	inline String_t** get_address_of_amDesignator_11() { return &___amDesignator_11; }
	inline void set_amDesignator_11(String_t* value)
	{
		___amDesignator_11 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_11), value);
	}

	inline static int32_t get_offset_of_pmDesignator_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___pmDesignator_12)); }
	inline String_t* get_pmDesignator_12() const { return ___pmDesignator_12; }
	inline String_t** get_address_of_pmDesignator_12() { return &___pmDesignator_12; }
	inline void set_pmDesignator_12(String_t* value)
	{
		___pmDesignator_12 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_12), value);
	}

	inline static int32_t get_offset_of_dateSeparator_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateSeparator_13)); }
	inline String_t* get_dateSeparator_13() const { return ___dateSeparator_13; }
	inline String_t** get_address_of_dateSeparator_13() { return &___dateSeparator_13; }
	inline void set_dateSeparator_13(String_t* value)
	{
		___dateSeparator_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_13), value);
	}

	inline static int32_t get_offset_of_timeSeparator_14() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___timeSeparator_14)); }
	inline String_t* get_timeSeparator_14() const { return ___timeSeparator_14; }
	inline String_t** get_address_of_timeSeparator_14() { return &___timeSeparator_14; }
	inline void set_timeSeparator_14(String_t* value)
	{
		___timeSeparator_14 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_14), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_15() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDatePattern_15)); }
	inline String_t* get_shortDatePattern_15() const { return ___shortDatePattern_15; }
	inline String_t** get_address_of_shortDatePattern_15() { return &___shortDatePattern_15; }
	inline void set_shortDatePattern_15(String_t* value)
	{
		___shortDatePattern_15 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_15), value);
	}

	inline static int32_t get_offset_of_longDatePattern_16() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longDatePattern_16)); }
	inline String_t* get_longDatePattern_16() const { return ___longDatePattern_16; }
	inline String_t** get_address_of_longDatePattern_16() { return &___longDatePattern_16; }
	inline void set_longDatePattern_16(String_t* value)
	{
		___longDatePattern_16 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_16), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortTimePattern_17)); }
	inline String_t* get_shortTimePattern_17() const { return ___shortTimePattern_17; }
	inline String_t** get_address_of_shortTimePattern_17() { return &___shortTimePattern_17; }
	inline void set_shortTimePattern_17(String_t* value)
	{
		___shortTimePattern_17 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_17), value);
	}

	inline static int32_t get_offset_of_longTimePattern_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longTimePattern_18)); }
	inline String_t* get_longTimePattern_18() const { return ___longTimePattern_18; }
	inline String_t** get_address_of_longTimePattern_18() { return &___longTimePattern_18; }
	inline void set_longTimePattern_18(String_t* value)
	{
		___longTimePattern_18 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_18), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPattern_19)); }
	inline String_t* get_monthDayPattern_19() const { return ___monthDayPattern_19; }
	inline String_t** get_address_of_monthDayPattern_19() { return &___monthDayPattern_19; }
	inline void set_monthDayPattern_19(String_t* value)
	{
		___monthDayPattern_19 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_19), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPattern_20)); }
	inline String_t* get_yearMonthPattern_20() const { return ___yearMonthPattern_20; }
	inline String_t** get_address_of_yearMonthPattern_20() { return &___yearMonthPattern_20; }
	inline void set_yearMonthPattern_20(String_t* value)
	{
		___yearMonthPattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_20), value);
	}

	inline static int32_t get_offset_of_fullDateTimePattern_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___fullDateTimePattern_21)); }
	inline String_t* get_fullDateTimePattern_21() const { return ___fullDateTimePattern_21; }
	inline String_t** get_address_of_fullDateTimePattern_21() { return &___fullDateTimePattern_21; }
	inline void set_fullDateTimePattern_21(String_t* value)
	{
		___fullDateTimePattern_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_21), value);
	}

	inline static int32_t get_offset_of__RFC1123Pattern_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____RFC1123Pattern_22)); }
	inline String_t* get__RFC1123Pattern_22() const { return ____RFC1123Pattern_22; }
	inline String_t** get_address_of__RFC1123Pattern_22() { return &____RFC1123Pattern_22; }
	inline void set__RFC1123Pattern_22(String_t* value)
	{
		____RFC1123Pattern_22 = value;
		Il2CppCodeGenWriteBarrier((&____RFC1123Pattern_22), value);
	}

	inline static int32_t get_offset_of__SortableDateTimePattern_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____SortableDateTimePattern_23)); }
	inline String_t* get__SortableDateTimePattern_23() const { return ____SortableDateTimePattern_23; }
	inline String_t** get_address_of__SortableDateTimePattern_23() { return &____SortableDateTimePattern_23; }
	inline void set__SortableDateTimePattern_23(String_t* value)
	{
		____SortableDateTimePattern_23 = value;
		Il2CppCodeGenWriteBarrier((&____SortableDateTimePattern_23), value);
	}

	inline static int32_t get_offset_of__UniversalSortableDateTimePattern_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____UniversalSortableDateTimePattern_24)); }
	inline String_t* get__UniversalSortableDateTimePattern_24() const { return ____UniversalSortableDateTimePattern_24; }
	inline String_t** get_address_of__UniversalSortableDateTimePattern_24() { return &____UniversalSortableDateTimePattern_24; }
	inline void set__UniversalSortableDateTimePattern_24(String_t* value)
	{
		____UniversalSortableDateTimePattern_24 = value;
		Il2CppCodeGenWriteBarrier((&____UniversalSortableDateTimePattern_24), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___firstDayOfWeek_25)); }
	inline int32_t get_firstDayOfWeek_25() const { return ___firstDayOfWeek_25; }
	inline int32_t* get_address_of_firstDayOfWeek_25() { return &___firstDayOfWeek_25; }
	inline void set_firstDayOfWeek_25(int32_t value)
	{
		___firstDayOfWeek_25 = value;
	}

	inline static int32_t get_offset_of_calendar_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendar_26)); }
	inline Calendar_t1661121569 * get_calendar_26() const { return ___calendar_26; }
	inline Calendar_t1661121569 ** get_address_of_calendar_26() { return &___calendar_26; }
	inline void set_calendar_26(Calendar_t1661121569 * value)
	{
		___calendar_26 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_26), value);
	}

	inline static int32_t get_offset_of_calendarWeekRule_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendarWeekRule_27)); }
	inline int32_t get_calendarWeekRule_27() const { return ___calendarWeekRule_27; }
	inline int32_t* get_address_of_calendarWeekRule_27() { return &___calendarWeekRule_27; }
	inline void set_calendarWeekRule_27(int32_t value)
	{
		___calendarWeekRule_27 = value;
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedDayNames_28)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedDayNames_28() const { return ___abbreviatedDayNames_28; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedDayNames_28() { return &___abbreviatedDayNames_28; }
	inline void set_abbreviatedDayNames_28(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedDayNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_28), value);
	}

	inline static int32_t get_offset_of_dayNames_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dayNames_29)); }
	inline StringU5BU5D_t1281789340* get_dayNames_29() const { return ___dayNames_29; }
	inline StringU5BU5D_t1281789340** get_address_of_dayNames_29() { return &___dayNames_29; }
	inline void set_dayNames_29(StringU5BU5D_t1281789340* value)
	{
		___dayNames_29 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_29), value);
	}

	inline static int32_t get_offset_of_monthNames_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthNames_30)); }
	inline StringU5BU5D_t1281789340* get_monthNames_30() const { return ___monthNames_30; }
	inline StringU5BU5D_t1281789340** get_address_of_monthNames_30() { return &___monthNames_30; }
	inline void set_monthNames_30(StringU5BU5D_t1281789340* value)
	{
		___monthNames_30 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_30), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedMonthNames_31)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedMonthNames_31() const { return ___abbreviatedMonthNames_31; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedMonthNames_31() { return &___abbreviatedMonthNames_31; }
	inline void set_abbreviatedMonthNames_31(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedMonthNames_31 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_31), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortDatePatterns_32)); }
	inline StringU5BU5D_t1281789340* get_allShortDatePatterns_32() const { return ___allShortDatePatterns_32; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortDatePatterns_32() { return &___allShortDatePatterns_32; }
	inline void set_allShortDatePatterns_32(StringU5BU5D_t1281789340* value)
	{
		___allShortDatePatterns_32 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_32), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongDatePatterns_33)); }
	inline StringU5BU5D_t1281789340* get_allLongDatePatterns_33() const { return ___allLongDatePatterns_33; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongDatePatterns_33() { return &___allLongDatePatterns_33; }
	inline void set_allLongDatePatterns_33(StringU5BU5D_t1281789340* value)
	{
		___allLongDatePatterns_33 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_33), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortTimePatterns_34)); }
	inline StringU5BU5D_t1281789340* get_allShortTimePatterns_34() const { return ___allShortTimePatterns_34; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortTimePatterns_34() { return &___allShortTimePatterns_34; }
	inline void set_allShortTimePatterns_34(StringU5BU5D_t1281789340* value)
	{
		___allShortTimePatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_34), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongTimePatterns_35)); }
	inline StringU5BU5D_t1281789340* get_allLongTimePatterns_35() const { return ___allLongTimePatterns_35; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongTimePatterns_35() { return &___allLongTimePatterns_35; }
	inline void set_allLongTimePatterns_35(StringU5BU5D_t1281789340* value)
	{
		___allLongTimePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_35), value);
	}

	inline static int32_t get_offset_of_monthDayPatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPatterns_36)); }
	inline StringU5BU5D_t1281789340* get_monthDayPatterns_36() const { return ___monthDayPatterns_36; }
	inline StringU5BU5D_t1281789340** get_address_of_monthDayPatterns_36() { return &___monthDayPatterns_36; }
	inline void set_monthDayPatterns_36(StringU5BU5D_t1281789340* value)
	{
		___monthDayPatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPatterns_36), value);
	}

	inline static int32_t get_offset_of_yearMonthPatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPatterns_37)); }
	inline StringU5BU5D_t1281789340* get_yearMonthPatterns_37() const { return ___yearMonthPatterns_37; }
	inline StringU5BU5D_t1281789340** get_address_of_yearMonthPatterns_37() { return &___yearMonthPatterns_37; }
	inline void set_yearMonthPatterns_37(StringU5BU5D_t1281789340* value)
	{
		___yearMonthPatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPatterns_37), value);
	}

	inline static int32_t get_offset_of_shortDayNames_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDayNames_38)); }
	inline StringU5BU5D_t1281789340* get_shortDayNames_38() const { return ___shortDayNames_38; }
	inline StringU5BU5D_t1281789340** get_address_of_shortDayNames_38() { return &___shortDayNames_38; }
	inline void set_shortDayNames_38(StringU5BU5D_t1281789340* value)
	{
		___shortDayNames_38 = value;
		Il2CppCodeGenWriteBarrier((&___shortDayNames_38), value);
	}

	inline static int32_t get_offset_of_nDataItem_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___nDataItem_39)); }
	inline int32_t get_nDataItem_39() const { return ___nDataItem_39; }
	inline int32_t* get_address_of_nDataItem_39() { return &___nDataItem_39; }
	inline void set_nDataItem_39(int32_t value)
	{
		___nDataItem_39 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_useUserOverride_40)); }
	inline bool get_m_useUserOverride_40() const { return ___m_useUserOverride_40; }
	inline bool* get_address_of_m_useUserOverride_40() { return &___m_useUserOverride_40; }
	inline void set_m_useUserOverride_40(bool value)
	{
		___m_useUserOverride_40 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isDefaultCalendar_41)); }
	inline bool get_m_isDefaultCalendar_41() const { return ___m_isDefaultCalendar_41; }
	inline bool* get_address_of_m_isDefaultCalendar_41() { return &___m_isDefaultCalendar_41; }
	inline void set_m_isDefaultCalendar_41(bool value)
	{
		___m_isDefaultCalendar_41 = value;
	}

	inline static int32_t get_offset_of_CultureID_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___CultureID_42)); }
	inline int32_t get_CultureID_42() const { return ___CultureID_42; }
	inline int32_t* get_address_of_CultureID_42() { return &___CultureID_42; }
	inline void set_CultureID_42(int32_t value)
	{
		___CultureID_42 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_43() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___bUseCalendarInfo_43)); }
	inline bool get_bUseCalendarInfo_43() const { return ___bUseCalendarInfo_43; }
	inline bool* get_address_of_bUseCalendarInfo_43() { return &___bUseCalendarInfo_43; }
	inline void set_bUseCalendarInfo_43(bool value)
	{
		___bUseCalendarInfo_43 = value;
	}

	inline static int32_t get_offset_of_generalShortTimePattern_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalShortTimePattern_44)); }
	inline String_t* get_generalShortTimePattern_44() const { return ___generalShortTimePattern_44; }
	inline String_t** get_address_of_generalShortTimePattern_44() { return &___generalShortTimePattern_44; }
	inline void set_generalShortTimePattern_44(String_t* value)
	{
		___generalShortTimePattern_44 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_44), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalLongTimePattern_45)); }
	inline String_t* get_generalLongTimePattern_45() const { return ___generalLongTimePattern_45; }
	inline String_t** get_address_of_generalLongTimePattern_45() { return &___generalLongTimePattern_45; }
	inline void set_generalLongTimePattern_45(String_t* value)
	{
		___generalLongTimePattern_45 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_45), value);
	}

	inline static int32_t get_offset_of_m_eraNames_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_eraNames_46)); }
	inline StringU5BU5D_t1281789340* get_m_eraNames_46() const { return ___m_eraNames_46; }
	inline StringU5BU5D_t1281789340** get_address_of_m_eraNames_46() { return &___m_eraNames_46; }
	inline void set_m_eraNames_46(StringU5BU5D_t1281789340* value)
	{
		___m_eraNames_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_46), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEraNames_47)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEraNames_47() const { return ___m_abbrevEraNames_47; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEraNames_47() { return &___m_abbrevEraNames_47; }
	inline void set_m_abbrevEraNames_47(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEraNames_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_47), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEnglishEraNames_48)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEnglishEraNames_48() const { return ___m_abbrevEnglishEraNames_48; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEnglishEraNames_48() { return &___m_abbrevEnglishEraNames_48; }
	inline void set_m_abbrevEnglishEraNames_48(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEnglishEraNames_48 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_48), value);
	}

	inline static int32_t get_offset_of_m_dateWords_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dateWords_49)); }
	inline StringU5BU5D_t1281789340* get_m_dateWords_49() const { return ___m_dateWords_49; }
	inline StringU5BU5D_t1281789340** get_address_of_m_dateWords_49() { return &___m_dateWords_49; }
	inline void set_m_dateWords_49(StringU5BU5D_t1281789340* value)
	{
		___m_dateWords_49 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_49), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___optionalCalendars_50)); }
	inline Int32U5BU5D_t385246372* get_optionalCalendars_50() const { return ___optionalCalendars_50; }
	inline Int32U5BU5D_t385246372** get_address_of_optionalCalendars_50() { return &___optionalCalendars_50; }
	inline void set_optionalCalendars_50(Int32U5BU5D_t385246372* value)
	{
		___optionalCalendars_50 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_50), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_superShortDayNames_51)); }
	inline StringU5BU5D_t1281789340* get_m_superShortDayNames_51() const { return ___m_superShortDayNames_51; }
	inline StringU5BU5D_t1281789340** get_address_of_m_superShortDayNames_51() { return &___m_superShortDayNames_51; }
	inline void set_m_superShortDayNames_51(StringU5BU5D_t1281789340* value)
	{
		___m_superShortDayNames_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_51), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___genitiveMonthNames_52)); }
	inline StringU5BU5D_t1281789340* get_genitiveMonthNames_52() const { return ___genitiveMonthNames_52; }
	inline StringU5BU5D_t1281789340** get_address_of_genitiveMonthNames_52() { return &___genitiveMonthNames_52; }
	inline void set_genitiveMonthNames_52(StringU5BU5D_t1281789340* value)
	{
		___genitiveMonthNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_52), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_genitiveAbbreviatedMonthNames_53)); }
	inline StringU5BU5D_t1281789340* get_m_genitiveAbbreviatedMonthNames_53() const { return ___m_genitiveAbbreviatedMonthNames_53; }
	inline StringU5BU5D_t1281789340** get_address_of_m_genitiveAbbreviatedMonthNames_53() { return &___m_genitiveAbbreviatedMonthNames_53; }
	inline void set_m_genitiveAbbreviatedMonthNames_53(StringU5BU5D_t1281789340* value)
	{
		___m_genitiveAbbreviatedMonthNames_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_53), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___leapYearMonthNames_54)); }
	inline StringU5BU5D_t1281789340* get_leapYearMonthNames_54() const { return ___leapYearMonthNames_54; }
	inline StringU5BU5D_t1281789340** get_address_of_leapYearMonthNames_54() { return &___leapYearMonthNames_54; }
	inline void set_leapYearMonthNames_54(StringU5BU5D_t1281789340* value)
	{
		___leapYearMonthNames_54 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_54), value);
	}

	inline static int32_t get_offset_of_formatFlags_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___formatFlags_55)); }
	inline int32_t get_formatFlags_55() const { return ___formatFlags_55; }
	inline int32_t* get_address_of_formatFlags_55() { return &___formatFlags_55; }
	inline void set_formatFlags_55(int32_t value)
	{
		___formatFlags_55 = value;
	}

	inline static int32_t get_offset_of_m_name_56() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_name_56)); }
	inline String_t* get_m_name_56() const { return ___m_name_56; }
	inline String_t** get_address_of_m_name_56() { return &___m_name_56; }
	inline void set_m_name_56(String_t* value)
	{
		___m_name_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_56), value);
	}

	inline static int32_t get_offset_of_all_date_time_patterns_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___all_date_time_patterns_57)); }
	inline StringU5BU5D_t1281789340* get_all_date_time_patterns_57() const { return ___all_date_time_patterns_57; }
	inline StringU5BU5D_t1281789340** get_address_of_all_date_time_patterns_57() { return &___all_date_time_patterns_57; }
	inline void set_all_date_time_patterns_57(StringU5BU5D_t1281789340* value)
	{
		___all_date_time_patterns_57 = value;
		Il2CppCodeGenWriteBarrier((&___all_date_time_patterns_57), value);
	}
};

struct DateTimeFormatInfo_t2405853701_StaticFields
{
public:
	// System.String System.Globalization.DateTimeFormatInfo::MSG_READONLY
	String_t* ___MSG_READONLY_1;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_MONTH
	String_t* ___MSG_ARRAYSIZE_MONTH_2;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_DAY
	String_t* ___MSG_ARRAYSIZE_DAY_3;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_DAY_NAMES_4;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_DAY_NAMES_5;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_MONTH_NAMES_6;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_MONTH_NAMES_7;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_SHORT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_SHORT_DAY_NAMES_8;
	// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::theInvariantDateTimeFormatInfo
	DateTimeFormatInfo_t2405853701 * ___theInvariantDateTimeFormatInfo_9;

public:
	inline static int32_t get_offset_of_MSG_READONLY_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_READONLY_1)); }
	inline String_t* get_MSG_READONLY_1() const { return ___MSG_READONLY_1; }
	inline String_t** get_address_of_MSG_READONLY_1() { return &___MSG_READONLY_1; }
	inline void set_MSG_READONLY_1(String_t* value)
	{
		___MSG_READONLY_1 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_1), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_MONTH_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_MONTH_2)); }
	inline String_t* get_MSG_ARRAYSIZE_MONTH_2() const { return ___MSG_ARRAYSIZE_MONTH_2; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_MONTH_2() { return &___MSG_ARRAYSIZE_MONTH_2; }
	inline void set_MSG_ARRAYSIZE_MONTH_2(String_t* value)
	{
		___MSG_ARRAYSIZE_MONTH_2 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_MONTH_2), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_DAY_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_DAY_3)); }
	inline String_t* get_MSG_ARRAYSIZE_DAY_3() const { return ___MSG_ARRAYSIZE_DAY_3; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_DAY_3() { return &___MSG_ARRAYSIZE_DAY_3; }
	inline void set_MSG_ARRAYSIZE_DAY_3(String_t* value)
	{
		___MSG_ARRAYSIZE_DAY_3 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_DAY_3), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_DAY_NAMES_4)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_DAY_NAMES_4() const { return ___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return &___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline void set_INVARIANT_ABBREVIATED_DAY_NAMES_4(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_DAY_NAMES_4 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_DAY_NAMES_4), value);
	}

	inline static int32_t get_offset_of_INVARIANT_DAY_NAMES_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_DAY_NAMES_5)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_DAY_NAMES_5() const { return ___INVARIANT_DAY_NAMES_5; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_DAY_NAMES_5() { return &___INVARIANT_DAY_NAMES_5; }
	inline void set_INVARIANT_DAY_NAMES_5(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_DAY_NAMES_5 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_DAY_NAMES_5), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_MONTH_NAMES_6)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_MONTH_NAMES_6() const { return ___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return &___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline void set_INVARIANT_ABBREVIATED_MONTH_NAMES_6(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_MONTH_NAMES_6 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_MONTH_NAMES_6), value);
	}

	inline static int32_t get_offset_of_INVARIANT_MONTH_NAMES_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_MONTH_NAMES_7)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_MONTH_NAMES_7() const { return ___INVARIANT_MONTH_NAMES_7; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_MONTH_NAMES_7() { return &___INVARIANT_MONTH_NAMES_7; }
	inline void set_INVARIANT_MONTH_NAMES_7(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_MONTH_NAMES_7 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_MONTH_NAMES_7), value);
	}

	inline static int32_t get_offset_of_INVARIANT_SHORT_DAY_NAMES_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_SHORT_DAY_NAMES_8)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_SHORT_DAY_NAMES_8() const { return ___INVARIANT_SHORT_DAY_NAMES_8; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_SHORT_DAY_NAMES_8() { return &___INVARIANT_SHORT_DAY_NAMES_8; }
	inline void set_INVARIANT_SHORT_DAY_NAMES_8(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_SHORT_DAY_NAMES_8 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_SHORT_DAY_NAMES_8), value);
	}

	inline static int32_t get_offset_of_theInvariantDateTimeFormatInfo_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___theInvariantDateTimeFormatInfo_9)); }
	inline DateTimeFormatInfo_t2405853701 * get_theInvariantDateTimeFormatInfo_9() const { return ___theInvariantDateTimeFormatInfo_9; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_theInvariantDateTimeFormatInfo_9() { return &___theInvariantDateTimeFormatInfo_9; }
	inline void set_theInvariantDateTimeFormatInfo_9(DateTimeFormatInfo_t2405853701 * value)
	{
		___theInvariantDateTimeFormatInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___theInvariantDateTimeFormatInfo_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2405853701_H
#ifndef COMPAREINFO_T1092934962_H
#define COMPAREINFO_T1092934962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t1092934962  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_3;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_4;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_5;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_6;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2877834729 * ___collator_7;

public:
	inline static int32_t get_offset_of_culture_3() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___culture_3)); }
	inline int32_t get_culture_3() const { return ___culture_3; }
	inline int32_t* get_address_of_culture_3() { return &___culture_3; }
	inline void set_culture_3(int32_t value)
	{
		___culture_3 = value;
	}

	inline static int32_t get_offset_of_icu_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___icu_name_4)); }
	inline String_t* get_icu_name_4() const { return ___icu_name_4; }
	inline String_t** get_address_of_icu_name_4() { return &___icu_name_4; }
	inline void set_icu_name_4(String_t* value)
	{
		___icu_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_4), value);
	}

	inline static int32_t get_offset_of_win32LCID_5() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___win32LCID_5)); }
	inline int32_t get_win32LCID_5() const { return ___win32LCID_5; }
	inline int32_t* get_address_of_win32LCID_5() { return &___win32LCID_5; }
	inline void set_win32LCID_5(int32_t value)
	{
		___win32LCID_5 = value;
	}

	inline static int32_t get_offset_of_m_name_6() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_name_6)); }
	inline String_t* get_m_name_6() const { return ___m_name_6; }
	inline String_t** get_address_of_m_name_6() { return &___m_name_6; }
	inline void set_m_name_6(String_t* value)
	{
		___m_name_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_6), value);
	}

	inline static int32_t get_offset_of_collator_7() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___collator_7)); }
	inline SimpleCollator_t2877834729 * get_collator_7() const { return ___collator_7; }
	inline SimpleCollator_t2877834729 ** get_address_of_collator_7() { return &___collator_7; }
	inline void set_collator_7(SimpleCollator_t2877834729 * value)
	{
		___collator_7 = value;
		Il2CppCodeGenWriteBarrier((&___collator_7), value);
	}
};

struct CompareInfo_t1092934962_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_2;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t1853889766 * ___collators_8;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_9;

public:
	inline static int32_t get_offset_of_useManagedCollation_2() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___useManagedCollation_2)); }
	inline bool get_useManagedCollation_2() const { return ___useManagedCollation_2; }
	inline bool* get_address_of_useManagedCollation_2() { return &___useManagedCollation_2; }
	inline void set_useManagedCollation_2(bool value)
	{
		___useManagedCollation_2 = value;
	}

	inline static int32_t get_offset_of_collators_8() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___collators_8)); }
	inline Hashtable_t1853889766 * get_collators_8() const { return ___collators_8; }
	inline Hashtable_t1853889766 ** get_address_of_collators_8() { return &___collators_8; }
	inline void set_collators_8(Hashtable_t1853889766 * value)
	{
		___collators_8 = value;
		Il2CppCodeGenWriteBarrier((&___collators_8), value);
	}

	inline static int32_t get_offset_of_monitor_9() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___monitor_9)); }
	inline RuntimeObject * get_monitor_9() const { return ___monitor_9; }
	inline RuntimeObject ** get_address_of_monitor_9() { return &___monitor_9; }
	inline void set_monitor_9(RuntimeObject * value)
	{
		___monitor_9 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T1092934962_H
#ifndef DEBUGGABLEATTRIBUTE_T886312066_H
#define DEBUGGABLEATTRIBUTE_T886312066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggableAttribute
struct  DebuggableAttribute_t886312066  : public Attribute_t861562559
{
public:
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITTrackingEnabledFlag
	bool ___JITTrackingEnabledFlag_0;
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITOptimizerDisabledFlag
	bool ___JITOptimizerDisabledFlag_1;
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::debuggingModes
	int32_t ___debuggingModes_2;

public:
	inline static int32_t get_offset_of_JITTrackingEnabledFlag_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t886312066, ___JITTrackingEnabledFlag_0)); }
	inline bool get_JITTrackingEnabledFlag_0() const { return ___JITTrackingEnabledFlag_0; }
	inline bool* get_address_of_JITTrackingEnabledFlag_0() { return &___JITTrackingEnabledFlag_0; }
	inline void set_JITTrackingEnabledFlag_0(bool value)
	{
		___JITTrackingEnabledFlag_0 = value;
	}

	inline static int32_t get_offset_of_JITOptimizerDisabledFlag_1() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t886312066, ___JITOptimizerDisabledFlag_1)); }
	inline bool get_JITOptimizerDisabledFlag_1() const { return ___JITOptimizerDisabledFlag_1; }
	inline bool* get_address_of_JITOptimizerDisabledFlag_1() { return &___JITOptimizerDisabledFlag_1; }
	inline void set_JITOptimizerDisabledFlag_1(bool value)
	{
		___JITOptimizerDisabledFlag_1 = value;
	}

	inline static int32_t get_offset_of_debuggingModes_2() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t886312066, ___debuggingModes_2)); }
	inline int32_t get_debuggingModes_2() const { return ___debuggingModes_2; }
	inline int32_t* get_address_of_debuggingModes_2() { return &___debuggingModes_2; }
	inline void set_debuggingModes_2(int32_t value)
	{
		___debuggingModes_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGABLEATTRIBUTE_T886312066_H
#ifndef HEBREWCALENDAR_T659367616_H
#define HEBREWCALENDAR_T659367616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewCalendar
struct  HebrewCalendar_t659367616  : public Calendar_t1661121569
{
public:

public:
};

struct HebrewCalendar_t659367616_StaticFields
{
public:
	// System.Int32 System.Globalization.HebrewCalendar::HebrewEra
	int32_t ___HebrewEra_10;
	// System.DateTime System.Globalization.HebrewCalendar::Min
	DateTime_t3738529785  ___Min_11;
	// System.DateTime System.Globalization.HebrewCalendar::Max
	DateTime_t3738529785  ___Max_12;

public:
	inline static int32_t get_offset_of_HebrewEra_10() { return static_cast<int32_t>(offsetof(HebrewCalendar_t659367616_StaticFields, ___HebrewEra_10)); }
	inline int32_t get_HebrewEra_10() const { return ___HebrewEra_10; }
	inline int32_t* get_address_of_HebrewEra_10() { return &___HebrewEra_10; }
	inline void set_HebrewEra_10(int32_t value)
	{
		___HebrewEra_10 = value;
	}

	inline static int32_t get_offset_of_Min_11() { return static_cast<int32_t>(offsetof(HebrewCalendar_t659367616_StaticFields, ___Min_11)); }
	inline DateTime_t3738529785  get_Min_11() const { return ___Min_11; }
	inline DateTime_t3738529785 * get_address_of_Min_11() { return &___Min_11; }
	inline void set_Min_11(DateTime_t3738529785  value)
	{
		___Min_11 = value;
	}

	inline static int32_t get_offset_of_Max_12() { return static_cast<int32_t>(offsetof(HebrewCalendar_t659367616_StaticFields, ___Max_12)); }
	inline DateTime_t3738529785  get_Max_12() const { return ___Max_12; }
	inline DateTime_t3738529785 * get_address_of_Max_12() { return &___Max_12; }
	inline void set_Max_12(DateTime_t3738529785  value)
	{
		___Max_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEBREWCALENDAR_T659367616_H
#ifndef HIJRICALENDAR_T397342378_H
#define HIJRICALENDAR_T397342378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HijriCalendar
struct  HijriCalendar_t397342378  : public Calendar_t1661121569
{
public:
	// System.Int32 System.Globalization.HijriCalendar::M_AddHijriDate
	int32_t ___M_AddHijriDate_10;

public:
	inline static int32_t get_offset_of_M_AddHijriDate_10() { return static_cast<int32_t>(offsetof(HijriCalendar_t397342378, ___M_AddHijriDate_10)); }
	inline int32_t get_M_AddHijriDate_10() const { return ___M_AddHijriDate_10; }
	inline int32_t* get_address_of_M_AddHijriDate_10() { return &___M_AddHijriDate_10; }
	inline void set_M_AddHijriDate_10(int32_t value)
	{
		___M_AddHijriDate_10 = value;
	}
};

struct HijriCalendar_t397342378_StaticFields
{
public:
	// System.Int32 System.Globalization.HijriCalendar::HijriEra
	int32_t ___HijriEra_7;
	// System.Int32 System.Globalization.HijriCalendar::M_MinFixed
	int32_t ___M_MinFixed_8;
	// System.Int32 System.Globalization.HijriCalendar::M_MaxFixed
	int32_t ___M_MaxFixed_9;
	// System.DateTime System.Globalization.HijriCalendar::Min
	DateTime_t3738529785  ___Min_11;
	// System.DateTime System.Globalization.HijriCalendar::Max
	DateTime_t3738529785  ___Max_12;

public:
	inline static int32_t get_offset_of_HijriEra_7() { return static_cast<int32_t>(offsetof(HijriCalendar_t397342378_StaticFields, ___HijriEra_7)); }
	inline int32_t get_HijriEra_7() const { return ___HijriEra_7; }
	inline int32_t* get_address_of_HijriEra_7() { return &___HijriEra_7; }
	inline void set_HijriEra_7(int32_t value)
	{
		___HijriEra_7 = value;
	}

	inline static int32_t get_offset_of_M_MinFixed_8() { return static_cast<int32_t>(offsetof(HijriCalendar_t397342378_StaticFields, ___M_MinFixed_8)); }
	inline int32_t get_M_MinFixed_8() const { return ___M_MinFixed_8; }
	inline int32_t* get_address_of_M_MinFixed_8() { return &___M_MinFixed_8; }
	inline void set_M_MinFixed_8(int32_t value)
	{
		___M_MinFixed_8 = value;
	}

	inline static int32_t get_offset_of_M_MaxFixed_9() { return static_cast<int32_t>(offsetof(HijriCalendar_t397342378_StaticFields, ___M_MaxFixed_9)); }
	inline int32_t get_M_MaxFixed_9() const { return ___M_MaxFixed_9; }
	inline int32_t* get_address_of_M_MaxFixed_9() { return &___M_MaxFixed_9; }
	inline void set_M_MaxFixed_9(int32_t value)
	{
		___M_MaxFixed_9 = value;
	}

	inline static int32_t get_offset_of_Min_11() { return static_cast<int32_t>(offsetof(HijriCalendar_t397342378_StaticFields, ___Min_11)); }
	inline DateTime_t3738529785  get_Min_11() const { return ___Min_11; }
	inline DateTime_t3738529785 * get_address_of_Min_11() { return &___Min_11; }
	inline void set_Min_11(DateTime_t3738529785  value)
	{
		___Min_11 = value;
	}

	inline static int32_t get_offset_of_Max_12() { return static_cast<int32_t>(offsetof(HijriCalendar_t397342378_StaticFields, ___Max_12)); }
	inline DateTime_t3738529785  get_Max_12() const { return ___Max_12; }
	inline DateTime_t3738529785 * get_address_of_Max_12() { return &___Max_12; }
	inline void set_Max_12(DateTime_t3738529785  value)
	{
		___Max_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIJRICALENDAR_T397342378_H
#ifndef CHINESELUNISOLARCALENDAR_T3384944155_H
#define CHINESELUNISOLARCALENDAR_T3384944155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.ChineseLunisolarCalendar
struct  ChineseLunisolarCalendar_t3384944155  : public EastAsianLunisolarCalendar_t4157518746
{
public:

public:
};

struct ChineseLunisolarCalendar_t3384944155_StaticFields
{
public:
	// System.Globalization.CCEastAsianLunisolarEraHandler System.Globalization.ChineseLunisolarCalendar::era_handler
	CCEastAsianLunisolarEraHandler_t3949638721 * ___era_handler_9;
	// System.DateTime System.Globalization.ChineseLunisolarCalendar::ChineseMin
	DateTime_t3738529785  ___ChineseMin_10;
	// System.DateTime System.Globalization.ChineseLunisolarCalendar::ChineseMax
	DateTime_t3738529785  ___ChineseMax_11;

public:
	inline static int32_t get_offset_of_era_handler_9() { return static_cast<int32_t>(offsetof(ChineseLunisolarCalendar_t3384944155_StaticFields, ___era_handler_9)); }
	inline CCEastAsianLunisolarEraHandler_t3949638721 * get_era_handler_9() const { return ___era_handler_9; }
	inline CCEastAsianLunisolarEraHandler_t3949638721 ** get_address_of_era_handler_9() { return &___era_handler_9; }
	inline void set_era_handler_9(CCEastAsianLunisolarEraHandler_t3949638721 * value)
	{
		___era_handler_9 = value;
		Il2CppCodeGenWriteBarrier((&___era_handler_9), value);
	}

	inline static int32_t get_offset_of_ChineseMin_10() { return static_cast<int32_t>(offsetof(ChineseLunisolarCalendar_t3384944155_StaticFields, ___ChineseMin_10)); }
	inline DateTime_t3738529785  get_ChineseMin_10() const { return ___ChineseMin_10; }
	inline DateTime_t3738529785 * get_address_of_ChineseMin_10() { return &___ChineseMin_10; }
	inline void set_ChineseMin_10(DateTime_t3738529785  value)
	{
		___ChineseMin_10 = value;
	}

	inline static int32_t get_offset_of_ChineseMax_11() { return static_cast<int32_t>(offsetof(ChineseLunisolarCalendar_t3384944155_StaticFields, ___ChineseMax_11)); }
	inline DateTime_t3738529785  get_ChineseMax_11() const { return ___ChineseMax_11; }
	inline DateTime_t3738529785 * get_address_of_ChineseMax_11() { return &___ChineseMax_11; }
	inline void set_ChineseMax_11(DateTime_t3738529785  value)
	{
		___ChineseMax_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHINESELUNISOLARCALENDAR_T3384944155_H
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef DAYLIGHTTIME_T2582425773_H
#define DAYLIGHTTIME_T2582425773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DaylightTime
struct  DaylightTime_t2582425773  : public RuntimeObject
{
public:
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t3738529785  ___m_start_0;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t3738529785  ___m_end_1;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t881159249  ___m_delta_2;

public:
	inline static int32_t get_offset_of_m_start_0() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_start_0)); }
	inline DateTime_t3738529785  get_m_start_0() const { return ___m_start_0; }
	inline DateTime_t3738529785 * get_address_of_m_start_0() { return &___m_start_0; }
	inline void set_m_start_0(DateTime_t3738529785  value)
	{
		___m_start_0 = value;
	}

	inline static int32_t get_offset_of_m_end_1() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_end_1)); }
	inline DateTime_t3738529785  get_m_end_1() const { return ___m_end_1; }
	inline DateTime_t3738529785 * get_address_of_m_end_1() { return &___m_end_1; }
	inline void set_m_end_1(DateTime_t3738529785  value)
	{
		___m_end_1 = value;
	}

	inline static int32_t get_offset_of_m_delta_2() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_delta_2)); }
	inline TimeSpan_t881159249  get_m_delta_2() const { return ___m_delta_2; }
	inline TimeSpan_t881159249 * get_address_of_m_delta_2() { return &___m_delta_2; }
	inline void set_m_delta_2(TimeSpan_t881159249  value)
	{
		___m_delta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYLIGHTTIME_T2582425773_H
#ifndef GREGORIANCALENDAR_T2054525052_H
#define GREGORIANCALENDAR_T2054525052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendar
struct  GregorianCalendar_t2054525052  : public Calendar_t1661121569
{
public:
	// System.Globalization.GregorianCalendarTypes System.Globalization.GregorianCalendar::m_type
	int32_t ___m_type_8;

public:
	inline static int32_t get_offset_of_m_type_8() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2054525052, ___m_type_8)); }
	inline int32_t get_m_type_8() const { return ___m_type_8; }
	inline int32_t* get_address_of_m_type_8() { return &___m_type_8; }
	inline void set_m_type_8(int32_t value)
	{
		___m_type_8 = value;
	}
};

struct GregorianCalendar_t2054525052_StaticFields
{
public:
	// System.Nullable`1<System.DateTime> System.Globalization.GregorianCalendar::Min
	Nullable_1_t1166124571  ___Min_9;
	// System.Nullable`1<System.DateTime> System.Globalization.GregorianCalendar::Max
	Nullable_1_t1166124571  ___Max_10;

public:
	inline static int32_t get_offset_of_Min_9() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2054525052_StaticFields, ___Min_9)); }
	inline Nullable_1_t1166124571  get_Min_9() const { return ___Min_9; }
	inline Nullable_1_t1166124571 * get_address_of_Min_9() { return &___Min_9; }
	inline void set_Min_9(Nullable_1_t1166124571  value)
	{
		___Min_9 = value;
	}

	inline static int32_t get_offset_of_Max_10() { return static_cast<int32_t>(offsetof(GregorianCalendar_t2054525052_StaticFields, ___Max_10)); }
	inline Nullable_1_t1166124571  get_Max_10() const { return ___Max_10; }
	inline Nullable_1_t1166124571 * get_address_of_Max_10() { return &___Max_10; }
	inline void set_Max_10(Nullable_1_t1166124571  value)
	{
		___Max_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGORIANCALENDAR_T2054525052_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (DictionaryEntry_t3123975638)+ sizeof (RuntimeObject), sizeof(DictionaryEntry_t3123975638_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable300[2] = 
{
	DictionaryEntry_t3123975638::get_offset_of__key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DictionaryEntry_t3123975638::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (Hashtable_t1853889766), -1, sizeof(Hashtable_t1853889766_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable301[14] = 
{
	0,
	Hashtable_t1853889766::get_offset_of_inUse_1(),
	Hashtable_t1853889766::get_offset_of_modificationCount_2(),
	Hashtable_t1853889766::get_offset_of_loadFactor_3(),
	Hashtable_t1853889766::get_offset_of_table_4(),
	Hashtable_t1853889766::get_offset_of_hashes_5(),
	Hashtable_t1853889766::get_offset_of_threshold_6(),
	Hashtable_t1853889766::get_offset_of_hashKeys_7(),
	Hashtable_t1853889766::get_offset_of_hashValues_8(),
	Hashtable_t1853889766::get_offset_of_hcpRef_9(),
	Hashtable_t1853889766::get_offset_of_comparerRef_10(),
	Hashtable_t1853889766::get_offset_of_serializationInfo_11(),
	Hashtable_t1853889766::get_offset_of_equalityComparer_12(),
	Hashtable_t1853889766_StaticFields::get_offset_of_primeTbl_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (Slot_t3975888750)+ sizeof (RuntimeObject), sizeof(Slot_t3975888750_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable302[2] = 
{
	Slot_t3975888750::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Slot_t3975888750::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (KeyMarker_t2496412495), -1, sizeof(KeyMarker_t2496412495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable303[1] = 
{
	KeyMarker_t2496412495_StaticFields::get_offset_of_Removed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (EnumeratorMode_t1442366820)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable304[4] = 
{
	EnumeratorMode_t1442366820::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (Enumerator_t661358686), -1, sizeof(Enumerator_t661358686_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable305[8] = 
{
	Enumerator_t661358686::get_offset_of_host_0(),
	Enumerator_t661358686::get_offset_of_stamp_1(),
	Enumerator_t661358686::get_offset_of_pos_2(),
	Enumerator_t661358686::get_offset_of_size_3(),
	Enumerator_t661358686::get_offset_of_mode_4(),
	Enumerator_t661358686::get_offset_of_currentKey_5(),
	Enumerator_t661358686::get_offset_of_currentValue_6(),
	Enumerator_t661358686_StaticFields::get_offset_of_xstr_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (HashKeys_t1568156503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[1] = 
{
	HashKeys_t1568156503::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (HashValues_t618387445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[1] = 
{
	HashValues_t618387445::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (SyncHashtable_t3569774773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable308[1] = 
{
	SyncHashtable_t3569774773::get_offset_of_host_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (Queue_t3637523393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[6] = 
{
	Queue_t3637523393::get_offset_of__array_0(),
	Queue_t3637523393::get_offset_of__head_1(),
	Queue_t3637523393::get_offset_of__size_2(),
	Queue_t3637523393::get_offset_of__tail_3(),
	Queue_t3637523393::get_offset_of__growFactor_4(),
	Queue_t3637523393::get_offset_of__version_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (SyncQueue_t1435689100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable315[1] = 
{
	SyncQueue_t1435689100::get_offset_of_queue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (QueueEnumerator_t4140714244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[3] = 
{
	QueueEnumerator_t4140714244::get_offset_of_queue_0(),
	QueueEnumerator_t4140714244::get_offset_of__version_1(),
	QueueEnumerator_t4140714244::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (ReadOnlyCollectionBase_t1836743899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable317[1] = 
{
	ReadOnlyCollectionBase_t1836743899::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (SortedList_t2427694641), -1, sizeof(SortedList_t2427694641_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable318[6] = 
{
	SortedList_t2427694641_StaticFields::get_offset_of_INITIAL_SIZE_0(),
	SortedList_t2427694641::get_offset_of_inUse_1(),
	SortedList_t2427694641::get_offset_of_modificationCount_2(),
	SortedList_t2427694641::get_offset_of_table_3(),
	SortedList_t2427694641::get_offset_of_comparer_4(),
	SortedList_t2427694641::get_offset_of_defaultCapacity_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (Slot_t384495010)+ sizeof (RuntimeObject), sizeof(Slot_t384495010_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable319[2] = 
{
	Slot_t384495010::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Slot_t384495010::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (EnumeratorMode_t3719608883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable320[4] = 
{
	EnumeratorMode_t3719608883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (Enumerator_t3548462377), -1, sizeof(Enumerator_t3548462377_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable321[9] = 
{
	Enumerator_t3548462377::get_offset_of_host_0(),
	Enumerator_t3548462377::get_offset_of_stamp_1(),
	Enumerator_t3548462377::get_offset_of_pos_2(),
	Enumerator_t3548462377::get_offset_of_size_3(),
	Enumerator_t3548462377::get_offset_of_mode_4(),
	Enumerator_t3548462377::get_offset_of_currentKey_5(),
	Enumerator_t3548462377::get_offset_of_currentValue_6(),
	Enumerator_t3548462377::get_offset_of_invalid_7(),
	Enumerator_t3548462377_StaticFields::get_offset_of_xstr_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (ListKeys_t1506865728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable322[1] = 
{
	ListKeys_t1506865728::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (ListValues_t1796620884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[1] = 
{
	ListValues_t1796620884::get_offset_of_host_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (SynchedSortedList_t4014217660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[1] = 
{
	SynchedSortedList_t4014217660::get_offset_of_host_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (Stack_t2329662280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[6] = 
{
	0,
	Stack_t2329662280::get_offset_of_contents_1(),
	Stack_t2329662280::get_offset_of_current_2(),
	Stack_t2329662280::get_offset_of_count_3(),
	Stack_t2329662280::get_offset_of_capacity_4(),
	Stack_t2329662280::get_offset_of_modCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (SyncStack_t1114012165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[1] = 
{
	SyncStack_t1114012165::get_offset_of_stack_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (Enumerator_t2929709194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[5] = 
{
	0,
	0,
	Enumerator_t2929709194::get_offset_of_stack_2(),
	Enumerator_t2929709194::get_offset_of_modCount_3(),
	Enumerator_t2929709194::get_offset_of_current_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (AssemblyHash_t704722890)+ sizeof (RuntimeObject), sizeof(AssemblyHash_t704722890_marshaled_pinvoke), sizeof(AssemblyHash_t704722890_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable328[3] = 
{
	AssemblyHash_t704722890::get_offset_of__algorithm_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AssemblyHash_t704722890::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AssemblyHash_t704722890_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (AssemblyHashAlgorithm_t1216504064)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable329[4] = 
{
	AssemblyHashAlgorithm_t1216504064::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (AssemblyVersionCompatibility_t766556580)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable330[4] = 
{
	AssemblyVersionCompatibility_t766556580::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (InternalActivationContextHelper_t1145279873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (InternalApplicationIdentityHelper_t3717336422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (SuppressMessageAttribute_t3139292579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable333[6] = 
{
	SuppressMessageAttribute_t3139292579::get_offset_of_category_0(),
	SuppressMessageAttribute_t3139292579::get_offset_of_checkId_1(),
	SuppressMessageAttribute_t3139292579::get_offset_of_justification_2(),
	SuppressMessageAttribute_t3139292579::get_offset_of_messageId_3(),
	SuppressMessageAttribute_t3139292579::get_offset_of_scope_4(),
	SuppressMessageAttribute_t3139292579::get_offset_of_target_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (SymAddressKind_t4097064995)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable344[11] = 
{
	SymAddressKind_t4097064995::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (SymDocumentType_t3324260299), -1, sizeof(SymDocumentType_t3324260299_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable345[1] = 
{
	SymDocumentType_t3324260299_StaticFields::get_offset_of_Text_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (SymLanguageType_t1848853089), -1, sizeof(SymLanguageType_t1848853089_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable346[11] = 
{
	SymLanguageType_t1848853089_StaticFields::get_offset_of_Basic_0(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_C_1(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_Cobol_2(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_CPlusPlus_3(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_CSharp_4(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_ILAssembly_5(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_Java_6(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_JScript_7(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_MCPlusPlus_8(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_Pascal_9(),
	SymLanguageType_t1848853089_StaticFields::get_offset_of_SMC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (SymLanguageVendor_t1063089164), -1, sizeof(SymLanguageVendor_t1063089164_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable347[1] = 
{
	SymLanguageVendor_t1063089164_StaticFields::get_offset_of_Microsoft_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (SymbolToken_t1296711471)+ sizeof (RuntimeObject), sizeof(SymbolToken_t1296711471 ), 0, 0 };
extern const int32_t g_FieldOffsetTable348[1] = 
{
	SymbolToken_t1296711471::get_offset_of__val_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (DebuggableAttribute_t886312066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable349[3] = 
{
	DebuggableAttribute_t886312066::get_offset_of_JITTrackingEnabledFlag_0(),
	DebuggableAttribute_t886312066::get_offset_of_JITOptimizerDisabledFlag_1(),
	DebuggableAttribute_t886312066::get_offset_of_debuggingModes_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (DebuggingModes_t3662555298)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable350[6] = 
{
	DebuggingModes_t3662555298::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (Debugger_t2143709070), -1, sizeof(Debugger_t2143709070_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable351[1] = 
{
	Debugger_t2143709070_StaticFields::get_offset_of_DefaultCategory_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (DebuggerBrowsableAttribute_t1026244177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[1] = 
{
	DebuggerBrowsableAttribute_t1026244177::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (DebuggerBrowsableState_t747501856)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable353[4] = 
{
	DebuggerBrowsableState_t747501856::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (DebuggerDisplayAttribute_t2957424906), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable354[5] = 
{
	DebuggerDisplayAttribute_t2957424906::get_offset_of_value_0(),
	DebuggerDisplayAttribute_t2957424906::get_offset_of_type_1(),
	DebuggerDisplayAttribute_t2957424906::get_offset_of_name_2(),
	DebuggerDisplayAttribute_t2957424906::get_offset_of_target_type_name_3(),
	DebuggerDisplayAttribute_t2957424906::get_offset_of_target_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (DebuggerNonUserCodeAttribute_t1012762574), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (DebuggerStepThroughAttribute_t875708394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (DebuggerStepperBoundaryAttribute_t3506931884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (DebuggerTypeProxyAttribute_t1385406673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable358[3] = 
{
	DebuggerTypeProxyAttribute_t1385406673::get_offset_of_proxy_type_name_0(),
	DebuggerTypeProxyAttribute_t1385406673::get_offset_of_target_type_name_1(),
	DebuggerTypeProxyAttribute_t1385406673::get_offset_of_target_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (DebuggerVisualizerAttribute_t2240437510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable359[5] = 
{
	DebuggerVisualizerAttribute_t2240437510::get_offset_of_description_0(),
	DebuggerVisualizerAttribute_t2240437510::get_offset_of_visualizerSourceName_1(),
	DebuggerVisualizerAttribute_t2240437510::get_offset_of_visualizerName_2(),
	DebuggerVisualizerAttribute_t2240437510::get_offset_of_targetTypeName_3(),
	DebuggerVisualizerAttribute_t2240437510::get_offset_of_target_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (StackFrame_t3217253059), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable360[8] = 
{
	0,
	StackFrame_t3217253059::get_offset_of_ilOffset_1(),
	StackFrame_t3217253059::get_offset_of_nativeOffset_2(),
	StackFrame_t3217253059::get_offset_of_methodBase_3(),
	StackFrame_t3217253059::get_offset_of_fileName_4(),
	StackFrame_t3217253059::get_offset_of_lineNumber_5(),
	StackFrame_t3217253059::get_offset_of_columnNumber_6(),
	StackFrame_t3217253059::get_offset_of_internalMethodName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (StackTrace_t1598645457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[3] = 
{
	0,
	StackTrace_t1598645457::get_offset_of_frames_1(),
	StackTrace_t1598645457::get_offset_of_debug_info_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (Calendar_t1661121569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable362[7] = 
{
	0,
	Calendar_t1661121569::get_offset_of_m_isReadOnly_1(),
	Calendar_t1661121569::get_offset_of_twoDigitYearMax_2(),
	Calendar_t1661121569::get_offset_of_M_MaxYearValue_3(),
	Calendar_t1661121569::get_offset_of_M_AbbrEraNames_4(),
	Calendar_t1661121569::get_offset_of_M_EraNames_5(),
	Calendar_t1661121569::get_offset_of_m_currentEraValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (CalendarAlgorithmType_t3421237338)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable363[5] = 
{
	CalendarAlgorithmType_t3421237338::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (CalendarWeekRule_t1431246310)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable364[4] = 
{
	CalendarWeekRule_t1431246310::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (CCMath_t1752835476), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (CCFixed_t4160633277), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (CCGregorianCalendar_t1095914347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable367[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (Month_t2827529699)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable368[13] = 
{
	Month_t2827529699::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (CCJulianCalendar_t280102879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (Month_t1903313424)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable370[13] = 
{
	Month_t1903313424::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (CCHebrewCalendar_t309704397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable371[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (Month_t2174046904)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable372[15] = 
{
	Month_t2174046904::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (CCHijriCalendar_t105038385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable373[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (Month_t2430253282)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable374[13] = 
{
	Month_t2430253282::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (CCEastAsianLunisolarCalendar_t1348031750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable375[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (CCGregorianEraHandler_t3677769696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[1] = 
{
	CCGregorianEraHandler_t3677769696::get_offset_of__Eras_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (Era_t434718289)+ sizeof (RuntimeObject), sizeof(Era_t434718289 ), 0, 0 };
extern const int32_t g_FieldOffsetTable377[5] = 
{
	Era_t434718289::get_offset_of__nr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t434718289::get_offset_of__start_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t434718289::get_offset_of__gregorianYearStart_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t434718289::get_offset_of__end_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t434718289::get_offset_of__maxYear_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (CCEastAsianLunisolarEraHandler_t3949638721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable378[1] = 
{
	CCEastAsianLunisolarEraHandler_t3949638721::get_offset_of__Eras_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (Era_t901412335)+ sizeof (RuntimeObject), sizeof(Era_t901412335 ), 0, 0 };
extern const int32_t g_FieldOffsetTable379[5] = 
{
	Era_t901412335::get_offset_of__nr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t901412335::get_offset_of__start_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t901412335::get_offset_of__gregorianYearStart_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t901412335::get_offset_of__end_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Era_t901412335::get_offset_of__maxYear_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (CharUnicodeInfo_t4268073907), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (ChineseLunisolarCalendar_t3384944155), -1, sizeof(ChineseLunisolarCalendar_t3384944155_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable381[4] = 
{
	0,
	ChineseLunisolarCalendar_t3384944155_StaticFields::get_offset_of_era_handler_9(),
	ChineseLunisolarCalendar_t3384944155_StaticFields::get_offset_of_ChineseMin_10(),
	ChineseLunisolarCalendar_t3384944155_StaticFields::get_offset_of_ChineseMax_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (CodePageDataItem_t2285235057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable382[8] = 
{
	CodePageDataItem_t2285235057::get_offset_of_m_bodyName_0(),
	CodePageDataItem_t2285235057::get_offset_of_m_codePage_1(),
	CodePageDataItem_t2285235057::get_offset_of_m_dataIndex_2(),
	CodePageDataItem_t2285235057::get_offset_of_m_description_3(),
	CodePageDataItem_t2285235057::get_offset_of_m_flags_4(),
	CodePageDataItem_t2285235057::get_offset_of_m_headerName_5(),
	CodePageDataItem_t2285235057::get_offset_of_m_uiFamilyCodePage_6(),
	CodePageDataItem_t2285235057::get_offset_of_m_webName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (CompareInfo_t1092934962), -1, sizeof(CompareInfo_t1092934962_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable383[10] = 
{
	0,
	0,
	CompareInfo_t1092934962_StaticFields::get_offset_of_useManagedCollation_2(),
	CompareInfo_t1092934962::get_offset_of_culture_3(),
	CompareInfo_t1092934962::get_offset_of_icu_name_4(),
	CompareInfo_t1092934962::get_offset_of_win32LCID_5(),
	CompareInfo_t1092934962::get_offset_of_m_name_6(),
	CompareInfo_t1092934962::get_offset_of_collator_7(),
	CompareInfo_t1092934962_StaticFields::get_offset_of_collators_8(),
	CompareInfo_t1092934962_StaticFields::get_offset_of_monitor_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (CompareOptions_t4130014775)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable384[10] = 
{
	CompareOptions_t4130014775::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (CultureInfo_t4157843068), -1, sizeof(CultureInfo_t4157843068_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable385[40] = 
{
	0,
	0,
	0,
	0,
	CultureInfo_t4157843068_StaticFields::get_offset_of_invariant_culture_info_4(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_shared_table_lock_5(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_BootstrapCultureID_6(),
	CultureInfo_t4157843068::get_offset_of_m_isReadOnly_7(),
	CultureInfo_t4157843068::get_offset_of_cultureID_8(),
	CultureInfo_t4157843068::get_offset_of_parent_lcid_9(),
	CultureInfo_t4157843068::get_offset_of_specific_lcid_10(),
	CultureInfo_t4157843068::get_offset_of_datetime_index_11(),
	CultureInfo_t4157843068::get_offset_of_number_index_12(),
	CultureInfo_t4157843068::get_offset_of_m_useUserOverride_13(),
	CultureInfo_t4157843068::get_offset_of_numInfo_14(),
	CultureInfo_t4157843068::get_offset_of_dateTimeInfo_15(),
	CultureInfo_t4157843068::get_offset_of_textInfo_16(),
	CultureInfo_t4157843068::get_offset_of_m_name_17(),
	CultureInfo_t4157843068::get_offset_of_displayname_18(),
	CultureInfo_t4157843068::get_offset_of_englishname_19(),
	CultureInfo_t4157843068::get_offset_of_nativename_20(),
	CultureInfo_t4157843068::get_offset_of_iso3lang_21(),
	CultureInfo_t4157843068::get_offset_of_iso2lang_22(),
	CultureInfo_t4157843068::get_offset_of_icu_name_23(),
	CultureInfo_t4157843068::get_offset_of_win3lang_24(),
	CultureInfo_t4157843068::get_offset_of_territory_25(),
	CultureInfo_t4157843068::get_offset_of_compareInfo_26(),
	CultureInfo_t4157843068::get_offset_of_calendar_data_27(),
	CultureInfo_t4157843068::get_offset_of_textinfo_data_28(),
	CultureInfo_t4157843068::get_offset_of_optional_calendars_29(),
	CultureInfo_t4157843068::get_offset_of_parent_culture_30(),
	CultureInfo_t4157843068::get_offset_of_m_dataItem_31(),
	CultureInfo_t4157843068::get_offset_of_calendar_32(),
	CultureInfo_t4157843068::get_offset_of_constructed_33(),
	CultureInfo_t4157843068::get_offset_of_cached_serialized_form_34(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_MSG_READONLY_35(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_shared_by_number_36(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_shared_by_name_37(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_U3CU3Ef__switchU24map19_38(),
	CultureInfo_t4157843068_StaticFields::get_offset_of_U3CU3Ef__switchU24map1A_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (CultureTypes_t3483192109)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable386[9] = 
{
	CultureTypes_t3483192109::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (DateTimeFormatFlags_t1884407083)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable387[6] = 
{
	DateTimeFormatFlags_t1884407083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (DateTimeFormatInfo_t2405853701), -1, sizeof(DateTimeFormatInfo_t2405853701_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable388[58] = 
{
	0,
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_MSG_READONLY_1(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_MSG_ARRAYSIZE_MONTH_2(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_MSG_ARRAYSIZE_DAY_3(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_INVARIANT_DAY_NAMES_5(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_INVARIANT_MONTH_NAMES_7(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_INVARIANT_SHORT_DAY_NAMES_8(),
	DateTimeFormatInfo_t2405853701_StaticFields::get_offset_of_theInvariantDateTimeFormatInfo_9(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_isReadOnly_10(),
	DateTimeFormatInfo_t2405853701::get_offset_of_amDesignator_11(),
	DateTimeFormatInfo_t2405853701::get_offset_of_pmDesignator_12(),
	DateTimeFormatInfo_t2405853701::get_offset_of_dateSeparator_13(),
	DateTimeFormatInfo_t2405853701::get_offset_of_timeSeparator_14(),
	DateTimeFormatInfo_t2405853701::get_offset_of_shortDatePattern_15(),
	DateTimeFormatInfo_t2405853701::get_offset_of_longDatePattern_16(),
	DateTimeFormatInfo_t2405853701::get_offset_of_shortTimePattern_17(),
	DateTimeFormatInfo_t2405853701::get_offset_of_longTimePattern_18(),
	DateTimeFormatInfo_t2405853701::get_offset_of_monthDayPattern_19(),
	DateTimeFormatInfo_t2405853701::get_offset_of_yearMonthPattern_20(),
	DateTimeFormatInfo_t2405853701::get_offset_of_fullDateTimePattern_21(),
	DateTimeFormatInfo_t2405853701::get_offset_of__RFC1123Pattern_22(),
	DateTimeFormatInfo_t2405853701::get_offset_of__SortableDateTimePattern_23(),
	DateTimeFormatInfo_t2405853701::get_offset_of__UniversalSortableDateTimePattern_24(),
	DateTimeFormatInfo_t2405853701::get_offset_of_firstDayOfWeek_25(),
	DateTimeFormatInfo_t2405853701::get_offset_of_calendar_26(),
	DateTimeFormatInfo_t2405853701::get_offset_of_calendarWeekRule_27(),
	DateTimeFormatInfo_t2405853701::get_offset_of_abbreviatedDayNames_28(),
	DateTimeFormatInfo_t2405853701::get_offset_of_dayNames_29(),
	DateTimeFormatInfo_t2405853701::get_offset_of_monthNames_30(),
	DateTimeFormatInfo_t2405853701::get_offset_of_abbreviatedMonthNames_31(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allShortDatePatterns_32(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allLongDatePatterns_33(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allShortTimePatterns_34(),
	DateTimeFormatInfo_t2405853701::get_offset_of_allLongTimePatterns_35(),
	DateTimeFormatInfo_t2405853701::get_offset_of_monthDayPatterns_36(),
	DateTimeFormatInfo_t2405853701::get_offset_of_yearMonthPatterns_37(),
	DateTimeFormatInfo_t2405853701::get_offset_of_shortDayNames_38(),
	DateTimeFormatInfo_t2405853701::get_offset_of_nDataItem_39(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_useUserOverride_40(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_isDefaultCalendar_41(),
	DateTimeFormatInfo_t2405853701::get_offset_of_CultureID_42(),
	DateTimeFormatInfo_t2405853701::get_offset_of_bUseCalendarInfo_43(),
	DateTimeFormatInfo_t2405853701::get_offset_of_generalShortTimePattern_44(),
	DateTimeFormatInfo_t2405853701::get_offset_of_generalLongTimePattern_45(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_eraNames_46(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_abbrevEraNames_47(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_abbrevEnglishEraNames_48(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_dateWords_49(),
	DateTimeFormatInfo_t2405853701::get_offset_of_optionalCalendars_50(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_superShortDayNames_51(),
	DateTimeFormatInfo_t2405853701::get_offset_of_genitiveMonthNames_52(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_genitiveAbbreviatedMonthNames_53(),
	DateTimeFormatInfo_t2405853701::get_offset_of_leapYearMonthNames_54(),
	DateTimeFormatInfo_t2405853701::get_offset_of_formatFlags_55(),
	DateTimeFormatInfo_t2405853701::get_offset_of_m_name_56(),
	DateTimeFormatInfo_t2405853701::get_offset_of_all_date_time_patterns_57(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (DateTimeStyles_t840957420)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable389[11] = 
{
	DateTimeStyles_t840957420::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (DaylightTime_t2582425773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable390[3] = 
{
	DaylightTime_t2582425773::get_offset_of_m_start_0(),
	DaylightTime_t2582425773::get_offset_of_m_end_1(),
	DaylightTime_t2582425773::get_offset_of_m_delta_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (DigitShapes_t1975396291)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable391[4] = 
{
	DigitShapes_t1975396291::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (EastAsianLunisolarCalendar_t4157518746), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable392[1] = 
{
	EastAsianLunisolarCalendar_t4157518746::get_offset_of_M_EraHandler_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (GregorianCalendar_t2054525052), -1, sizeof(GregorianCalendar_t2054525052_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable393[4] = 
{
	0,
	GregorianCalendar_t2054525052::get_offset_of_m_type_8(),
	GregorianCalendar_t2054525052_StaticFields::get_offset_of_Min_9(),
	GregorianCalendar_t2054525052_StaticFields::get_offset_of_Max_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (GregorianCalendarTypes_t3815403233)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable394[7] = 
{
	GregorianCalendarTypes_t3815403233::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (HebrewCalendar_t659367616), -1, sizeof(HebrewCalendar_t659367616_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable395[6] = 
{
	0,
	0,
	0,
	HebrewCalendar_t659367616_StaticFields::get_offset_of_HebrewEra_10(),
	HebrewCalendar_t659367616_StaticFields::get_offset_of_Min_11(),
	HebrewCalendar_t659367616_StaticFields::get_offset_of_Max_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (HijriCalendar_t397342378), -1, sizeof(HijriCalendar_t397342378_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable396[6] = 
{
	HijriCalendar_t397342378_StaticFields::get_offset_of_HijriEra_7(),
	HijriCalendar_t397342378_StaticFields::get_offset_of_M_MinFixed_8(),
	HijriCalendar_t397342378_StaticFields::get_offset_of_M_MaxFixed_9(),
	HijriCalendar_t397342378::get_offset_of_M_AddHijriDate_10(),
	HijriCalendar_t397342378_StaticFields::get_offset_of_Min_11(),
	HijriCalendar_t397342378_StaticFields::get_offset_of_Max_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (IdnMapping_t1700667501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable397[3] = 
{
	IdnMapping_t1700667501::get_offset_of_allow_unassigned_0(),
	IdnMapping_t1700667501::get_offset_of_use_std3_1(),
	IdnMapping_t1700667501::get_offset_of_puny_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (Bootstring_t3302426383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable398[8] = 
{
	Bootstring_t3302426383::get_offset_of_delimiter_0(),
	Bootstring_t3302426383::get_offset_of_base_num_1(),
	Bootstring_t3302426383::get_offset_of_tmin_2(),
	Bootstring_t3302426383::get_offset_of_tmax_3(),
	Bootstring_t3302426383::get_offset_of_skew_4(),
	Bootstring_t3302426383::get_offset_of_damp_5(),
	Bootstring_t3302426383::get_offset_of_initial_bias_6(),
	Bootstring_t3302426383::get_offset_of_initial_n_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (Punycode_t2881783740), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
