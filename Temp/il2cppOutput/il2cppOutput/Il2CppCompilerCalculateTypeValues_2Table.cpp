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
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t2787973995;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t567962447;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Mono.DataConverter
struct DataConverter_t1070999395;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t932037087;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.String[]
struct StringU5BU5D_t1281789340;
// Mono.Security.Uri/UriScheme[]
struct UriSchemeU5BU5D_t1281162915;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IList
struct IList_t2094931216;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.BitArray
struct BitArray_t4087883509;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3218159895;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168549;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t1701070648;
// Mono.Security.ASN1
struct ASN1_t2114160832;
// System.Security.SecurityElement
struct SecurityElement_t1046076091;




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
#ifndef NAMES_T1325641082_H
#define NAMES_T1325641082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores/Names
struct  Names_t1325641082  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMES_T1325641082_H
#ifndef DEFAULTHANDLER_T3108532812_H
#define DEFAULTHANDLER_T3108532812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DefaultHandler
struct  DefaultHandler_t3108532812  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTHANDLER_T3108532812_H
#ifndef SMALLXMLPARSER_T973787839_H
#define SMALLXMLPARSER_T973787839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser
struct  SmallXmlParser_t973787839  : public RuntimeObject
{
public:
	// Mono.Xml.SmallXmlParser/IContentHandler Mono.Xml.SmallXmlParser::handler
	RuntimeObject* ___handler_0;
	// System.IO.TextReader Mono.Xml.SmallXmlParser::reader
	TextReader_t283511965 * ___reader_1;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::elementNames
	Stack_t2329662280 * ___elementNames_2;
	// System.Collections.Stack Mono.Xml.SmallXmlParser::xmlSpaces
	Stack_t2329662280 * ___xmlSpaces_3;
	// System.String Mono.Xml.SmallXmlParser::xmlSpace
	String_t* ___xmlSpace_4;
	// System.Text.StringBuilder Mono.Xml.SmallXmlParser::buffer
	StringBuilder_t * ___buffer_5;
	// System.Char[] Mono.Xml.SmallXmlParser::nameBuffer
	CharU5BU5D_t3528271667* ___nameBuffer_6;
	// System.Boolean Mono.Xml.SmallXmlParser::isWhitespace
	bool ___isWhitespace_7;
	// Mono.Xml.SmallXmlParser/AttrListImpl Mono.Xml.SmallXmlParser::attributes
	AttrListImpl_t567962447 * ___attributes_8;
	// System.Int32 Mono.Xml.SmallXmlParser::line
	int32_t ___line_9;
	// System.Int32 Mono.Xml.SmallXmlParser::column
	int32_t ___column_10;
	// System.Boolean Mono.Xml.SmallXmlParser::resetColumn
	bool ___resetColumn_11;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___reader_1)); }
	inline TextReader_t283511965 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t283511965 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t283511965 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}

	inline static int32_t get_offset_of_elementNames_2() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___elementNames_2)); }
	inline Stack_t2329662280 * get_elementNames_2() const { return ___elementNames_2; }
	inline Stack_t2329662280 ** get_address_of_elementNames_2() { return &___elementNames_2; }
	inline void set_elementNames_2(Stack_t2329662280 * value)
	{
		___elementNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___elementNames_2), value);
	}

	inline static int32_t get_offset_of_xmlSpaces_3() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___xmlSpaces_3)); }
	inline Stack_t2329662280 * get_xmlSpaces_3() const { return ___xmlSpaces_3; }
	inline Stack_t2329662280 ** get_address_of_xmlSpaces_3() { return &___xmlSpaces_3; }
	inline void set_xmlSpaces_3(Stack_t2329662280 * value)
	{
		___xmlSpaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpaces_3), value);
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___xmlSpace_4)); }
	inline String_t* get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline String_t** get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(String_t* value)
	{
		___xmlSpace_4 = value;
		Il2CppCodeGenWriteBarrier((&___xmlSpace_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___buffer_5)); }
	inline StringBuilder_t * get_buffer_5() const { return ___buffer_5; }
	inline StringBuilder_t ** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(StringBuilder_t * value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_nameBuffer_6() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___nameBuffer_6)); }
	inline CharU5BU5D_t3528271667* get_nameBuffer_6() const { return ___nameBuffer_6; }
	inline CharU5BU5D_t3528271667** get_address_of_nameBuffer_6() { return &___nameBuffer_6; }
	inline void set_nameBuffer_6(CharU5BU5D_t3528271667* value)
	{
		___nameBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameBuffer_6), value);
	}

	inline static int32_t get_offset_of_isWhitespace_7() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___isWhitespace_7)); }
	inline bool get_isWhitespace_7() const { return ___isWhitespace_7; }
	inline bool* get_address_of_isWhitespace_7() { return &___isWhitespace_7; }
	inline void set_isWhitespace_7(bool value)
	{
		___isWhitespace_7 = value;
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___attributes_8)); }
	inline AttrListImpl_t567962447 * get_attributes_8() const { return ___attributes_8; }
	inline AttrListImpl_t567962447 ** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttrListImpl_t567962447 * value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_8), value);
	}

	inline static int32_t get_offset_of_line_9() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___line_9)); }
	inline int32_t get_line_9() const { return ___line_9; }
	inline int32_t* get_address_of_line_9() { return &___line_9; }
	inline void set_line_9(int32_t value)
	{
		___line_9 = value;
	}

	inline static int32_t get_offset_of_column_10() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___column_10)); }
	inline int32_t get_column_10() const { return ___column_10; }
	inline int32_t* get_address_of_column_10() { return &___column_10; }
	inline void set_column_10(int32_t value)
	{
		___column_10 = value;
	}

	inline static int32_t get_offset_of_resetColumn_11() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839, ___resetColumn_11)); }
	inline bool get_resetColumn_11() const { return ___resetColumn_11; }
	inline bool* get_address_of_resetColumn_11() { return &___resetColumn_11; }
	inline void set_resetColumn_11(bool value)
	{
		___resetColumn_11 = value;
	}
};

struct SmallXmlParser_t973787839_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.SmallXmlParser::<>f__switch$map18
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map18_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map18_12() { return static_cast<int32_t>(offsetof(SmallXmlParser_t973787839_StaticFields, ___U3CU3Ef__switchU24map18_12)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map18_12() const { return ___U3CU3Ef__switchU24map18_12; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map18_12() { return &___U3CU3Ef__switchU24map18_12; }
	inline void set_U3CU3Ef__switchU24map18_12(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map18_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map18_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLXMLPARSER_T973787839_H
#ifndef ATTRLISTIMPL_T567962447_H
#define ATTRLISTIMPL_T567962447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser/AttrListImpl
struct  AttrListImpl_t567962447  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Xml.SmallXmlParser/AttrListImpl::attrNames
	ArrayList_t2718874744 * ___attrNames_0;
	// System.Collections.ArrayList Mono.Xml.SmallXmlParser/AttrListImpl::attrValues
	ArrayList_t2718874744 * ___attrValues_1;

public:
	inline static int32_t get_offset_of_attrNames_0() { return static_cast<int32_t>(offsetof(AttrListImpl_t567962447, ___attrNames_0)); }
	inline ArrayList_t2718874744 * get_attrNames_0() const { return ___attrNames_0; }
	inline ArrayList_t2718874744 ** get_address_of_attrNames_0() { return &___attrNames_0; }
	inline void set_attrNames_0(ArrayList_t2718874744 * value)
	{
		___attrNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrNames_0), value);
	}

	inline static int32_t get_offset_of_attrValues_1() { return static_cast<int32_t>(offsetof(AttrListImpl_t567962447, ___attrValues_1)); }
	inline ArrayList_t2718874744 * get_attrValues_1() const { return ___attrValues_1; }
	inline ArrayList_t2718874744 ** get_address_of_attrValues_1() { return &___attrValues_1; }
	inline void set_attrValues_1(ArrayList_t2718874744 * value)
	{
		___attrValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRLISTIMPL_T567962447_H
#ifndef DATACONVERTER_T1070999395_H
#define DATACONVERTER_T1070999395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.DataConverter
struct  DataConverter_t1070999395  : public RuntimeObject
{
public:

public:
};

struct DataConverter_t1070999395_StaticFields
{
public:
	// Mono.DataConverter Mono.DataConverter::SwapConv
	DataConverter_t1070999395 * ___SwapConv_0;
	// Mono.DataConverter Mono.DataConverter::CopyConv
	DataConverter_t1070999395 * ___CopyConv_1;
	// System.Boolean Mono.DataConverter::IsLittleEndian
	bool ___IsLittleEndian_2;

public:
	inline static int32_t get_offset_of_SwapConv_0() { return static_cast<int32_t>(offsetof(DataConverter_t1070999395_StaticFields, ___SwapConv_0)); }
	inline DataConverter_t1070999395 * get_SwapConv_0() const { return ___SwapConv_0; }
	inline DataConverter_t1070999395 ** get_address_of_SwapConv_0() { return &___SwapConv_0; }
	inline void set_SwapConv_0(DataConverter_t1070999395 * value)
	{
		___SwapConv_0 = value;
		Il2CppCodeGenWriteBarrier((&___SwapConv_0), value);
	}

	inline static int32_t get_offset_of_CopyConv_1() { return static_cast<int32_t>(offsetof(DataConverter_t1070999395_StaticFields, ___CopyConv_1)); }
	inline DataConverter_t1070999395 * get_CopyConv_1() const { return ___CopyConv_1; }
	inline DataConverter_t1070999395 ** get_address_of_CopyConv_1() { return &___CopyConv_1; }
	inline void set_CopyConv_1(DataConverter_t1070999395 * value)
	{
		___CopyConv_1 = value;
		Il2CppCodeGenWriteBarrier((&___CopyConv_1), value);
	}

	inline static int32_t get_offset_of_IsLittleEndian_2() { return static_cast<int32_t>(offsetof(DataConverter_t1070999395_StaticFields, ___IsLittleEndian_2)); }
	inline bool get_IsLittleEndian_2() const { return ___IsLittleEndian_2; }
	inline bool* get_address_of_IsLittleEndian_2() { return &___IsLittleEndian_2; }
	inline void set_IsLittleEndian_2(bool value)
	{
		___IsLittleEndian_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACONVERTER_T1070999395_H
#ifndef PACKCONTEXT_T1070455346_H
#define PACKCONTEXT_T1070455346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.DataConverter/PackContext
struct  PackContext_t1070455346  : public RuntimeObject
{
public:
	// System.Byte[] Mono.DataConverter/PackContext::buffer
	ByteU5BU5D_t4116647657* ___buffer_0;
	// System.Int32 Mono.DataConverter/PackContext::next
	int32_t ___next_1;
	// System.String Mono.DataConverter/PackContext::description
	String_t* ___description_2;
	// System.Int32 Mono.DataConverter/PackContext::i
	int32_t ___i_3;
	// Mono.DataConverter Mono.DataConverter/PackContext::conv
	DataConverter_t1070999395 * ___conv_4;
	// System.Int32 Mono.DataConverter/PackContext::repeat
	int32_t ___repeat_5;
	// System.Int32 Mono.DataConverter/PackContext::align
	int32_t ___align_6;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(PackContext_t1070455346, ___buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(PackContext_t1070455346, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(PackContext_t1070455346, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_i_3() { return static_cast<int32_t>(offsetof(PackContext_t1070455346, ___i_3)); }
	inline int32_t get_i_3() const { return ___i_3; }
	inline int32_t* get_address_of_i_3() { return &___i_3; }
	inline void set_i_3(int32_t value)
	{
		___i_3 = value;
	}

	inline static int32_t get_offset_of_conv_4() { return static_cast<int32_t>(offsetof(PackContext_t1070455346, ___conv_4)); }
	inline DataConverter_t1070999395 * get_conv_4() const { return ___conv_4; }
	inline DataConverter_t1070999395 ** get_address_of_conv_4() { return &___conv_4; }
	inline void set_conv_4(DataConverter_t1070999395 * value)
	{
		___conv_4 = value;
		Il2CppCodeGenWriteBarrier((&___conv_4), value);
	}

	inline static int32_t get_offset_of_repeat_5() { return static_cast<int32_t>(offsetof(PackContext_t1070455346, ___repeat_5)); }
	inline int32_t get_repeat_5() const { return ___repeat_5; }
	inline int32_t* get_address_of_repeat_5() { return &___repeat_5; }
	inline void set_repeat_5(int32_t value)
	{
		___repeat_5 = value;
	}

	inline static int32_t get_offset_of_align_6() { return static_cast<int32_t>(offsetof(PackContext_t1070455346, ___align_6)); }
	inline int32_t get_align_6() const { return ___align_6; }
	inline int32_t* get_address_of_align_6() { return &___align_6; }
	inline void set_align_6(int32_t value)
	{
		___align_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKCONTEXT_T1070455346_H
#ifndef RUNTIME_T3174508158_H
#define RUNTIME_T3174508158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Runtime
struct  Runtime_t3174508158  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIME_T3174508158_H
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
#ifndef SIGNERINFO_T1701070648_H
#define SIGNERINFO_T1701070648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/SignerInfo
struct  SignerInfo_t1701070648  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignerInfo::version
	uint8_t ___version_0;
	// Mono.Security.X509.X509Certificate Mono.Security.PKCS7/SignerInfo::x509
	X509Certificate_t489243024 * ___x509_1;
	// System.String Mono.Security.PKCS7/SignerInfo::hashAlgorithm
	String_t* ___hashAlgorithm_2;
	// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.PKCS7/SignerInfo::key
	AsymmetricAlgorithm_t932037087 * ___key_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::authenticatedAttributes
	ArrayList_t2718874744 * ___authenticatedAttributes_4;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::unauthenticatedAttributes
	ArrayList_t2718874744 * ___unauthenticatedAttributes_5;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::signature
	ByteU5BU5D_t4116647657* ___signature_6;
	// System.String Mono.Security.PKCS7/SignerInfo::issuer
	String_t* ___issuer_7;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::serial
	ByteU5BU5D_t4116647657* ___serial_8;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::ski
	ByteU5BU5D_t4116647657* ___ski_9;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_x509_1() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___x509_1)); }
	inline X509Certificate_t489243024 * get_x509_1() const { return ___x509_1; }
	inline X509Certificate_t489243024 ** get_address_of_x509_1() { return &___x509_1; }
	inline void set_x509_1(X509Certificate_t489243024 * value)
	{
		___x509_1 = value;
		Il2CppCodeGenWriteBarrier((&___x509_1), value);
	}

	inline static int32_t get_offset_of_hashAlgorithm_2() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___hashAlgorithm_2)); }
	inline String_t* get_hashAlgorithm_2() const { return ___hashAlgorithm_2; }
	inline String_t** get_address_of_hashAlgorithm_2() { return &___hashAlgorithm_2; }
	inline void set_hashAlgorithm_2(String_t* value)
	{
		___hashAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_2), value);
	}

	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___key_3)); }
	inline AsymmetricAlgorithm_t932037087 * get_key_3() const { return ___key_3; }
	inline AsymmetricAlgorithm_t932037087 ** get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(AsymmetricAlgorithm_t932037087 * value)
	{
		___key_3 = value;
		Il2CppCodeGenWriteBarrier((&___key_3), value);
	}

	inline static int32_t get_offset_of_authenticatedAttributes_4() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___authenticatedAttributes_4)); }
	inline ArrayList_t2718874744 * get_authenticatedAttributes_4() const { return ___authenticatedAttributes_4; }
	inline ArrayList_t2718874744 ** get_address_of_authenticatedAttributes_4() { return &___authenticatedAttributes_4; }
	inline void set_authenticatedAttributes_4(ArrayList_t2718874744 * value)
	{
		___authenticatedAttributes_4 = value;
		Il2CppCodeGenWriteBarrier((&___authenticatedAttributes_4), value);
	}

	inline static int32_t get_offset_of_unauthenticatedAttributes_5() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___unauthenticatedAttributes_5)); }
	inline ArrayList_t2718874744 * get_unauthenticatedAttributes_5() const { return ___unauthenticatedAttributes_5; }
	inline ArrayList_t2718874744 ** get_address_of_unauthenticatedAttributes_5() { return &___unauthenticatedAttributes_5; }
	inline void set_unauthenticatedAttributes_5(ArrayList_t2718874744 * value)
	{
		___unauthenticatedAttributes_5 = value;
		Il2CppCodeGenWriteBarrier((&___unauthenticatedAttributes_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___signature_6)); }
	inline ByteU5BU5D_t4116647657* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t4116647657* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_issuer_7() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___issuer_7)); }
	inline String_t* get_issuer_7() const { return ___issuer_7; }
	inline String_t** get_address_of_issuer_7() { return &___issuer_7; }
	inline void set_issuer_7(String_t* value)
	{
		___issuer_7 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_7), value);
	}

	inline static int32_t get_offset_of_serial_8() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___serial_8)); }
	inline ByteU5BU5D_t4116647657* get_serial_8() const { return ___serial_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_serial_8() { return &___serial_8; }
	inline void set_serial_8(ByteU5BU5D_t4116647657* value)
	{
		___serial_8 = value;
		Il2CppCodeGenWriteBarrier((&___serial_8), value);
	}

	inline static int32_t get_offset_of_ski_9() { return static_cast<int32_t>(offsetof(SignerInfo_t1701070648, ___ski_9)); }
	inline ByteU5BU5D_t4116647657* get_ski_9() const { return ___ski_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_ski_9() { return &___ski_9; }
	inline void set_ski_9(ByteU5BU5D_t4116647657* value)
	{
		___ski_9 = value;
		Il2CppCodeGenWriteBarrier((&___ski_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNERINFO_T1701070648_H
#ifndef STRONGNAME_T4093849377_H
#define STRONGNAME_T4093849377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName
struct  StrongName_t4093849377  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_publicKey_1() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___publicKey_1)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_1() const { return ___publicKey_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_1() { return &___publicKey_1; }
	inline void set_publicKey_1(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_1), value);
	}

	inline static int32_t get_offset_of_keyToken_2() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___keyToken_2)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_2() const { return ___keyToken_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_2() { return &___keyToken_2; }
	inline void set_keyToken_2(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_2), value);
	}

	inline static int32_t get_offset_of_tokenAlgorithm_3() { return static_cast<int32_t>(offsetof(StrongName_t4093849377, ___tokenAlgorithm_3)); }
	inline String_t* get_tokenAlgorithm_3() const { return ___tokenAlgorithm_3; }
	inline String_t** get_address_of_tokenAlgorithm_3() { return &___tokenAlgorithm_3; }
	inline void set_tokenAlgorithm_3(String_t* value)
	{
		___tokenAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&___tokenAlgorithm_3), value);
	}
};

struct StrongName_t4093849377_StaticFields
{
public:
	// System.Object Mono.Security.StrongName::lockObject
	RuntimeObject * ___lockObject_4;
	// System.Boolean Mono.Security.StrongName::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_lockObject_4() { return static_cast<int32_t>(offsetof(StrongName_t4093849377_StaticFields, ___lockObject_4)); }
	inline RuntimeObject * get_lockObject_4() const { return ___lockObject_4; }
	inline RuntimeObject ** get_address_of_lockObject_4() { return &___lockObject_4; }
	inline void set_lockObject_4(RuntimeObject * value)
	{
		___lockObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_4), value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(StrongName_t4093849377_StaticFields, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T4093849377_H
#ifndef STRONGNAMESIGNATURE_T211473023_H
#define STRONGNAMESIGNATURE_T211473023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName/StrongNameSignature
struct  StrongNameSignature_t211473023  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.StrongName/StrongNameSignature::hash
	ByteU5BU5D_t4116647657* ___hash_0;
	// System.Byte[] Mono.Security.StrongName/StrongNameSignature::signature
	ByteU5BU5D_t4116647657* ___signature_1;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::signaturePosition
	uint32_t ___signaturePosition_2;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::signatureLength
	uint32_t ___signatureLength_3;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::metadataPosition
	uint32_t ___metadataPosition_4;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::metadataLength
	uint32_t ___metadataLength_5;
	// System.Byte Mono.Security.StrongName/StrongNameSignature::cliFlag
	uint8_t ___cliFlag_6;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::cliFlagPosition
	uint32_t ___cliFlagPosition_7;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___hash_0)); }
	inline ByteU5BU5D_t4116647657* get_hash_0() const { return ___hash_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(ByteU5BU5D_t4116647657* value)
	{
		___hash_0 = value;
		Il2CppCodeGenWriteBarrier((&___hash_0), value);
	}

	inline static int32_t get_offset_of_signature_1() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___signature_1)); }
	inline ByteU5BU5D_t4116647657* get_signature_1() const { return ___signature_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_1() { return &___signature_1; }
	inline void set_signature_1(ByteU5BU5D_t4116647657* value)
	{
		___signature_1 = value;
		Il2CppCodeGenWriteBarrier((&___signature_1), value);
	}

	inline static int32_t get_offset_of_signaturePosition_2() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___signaturePosition_2)); }
	inline uint32_t get_signaturePosition_2() const { return ___signaturePosition_2; }
	inline uint32_t* get_address_of_signaturePosition_2() { return &___signaturePosition_2; }
	inline void set_signaturePosition_2(uint32_t value)
	{
		___signaturePosition_2 = value;
	}

	inline static int32_t get_offset_of_signatureLength_3() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___signatureLength_3)); }
	inline uint32_t get_signatureLength_3() const { return ___signatureLength_3; }
	inline uint32_t* get_address_of_signatureLength_3() { return &___signatureLength_3; }
	inline void set_signatureLength_3(uint32_t value)
	{
		___signatureLength_3 = value;
	}

	inline static int32_t get_offset_of_metadataPosition_4() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___metadataPosition_4)); }
	inline uint32_t get_metadataPosition_4() const { return ___metadataPosition_4; }
	inline uint32_t* get_address_of_metadataPosition_4() { return &___metadataPosition_4; }
	inline void set_metadataPosition_4(uint32_t value)
	{
		___metadataPosition_4 = value;
	}

	inline static int32_t get_offset_of_metadataLength_5() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___metadataLength_5)); }
	inline uint32_t get_metadataLength_5() const { return ___metadataLength_5; }
	inline uint32_t* get_address_of_metadataLength_5() { return &___metadataLength_5; }
	inline void set_metadataLength_5(uint32_t value)
	{
		___metadataLength_5 = value;
	}

	inline static int32_t get_offset_of_cliFlag_6() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___cliFlag_6)); }
	inline uint8_t get_cliFlag_6() const { return ___cliFlag_6; }
	inline uint8_t* get_address_of_cliFlag_6() { return &___cliFlag_6; }
	inline void set_cliFlag_6(uint8_t value)
	{
		___cliFlag_6 = value;
	}

	inline static int32_t get_offset_of_cliFlagPosition_7() { return static_cast<int32_t>(offsetof(StrongNameSignature_t211473023, ___cliFlagPosition_7)); }
	inline uint32_t get_cliFlagPosition_7() const { return ___cliFlagPosition_7; }
	inline uint32_t* get_address_of_cliFlagPosition_7() { return &___cliFlagPosition_7; }
	inline void set_cliFlagPosition_7(uint32_t value)
	{
		___cliFlagPosition_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMESIGNATURE_T211473023_H
#ifndef STRONGNAMEMANAGER_T515805818_H
#define STRONGNAMEMANAGER_T515805818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongNameManager
struct  StrongNameManager_t515805818  : public RuntimeObject
{
public:

public:
};

struct StrongNameManager_t515805818_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Security.StrongNameManager::mappings
	Hashtable_t1853889766 * ___mappings_0;
	// System.Collections.Hashtable Mono.Security.StrongNameManager::tokens
	Hashtable_t1853889766 * ___tokens_1;

public:
	inline static int32_t get_offset_of_mappings_0() { return static_cast<int32_t>(offsetof(StrongNameManager_t515805818_StaticFields, ___mappings_0)); }
	inline Hashtable_t1853889766 * get_mappings_0() const { return ___mappings_0; }
	inline Hashtable_t1853889766 ** get_address_of_mappings_0() { return &___mappings_0; }
	inline void set_mappings_0(Hashtable_t1853889766 * value)
	{
		___mappings_0 = value;
		Il2CppCodeGenWriteBarrier((&___mappings_0), value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(StrongNameManager_t515805818_StaticFields, ___tokens_1)); }
	inline Hashtable_t1853889766 * get_tokens_1() const { return ___tokens_1; }
	inline Hashtable_t1853889766 ** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(Hashtable_t1853889766 * value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier((&___tokens_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEMANAGER_T515805818_H
#ifndef ELEMENT_T207017422_H
#define ELEMENT_T207017422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongNameManager/Element
struct  Element_t207017422  : public RuntimeObject
{
public:
	// System.Collections.Hashtable Mono.Security.StrongNameManager/Element::assemblies
	Hashtable_t1853889766 * ___assemblies_0;

public:
	inline static int32_t get_offset_of_assemblies_0() { return static_cast<int32_t>(offsetof(Element_t207017422, ___assemblies_0)); }
	inline Hashtable_t1853889766 * get_assemblies_0() const { return ___assemblies_0; }
	inline Hashtable_t1853889766 ** get_address_of_assemblies_0() { return &___assemblies_0; }
	inline void set_assemblies_0(Hashtable_t1853889766 * value)
	{
		___assemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENT_T207017422_H
#ifndef URI_T722248887_H
#define URI_T722248887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Uri
struct  Uri_t722248887  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String Mono.Security.Uri::source
	String_t* ___source_1;
	// System.String Mono.Security.Uri::scheme
	String_t* ___scheme_2;
	// System.String Mono.Security.Uri::host
	String_t* ___host_3;
	// System.Int32 Mono.Security.Uri::port
	int32_t ___port_4;
	// System.String Mono.Security.Uri::path
	String_t* ___path_5;
	// System.String Mono.Security.Uri::query
	String_t* ___query_6;
	// System.String Mono.Security.Uri::fragment
	String_t* ___fragment_7;
	// System.String Mono.Security.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean Mono.Security.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean Mono.Security.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.String[] Mono.Security.Uri::segments
	StringU5BU5D_t1281789340* ___segments_11;
	// System.Boolean Mono.Security.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String Mono.Security.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String Mono.Security.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String Mono.Security.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 Mono.Security.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.Boolean Mono.Security.Uri::reduce
	bool ___reduce_17;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_segments_11() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___segments_11)); }
	inline StringU5BU5D_t1281789340* get_segments_11() const { return ___segments_11; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_11() { return &___segments_11; }
	inline void set_segments_11(StringU5BU5D_t1281789340* value)
	{
		___segments_11 = value;
		Il2CppCodeGenWriteBarrier((&___segments_11), value);
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_reduce_17() { return static_cast<int32_t>(offsetof(Uri_t722248887, ___reduce_17)); }
	inline bool get_reduce_17() const { return ___reduce_17; }
	inline bool* get_address_of_reduce_17() { return &___reduce_17; }
	inline void set_reduce_17(bool value)
	{
		___reduce_17 = value;
	}
};

struct Uri_t722248887_StaticFields
{
public:
	// System.String Mono.Security.Uri::hexUpperChars
	String_t* ___hexUpperChars_18;
	// System.String Mono.Security.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_19;
	// System.String Mono.Security.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_20;
	// System.String Mono.Security.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_21;
	// System.String Mono.Security.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_22;
	// System.String Mono.Security.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_23;
	// System.String Mono.Security.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_24;
	// System.String Mono.Security.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_25;
	// System.String Mono.Security.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_26;
	// System.String Mono.Security.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_27;
	// Mono.Security.Uri/UriScheme[] Mono.Security.Uri::schemes
	UriSchemeU5BU5D_t1281162915* ___schemes_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Uri::<>f__switch$map17
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map17_29;

public:
	inline static int32_t get_offset_of_hexUpperChars_18() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___hexUpperChars_18)); }
	inline String_t* get_hexUpperChars_18() const { return ___hexUpperChars_18; }
	inline String_t** get_address_of_hexUpperChars_18() { return &___hexUpperChars_18; }
	inline void set_hexUpperChars_18(String_t* value)
	{
		___hexUpperChars_18 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_18), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_19() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___SchemeDelimiter_19)); }
	inline String_t* get_SchemeDelimiter_19() const { return ___SchemeDelimiter_19; }
	inline String_t** get_address_of_SchemeDelimiter_19() { return &___SchemeDelimiter_19; }
	inline void set_SchemeDelimiter_19(String_t* value)
	{
		___SchemeDelimiter_19 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_20() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeFile_20)); }
	inline String_t* get_UriSchemeFile_20() const { return ___UriSchemeFile_20; }
	inline String_t** get_address_of_UriSchemeFile_20() { return &___UriSchemeFile_20; }
	inline void set_UriSchemeFile_20(String_t* value)
	{
		___UriSchemeFile_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_21() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeFtp_21)); }
	inline String_t* get_UriSchemeFtp_21() const { return ___UriSchemeFtp_21; }
	inline String_t** get_address_of_UriSchemeFtp_21() { return &___UriSchemeFtp_21; }
	inline void set_UriSchemeFtp_21(String_t* value)
	{
		___UriSchemeFtp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_22() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeGopher_22)); }
	inline String_t* get_UriSchemeGopher_22() const { return ___UriSchemeGopher_22; }
	inline String_t** get_address_of_UriSchemeGopher_22() { return &___UriSchemeGopher_22; }
	inline void set_UriSchemeGopher_22(String_t* value)
	{
		___UriSchemeGopher_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_23() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeHttp_23)); }
	inline String_t* get_UriSchemeHttp_23() const { return ___UriSchemeHttp_23; }
	inline String_t** get_address_of_UriSchemeHttp_23() { return &___UriSchemeHttp_23; }
	inline void set_UriSchemeHttp_23(String_t* value)
	{
		___UriSchemeHttp_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_24() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeHttps_24)); }
	inline String_t* get_UriSchemeHttps_24() const { return ___UriSchemeHttps_24; }
	inline String_t** get_address_of_UriSchemeHttps_24() { return &___UriSchemeHttps_24; }
	inline void set_UriSchemeHttps_24(String_t* value)
	{
		___UriSchemeHttps_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_25() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeMailto_25)); }
	inline String_t* get_UriSchemeMailto_25() const { return ___UriSchemeMailto_25; }
	inline String_t** get_address_of_UriSchemeMailto_25() { return &___UriSchemeMailto_25; }
	inline void set_UriSchemeMailto_25(String_t* value)
	{
		___UriSchemeMailto_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_26() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeNews_26)); }
	inline String_t* get_UriSchemeNews_26() const { return ___UriSchemeNews_26; }
	inline String_t** get_address_of_UriSchemeNews_26() { return &___UriSchemeNews_26; }
	inline void set_UriSchemeNews_26(String_t* value)
	{
		___UriSchemeNews_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_27() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___UriSchemeNntp_27)); }
	inline String_t* get_UriSchemeNntp_27() const { return ___UriSchemeNntp_27; }
	inline String_t** get_address_of_UriSchemeNntp_27() { return &___UriSchemeNntp_27; }
	inline void set_UriSchemeNntp_27(String_t* value)
	{
		___UriSchemeNntp_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_27), value);
	}

	inline static int32_t get_offset_of_schemes_28() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___schemes_28)); }
	inline UriSchemeU5BU5D_t1281162915* get_schemes_28() const { return ___schemes_28; }
	inline UriSchemeU5BU5D_t1281162915** get_address_of_schemes_28() { return &___schemes_28; }
	inline void set_schemes_28(UriSchemeU5BU5D_t1281162915* value)
	{
		___schemes_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map17_29() { return static_cast<int32_t>(offsetof(Uri_t722248887_StaticFields, ___U3CU3Ef__switchU24map17_29)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map17_29() const { return ___U3CU3Ef__switchU24map17_29; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map17_29() { return &___U3CU3Ef__switchU24map17_29; }
	inline void set_U3CU3Ef__switchU24map17_29(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map17_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map17_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T722248887_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#define CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t1962629119  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t3810425522 * ___m_text_3;

public:
	inline static int32_t get_offset_of_m_text_3() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119, ___m_text_3)); }
	inline TextInfo_t3810425522 * get_m_text_3() const { return ___m_text_3; }
	inline TextInfo_t3810425522 ** get_address_of_m_text_3() { return &___m_text_3; }
	inline void set_m_text_3(TextInfo_t3810425522 * value)
	{
		___m_text_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_3), value);
	}
};

struct CaseInsensitiveHashCodeProvider_t1962629119_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::singletonInvariant
	CaseInsensitiveHashCodeProvider_t1962629119 * ___singletonInvariant_0;
	// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::singleton
	CaseInsensitiveHashCodeProvider_t1962629119 * ___singleton_1;
	// System.Object System.Collections.CaseInsensitiveHashCodeProvider::sync
	RuntimeObject * ___sync_2;

public:
	inline static int32_t get_offset_of_singletonInvariant_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119_StaticFields, ___singletonInvariant_0)); }
	inline CaseInsensitiveHashCodeProvider_t1962629119 * get_singletonInvariant_0() const { return ___singletonInvariant_0; }
	inline CaseInsensitiveHashCodeProvider_t1962629119 ** get_address_of_singletonInvariant_0() { return &___singletonInvariant_0; }
	inline void set_singletonInvariant_0(CaseInsensitiveHashCodeProvider_t1962629119 * value)
	{
		___singletonInvariant_0 = value;
		Il2CppCodeGenWriteBarrier((&___singletonInvariant_0), value);
	}

	inline static int32_t get_offset_of_singleton_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119_StaticFields, ___singleton_1)); }
	inline CaseInsensitiveHashCodeProvider_t1962629119 * get_singleton_1() const { return ___singleton_1; }
	inline CaseInsensitiveHashCodeProvider_t1962629119 ** get_address_of_singleton_1() { return &___singleton_1; }
	inline void set_singleton_1(CaseInsensitiveHashCodeProvider_t1962629119 * value)
	{
		___singleton_1 = value;
		Il2CppCodeGenWriteBarrier((&___singleton_1), value);
	}

	inline static int32_t get_offset_of_sync_2() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1962629119_StaticFields, ___sync_2)); }
	inline RuntimeObject * get_sync_2() const { return ___sync_2; }
	inline RuntimeObject ** get_address_of_sync_2() { return &___sync_2; }
	inline void set_sync_2(RuntimeObject * value)
	{
		___sync_2 = value;
		Il2CppCodeGenWriteBarrier((&___sync_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_T1962629119_H
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
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
#endif // COLLECTIONBASE_T2727926298_H
#ifndef COLLECTIONDEBUGGERVIEW_T390662535_H
#define COLLECTIONDEBUGGERVIEW_T390662535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionDebuggerView
struct  CollectionDebuggerView_t390662535  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.Collections.CollectionDebuggerView::c
	RuntimeObject* ___c_0;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(CollectionDebuggerView_t390662535, ___c_0)); }
	inline RuntimeObject* get_c_0() const { return ___c_0; }
	inline RuntimeObject** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(RuntimeObject* value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((&___c_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONDEBUGGERVIEW_T390662535_H
#ifndef COMPARER_T1912461351_H
#define COMPARER_T1912461351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t1912461351  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_t1092934962 * ___m_compareInfo_2;

public:
	inline static int32_t get_offset_of_m_compareInfo_2() { return static_cast<int32_t>(offsetof(Comparer_t1912461351, ___m_compareInfo_2)); }
	inline CompareInfo_t1092934962 * get_m_compareInfo_2() const { return ___m_compareInfo_2; }
	inline CompareInfo_t1092934962 ** get_address_of_m_compareInfo_2() { return &___m_compareInfo_2; }
	inline void set_m_compareInfo_2(CompareInfo_t1092934962 * value)
	{
		___m_compareInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_2), value);
	}
};

struct Comparer_t1912461351_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t1912461351 * ___Default_0;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t1912461351 * ___DefaultInvariant_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(Comparer_t1912461351_StaticFields, ___Default_0)); }
	inline Comparer_t1912461351 * get_Default_0() const { return ___Default_0; }
	inline Comparer_t1912461351 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(Comparer_t1912461351 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_1() { return static_cast<int32_t>(offsetof(Comparer_t1912461351_StaticFields, ___DefaultInvariant_1)); }
	inline Comparer_t1912461351 * get_DefaultInvariant_1() const { return ___DefaultInvariant_1; }
	inline Comparer_t1912461351 ** get_address_of_DefaultInvariant_1() { return &___DefaultInvariant_1; }
	inline void set_DefaultInvariant_1(Comparer_t1912461351 * value)
	{
		___DefaultInvariant_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultInvariant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_T1912461351_H
#ifndef DICTIONARYBASE_T3062914256_H
#define DICTIONARYBASE_T3062914256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryBase
struct  DictionaryBase_t3062914256  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.DictionaryBase::hashtable
	Hashtable_t1853889766 * ___hashtable_0;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(DictionaryBase_t3062914256, ___hashtable_0)); }
	inline Hashtable_t1853889766 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t1853889766 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYBASE_T3062914256_H
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
#ifndef CASEINSENSITIVECOMPARER_T3670035800_H
#define CASEINSENSITIVECOMPARER_T3670035800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t3670035800  : public RuntimeObject
{
public:
	// System.Globalization.CultureInfo System.Collections.CaseInsensitiveComparer::culture
	CultureInfo_t4157843068 * ___culture_2;

public:
	inline static int32_t get_offset_of_culture_2() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t3670035800, ___culture_2)); }
	inline CultureInfo_t4157843068 * get_culture_2() const { return ___culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_culture_2() { return &___culture_2; }
	inline void set_culture_2(CultureInfo_t4157843068 * value)
	{
		___culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___culture_2), value);
	}
};

struct CaseInsensitiveComparer_t3670035800_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer System.Collections.CaseInsensitiveComparer::defaultComparer
	CaseInsensitiveComparer_t3670035800 * ___defaultComparer_0;
	// System.Collections.CaseInsensitiveComparer System.Collections.CaseInsensitiveComparer::defaultInvariantComparer
	CaseInsensitiveComparer_t3670035800 * ___defaultInvariantComparer_1;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t3670035800_StaticFields, ___defaultComparer_0)); }
	inline CaseInsensitiveComparer_t3670035800 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline CaseInsensitiveComparer_t3670035800 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(CaseInsensitiveComparer_t3670035800 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}

	inline static int32_t get_offset_of_defaultInvariantComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t3670035800_StaticFields, ___defaultInvariantComparer_1)); }
	inline CaseInsensitiveComparer_t3670035800 * get_defaultInvariantComparer_1() const { return ___defaultInvariantComparer_1; }
	inline CaseInsensitiveComparer_t3670035800 ** get_address_of_defaultInvariantComparer_1() { return &___defaultInvariantComparer_1; }
	inline void set_defaultInvariantComparer_1(CaseInsensitiveComparer_t3670035800 * value)
	{
		___defaultInvariantComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultInvariantComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_T3670035800_H
#ifndef ARRAYLISTENUMERATOR_T3581104388_H
#define ARRAYLISTENUMERATOR_T3581104388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListEnumerator
struct  ArrayListEnumerator_t3581104388  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList/ArrayListEnumerator::m_Pos
	int32_t ___m_Pos_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumerator::m_Index
	int32_t ___m_Index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumerator::m_Count
	int32_t ___m_Count_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumerator::m_Current
	RuntimeObject * ___m_Current_3;
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumerator::m_List
	ArrayList_t2718874744 * ___m_List_4;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumerator::m_ExpectedStateChanges
	int32_t ___m_ExpectedStateChanges_5;

public:
	inline static int32_t get_offset_of_m_Pos_0() { return static_cast<int32_t>(offsetof(ArrayListEnumerator_t3581104388, ___m_Pos_0)); }
	inline int32_t get_m_Pos_0() const { return ___m_Pos_0; }
	inline int32_t* get_address_of_m_Pos_0() { return &___m_Pos_0; }
	inline void set_m_Pos_0(int32_t value)
	{
		___m_Pos_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(ArrayListEnumerator_t3581104388, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Count_2() { return static_cast<int32_t>(offsetof(ArrayListEnumerator_t3581104388, ___m_Count_2)); }
	inline int32_t get_m_Count_2() const { return ___m_Count_2; }
	inline int32_t* get_address_of_m_Count_2() { return &___m_Count_2; }
	inline void set_m_Count_2(int32_t value)
	{
		___m_Count_2 = value;
	}

	inline static int32_t get_offset_of_m_Current_3() { return static_cast<int32_t>(offsetof(ArrayListEnumerator_t3581104388, ___m_Current_3)); }
	inline RuntimeObject * get_m_Current_3() const { return ___m_Current_3; }
	inline RuntimeObject ** get_address_of_m_Current_3() { return &___m_Current_3; }
	inline void set_m_Current_3(RuntimeObject * value)
	{
		___m_Current_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Current_3), value);
	}

	inline static int32_t get_offset_of_m_List_4() { return static_cast<int32_t>(offsetof(ArrayListEnumerator_t3581104388, ___m_List_4)); }
	inline ArrayList_t2718874744 * get_m_List_4() const { return ___m_List_4; }
	inline ArrayList_t2718874744 ** get_address_of_m_List_4() { return &___m_List_4; }
	inline void set_m_List_4(ArrayList_t2718874744 * value)
	{
		___m_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_4), value);
	}

	inline static int32_t get_offset_of_m_ExpectedStateChanges_5() { return static_cast<int32_t>(offsetof(ArrayListEnumerator_t3581104388, ___m_ExpectedStateChanges_5)); }
	inline int32_t get_m_ExpectedStateChanges_5() const { return ___m_ExpectedStateChanges_5; }
	inline int32_t* get_address_of_m_ExpectedStateChanges_5() { return &___m_ExpectedStateChanges_5; }
	inline void set_m_ExpectedStateChanges_5(int32_t value)
	{
		___m_ExpectedStateChanges_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTENUMERATOR_T3581104388_H
#ifndef SIMPLEENUMERATOR_T4287166116_H
#define SIMPLEENUMERATOR_T4287166116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SimpleEnumerator
struct  SimpleEnumerator_t4287166116  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/SimpleEnumerator::list
	ArrayList_t2718874744 * ___list_0;
	// System.Int32 System.Collections.ArrayList/SimpleEnumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/SimpleEnumerator::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/SimpleEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t4287166116, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t4287166116, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t4287166116, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t4287166116, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

struct SimpleEnumerator_t4287166116_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/SimpleEnumerator::endFlag
	RuntimeObject * ___endFlag_4;

public:
	inline static int32_t get_offset_of_endFlag_4() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t4287166116_StaticFields, ___endFlag_4)); }
	inline RuntimeObject * get_endFlag_4() const { return ___endFlag_4; }
	inline RuntimeObject ** get_address_of_endFlag_4() { return &___endFlag_4; }
	inline void set_endFlag_4(RuntimeObject * value)
	{
		___endFlag_4 = value;
		Il2CppCodeGenWriteBarrier((&___endFlag_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEENUMERATOR_T4287166116_H
#ifndef ENUMERATORWITHRANGE_T3217317453_H
#define ENUMERATORWITHRANGE_T3217317453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListAdapter/EnumeratorWithRange
struct  EnumeratorWithRange_t3217317453  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList/ArrayListAdapter/EnumeratorWithRange::m_StartIndex
	int32_t ___m_StartIndex_0;
	// System.Int32 System.Collections.ArrayList/ArrayListAdapter/EnumeratorWithRange::m_Count
	int32_t ___m_Count_1;
	// System.Int32 System.Collections.ArrayList/ArrayListAdapter/EnumeratorWithRange::m_MaxCount
	int32_t ___m_MaxCount_2;
	// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListAdapter/EnumeratorWithRange::m_Enumerator
	RuntimeObject* ___m_Enumerator_3;

public:
	inline static int32_t get_offset_of_m_StartIndex_0() { return static_cast<int32_t>(offsetof(EnumeratorWithRange_t3217317453, ___m_StartIndex_0)); }
	inline int32_t get_m_StartIndex_0() const { return ___m_StartIndex_0; }
	inline int32_t* get_address_of_m_StartIndex_0() { return &___m_StartIndex_0; }
	inline void set_m_StartIndex_0(int32_t value)
	{
		___m_StartIndex_0 = value;
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(EnumeratorWithRange_t3217317453, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxCount_2() { return static_cast<int32_t>(offsetof(EnumeratorWithRange_t3217317453, ___m_MaxCount_2)); }
	inline int32_t get_m_MaxCount_2() const { return ___m_MaxCount_2; }
	inline int32_t* get_address_of_m_MaxCount_2() { return &___m_MaxCount_2; }
	inline void set_m_MaxCount_2(int32_t value)
	{
		___m_MaxCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Enumerator_3() { return static_cast<int32_t>(offsetof(EnumeratorWithRange_t3217317453, ___m_Enumerator_3)); }
	inline RuntimeObject* get_m_Enumerator_3() const { return ___m_Enumerator_3; }
	inline RuntimeObject** get_address_of_m_Enumerator_3() { return &___m_Enumerator_3; }
	inline void set_m_Enumerator_3(RuntimeObject* value)
	{
		___m_Enumerator_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Enumerator_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATORWITHRANGE_T3217317453_H
#ifndef LISTWRAPPER_T2823077147_H
#define LISTWRAPPER_T2823077147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ListWrapper
struct  ListWrapper_t2823077147  : public RuntimeObject
{
public:
	// System.Collections.IList System.Collections.ArrayList/ListWrapper::m_InnerList
	RuntimeObject* ___m_InnerList_0;

public:
	inline static int32_t get_offset_of_m_InnerList_0() { return static_cast<int32_t>(offsetof(ListWrapper_t2823077147, ___m_InnerList_0)); }
	inline RuntimeObject* get_m_InnerList_0() const { return ___m_InnerList_0; }
	inline RuntimeObject** get_address_of_m_InnerList_0() { return &___m_InnerList_0; }
	inline void set_m_InnerList_0(RuntimeObject* value)
	{
		___m_InnerList_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_InnerList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTWRAPPER_T2823077147_H
#ifndef BITARRAY_T4087883509_H
#define BITARRAY_T4087883509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.BitArray
struct  BitArray_t4087883509  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.BitArray::m_array
	Int32U5BU5D_t385246372* ___m_array_0;
	// System.Int32 System.Collections.BitArray::m_length
	int32_t ___m_length_1;
	// System.Int32 System.Collections.BitArray::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(BitArray_t4087883509, ___m_array_0)); }
	inline Int32U5BU5D_t385246372* get_m_array_0() const { return ___m_array_0; }
	inline Int32U5BU5D_t385246372** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(Int32U5BU5D_t385246372* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_0), value);
	}

	inline static int32_t get_offset_of_m_length_1() { return static_cast<int32_t>(offsetof(BitArray_t4087883509, ___m_length_1)); }
	inline int32_t get_m_length_1() const { return ___m_length_1; }
	inline int32_t* get_address_of_m_length_1() { return &___m_length_1; }
	inline void set_m_length_1(int32_t value)
	{
		___m_length_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(BitArray_t4087883509, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITARRAY_T4087883509_H
#ifndef BITARRAYENUMERATOR_T893496218_H
#define BITARRAYENUMERATOR_T893496218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.BitArray/BitArrayEnumerator
struct  BitArrayEnumerator_t893496218  : public RuntimeObject
{
public:
	// System.Collections.BitArray System.Collections.BitArray/BitArrayEnumerator::_bitArray
	BitArray_t4087883509 * ____bitArray_0;
	// System.Boolean System.Collections.BitArray/BitArrayEnumerator::_current
	bool ____current_1;
	// System.Int32 System.Collections.BitArray/BitArrayEnumerator::_index
	int32_t ____index_2;
	// System.Int32 System.Collections.BitArray/BitArrayEnumerator::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__bitArray_0() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t893496218, ____bitArray_0)); }
	inline BitArray_t4087883509 * get__bitArray_0() const { return ____bitArray_0; }
	inline BitArray_t4087883509 ** get_address_of__bitArray_0() { return &____bitArray_0; }
	inline void set__bitArray_0(BitArray_t4087883509 * value)
	{
		____bitArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____bitArray_0), value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t893496218, ____current_1)); }
	inline bool get__current_1() const { return ____current_1; }
	inline bool* get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(bool value)
	{
		____current_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t893496218, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(BitArrayEnumerator_t893496218, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITARRAYENUMERATOR_T893496218_H
#ifndef SIGNEDDATA_T2897824243_H
#define SIGNEDDATA_T2897824243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/SignedData
struct  SignedData_t2897824243  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignedData::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignedData::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::contentInfo
	ContentInfo_t3218159895 * ___contentInfo_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::certs
	X509CertificateCollection_t1542168549 * ___certs_3;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignedData::crls
	ArrayList_t2718874744 * ___crls_4;
	// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::signerInfo
	SignerInfo_t1701070648 * ___signerInfo_5;
	// System.Boolean Mono.Security.PKCS7/SignedData::mda
	bool ___mda_6;
	// System.Boolean Mono.Security.PKCS7/SignedData::signed
	bool ___signed_7;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashAlgorithm_1), value);
	}

	inline static int32_t get_offset_of_contentInfo_2() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___contentInfo_2)); }
	inline ContentInfo_t3218159895 * get_contentInfo_2() const { return ___contentInfo_2; }
	inline ContentInfo_t3218159895 ** get_address_of_contentInfo_2() { return &___contentInfo_2; }
	inline void set_contentInfo_2(ContentInfo_t3218159895 * value)
	{
		___contentInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentInfo_2), value);
	}

	inline static int32_t get_offset_of_certs_3() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___certs_3)); }
	inline X509CertificateCollection_t1542168549 * get_certs_3() const { return ___certs_3; }
	inline X509CertificateCollection_t1542168549 ** get_address_of_certs_3() { return &___certs_3; }
	inline void set_certs_3(X509CertificateCollection_t1542168549 * value)
	{
		___certs_3 = value;
		Il2CppCodeGenWriteBarrier((&___certs_3), value);
	}

	inline static int32_t get_offset_of_crls_4() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___crls_4)); }
	inline ArrayList_t2718874744 * get_crls_4() const { return ___crls_4; }
	inline ArrayList_t2718874744 ** get_address_of_crls_4() { return &___crls_4; }
	inline void set_crls_4(ArrayList_t2718874744 * value)
	{
		___crls_4 = value;
		Il2CppCodeGenWriteBarrier((&___crls_4), value);
	}

	inline static int32_t get_offset_of_signerInfo_5() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___signerInfo_5)); }
	inline SignerInfo_t1701070648 * get_signerInfo_5() const { return ___signerInfo_5; }
	inline SignerInfo_t1701070648 ** get_address_of_signerInfo_5() { return &___signerInfo_5; }
	inline void set_signerInfo_5(SignerInfo_t1701070648 * value)
	{
		___signerInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___signerInfo_5), value);
	}

	inline static int32_t get_offset_of_mda_6() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___mda_6)); }
	inline bool get_mda_6() const { return ___mda_6; }
	inline bool* get_address_of_mda_6() { return &___mda_6; }
	inline void set_mda_6(bool value)
	{
		___mda_6 = value;
	}

	inline static int32_t get_offset_of_signed_7() { return static_cast<int32_t>(offsetof(SignedData_t2897824243, ___signed_7)); }
	inline bool get_signed_7() const { return ___signed_7; }
	inline bool* get_address_of_signed_7() { return &___signed_7; }
	inline void set_signed_7(bool value)
	{
		___signed_7 = value;
	}
};

struct SignedData_t2897824243_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.PKCS7/SignedData::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_8() { return static_cast<int32_t>(offsetof(SignedData_t2897824243_StaticFields, ___U3CU3Ef__switchU24map16_8)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_8() const { return ___U3CU3Ef__switchU24map16_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_8() { return &___U3CU3Ef__switchU24map16_8; }
	inline void set_U3CU3Ef__switchU24map16_8(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNEDDATA_T2897824243_H
#ifndef ATTRIBUTETYPEANDVALUE_T3245693428_H
#define ATTRIBUTETYPEANDVALUE_T3245693428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/AttributeTypeAndValue
struct  AttributeTypeAndValue_t3245693428  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520/AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;

public:
	inline static int32_t get_offset_of_oid_0() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___oid_0)); }
	inline String_t* get_oid_0() const { return ___oid_0; }
	inline String_t** get_address_of_oid_0() { return &___oid_0; }
	inline void set_oid_0(String_t* value)
	{
		___oid_0 = value;
		Il2CppCodeGenWriteBarrier((&___oid_0), value);
	}

	inline static int32_t get_offset_of_attrValue_1() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___attrValue_1)); }
	inline String_t* get_attrValue_1() const { return ___attrValue_1; }
	inline String_t** get_address_of_attrValue_1() { return &___attrValue_1; }
	inline void set_attrValue_1(String_t* value)
	{
		___attrValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValue_1), value);
	}

	inline static int32_t get_offset_of_upperBound_2() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___upperBound_2)); }
	inline int32_t get_upperBound_2() const { return ___upperBound_2; }
	inline int32_t* get_address_of_upperBound_2() { return &___upperBound_2; }
	inline void set_upperBound_2(int32_t value)
	{
		___upperBound_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___encoding_3)); }
	inline uint8_t get_encoding_3() const { return ___encoding_3; }
	inline uint8_t* get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(uint8_t value)
	{
		___encoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPEANDVALUE_T3245693428_H
#ifndef ASN1_T2114160832_H
#define ASN1_T2114160832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2114160832  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t4116647657* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t2718874744 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2114160832, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2114160832, ___m_aValue_1)); }
	inline ByteU5BU5D_t4116647657* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t4116647657* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2114160832, ___elist_2)); }
	inline ArrayList_t2718874744 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t2718874744 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t2718874744 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2114160832_H
#ifndef ASN1CONVERT_T2839890152_H
#define ASN1CONVERT_T2839890152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2839890152  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2839890152_H
#ifndef BITCONVERTERLE_T2108532978_H
#define BITCONVERTERLE_T2108532978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2108532978  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2108532978_H
#ifndef PKCS7_T1860834338_H
#define PKCS7_T1860834338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t1860834338  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T1860834338_H
#ifndef X520_T3325039438_H
#define X520_T3325039438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520
struct  X520_t3325039438  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X520_T3325039438_H
#ifndef RECIPIENTINFO_T969816850_H
#define RECIPIENTINFO_T969816850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/RecipientInfo
struct  RecipientInfo_t969816850  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.PKCS7/RecipientInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.PKCS7/RecipientInfo::_oid
	String_t* ____oid_1;
	// System.Byte[] Mono.Security.PKCS7/RecipientInfo::_key
	ByteU5BU5D_t4116647657* ____key_2;
	// System.Byte[] Mono.Security.PKCS7/RecipientInfo::_ski
	ByteU5BU5D_t4116647657* ____ski_3;
	// System.String Mono.Security.PKCS7/RecipientInfo::_issuer
	String_t* ____issuer_4;
	// System.Byte[] Mono.Security.PKCS7/RecipientInfo::_serial
	ByteU5BU5D_t4116647657* ____serial_5;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(RecipientInfo_t969816850, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__oid_1() { return static_cast<int32_t>(offsetof(RecipientInfo_t969816850, ____oid_1)); }
	inline String_t* get__oid_1() const { return ____oid_1; }
	inline String_t** get_address_of__oid_1() { return &____oid_1; }
	inline void set__oid_1(String_t* value)
	{
		____oid_1 = value;
		Il2CppCodeGenWriteBarrier((&____oid_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(RecipientInfo_t969816850, ____key_2)); }
	inline ByteU5BU5D_t4116647657* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t4116647657* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__ski_3() { return static_cast<int32_t>(offsetof(RecipientInfo_t969816850, ____ski_3)); }
	inline ByteU5BU5D_t4116647657* get__ski_3() const { return ____ski_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__ski_3() { return &____ski_3; }
	inline void set__ski_3(ByteU5BU5D_t4116647657* value)
	{
		____ski_3 = value;
		Il2CppCodeGenWriteBarrier((&____ski_3), value);
	}

	inline static int32_t get_offset_of__issuer_4() { return static_cast<int32_t>(offsetof(RecipientInfo_t969816850, ____issuer_4)); }
	inline String_t* get__issuer_4() const { return ____issuer_4; }
	inline String_t** get_address_of__issuer_4() { return &____issuer_4; }
	inline void set__issuer_4(String_t* value)
	{
		____issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&____issuer_4), value);
	}

	inline static int32_t get_offset_of__serial_5() { return static_cast<int32_t>(offsetof(RecipientInfo_t969816850, ____serial_5)); }
	inline ByteU5BU5D_t4116647657* get__serial_5() const { return ____serial_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__serial_5() { return &____serial_5; }
	inline void set__serial_5(ByteU5BU5D_t4116647657* value)
	{
		____serial_5 = value;
		Il2CppCodeGenWriteBarrier((&____serial_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECIPIENTINFO_T969816850_H
#ifndef ENVELOPEDDATA_T4268908741_H
#define ENVELOPEDDATA_T4268908741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EnvelopedData
struct  EnvelopedData_t4268908741  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EnvelopedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EnvelopedData::_content
	ContentInfo_t3218159895 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EnvelopedData::_encryptionAlgorithm
	ContentInfo_t3218159895 * ____encryptionAlgorithm_2;
	// System.Collections.ArrayList Mono.Security.PKCS7/EnvelopedData::_recipientInfos
	ArrayList_t2718874744 * ____recipientInfos_3;
	// System.Byte[] Mono.Security.PKCS7/EnvelopedData::_encrypted
	ByteU5BU5D_t4116647657* ____encrypted_4;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EnvelopedData_t4268908741, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EnvelopedData_t4268908741, ____content_1)); }
	inline ContentInfo_t3218159895 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t3218159895 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t3218159895 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EnvelopedData_t4268908741, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t3218159895 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t3218159895 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t3218159895 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__recipientInfos_3() { return static_cast<int32_t>(offsetof(EnvelopedData_t4268908741, ____recipientInfos_3)); }
	inline ArrayList_t2718874744 * get__recipientInfos_3() const { return ____recipientInfos_3; }
	inline ArrayList_t2718874744 ** get_address_of__recipientInfos_3() { return &____recipientInfos_3; }
	inline void set__recipientInfos_3(ArrayList_t2718874744 * value)
	{
		____recipientInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&____recipientInfos_3), value);
	}

	inline static int32_t get_offset_of__encrypted_4() { return static_cast<int32_t>(offsetof(EnvelopedData_t4268908741, ____encrypted_4)); }
	inline ByteU5BU5D_t4116647657* get__encrypted_4() const { return ____encrypted_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__encrypted_4() { return &____encrypted_4; }
	inline void set__encrypted_4(ByteU5BU5D_t4116647657* value)
	{
		____encrypted_4 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVELOPEDDATA_T4268908741_H
#ifndef ENCRYPTEDDATA_T3577548732_H
#define ENCRYPTEDDATA_T3577548732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t3577548732  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t3218159895 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t3218159895 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t4116647657* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____content_1)); }
	inline ContentInfo_t3218159895 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t3218159895 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t3218159895 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t3218159895 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t3218159895 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t3218159895 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548732, ____encrypted_3)); }
	inline ByteU5BU5D_t4116647657* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t4116647657* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T3577548732_H
#ifndef CONTENTINFO_T3218159895_H
#define CONTENTINFO_T3218159895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t3218159895  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t2114160832 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159895, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159895, ___content_1)); }
	inline ASN1_t2114160832 * get_content_1() const { return ___content_1; }
	inline ASN1_t2114160832 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t2114160832 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T3218159895_H
#ifndef OID_T1102929668_H
#define OID_T1102929668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/Oid
struct  Oid_t1102929668  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T1102929668_H
#ifndef SYNCHRONIZEDLISTWRAPPER_T3986429772_H
#define SYNCHRONIZEDLISTWRAPPER_T3986429772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SynchronizedListWrapper
struct  SynchronizedListWrapper_t3986429772  : public ListWrapper_t2823077147
{
public:
	// System.Object System.Collections.ArrayList/SynchronizedListWrapper::m_SyncRoot
	RuntimeObject * ___m_SyncRoot_1;

public:
	inline static int32_t get_offset_of_m_SyncRoot_1() { return static_cast<int32_t>(offsetof(SynchronizedListWrapper_t3986429772, ___m_SyncRoot_1)); }
	inline RuntimeObject * get_m_SyncRoot_1() const { return ___m_SyncRoot_1; }
	inline RuntimeObject ** get_address_of_m_SyncRoot_1() { return &___m_SyncRoot_1; }
	inline void set_m_SyncRoot_1(RuntimeObject * value)
	{
		___m_SyncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SyncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDLISTWRAPPER_T3986429772_H
#ifndef ORGANIZATIONALUNITNAME_T1968218587_H
#define ORGANIZATIONALUNITNAME_T1968218587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationalUnitName
struct  OrganizationalUnitName_t1968218587  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONALUNITNAME_T1968218587_H
#ifndef EMAILADDRESS_T484866411_H
#define EMAILADDRESS_T484866411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/EmailAddress
struct  EmailAddress_t484866411  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMAILADDRESS_T484866411_H
#ifndef DOMAINCOMPONENT_T1597975113_H
#define DOMAINCOMPONENT_T1597975113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DomainComponent
struct  DomainComponent_t1597975113  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOMAINCOMPONENT_T1597975113_H
#ifndef FIXEDSIZELISTWRAPPER_T2506951401_H
#define FIXEDSIZELISTWRAPPER_T2506951401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/FixedSizeListWrapper
struct  FixedSizeListWrapper_t2506951401  : public ListWrapper_t2823077147
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDSIZELISTWRAPPER_T2506951401_H
#ifndef ARRAYLISTWRAPPER_T240606758_H
#define ARRAYLISTWRAPPER_T240606758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListWrapper
struct  ArrayListWrapper_t240606758  : public ArrayList_t2718874744
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListWrapper::m_InnerArrayList
	ArrayList_t2718874744 * ___m_InnerArrayList_5;

public:
	inline static int32_t get_offset_of_m_InnerArrayList_5() { return static_cast<int32_t>(offsetof(ArrayListWrapper_t240606758, ___m_InnerArrayList_5)); }
	inline ArrayList_t2718874744 * get_m_InnerArrayList_5() const { return ___m_InnerArrayList_5; }
	inline ArrayList_t2718874744 ** get_address_of_m_InnerArrayList_5() { return &___m_InnerArrayList_5; }
	inline void set_m_InnerArrayList_5(ArrayList_t2718874744 * value)
	{
		___m_InnerArrayList_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_InnerArrayList_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTWRAPPER_T240606758_H
#ifndef ORGANIZATIONNAME_T857038441_H
#define ORGANIZATIONNAME_T857038441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationName
struct  OrganizationName_t857038441  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONNAME_T857038441_H
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
#ifndef NAME_T3626842933_H
#define NAME_T3626842933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Name
struct  Name_t3626842933  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAME_T3626842933_H
#ifndef COMMONNAME_T2882805359_H
#define COMMONNAME_T2882805359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CommonName
struct  CommonName_t2882805359  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONNAME_T2882805359_H
#ifndef SERIALNUMBER_T3812427306_H
#define SERIALNUMBER_T3812427306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/SerialNumber
struct  SerialNumber_t3812427306  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALNUMBER_T3812427306_H
#ifndef LOCALITYNAME_T1511149830_H
#define LOCALITYNAME_T1511149830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/LocalityName
struct  LocalityName_t1511149830  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALITYNAME_T1511149830_H
#ifndef STATEORPROVINCENAME_T1916702996_H
#define STATEORPROVINCENAME_T1916702996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/StateOrProvinceName
struct  StateOrProvinceName_t1916702996  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEORPROVINCENAME_T1916702996_H
#ifndef USERID_T70549454_H
#define USERID_T70549454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/UserId
struct  UserId_t70549454  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERID_T70549454_H
#ifndef LINK_T544317964_H
#define LINK_T544317964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Link
struct  Link_t544317964 
{
public:
	// System.Int32 System.Collections.Generic.Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t544317964, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t544317964, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T544317964_H
#ifndef DNQUALIFIER_T2746394302_H
#define DNQUALIFIER_T2746394302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DnQualifier
struct  DnQualifier_t2746394302  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNQUALIFIER_T2746394302_H
#ifndef SWAPCONVERTER_T2767250681_H
#define SWAPCONVERTER_T2767250681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.DataConverter/SwapConverter
struct  SwapConverter_t2767250681  : public DataConverter_t1070999395
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPCONVERTER_T2767250681_H
#ifndef COPYCONVERTER_T3429306790_H
#define COPYCONVERTER_T3429306790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.DataConverter/CopyConverter
struct  CopyConverter_t3429306790  : public DataConverter_t1070999395
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COPYCONVERTER_T3429306790_H
#ifndef SURNAME_T4221813936_H
#define SURNAME_T4221813936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Surname
struct  Surname_t4221813936  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURNAME_T4221813936_H
#ifndef GIVENNAME_T3114888956_H
#define GIVENNAME_T3114888956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/GivenName
struct  GivenName_t3114888956  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIVENNAME_T3114888956_H
#ifndef INITIAL_T2745963796_H
#define INITIAL_T2745963796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Initial
struct  Initial_t2745963796  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIAL_T2745963796_H
#ifndef SECURITYPARSER_T4124480077_H
#define SECURITYPARSER_T4124480077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SecurityParser
struct  SecurityParser_t4124480077  : public SmallXmlParser_t973787839
{
public:
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1046076091 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1046076091 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2329662280 * ___stack_15;

public:
	inline static int32_t get_offset_of_root_13() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480077, ___root_13)); }
	inline SecurityElement_t1046076091 * get_root_13() const { return ___root_13; }
	inline SecurityElement_t1046076091 ** get_address_of_root_13() { return &___root_13; }
	inline void set_root_13(SecurityElement_t1046076091 * value)
	{
		___root_13 = value;
		Il2CppCodeGenWriteBarrier((&___root_13), value);
	}

	inline static int32_t get_offset_of_current_14() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480077, ___current_14)); }
	inline SecurityElement_t1046076091 * get_current_14() const { return ___current_14; }
	inline SecurityElement_t1046076091 ** get_address_of_current_14() { return &___current_14; }
	inline void set_current_14(SecurityElement_t1046076091 * value)
	{
		___current_14 = value;
		Il2CppCodeGenWriteBarrier((&___current_14), value);
	}

	inline static int32_t get_offset_of_stack_15() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480077, ___stack_15)); }
	inline Stack_t2329662280 * get_stack_15() const { return ___stack_15; }
	inline Stack_t2329662280 ** get_address_of_stack_15() { return &___stack_15; }
	inline void set_stack_15(Stack_t2329662280 * value)
	{
		___stack_15 = value;
		Il2CppCodeGenWriteBarrier((&___stack_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPARSER_T4124480077_H
#ifndef COUNTRYNAME_T4165042092_H
#define COUNTRYNAME_T4165042092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CountryName
struct  CountryName_t4165042092  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTRYNAME_T4165042092_H
#ifndef ARRAYLISTADAPTER_T3495528812_H
#define ARRAYLISTADAPTER_T3495528812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListAdapter
struct  ArrayListAdapter_t3495528812  : public ArrayList_t2718874744
{
public:
	// System.Collections.IList System.Collections.ArrayList/ArrayListAdapter::m_Adaptee
	RuntimeObject* ___m_Adaptee_5;

public:
	inline static int32_t get_offset_of_m_Adaptee_5() { return static_cast<int32_t>(offsetof(ArrayListAdapter_t3495528812, ___m_Adaptee_5)); }
	inline RuntimeObject* get_m_Adaptee_5() const { return ___m_Adaptee_5; }
	inline RuntimeObject** get_address_of_m_Adaptee_5() { return &___m_Adaptee_5; }
	inline void set_m_Adaptee_5(RuntimeObject* value)
	{
		___m_Adaptee_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Adaptee_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTADAPTER_T3495528812_H
#ifndef URISCHEME_T2867806342_H
#define URISCHEME_T2867806342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Uri/UriScheme
struct  UriScheme_t2867806342 
{
public:
	// System.String Mono.Security.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String Mono.Security.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 Mono.Security.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t2867806342, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t2867806342, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t2867806342, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t2867806342_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t2867806342_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T2867806342_H
#ifndef OID_T2014794921_H
#define OID_T2014794921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Oid
struct  Oid_t2014794921  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T2014794921_H
#ifndef TITLE_T2026585634_H
#define TITLE_T2026585634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Title
struct  Title_t2026585634  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLE_T2026585634_H
#ifndef STRONGNAMEOPTIONS_T1229641522_H
#define STRONGNAMEOPTIONS_T1229641522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName/StrongNameOptions
struct  StrongNameOptions_t1229641522 
{
public:
	// System.Int32 Mono.Security.StrongName/StrongNameOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StrongNameOptions_t1229641522, ___value___1)); }
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
#endif // STRONGNAMEOPTIONS_T1229641522_H
#ifndef URIPARTIAL_T378645473_H
#define URIPARTIAL_T378645473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.UriPartial
struct  UriPartial_t378645473 
{
public:
	// System.Int32 Mono.Security.UriPartial::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriPartial_t378645473, ___value___1)); }
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
#endif // URIPARTIAL_T378645473_H
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifndef SYNCHRONIZEDARRAYLISTWRAPPER_T2283757095_H
#define SYNCHRONIZEDARRAYLISTWRAPPER_T2283757095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct  SynchronizedArrayListWrapper_t2283757095  : public ArrayListWrapper_t240606758
{
public:
	// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::m_SyncRoot
	RuntimeObject * ___m_SyncRoot_6;

public:
	inline static int32_t get_offset_of_m_SyncRoot_6() { return static_cast<int32_t>(offsetof(SynchronizedArrayListWrapper_t2283757095, ___m_SyncRoot_6)); }
	inline RuntimeObject * get_m_SyncRoot_6() const { return ___m_SyncRoot_6; }
	inline RuntimeObject ** get_address_of_m_SyncRoot_6() { return &___m_SyncRoot_6; }
	inline void set_m_SyncRoot_6(RuntimeObject * value)
	{
		___m_SyncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SyncRoot_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDARRAYLISTWRAPPER_T2283757095_H
#ifndef SMALLXMLPARSEREXCEPTION_T1329648272_H
#define SMALLXMLPARSEREXCEPTION_T1329648272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParserException
struct  SmallXmlParserException_t1329648272  : public SystemException_t176217640
{
public:
	// System.Int32 Mono.Xml.SmallXmlParserException::line
	int32_t ___line_12;
	// System.Int32 Mono.Xml.SmallXmlParserException::column
	int32_t ___column_13;

public:
	inline static int32_t get_offset_of_line_12() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t1329648272, ___line_12)); }
	inline int32_t get_line_12() const { return ___line_12; }
	inline int32_t* get_address_of_line_12() { return &___line_12; }
	inline void set_line_12(int32_t value)
	{
		___line_12 = value;
	}

	inline static int32_t get_offset_of_column_13() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t1329648272, ___column_13)); }
	inline int32_t get_column_13() const { return ___column_13; }
	inline int32_t* get_address_of_column_13() { return &___column_13; }
	inline void set_column_13(int32_t value)
	{
		___column_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLXMLPARSEREXCEPTION_T1329648272_H
#ifndef FIXEDSIZEARRAYLISTWRAPPER_T220909481_H
#define FIXEDSIZEARRAYLISTWRAPPER_T220909481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/FixedSizeArrayListWrapper
struct  FixedSizeArrayListWrapper_t220909481  : public ArrayListWrapper_t240606758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDSIZEARRAYLISTWRAPPER_T220909481_H
#ifndef READONLYLISTWRAPPER_T1330495152_H
#define READONLYLISTWRAPPER_T1330495152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyListWrapper
struct  ReadOnlyListWrapper_t1330495152  : public FixedSizeListWrapper_t2506951401
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYLISTWRAPPER_T1330495152_H
#ifndef RANGEDARRAYLIST_T3222579340_H
#define RANGEDARRAYLIST_T3222579340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/RangedArrayList
struct  RangedArrayList_t3222579340  : public ArrayListWrapper_t240606758
{
public:
	// System.Int32 System.Collections.ArrayList/RangedArrayList::m_InnerIndex
	int32_t ___m_InnerIndex_6;
	// System.Int32 System.Collections.ArrayList/RangedArrayList::m_InnerCount
	int32_t ___m_InnerCount_7;
	// System.Int32 System.Collections.ArrayList/RangedArrayList::m_InnerStateChanges
	int32_t ___m_InnerStateChanges_8;

public:
	inline static int32_t get_offset_of_m_InnerIndex_6() { return static_cast<int32_t>(offsetof(RangedArrayList_t3222579340, ___m_InnerIndex_6)); }
	inline int32_t get_m_InnerIndex_6() const { return ___m_InnerIndex_6; }
	inline int32_t* get_address_of_m_InnerIndex_6() { return &___m_InnerIndex_6; }
	inline void set_m_InnerIndex_6(int32_t value)
	{
		___m_InnerIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_InnerCount_7() { return static_cast<int32_t>(offsetof(RangedArrayList_t3222579340, ___m_InnerCount_7)); }
	inline int32_t get_m_InnerCount_7() const { return ___m_InnerCount_7; }
	inline int32_t* get_address_of_m_InnerCount_7() { return &___m_InnerCount_7; }
	inline void set_m_InnerCount_7(int32_t value)
	{
		___m_InnerCount_7 = value;
	}

	inline static int32_t get_offset_of_m_InnerStateChanges_8() { return static_cast<int32_t>(offsetof(RangedArrayList_t3222579340, ___m_InnerStateChanges_8)); }
	inline int32_t get_m_InnerStateChanges_8() const { return ___m_InnerStateChanges_8; }
	inline int32_t* get_address_of_m_InnerStateChanges_8() { return &___m_InnerStateChanges_8; }
	inline void set_m_InnerStateChanges_8(int32_t value)
	{
		___m_InnerStateChanges_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEDARRAYLIST_T3222579340_H
#ifndef READONLYARRAYLISTWRAPPER_T3401315650_H
#define READONLYARRAYLISTWRAPPER_T3401315650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct  ReadOnlyArrayListWrapper_t3401315650  : public FixedSizeArrayListWrapper_t220909481
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAYLISTWRAPPER_T3401315650_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { sizeof (Names_t1325641082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable200[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { sizeof (X520_t3325039438), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { sizeof (AttributeTypeAndValue_t3245693428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable202[4] = 
{
	AttributeTypeAndValue_t3245693428::get_offset_of_oid_0(),
	AttributeTypeAndValue_t3245693428::get_offset_of_attrValue_1(),
	AttributeTypeAndValue_t3245693428::get_offset_of_upperBound_2(),
	AttributeTypeAndValue_t3245693428::get_offset_of_encoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (Name_t3626842933), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { sizeof (CommonName_t2882805359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { sizeof (SerialNumber_t3812427306), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize206 = { sizeof (LocalityName_t1511149830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize207 = { sizeof (StateOrProvinceName_t1916702996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize208 = { sizeof (OrganizationName_t857038441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize209 = { sizeof (OrganizationalUnitName_t1968218587), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize210 = { sizeof (EmailAddress_t484866411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize211 = { sizeof (DomainComponent_t1597975113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize212 = { sizeof (UserId_t70549454), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize213 = { sizeof (Oid_t2014794921), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize214 = { sizeof (Title_t2026585634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize215 = { sizeof (CountryName_t4165042092), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize216 = { sizeof (DnQualifier_t2746394302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize217 = { sizeof (Surname_t4221813936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { sizeof (GivenName_t3114888956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { sizeof (Initial_t2745963796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { sizeof (ASN1_t2114160832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable220[3] = 
{
	ASN1_t2114160832::get_offset_of_m_nTag_0(),
	ASN1_t2114160832::get_offset_of_m_aValue_1(),
	ASN1_t2114160832::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { sizeof (ASN1Convert_t2839890152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { sizeof (BitConverterLE_t2108532978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { sizeof (PKCS7_t1860834338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (Oid_t1102929668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable224[11] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { sizeof (ContentInfo_t3218159895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable225[2] = 
{
	ContentInfo_t3218159895::get_offset_of_contentType_0(),
	ContentInfo_t3218159895::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { sizeof (EncryptedData_t3577548732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable226[4] = 
{
	EncryptedData_t3577548732::get_offset_of__version_0(),
	EncryptedData_t3577548732::get_offset_of__content_1(),
	EncryptedData_t3577548732::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t3577548732::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { sizeof (EnvelopedData_t4268908741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable227[5] = 
{
	EnvelopedData_t4268908741::get_offset_of__version_0(),
	EnvelopedData_t4268908741::get_offset_of__content_1(),
	EnvelopedData_t4268908741::get_offset_of__encryptionAlgorithm_2(),
	EnvelopedData_t4268908741::get_offset_of__recipientInfos_3(),
	EnvelopedData_t4268908741::get_offset_of__encrypted_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { sizeof (RecipientInfo_t969816850), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable228[6] = 
{
	RecipientInfo_t969816850::get_offset_of__version_0(),
	RecipientInfo_t969816850::get_offset_of__oid_1(),
	RecipientInfo_t969816850::get_offset_of__key_2(),
	RecipientInfo_t969816850::get_offset_of__ski_3(),
	RecipientInfo_t969816850::get_offset_of__issuer_4(),
	RecipientInfo_t969816850::get_offset_of__serial_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { sizeof (SignedData_t2897824243), -1, sizeof(SignedData_t2897824243_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable229[9] = 
{
	SignedData_t2897824243::get_offset_of_version_0(),
	SignedData_t2897824243::get_offset_of_hashAlgorithm_1(),
	SignedData_t2897824243::get_offset_of_contentInfo_2(),
	SignedData_t2897824243::get_offset_of_certs_3(),
	SignedData_t2897824243::get_offset_of_crls_4(),
	SignedData_t2897824243::get_offset_of_signerInfo_5(),
	SignedData_t2897824243::get_offset_of_mda_6(),
	SignedData_t2897824243::get_offset_of_signed_7(),
	SignedData_t2897824243_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { sizeof (SignerInfo_t1701070648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable230[10] = 
{
	SignerInfo_t1701070648::get_offset_of_version_0(),
	SignerInfo_t1701070648::get_offset_of_x509_1(),
	SignerInfo_t1701070648::get_offset_of_hashAlgorithm_2(),
	SignerInfo_t1701070648::get_offset_of_key_3(),
	SignerInfo_t1701070648::get_offset_of_authenticatedAttributes_4(),
	SignerInfo_t1701070648::get_offset_of_unauthenticatedAttributes_5(),
	SignerInfo_t1701070648::get_offset_of_signature_6(),
	SignerInfo_t1701070648::get_offset_of_issuer_7(),
	SignerInfo_t1701070648::get_offset_of_serial_8(),
	SignerInfo_t1701070648::get_offset_of_ski_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { sizeof (StrongName_t4093849377), -1, sizeof(StrongName_t4093849377_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable231[6] = 
{
	StrongName_t4093849377::get_offset_of_rsa_0(),
	StrongName_t4093849377::get_offset_of_publicKey_1(),
	StrongName_t4093849377::get_offset_of_keyToken_2(),
	StrongName_t4093849377::get_offset_of_tokenAlgorithm_3(),
	StrongName_t4093849377_StaticFields::get_offset_of_lockObject_4(),
	StrongName_t4093849377_StaticFields::get_offset_of_initialized_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { sizeof (StrongNameSignature_t211473023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable232[8] = 
{
	StrongNameSignature_t211473023::get_offset_of_hash_0(),
	StrongNameSignature_t211473023::get_offset_of_signature_1(),
	StrongNameSignature_t211473023::get_offset_of_signaturePosition_2(),
	StrongNameSignature_t211473023::get_offset_of_signatureLength_3(),
	StrongNameSignature_t211473023::get_offset_of_metadataPosition_4(),
	StrongNameSignature_t211473023::get_offset_of_metadataLength_5(),
	StrongNameSignature_t211473023::get_offset_of_cliFlag_6(),
	StrongNameSignature_t211473023::get_offset_of_cliFlagPosition_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { sizeof (StrongNameOptions_t1229641522)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable233[3] = 
{
	StrongNameOptions_t1229641522::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { sizeof (StrongNameManager_t515805818), -1, sizeof(StrongNameManager_t515805818_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable234[2] = 
{
	StrongNameManager_t515805818_StaticFields::get_offset_of_mappings_0(),
	StrongNameManager_t515805818_StaticFields::get_offset_of_tokens_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { sizeof (Element_t207017422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable235[1] = 
{
	Element_t207017422::get_offset_of_assemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { sizeof (UriPartial_t378645473)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable236[4] = 
{
	UriPartial_t378645473::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { sizeof (Uri_t722248887), -1, sizeof(Uri_t722248887_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable237[30] = 
{
	Uri_t722248887::get_offset_of_isUnixFilePath_0(),
	Uri_t722248887::get_offset_of_source_1(),
	Uri_t722248887::get_offset_of_scheme_2(),
	Uri_t722248887::get_offset_of_host_3(),
	Uri_t722248887::get_offset_of_port_4(),
	Uri_t722248887::get_offset_of_path_5(),
	Uri_t722248887::get_offset_of_query_6(),
	Uri_t722248887::get_offset_of_fragment_7(),
	Uri_t722248887::get_offset_of_userinfo_8(),
	Uri_t722248887::get_offset_of_isUnc_9(),
	Uri_t722248887::get_offset_of_isOpaquePart_10(),
	Uri_t722248887::get_offset_of_segments_11(),
	Uri_t722248887::get_offset_of_userEscaped_12(),
	Uri_t722248887::get_offset_of_cachedAbsoluteUri_13(),
	Uri_t722248887::get_offset_of_cachedToString_14(),
	Uri_t722248887::get_offset_of_cachedLocalPath_15(),
	Uri_t722248887::get_offset_of_cachedHashCode_16(),
	Uri_t722248887::get_offset_of_reduce_17(),
	Uri_t722248887_StaticFields::get_offset_of_hexUpperChars_18(),
	Uri_t722248887_StaticFields::get_offset_of_SchemeDelimiter_19(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeFile_20(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeFtp_21(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeGopher_22(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeHttp_23(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeHttps_24(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeMailto_25(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeNews_26(),
	Uri_t722248887_StaticFields::get_offset_of_UriSchemeNntp_27(),
	Uri_t722248887_StaticFields::get_offset_of_schemes_28(),
	Uri_t722248887_StaticFields::get_offset_of_U3CU3Ef__switchU24map17_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { sizeof (UriScheme_t2867806342)+ sizeof (RuntimeObject), sizeof(UriScheme_t2867806342_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable238[3] = 
{
	UriScheme_t2867806342::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t2867806342::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t2867806342::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { sizeof (SecurityParser_t4124480077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable239[3] = 
{
	SecurityParser_t4124480077::get_offset_of_root_13(),
	SecurityParser_t4124480077::get_offset_of_current_14(),
	SecurityParser_t4124480077::get_offset_of_stack_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { sizeof (DefaultHandler_t3108532812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (SmallXmlParser_t973787839), -1, sizeof(SmallXmlParser_t973787839_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable241[13] = 
{
	SmallXmlParser_t973787839::get_offset_of_handler_0(),
	SmallXmlParser_t973787839::get_offset_of_reader_1(),
	SmallXmlParser_t973787839::get_offset_of_elementNames_2(),
	SmallXmlParser_t973787839::get_offset_of_xmlSpaces_3(),
	SmallXmlParser_t973787839::get_offset_of_xmlSpace_4(),
	SmallXmlParser_t973787839::get_offset_of_buffer_5(),
	SmallXmlParser_t973787839::get_offset_of_nameBuffer_6(),
	SmallXmlParser_t973787839::get_offset_of_isWhitespace_7(),
	SmallXmlParser_t973787839::get_offset_of_attributes_8(),
	SmallXmlParser_t973787839::get_offset_of_line_9(),
	SmallXmlParser_t973787839::get_offset_of_column_10(),
	SmallXmlParser_t973787839::get_offset_of_resetColumn_11(),
	SmallXmlParser_t973787839_StaticFields::get_offset_of_U3CU3Ef__switchU24map18_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (AttrListImpl_t567962447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable244[2] = 
{
	AttrListImpl_t567962447::get_offset_of_attrNames_0(),
	AttrListImpl_t567962447::get_offset_of_attrValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (SmallXmlParserException_t1329648272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable245[2] = 
{
	SmallXmlParserException_t1329648272::get_offset_of_line_12(),
	SmallXmlParserException_t1329648272::get_offset_of_column_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (DataConverter_t1070999395), -1, sizeof(DataConverter_t1070999395_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable246[3] = 
{
	DataConverter_t1070999395_StaticFields::get_offset_of_SwapConv_0(),
	DataConverter_t1070999395_StaticFields::get_offset_of_CopyConv_1(),
	DataConverter_t1070999395_StaticFields::get_offset_of_IsLittleEndian_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (PackContext_t1070455346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable247[7] = 
{
	PackContext_t1070455346::get_offset_of_buffer_0(),
	PackContext_t1070455346::get_offset_of_next_1(),
	PackContext_t1070455346::get_offset_of_description_2(),
	PackContext_t1070455346::get_offset_of_i_3(),
	PackContext_t1070455346::get_offset_of_conv_4(),
	PackContext_t1070455346::get_offset_of_repeat_5(),
	PackContext_t1070455346::get_offset_of_align_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (CopyConverter_t3429306790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { sizeof (SwapConverter_t2767250681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (Runtime_t3174508158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable251[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable252[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable253[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (Link_t544317964)+ sizeof (RuntimeObject), sizeof(Link_t544317964 ), 0, 0 };
extern const int32_t g_FieldOffsetTable256[2] = 
{
	Link_t544317964::get_offset_of_HashCode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t544317964::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable257[16] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable258[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable259[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable260[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable261[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable262[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable263[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable265[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (KeyNotFoundException_t2292407383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable272[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable273[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable274[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable275[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable276[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable277[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { sizeof (ArrayList_t2718874744), -1, sizeof(ArrayList_t2718874744_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable278[5] = 
{
	0,
	ArrayList_t2718874744::get_offset_of__size_1(),
	ArrayList_t2718874744::get_offset_of__items_2(),
	ArrayList_t2718874744::get_offset_of__version_3(),
	ArrayList_t2718874744_StaticFields::get_offset_of_EmptyArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (ArrayListEnumerator_t3581104388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable279[6] = 
{
	ArrayListEnumerator_t3581104388::get_offset_of_m_Pos_0(),
	ArrayListEnumerator_t3581104388::get_offset_of_m_Index_1(),
	ArrayListEnumerator_t3581104388::get_offset_of_m_Count_2(),
	ArrayListEnumerator_t3581104388::get_offset_of_m_Current_3(),
	ArrayListEnumerator_t3581104388::get_offset_of_m_List_4(),
	ArrayListEnumerator_t3581104388::get_offset_of_m_ExpectedStateChanges_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (SimpleEnumerator_t4287166116), -1, sizeof(SimpleEnumerator_t4287166116_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable280[5] = 
{
	SimpleEnumerator_t4287166116::get_offset_of_list_0(),
	SimpleEnumerator_t4287166116::get_offset_of_index_1(),
	SimpleEnumerator_t4287166116::get_offset_of_version_2(),
	SimpleEnumerator_t4287166116::get_offset_of_currentElement_3(),
	SimpleEnumerator_t4287166116_StaticFields::get_offset_of_endFlag_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (ArrayListAdapter_t3495528812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable281[1] = 
{
	ArrayListAdapter_t3495528812::get_offset_of_m_Adaptee_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (EnumeratorWithRange_t3217317453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable282[4] = 
{
	EnumeratorWithRange_t3217317453::get_offset_of_m_StartIndex_0(),
	EnumeratorWithRange_t3217317453::get_offset_of_m_Count_1(),
	EnumeratorWithRange_t3217317453::get_offset_of_m_MaxCount_2(),
	EnumeratorWithRange_t3217317453::get_offset_of_m_Enumerator_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (ArrayListWrapper_t240606758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable283[1] = 
{
	ArrayListWrapper_t240606758::get_offset_of_m_InnerArrayList_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (SynchronizedArrayListWrapper_t2283757095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable284[1] = 
{
	SynchronizedArrayListWrapper_t2283757095::get_offset_of_m_SyncRoot_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (FixedSizeArrayListWrapper_t220909481), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (ReadOnlyArrayListWrapper_t3401315650), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (RangedArrayList_t3222579340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable287[3] = 
{
	RangedArrayList_t3222579340::get_offset_of_m_InnerIndex_6(),
	RangedArrayList_t3222579340::get_offset_of_m_InnerCount_7(),
	RangedArrayList_t3222579340::get_offset_of_m_InnerStateChanges_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (SynchronizedListWrapper_t3986429772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable288[1] = 
{
	SynchronizedListWrapper_t3986429772::get_offset_of_m_SyncRoot_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (FixedSizeListWrapper_t2506951401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (ReadOnlyListWrapper_t1330495152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (ListWrapper_t2823077147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable291[1] = 
{
	ListWrapper_t2823077147::get_offset_of_m_InnerList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (BitArray_t4087883509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable292[3] = 
{
	BitArray_t4087883509::get_offset_of_m_array_0(),
	BitArray_t4087883509::get_offset_of_m_length_1(),
	BitArray_t4087883509::get_offset_of__version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (BitArrayEnumerator_t893496218), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable293[4] = 
{
	BitArrayEnumerator_t893496218::get_offset_of__bitArray_0(),
	BitArrayEnumerator_t893496218::get_offset_of__current_1(),
	BitArrayEnumerator_t893496218::get_offset_of__index_2(),
	BitArrayEnumerator_t893496218::get_offset_of__version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (CaseInsensitiveComparer_t3670035800), -1, sizeof(CaseInsensitiveComparer_t3670035800_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable294[3] = 
{
	CaseInsensitiveComparer_t3670035800_StaticFields::get_offset_of_defaultComparer_0(),
	CaseInsensitiveComparer_t3670035800_StaticFields::get_offset_of_defaultInvariantComparer_1(),
	CaseInsensitiveComparer_t3670035800::get_offset_of_culture_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (CaseInsensitiveHashCodeProvider_t1962629119), -1, sizeof(CaseInsensitiveHashCodeProvider_t1962629119_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable295[4] = 
{
	CaseInsensitiveHashCodeProvider_t1962629119_StaticFields::get_offset_of_singletonInvariant_0(),
	CaseInsensitiveHashCodeProvider_t1962629119_StaticFields::get_offset_of_singleton_1(),
	CaseInsensitiveHashCodeProvider_t1962629119_StaticFields::get_offset_of_sync_2(),
	CaseInsensitiveHashCodeProvider_t1962629119::get_offset_of_m_text_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (CollectionBase_t2727926298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable296[1] = 
{
	CollectionBase_t2727926298::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { sizeof (CollectionDebuggerView_t390662535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable297[1] = 
{
	CollectionDebuggerView_t390662535::get_offset_of_c_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (Comparer_t1912461351), -1, sizeof(Comparer_t1912461351_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable298[3] = 
{
	Comparer_t1912461351_StaticFields::get_offset_of_Default_0(),
	Comparer_t1912461351_StaticFields::get_offset_of_DefaultInvariant_1(),
	Comparer_t1912461351::get_offset_of_m_compareInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (DictionaryBase_t3062914256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable299[1] = 
{
	DictionaryBase_t3062914256::get_offset_of_hashtable_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
