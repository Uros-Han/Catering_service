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
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1851031225;
// System.Security.Cryptography.CspParameters
struct CspParameters_t239852639;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// Mono.Math.BigInteger
struct BigInteger_t2902905089;
// System.IO.FileStream
struct FileStream_t4292183065;
// Mono.Security.X509.X509Store
struct X509Store_t2777415283;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3285446944;
// System.MarshalByRefObject
struct MarshalByRefObject_t2760389100;
// System.Runtime.Remoting.Identity
struct Identity_t1873279371;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// Mono.Security.X509.X509Stores
struct X509Stores_t1373936237;
// Mono.Security.ASN1
struct ASN1_t2114160832;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168549;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t4211574351;
// Mono.Globalization.Unicode.TailoringInfo[]
struct TailoringInfoU5BU5D_t1797664499;
// System.Byte
struct Byte_t1134296376;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t4134431086;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// Mono.Globalization.Unicode.CodePointIndexer/TableRange[]
struct TableRangeU5BU5D_t2913440125;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t838556799;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t3973367379;
// System.Int32
struct Int32_t2950945753;
// System.Int16
struct Int16_t2552820387;
// System.UInt16
struct UInt16_t2177724958;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t2617280509;
// System.Void
struct Void_t1185182177;
// System.__ComObject
struct __ComObject_t2735933417;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3064139577;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3828027274;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// System.EventArgs
struct EventArgs_t3591816995;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Mono.Security.X509.X509Chain
struct X509Chain_t863783600;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t609554708;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;




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
#ifndef CONSTS_T1749595333_H
#define CONSTS_T1749595333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t1749595333  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T1749595333_H
#ifndef BLOCKPROCESSOR_T1851031225_H
#define BLOCKPROCESSOR_T1851031225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.BlockProcessor
struct  BlockProcessor_t1851031225  : public RuntimeObject
{
public:
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.BlockProcessor::transform
	RuntimeObject* ___transform_0;
	// System.Byte[] Mono.Security.Cryptography.BlockProcessor::block
	ByteU5BU5D_t4116647657* ___block_1;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockSize
	int32_t ___blockSize_2;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockCount
	int32_t ___blockCount_3;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(BlockProcessor_t1851031225, ___transform_0)); }
	inline RuntimeObject* get_transform_0() const { return ___transform_0; }
	inline RuntimeObject** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(RuntimeObject* value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((&___transform_0), value);
	}

	inline static int32_t get_offset_of_block_1() { return static_cast<int32_t>(offsetof(BlockProcessor_t1851031225, ___block_1)); }
	inline ByteU5BU5D_t4116647657* get_block_1() const { return ___block_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_block_1() { return &___block_1; }
	inline void set_block_1(ByteU5BU5D_t4116647657* value)
	{
		___block_1 = value;
		Il2CppCodeGenWriteBarrier((&___block_1), value);
	}

	inline static int32_t get_offset_of_blockSize_2() { return static_cast<int32_t>(offsetof(BlockProcessor_t1851031225, ___blockSize_2)); }
	inline int32_t get_blockSize_2() const { return ___blockSize_2; }
	inline int32_t* get_address_of_blockSize_2() { return &___blockSize_2; }
	inline void set_blockSize_2(int32_t value)
	{
		___blockSize_2 = value;
	}

	inline static int32_t get_offset_of_blockCount_3() { return static_cast<int32_t>(offsetof(BlockProcessor_t1851031225, ___blockCount_3)); }
	inline int32_t get_blockCount_3() const { return ___blockCount_3; }
	inline int32_t* get_address_of_blockCount_3() { return &___blockCount_3; }
	inline void set_blockCount_3(int32_t value)
	{
		___blockCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKPROCESSOR_T1851031225_H
#ifndef HMACALGORITHM_T1824077146_H
#define HMACALGORITHM_T1824077146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMACAlgorithm
struct  HMACAlgorithm_t1824077146  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.Cryptography.HMACAlgorithm::key
	ByteU5BU5D_t4116647657* ___key_0;
	// System.Byte[] Mono.Security.Cryptography.HMACAlgorithm::hash
	ByteU5BU5D_t4116647657* ___hash_1;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMACAlgorithm::algo
	HashAlgorithm_t1432317219 * ___algo_2;
	// System.String Mono.Security.Cryptography.HMACAlgorithm::hashName
	String_t* ___hashName_3;
	// Mono.Security.Cryptography.BlockProcessor Mono.Security.Cryptography.HMACAlgorithm::block
	BlockProcessor_t1851031225 * ___block_4;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t1824077146, ___key_0)); }
	inline ByteU5BU5D_t4116647657* get_key_0() const { return ___key_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ByteU5BU5D_t4116647657* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t1824077146, ___hash_1)); }
	inline ByteU5BU5D_t4116647657* get_hash_1() const { return ___hash_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(ByteU5BU5D_t4116647657* value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}

	inline static int32_t get_offset_of_algo_2() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t1824077146, ___algo_2)); }
	inline HashAlgorithm_t1432317219 * get_algo_2() const { return ___algo_2; }
	inline HashAlgorithm_t1432317219 ** get_address_of_algo_2() { return &___algo_2; }
	inline void set_algo_2(HashAlgorithm_t1432317219 * value)
	{
		___algo_2 = value;
		Il2CppCodeGenWriteBarrier((&___algo_2), value);
	}

	inline static int32_t get_offset_of_hashName_3() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t1824077146, ___hashName_3)); }
	inline String_t* get_hashName_3() const { return ___hashName_3; }
	inline String_t** get_address_of_hashName_3() { return &___hashName_3; }
	inline void set_hashName_3(String_t* value)
	{
		___hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_3), value);
	}

	inline static int32_t get_offset_of_block_4() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t1824077146, ___block_4)); }
	inline BlockProcessor_t1851031225 * get_block_4() const { return ___block_4; }
	inline BlockProcessor_t1851031225 ** get_address_of_block_4() { return &___block_4; }
	inline void set_block_4(BlockProcessor_t1851031225 * value)
	{
		___block_4 = value;
		Il2CppCodeGenWriteBarrier((&___block_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACALGORITHM_T1824077146_H
#ifndef KEYPAIRPERSISTENCE_T2094547461_H
#define KEYPAIRPERSISTENCE_T2094547461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyPairPersistence
struct  KeyPairPersistence_t2094547461  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::_params
	CspParameters_t239852639 * ____params_4;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_keyvalue
	String_t* ____keyvalue_5;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_filename
	String_t* ____filename_6;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_container
	String_t* ____container_7;

public:
	inline static int32_t get_offset_of__params_4() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461, ____params_4)); }
	inline CspParameters_t239852639 * get__params_4() const { return ____params_4; }
	inline CspParameters_t239852639 ** get_address_of__params_4() { return &____params_4; }
	inline void set__params_4(CspParameters_t239852639 * value)
	{
		____params_4 = value;
		Il2CppCodeGenWriteBarrier((&____params_4), value);
	}

	inline static int32_t get_offset_of__keyvalue_5() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461, ____keyvalue_5)); }
	inline String_t* get__keyvalue_5() const { return ____keyvalue_5; }
	inline String_t** get_address_of__keyvalue_5() { return &____keyvalue_5; }
	inline void set__keyvalue_5(String_t* value)
	{
		____keyvalue_5 = value;
		Il2CppCodeGenWriteBarrier((&____keyvalue_5), value);
	}

	inline static int32_t get_offset_of__filename_6() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461, ____filename_6)); }
	inline String_t* get__filename_6() const { return ____filename_6; }
	inline String_t** get_address_of__filename_6() { return &____filename_6; }
	inline void set__filename_6(String_t* value)
	{
		____filename_6 = value;
		Il2CppCodeGenWriteBarrier((&____filename_6), value);
	}

	inline static int32_t get_offset_of__container_7() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461, ____container_7)); }
	inline String_t* get__container_7() const { return ____container_7; }
	inline String_t** get_address_of__container_7() { return &____container_7; }
	inline void set__container_7(String_t* value)
	{
		____container_7 = value;
		Il2CppCodeGenWriteBarrier((&____container_7), value);
	}
};

struct KeyPairPersistence_t2094547461_StaticFields
{
public:
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_userPathExists
	bool ____userPathExists_0;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_userPath
	String_t* ____userPath_1;
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_machinePathExists
	bool ____machinePathExists_2;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_machinePath
	String_t* ____machinePath_3;
	// System.Object Mono.Security.Cryptography.KeyPairPersistence::lockobj
	RuntimeObject * ___lockobj_8;

public:
	inline static int32_t get_offset_of__userPathExists_0() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461_StaticFields, ____userPathExists_0)); }
	inline bool get__userPathExists_0() const { return ____userPathExists_0; }
	inline bool* get_address_of__userPathExists_0() { return &____userPathExists_0; }
	inline void set__userPathExists_0(bool value)
	{
		____userPathExists_0 = value;
	}

	inline static int32_t get_offset_of__userPath_1() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461_StaticFields, ____userPath_1)); }
	inline String_t* get__userPath_1() const { return ____userPath_1; }
	inline String_t** get_address_of__userPath_1() { return &____userPath_1; }
	inline void set__userPath_1(String_t* value)
	{
		____userPath_1 = value;
		Il2CppCodeGenWriteBarrier((&____userPath_1), value);
	}

	inline static int32_t get_offset_of__machinePathExists_2() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461_StaticFields, ____machinePathExists_2)); }
	inline bool get__machinePathExists_2() const { return ____machinePathExists_2; }
	inline bool* get_address_of__machinePathExists_2() { return &____machinePathExists_2; }
	inline void set__machinePathExists_2(bool value)
	{
		____machinePathExists_2 = value;
	}

	inline static int32_t get_offset_of__machinePath_3() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461_StaticFields, ____machinePath_3)); }
	inline String_t* get__machinePath_3() const { return ____machinePath_3; }
	inline String_t** get_address_of__machinePath_3() { return &____machinePath_3; }
	inline void set__machinePath_3(String_t* value)
	{
		____machinePath_3 = value;
		Il2CppCodeGenWriteBarrier((&____machinePath_3), value);
	}

	inline static int32_t get_offset_of_lockobj_8() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t2094547461_StaticFields, ___lockobj_8)); }
	inline RuntimeObject * get_lockobj_8() const { return ___lockobj_8; }
	inline RuntimeObject ** get_address_of_lockobj_8() { return &___lockobj_8; }
	inline void set_lockobj_8(RuntimeObject * value)
	{
		___lockobj_8 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPAIRPERSISTENCE_T2094547461_H
#ifndef MACALGORITHM_T2441219148_H
#define MACALGORITHM_T2441219148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MACAlgorithm
struct  MACAlgorithm_t2441219148  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.MACAlgorithm::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.MACAlgorithm::enc
	RuntimeObject* ___enc_1;
	// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::block
	ByteU5BU5D_t4116647657* ___block_2;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockSize
	int32_t ___blockSize_3;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockCount
	int32_t ___blockCount_4;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2441219148, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_enc_1() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2441219148, ___enc_1)); }
	inline RuntimeObject* get_enc_1() const { return ___enc_1; }
	inline RuntimeObject** get_address_of_enc_1() { return &___enc_1; }
	inline void set_enc_1(RuntimeObject* value)
	{
		___enc_1 = value;
		Il2CppCodeGenWriteBarrier((&___enc_1), value);
	}

	inline static int32_t get_offset_of_block_2() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2441219148, ___block_2)); }
	inline ByteU5BU5D_t4116647657* get_block_2() const { return ___block_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_block_2() { return &___block_2; }
	inline void set_block_2(ByteU5BU5D_t4116647657* value)
	{
		___block_2 = value;
		Il2CppCodeGenWriteBarrier((&___block_2), value);
	}

	inline static int32_t get_offset_of_blockSize_3() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2441219148, ___blockSize_3)); }
	inline int32_t get_blockSize_3() const { return ___blockSize_3; }
	inline int32_t* get_address_of_blockSize_3() { return &___blockSize_3; }
	inline void set_blockSize_3(int32_t value)
	{
		___blockSize_3 = value;
	}

	inline static int32_t get_offset_of_blockCount_4() { return static_cast<int32_t>(offsetof(MACAlgorithm_t2441219148, ___blockCount_4)); }
	inline int32_t get_blockCount_4() const { return ___blockCount_4; }
	inline int32_t* get_address_of_blockCount_4() { return &___blockCount_4; }
	inline void set_blockCount_4(int32_t value)
	{
		___blockCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACALGORITHM_T2441219148_H
#ifndef PKCS1_T1505584676_H
#define PKCS1_T1505584676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t1505584676  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t1505584676_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t4116647657* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t4116647657* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t4116647657* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t4116647657* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t1505584676_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t1505584676_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t1505584676_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t1505584676_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T1505584676_H
#ifndef PKCS8_T696280612_H
#define PKCS8_T696280612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t696280612  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T696280612_H
#ifndef PRIVATEKEYINFO_T668027992_H
#define PRIVATEKEYINFO_T668027992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t668027992  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t4116647657* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t2718874744 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027992, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027992, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027992, ____key_2)); }
	inline ByteU5BU5D_t4116647657* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t4116647657* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027992, ____list_3)); }
	inline ArrayList_t2718874744 * get__list_3() const { return ____list_3; }
	inline ArrayList_t2718874744 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t2718874744 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T668027992_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T862116835_H
#define ENCRYPTEDPRIVATEKEYINFO_T862116835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t862116835  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t4116647657* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t4116647657* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____salt_1)); }
	inline ByteU5BU5D_t4116647657* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t4116647657* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____data_3)); }
	inline ByteU5BU5D_t4116647657* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t4116647657* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T862116835_H
#ifndef KEYBUILDER_T2049230354_H
#define KEYBUILDER_T2049230354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2049230354  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2049230354_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t386037858 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2049230354_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t386037858 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t386037858 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2049230354_H
#ifndef PRIMEGENERATORBASE_T446028866_H
#define PRIMEGENERATORBASE_T446028866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t446028866  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T446028866_H
#ifndef PRIMALITYTESTS_T1538473975_H
#define PRIMALITYTESTS_T1538473975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t1538473975  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T1538473975_H
#ifndef BIGINTEGER_T2902905089_H
#define BIGINTEGER_T2902905089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2902905089  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_2;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2770800703* ___data_3;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089, ___length_2)); }
	inline uint32_t get_length_2() const { return ___length_2; }
	inline uint32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(uint32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089, ___data_3)); }
	inline UInt32U5BU5D_t2770800703* get_data_3() const { return ___data_3; }
	inline UInt32U5BU5D_t2770800703** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(UInt32U5BU5D_t2770800703* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

struct BigInteger_t2902905089_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2770800703* ___smallPrimes_4;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t386037858 * ___rng_5;

public:
	inline static int32_t get_offset_of_smallPrimes_4() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089_StaticFields, ___smallPrimes_4)); }
	inline UInt32U5BU5D_t2770800703* get_smallPrimes_4() const { return ___smallPrimes_4; }
	inline UInt32U5BU5D_t2770800703** get_address_of_smallPrimes_4() { return &___smallPrimes_4; }
	inline void set_smallPrimes_4(UInt32U5BU5D_t2770800703* value)
	{
		___smallPrimes_4 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_4), value);
	}

	inline static int32_t get_offset_of_rng_5() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089_StaticFields, ___rng_5)); }
	inline RandomNumberGenerator_t386037858 * get_rng_5() const { return ___rng_5; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_5() { return &___rng_5; }
	inline void set_rng_5(RandomNumberGenerator_t386037858 * value)
	{
		___rng_5 = value;
		Il2CppCodeGenWriteBarrier((&___rng_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T2902905089_H
#ifndef MODULUSRING_T596511504_H
#define MODULUSRING_T596511504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t596511504  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2902905089 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2902905089 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t596511504, ___mod_0)); }
	inline BigInteger_t2902905089 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2902905089 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2902905089 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t596511504, ___constant_1)); }
	inline BigInteger_t2902905089 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2902905089 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2902905089 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T596511504_H
#ifndef MONTGOMERY_T713683935_H
#define MONTGOMERY_T713683935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Montgomery
struct  Montgomery_t713683935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONTGOMERY_T713683935_H
#ifndef KERNEL_T1402667219_H
#define KERNEL_T1402667219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1402667219  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1402667219_H
#ifndef AUTHENTICODEBASE_T263562949_H
#define AUTHENTICODEBASE_T263562949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeBase
struct  AuthenticodeBase_t263562949  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::fileblock
	ByteU5BU5D_t4116647657* ___fileblock_1;
	// System.IO.FileStream Mono.Security.Authenticode.AuthenticodeBase::fs
	FileStream_t4292183065 * ___fs_2;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockNo
	int32_t ___blockNo_3;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockLength
	int32_t ___blockLength_4;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::peOffset
	int32_t ___peOffset_5;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecurityOffset
	int32_t ___dirSecurityOffset_6;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecuritySize
	int32_t ___dirSecuritySize_7;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::coffSymbolTableOffset
	int32_t ___coffSymbolTableOffset_8;

public:
	inline static int32_t get_offset_of_fileblock_1() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___fileblock_1)); }
	inline ByteU5BU5D_t4116647657* get_fileblock_1() const { return ___fileblock_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_fileblock_1() { return &___fileblock_1; }
	inline void set_fileblock_1(ByteU5BU5D_t4116647657* value)
	{
		___fileblock_1 = value;
		Il2CppCodeGenWriteBarrier((&___fileblock_1), value);
	}

	inline static int32_t get_offset_of_fs_2() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___fs_2)); }
	inline FileStream_t4292183065 * get_fs_2() const { return ___fs_2; }
	inline FileStream_t4292183065 ** get_address_of_fs_2() { return &___fs_2; }
	inline void set_fs_2(FileStream_t4292183065 * value)
	{
		___fs_2 = value;
		Il2CppCodeGenWriteBarrier((&___fs_2), value);
	}

	inline static int32_t get_offset_of_blockNo_3() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___blockNo_3)); }
	inline int32_t get_blockNo_3() const { return ___blockNo_3; }
	inline int32_t* get_address_of_blockNo_3() { return &___blockNo_3; }
	inline void set_blockNo_3(int32_t value)
	{
		___blockNo_3 = value;
	}

	inline static int32_t get_offset_of_blockLength_4() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___blockLength_4)); }
	inline int32_t get_blockLength_4() const { return ___blockLength_4; }
	inline int32_t* get_address_of_blockLength_4() { return &___blockLength_4; }
	inline void set_blockLength_4(int32_t value)
	{
		___blockLength_4 = value;
	}

	inline static int32_t get_offset_of_peOffset_5() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___peOffset_5)); }
	inline int32_t get_peOffset_5() const { return ___peOffset_5; }
	inline int32_t* get_address_of_peOffset_5() { return &___peOffset_5; }
	inline void set_peOffset_5(int32_t value)
	{
		___peOffset_5 = value;
	}

	inline static int32_t get_offset_of_dirSecurityOffset_6() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___dirSecurityOffset_6)); }
	inline int32_t get_dirSecurityOffset_6() const { return ___dirSecurityOffset_6; }
	inline int32_t* get_address_of_dirSecurityOffset_6() { return &___dirSecurityOffset_6; }
	inline void set_dirSecurityOffset_6(int32_t value)
	{
		___dirSecurityOffset_6 = value;
	}

	inline static int32_t get_offset_of_dirSecuritySize_7() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___dirSecuritySize_7)); }
	inline int32_t get_dirSecuritySize_7() const { return ___dirSecuritySize_7; }
	inline int32_t* get_address_of_dirSecuritySize_7() { return &___dirSecuritySize_7; }
	inline void set_dirSecuritySize_7(int32_t value)
	{
		___dirSecuritySize_7 = value;
	}

	inline static int32_t get_offset_of_coffSymbolTableOffset_8() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___coffSymbolTableOffset_8)); }
	inline int32_t get_coffSymbolTableOffset_8() const { return ___coffSymbolTableOffset_8; }
	inline int32_t* get_address_of_coffSymbolTableOffset_8() { return &___coffSymbolTableOffset_8; }
	inline void set_coffSymbolTableOffset_8(int32_t value)
	{
		___coffSymbolTableOffset_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEBASE_T263562949_H
#ifndef CRYPTOCONVERT_T610933156_H
#define CRYPTOCONVERT_T610933156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t610933156  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T610933156_H
#ifndef SYMMETRICTRANSFORM_T3802591842_H
#define SYMMETRICTRANSFORM_T3802591842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591842  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591842_H
#ifndef X509STORES_T1373936237_H
#define X509STORES_T1373936237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t1373936237  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_personal
	X509Store_t2777415283 * ____personal_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_other
	X509Store_t2777415283 * ____other_2;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_intermediate
	X509Store_t2777415283 * ____intermediate_3;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t2777415283 * ____trusted_4;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_untrusted
	X509Store_t2777415283 * ____untrusted_5;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t1373936237, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__personal_1() { return static_cast<int32_t>(offsetof(X509Stores_t1373936237, ____personal_1)); }
	inline X509Store_t2777415283 * get__personal_1() const { return ____personal_1; }
	inline X509Store_t2777415283 ** get_address_of__personal_1() { return &____personal_1; }
	inline void set__personal_1(X509Store_t2777415283 * value)
	{
		____personal_1 = value;
		Il2CppCodeGenWriteBarrier((&____personal_1), value);
	}

	inline static int32_t get_offset_of__other_2() { return static_cast<int32_t>(offsetof(X509Stores_t1373936237, ____other_2)); }
	inline X509Store_t2777415283 * get__other_2() const { return ____other_2; }
	inline X509Store_t2777415283 ** get_address_of__other_2() { return &____other_2; }
	inline void set__other_2(X509Store_t2777415283 * value)
	{
		____other_2 = value;
		Il2CppCodeGenWriteBarrier((&____other_2), value);
	}

	inline static int32_t get_offset_of__intermediate_3() { return static_cast<int32_t>(offsetof(X509Stores_t1373936237, ____intermediate_3)); }
	inline X509Store_t2777415283 * get__intermediate_3() const { return ____intermediate_3; }
	inline X509Store_t2777415283 ** get_address_of__intermediate_3() { return &____intermediate_3; }
	inline void set__intermediate_3(X509Store_t2777415283 * value)
	{
		____intermediate_3 = value;
		Il2CppCodeGenWriteBarrier((&____intermediate_3), value);
	}

	inline static int32_t get_offset_of__trusted_4() { return static_cast<int32_t>(offsetof(X509Stores_t1373936237, ____trusted_4)); }
	inline X509Store_t2777415283 * get__trusted_4() const { return ____trusted_4; }
	inline X509Store_t2777415283 ** get_address_of__trusted_4() { return &____trusted_4; }
	inline void set__trusted_4(X509Store_t2777415283 * value)
	{
		____trusted_4 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_4), value);
	}

	inline static int32_t get_offset_of__untrusted_5() { return static_cast<int32_t>(offsetof(X509Stores_t1373936237, ____untrusted_5)); }
	inline X509Store_t2777415283 * get__untrusted_5() const { return ____untrusted_5; }
	inline X509Store_t2777415283 ** get_address_of__untrusted_5() { return &____untrusted_5; }
	inline void set__untrusted_5(X509Store_t2777415283 * value)
	{
		____untrusted_5 = value;
		Il2CppCodeGenWriteBarrier((&____untrusted_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T1373936237_H
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
#ifndef REALPROXY_T2312050253_H
#define REALPROXY_T2312050253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RealProxy
struct  RealProxy_t2312050253  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Remoting.Proxies.RealProxy::class_to_proxy
	Type_t * ___class_to_proxy_0;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Proxies.RealProxy::_targetContext
	Context_t3285446944 * ____targetContext_1;
	// System.MarshalByRefObject System.Runtime.Remoting.Proxies.RealProxy::_server
	MarshalByRefObject_t2760389100 * ____server_2;
	// System.Int32 System.Runtime.Remoting.Proxies.RealProxy::_targetDomainId
	int32_t ____targetDomainId_3;
	// System.String System.Runtime.Remoting.Proxies.RealProxy::_targetUri
	String_t* ____targetUri_4;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::_objectIdentity
	Identity_t1873279371 * ____objectIdentity_5;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_objTP
	RuntimeObject * ____objTP_6;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_stubData
	RuntimeObject * ____stubData_7;

public:
	inline static int32_t get_offset_of_class_to_proxy_0() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ___class_to_proxy_0)); }
	inline Type_t * get_class_to_proxy_0() const { return ___class_to_proxy_0; }
	inline Type_t ** get_address_of_class_to_proxy_0() { return &___class_to_proxy_0; }
	inline void set_class_to_proxy_0(Type_t * value)
	{
		___class_to_proxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___class_to_proxy_0), value);
	}

	inline static int32_t get_offset_of__targetContext_1() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____targetContext_1)); }
	inline Context_t3285446944 * get__targetContext_1() const { return ____targetContext_1; }
	inline Context_t3285446944 ** get_address_of__targetContext_1() { return &____targetContext_1; }
	inline void set__targetContext_1(Context_t3285446944 * value)
	{
		____targetContext_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetContext_1), value);
	}

	inline static int32_t get_offset_of__server_2() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____server_2)); }
	inline MarshalByRefObject_t2760389100 * get__server_2() const { return ____server_2; }
	inline MarshalByRefObject_t2760389100 ** get_address_of__server_2() { return &____server_2; }
	inline void set__server_2(MarshalByRefObject_t2760389100 * value)
	{
		____server_2 = value;
		Il2CppCodeGenWriteBarrier((&____server_2), value);
	}

	inline static int32_t get_offset_of__targetDomainId_3() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____targetDomainId_3)); }
	inline int32_t get__targetDomainId_3() const { return ____targetDomainId_3; }
	inline int32_t* get_address_of__targetDomainId_3() { return &____targetDomainId_3; }
	inline void set__targetDomainId_3(int32_t value)
	{
		____targetDomainId_3 = value;
	}

	inline static int32_t get_offset_of__targetUri_4() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____targetUri_4)); }
	inline String_t* get__targetUri_4() const { return ____targetUri_4; }
	inline String_t** get_address_of__targetUri_4() { return &____targetUri_4; }
	inline void set__targetUri_4(String_t* value)
	{
		____targetUri_4 = value;
		Il2CppCodeGenWriteBarrier((&____targetUri_4), value);
	}

	inline static int32_t get_offset_of__objectIdentity_5() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____objectIdentity_5)); }
	inline Identity_t1873279371 * get__objectIdentity_5() const { return ____objectIdentity_5; }
	inline Identity_t1873279371 ** get_address_of__objectIdentity_5() { return &____objectIdentity_5; }
	inline void set__objectIdentity_5(Identity_t1873279371 * value)
	{
		____objectIdentity_5 = value;
		Il2CppCodeGenWriteBarrier((&____objectIdentity_5), value);
	}

	inline static int32_t get_offset_of__objTP_6() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____objTP_6)); }
	inline RuntimeObject * get__objTP_6() const { return ____objTP_6; }
	inline RuntimeObject ** get_address_of__objTP_6() { return &____objTP_6; }
	inline void set__objTP_6(RuntimeObject * value)
	{
		____objTP_6 = value;
		Il2CppCodeGenWriteBarrier((&____objTP_6), value);
	}

	inline static int32_t get_offset_of__stubData_7() { return static_cast<int32_t>(offsetof(RealProxy_t2312050253, ____stubData_7)); }
	inline RuntimeObject * get__stubData_7() const { return ____stubData_7; }
	inline RuntimeObject ** get_address_of__stubData_7() { return &____stubData_7; }
	inline void set__stubData_7(RuntimeObject * value)
	{
		____stubData_7 = value;
		Il2CppCodeGenWriteBarrier((&____stubData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REALPROXY_T2312050253_H
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
#ifndef ASYMMETRICALGORITHM_T932037087_H
#define ASYMMETRICALGORITHM_T932037087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t932037087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T932037087_H
#ifndef X509STOREMANAGER_T1046782375_H
#define X509STOREMANAGER_T1046782375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t1046782375  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t1046782375_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t1373936237 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t1373936237 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t1046782375_StaticFields, ____userStore_0)); }
	inline X509Stores_t1373936237 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t1373936237 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t1373936237 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t1046782375_StaticFields, ____machineStore_1)); }
	inline X509Stores_t1373936237 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t1373936237 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t1373936237 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T1046782375_H
#ifndef PKCS5_T784850245_H
#define PKCS5_T784850245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS5
struct  PKCS5_t784850245  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS5_T784850245_H
#ifndef PKCS9_T2785795397_H
#define PKCS9_T2785795397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS9
struct  PKCS9_t2785795397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS9_T2785795397_H
#ifndef SAFEBAG_T3961248199_H
#define SAFEBAG_T3961248199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t3961248199  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t2114160832 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t3961248199, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t3961248199, ____asn1_1)); }
	inline ASN1_t2114160832 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t2114160832 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t2114160832 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T3961248199_H
#ifndef PKCS12_T4101533060_H
#define PKCS12_T4101533060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t4101533060  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t4116647657* ____password_17;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t2718874744 * ____keyBags_18;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t2718874744 * ____secretBags_19;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t1542168549 * ____certs_20;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_21;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_22;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_23;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_24;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t2718874744 * ____safeBags_25;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t386037858 * ____rng_26;

public:
	inline static int32_t get_offset_of__password_17() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____password_17)); }
	inline ByteU5BU5D_t4116647657* get__password_17() const { return ____password_17; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_17() { return &____password_17; }
	inline void set__password_17(ByteU5BU5D_t4116647657* value)
	{
		____password_17 = value;
		Il2CppCodeGenWriteBarrier((&____password_17), value);
	}

	inline static int32_t get_offset_of__keyBags_18() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____keyBags_18)); }
	inline ArrayList_t2718874744 * get__keyBags_18() const { return ____keyBags_18; }
	inline ArrayList_t2718874744 ** get_address_of__keyBags_18() { return &____keyBags_18; }
	inline void set__keyBags_18(ArrayList_t2718874744 * value)
	{
		____keyBags_18 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_18), value);
	}

	inline static int32_t get_offset_of__secretBags_19() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____secretBags_19)); }
	inline ArrayList_t2718874744 * get__secretBags_19() const { return ____secretBags_19; }
	inline ArrayList_t2718874744 ** get_address_of__secretBags_19() { return &____secretBags_19; }
	inline void set__secretBags_19(ArrayList_t2718874744 * value)
	{
		____secretBags_19 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_19), value);
	}

	inline static int32_t get_offset_of__certs_20() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____certs_20)); }
	inline X509CertificateCollection_t1542168549 * get__certs_20() const { return ____certs_20; }
	inline X509CertificateCollection_t1542168549 ** get_address_of__certs_20() { return &____certs_20; }
	inline void set__certs_20(X509CertificateCollection_t1542168549 * value)
	{
		____certs_20 = value;
		Il2CppCodeGenWriteBarrier((&____certs_20), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_21() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____keyBagsChanged_21)); }
	inline bool get__keyBagsChanged_21() const { return ____keyBagsChanged_21; }
	inline bool* get_address_of__keyBagsChanged_21() { return &____keyBagsChanged_21; }
	inline void set__keyBagsChanged_21(bool value)
	{
		____keyBagsChanged_21 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_22() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____secretBagsChanged_22)); }
	inline bool get__secretBagsChanged_22() const { return ____secretBagsChanged_22; }
	inline bool* get_address_of__secretBagsChanged_22() { return &____secretBagsChanged_22; }
	inline void set__secretBagsChanged_22(bool value)
	{
		____secretBagsChanged_22 = value;
	}

	inline static int32_t get_offset_of__certsChanged_23() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____certsChanged_23)); }
	inline bool get__certsChanged_23() const { return ____certsChanged_23; }
	inline bool* get_address_of__certsChanged_23() { return &____certsChanged_23; }
	inline void set__certsChanged_23(bool value)
	{
		____certsChanged_23 = value;
	}

	inline static int32_t get_offset_of__iterations_24() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____iterations_24)); }
	inline int32_t get__iterations_24() const { return ____iterations_24; }
	inline int32_t* get_address_of__iterations_24() { return &____iterations_24; }
	inline void set__iterations_24(int32_t value)
	{
		____iterations_24 = value;
	}

	inline static int32_t get_offset_of__safeBags_25() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____safeBags_25)); }
	inline ArrayList_t2718874744 * get__safeBags_25() const { return ____safeBags_25; }
	inline ArrayList_t2718874744 ** get_address_of__safeBags_25() { return &____safeBags_25; }
	inline void set__safeBags_25(ArrayList_t2718874744 * value)
	{
		____safeBags_25 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_25), value);
	}

	inline static int32_t get_offset_of__rng_26() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060, ____rng_26)); }
	inline RandomNumberGenerator_t386037858 * get__rng_26() const { return ____rng_26; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_26() { return &____rng_26; }
	inline void set__rng_26(RandomNumberGenerator_t386037858 * value)
	{
		____rng_26 = value;
		Il2CppCodeGenWriteBarrier((&____rng_26), value);
	}
};

struct PKCS12_t4101533060_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_16;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_27;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map8_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map9_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapA_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapB_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapC_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapD
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapD_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapE
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapE_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapF
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapF_35;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_16() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___recommendedIterationCount_16)); }
	inline int32_t get_recommendedIterationCount_16() const { return ___recommendedIterationCount_16; }
	inline int32_t* get_address_of_recommendedIterationCount_16() { return &___recommendedIterationCount_16; }
	inline void set_recommendedIterationCount_16(int32_t value)
	{
		___recommendedIterationCount_16 = value;
	}

	inline static int32_t get_offset_of_password_max_length_27() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___password_max_length_27)); }
	inline int32_t get_password_max_length_27() const { return ___password_max_length_27; }
	inline int32_t* get_address_of_password_max_length_27() { return &___password_max_length_27; }
	inline void set_password_max_length_27(int32_t value)
	{
		___password_max_length_27 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_28() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24map8_28)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map8_28() const { return ___U3CU3Ef__switchU24map8_28; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map8_28() { return &___U3CU3Ef__switchU24map8_28; }
	inline void set_U3CU3Ef__switchU24map8_28(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map8_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_29() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24map9_29)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map9_29() const { return ___U3CU3Ef__switchU24map9_29; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map9_29() { return &___U3CU3Ef__switchU24map9_29; }
	inline void set_U3CU3Ef__switchU24map9_29(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map9_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_30() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24mapA_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapA_30() const { return ___U3CU3Ef__switchU24mapA_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapA_30() { return &___U3CU3Ef__switchU24mapA_30; }
	inline void set_U3CU3Ef__switchU24mapA_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapA_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_31() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24mapB_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapB_31() const { return ___U3CU3Ef__switchU24mapB_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapB_31() { return &___U3CU3Ef__switchU24mapB_31; }
	inline void set_U3CU3Ef__switchU24mapB_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapB_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_32() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24mapC_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapC_32() const { return ___U3CU3Ef__switchU24mapC_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapC_32() { return &___U3CU3Ef__switchU24mapC_32; }
	inline void set_U3CU3Ef__switchU24mapC_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapC_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_33() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24mapD_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapD_33() const { return ___U3CU3Ef__switchU24mapD_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapD_33() { return &___U3CU3Ef__switchU24mapD_33; }
	inline void set_U3CU3Ef__switchU24mapD_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapD_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapD_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_34() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24mapE_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapE_34() const { return ___U3CU3Ef__switchU24mapE_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapE_34() { return &___U3CU3Ef__switchU24mapE_34; }
	inline void set_U3CU3Ef__switchU24mapE_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapE_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_35() { return static_cast<int32_t>(offsetof(PKCS12_t4101533060_StaticFields, ___U3CU3Ef__switchU24mapF_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapF_35() const { return ___U3CU3Ef__switchU24mapF_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapF_35() { return &___U3CU3Ef__switchU24mapF_35; }
	inline void set_U3CU3Ef__switchU24mapF_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapF_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T4101533060_H
#ifndef DERIVEBYTES_T1492915135_H
#define DERIVEBYTES_T1492915135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t1492915135  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t4116647657* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t4116647657* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915135, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915135, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915135, ____password_5)); }
	inline ByteU5BU5D_t4116647657* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t4116647657* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915135, ____salt_6)); }
	inline ByteU5BU5D_t4116647657* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t4116647657* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t1492915135_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t4116647657* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t4116647657* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t4116647657* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915135_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t4116647657* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t4116647657* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915135_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t4116647657* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t4116647657* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915135_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t4116647657* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t4116647657* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T1492915135_H
#ifndef X501_T1758824425_H
#define X501_T1758824425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t1758824425  : public RuntimeObject
{
public:

public:
};

struct X501_t1758824425_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t4116647657* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t4116647657* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t4116647657* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t4116647657* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t4116647657* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t4116647657* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t4116647657* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t4116647657* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t4116647657* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t4116647657* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t4116647657* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t4116647657* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t4116647657* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t4116647657* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t4116647657* ___initial_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X501::<>f__switch$map10
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map10_15;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t4116647657* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t4116647657* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t4116647657* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t4116647657* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t4116647657* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t4116647657* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t4116647657* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t4116647657* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t4116647657* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t4116647657* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t4116647657* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t4116647657* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t4116647657* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t4116647657* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t4116647657* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t4116647657* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t4116647657* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t4116647657* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t4116647657* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t4116647657* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t4116647657* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t4116647657* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t4116647657* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t4116647657* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t4116647657* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t4116647657* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t4116647657* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t4116647657* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t4116647657* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t4116647657* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_15() { return static_cast<int32_t>(offsetof(X501_t1758824425_StaticFields, ___U3CU3Ef__switchU24map10_15)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map10_15() const { return ___U3CU3Ef__switchU24map10_15; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map10_15() { return &___U3CU3Ef__switchU24map10_15; }
	inline void set_U3CU3Ef__switchU24map10_15(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map10_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T1758824425_H
#ifndef X509CERTIFICATEENUMERATOR_T3515934697_H
#define X509CERTIFICATEENUMERATOR_T3515934697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3515934697  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3515934697, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3515934697_H
#ifndef X509EXTENSION_T3173393652_H
#define X509EXTENSION_T3173393652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t3173393652  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t2114160832 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t3173393652, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t3173393652, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t3173393652, ___extnValue_2)); }
	inline ASN1_t2114160832 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t2114160832 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t2114160832 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T3173393652_H
#ifndef X509STORE_T2777415283_H
#define X509STORE_T2777415283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t2777415283  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t1542168549 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t2718874744 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
	// System.String Mono.Security.X509.X509Store::_name
	String_t* ____name_4;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t2777415283, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t2777415283, ____certificates_1)); }
	inline X509CertificateCollection_t1542168549 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t1542168549 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t1542168549 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t2777415283, ____crls_2)); }
	inline ArrayList_t2718874744 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t2718874744 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t2718874744 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t2777415283, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(X509Store_t2777415283, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T2777415283_H
#ifndef CONTRACTION_T1589275354_H
#define CONTRACTION_T1589275354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t1589275354  : public RuntimeObject
{
public:
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t3528271667* ___Source_0;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_1;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t4116647657* ___SortKey_2;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Contraction_t1589275354, ___Source_0)); }
	inline CharU5BU5D_t3528271667* get_Source_0() const { return ___Source_0; }
	inline CharU5BU5D_t3528271667** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(CharU5BU5D_t3528271667* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Replacement_1() { return static_cast<int32_t>(offsetof(Contraction_t1589275354, ___Replacement_1)); }
	inline String_t* get_Replacement_1() const { return ___Replacement_1; }
	inline String_t** get_address_of_Replacement_1() { return &___Replacement_1; }
	inline void set_Replacement_1(String_t* value)
	{
		___Replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___Replacement_1), value);
	}

	inline static int32_t get_offset_of_SortKey_2() { return static_cast<int32_t>(offsetof(Contraction_t1589275354, ___SortKey_2)); }
	inline ByteU5BU5D_t4116647657* get_SortKey_2() const { return ___SortKey_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_SortKey_2() { return &___SortKey_2; }
	inline void set_SortKey_2(ByteU5BU5D_t4116647657* value)
	{
		___SortKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___SortKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTION_T1589275354_H
#ifndef REGISTRY_T2858193406_H
#define REGISTRY_T2858193406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Registry
struct  Registry_t2858193406  : public RuntimeObject
{
public:

public:
};

struct Registry_t2858193406_StaticFields
{
public:
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::ClassesRoot
	RegistryKey_t4211574351 * ___ClassesRoot_0;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentConfig
	RegistryKey_t4211574351 * ___CurrentConfig_1;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentUser
	RegistryKey_t4211574351 * ___CurrentUser_2;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::DynData
	RegistryKey_t4211574351 * ___DynData_3;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::LocalMachine
	RegistryKey_t4211574351 * ___LocalMachine_4;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::PerformanceData
	RegistryKey_t4211574351 * ___PerformanceData_5;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::Users
	RegistryKey_t4211574351 * ___Users_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Microsoft.Win32.Registry::<>f__switch$map0
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map0_7;

public:
	inline static int32_t get_offset_of_ClassesRoot_0() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___ClassesRoot_0)); }
	inline RegistryKey_t4211574351 * get_ClassesRoot_0() const { return ___ClassesRoot_0; }
	inline RegistryKey_t4211574351 ** get_address_of_ClassesRoot_0() { return &___ClassesRoot_0; }
	inline void set_ClassesRoot_0(RegistryKey_t4211574351 * value)
	{
		___ClassesRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassesRoot_0), value);
	}

	inline static int32_t get_offset_of_CurrentConfig_1() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___CurrentConfig_1)); }
	inline RegistryKey_t4211574351 * get_CurrentConfig_1() const { return ___CurrentConfig_1; }
	inline RegistryKey_t4211574351 ** get_address_of_CurrentConfig_1() { return &___CurrentConfig_1; }
	inline void set_CurrentConfig_1(RegistryKey_t4211574351 * value)
	{
		___CurrentConfig_1 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentConfig_1), value);
	}

	inline static int32_t get_offset_of_CurrentUser_2() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___CurrentUser_2)); }
	inline RegistryKey_t4211574351 * get_CurrentUser_2() const { return ___CurrentUser_2; }
	inline RegistryKey_t4211574351 ** get_address_of_CurrentUser_2() { return &___CurrentUser_2; }
	inline void set_CurrentUser_2(RegistryKey_t4211574351 * value)
	{
		___CurrentUser_2 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentUser_2), value);
	}

	inline static int32_t get_offset_of_DynData_3() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___DynData_3)); }
	inline RegistryKey_t4211574351 * get_DynData_3() const { return ___DynData_3; }
	inline RegistryKey_t4211574351 ** get_address_of_DynData_3() { return &___DynData_3; }
	inline void set_DynData_3(RegistryKey_t4211574351 * value)
	{
		___DynData_3 = value;
		Il2CppCodeGenWriteBarrier((&___DynData_3), value);
	}

	inline static int32_t get_offset_of_LocalMachine_4() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___LocalMachine_4)); }
	inline RegistryKey_t4211574351 * get_LocalMachine_4() const { return ___LocalMachine_4; }
	inline RegistryKey_t4211574351 ** get_address_of_LocalMachine_4() { return &___LocalMachine_4; }
	inline void set_LocalMachine_4(RegistryKey_t4211574351 * value)
	{
		___LocalMachine_4 = value;
		Il2CppCodeGenWriteBarrier((&___LocalMachine_4), value);
	}

	inline static int32_t get_offset_of_PerformanceData_5() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___PerformanceData_5)); }
	inline RegistryKey_t4211574351 * get_PerformanceData_5() const { return ___PerformanceData_5; }
	inline RegistryKey_t4211574351 ** get_address_of_PerformanceData_5() { return &___PerformanceData_5; }
	inline void set_PerformanceData_5(RegistryKey_t4211574351 * value)
	{
		___PerformanceData_5 = value;
		Il2CppCodeGenWriteBarrier((&___PerformanceData_5), value);
	}

	inline static int32_t get_offset_of_Users_6() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___Users_6)); }
	inline RegistryKey_t4211574351 * get_Users_6() const { return ___Users_6; }
	inline RegistryKey_t4211574351 ** get_address_of_Users_6() { return &___Users_6; }
	inline void set_Users_6(RegistryKey_t4211574351 * value)
	{
		___Users_6 = value;
		Il2CppCodeGenWriteBarrier((&___Users_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_7() { return static_cast<int32_t>(offsetof(Registry_t2858193406_StaticFields, ___U3CU3Ef__switchU24map0_7)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map0_7() const { return ___U3CU3Ef__switchU24map0_7; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map0_7() { return &___U3CU3Ef__switchU24map0_7; }
	inline void set_U3CU3Ef__switchU24map0_7(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRY_T2858193406_H
#ifndef CONTRACTIONCOMPARER_T2750537063_H
#define CONTRACTIONCOMPARER_T2750537063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.ContractionComparer
struct  ContractionComparer_t2750537063  : public RuntimeObject
{
public:

public:
};

struct ContractionComparer_t2750537063_StaticFields
{
public:
	// Mono.Globalization.Unicode.ContractionComparer Mono.Globalization.Unicode.ContractionComparer::Instance
	ContractionComparer_t2750537063 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ContractionComparer_t2750537063_StaticFields, ___Instance_0)); }
	inline ContractionComparer_t2750537063 * get_Instance_0() const { return ___Instance_0; }
	inline ContractionComparer_t2750537063 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ContractionComparer_t2750537063 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTIONCOMPARER_T2750537063_H
#ifndef LEVEL2MAP_T3640798870_H
#define LEVEL2MAP_T3640798870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2Map
struct  Level2Map_t3640798870  : public RuntimeObject
{
public:
	// System.Byte Mono.Globalization.Unicode.Level2Map::Source
	uint8_t ___Source_0;
	// System.Byte Mono.Globalization.Unicode.Level2Map::Replace
	uint8_t ___Replace_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Level2Map_t3640798870, ___Source_0)); }
	inline uint8_t get_Source_0() const { return ___Source_0; }
	inline uint8_t* get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(uint8_t value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_Replace_1() { return static_cast<int32_t>(offsetof(Level2Map_t3640798870, ___Replace_1)); }
	inline uint8_t get_Replace_1() const { return ___Replace_1; }
	inline uint8_t* get_address_of_Replace_1() { return &___Replace_1; }
	inline void set_Replace_1(uint8_t value)
	{
		___Replace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAP_T3640798870_H
#ifndef LEVEL2MAPCOMPARER_T1716225294_H
#define LEVEL2MAPCOMPARER_T1716225294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2MapComparer
struct  Level2MapComparer_t1716225294  : public RuntimeObject
{
public:

public:
};

struct Level2MapComparer_t1716225294_StaticFields
{
public:
	// Mono.Globalization.Unicode.Level2MapComparer Mono.Globalization.Unicode.Level2MapComparer::Instance
	Level2MapComparer_t1716225294 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Level2MapComparer_t1716225294_StaticFields, ___Instance_0)); }
	inline Level2MapComparer_t1716225294 * get_Instance_0() const { return ___Instance_0; }
	inline Level2MapComparer_t1716225294 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Level2MapComparer_t1716225294 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAPCOMPARER_T1716225294_H
#ifndef MSCOMPATUNICODETABLE_T1453885583_H
#define MSCOMPATUNICODETABLE_T1453885583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct  MSCompatUnicodeTable_t1453885583  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTable_t1453885583_StaticFields
{
public:
	// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::MaxExpansionLength
	int32_t ___MaxExpansionLength_1;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::ignorableFlags
	uint8_t* ___ignorableFlags_2;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::categories
	uint8_t* ___categories_3;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level1
	uint8_t* ___level1_4;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level2
	uint8_t* ___level2_5;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level3
	uint8_t* ___level3_6;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHScategory
	uint8_t* ___cjkCHScategory_7;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTcategory
	uint8_t* ___cjkCHTcategory_8;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAcategory
	uint8_t* ___cjkJAcategory_9;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOcategory
	uint8_t* ___cjkKOcategory_10;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHSlv1
	uint8_t* ___cjkCHSlv1_11;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTlv1
	uint8_t* ___cjkCHTlv1_12;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAlv1
	uint8_t* ___cjkJAlv1_13;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv1
	uint8_t* ___cjkKOlv1_14;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv2
	uint8_t* ___cjkKOlv2_15;
	// System.Char[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringArr
	CharU5BU5D_t3528271667* ___tailoringArr_16;
	// Mono.Globalization.Unicode.TailoringInfo[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringInfos
	TailoringInfoU5BU5D_t1797664499* ___tailoringInfos_17;
	// System.Object Mono.Globalization.Unicode.MSCompatUnicodeTable::forLock
	RuntimeObject * ___forLock_18;
	// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::isReady
	bool ___isReady_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map2
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map3
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map4
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map4_22;

public:
	inline static int32_t get_offset_of_MaxExpansionLength_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___MaxExpansionLength_1)); }
	inline int32_t get_MaxExpansionLength_1() const { return ___MaxExpansionLength_1; }
	inline int32_t* get_address_of_MaxExpansionLength_1() { return &___MaxExpansionLength_1; }
	inline void set_MaxExpansionLength_1(int32_t value)
	{
		___MaxExpansionLength_1 = value;
	}

	inline static int32_t get_offset_of_ignorableFlags_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___ignorableFlags_2)); }
	inline uint8_t* get_ignorableFlags_2() const { return ___ignorableFlags_2; }
	inline uint8_t** get_address_of_ignorableFlags_2() { return &___ignorableFlags_2; }
	inline void set_ignorableFlags_2(uint8_t* value)
	{
		___ignorableFlags_2 = value;
	}

	inline static int32_t get_offset_of_categories_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___categories_3)); }
	inline uint8_t* get_categories_3() const { return ___categories_3; }
	inline uint8_t** get_address_of_categories_3() { return &___categories_3; }
	inline void set_categories_3(uint8_t* value)
	{
		___categories_3 = value;
	}

	inline static int32_t get_offset_of_level1_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___level1_4)); }
	inline uint8_t* get_level1_4() const { return ___level1_4; }
	inline uint8_t** get_address_of_level1_4() { return &___level1_4; }
	inline void set_level1_4(uint8_t* value)
	{
		___level1_4 = value;
	}

	inline static int32_t get_offset_of_level2_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___level2_5)); }
	inline uint8_t* get_level2_5() const { return ___level2_5; }
	inline uint8_t** get_address_of_level2_5() { return &___level2_5; }
	inline void set_level2_5(uint8_t* value)
	{
		___level2_5 = value;
	}

	inline static int32_t get_offset_of_level3_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___level3_6)); }
	inline uint8_t* get_level3_6() const { return ___level3_6; }
	inline uint8_t** get_address_of_level3_6() { return &___level3_6; }
	inline void set_level3_6(uint8_t* value)
	{
		___level3_6 = value;
	}

	inline static int32_t get_offset_of_cjkCHScategory_7() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkCHScategory_7)); }
	inline uint8_t* get_cjkCHScategory_7() const { return ___cjkCHScategory_7; }
	inline uint8_t** get_address_of_cjkCHScategory_7() { return &___cjkCHScategory_7; }
	inline void set_cjkCHScategory_7(uint8_t* value)
	{
		___cjkCHScategory_7 = value;
	}

	inline static int32_t get_offset_of_cjkCHTcategory_8() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkCHTcategory_8)); }
	inline uint8_t* get_cjkCHTcategory_8() const { return ___cjkCHTcategory_8; }
	inline uint8_t** get_address_of_cjkCHTcategory_8() { return &___cjkCHTcategory_8; }
	inline void set_cjkCHTcategory_8(uint8_t* value)
	{
		___cjkCHTcategory_8 = value;
	}

	inline static int32_t get_offset_of_cjkJAcategory_9() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkJAcategory_9)); }
	inline uint8_t* get_cjkJAcategory_9() const { return ___cjkJAcategory_9; }
	inline uint8_t** get_address_of_cjkJAcategory_9() { return &___cjkJAcategory_9; }
	inline void set_cjkJAcategory_9(uint8_t* value)
	{
		___cjkJAcategory_9 = value;
	}

	inline static int32_t get_offset_of_cjkKOcategory_10() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkKOcategory_10)); }
	inline uint8_t* get_cjkKOcategory_10() const { return ___cjkKOcategory_10; }
	inline uint8_t** get_address_of_cjkKOcategory_10() { return &___cjkKOcategory_10; }
	inline void set_cjkKOcategory_10(uint8_t* value)
	{
		___cjkKOcategory_10 = value;
	}

	inline static int32_t get_offset_of_cjkCHSlv1_11() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkCHSlv1_11)); }
	inline uint8_t* get_cjkCHSlv1_11() const { return ___cjkCHSlv1_11; }
	inline uint8_t** get_address_of_cjkCHSlv1_11() { return &___cjkCHSlv1_11; }
	inline void set_cjkCHSlv1_11(uint8_t* value)
	{
		___cjkCHSlv1_11 = value;
	}

	inline static int32_t get_offset_of_cjkCHTlv1_12() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkCHTlv1_12)); }
	inline uint8_t* get_cjkCHTlv1_12() const { return ___cjkCHTlv1_12; }
	inline uint8_t** get_address_of_cjkCHTlv1_12() { return &___cjkCHTlv1_12; }
	inline void set_cjkCHTlv1_12(uint8_t* value)
	{
		___cjkCHTlv1_12 = value;
	}

	inline static int32_t get_offset_of_cjkJAlv1_13() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkJAlv1_13)); }
	inline uint8_t* get_cjkJAlv1_13() const { return ___cjkJAlv1_13; }
	inline uint8_t** get_address_of_cjkJAlv1_13() { return &___cjkJAlv1_13; }
	inline void set_cjkJAlv1_13(uint8_t* value)
	{
		___cjkJAlv1_13 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv1_14() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkKOlv1_14)); }
	inline uint8_t* get_cjkKOlv1_14() const { return ___cjkKOlv1_14; }
	inline uint8_t** get_address_of_cjkKOlv1_14() { return &___cjkKOlv1_14; }
	inline void set_cjkKOlv1_14(uint8_t* value)
	{
		___cjkKOlv1_14 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv2_15() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___cjkKOlv2_15)); }
	inline uint8_t* get_cjkKOlv2_15() const { return ___cjkKOlv2_15; }
	inline uint8_t** get_address_of_cjkKOlv2_15() { return &___cjkKOlv2_15; }
	inline void set_cjkKOlv2_15(uint8_t* value)
	{
		___cjkKOlv2_15 = value;
	}

	inline static int32_t get_offset_of_tailoringArr_16() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___tailoringArr_16)); }
	inline CharU5BU5D_t3528271667* get_tailoringArr_16() const { return ___tailoringArr_16; }
	inline CharU5BU5D_t3528271667** get_address_of_tailoringArr_16() { return &___tailoringArr_16; }
	inline void set_tailoringArr_16(CharU5BU5D_t3528271667* value)
	{
		___tailoringArr_16 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringArr_16), value);
	}

	inline static int32_t get_offset_of_tailoringInfos_17() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___tailoringInfos_17)); }
	inline TailoringInfoU5BU5D_t1797664499* get_tailoringInfos_17() const { return ___tailoringInfos_17; }
	inline TailoringInfoU5BU5D_t1797664499** get_address_of_tailoringInfos_17() { return &___tailoringInfos_17; }
	inline void set_tailoringInfos_17(TailoringInfoU5BU5D_t1797664499* value)
	{
		___tailoringInfos_17 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringInfos_17), value);
	}

	inline static int32_t get_offset_of_forLock_18() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___forLock_18)); }
	inline RuntimeObject * get_forLock_18() const { return ___forLock_18; }
	inline RuntimeObject ** get_address_of_forLock_18() { return &___forLock_18; }
	inline void set_forLock_18(RuntimeObject * value)
	{
		___forLock_18 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_18), value);
	}

	inline static int32_t get_offset_of_isReady_19() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___isReady_19)); }
	inline bool get_isReady_19() const { return ___isReady_19; }
	inline bool* get_address_of_isReady_19() { return &___isReady_19; }
	inline void set_isReady_19(bool value)
	{
		___isReady_19 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_20() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___U3CU3Ef__switchU24map2_20)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2_20() const { return ___U3CU3Ef__switchU24map2_20; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2_20() { return &___U3CU3Ef__switchU24map2_20; }
	inline void set_U3CU3Ef__switchU24map2_20(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_21() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___U3CU3Ef__switchU24map3_21)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3_21() const { return ___U3CU3Ef__switchU24map3_21; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3_21() { return &___U3CU3Ef__switchU24map3_21; }
	inline void set_U3CU3Ef__switchU24map3_21(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_22() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1453885583_StaticFields, ___U3CU3Ef__switchU24map4_22)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map4_22() const { return ___U3CU3Ef__switchU24map4_22; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map4_22() { return &___U3CU3Ef__switchU24map4_22; }
	inline void set_U3CU3Ef__switchU24map4_22(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map4_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLE_T1453885583_H
#ifndef MSCOMPATUNICODETABLEUTIL_T88013251_H
#define MSCOMPATUNICODETABLEUTIL_T88013251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTableUtil
struct  MSCompatUnicodeTableUtil_t88013251  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTableUtil_t88013251_StaticFields
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Ignorable
	CodePointIndexer_t4134431086 * ___Ignorable_1;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Category
	CodePointIndexer_t4134431086 * ___Category_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level1
	CodePointIndexer_t4134431086 * ___Level1_3;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level2
	CodePointIndexer_t4134431086 * ___Level2_4;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level3
	CodePointIndexer_t4134431086 * ___Level3_5;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::CjkCHS
	CodePointIndexer_t4134431086 * ___CjkCHS_6;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Cjk
	CodePointIndexer_t4134431086 * ___Cjk_7;

public:
	inline static int32_t get_offset_of_Ignorable_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t88013251_StaticFields, ___Ignorable_1)); }
	inline CodePointIndexer_t4134431086 * get_Ignorable_1() const { return ___Ignorable_1; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Ignorable_1() { return &___Ignorable_1; }
	inline void set_Ignorable_1(CodePointIndexer_t4134431086 * value)
	{
		___Ignorable_1 = value;
		Il2CppCodeGenWriteBarrier((&___Ignorable_1), value);
	}

	inline static int32_t get_offset_of_Category_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t88013251_StaticFields, ___Category_2)); }
	inline CodePointIndexer_t4134431086 * get_Category_2() const { return ___Category_2; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Category_2() { return &___Category_2; }
	inline void set_Category_2(CodePointIndexer_t4134431086 * value)
	{
		___Category_2 = value;
		Il2CppCodeGenWriteBarrier((&___Category_2), value);
	}

	inline static int32_t get_offset_of_Level1_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t88013251_StaticFields, ___Level1_3)); }
	inline CodePointIndexer_t4134431086 * get_Level1_3() const { return ___Level1_3; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Level1_3() { return &___Level1_3; }
	inline void set_Level1_3(CodePointIndexer_t4134431086 * value)
	{
		___Level1_3 = value;
		Il2CppCodeGenWriteBarrier((&___Level1_3), value);
	}

	inline static int32_t get_offset_of_Level2_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t88013251_StaticFields, ___Level2_4)); }
	inline CodePointIndexer_t4134431086 * get_Level2_4() const { return ___Level2_4; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Level2_4() { return &___Level2_4; }
	inline void set_Level2_4(CodePointIndexer_t4134431086 * value)
	{
		___Level2_4 = value;
		Il2CppCodeGenWriteBarrier((&___Level2_4), value);
	}

	inline static int32_t get_offset_of_Level3_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t88013251_StaticFields, ___Level3_5)); }
	inline CodePointIndexer_t4134431086 * get_Level3_5() const { return ___Level3_5; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Level3_5() { return &___Level3_5; }
	inline void set_Level3_5(CodePointIndexer_t4134431086 * value)
	{
		___Level3_5 = value;
		Il2CppCodeGenWriteBarrier((&___Level3_5), value);
	}

	inline static int32_t get_offset_of_CjkCHS_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t88013251_StaticFields, ___CjkCHS_6)); }
	inline CodePointIndexer_t4134431086 * get_CjkCHS_6() const { return ___CjkCHS_6; }
	inline CodePointIndexer_t4134431086 ** get_address_of_CjkCHS_6() { return &___CjkCHS_6; }
	inline void set_CjkCHS_6(CodePointIndexer_t4134431086 * value)
	{
		___CjkCHS_6 = value;
		Il2CppCodeGenWriteBarrier((&___CjkCHS_6), value);
	}

	inline static int32_t get_offset_of_Cjk_7() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t88013251_StaticFields, ___Cjk_7)); }
	inline CodePointIndexer_t4134431086 * get_Cjk_7() const { return ___Cjk_7; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Cjk_7() { return &___Cjk_7; }
	inline void set_Cjk_7(CodePointIndexer_t4134431086 * value)
	{
		___Cjk_7 = value;
		Il2CppCodeGenWriteBarrier((&___Cjk_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLEUTIL_T88013251_H
#ifndef TAILORINGINFO_T866433654_H
#define TAILORINGINFO_T866433654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.TailoringInfo
struct  TailoringInfo_t866433654  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::LCID
	int32_t ___LCID_0;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringIndex
	int32_t ___TailoringIndex_1;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringCount
	int32_t ___TailoringCount_2;
	// System.Boolean Mono.Globalization.Unicode.TailoringInfo::FrenchSort
	bool ___FrenchSort_3;

public:
	inline static int32_t get_offset_of_LCID_0() { return static_cast<int32_t>(offsetof(TailoringInfo_t866433654, ___LCID_0)); }
	inline int32_t get_LCID_0() const { return ___LCID_0; }
	inline int32_t* get_address_of_LCID_0() { return &___LCID_0; }
	inline void set_LCID_0(int32_t value)
	{
		___LCID_0 = value;
	}

	inline static int32_t get_offset_of_TailoringIndex_1() { return static_cast<int32_t>(offsetof(TailoringInfo_t866433654, ___TailoringIndex_1)); }
	inline int32_t get_TailoringIndex_1() const { return ___TailoringIndex_1; }
	inline int32_t* get_address_of_TailoringIndex_1() { return &___TailoringIndex_1; }
	inline void set_TailoringIndex_1(int32_t value)
	{
		___TailoringIndex_1 = value;
	}

	inline static int32_t get_offset_of_TailoringCount_2() { return static_cast<int32_t>(offsetof(TailoringInfo_t866433654, ___TailoringCount_2)); }
	inline int32_t get_TailoringCount_2() const { return ___TailoringCount_2; }
	inline int32_t* get_address_of_TailoringCount_2() { return &___TailoringCount_2; }
	inline void set_TailoringCount_2(int32_t value)
	{
		___TailoringCount_2 = value;
	}

	inline static int32_t get_offset_of_FrenchSort_3() { return static_cast<int32_t>(offsetof(TailoringInfo_t866433654, ___FrenchSort_3)); }
	inline bool get_FrenchSort_3() const { return ___FrenchSort_3; }
	inline bool* get_address_of_FrenchSort_3() { return &___FrenchSort_3; }
	inline void set_FrenchSort_3(bool value)
	{
		___FrenchSort_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILORINGINFO_T866433654_H
#ifndef EXPANDSTRING_T4278806409_H
#define EXPANDSTRING_T4278806409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.ExpandString
struct  ExpandString_t4278806409  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.ExpandString::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(ExpandString_t4278806409, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDSTRING_T4278806409_H
#ifndef KEYHANDLER_T326058990_H
#define KEYHANDLER_T326058990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.KeyHandler
struct  KeyHandler_t326058990  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.KeyHandler::Dir
	String_t* ___Dir_2;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::values
	Hashtable_t1853889766 * ___values_3;
	// System.String Microsoft.Win32.KeyHandler::file
	String_t* ___file_4;
	// System.Boolean Microsoft.Win32.KeyHandler::dirty
	bool ___dirty_5;

public:
	inline static int32_t get_offset_of_Dir_2() { return static_cast<int32_t>(offsetof(KeyHandler_t326058990, ___Dir_2)); }
	inline String_t* get_Dir_2() const { return ___Dir_2; }
	inline String_t** get_address_of_Dir_2() { return &___Dir_2; }
	inline void set_Dir_2(String_t* value)
	{
		___Dir_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dir_2), value);
	}

	inline static int32_t get_offset_of_values_3() { return static_cast<int32_t>(offsetof(KeyHandler_t326058990, ___values_3)); }
	inline Hashtable_t1853889766 * get_values_3() const { return ___values_3; }
	inline Hashtable_t1853889766 ** get_address_of_values_3() { return &___values_3; }
	inline void set_values_3(Hashtable_t1853889766 * value)
	{
		___values_3 = value;
		Il2CppCodeGenWriteBarrier((&___values_3), value);
	}

	inline static int32_t get_offset_of_file_4() { return static_cast<int32_t>(offsetof(KeyHandler_t326058990, ___file_4)); }
	inline String_t* get_file_4() const { return ___file_4; }
	inline String_t** get_address_of_file_4() { return &___file_4; }
	inline void set_file_4(String_t* value)
	{
		___file_4 = value;
		Il2CppCodeGenWriteBarrier((&___file_4), value);
	}

	inline static int32_t get_offset_of_dirty_5() { return static_cast<int32_t>(offsetof(KeyHandler_t326058990, ___dirty_5)); }
	inline bool get_dirty_5() const { return ___dirty_5; }
	inline bool* get_address_of_dirty_5() { return &___dirty_5; }
	inline void set_dirty_5(bool value)
	{
		___dirty_5 = value;
	}
};

struct KeyHandler_t326058990_StaticFields
{
public:
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::key_to_handler
	Hashtable_t1853889766 * ___key_to_handler_0;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::dir_to_handler
	Hashtable_t1853889766 * ___dir_to_handler_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Microsoft.Win32.KeyHandler::<>f__switch$map1
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1_6;

public:
	inline static int32_t get_offset_of_key_to_handler_0() { return static_cast<int32_t>(offsetof(KeyHandler_t326058990_StaticFields, ___key_to_handler_0)); }
	inline Hashtable_t1853889766 * get_key_to_handler_0() const { return ___key_to_handler_0; }
	inline Hashtable_t1853889766 ** get_address_of_key_to_handler_0() { return &___key_to_handler_0; }
	inline void set_key_to_handler_0(Hashtable_t1853889766 * value)
	{
		___key_to_handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_to_handler_0), value);
	}

	inline static int32_t get_offset_of_dir_to_handler_1() { return static_cast<int32_t>(offsetof(KeyHandler_t326058990_StaticFields, ___dir_to_handler_1)); }
	inline Hashtable_t1853889766 * get_dir_to_handler_1() const { return ___dir_to_handler_1; }
	inline Hashtable_t1853889766 ** get_address_of_dir_to_handler_1() { return &___dir_to_handler_1; }
	inline void set_dir_to_handler_1(Hashtable_t1853889766 * value)
	{
		___dir_to_handler_1 = value;
		Il2CppCodeGenWriteBarrier((&___dir_to_handler_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_6() { return static_cast<int32_t>(offsetof(KeyHandler_t326058990_StaticFields, ___U3CU3Ef__switchU24map1_6)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1_6() const { return ___U3CU3Ef__switchU24map1_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1_6() { return &___U3CU3Ef__switchU24map1_6; }
	inline void set_U3CU3Ef__switchU24map1_6(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYHANDLER_T326058990_H
#ifndef UNIXREGISTRYAPI_T2224917722_H
#define UNIXREGISTRYAPI_T2224917722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.UnixRegistryApi
struct  UnixRegistryApi_t2224917722  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXREGISTRYAPI_T2224917722_H
#ifndef WIN32REGISTRYAPI_T3010839375_H
#define WIN32REGISTRYAPI_T3010839375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32RegistryApi
struct  Win32RegistryApi_t3010839375  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32RegistryApi::NativeBytesPerCharacter
	int32_t ___NativeBytesPerCharacter_4;

public:
	inline static int32_t get_offset_of_NativeBytesPerCharacter_4() { return static_cast<int32_t>(offsetof(Win32RegistryApi_t3010839375, ___NativeBytesPerCharacter_4)); }
	inline int32_t get_NativeBytesPerCharacter_4() const { return ___NativeBytesPerCharacter_4; }
	inline int32_t* get_address_of_NativeBytesPerCharacter_4() { return &___NativeBytesPerCharacter_4; }
	inline void set_NativeBytesPerCharacter_4(int32_t value)
	{
		___NativeBytesPerCharacter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32REGISTRYAPI_T3010839375_H
#ifndef WIN32RESULTCODE_T387410494_H
#define WIN32RESULTCODE_T387410494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32ResultCode
struct  Win32ResultCode_t387410494  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32RESULTCODE_T387410494_H
#ifndef CODEPOINTINDEXER_T4134431086_H
#define CODEPOINTINDEXER_T4134431086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer
struct  CodePointIndexer_t4134431086  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer/TableRange[] Mono.Globalization.Unicode.CodePointIndexer::ranges
	TableRangeU5BU5D_t2913440125* ___ranges_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::TotalCount
	int32_t ___TotalCount_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultIndex
	int32_t ___defaultIndex_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultCP
	int32_t ___defaultCP_3;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4134431086, ___ranges_0)); }
	inline TableRangeU5BU5D_t2913440125* get_ranges_0() const { return ___ranges_0; }
	inline TableRangeU5BU5D_t2913440125** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(TableRangeU5BU5D_t2913440125* value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_TotalCount_1() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4134431086, ___TotalCount_1)); }
	inline int32_t get_TotalCount_1() const { return ___TotalCount_1; }
	inline int32_t* get_address_of_TotalCount_1() { return &___TotalCount_1; }
	inline void set_TotalCount_1(int32_t value)
	{
		___TotalCount_1 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_2() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4134431086, ___defaultIndex_2)); }
	inline int32_t get_defaultIndex_2() const { return ___defaultIndex_2; }
	inline int32_t* get_address_of_defaultIndex_2() { return &___defaultIndex_2; }
	inline void set_defaultIndex_2(int32_t value)
	{
		___defaultIndex_2 = value;
	}

	inline static int32_t get_offset_of_defaultCP_3() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4134431086, ___defaultCP_3)); }
	inline int32_t get_defaultCP_3() const { return ___defaultCP_3; }
	inline int32_t* get_address_of_defaultCP_3() { return &___defaultCP_3; }
	inline void set_defaultCP_3(int32_t value)
	{
		___defaultCP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPOINTINDEXER_T4134431086_H
#ifndef NORMALIZATIONTABLEUTIL_T3596622836_H
#define NORMALIZATIONTABLEUTIL_T3596622836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.NormalizationTableUtil
struct  NormalizationTableUtil_t3596622836  : public RuntimeObject
{
public:

public:
};

struct NormalizationTableUtil_t3596622836_StaticFields
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Prop
	CodePointIndexer_t4134431086 * ___Prop_0;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Map
	CodePointIndexer_t4134431086 * ___Map_1;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Combining
	CodePointIndexer_t4134431086 * ___Combining_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Composite
	CodePointIndexer_t4134431086 * ___Composite_3;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Helper
	CodePointIndexer_t4134431086 * ___Helper_4;

public:
	inline static int32_t get_offset_of_Prop_0() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3596622836_StaticFields, ___Prop_0)); }
	inline CodePointIndexer_t4134431086 * get_Prop_0() const { return ___Prop_0; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Prop_0() { return &___Prop_0; }
	inline void set_Prop_0(CodePointIndexer_t4134431086 * value)
	{
		___Prop_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prop_0), value);
	}

	inline static int32_t get_offset_of_Map_1() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3596622836_StaticFields, ___Map_1)); }
	inline CodePointIndexer_t4134431086 * get_Map_1() const { return ___Map_1; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Map_1() { return &___Map_1; }
	inline void set_Map_1(CodePointIndexer_t4134431086 * value)
	{
		___Map_1 = value;
		Il2CppCodeGenWriteBarrier((&___Map_1), value);
	}

	inline static int32_t get_offset_of_Combining_2() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3596622836_StaticFields, ___Combining_2)); }
	inline CodePointIndexer_t4134431086 * get_Combining_2() const { return ___Combining_2; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Combining_2() { return &___Combining_2; }
	inline void set_Combining_2(CodePointIndexer_t4134431086 * value)
	{
		___Combining_2 = value;
		Il2CppCodeGenWriteBarrier((&___Combining_2), value);
	}

	inline static int32_t get_offset_of_Composite_3() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3596622836_StaticFields, ___Composite_3)); }
	inline CodePointIndexer_t4134431086 * get_Composite_3() const { return ___Composite_3; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Composite_3() { return &___Composite_3; }
	inline void set_Composite_3(CodePointIndexer_t4134431086 * value)
	{
		___Composite_3 = value;
		Il2CppCodeGenWriteBarrier((&___Composite_3), value);
	}

	inline static int32_t get_offset_of_Helper_4() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3596622836_StaticFields, ___Helper_4)); }
	inline CodePointIndexer_t4134431086 * get_Helper_4() const { return ___Helper_4; }
	inline CodePointIndexer_t4134431086 ** get_address_of_Helper_4() { return &___Helper_4; }
	inline void set_Helper_4(CodePointIndexer_t4134431086 * value)
	{
		___Helper_4 = value;
		Il2CppCodeGenWriteBarrier((&___Helper_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NORMALIZATIONTABLEUTIL_T3596622836_H
#ifndef SIMPLECOLLATOR_T2877834729_H
#define SIMPLECOLLATOR_T2877834729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator
struct  SimpleCollator_t2877834729  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo Mono.Globalization.Unicode.SimpleCollator::textInfo
	TextInfo_t3810425522 * ___textInfo_3;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::frenchSort
	bool ___frenchSort_4;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkCatTable
	uint8_t* ___cjkCatTable_5;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv1Table
	uint8_t* ___cjkLv1Table_6;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkIndexer
	CodePointIndexer_t4134431086 * ___cjkIndexer_7;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv2Table
	uint8_t* ___cjkLv2Table_8;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkLv2Indexer
	CodePointIndexer_t4134431086 * ___cjkLv2Indexer_9;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator::lcid
	int32_t ___lcid_10;
	// Mono.Globalization.Unicode.Contraction[] Mono.Globalization.Unicode.SimpleCollator::contractions
	ContractionU5BU5D_t838556799* ___contractions_11;
	// Mono.Globalization.Unicode.Level2Map[] Mono.Globalization.Unicode.SimpleCollator::level2Maps
	Level2MapU5BU5D_t3973367379* ___level2Maps_12;
	// System.Byte[] Mono.Globalization.Unicode.SimpleCollator::unsafeFlags
	ByteU5BU5D_t4116647657* ___unsafeFlags_13;

public:
	inline static int32_t get_offset_of_textInfo_3() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___textInfo_3)); }
	inline TextInfo_t3810425522 * get_textInfo_3() const { return ___textInfo_3; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_3() { return &___textInfo_3; }
	inline void set_textInfo_3(TextInfo_t3810425522 * value)
	{
		___textInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_3), value);
	}

	inline static int32_t get_offset_of_frenchSort_4() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___frenchSort_4)); }
	inline bool get_frenchSort_4() const { return ___frenchSort_4; }
	inline bool* get_address_of_frenchSort_4() { return &___frenchSort_4; }
	inline void set_frenchSort_4(bool value)
	{
		___frenchSort_4 = value;
	}

	inline static int32_t get_offset_of_cjkCatTable_5() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___cjkCatTable_5)); }
	inline uint8_t* get_cjkCatTable_5() const { return ___cjkCatTable_5; }
	inline uint8_t** get_address_of_cjkCatTable_5() { return &___cjkCatTable_5; }
	inline void set_cjkCatTable_5(uint8_t* value)
	{
		___cjkCatTable_5 = value;
	}

	inline static int32_t get_offset_of_cjkLv1Table_6() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___cjkLv1Table_6)); }
	inline uint8_t* get_cjkLv1Table_6() const { return ___cjkLv1Table_6; }
	inline uint8_t** get_address_of_cjkLv1Table_6() { return &___cjkLv1Table_6; }
	inline void set_cjkLv1Table_6(uint8_t* value)
	{
		___cjkLv1Table_6 = value;
	}

	inline static int32_t get_offset_of_cjkIndexer_7() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___cjkIndexer_7)); }
	inline CodePointIndexer_t4134431086 * get_cjkIndexer_7() const { return ___cjkIndexer_7; }
	inline CodePointIndexer_t4134431086 ** get_address_of_cjkIndexer_7() { return &___cjkIndexer_7; }
	inline void set_cjkIndexer_7(CodePointIndexer_t4134431086 * value)
	{
		___cjkIndexer_7 = value;
		Il2CppCodeGenWriteBarrier((&___cjkIndexer_7), value);
	}

	inline static int32_t get_offset_of_cjkLv2Table_8() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___cjkLv2Table_8)); }
	inline uint8_t* get_cjkLv2Table_8() const { return ___cjkLv2Table_8; }
	inline uint8_t** get_address_of_cjkLv2Table_8() { return &___cjkLv2Table_8; }
	inline void set_cjkLv2Table_8(uint8_t* value)
	{
		___cjkLv2Table_8 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Indexer_9() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___cjkLv2Indexer_9)); }
	inline CodePointIndexer_t4134431086 * get_cjkLv2Indexer_9() const { return ___cjkLv2Indexer_9; }
	inline CodePointIndexer_t4134431086 ** get_address_of_cjkLv2Indexer_9() { return &___cjkLv2Indexer_9; }
	inline void set_cjkLv2Indexer_9(CodePointIndexer_t4134431086 * value)
	{
		___cjkLv2Indexer_9 = value;
		Il2CppCodeGenWriteBarrier((&___cjkLv2Indexer_9), value);
	}

	inline static int32_t get_offset_of_lcid_10() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___lcid_10)); }
	inline int32_t get_lcid_10() const { return ___lcid_10; }
	inline int32_t* get_address_of_lcid_10() { return &___lcid_10; }
	inline void set_lcid_10(int32_t value)
	{
		___lcid_10 = value;
	}

	inline static int32_t get_offset_of_contractions_11() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___contractions_11)); }
	inline ContractionU5BU5D_t838556799* get_contractions_11() const { return ___contractions_11; }
	inline ContractionU5BU5D_t838556799** get_address_of_contractions_11() { return &___contractions_11; }
	inline void set_contractions_11(ContractionU5BU5D_t838556799* value)
	{
		___contractions_11 = value;
		Il2CppCodeGenWriteBarrier((&___contractions_11), value);
	}

	inline static int32_t get_offset_of_level2Maps_12() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___level2Maps_12)); }
	inline Level2MapU5BU5D_t3973367379* get_level2Maps_12() const { return ___level2Maps_12; }
	inline Level2MapU5BU5D_t3973367379** get_address_of_level2Maps_12() { return &___level2Maps_12; }
	inline void set_level2Maps_12(Level2MapU5BU5D_t3973367379* value)
	{
		___level2Maps_12 = value;
		Il2CppCodeGenWriteBarrier((&___level2Maps_12), value);
	}

	inline static int32_t get_offset_of_unsafeFlags_13() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729, ___unsafeFlags_13)); }
	inline ByteU5BU5D_t4116647657* get_unsafeFlags_13() const { return ___unsafeFlags_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_unsafeFlags_13() { return &___unsafeFlags_13; }
	inline void set_unsafeFlags_13(ByteU5BU5D_t4116647657* value)
	{
		___unsafeFlags_13 = value;
		Il2CppCodeGenWriteBarrier((&___unsafeFlags_13), value);
	}
};

struct SimpleCollator_t2877834729_StaticFields
{
public:
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckDisabled
	bool ___QuickCheckDisabled_1;
	// Mono.Globalization.Unicode.SimpleCollator Mono.Globalization.Unicode.SimpleCollator::invariant
	SimpleCollator_t2877834729 * ___invariant_2;

public:
	inline static int32_t get_offset_of_QuickCheckDisabled_1() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729_StaticFields, ___QuickCheckDisabled_1)); }
	inline bool get_QuickCheckDisabled_1() const { return ___QuickCheckDisabled_1; }
	inline bool* get_address_of_QuickCheckDisabled_1() { return &___QuickCheckDisabled_1; }
	inline void set_QuickCheckDisabled_1(bool value)
	{
		___QuickCheckDisabled_1 = value;
	}

	inline static int32_t get_offset_of_invariant_2() { return static_cast<int32_t>(offsetof(SimpleCollator_t2877834729_StaticFields, ___invariant_2)); }
	inline SimpleCollator_t2877834729 * get_invariant_2() const { return ___invariant_2; }
	inline SimpleCollator_t2877834729 ** get_address_of_invariant_2() { return &___invariant_2; }
	inline void set_invariant_2(SimpleCollator_t2877834729 * value)
	{
		___invariant_2 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOLLATOR_T2877834729_H
#ifndef LOCALE_T4128636107_H
#define LOCALE_T4128636107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4128636107  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4128636107_H
#ifndef NORMALIZATION_T2983279112_H
#define NORMALIZATION_T2983279112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Normalization
struct  Normalization_t2983279112  : public RuntimeObject
{
public:

public:
};

struct Normalization_t2983279112_StaticFields
{
public:
	// System.Byte* Mono.Globalization.Unicode.Normalization::props
	uint8_t* ___props_17;
	// System.Int32* Mono.Globalization.Unicode.Normalization::mappedChars
	int32_t* ___mappedChars_18;
	// System.Int16* Mono.Globalization.Unicode.Normalization::charMapIndex
	int16_t* ___charMapIndex_19;
	// System.Int16* Mono.Globalization.Unicode.Normalization::helperIndex
	int16_t* ___helperIndex_20;
	// System.UInt16* Mono.Globalization.Unicode.Normalization::mapIdxToComposite
	uint16_t* ___mapIdxToComposite_21;
	// System.Byte* Mono.Globalization.Unicode.Normalization::combiningClass
	uint8_t* ___combiningClass_22;
	// System.Object Mono.Globalization.Unicode.Normalization::forLock
	RuntimeObject * ___forLock_23;
	// System.Boolean Mono.Globalization.Unicode.Normalization::isReady
	bool ___isReady_24;

public:
	inline static int32_t get_offset_of_props_17() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___props_17)); }
	inline uint8_t* get_props_17() const { return ___props_17; }
	inline uint8_t** get_address_of_props_17() { return &___props_17; }
	inline void set_props_17(uint8_t* value)
	{
		___props_17 = value;
	}

	inline static int32_t get_offset_of_mappedChars_18() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___mappedChars_18)); }
	inline int32_t* get_mappedChars_18() const { return ___mappedChars_18; }
	inline int32_t** get_address_of_mappedChars_18() { return &___mappedChars_18; }
	inline void set_mappedChars_18(int32_t* value)
	{
		___mappedChars_18 = value;
	}

	inline static int32_t get_offset_of_charMapIndex_19() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___charMapIndex_19)); }
	inline int16_t* get_charMapIndex_19() const { return ___charMapIndex_19; }
	inline int16_t** get_address_of_charMapIndex_19() { return &___charMapIndex_19; }
	inline void set_charMapIndex_19(int16_t* value)
	{
		___charMapIndex_19 = value;
	}

	inline static int32_t get_offset_of_helperIndex_20() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___helperIndex_20)); }
	inline int16_t* get_helperIndex_20() const { return ___helperIndex_20; }
	inline int16_t** get_address_of_helperIndex_20() { return &___helperIndex_20; }
	inline void set_helperIndex_20(int16_t* value)
	{
		___helperIndex_20 = value;
	}

	inline static int32_t get_offset_of_mapIdxToComposite_21() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___mapIdxToComposite_21)); }
	inline uint16_t* get_mapIdxToComposite_21() const { return ___mapIdxToComposite_21; }
	inline uint16_t** get_address_of_mapIdxToComposite_21() { return &___mapIdxToComposite_21; }
	inline void set_mapIdxToComposite_21(uint16_t* value)
	{
		___mapIdxToComposite_21 = value;
	}

	inline static int32_t get_offset_of_combiningClass_22() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___combiningClass_22)); }
	inline uint8_t* get_combiningClass_22() const { return ___combiningClass_22; }
	inline uint8_t** get_address_of_combiningClass_22() { return &___combiningClass_22; }
	inline void set_combiningClass_22(uint8_t* value)
	{
		___combiningClass_22 = value;
	}

	inline static int32_t get_offset_of_forLock_23() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___forLock_23)); }
	inline RuntimeObject * get_forLock_23() const { return ___forLock_23; }
	inline RuntimeObject ** get_address_of_forLock_23() { return &___forLock_23; }
	inline void set_forLock_23(RuntimeObject * value)
	{
		___forLock_23 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_23), value);
	}

	inline static int32_t get_offset_of_isReady_24() { return static_cast<int32_t>(offsetof(Normalization_t2983279112_StaticFields, ___isReady_24)); }
	inline bool get_isReady_24() const { return ___isReady_24; }
	inline bool* get_address_of_isReady_24() { return &___isReady_24; }
	inline void set_isReady_24(bool value)
	{
		___isReady_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NORMALIZATION_T2983279112_H
#ifndef SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#define SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct  SubjectKeyIdentifierExtension_t2404375272  : public X509Extension_t3173393652
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::ski
	ByteU5BU5D_t4116647657* ___ski_3;

public:
	inline static int32_t get_offset_of_ski_3() { return static_cast<int32_t>(offsetof(SubjectKeyIdentifierExtension_t2404375272, ___ski_3)); }
	inline ByteU5BU5D_t4116647657* get_ski_3() const { return ___ski_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_ski_3() { return &___ski_3; }
	inline void set_ski_3(ByteU5BU5D_t4116647657* value)
	{
		___ski_3 = value;
		Il2CppCodeGenWriteBarrier((&___ski_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#ifndef ESCAPE_T3294788190_H
#define ESCAPE_T3294788190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Escape
struct  Escape_t3294788190 
{
public:
	// System.String Mono.Globalization.Unicode.SimpleCollator/Escape::Source
	String_t* ___Source_0;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Index
	int32_t ___Index_1;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Start
	int32_t ___Start_2;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::End
	int32_t ___End_3;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Optional
	int32_t ___Optional_4;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Escape_t3294788190, ___Source_0)); }
	inline String_t* get_Source_0() const { return ___Source_0; }
	inline String_t** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(String_t* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Escape_t3294788190, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Start_2() { return static_cast<int32_t>(offsetof(Escape_t3294788190, ___Start_2)); }
	inline int32_t get_Start_2() const { return ___Start_2; }
	inline int32_t* get_address_of_Start_2() { return &___Start_2; }
	inline void set_Start_2(int32_t value)
	{
		___Start_2 = value;
	}

	inline static int32_t get_offset_of_End_3() { return static_cast<int32_t>(offsetof(Escape_t3294788190, ___End_3)); }
	inline int32_t get_End_3() const { return ___End_3; }
	inline int32_t* get_address_of_End_3() { return &___End_3; }
	inline void set_End_3(int32_t value)
	{
		___End_3 = value;
	}

	inline static int32_t get_offset_of_Optional_4() { return static_cast<int32_t>(offsetof(Escape_t3294788190, ___Optional_4)); }
	inline int32_t get_Optional_4() const { return ___Optional_4; }
	inline int32_t* get_address_of_Optional_4() { return &___Optional_4; }
	inline void set_Optional_4(int32_t value)
	{
		___Optional_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t3294788190_marshaled_pinvoke
{
	char* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t3294788190_marshaled_com
{
	Il2CppChar* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
#endif // ESCAPE_T3294788190_H
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
#ifndef PREVIOUSINFO_T2148130204_H
#define PREVIOUSINFO_T2148130204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct  PreviousInfo_t2148130204 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::Code
	int32_t ___Code_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::SortKey
	uint8_t* ___SortKey_1;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(PreviousInfo_t2148130204, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_SortKey_1() { return static_cast<int32_t>(offsetof(PreviousInfo_t2148130204, ___SortKey_1)); }
	inline uint8_t* get_SortKey_1() const { return ___SortKey_1; }
	inline uint8_t** get_address_of_SortKey_1() { return &___SortKey_1; }
	inline void set_SortKey_1(uint8_t* value)
	{
		___SortKey_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2148130204_marshaled_pinvoke
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2148130204_marshaled_com
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
#endif // PREVIOUSINFO_T2148130204_H
#ifndef RSA_T2385438082_H
#define RSA_T2385438082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t2385438082  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T2385438082_H
#ifndef BASICCONSTRAINTSEXTENSION_T2462195278_H
#define BASICCONSTRAINTSEXTENSION_T2462195278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t2462195278  : public X509Extension_t3173393652
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_4;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_5;

public:
	inline static int32_t get_offset_of_cA_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t2462195278, ___cA_4)); }
	inline bool get_cA_4() const { return ___cA_4; }
	inline bool* get_address_of_cA_4() { return &___cA_4; }
	inline void set_cA_4(bool value)
	{
		___cA_4 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_5() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t2462195278, ___pathLenConstraint_5)); }
	inline int32_t get_pathLenConstraint_5() const { return ___pathLenConstraint_5; }
	inline int32_t* get_address_of_pathLenConstraint_5() { return &___pathLenConstraint_5; }
	inline void set_pathLenConstraint_5(int32_t value)
	{
		___pathLenConstraint_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T2462195278_H
#ifndef KEYUSAGEEXTENSION_T1795615912_H
#define KEYUSAGEEXTENSION_T1795615912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsageExtension
struct  KeyUsageExtension_t1795615912  : public X509Extension_t3173393652
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsageExtension::kubits
	int32_t ___kubits_3;

public:
	inline static int32_t get_offset_of_kubits_3() { return static_cast<int32_t>(offsetof(KeyUsageExtension_t1795615912, ___kubits_3)); }
	inline int32_t get_kubits_3() const { return ___kubits_3; }
	inline int32_t* get_address_of_kubits_3() { return &___kubits_3; }
	inline void set_kubits_3(int32_t value)
	{
		___kubits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYUSAGEEXTENSION_T1795615912_H
#ifndef X509EXTENSIONCOLLECTION_T609554708_H
#define X509EXTENSIONCOLLECTION_T609554708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t609554708  : public CollectionBase_t2727926298
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t609554708, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T609554708_H
#ifndef REGISTRYKEY_T4211574351_H
#define REGISTRYKEY_T4211574351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKey
struct  RegistryKey_t4211574351  : public MarshalByRefObject_t2760389100
{
public:
	// System.Object Microsoft.Win32.RegistryKey::handle
	RuntimeObject * ___handle_1;
	// System.Object Microsoft.Win32.RegistryKey::hive
	RuntimeObject * ___hive_2;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_3;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_5;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(RegistryKey_t4211574351, ___handle_1)); }
	inline RuntimeObject * get_handle_1() const { return ___handle_1; }
	inline RuntimeObject ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(RuntimeObject * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_hive_2() { return static_cast<int32_t>(offsetof(RegistryKey_t4211574351, ___hive_2)); }
	inline RuntimeObject * get_hive_2() const { return ___hive_2; }
	inline RuntimeObject ** get_address_of_hive_2() { return &___hive_2; }
	inline void set_hive_2(RuntimeObject * value)
	{
		___hive_2 = value;
		Il2CppCodeGenWriteBarrier((&___hive_2), value);
	}

	inline static int32_t get_offset_of_qname_3() { return static_cast<int32_t>(offsetof(RegistryKey_t4211574351, ___qname_3)); }
	inline String_t* get_qname_3() const { return ___qname_3; }
	inline String_t** get_address_of_qname_3() { return &___qname_3; }
	inline void set_qname_3(String_t* value)
	{
		___qname_3 = value;
		Il2CppCodeGenWriteBarrier((&___qname_3), value);
	}

	inline static int32_t get_offset_of_isRemoteRoot_4() { return static_cast<int32_t>(offsetof(RegistryKey_t4211574351, ___isRemoteRoot_4)); }
	inline bool get_isRemoteRoot_4() const { return ___isRemoteRoot_4; }
	inline bool* get_address_of_isRemoteRoot_4() { return &___isRemoteRoot_4; }
	inline void set_isRemoteRoot_4(bool value)
	{
		___isRemoteRoot_4 = value;
	}

	inline static int32_t get_offset_of_isWritable_5() { return static_cast<int32_t>(offsetof(RegistryKey_t4211574351, ___isWritable_5)); }
	inline bool get_isWritable_5() const { return ___isWritable_5; }
	inline bool* get_address_of_isWritable_5() { return &___isWritable_5; }
	inline void set_isWritable_5(bool value)
	{
		___isWritable_5 = value;
	}
};

struct RegistryKey_t4211574351_StaticFields
{
public:
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	RuntimeObject* ___RegistryApi_6;

public:
	inline static int32_t get_offset_of_RegistryApi_6() { return static_cast<int32_t>(offsetof(RegistryKey_t4211574351_StaticFields, ___RegistryApi_6)); }
	inline RuntimeObject* get_RegistryApi_6() const { return ___RegistryApi_6; }
	inline RuntimeObject** get_address_of_RegistryApi_6() { return &___RegistryApi_6; }
	inline void set_RegistryApi_6(RuntimeObject* value)
	{
		___RegistryApi_6 = value;
		Il2CppCodeGenWriteBarrier((&___RegistryApi_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYKEY_T4211574351_H
#ifndef X509CERTIFICATECOLLECTION_T1542168549_H
#define X509CERTIFICATECOLLECTION_T1542168549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t1542168549  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T1542168549_H
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
#ifndef DSA_T2386879874_H
#define DSA_T2386879874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2386879874  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2386879874_H
#ifndef MONOTODOATTRIBUTE_T4131080581_H
#define MONOTODOATTRIBUTE_T4131080581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080581  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080581, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080581_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090508_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2996090508  : public PrimeGeneratorBase_t446028866
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090508_H
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
#ifndef COMINTEROPPROXY_T1891481270_H
#define COMINTEROPPROXY_T1891481270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Interop.ComInteropProxy
struct  ComInteropProxy_t1891481270  : public RealProxy_t2312050253
{
public:
	// System.__ComObject Mono.Interop.ComInteropProxy::com_object
	__ComObject_t2735933417 * ___com_object_8;
	// System.Int32 Mono.Interop.ComInteropProxy::ref_count
	int32_t ___ref_count_9;
	// System.String Mono.Interop.ComInteropProxy::type_name
	String_t* ___type_name_10;

public:
	inline static int32_t get_offset_of_com_object_8() { return static_cast<int32_t>(offsetof(ComInteropProxy_t1891481270, ___com_object_8)); }
	inline __ComObject_t2735933417 * get_com_object_8() const { return ___com_object_8; }
	inline __ComObject_t2735933417 ** get_address_of_com_object_8() { return &___com_object_8; }
	inline void set_com_object_8(__ComObject_t2735933417 * value)
	{
		___com_object_8 = value;
		Il2CppCodeGenWriteBarrier((&___com_object_8), value);
	}

	inline static int32_t get_offset_of_ref_count_9() { return static_cast<int32_t>(offsetof(ComInteropProxy_t1891481270, ___ref_count_9)); }
	inline int32_t get_ref_count_9() const { return ___ref_count_9; }
	inline int32_t* get_address_of_ref_count_9() { return &___ref_count_9; }
	inline void set_ref_count_9(int32_t value)
	{
		___ref_count_9 = value;
	}

	inline static int32_t get_offset_of_type_name_10() { return static_cast<int32_t>(offsetof(ComInteropProxy_t1891481270, ___type_name_10)); }
	inline String_t* get_type_name_10() const { return ___type_name_10; }
	inline String_t** get_address_of_type_name_10() { return &___type_name_10; }
	inline void set_type_name_10(String_t* value)
	{
		___type_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMINTEROPPROXY_T1891481270_H
#ifndef TABLERANGE_T3332867892_H
#define TABLERANGE_T3332867892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t3332867892 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t3332867892, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T3332867892_H
#ifndef MONOINTERNALNOTEATTRIBUTE_T2284022217_H
#define MONOINTERNALNOTEATTRIBUTE_T2284022217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoInternalNoteAttribute
struct  MonoInternalNoteAttribute_t2284022217  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOINTERNALNOTEATTRIBUTE_T2284022217_H
#ifndef X509CHAINSTATUSFLAGS_T1831553602_H
#define X509CHAINSTATUSFLAGS_T1831553602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1831553602 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1831553602, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1831553602_H
#ifndef MONOLIMITATIONATTRIBUTE_T3672514598_H
#define MONOLIMITATIONATTRIBUTE_T3672514598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoLimitationAttribute
struct  MonoLimitationAttribute_t3672514598  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOLIMITATIONATTRIBUTE_T3672514598_H
#ifndef MONODOCUMENTATIONNOTEATTRIBUTE_T493035051_H
#define MONODOCUMENTATIONNOTEATTRIBUTE_T493035051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoDocumentationNoteAttribute
struct  MonoDocumentationNoteAttribute_t493035051  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONODOCUMENTATIONNOTEATTRIBUTE_T493035051_H
#ifndef MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#define MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoNotSupportedAttribute
struct  MonoNotSupportedAttribute_t2563528020  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#ifndef CRITICALHANDLE_T2719507733_H
#define CRITICALHANDLE_T2719507733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CriticalHandle
struct  CriticalHandle_t2719507733  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.CriticalHandle::handle
	intptr_t ___handle_0;
	// System.Boolean System.Runtime.InteropServices.CriticalHandle::_disposed
	bool ____disposed_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CriticalHandle_t2719507733, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__disposed_1() { return static_cast<int32_t>(offsetof(CriticalHandle_t2719507733, ____disposed_1)); }
	inline bool get__disposed_1() const { return ____disposed_1; }
	inline bool* get_address_of__disposed_1() { return &____disposed_1; }
	inline void set__disposed_1(bool value)
	{
		____disposed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALHANDLE_T2719507733_H
#ifndef SAFEHANDLE_T3273388951_H
#define SAFEHANDLE_T3273388951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3273388951  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	intptr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3273388951_H
#ifndef MONOEXTENSIONATTRIBUTE_T4286882231_H
#define MONOEXTENSIONATTRIBUTE_T4286882231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoExtensionAttribute
struct  MonoExtensionAttribute_t4286882231  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEXTENSIONATTRIBUTE_T4286882231_H
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
#ifndef REGISTRYVALUEOPTIONS_T3620085242_H
#define REGISTRYVALUEOPTIONS_T3620085242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueOptions
struct  RegistryValueOptions_t3620085242 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryValueOptions_t3620085242, ___value___1)); }
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
#endif // REGISTRYVALUEOPTIONS_T3620085242_H
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
#ifndef KEYUSAGES_T820456313_H
#define KEYUSAGES_T820456313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsages
struct  KeyUsages_t820456313 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsages::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyUsages_t820456313, ___value___1)); }
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
#endif // KEYUSAGES_T820456313_H
#ifndef RSAMANAGED_T1757093819_H
#define RSAMANAGED_T1757093819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t1757093819  : public RSA_t2385438082
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_5;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t2902905089 * ___d_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t2902905089 * ___p_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t2902905089 * ___q_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t2902905089 * ___dp_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t2902905089 * ___dq_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t2902905089 * ___qInv_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t2902905089 * ___n_13;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t2902905089 * ___e_14;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3064139577 * ___KeyGenerated_15;

public:
	inline static int32_t get_offset_of_isCRTpossible_3() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___isCRTpossible_3)); }
	inline bool get_isCRTpossible_3() const { return ___isCRTpossible_3; }
	inline bool* get_address_of_isCRTpossible_3() { return &___isCRTpossible_3; }
	inline void set_isCRTpossible_3(bool value)
	{
		___isCRTpossible_3 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_4() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___keyBlinding_4)); }
	inline bool get_keyBlinding_4() const { return ___keyBlinding_4; }
	inline bool* get_address_of_keyBlinding_4() { return &___keyBlinding_4; }
	inline void set_keyBlinding_4(bool value)
	{
		___keyBlinding_4 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_5() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___keypairGenerated_5)); }
	inline bool get_keypairGenerated_5() const { return ___keypairGenerated_5; }
	inline bool* get_address_of_keypairGenerated_5() { return &___keypairGenerated_5; }
	inline void set_keypairGenerated_5(bool value)
	{
		___keypairGenerated_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___d_7)); }
	inline BigInteger_t2902905089 * get_d_7() const { return ___d_7; }
	inline BigInteger_t2902905089 ** get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(BigInteger_t2902905089 * value)
	{
		___d_7 = value;
		Il2CppCodeGenWriteBarrier((&___d_7), value);
	}

	inline static int32_t get_offset_of_p_8() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___p_8)); }
	inline BigInteger_t2902905089 * get_p_8() const { return ___p_8; }
	inline BigInteger_t2902905089 ** get_address_of_p_8() { return &___p_8; }
	inline void set_p_8(BigInteger_t2902905089 * value)
	{
		___p_8 = value;
		Il2CppCodeGenWriteBarrier((&___p_8), value);
	}

	inline static int32_t get_offset_of_q_9() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___q_9)); }
	inline BigInteger_t2902905089 * get_q_9() const { return ___q_9; }
	inline BigInteger_t2902905089 ** get_address_of_q_9() { return &___q_9; }
	inline void set_q_9(BigInteger_t2902905089 * value)
	{
		___q_9 = value;
		Il2CppCodeGenWriteBarrier((&___q_9), value);
	}

	inline static int32_t get_offset_of_dp_10() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___dp_10)); }
	inline BigInteger_t2902905089 * get_dp_10() const { return ___dp_10; }
	inline BigInteger_t2902905089 ** get_address_of_dp_10() { return &___dp_10; }
	inline void set_dp_10(BigInteger_t2902905089 * value)
	{
		___dp_10 = value;
		Il2CppCodeGenWriteBarrier((&___dp_10), value);
	}

	inline static int32_t get_offset_of_dq_11() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___dq_11)); }
	inline BigInteger_t2902905089 * get_dq_11() const { return ___dq_11; }
	inline BigInteger_t2902905089 ** get_address_of_dq_11() { return &___dq_11; }
	inline void set_dq_11(BigInteger_t2902905089 * value)
	{
		___dq_11 = value;
		Il2CppCodeGenWriteBarrier((&___dq_11), value);
	}

	inline static int32_t get_offset_of_qInv_12() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___qInv_12)); }
	inline BigInteger_t2902905089 * get_qInv_12() const { return ___qInv_12; }
	inline BigInteger_t2902905089 ** get_address_of_qInv_12() { return &___qInv_12; }
	inline void set_qInv_12(BigInteger_t2902905089 * value)
	{
		___qInv_12 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_12), value);
	}

	inline static int32_t get_offset_of_n_13() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___n_13)); }
	inline BigInteger_t2902905089 * get_n_13() const { return ___n_13; }
	inline BigInteger_t2902905089 ** get_address_of_n_13() { return &___n_13; }
	inline void set_n_13(BigInteger_t2902905089 * value)
	{
		___n_13 = value;
		Il2CppCodeGenWriteBarrier((&___n_13), value);
	}

	inline static int32_t get_offset_of_e_14() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___e_14)); }
	inline BigInteger_t2902905089 * get_e_14() const { return ___e_14; }
	inline BigInteger_t2902905089 ** get_address_of_e_14() { return &___e_14; }
	inline void set_e_14(BigInteger_t2902905089 * value)
	{
		___e_14 = value;
		Il2CppCodeGenWriteBarrier((&___e_14), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_15() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___KeyGenerated_15)); }
	inline KeyGeneratedEventHandler_t3064139577 * get_KeyGenerated_15() const { return ___KeyGenerated_15; }
	inline KeyGeneratedEventHandler_t3064139577 ** get_address_of_KeyGenerated_15() { return &___KeyGenerated_15; }
	inline void set_KeyGenerated_15(KeyGeneratedEventHandler_t3064139577 * value)
	{
		___KeyGenerated_15 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T1757093819_H
#ifndef KEYINFO_T3707773640_H
#define KEYINFO_T3707773640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/KeyInfo
struct  KeyInfo_t3707773640 
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/KeyInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyInfo_t3707773640, ___value___1)); }
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
#endif // KEYINFO_T3707773640_H
#ifndef DSAMANAGED_T2800260182_H
#define DSAMANAGED_T2800260182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged
struct  DSAManaged_t2800260182  : public DSA_t2386879874
{
public:
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated_3;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t2902905089 * ___p_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t2902905089 * ___q_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t2902905089 * ___g_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t2902905089 * ___x_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t2902905089 * ___y_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t2902905089 * ___j_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t2902905089 * ___seed_11;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter_12;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing_13;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t386037858 * ___rng_14;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3828027274 * ___KeyGenerated_15;

public:
	inline static int32_t get_offset_of_keypairGenerated_3() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___keypairGenerated_3)); }
	inline bool get_keypairGenerated_3() const { return ___keypairGenerated_3; }
	inline bool* get_address_of_keypairGenerated_3() { return &___keypairGenerated_3; }
	inline void set_keypairGenerated_3(bool value)
	{
		___keypairGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_disposed_4() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___m_disposed_4)); }
	inline bool get_m_disposed_4() const { return ___m_disposed_4; }
	inline bool* get_address_of_m_disposed_4() { return &___m_disposed_4; }
	inline void set_m_disposed_4(bool value)
	{
		___m_disposed_4 = value;
	}

	inline static int32_t get_offset_of_p_5() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___p_5)); }
	inline BigInteger_t2902905089 * get_p_5() const { return ___p_5; }
	inline BigInteger_t2902905089 ** get_address_of_p_5() { return &___p_5; }
	inline void set_p_5(BigInteger_t2902905089 * value)
	{
		___p_5 = value;
		Il2CppCodeGenWriteBarrier((&___p_5), value);
	}

	inline static int32_t get_offset_of_q_6() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___q_6)); }
	inline BigInteger_t2902905089 * get_q_6() const { return ___q_6; }
	inline BigInteger_t2902905089 ** get_address_of_q_6() { return &___q_6; }
	inline void set_q_6(BigInteger_t2902905089 * value)
	{
		___q_6 = value;
		Il2CppCodeGenWriteBarrier((&___q_6), value);
	}

	inline static int32_t get_offset_of_g_7() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___g_7)); }
	inline BigInteger_t2902905089 * get_g_7() const { return ___g_7; }
	inline BigInteger_t2902905089 ** get_address_of_g_7() { return &___g_7; }
	inline void set_g_7(BigInteger_t2902905089 * value)
	{
		___g_7 = value;
		Il2CppCodeGenWriteBarrier((&___g_7), value);
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___x_8)); }
	inline BigInteger_t2902905089 * get_x_8() const { return ___x_8; }
	inline BigInteger_t2902905089 ** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(BigInteger_t2902905089 * value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}

	inline static int32_t get_offset_of_y_9() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___y_9)); }
	inline BigInteger_t2902905089 * get_y_9() const { return ___y_9; }
	inline BigInteger_t2902905089 ** get_address_of_y_9() { return &___y_9; }
	inline void set_y_9(BigInteger_t2902905089 * value)
	{
		___y_9 = value;
		Il2CppCodeGenWriteBarrier((&___y_9), value);
	}

	inline static int32_t get_offset_of_j_10() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___j_10)); }
	inline BigInteger_t2902905089 * get_j_10() const { return ___j_10; }
	inline BigInteger_t2902905089 ** get_address_of_j_10() { return &___j_10; }
	inline void set_j_10(BigInteger_t2902905089 * value)
	{
		___j_10 = value;
		Il2CppCodeGenWriteBarrier((&___j_10), value);
	}

	inline static int32_t get_offset_of_seed_11() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___seed_11)); }
	inline BigInteger_t2902905089 * get_seed_11() const { return ___seed_11; }
	inline BigInteger_t2902905089 ** get_address_of_seed_11() { return &___seed_11; }
	inline void set_seed_11(BigInteger_t2902905089 * value)
	{
		___seed_11 = value;
		Il2CppCodeGenWriteBarrier((&___seed_11), value);
	}

	inline static int32_t get_offset_of_counter_12() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___counter_12)); }
	inline int32_t get_counter_12() const { return ___counter_12; }
	inline int32_t* get_address_of_counter_12() { return &___counter_12; }
	inline void set_counter_12(int32_t value)
	{
		___counter_12 = value;
	}

	inline static int32_t get_offset_of_j_missing_13() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___j_missing_13)); }
	inline bool get_j_missing_13() const { return ___j_missing_13; }
	inline bool* get_address_of_j_missing_13() { return &___j_missing_13; }
	inline void set_j_missing_13(bool value)
	{
		___j_missing_13 = value;
	}

	inline static int32_t get_offset_of_rng_14() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___rng_14)); }
	inline RandomNumberGenerator_t386037858 * get_rng_14() const { return ___rng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_14() { return &___rng_14; }
	inline void set_rng_14(RandomNumberGenerator_t386037858 * value)
	{
		___rng_14 = value;
		Il2CppCodeGenWriteBarrier((&___rng_14), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_15() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___KeyGenerated_15)); }
	inline KeyGeneratedEventHandler_t3828027274 * get_KeyGenerated_15() const { return ___KeyGenerated_15; }
	inline KeyGeneratedEventHandler_t3828027274 ** get_address_of_KeyGenerated_15() { return &___KeyGenerated_15; }
	inline void set_KeyGenerated_15(KeyGeneratedEventHandler_t3828027274 * value)
	{
		___KeyGenerated_15 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAMANAGED_T2800260182_H
#ifndef EXTENDERTYPE_T2449612322_H
#define EXTENDERTYPE_T2449612322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
struct  ExtenderType_t2449612322 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/ExtenderType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExtenderType_t2449612322, ___value___1)); }
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
#endif // EXTENDERTYPE_T2449612322_H
#ifndef NEXTPRIMEFINDER_T2637458097_H
#define NEXTPRIMEFINDER_T2637458097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.NextPrimeFinder
struct  NextPrimeFinder_t2637458097  : public SequentialSearchPrimeGeneratorBase_t2996090508
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXTPRIMEFINDER_T2637458097_H
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
#ifndef SIGN_T3338384038_H
#define SIGN_T3338384038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t3338384038 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t3338384038, ___value___1)); }
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
#endif // SIGN_T3338384038_H
#ifndef NORMALIZATIONCHECK_T1876602788_H
#define NORMALIZATIONCHECK_T1876602788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.NormalizationCheck
struct  NormalizationCheck_t1876602788 
{
public:
	// System.Int32 Mono.Globalization.Unicode.NormalizationCheck::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NormalizationCheck_t1876602788, ___value___1)); }
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
#endif // NORMALIZATIONCHECK_T1876602788_H
#ifndef AUTHORITY_T1135068812_H
#define AUTHORITY_T1135068812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.Authority
struct  Authority_t1135068812 
{
public:
	// System.Int32 Mono.Security.Authenticode.Authority::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Authority_t1135068812, ___value___1)); }
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
#endif // AUTHORITY_T1135068812_H
#ifndef REGISTRYVALUEKIND_T419280684_H
#define REGISTRYVALUEKIND_T419280684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueKind
struct  RegistryValueKind_t419280684 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryValueKind_t419280684, ___value___1)); }
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
#endif // REGISTRYVALUEKIND_T419280684_H
#ifndef PURPOSE_T1676893114_H
#define PURPOSE_T1676893114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes/Purpose
struct  Purpose_t1676893114 
{
public:
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes/Purpose::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Purpose_t1676893114, ___value___1)); }
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
#endif // PURPOSE_T1676893114_H
#ifndef REGISTRYKEYPERMISSIONCHECK_T4107419930_H
#define REGISTRYKEYPERMISSIONCHECK_T4107419930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKeyPermissionCheck
struct  RegistryKeyPermissionCheck_t4107419930 
{
public:
	// System.Int32 Microsoft.Win32.RegistryKeyPermissionCheck::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryKeyPermissionCheck_t4107419930, ___value___1)); }
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
#endif // REGISTRYKEYPERMISSIONCHECK_T4107419930_H
#ifndef REGISTRYHIVE_T2820489035_H
#define REGISTRYHIVE_T2820489035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryHive
struct  RegistryHive_t2820489035 
{
public:
	// System.Int32 Microsoft.Win32.RegistryHive::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryHive_t2820489035, ___value___1)); }
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
#endif // REGISTRYHIVE_T2820489035_H
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
#ifndef CRITICALHANDLEZEROORMINUSONEISINVALID_T138750170_H
#define CRITICALHANDLEZEROORMINUSONEISINVALID_T138750170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.CriticalHandleZeroOrMinusOneIsInvalid
struct  CriticalHandleZeroOrMinusOneIsInvalid_t138750170  : public CriticalHandle_t2719507733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALHANDLEZEROORMINUSONEISINVALID_T138750170_H
#ifndef SORTKEYBUFFER_T2945275270_H
#define SORTKEYBUFFER_T2945275270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SortKeyBuffer
struct  SortKeyBuffer_t2945275270  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l1
	int32_t ___l1_0;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l2
	int32_t ___l2_1;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l3
	int32_t ___l3_2;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4s
	int32_t ___l4s_3;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4t
	int32_t ___l4t_4;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4k
	int32_t ___l4k_5;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4w
	int32_t ___l4w_6;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l5
	int32_t ___l5_7;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l1b
	ByteU5BU5D_t4116647657* ___l1b_8;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l2b
	ByteU5BU5D_t4116647657* ___l2b_9;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l3b
	ByteU5BU5D_t4116647657* ___l3b_10;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4sb
	ByteU5BU5D_t4116647657* ___l4sb_11;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4tb
	ByteU5BU5D_t4116647657* ___l4tb_12;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4kb
	ByteU5BU5D_t4116647657* ___l4kb_13;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4wb
	ByteU5BU5D_t4116647657* ___l4wb_14;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l5b
	ByteU5BU5D_t4116647657* ___l5b_15;
	// System.String Mono.Globalization.Unicode.SortKeyBuffer::source
	String_t* ___source_16;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::processLevel2
	bool ___processLevel2_17;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSort
	bool ___frenchSort_18;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSorted
	bool ___frenchSorted_19;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::lcid
	int32_t ___lcid_20;
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SortKeyBuffer::options
	int32_t ___options_21;

public:
	inline static int32_t get_offset_of_l1_0() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l1_0)); }
	inline int32_t get_l1_0() const { return ___l1_0; }
	inline int32_t* get_address_of_l1_0() { return &___l1_0; }
	inline void set_l1_0(int32_t value)
	{
		___l1_0 = value;
	}

	inline static int32_t get_offset_of_l2_1() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l2_1)); }
	inline int32_t get_l2_1() const { return ___l2_1; }
	inline int32_t* get_address_of_l2_1() { return &___l2_1; }
	inline void set_l2_1(int32_t value)
	{
		___l2_1 = value;
	}

	inline static int32_t get_offset_of_l3_2() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l3_2)); }
	inline int32_t get_l3_2() const { return ___l3_2; }
	inline int32_t* get_address_of_l3_2() { return &___l3_2; }
	inline void set_l3_2(int32_t value)
	{
		___l3_2 = value;
	}

	inline static int32_t get_offset_of_l4s_3() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4s_3)); }
	inline int32_t get_l4s_3() const { return ___l4s_3; }
	inline int32_t* get_address_of_l4s_3() { return &___l4s_3; }
	inline void set_l4s_3(int32_t value)
	{
		___l4s_3 = value;
	}

	inline static int32_t get_offset_of_l4t_4() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4t_4)); }
	inline int32_t get_l4t_4() const { return ___l4t_4; }
	inline int32_t* get_address_of_l4t_4() { return &___l4t_4; }
	inline void set_l4t_4(int32_t value)
	{
		___l4t_4 = value;
	}

	inline static int32_t get_offset_of_l4k_5() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4k_5)); }
	inline int32_t get_l4k_5() const { return ___l4k_5; }
	inline int32_t* get_address_of_l4k_5() { return &___l4k_5; }
	inline void set_l4k_5(int32_t value)
	{
		___l4k_5 = value;
	}

	inline static int32_t get_offset_of_l4w_6() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4w_6)); }
	inline int32_t get_l4w_6() const { return ___l4w_6; }
	inline int32_t* get_address_of_l4w_6() { return &___l4w_6; }
	inline void set_l4w_6(int32_t value)
	{
		___l4w_6 = value;
	}

	inline static int32_t get_offset_of_l5_7() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l5_7)); }
	inline int32_t get_l5_7() const { return ___l5_7; }
	inline int32_t* get_address_of_l5_7() { return &___l5_7; }
	inline void set_l5_7(int32_t value)
	{
		___l5_7 = value;
	}

	inline static int32_t get_offset_of_l1b_8() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l1b_8)); }
	inline ByteU5BU5D_t4116647657* get_l1b_8() const { return ___l1b_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_l1b_8() { return &___l1b_8; }
	inline void set_l1b_8(ByteU5BU5D_t4116647657* value)
	{
		___l1b_8 = value;
		Il2CppCodeGenWriteBarrier((&___l1b_8), value);
	}

	inline static int32_t get_offset_of_l2b_9() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l2b_9)); }
	inline ByteU5BU5D_t4116647657* get_l2b_9() const { return ___l2b_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_l2b_9() { return &___l2b_9; }
	inline void set_l2b_9(ByteU5BU5D_t4116647657* value)
	{
		___l2b_9 = value;
		Il2CppCodeGenWriteBarrier((&___l2b_9), value);
	}

	inline static int32_t get_offset_of_l3b_10() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l3b_10)); }
	inline ByteU5BU5D_t4116647657* get_l3b_10() const { return ___l3b_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_l3b_10() { return &___l3b_10; }
	inline void set_l3b_10(ByteU5BU5D_t4116647657* value)
	{
		___l3b_10 = value;
		Il2CppCodeGenWriteBarrier((&___l3b_10), value);
	}

	inline static int32_t get_offset_of_l4sb_11() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4sb_11)); }
	inline ByteU5BU5D_t4116647657* get_l4sb_11() const { return ___l4sb_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_l4sb_11() { return &___l4sb_11; }
	inline void set_l4sb_11(ByteU5BU5D_t4116647657* value)
	{
		___l4sb_11 = value;
		Il2CppCodeGenWriteBarrier((&___l4sb_11), value);
	}

	inline static int32_t get_offset_of_l4tb_12() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4tb_12)); }
	inline ByteU5BU5D_t4116647657* get_l4tb_12() const { return ___l4tb_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_l4tb_12() { return &___l4tb_12; }
	inline void set_l4tb_12(ByteU5BU5D_t4116647657* value)
	{
		___l4tb_12 = value;
		Il2CppCodeGenWriteBarrier((&___l4tb_12), value);
	}

	inline static int32_t get_offset_of_l4kb_13() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4kb_13)); }
	inline ByteU5BU5D_t4116647657* get_l4kb_13() const { return ___l4kb_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_l4kb_13() { return &___l4kb_13; }
	inline void set_l4kb_13(ByteU5BU5D_t4116647657* value)
	{
		___l4kb_13 = value;
		Il2CppCodeGenWriteBarrier((&___l4kb_13), value);
	}

	inline static int32_t get_offset_of_l4wb_14() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l4wb_14)); }
	inline ByteU5BU5D_t4116647657* get_l4wb_14() const { return ___l4wb_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_l4wb_14() { return &___l4wb_14; }
	inline void set_l4wb_14(ByteU5BU5D_t4116647657* value)
	{
		___l4wb_14 = value;
		Il2CppCodeGenWriteBarrier((&___l4wb_14), value);
	}

	inline static int32_t get_offset_of_l5b_15() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___l5b_15)); }
	inline ByteU5BU5D_t4116647657* get_l5b_15() const { return ___l5b_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_l5b_15() { return &___l5b_15; }
	inline void set_l5b_15(ByteU5BU5D_t4116647657* value)
	{
		___l5b_15 = value;
		Il2CppCodeGenWriteBarrier((&___l5b_15), value);
	}

	inline static int32_t get_offset_of_source_16() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___source_16)); }
	inline String_t* get_source_16() const { return ___source_16; }
	inline String_t** get_address_of_source_16() { return &___source_16; }
	inline void set_source_16(String_t* value)
	{
		___source_16 = value;
		Il2CppCodeGenWriteBarrier((&___source_16), value);
	}

	inline static int32_t get_offset_of_processLevel2_17() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___processLevel2_17)); }
	inline bool get_processLevel2_17() const { return ___processLevel2_17; }
	inline bool* get_address_of_processLevel2_17() { return &___processLevel2_17; }
	inline void set_processLevel2_17(bool value)
	{
		___processLevel2_17 = value;
	}

	inline static int32_t get_offset_of_frenchSort_18() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___frenchSort_18)); }
	inline bool get_frenchSort_18() const { return ___frenchSort_18; }
	inline bool* get_address_of_frenchSort_18() { return &___frenchSort_18; }
	inline void set_frenchSort_18(bool value)
	{
		___frenchSort_18 = value;
	}

	inline static int32_t get_offset_of_frenchSorted_19() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___frenchSorted_19)); }
	inline bool get_frenchSorted_19() const { return ___frenchSorted_19; }
	inline bool* get_address_of_frenchSorted_19() { return &___frenchSorted_19; }
	inline void set_frenchSorted_19(bool value)
	{
		___frenchSorted_19 = value;
	}

	inline static int32_t get_offset_of_lcid_20() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___lcid_20)); }
	inline int32_t get_lcid_20() const { return ___lcid_20; }
	inline int32_t* get_address_of_lcid_20() { return &___lcid_20; }
	inline void set_lcid_20(int32_t value)
	{
		___lcid_20 = value;
	}

	inline static int32_t get_offset_of_options_21() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t2945275270, ___options_21)); }
	inline int32_t get_options_21() const { return ___options_21; }
	inline int32_t* get_address_of_options_21() { return &___options_21; }
	inline void set_options_21(int32_t value)
	{
		___options_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTKEYBUFFER_T2945275270_H
#ifndef SORTKEY_T3955336732_H
#define SORTKEY_T3955336732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.SortKey
struct  SortKey_t3955336732  : public RuntimeObject
{
public:
	// System.String System.Globalization.SortKey::source
	String_t* ___source_0;
	// System.Globalization.CompareOptions System.Globalization.SortKey::options
	int32_t ___options_1;
	// System.Byte[] System.Globalization.SortKey::key
	ByteU5BU5D_t4116647657* ___key_2;
	// System.Int32 System.Globalization.SortKey::lcid
	int32_t ___lcid_3;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___source_0)); }
	inline String_t* get_source_0() const { return ___source_0; }
	inline String_t** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(String_t* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___options_1)); }
	inline int32_t get_options_1() const { return ___options_1; }
	inline int32_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(int32_t value)
	{
		___options_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___key_2)); }
	inline ByteU5BU5D_t4116647657* get_key_2() const { return ___key_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(ByteU5BU5D_t4116647657* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((&___key_2), value);
	}

	inline static int32_t get_offset_of_lcid_3() { return static_cast<int32_t>(offsetof(SortKey_t3955336732, ___lcid_3)); }
	inline int32_t get_lcid_3() const { return ___lcid_3; }
	inline int32_t* get_address_of_lcid_3() { return &___lcid_3; }
	inline void set_lcid_3(int32_t value)
	{
		___lcid_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTKEY_T3955336732_H
#ifndef X509CHAIN_T863783600_H
#define X509CHAIN_T863783600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t863783600  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t1542168549 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t1542168549 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t489243024 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t1542168549 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t863783600, ___roots_0)); }
	inline X509CertificateCollection_t1542168549 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t1542168549 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t1542168549 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t863783600, ___certs_1)); }
	inline X509CertificateCollection_t1542168549 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t1542168549 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t1542168549 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t863783600, ____root_2)); }
	inline X509Certificate_t489243024 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t489243024 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t489243024 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t863783600, ____chain_3)); }
	inline X509CertificateCollection_t1542168549 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t1542168549 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t1542168549 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t863783600, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T863783600_H
#ifndef CRITICALHANDLEMINUSONEISINVALID_T4073868814_H
#define CRITICALHANDLEMINUSONEISINVALID_T4073868814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.CriticalHandleMinusOneIsInvalid
struct  CriticalHandleMinusOneIsInvalid_t4073868814  : public CriticalHandle_t2719507733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALHANDLEMINUSONEISINVALID_T4073868814_H
#ifndef SAFEHANDLEMINUSONEISINVALID_T4068229793_H
#define SAFEHANDLEMINUSONEISINVALID_T4068229793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleMinusOneIsInvalid
struct  SafeHandleMinusOneIsInvalid_t4068229793  : public SafeHandle_t3273388951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEMINUSONEISINVALID_T4068229793_H
#ifndef CONTEXT_T1744531130_H
#define CONTEXT_T1744531130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Context
struct  Context_t1744531130 
{
public:
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SimpleCollator/Context::Option
	int32_t ___Option_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::NeverMatchFlags
	uint8_t* ___NeverMatchFlags_1;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::AlwaysMatchFlags
	uint8_t* ___AlwaysMatchFlags_2;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer1
	uint8_t* ___Buffer1_3;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer2
	uint8_t* ___Buffer2_4;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Context::PrevCode
	int32_t ___PrevCode_5;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::PrevSortKey
	uint8_t* ___PrevSortKey_6;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator/Context::QuickCheckPossible
	bool ___QuickCheckPossible_7;

public:
	inline static int32_t get_offset_of_Option_0() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___Option_0)); }
	inline int32_t get_Option_0() const { return ___Option_0; }
	inline int32_t* get_address_of_Option_0() { return &___Option_0; }
	inline void set_Option_0(int32_t value)
	{
		___Option_0 = value;
	}

	inline static int32_t get_offset_of_NeverMatchFlags_1() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___NeverMatchFlags_1)); }
	inline uint8_t* get_NeverMatchFlags_1() const { return ___NeverMatchFlags_1; }
	inline uint8_t** get_address_of_NeverMatchFlags_1() { return &___NeverMatchFlags_1; }
	inline void set_NeverMatchFlags_1(uint8_t* value)
	{
		___NeverMatchFlags_1 = value;
	}

	inline static int32_t get_offset_of_AlwaysMatchFlags_2() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___AlwaysMatchFlags_2)); }
	inline uint8_t* get_AlwaysMatchFlags_2() const { return ___AlwaysMatchFlags_2; }
	inline uint8_t** get_address_of_AlwaysMatchFlags_2() { return &___AlwaysMatchFlags_2; }
	inline void set_AlwaysMatchFlags_2(uint8_t* value)
	{
		___AlwaysMatchFlags_2 = value;
	}

	inline static int32_t get_offset_of_Buffer1_3() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___Buffer1_3)); }
	inline uint8_t* get_Buffer1_3() const { return ___Buffer1_3; }
	inline uint8_t** get_address_of_Buffer1_3() { return &___Buffer1_3; }
	inline void set_Buffer1_3(uint8_t* value)
	{
		___Buffer1_3 = value;
	}

	inline static int32_t get_offset_of_Buffer2_4() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___Buffer2_4)); }
	inline uint8_t* get_Buffer2_4() const { return ___Buffer2_4; }
	inline uint8_t** get_address_of_Buffer2_4() { return &___Buffer2_4; }
	inline void set_Buffer2_4(uint8_t* value)
	{
		___Buffer2_4 = value;
	}

	inline static int32_t get_offset_of_PrevCode_5() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___PrevCode_5)); }
	inline int32_t get_PrevCode_5() const { return ___PrevCode_5; }
	inline int32_t* get_address_of_PrevCode_5() { return &___PrevCode_5; }
	inline void set_PrevCode_5(int32_t value)
	{
		___PrevCode_5 = value;
	}

	inline static int32_t get_offset_of_PrevSortKey_6() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___PrevSortKey_6)); }
	inline uint8_t* get_PrevSortKey_6() const { return ___PrevSortKey_6; }
	inline uint8_t** get_address_of_PrevSortKey_6() { return &___PrevSortKey_6; }
	inline void set_PrevSortKey_6(uint8_t* value)
	{
		___PrevSortKey_6 = value;
	}

	inline static int32_t get_offset_of_QuickCheckPossible_7() { return static_cast<int32_t>(offsetof(Context_t1744531130, ___QuickCheckPossible_7)); }
	inline bool get_QuickCheckPossible_7() const { return ___QuickCheckPossible_7; }
	inline bool* get_address_of_QuickCheckPossible_7() { return &___QuickCheckPossible_7; }
	inline void set_QuickCheckPossible_7(bool value)
	{
		___QuickCheckPossible_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t1744531130_marshaled_pinvoke
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
	int32_t ___QuickCheckPossible_7;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t1744531130_marshaled_com
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
	int32_t ___QuickCheckPossible_7;
};
#endif // CONTEXT_T1744531130_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1182193648  : public SafeHandle_t3273388951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifndef SAFEWAITHANDLE_T1972936122_H
#define SAFEWAITHANDLE_T1972936122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct  SafeWaitHandle_t1972936122  : public SafeHandleZeroOrMinusOneIsInvalid_t1182193648
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEWAITHANDLE_T1972936122_H
#ifndef KEYGENERATEDEVENTHANDLER_T3828027274_H
#define KEYGENERATEDEVENTHANDLER_T3828027274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3828027274  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3828027274_H
#ifndef SAFEFILEHANDLE_T2755812594_H
#define SAFEFILEHANDLE_T2755812594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct  SafeFileHandle_t2755812594  : public SafeHandleZeroOrMinusOneIsInvalid_t1182193648
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEFILEHANDLE_T2755812594_H
#ifndef AUTHENTICODEDEFORMATTER_T88130231_H
#define AUTHENTICODEDEFORMATTER_T88130231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t88130231  : public AuthenticodeBase_t263562949
{
public:
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_9;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t4116647657* ___hash_10;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t1542168549 * ___coll_11;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t2114160832 * ___signedHash_12;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t3738529785  ___timestamp_13;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t489243024 * ___signingCertificate_14;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_16;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_17;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t4116647657* ___entry_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t863783600 * ___signerChain_19;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t863783600 * ___timestampChain_20;

public:
	inline static int32_t get_offset_of_filename_9() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___filename_9)); }
	inline String_t* get_filename_9() const { return ___filename_9; }
	inline String_t** get_address_of_filename_9() { return &___filename_9; }
	inline void set_filename_9(String_t* value)
	{
		___filename_9 = value;
		Il2CppCodeGenWriteBarrier((&___filename_9), value);
	}

	inline static int32_t get_offset_of_hash_10() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___hash_10)); }
	inline ByteU5BU5D_t4116647657* get_hash_10() const { return ___hash_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_10() { return &___hash_10; }
	inline void set_hash_10(ByteU5BU5D_t4116647657* value)
	{
		___hash_10 = value;
		Il2CppCodeGenWriteBarrier((&___hash_10), value);
	}

	inline static int32_t get_offset_of_coll_11() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___coll_11)); }
	inline X509CertificateCollection_t1542168549 * get_coll_11() const { return ___coll_11; }
	inline X509CertificateCollection_t1542168549 ** get_address_of_coll_11() { return &___coll_11; }
	inline void set_coll_11(X509CertificateCollection_t1542168549 * value)
	{
		___coll_11 = value;
		Il2CppCodeGenWriteBarrier((&___coll_11), value);
	}

	inline static int32_t get_offset_of_signedHash_12() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___signedHash_12)); }
	inline ASN1_t2114160832 * get_signedHash_12() const { return ___signedHash_12; }
	inline ASN1_t2114160832 ** get_address_of_signedHash_12() { return &___signedHash_12; }
	inline void set_signedHash_12(ASN1_t2114160832 * value)
	{
		___signedHash_12 = value;
		Il2CppCodeGenWriteBarrier((&___signedHash_12), value);
	}

	inline static int32_t get_offset_of_timestamp_13() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___timestamp_13)); }
	inline DateTime_t3738529785  get_timestamp_13() const { return ___timestamp_13; }
	inline DateTime_t3738529785 * get_address_of_timestamp_13() { return &___timestamp_13; }
	inline void set_timestamp_13(DateTime_t3738529785  value)
	{
		___timestamp_13 = value;
	}

	inline static int32_t get_offset_of_signingCertificate_14() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___signingCertificate_14)); }
	inline X509Certificate_t489243024 * get_signingCertificate_14() const { return ___signingCertificate_14; }
	inline X509Certificate_t489243024 ** get_address_of_signingCertificate_14() { return &___signingCertificate_14; }
	inline void set_signingCertificate_14(X509Certificate_t489243024 * value)
	{
		___signingCertificate_14 = value;
		Il2CppCodeGenWriteBarrier((&___signingCertificate_14), value);
	}

	inline static int32_t get_offset_of_reason_15() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___reason_15)); }
	inline int32_t get_reason_15() const { return ___reason_15; }
	inline int32_t* get_address_of_reason_15() { return &___reason_15; }
	inline void set_reason_15(int32_t value)
	{
		___reason_15 = value;
	}

	inline static int32_t get_offset_of_trustedRoot_16() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___trustedRoot_16)); }
	inline bool get_trustedRoot_16() const { return ___trustedRoot_16; }
	inline bool* get_address_of_trustedRoot_16() { return &___trustedRoot_16; }
	inline void set_trustedRoot_16(bool value)
	{
		___trustedRoot_16 = value;
	}

	inline static int32_t get_offset_of_trustedTimestampRoot_17() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___trustedTimestampRoot_17)); }
	inline bool get_trustedTimestampRoot_17() const { return ___trustedTimestampRoot_17; }
	inline bool* get_address_of_trustedTimestampRoot_17() { return &___trustedTimestampRoot_17; }
	inline void set_trustedTimestampRoot_17(bool value)
	{
		___trustedTimestampRoot_17 = value;
	}

	inline static int32_t get_offset_of_entry_18() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___entry_18)); }
	inline ByteU5BU5D_t4116647657* get_entry_18() const { return ___entry_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_entry_18() { return &___entry_18; }
	inline void set_entry_18(ByteU5BU5D_t4116647657* value)
	{
		___entry_18 = value;
		Il2CppCodeGenWriteBarrier((&___entry_18), value);
	}

	inline static int32_t get_offset_of_signerChain_19() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___signerChain_19)); }
	inline X509Chain_t863783600 * get_signerChain_19() const { return ___signerChain_19; }
	inline X509Chain_t863783600 ** get_address_of_signerChain_19() { return &___signerChain_19; }
	inline void set_signerChain_19(X509Chain_t863783600 * value)
	{
		___signerChain_19 = value;
		Il2CppCodeGenWriteBarrier((&___signerChain_19), value);
	}

	inline static int32_t get_offset_of_timestampChain_20() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___timestampChain_20)); }
	inline X509Chain_t863783600 * get_timestampChain_20() const { return ___timestampChain_20; }
	inline X509Chain_t863783600 ** get_address_of_timestampChain_20() { return &___timestampChain_20; }
	inline void set_timestampChain_20(X509Chain_t863783600 * value)
	{
		___timestampChain_20 = value;
		Il2CppCodeGenWriteBarrier((&___timestampChain_20), value);
	}
};

struct AuthenticodeDeformatter_t88130231_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map5
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map5_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map6
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map6_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Authenticode.AuthenticodeDeformatter::<>f__switch$map7
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map7_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_21() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231_StaticFields, ___U3CU3Ef__switchU24map5_21)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map5_21() const { return ___U3CU3Ef__switchU24map5_21; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map5_21() { return &___U3CU3Ef__switchU24map5_21; }
	inline void set_U3CU3Ef__switchU24map5_21(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map5_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_22() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231_StaticFields, ___U3CU3Ef__switchU24map6_22)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map6_22() const { return ___U3CU3Ef__switchU24map6_22; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map6_22() { return &___U3CU3Ef__switchU24map6_22; }
	inline void set_U3CU3Ef__switchU24map6_22(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map6_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_23() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231_StaticFields, ___U3CU3Ef__switchU24map7_23)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map7_23() const { return ___U3CU3Ef__switchU24map7_23; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map7_23() { return &___U3CU3Ef__switchU24map7_23; }
	inline void set_U3CU3Ef__switchU24map7_23(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map7_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEDEFORMATTER_T88130231_H
#ifndef X509CRL_T1148767388_H
#define X509CRL_T1148767388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t1148767388  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t3738529785  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t3738529785  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t2718874744 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t4116647657* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t609554708 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t4116647657* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t4116647657* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___thisUpdate_2)); }
	inline DateTime_t3738529785  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t3738529785 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t3738529785  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___nextUpdate_3)); }
	inline DateTime_t3738529785  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t3738529785 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t3738529785  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___entries_4)); }
	inline ArrayList_t2718874744 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t2718874744 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t2718874744 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___signature_6)); }
	inline ByteU5BU5D_t4116647657* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t4116647657* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___extensions_7)); }
	inline X509ExtensionCollection_t609554708 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t609554708 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t609554708 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___encoded_8)); }
	inline ByteU5BU5D_t4116647657* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t4116647657* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___hash_value_9)); }
	inline ByteU5BU5D_t4116647657* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t4116647657* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t1148767388_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map11
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map11_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_10() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388_StaticFields, ___U3CU3Ef__switchU24map11_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map11_10() const { return ___U3CU3Ef__switchU24map11_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map11_10() { return &___U3CU3Ef__switchU24map11_10; }
	inline void set_U3CU3Ef__switchU24map11_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map11_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_11() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388_StaticFields, ___U3CU3Ef__switchU24map12_11)); }
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
#endif // X509CRL_T1148767388_H
#ifndef X509CRLENTRY_T645568789_H
#define X509CRLENTRY_T645568789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t645568789  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t4116647657* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t3738529785  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t609554708 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___sn_0)); }
	inline ByteU5BU5D_t4116647657* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t4116647657* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___revocationDate_1)); }
	inline DateTime_t3738529785  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t3738529785 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t3738529785  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___extensions_2)); }
	inline X509ExtensionCollection_t609554708 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t609554708 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t609554708 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T645568789_H
#ifndef KEYGENERATEDEVENTHANDLER_T3064139577_H
#define KEYGENERATEDEVENTHANDLER_T3064139577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3064139577  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3064139577_H
#ifndef X509CERTIFICATE_T489243024_H
#define X509CERTIFICATE_T489243024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t489243024  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2114160832 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t4116647657* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t3738529785  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t3738529785  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2114160832 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t4116647657* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2114160832 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t4116647657* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t4116647657* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t4116647657* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t4116647657* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t2385438082 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2386879874 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t4116647657* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t4116647657* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t4116647657* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t609554708 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___decoder_0)); }
	inline ASN1_t2114160832 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2114160832 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2114160832 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t4116647657* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t4116647657* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_from_2)); }
	inline DateTime_t3738529785  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t3738529785 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t3738529785  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_until_3)); }
	inline DateTime_t3738529785  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t3738529785 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t3738529785  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___issuer_4)); }
	inline ASN1_t2114160832 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2114160832 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2114160832 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t4116647657* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t4116647657* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___subject_8)); }
	inline ASN1_t2114160832 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2114160832 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2114160832 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_publickey_10)); }
	inline ByteU5BU5D_t4116647657* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t4116647657* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___signature_11)); }
	inline ByteU5BU5D_t4116647657* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t4116647657* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t4116647657* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t4116647657* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___certhash_14)); }
	inline ByteU5BU5D_t4116647657* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t4116647657* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ____rsa_15)); }
	inline RSA_t2385438082 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t2385438082 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t2385438082 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ____dsa_16)); }
	inline DSA_t2386879874 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t2386879874 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t2386879874 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___serialnumber_18)); }
	inline ByteU5BU5D_t4116647657* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t4116647657* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t4116647657* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t4116647657** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t4116647657* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t4116647657* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t4116647657** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t4116647657* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024, ___extensions_21)); }
	inline X509ExtensionCollection_t609554708 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t609554708 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t609554708 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t489243024_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_23() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024_StaticFields, ___U3CU3Ef__switchU24map13_23)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_23() const { return ___U3CU3Ef__switchU24map13_23; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_23() { return &___U3CU3Ef__switchU24map13_23; }
	inline void set_U3CU3Ef__switchU24map13_23(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_24() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024_StaticFields, ___U3CU3Ef__switchU24map14_24)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_24() const { return ___U3CU3Ef__switchU24map14_24; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_24() { return &___U3CU3Ef__switchU24map14_24; }
	inline void set_U3CU3Ef__switchU24map14_24(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_25() { return static_cast<int32_t>(offsetof(X509Certificate_t489243024_StaticFields, ___U3CU3Ef__switchU24map15_25)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_25() const { return ___U3CU3Ef__switchU24map15_25; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_25() { return &___U3CU3Ef__switchU24map15_25; }
	inline void set_U3CU3Ef__switchU24map15_25(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T489243024_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize100 = { sizeof (Consts_t1749595333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable100[29] = 
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
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize101 = { sizeof (Locale_t4128636107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize102 = { sizeof (MonoTODOAttribute_t4131080581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable102[1] = 
{
	MonoTODOAttribute_t4131080581::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize103 = { sizeof (MonoDocumentationNoteAttribute_t493035051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize104 = { sizeof (MonoExtensionAttribute_t4286882231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize105 = { sizeof (MonoInternalNoteAttribute_t2284022217), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize106 = { sizeof (MonoLimitationAttribute_t3672514598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize107 = { sizeof (MonoNotSupportedAttribute_t2563528020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize108 = { sizeof (CriticalHandleMinusOneIsInvalid_t4073868814), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize109 = { sizeof (CriticalHandleZeroOrMinusOneIsInvalid_t138750170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize110 = { sizeof (SafeFileHandle_t2755812594), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize111 = { sizeof (SafeHandleMinusOneIsInvalid_t4068229793), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize112 = { sizeof (SafeHandleZeroOrMinusOneIsInvalid_t1182193648), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize113 = { sizeof (SafeWaitHandle_t1972936122), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize114 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize115 = { sizeof (Registry_t2858193406), -1, sizeof(Registry_t2858193406_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable115[8] = 
{
	Registry_t2858193406_StaticFields::get_offset_of_ClassesRoot_0(),
	Registry_t2858193406_StaticFields::get_offset_of_CurrentConfig_1(),
	Registry_t2858193406_StaticFields::get_offset_of_CurrentUser_2(),
	Registry_t2858193406_StaticFields::get_offset_of_DynData_3(),
	Registry_t2858193406_StaticFields::get_offset_of_LocalMachine_4(),
	Registry_t2858193406_StaticFields::get_offset_of_PerformanceData_5(),
	Registry_t2858193406_StaticFields::get_offset_of_Users_6(),
	Registry_t2858193406_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize116 = { sizeof (RegistryHive_t2820489035)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable116[8] = 
{
	RegistryHive_t2820489035::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize117 = { sizeof (RegistryKey_t4211574351), -1, sizeof(RegistryKey_t4211574351_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable117[6] = 
{
	RegistryKey_t4211574351::get_offset_of_handle_1(),
	RegistryKey_t4211574351::get_offset_of_hive_2(),
	RegistryKey_t4211574351::get_offset_of_qname_3(),
	RegistryKey_t4211574351::get_offset_of_isRemoteRoot_4(),
	RegistryKey_t4211574351::get_offset_of_isWritable_5(),
	RegistryKey_t4211574351_StaticFields::get_offset_of_RegistryApi_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize118 = { sizeof (RegistryKeyPermissionCheck_t4107419930)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable118[4] = 
{
	RegistryKeyPermissionCheck_t4107419930::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize119 = { sizeof (RegistryValueKind_t419280684)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable119[8] = 
{
	RegistryValueKind_t419280684::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize120 = { sizeof (RegistryValueOptions_t3620085242)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable120[3] = 
{
	RegistryValueOptions_t3620085242::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize121 = { sizeof (ExpandString_t4278806409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable121[1] = 
{
	ExpandString_t4278806409::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize122 = { sizeof (KeyHandler_t326058990), -1, sizeof(KeyHandler_t326058990_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable122[7] = 
{
	KeyHandler_t326058990_StaticFields::get_offset_of_key_to_handler_0(),
	KeyHandler_t326058990_StaticFields::get_offset_of_dir_to_handler_1(),
	KeyHandler_t326058990::get_offset_of_Dir_2(),
	KeyHandler_t326058990::get_offset_of_values_3(),
	KeyHandler_t326058990::get_offset_of_file_4(),
	KeyHandler_t326058990::get_offset_of_dirty_5(),
	KeyHandler_t326058990_StaticFields::get_offset_of_U3CU3Ef__switchU24map1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize123 = { sizeof (UnixRegistryApi_t2224917722), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize124 = { sizeof (Win32RegistryApi_t3010839375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable124[5] = 
{
	0,
	0,
	0,
	0,
	Win32RegistryApi_t3010839375::get_offset_of_NativeBytesPerCharacter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize125 = { sizeof (Win32ResultCode_t387410494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable125[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize126 = { sizeof (CodePointIndexer_t4134431086), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable126[4] = 
{
	CodePointIndexer_t4134431086::get_offset_of_ranges_0(),
	CodePointIndexer_t4134431086::get_offset_of_TotalCount_1(),
	CodePointIndexer_t4134431086::get_offset_of_defaultIndex_2(),
	CodePointIndexer_t4134431086::get_offset_of_defaultCP_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize127 = { sizeof (TableRange_t3332867892)+ sizeof (RuntimeObject), sizeof(TableRange_t3332867892 ), 0, 0 };
extern const int32_t g_FieldOffsetTable127[5] = 
{
	TableRange_t3332867892::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3332867892::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3332867892::get_offset_of_Count_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3332867892::get_offset_of_IndexStart_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3332867892::get_offset_of_IndexEnd_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize128 = { sizeof (TailoringInfo_t866433654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable128[4] = 
{
	TailoringInfo_t866433654::get_offset_of_LCID_0(),
	TailoringInfo_t866433654::get_offset_of_TailoringIndex_1(),
	TailoringInfo_t866433654::get_offset_of_TailoringCount_2(),
	TailoringInfo_t866433654::get_offset_of_FrenchSort_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize129 = { sizeof (Contraction_t1589275354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable129[3] = 
{
	Contraction_t1589275354::get_offset_of_Source_0(),
	Contraction_t1589275354::get_offset_of_Replacement_1(),
	Contraction_t1589275354::get_offset_of_SortKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize130 = { sizeof (ContractionComparer_t2750537063), -1, sizeof(ContractionComparer_t2750537063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable130[1] = 
{
	ContractionComparer_t2750537063_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize131 = { sizeof (Level2Map_t3640798870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable131[2] = 
{
	Level2Map_t3640798870::get_offset_of_Source_0(),
	Level2Map_t3640798870::get_offset_of_Replace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize132 = { sizeof (Level2MapComparer_t1716225294), -1, sizeof(Level2MapComparer_t1716225294_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable132[1] = 
{
	Level2MapComparer_t1716225294_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize133 = { sizeof (MSCompatUnicodeTable_t1453885583), -1, sizeof(MSCompatUnicodeTable_t1453885583_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable133[23] = 
{
	0,
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_MaxExpansionLength_1(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_ignorableFlags_2(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_categories_3(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_level1_4(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_level2_5(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_level3_6(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkCHScategory_7(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkCHTcategory_8(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkJAcategory_9(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkKOcategory_10(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkCHSlv1_11(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkCHTlv1_12(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkJAlv1_13(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkKOlv1_14(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_cjkKOlv2_15(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_tailoringArr_16(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_tailoringInfos_17(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_forLock_18(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_isReady_19(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_20(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_21(),
	MSCompatUnicodeTable_t1453885583_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize134 = { sizeof (MSCompatUnicodeTableUtil_t88013251), -1, sizeof(MSCompatUnicodeTableUtil_t88013251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable134[8] = 
{
	0,
	MSCompatUnicodeTableUtil_t88013251_StaticFields::get_offset_of_Ignorable_1(),
	MSCompatUnicodeTableUtil_t88013251_StaticFields::get_offset_of_Category_2(),
	MSCompatUnicodeTableUtil_t88013251_StaticFields::get_offset_of_Level1_3(),
	MSCompatUnicodeTableUtil_t88013251_StaticFields::get_offset_of_Level2_4(),
	MSCompatUnicodeTableUtil_t88013251_StaticFields::get_offset_of_Level3_5(),
	MSCompatUnicodeTableUtil_t88013251_StaticFields::get_offset_of_CjkCHS_6(),
	MSCompatUnicodeTableUtil_t88013251_StaticFields::get_offset_of_Cjk_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize135 = { sizeof (NormalizationCheck_t1876602788)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable135[4] = 
{
	NormalizationCheck_t1876602788::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize136 = { sizeof (Normalization_t2983279112), -1, sizeof(Normalization_t2983279112_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable136[25] = 
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
	Normalization_t2983279112_StaticFields::get_offset_of_props_17(),
	Normalization_t2983279112_StaticFields::get_offset_of_mappedChars_18(),
	Normalization_t2983279112_StaticFields::get_offset_of_charMapIndex_19(),
	Normalization_t2983279112_StaticFields::get_offset_of_helperIndex_20(),
	Normalization_t2983279112_StaticFields::get_offset_of_mapIdxToComposite_21(),
	Normalization_t2983279112_StaticFields::get_offset_of_combiningClass_22(),
	Normalization_t2983279112_StaticFields::get_offset_of_forLock_23(),
	Normalization_t2983279112_StaticFields::get_offset_of_isReady_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize137 = { sizeof (NormalizationTableUtil_t3596622836), -1, sizeof(NormalizationTableUtil_t3596622836_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable137[5] = 
{
	NormalizationTableUtil_t3596622836_StaticFields::get_offset_of_Prop_0(),
	NormalizationTableUtil_t3596622836_StaticFields::get_offset_of_Map_1(),
	NormalizationTableUtil_t3596622836_StaticFields::get_offset_of_Combining_2(),
	NormalizationTableUtil_t3596622836_StaticFields::get_offset_of_Composite_3(),
	NormalizationTableUtil_t3596622836_StaticFields::get_offset_of_Helper_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize138 = { sizeof (SimpleCollator_t2877834729), -1, sizeof(SimpleCollator_t2877834729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable138[14] = 
{
	0,
	SimpleCollator_t2877834729_StaticFields::get_offset_of_QuickCheckDisabled_1(),
	SimpleCollator_t2877834729_StaticFields::get_offset_of_invariant_2(),
	SimpleCollator_t2877834729::get_offset_of_textInfo_3(),
	SimpleCollator_t2877834729::get_offset_of_frenchSort_4(),
	SimpleCollator_t2877834729::get_offset_of_cjkCatTable_5(),
	SimpleCollator_t2877834729::get_offset_of_cjkLv1Table_6(),
	SimpleCollator_t2877834729::get_offset_of_cjkIndexer_7(),
	SimpleCollator_t2877834729::get_offset_of_cjkLv2Table_8(),
	SimpleCollator_t2877834729::get_offset_of_cjkLv2Indexer_9(),
	SimpleCollator_t2877834729::get_offset_of_lcid_10(),
	SimpleCollator_t2877834729::get_offset_of_contractions_11(),
	SimpleCollator_t2877834729::get_offset_of_level2Maps_12(),
	SimpleCollator_t2877834729::get_offset_of_unsafeFlags_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize139 = { sizeof (Context_t1744531130)+ sizeof (RuntimeObject), sizeof(Context_t1744531130_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable139[8] = 
{
	Context_t1744531130::get_offset_of_Option_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1744531130::get_offset_of_NeverMatchFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1744531130::get_offset_of_AlwaysMatchFlags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1744531130::get_offset_of_Buffer1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1744531130::get_offset_of_Buffer2_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1744531130::get_offset_of_PrevCode_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1744531130::get_offset_of_PrevSortKey_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1744531130::get_offset_of_QuickCheckPossible_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize140 = { sizeof (PreviousInfo_t2148130204)+ sizeof (RuntimeObject), sizeof(PreviousInfo_t2148130204_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable140[2] = 
{
	PreviousInfo_t2148130204::get_offset_of_Code_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PreviousInfo_t2148130204::get_offset_of_SortKey_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize141 = { sizeof (Escape_t3294788190)+ sizeof (RuntimeObject), sizeof(Escape_t3294788190_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable141[5] = 
{
	Escape_t3294788190::get_offset_of_Source_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t3294788190::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t3294788190::get_offset_of_Start_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t3294788190::get_offset_of_End_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t3294788190::get_offset_of_Optional_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize142 = { sizeof (ExtenderType_t2449612322)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable142[6] = 
{
	ExtenderType_t2449612322::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize143 = { sizeof (SortKey_t3955336732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable143[4] = 
{
	SortKey_t3955336732::get_offset_of_source_0(),
	SortKey_t3955336732::get_offset_of_options_1(),
	SortKey_t3955336732::get_offset_of_key_2(),
	SortKey_t3955336732::get_offset_of_lcid_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize144 = { sizeof (SortKeyBuffer_t2945275270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable144[22] = 
{
	SortKeyBuffer_t2945275270::get_offset_of_l1_0(),
	SortKeyBuffer_t2945275270::get_offset_of_l2_1(),
	SortKeyBuffer_t2945275270::get_offset_of_l3_2(),
	SortKeyBuffer_t2945275270::get_offset_of_l4s_3(),
	SortKeyBuffer_t2945275270::get_offset_of_l4t_4(),
	SortKeyBuffer_t2945275270::get_offset_of_l4k_5(),
	SortKeyBuffer_t2945275270::get_offset_of_l4w_6(),
	SortKeyBuffer_t2945275270::get_offset_of_l5_7(),
	SortKeyBuffer_t2945275270::get_offset_of_l1b_8(),
	SortKeyBuffer_t2945275270::get_offset_of_l2b_9(),
	SortKeyBuffer_t2945275270::get_offset_of_l3b_10(),
	SortKeyBuffer_t2945275270::get_offset_of_l4sb_11(),
	SortKeyBuffer_t2945275270::get_offset_of_l4tb_12(),
	SortKeyBuffer_t2945275270::get_offset_of_l4kb_13(),
	SortKeyBuffer_t2945275270::get_offset_of_l4wb_14(),
	SortKeyBuffer_t2945275270::get_offset_of_l5b_15(),
	SortKeyBuffer_t2945275270::get_offset_of_source_16(),
	SortKeyBuffer_t2945275270::get_offset_of_processLevel2_17(),
	SortKeyBuffer_t2945275270::get_offset_of_frenchSort_18(),
	SortKeyBuffer_t2945275270::get_offset_of_frenchSorted_19(),
	SortKeyBuffer_t2945275270::get_offset_of_lcid_20(),
	SortKeyBuffer_t2945275270::get_offset_of_options_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize145 = { sizeof (ComInteropProxy_t1891481270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable145[3] = 
{
	ComInteropProxy_t1891481270::get_offset_of_com_object_8(),
	ComInteropProxy_t1891481270::get_offset_of_ref_count_9(),
	ComInteropProxy_t1891481270::get_offset_of_type_name_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize146 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize147 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize148 = { sizeof (NextPrimeFinder_t2637458097), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize149 = { sizeof (PrimeGeneratorBase_t446028866), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize150 = { sizeof (SequentialSearchPrimeGeneratorBase_t2996090508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize151 = { sizeof (ConfidenceFactor_t2516000285)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable151[7] = 
{
	ConfidenceFactor_t2516000285::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize152 = { sizeof (PrimalityTests_t1538473975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize153 = { sizeof (BigInteger_t2902905089), -1, sizeof(BigInteger_t2902905089_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable153[6] = 
{
	0,
	0,
	BigInteger_t2902905089::get_offset_of_length_2(),
	BigInteger_t2902905089::get_offset_of_data_3(),
	BigInteger_t2902905089_StaticFields::get_offset_of_smallPrimes_4(),
	BigInteger_t2902905089_StaticFields::get_offset_of_rng_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize154 = { sizeof (Sign_t3338384038)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable154[4] = 
{
	Sign_t3338384038::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize155 = { sizeof (ModulusRing_t596511504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable155[2] = 
{
	ModulusRing_t596511504::get_offset_of_mod_0(),
	ModulusRing_t596511504::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize156 = { sizeof (Montgomery_t713683935), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize157 = { sizeof (Kernel_t1402667219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize158 = { sizeof (Authority_t1135068812)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable158[4] = 
{
	Authority_t1135068812::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize159 = { sizeof (AuthenticodeBase_t263562949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable159[9] = 
{
	0,
	AuthenticodeBase_t263562949::get_offset_of_fileblock_1(),
	AuthenticodeBase_t263562949::get_offset_of_fs_2(),
	AuthenticodeBase_t263562949::get_offset_of_blockNo_3(),
	AuthenticodeBase_t263562949::get_offset_of_blockLength_4(),
	AuthenticodeBase_t263562949::get_offset_of_peOffset_5(),
	AuthenticodeBase_t263562949::get_offset_of_dirSecurityOffset_6(),
	AuthenticodeBase_t263562949::get_offset_of_dirSecuritySize_7(),
	AuthenticodeBase_t263562949::get_offset_of_coffSymbolTableOffset_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize160 = { sizeof (AuthenticodeDeformatter_t88130231), -1, sizeof(AuthenticodeDeformatter_t88130231_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable160[15] = 
{
	AuthenticodeDeformatter_t88130231::get_offset_of_filename_9(),
	AuthenticodeDeformatter_t88130231::get_offset_of_hash_10(),
	AuthenticodeDeformatter_t88130231::get_offset_of_coll_11(),
	AuthenticodeDeformatter_t88130231::get_offset_of_signedHash_12(),
	AuthenticodeDeformatter_t88130231::get_offset_of_timestamp_13(),
	AuthenticodeDeformatter_t88130231::get_offset_of_signingCertificate_14(),
	AuthenticodeDeformatter_t88130231::get_offset_of_reason_15(),
	AuthenticodeDeformatter_t88130231::get_offset_of_trustedRoot_16(),
	AuthenticodeDeformatter_t88130231::get_offset_of_trustedTimestampRoot_17(),
	AuthenticodeDeformatter_t88130231::get_offset_of_entry_18(),
	AuthenticodeDeformatter_t88130231::get_offset_of_signerChain_19(),
	AuthenticodeDeformatter_t88130231::get_offset_of_timestampChain_20(),
	AuthenticodeDeformatter_t88130231_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_21(),
	AuthenticodeDeformatter_t88130231_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_22(),
	AuthenticodeDeformatter_t88130231_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize161 = { sizeof (CryptoConvert_t610933156), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize162 = { sizeof (KeyBuilder_t2049230354), -1, sizeof(KeyBuilder_t2049230354_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable162[1] = 
{
	KeyBuilder_t2049230354_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize163 = { sizeof (BlockProcessor_t1851031225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable163[4] = 
{
	BlockProcessor_t1851031225::get_offset_of_transform_0(),
	BlockProcessor_t1851031225::get_offset_of_block_1(),
	BlockProcessor_t1851031225::get_offset_of_blockSize_2(),
	BlockProcessor_t1851031225::get_offset_of_blockCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize164 = { sizeof (DSAManaged_t2800260182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable164[14] = 
{
	0,
	DSAManaged_t2800260182::get_offset_of_keypairGenerated_3(),
	DSAManaged_t2800260182::get_offset_of_m_disposed_4(),
	DSAManaged_t2800260182::get_offset_of_p_5(),
	DSAManaged_t2800260182::get_offset_of_q_6(),
	DSAManaged_t2800260182::get_offset_of_g_7(),
	DSAManaged_t2800260182::get_offset_of_x_8(),
	DSAManaged_t2800260182::get_offset_of_y_9(),
	DSAManaged_t2800260182::get_offset_of_j_10(),
	DSAManaged_t2800260182::get_offset_of_seed_11(),
	DSAManaged_t2800260182::get_offset_of_counter_12(),
	DSAManaged_t2800260182::get_offset_of_j_missing_13(),
	DSAManaged_t2800260182::get_offset_of_rng_14(),
	DSAManaged_t2800260182::get_offset_of_KeyGenerated_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize165 = { sizeof (KeyGeneratedEventHandler_t3828027274), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize166 = { sizeof (HMACAlgorithm_t1824077146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable166[5] = 
{
	HMACAlgorithm_t1824077146::get_offset_of_key_0(),
	HMACAlgorithm_t1824077146::get_offset_of_hash_1(),
	HMACAlgorithm_t1824077146::get_offset_of_algo_2(),
	HMACAlgorithm_t1824077146::get_offset_of_hashName_3(),
	HMACAlgorithm_t1824077146::get_offset_of_block_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize167 = { sizeof (KeyPairPersistence_t2094547461), -1, sizeof(KeyPairPersistence_t2094547461_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable167[9] = 
{
	KeyPairPersistence_t2094547461_StaticFields::get_offset_of__userPathExists_0(),
	KeyPairPersistence_t2094547461_StaticFields::get_offset_of__userPath_1(),
	KeyPairPersistence_t2094547461_StaticFields::get_offset_of__machinePathExists_2(),
	KeyPairPersistence_t2094547461_StaticFields::get_offset_of__machinePath_3(),
	KeyPairPersistence_t2094547461::get_offset_of__params_4(),
	KeyPairPersistence_t2094547461::get_offset_of__keyvalue_5(),
	KeyPairPersistence_t2094547461::get_offset_of__filename_6(),
	KeyPairPersistence_t2094547461::get_offset_of__container_7(),
	KeyPairPersistence_t2094547461_StaticFields::get_offset_of_lockobj_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize168 = { sizeof (MACAlgorithm_t2441219148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable168[5] = 
{
	MACAlgorithm_t2441219148::get_offset_of_algo_0(),
	MACAlgorithm_t2441219148::get_offset_of_enc_1(),
	MACAlgorithm_t2441219148::get_offset_of_block_2(),
	MACAlgorithm_t2441219148::get_offset_of_blockSize_3(),
	MACAlgorithm_t2441219148::get_offset_of_blockCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize169 = { sizeof (PKCS1_t1505584676), -1, sizeof(PKCS1_t1505584676_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable169[4] = 
{
	PKCS1_t1505584676_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t1505584676_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t1505584676_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t1505584676_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize170 = { sizeof (PKCS8_t696280612), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize171 = { sizeof (KeyInfo_t3707773640)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable171[4] = 
{
	KeyInfo_t3707773640::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize172 = { sizeof (PrivateKeyInfo_t668027992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable172[4] = 
{
	PrivateKeyInfo_t668027992::get_offset_of__version_0(),
	PrivateKeyInfo_t668027992::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t668027992::get_offset_of__key_2(),
	PrivateKeyInfo_t668027992::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize173 = { sizeof (EncryptedPrivateKeyInfo_t862116835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable173[4] = 
{
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize174 = { sizeof (RSAManaged_t1757093819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable174[14] = 
{
	0,
	RSAManaged_t1757093819::get_offset_of_isCRTpossible_3(),
	RSAManaged_t1757093819::get_offset_of_keyBlinding_4(),
	RSAManaged_t1757093819::get_offset_of_keypairGenerated_5(),
	RSAManaged_t1757093819::get_offset_of_m_disposed_6(),
	RSAManaged_t1757093819::get_offset_of_d_7(),
	RSAManaged_t1757093819::get_offset_of_p_8(),
	RSAManaged_t1757093819::get_offset_of_q_9(),
	RSAManaged_t1757093819::get_offset_of_dp_10(),
	RSAManaged_t1757093819::get_offset_of_dq_11(),
	RSAManaged_t1757093819::get_offset_of_qInv_12(),
	RSAManaged_t1757093819::get_offset_of_n_13(),
	RSAManaged_t1757093819::get_offset_of_e_14(),
	RSAManaged_t1757093819::get_offset_of_KeyGenerated_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize175 = { sizeof (KeyGeneratedEventHandler_t3064139577), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize176 = { sizeof (SymmetricTransform_t3802591842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable176[12] = 
{
	SymmetricTransform_t3802591842::get_offset_of_algo_0(),
	SymmetricTransform_t3802591842::get_offset_of_encrypt_1(),
	SymmetricTransform_t3802591842::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t3802591842::get_offset_of_temp_3(),
	SymmetricTransform_t3802591842::get_offset_of_temp2_4(),
	SymmetricTransform_t3802591842::get_offset_of_workBuff_5(),
	SymmetricTransform_t3802591842::get_offset_of_workout_6(),
	SymmetricTransform_t3802591842::get_offset_of_FeedBackByte_7(),
	SymmetricTransform_t3802591842::get_offset_of_FeedBackIter_8(),
	SymmetricTransform_t3802591842::get_offset_of_m_disposed_9(),
	SymmetricTransform_t3802591842::get_offset_of_lastBlock_10(),
	SymmetricTransform_t3802591842::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize177 = { sizeof (BasicConstraintsExtension_t2462195278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable177[3] = 
{
	0,
	BasicConstraintsExtension_t2462195278::get_offset_of_cA_4(),
	BasicConstraintsExtension_t2462195278::get_offset_of_pathLenConstraint_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize178 = { sizeof (KeyUsages_t820456313)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable178[11] = 
{
	KeyUsages_t820456313::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize179 = { sizeof (KeyUsageExtension_t1795615912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable179[1] = 
{
	KeyUsageExtension_t1795615912::get_offset_of_kubits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize180 = { sizeof (SubjectKeyIdentifierExtension_t2404375272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable180[1] = 
{
	SubjectKeyIdentifierExtension_t2404375272::get_offset_of_ski_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize181 = { sizeof (PKCS5_t784850245), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable181[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize182 = { sizeof (PKCS9_t2785795397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable182[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize183 = { sizeof (SafeBag_t3961248199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable183[2] = 
{
	SafeBag_t3961248199::get_offset_of__bagOID_0(),
	SafeBag_t3961248199::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize184 = { sizeof (PKCS12_t4101533060), -1, sizeof(PKCS12_t4101533060_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable184[36] = 
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
	PKCS12_t4101533060_StaticFields::get_offset_of_recommendedIterationCount_16(),
	PKCS12_t4101533060::get_offset_of__password_17(),
	PKCS12_t4101533060::get_offset_of__keyBags_18(),
	PKCS12_t4101533060::get_offset_of__secretBags_19(),
	PKCS12_t4101533060::get_offset_of__certs_20(),
	PKCS12_t4101533060::get_offset_of__keyBagsChanged_21(),
	PKCS12_t4101533060::get_offset_of__secretBagsChanged_22(),
	PKCS12_t4101533060::get_offset_of__certsChanged_23(),
	PKCS12_t4101533060::get_offset_of__iterations_24(),
	PKCS12_t4101533060::get_offset_of__safeBags_25(),
	PKCS12_t4101533060::get_offset_of__rng_26(),
	PKCS12_t4101533060_StaticFields::get_offset_of_password_max_length_27(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_28(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_29(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_30(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_31(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_32(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_33(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_34(),
	PKCS12_t4101533060_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize185 = { sizeof (DeriveBytes_t1492915135), -1, sizeof(DeriveBytes_t1492915135_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable185[7] = 
{
	DeriveBytes_t1492915135_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1492915135_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1492915135_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1492915135::get_offset_of__hashName_3(),
	DeriveBytes_t1492915135::get_offset_of__iterations_4(),
	DeriveBytes_t1492915135::get_offset_of__password_5(),
	DeriveBytes_t1492915135::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize186 = { sizeof (Purpose_t1676893114)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable186[4] = 
{
	Purpose_t1676893114::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize187 = { sizeof (X501_t1758824425), -1, sizeof(X501_t1758824425_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable187[16] = 
{
	X501_t1758824425_StaticFields::get_offset_of_countryName_0(),
	X501_t1758824425_StaticFields::get_offset_of_organizationName_1(),
	X501_t1758824425_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t1758824425_StaticFields::get_offset_of_commonName_3(),
	X501_t1758824425_StaticFields::get_offset_of_localityName_4(),
	X501_t1758824425_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t1758824425_StaticFields::get_offset_of_streetAddress_6(),
	X501_t1758824425_StaticFields::get_offset_of_domainComponent_7(),
	X501_t1758824425_StaticFields::get_offset_of_userid_8(),
	X501_t1758824425_StaticFields::get_offset_of_email_9(),
	X501_t1758824425_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t1758824425_StaticFields::get_offset_of_title_11(),
	X501_t1758824425_StaticFields::get_offset_of_surname_12(),
	X501_t1758824425_StaticFields::get_offset_of_givenName_13(),
	X501_t1758824425_StaticFields::get_offset_of_initial_14(),
	X501_t1758824425_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize188 = { sizeof (X509Crl_t1148767388), -1, sizeof(X509Crl_t1148767388_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable188[12] = 
{
	X509Crl_t1148767388::get_offset_of_issuer_0(),
	X509Crl_t1148767388::get_offset_of_version_1(),
	X509Crl_t1148767388::get_offset_of_thisUpdate_2(),
	X509Crl_t1148767388::get_offset_of_nextUpdate_3(),
	X509Crl_t1148767388::get_offset_of_entries_4(),
	X509Crl_t1148767388::get_offset_of_signatureOID_5(),
	X509Crl_t1148767388::get_offset_of_signature_6(),
	X509Crl_t1148767388::get_offset_of_extensions_7(),
	X509Crl_t1148767388::get_offset_of_encoded_8(),
	X509Crl_t1148767388::get_offset_of_hash_value_9(),
	X509Crl_t1148767388_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_10(),
	X509Crl_t1148767388_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize189 = { sizeof (X509CrlEntry_t645568789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable189[3] = 
{
	X509CrlEntry_t645568789::get_offset_of_sn_0(),
	X509CrlEntry_t645568789::get_offset_of_revocationDate_1(),
	X509CrlEntry_t645568789::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize190 = { sizeof (X509Certificate_t489243024), -1, sizeof(X509Certificate_t489243024_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable190[26] = 
{
	X509Certificate_t489243024::get_offset_of_decoder_0(),
	X509Certificate_t489243024::get_offset_of_m_encodedcert_1(),
	X509Certificate_t489243024::get_offset_of_m_from_2(),
	X509Certificate_t489243024::get_offset_of_m_until_3(),
	X509Certificate_t489243024::get_offset_of_issuer_4(),
	X509Certificate_t489243024::get_offset_of_m_issuername_5(),
	X509Certificate_t489243024::get_offset_of_m_keyalgo_6(),
	X509Certificate_t489243024::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t489243024::get_offset_of_subject_8(),
	X509Certificate_t489243024::get_offset_of_m_subject_9(),
	X509Certificate_t489243024::get_offset_of_m_publickey_10(),
	X509Certificate_t489243024::get_offset_of_signature_11(),
	X509Certificate_t489243024::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t489243024::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t489243024::get_offset_of_certhash_14(),
	X509Certificate_t489243024::get_offset_of__rsa_15(),
	X509Certificate_t489243024::get_offset_of__dsa_16(),
	X509Certificate_t489243024::get_offset_of_version_17(),
	X509Certificate_t489243024::get_offset_of_serialnumber_18(),
	X509Certificate_t489243024::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t489243024::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t489243024::get_offset_of_extensions_21(),
	X509Certificate_t489243024_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t489243024_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_23(),
	X509Certificate_t489243024_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_24(),
	X509Certificate_t489243024_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize191 = { sizeof (X509CertificateCollection_t1542168549), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize192 = { sizeof (X509CertificateEnumerator_t3515934697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable192[1] = 
{
	X509CertificateEnumerator_t3515934697::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize193 = { sizeof (X509Chain_t863783600), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable193[5] = 
{
	X509Chain_t863783600::get_offset_of_roots_0(),
	X509Chain_t863783600::get_offset_of_certs_1(),
	X509Chain_t863783600::get_offset_of__root_2(),
	X509Chain_t863783600::get_offset_of__chain_3(),
	X509Chain_t863783600::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize194 = { sizeof (X509ChainStatusFlags_t1831553602)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable194[8] = 
{
	X509ChainStatusFlags_t1831553602::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize195 = { sizeof (X509Extension_t3173393652), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable195[3] = 
{
	X509Extension_t3173393652::get_offset_of_extnOid_0(),
	X509Extension_t3173393652::get_offset_of_extnCritical_1(),
	X509Extension_t3173393652::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize196 = { sizeof (X509ExtensionCollection_t609554708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable196[1] = 
{
	X509ExtensionCollection_t609554708::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize197 = { sizeof (X509Store_t2777415283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable197[5] = 
{
	X509Store_t2777415283::get_offset_of__storePath_0(),
	X509Store_t2777415283::get_offset_of__certificates_1(),
	X509Store_t2777415283::get_offset_of__crls_2(),
	X509Store_t2777415283::get_offset_of__crl_3(),
	X509Store_t2777415283::get_offset_of__name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize198 = { sizeof (X509StoreManager_t1046782375), -1, sizeof(X509StoreManager_t1046782375_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable198[2] = 
{
	X509StoreManager_t1046782375_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t1046782375_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize199 = { sizeof (X509Stores_t1373936237), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable199[6] = 
{
	X509Stores_t1373936237::get_offset_of__storePath_0(),
	X509Stores_t1373936237::get_offset_of__personal_1(),
	X509Stores_t1373936237::get_offset_of__other_2(),
	X509Stores_t1373936237::get_offset_of__intermediate_3(),
	X509Stores_t1373936237::get_offset_of__trusted_4(),
	X509Stores_t1373936237::get_offset_of__untrusted_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
