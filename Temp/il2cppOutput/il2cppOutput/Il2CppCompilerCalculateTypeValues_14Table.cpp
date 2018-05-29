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


// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3355146440;
// System.String
struct String_t;
// System.Version
struct Version_t3456873960;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2915669112;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t3052133691;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t97388457;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2891196107;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Reflection.Assembly
struct Assembly_t;
// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t2948242406;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Security.Principal.IIdentity
struct IIdentity_t2948385546;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1196077101;
// System.Security.Policy.IApplicationTrustManager
struct IApplicationTrustManager_t1290658629;
// System.Security.Policy.ApplicationTrustCollection
struct ApplicationTrustCollection_t2877879449;
// System.ActivationContext
struct ActivationContext_t976916018;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.ApplicationId
struct ApplicationId_t3453185175;
// System.Security.Policy.Url
struct Url_t207802215;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Threading.CompressedStack
struct CompressedStack_t1202932761;
// System.Security.Principal.IdentityReferenceCollection
struct IdentityReferenceCollection_t2682466582;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3811807446;
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
#ifndef GACMEMBERSHIPCONDITION_T2888728793_H
#define GACMEMBERSHIPCONDITION_T2888728793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.GacMembershipCondition
struct  GacMembershipCondition_t2888728793  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.GacMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(GacMembershipCondition_t2888728793, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACMEMBERSHIPCONDITION_T2888728793_H
#ifndef GACINSTALLED_T3565883570_H
#define GACINSTALLED_T3565883570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.GacInstalled
struct  GacInstalled_t3565883570  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACINSTALLED_T3565883570_H
#ifndef STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#define STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t2614563360  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t3355146440 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t3456873960 * ___assemblyVersion_3;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_blob_1() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___blob_1)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_blob_1() const { return ___blob_1; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_blob_1() { return &___blob_1; }
	inline void set_blob_1(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___blob_1 = value;
		Il2CppCodeGenWriteBarrier((&___blob_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_assemblyVersion_3() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___assemblyVersion_3)); }
	inline Version_t3456873960 * get_assemblyVersion_3() const { return ___assemblyVersion_3; }
	inline Version_t3456873960 ** get_address_of_assemblyVersion_3() { return &___assemblyVersion_3; }
	inline void set_assemblyVersion_3(Version_t3456873960 * value)
	{
		___assemblyVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyVersion_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifndef HOSTSECURITYMANAGER_T1435734729_H
#define HOSTSECURITYMANAGER_T1435734729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManager
struct  HostSecurityManager_t1435734729  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTSECURITYMANAGER_T1435734729_H
#ifndef EVIDENCEENUMERATOR_T1708166667_H
#define EVIDENCEENUMERATOR_T1708166667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t1708166667  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T1708166667_H
#ifndef EVIDENCE_T2008144148_H
#define EVIDENCE_T2008144148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2008144148  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2718874744 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2718874744 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___hostEvidenceList_1)); }
	inline ArrayList_t2718874744 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2718874744 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2718874744 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2718874744 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2718874744 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2718874744 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2008144148_H
#ifndef CODEACCESSPERMISSION_T2681295399_H
#define CODEACCESSPERMISSION_T2681295399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t2681295399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T2681295399_H
#ifndef RESERVEDNAMES_T1041595029_H
#define RESERVEDNAMES_T1041595029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies/ReservedNames
struct  ReservedNames_t1041595029  : public RuntimeObject
{
public:

public:
};

struct ReservedNames_t1041595029_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.DefaultPolicies/ReservedNames::<>f__switch$map2C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2C_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2C_7() { return static_cast<int32_t>(offsetof(ReservedNames_t1041595029_StaticFields, ___U3CU3Ef__switchU24map2C_7)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2C_7() const { return ___U3CU3Ef__switchU24map2C_7; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2C_7() { return &___U3CU3Ef__switchU24map2C_7; }
	inline void set_U3CU3Ef__switchU24map2C_7(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2C_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2C_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESERVEDNAMES_T1041595029_H
#ifndef DEFAULTPOLICIES_T2520506789_H
#define DEFAULTPOLICIES_T2520506789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t2520506789  : public RuntimeObject
{
public:

public:
};

struct DefaultPolicies_t2520506789_StaticFields
{
public:
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t3456873960 * ____fxVersion_13;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t4116647657* ____ecmaKey_14;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t3355146440 * ____ecma_15;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t4116647657* ____msFinalKey_16;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t3355146440 * ____msFinal_17;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t2915669112 * ____fullTrust_18;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t2915669112 * ____localIntranet_19;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t2915669112 * ____internet_20;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t2915669112 * ____skipVerification_21;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t2915669112 * ____execution_22;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t2915669112 * ____nothing_23;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t2915669112 * ____everything_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.DefaultPolicies::<>f__switch$map2B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2B_25;

public:
	inline static int32_t get_offset_of__fxVersion_13() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fxVersion_13)); }
	inline Version_t3456873960 * get__fxVersion_13() const { return ____fxVersion_13; }
	inline Version_t3456873960 ** get_address_of__fxVersion_13() { return &____fxVersion_13; }
	inline void set__fxVersion_13(Version_t3456873960 * value)
	{
		____fxVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&____fxVersion_13), value);
	}

	inline static int32_t get_offset_of__ecmaKey_14() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecmaKey_14)); }
	inline ByteU5BU5D_t4116647657* get__ecmaKey_14() const { return ____ecmaKey_14; }
	inline ByteU5BU5D_t4116647657** get_address_of__ecmaKey_14() { return &____ecmaKey_14; }
	inline void set__ecmaKey_14(ByteU5BU5D_t4116647657* value)
	{
		____ecmaKey_14 = value;
		Il2CppCodeGenWriteBarrier((&____ecmaKey_14), value);
	}

	inline static int32_t get_offset_of__ecma_15() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecma_15)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__ecma_15() const { return ____ecma_15; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__ecma_15() { return &____ecma_15; }
	inline void set__ecma_15(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____ecma_15 = value;
		Il2CppCodeGenWriteBarrier((&____ecma_15), value);
	}

	inline static int32_t get_offset_of__msFinalKey_16() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinalKey_16)); }
	inline ByteU5BU5D_t4116647657* get__msFinalKey_16() const { return ____msFinalKey_16; }
	inline ByteU5BU5D_t4116647657** get_address_of__msFinalKey_16() { return &____msFinalKey_16; }
	inline void set__msFinalKey_16(ByteU5BU5D_t4116647657* value)
	{
		____msFinalKey_16 = value;
		Il2CppCodeGenWriteBarrier((&____msFinalKey_16), value);
	}

	inline static int32_t get_offset_of__msFinal_17() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinal_17)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__msFinal_17() const { return ____msFinal_17; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__msFinal_17() { return &____msFinal_17; }
	inline void set__msFinal_17(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____msFinal_17 = value;
		Il2CppCodeGenWriteBarrier((&____msFinal_17), value);
	}

	inline static int32_t get_offset_of__fullTrust_18() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fullTrust_18)); }
	inline NamedPermissionSet_t2915669112 * get__fullTrust_18() const { return ____fullTrust_18; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__fullTrust_18() { return &____fullTrust_18; }
	inline void set__fullTrust_18(NamedPermissionSet_t2915669112 * value)
	{
		____fullTrust_18 = value;
		Il2CppCodeGenWriteBarrier((&____fullTrust_18), value);
	}

	inline static int32_t get_offset_of__localIntranet_19() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____localIntranet_19)); }
	inline NamedPermissionSet_t2915669112 * get__localIntranet_19() const { return ____localIntranet_19; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__localIntranet_19() { return &____localIntranet_19; }
	inline void set__localIntranet_19(NamedPermissionSet_t2915669112 * value)
	{
		____localIntranet_19 = value;
		Il2CppCodeGenWriteBarrier((&____localIntranet_19), value);
	}

	inline static int32_t get_offset_of__internet_20() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____internet_20)); }
	inline NamedPermissionSet_t2915669112 * get__internet_20() const { return ____internet_20; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__internet_20() { return &____internet_20; }
	inline void set__internet_20(NamedPermissionSet_t2915669112 * value)
	{
		____internet_20 = value;
		Il2CppCodeGenWriteBarrier((&____internet_20), value);
	}

	inline static int32_t get_offset_of__skipVerification_21() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____skipVerification_21)); }
	inline NamedPermissionSet_t2915669112 * get__skipVerification_21() const { return ____skipVerification_21; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__skipVerification_21() { return &____skipVerification_21; }
	inline void set__skipVerification_21(NamedPermissionSet_t2915669112 * value)
	{
		____skipVerification_21 = value;
		Il2CppCodeGenWriteBarrier((&____skipVerification_21), value);
	}

	inline static int32_t get_offset_of__execution_22() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____execution_22)); }
	inline NamedPermissionSet_t2915669112 * get__execution_22() const { return ____execution_22; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__execution_22() { return &____execution_22; }
	inline void set__execution_22(NamedPermissionSet_t2915669112 * value)
	{
		____execution_22 = value;
		Il2CppCodeGenWriteBarrier((&____execution_22), value);
	}

	inline static int32_t get_offset_of__nothing_23() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____nothing_23)); }
	inline NamedPermissionSet_t2915669112 * get__nothing_23() const { return ____nothing_23; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__nothing_23() { return &____nothing_23; }
	inline void set__nothing_23(NamedPermissionSet_t2915669112 * value)
	{
		____nothing_23 = value;
		Il2CppCodeGenWriteBarrier((&____nothing_23), value);
	}

	inline static int32_t get_offset_of__everything_24() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____everything_24)); }
	inline NamedPermissionSet_t2915669112 * get__everything_24() const { return ____everything_24; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__everything_24() { return &____everything_24; }
	inline void set__everything_24(NamedPermissionSet_t2915669112 * value)
	{
		____everything_24 = value;
		Il2CppCodeGenWriteBarrier((&____everything_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2B_25() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ___U3CU3Ef__switchU24map2B_25)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2B_25() const { return ___U3CU3Ef__switchU24map2B_25; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2B_25() { return &___U3CU3Ef__switchU24map2B_25; }
	inline void set_U3CU3Ef__switchU24map2B_25(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2B_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2B_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPOLICIES_T2520506789_H
#ifndef CODEGROUP_T3811807446_H
#define CODEGROUP_T3811807446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t3811807446  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t3052133691 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t2718874744 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_policy_0)); }
	inline PolicyStatement_t3052133691 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t3052133691 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t3052133691 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_children_4)); }
	inline ArrayList_t2718874744 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t2718874744 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t2718874744 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t3811807446_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2A_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_5() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446_StaticFields, ___U3CU3Ef__switchU24map2A_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2A_5() const { return ___U3CU3Ef__switchU24map2A_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2A_5() { return &___U3CU3Ef__switchU24map2A_5; }
	inline void set_U3CU3Ef__switchU24map2A_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2A_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T3811807446_H
#ifndef CODECONNECTACCESS_T1103527196_H
#define CODECONNECTACCESS_T1103527196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeConnectAccess
struct  CodeConnectAccess_t1103527196  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::_scheme
	String_t* ____scheme_4;
	// System.Int32 System.Security.Policy.CodeConnectAccess::_port
	int32_t ____port_5;

public:
	inline static int32_t get_offset_of__scheme_4() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____scheme_4)); }
	inline String_t* get__scheme_4() const { return ____scheme_4; }
	inline String_t** get_address_of__scheme_4() { return &____scheme_4; }
	inline void set__scheme_4(String_t* value)
	{
		____scheme_4 = value;
		Il2CppCodeGenWriteBarrier((&____scheme_4), value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}
};

struct CodeConnectAccess_t1103527196_StaticFields
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::AnyScheme
	String_t* ___AnyScheme_0;
	// System.Int32 System.Security.Policy.CodeConnectAccess::DefaultPort
	int32_t ___DefaultPort_1;
	// System.Int32 System.Security.Policy.CodeConnectAccess::OriginPort
	int32_t ___OriginPort_2;
	// System.String System.Security.Policy.CodeConnectAccess::OriginScheme
	String_t* ___OriginScheme_3;

public:
	inline static int32_t get_offset_of_AnyScheme_0() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___AnyScheme_0)); }
	inline String_t* get_AnyScheme_0() const { return ___AnyScheme_0; }
	inline String_t** get_address_of_AnyScheme_0() { return &___AnyScheme_0; }
	inline void set_AnyScheme_0(String_t* value)
	{
		___AnyScheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___AnyScheme_0), value);
	}

	inline static int32_t get_offset_of_DefaultPort_1() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___DefaultPort_1)); }
	inline int32_t get_DefaultPort_1() const { return ___DefaultPort_1; }
	inline int32_t* get_address_of_DefaultPort_1() { return &___DefaultPort_1; }
	inline void set_DefaultPort_1(int32_t value)
	{
		___DefaultPort_1 = value;
	}

	inline static int32_t get_offset_of_OriginPort_2() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginPort_2)); }
	inline int32_t get_OriginPort_2() const { return ___OriginPort_2; }
	inline int32_t* get_address_of_OriginPort_2() { return &___OriginPort_2; }
	inline void set_OriginPort_2(int32_t value)
	{
		___OriginPort_2 = value;
	}

	inline static int32_t get_offset_of_OriginScheme_3() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginScheme_3)); }
	inline String_t* get_OriginScheme_3() const { return ___OriginScheme_3; }
	inline String_t** get_address_of_OriginScheme_3() { return &___OriginScheme_3; }
	inline void set_OriginScheme_3(String_t* value)
	{
		___OriginScheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginScheme_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODECONNECTACCESS_T1103527196_H
#ifndef STRONGNAME_T3675724614_H
#define STRONGNAME_T3675724614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t3675724614  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3355146440 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t3456873960 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___version_2)); }
	inline Version_t3456873960 * get_version_2() const { return ___version_2; }
	inline Version_t3456873960 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3456873960 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T3675724614_H
#ifndef PUBLISHER_T2758056332_H
#define PUBLISHER_T2758056332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Publisher
struct  Publisher_t2758056332  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::m_cert
	X509Certificate_t713131622 * ___m_cert_0;

public:
	inline static int32_t get_offset_of_m_cert_0() { return static_cast<int32_t>(offsetof(Publisher_t2758056332, ___m_cert_0)); }
	inline X509Certificate_t713131622 * get_m_cert_0() const { return ___m_cert_0; }
	inline X509Certificate_t713131622 ** get_address_of_m_cert_0() { return &___m_cert_0; }
	inline void set_m_cert_0(X509Certificate_t713131622 * value)
	{
		___m_cert_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_cert_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHER_T2758056332_H
#ifndef SITE_T1075497104_H
#define SITE_T1075497104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Site
struct  Site_t1075497104  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.Site::origin_site
	String_t* ___origin_site_0;

public:
	inline static int32_t get_offset_of_origin_site_0() { return static_cast<int32_t>(offsetof(Site_t1075497104, ___origin_site_0)); }
	inline String_t* get_origin_site_0() const { return ___origin_site_0; }
	inline String_t** get_address_of_origin_site_0() { return &___origin_site_0; }
	inline void set_origin_site_0(String_t* value)
	{
		___origin_site_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_site_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITE_T1075497104_H
#ifndef PERMISSIONBUILDER_T1403083973_H
#define PERMISSIONBUILDER_T1403083973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionBuilder
struct  PermissionBuilder_t1403083973  : public RuntimeObject
{
public:

public:
};

struct PermissionBuilder_t1403083973_StaticFields
{
public:
	// System.Object[] System.Security.PermissionBuilder::psNone
	ObjectU5BU5D_t2843939325* ___psNone_0;

public:
	inline static int32_t get_offset_of_psNone_0() { return static_cast<int32_t>(offsetof(PermissionBuilder_t1403083973_StaticFields, ___psNone_0)); }
	inline ObjectU5BU5D_t2843939325* get_psNone_0() const { return ___psNone_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_psNone_0() { return &___psNone_0; }
	inline void set_psNone_0(ObjectU5BU5D_t2843939325* value)
	{
		___psNone_0 = value;
		Il2CppCodeGenWriteBarrier((&___psNone_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONBUILDER_T1403083973_H
#ifndef PERMISSIONSET_T223948603_H
#define PERMISSIONSET_T223948603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t223948603  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::<Resolver>k__BackingField
	PolicyLevel_t2891196107 * ___U3CResolverU3Ek__BackingField_0;
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CResolverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___U3CResolverU3Ek__BackingField_0)); }
	inline PolicyLevel_t2891196107 * get_U3CResolverU3Ek__BackingField_0() const { return ___U3CResolverU3Ek__BackingField_0; }
	inline PolicyLevel_t2891196107 ** get_address_of_U3CResolverU3Ek__BackingField_0() { return &___U3CResolverU3Ek__BackingField_0; }
	inline void set_U3CResolverU3Ek__BackingField_0(PolicyLevel_t2891196107 * value)
	{
		___U3CResolverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResolverU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___U3CDeclarativeSecurityU3Ek__BackingField_1)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_1() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return &___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_1(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T223948603_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T1244998447_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T1244998447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t1244998447  : public RuntimeObject
{
public:
	// System.Int32 System.Security.PermissionSet/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_0;
	// System.Object System.Security.PermissionSet/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_1;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1244998447, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1244998447, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T1244998447_H
#ifndef PERMISSIONREQUESTEVIDENCE_T59447972_H
#define PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t59447972  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t223948603 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t223948603 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t223948603 * ___denied_2;

public:
	inline static int32_t get_offset_of_requested_0() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___requested_0)); }
	inline PermissionSet_t223948603 * get_requested_0() const { return ___requested_0; }
	inline PermissionSet_t223948603 ** get_address_of_requested_0() { return &___requested_0; }
	inline void set_requested_0(PermissionSet_t223948603 * value)
	{
		___requested_0 = value;
		Il2CppCodeGenWriteBarrier((&___requested_0), value);
	}

	inline static int32_t get_offset_of_optional_1() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___optional_1)); }
	inline PermissionSet_t223948603 * get_optional_1() const { return ___optional_1; }
	inline PermissionSet_t223948603 ** get_address_of_optional_1() { return &___optional_1; }
	inline void set_optional_1(PermissionSet_t223948603 * value)
	{
		___optional_1 = value;
		Il2CppCodeGenWriteBarrier((&___optional_1), value);
	}

	inline static int32_t get_offset_of_denied_2() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___denied_2)); }
	inline PermissionSet_t223948603 * get_denied_2() const { return ___denied_2; }
	inline PermissionSet_t223948603 ** get_address_of_denied_2() { return &___denied_2; }
	inline void set_denied_2(PermissionSet_t223948603 * value)
	{
		___denied_2 = value;
		Il2CppCodeGenWriteBarrier((&___denied_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifndef SITEMEMBERSHIPCONDITION_T2628413256_H
#define SITEMEMBERSHIPCONDITION_T2628413256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.SiteMembershipCondition
struct  SiteMembershipCondition_t2628413256  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.SiteMembershipCondition::version
	int32_t ___version_0;
	// System.String System.Security.Policy.SiteMembershipCondition::_site
	String_t* ____site_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SiteMembershipCondition_t2628413256, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of__site_1() { return static_cast<int32_t>(offsetof(SiteMembershipCondition_t2628413256, ____site_1)); }
	inline String_t* get__site_1() const { return ____site_1; }
	inline String_t** get_address_of__site_1() { return &____site_1; }
	inline void set__site_1(String_t* value)
	{
		____site_1 = value;
		Il2CppCodeGenWriteBarrier((&____site_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEMEMBERSHIPCONDITION_T2628413256_H
#ifndef MONOTRUSTMANAGER_T991661945_H
#define MONOTRUSTMANAGER_T991661945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MonoTrustManager
struct  MonoTrustManager_t991661945  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTRUSTMANAGER_T991661945_H
#ifndef MEMBERSHIPCONDITIONHELPER_T2246572704_H
#define MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MembershipConditionHelper
struct  MembershipConditionHelper_t2246572704  : public RuntimeObject
{
public:

public:
};

struct MembershipConditionHelper_t2246572704_StaticFields
{
public:
	// System.String System.Security.Policy.MembershipConditionHelper::XmlTag
	String_t* ___XmlTag_0;

public:
	inline static int32_t get_offset_of_XmlTag_0() { return static_cast<int32_t>(offsetof(MembershipConditionHelper_t2246572704_StaticFields, ___XmlTag_0)); }
	inline String_t* get_XmlTag_0() const { return ___XmlTag_0; }
	inline String_t** get_address_of_XmlTag_0() { return &___XmlTag_0; }
	inline void set_XmlTag_0(String_t* value)
	{
		___XmlTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___XmlTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifndef HASHMEMBERSHIPCONDITION_T832907304_H
#define HASHMEMBERSHIPCONDITION_T832907304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.HashMembershipCondition
struct  HashMembershipCondition_t832907304  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.HashMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Policy.HashMembershipCondition::hash_algorithm
	HashAlgorithm_t1432317219 * ___hash_algorithm_1;
	// System.Byte[] System.Security.Policy.HashMembershipCondition::hash_value
	ByteU5BU5D_t4116647657* ___hash_value_2;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(HashMembershipCondition_t832907304, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hash_algorithm_1() { return static_cast<int32_t>(offsetof(HashMembershipCondition_t832907304, ___hash_algorithm_1)); }
	inline HashAlgorithm_t1432317219 * get_hash_algorithm_1() const { return ___hash_algorithm_1; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_algorithm_1() { return &___hash_algorithm_1; }
	inline void set_hash_algorithm_1(HashAlgorithm_t1432317219 * value)
	{
		___hash_algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_algorithm_1), value);
	}

	inline static int32_t get_offset_of_hash_value_2() { return static_cast<int32_t>(offsetof(HashMembershipCondition_t832907304, ___hash_value_2)); }
	inline ByteU5BU5D_t4116647657* get_hash_value_2() const { return ___hash_value_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_value_2() { return &___hash_value_2; }
	inline void set_hash_value_2(ByteU5BU5D_t4116647657* value)
	{
		___hash_value_2 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHMEMBERSHIPCONDITION_T832907304_H
#ifndef HASH_T5925575_H
#define HASH_T5925575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t5925575  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t4116647657* ___data_1;
	// System.Byte[] System.Security.Policy.Hash::_md5
	ByteU5BU5D_t4116647657* ____md5_2;
	// System.Byte[] System.Security.Policy.Hash::_sha1
	ByteU5BU5D_t4116647657* ____sha1_3;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}

	inline static int32_t get_offset_of__md5_2() { return static_cast<int32_t>(offsetof(Hash_t5925575, ____md5_2)); }
	inline ByteU5BU5D_t4116647657* get__md5_2() const { return ____md5_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__md5_2() { return &____md5_2; }
	inline void set__md5_2(ByteU5BU5D_t4116647657* value)
	{
		____md5_2 = value;
		Il2CppCodeGenWriteBarrier((&____md5_2), value);
	}

	inline static int32_t get_offset_of__sha1_3() { return static_cast<int32_t>(offsetof(Hash_t5925575, ____sha1_3)); }
	inline ByteU5BU5D_t4116647657* get__sha1_3() const { return ____sha1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__sha1_3() { return &____sha1_3; }
	inline void set__sha1_3(ByteU5BU5D_t4116647657* value)
	{
		____sha1_3 = value;
		Il2CppCodeGenWriteBarrier((&____sha1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T5925575_H
#ifndef APPLICATIONTRUSTENUMERATOR_T344791887_H
#define APPLICATIONTRUSTENUMERATOR_T344791887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrustEnumerator
struct  ApplicationTrustEnumerator_t344791887  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.ApplicationTrustEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(ApplicationTrustEnumerator_t344791887, ___e_0)); }
	inline RuntimeObject* get_e_0() const { return ___e_0; }
	inline RuntimeObject** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(RuntimeObject* value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((&___e_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUSTENUMERATOR_T344791887_H
#ifndef PUBLISHERMEMBERSHIPCONDITION_T983000103_H
#define PUBLISHERMEMBERSHIPCONDITION_T983000103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PublisherMembershipCondition
struct  PublisherMembershipCondition_t983000103  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.PublisherMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.PublisherMembershipCondition::x509
	X509Certificate_t713131622 * ___x509_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(PublisherMembershipCondition_t983000103, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_x509_1() { return static_cast<int32_t>(offsetof(PublisherMembershipCondition_t983000103, ___x509_1)); }
	inline X509Certificate_t713131622 * get_x509_1() const { return ___x509_1; }
	inline X509Certificate_t713131622 ** get_address_of_x509_1() { return &___x509_1; }
	inline void set_x509_1(X509Certificate_t713131622 * value)
	{
		___x509_1 = value;
		Il2CppCodeGenWriteBarrier((&___x509_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHERMEMBERSHIPCONDITION_T983000103_H
#ifndef WINDOWSPRINCIPAL_T239041500_H
#define WINDOWSPRINCIPAL_T239041500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsPrincipal
struct  WindowsPrincipal_t239041500  : public RuntimeObject
{
public:
	// System.Security.Principal.WindowsIdentity System.Security.Principal.WindowsPrincipal::_identity
	WindowsIdentity_t2948242406 * ____identity_0;
	// System.String[] System.Security.Principal.WindowsPrincipal::m_roles
	StringU5BU5D_t1281789340* ___m_roles_1;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(WindowsPrincipal_t239041500, ____identity_0)); }
	inline WindowsIdentity_t2948242406 * get__identity_0() const { return ____identity_0; }
	inline WindowsIdentity_t2948242406 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(WindowsIdentity_t2948242406 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}

	inline static int32_t get_offset_of_m_roles_1() { return static_cast<int32_t>(offsetof(WindowsPrincipal_t239041500, ___m_roles_1)); }
	inline StringU5BU5D_t1281789340* get_m_roles_1() const { return ___m_roles_1; }
	inline StringU5BU5D_t1281789340** get_address_of_m_roles_1() { return &___m_roles_1; }
	inline void set_m_roles_1(StringU5BU5D_t1281789340* value)
	{
		___m_roles_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_roles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSPRINCIPAL_T239041500_H
#ifndef GENERICIDENTITY_T2319019448_H
#define GENERICIDENTITY_T2319019448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericIdentity
struct  GenericIdentity_t2319019448  : public RuntimeObject
{
public:
	// System.String System.Security.Principal.GenericIdentity::m_name
	String_t* ___m_name_0;
	// System.String System.Security.Principal.GenericIdentity::m_type
	String_t* ___m_type_1;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(GenericIdentity_t2319019448, ___m_name_0)); }
	inline String_t* get_m_name_0() const { return ___m_name_0; }
	inline String_t** get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(String_t* value)
	{
		___m_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_0), value);
	}

	inline static int32_t get_offset_of_m_type_1() { return static_cast<int32_t>(offsetof(GenericIdentity_t2319019448, ___m_type_1)); }
	inline String_t* get_m_type_1() const { return ___m_type_1; }
	inline String_t** get_address_of_m_type_1() { return &___m_type_1; }
	inline void set_m_type_1(String_t* value)
	{
		___m_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICIDENTITY_T2319019448_H
#ifndef GENERICPRINCIPAL_T2520297622_H
#define GENERICPRINCIPAL_T2520297622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericPrincipal
struct  GenericPrincipal_t2520297622  : public RuntimeObject
{
public:
	// System.Security.Principal.IIdentity System.Security.Principal.GenericPrincipal::m_identity
	RuntimeObject* ___m_identity_0;
	// System.String[] System.Security.Principal.GenericPrincipal::m_roles
	StringU5BU5D_t1281789340* ___m_roles_1;

public:
	inline static int32_t get_offset_of_m_identity_0() { return static_cast<int32_t>(offsetof(GenericPrincipal_t2520297622, ___m_identity_0)); }
	inline RuntimeObject* get_m_identity_0() const { return ___m_identity_0; }
	inline RuntimeObject** get_address_of_m_identity_0() { return &___m_identity_0; }
	inline void set_m_identity_0(RuntimeObject* value)
	{
		___m_identity_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_identity_0), value);
	}

	inline static int32_t get_offset_of_m_roles_1() { return static_cast<int32_t>(offsetof(GenericPrincipal_t2520297622, ___m_roles_1)); }
	inline StringU5BU5D_t1281789340* get_m_roles_1() const { return ___m_roles_1; }
	inline StringU5BU5D_t1281789340** get_address_of_m_roles_1() { return &___m_roles_1; }
	inline void set_m_roles_1(StringU5BU5D_t1281789340* value)
	{
		___m_roles_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_roles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICPRINCIPAL_T2520297622_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#define STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t3355146440  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t4116647657* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t3355146440, ___pubkey_0)); }
	inline ByteU5BU5D_t4116647657* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t4116647657* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifndef IDENTITYREFERENCE_T2526738531_H
#define IDENTITYREFERENCE_T2526738531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.IdentityReference
struct  IdentityReference_t2526738531  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITYREFERENCE_T2526738531_H
#ifndef IDENTITYREFERENCECOLLECTION_T2682466582_H
#define IDENTITYREFERENCECOLLECTION_T2682466582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.IdentityReferenceCollection
struct  IdentityReferenceCollection_t2682466582  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Principal.IdentityReferenceCollection::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(IdentityReferenceCollection_t2682466582, ____list_0)); }
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
#endif // IDENTITYREFERENCECOLLECTION_T2682466582_H
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
#ifndef APPLICATIONTRUSTCOLLECTION_T2877879449_H
#define APPLICATIONTRUSTCOLLECTION_T2877879449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrustCollection
struct  ApplicationTrustCollection_t2877879449  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Policy.ApplicationTrustCollection::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ApplicationTrustCollection_t2877879449, ____list_0)); }
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
#endif // APPLICATIONTRUSTCOLLECTION_T2877879449_H
#ifndef APPLICATIONTRUST_T3270368423_H
#define APPLICATIONTRUST_T3270368423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t3270368423  : public RuntimeObject
{
public:
	// System.ApplicationIdentity System.Security.Policy.ApplicationTrust::_appid
	ApplicationIdentity_t1917735356 * ____appid_0;
	// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::_defaultPolicy
	PolicyStatement_t3052133691 * ____defaultPolicy_1;
	// System.Object System.Security.Policy.ApplicationTrust::_xtranfo
	RuntimeObject * ____xtranfo_2;
	// System.Boolean System.Security.Policy.ApplicationTrust::_trustrun
	bool ____trustrun_3;
	// System.Boolean System.Security.Policy.ApplicationTrust::_persist
	bool ____persist_4;
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_5;

public:
	inline static int32_t get_offset_of__appid_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____appid_0)); }
	inline ApplicationIdentity_t1917735356 * get__appid_0() const { return ____appid_0; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__appid_0() { return &____appid_0; }
	inline void set__appid_0(ApplicationIdentity_t1917735356 * value)
	{
		____appid_0 = value;
		Il2CppCodeGenWriteBarrier((&____appid_0), value);
	}

	inline static int32_t get_offset_of__defaultPolicy_1() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____defaultPolicy_1)); }
	inline PolicyStatement_t3052133691 * get__defaultPolicy_1() const { return ____defaultPolicy_1; }
	inline PolicyStatement_t3052133691 ** get_address_of__defaultPolicy_1() { return &____defaultPolicy_1; }
	inline void set__defaultPolicy_1(PolicyStatement_t3052133691 * value)
	{
		____defaultPolicy_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultPolicy_1), value);
	}

	inline static int32_t get_offset_of__xtranfo_2() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____xtranfo_2)); }
	inline RuntimeObject * get__xtranfo_2() const { return ____xtranfo_2; }
	inline RuntimeObject ** get_address_of__xtranfo_2() { return &____xtranfo_2; }
	inline void set__xtranfo_2(RuntimeObject * value)
	{
		____xtranfo_2 = value;
		Il2CppCodeGenWriteBarrier((&____xtranfo_2), value);
	}

	inline static int32_t get_offset_of__trustrun_3() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____trustrun_3)); }
	inline bool get__trustrun_3() const { return ____trustrun_3; }
	inline bool* get_address_of__trustrun_3() { return &____trustrun_3; }
	inline void set__trustrun_3(bool value)
	{
		____trustrun_3 = value;
	}

	inline static int32_t get_offset_of__persist_4() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____persist_4)); }
	inline bool get__persist_4() const { return ____persist_4; }
	inline bool* get_address_of__persist_4() { return &____persist_4; }
	inline void set__persist_4(bool value)
	{
		____persist_4 = value;
	}

	inline static int32_t get_offset_of_fullTrustAssemblies_5() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ___fullTrustAssemblies_5)); }
	inline RuntimeObject* get_fullTrustAssemblies_5() const { return ___fullTrustAssemblies_5; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_5() { return &___fullTrustAssemblies_5; }
	inline void set_fullTrustAssemblies_5(RuntimeObject* value)
	{
		___fullTrustAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T3270368423_H
#ifndef APPLICATIONSECURITYMANAGER_T826984714_H
#define APPLICATIONSECURITYMANAGER_T826984714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationSecurityManager
struct  ApplicationSecurityManager_t826984714  : public RuntimeObject
{
public:

public:
};

struct ApplicationSecurityManager_t826984714_StaticFields
{
public:
	// System.Security.Policy.IApplicationTrustManager System.Security.Policy.ApplicationSecurityManager::_appTrustManager
	RuntimeObject* ____appTrustManager_1;
	// System.Security.Policy.ApplicationTrustCollection System.Security.Policy.ApplicationSecurityManager::_userAppTrusts
	ApplicationTrustCollection_t2877879449 * ____userAppTrusts_2;

public:
	inline static int32_t get_offset_of__appTrustManager_1() { return static_cast<int32_t>(offsetof(ApplicationSecurityManager_t826984714_StaticFields, ____appTrustManager_1)); }
	inline RuntimeObject* get__appTrustManager_1() const { return ____appTrustManager_1; }
	inline RuntimeObject** get_address_of__appTrustManager_1() { return &____appTrustManager_1; }
	inline void set__appTrustManager_1(RuntimeObject* value)
	{
		____appTrustManager_1 = value;
		Il2CppCodeGenWriteBarrier((&____appTrustManager_1), value);
	}

	inline static int32_t get_offset_of__userAppTrusts_2() { return static_cast<int32_t>(offsetof(ApplicationSecurityManager_t826984714_StaticFields, ____userAppTrusts_2)); }
	inline ApplicationTrustCollection_t2877879449 * get__userAppTrusts_2() const { return ____userAppTrusts_2; }
	inline ApplicationTrustCollection_t2877879449 ** get_address_of__userAppTrusts_2() { return &____userAppTrusts_2; }
	inline void set__userAppTrusts_2(ApplicationTrustCollection_t2877879449 * value)
	{
		____userAppTrusts_2 = value;
		Il2CppCodeGenWriteBarrier((&____userAppTrusts_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONSECURITYMANAGER_T826984714_H
#ifndef APPLICATIONSECURITYINFO_T1922225192_H
#define APPLICATIONSECURITYINFO_T1922225192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationSecurityInfo
struct  ApplicationSecurityInfo_t1922225192  : public RuntimeObject
{
public:
	// System.ActivationContext System.Security.Policy.ApplicationSecurityInfo::_context
	ActivationContext_t976916018 * ____context_0;
	// System.Security.Policy.Evidence System.Security.Policy.ApplicationSecurityInfo::_evidence
	Evidence_t2008144148 * ____evidence_1;
	// System.ApplicationId System.Security.Policy.ApplicationSecurityInfo::_appid
	ApplicationId_t3453185175 * ____appid_2;
	// System.Security.PermissionSet System.Security.Policy.ApplicationSecurityInfo::_defaultSet
	PermissionSet_t223948603 * ____defaultSet_3;
	// System.ApplicationId System.Security.Policy.ApplicationSecurityInfo::_deployid
	ApplicationId_t3453185175 * ____deployid_4;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ApplicationSecurityInfo_t1922225192, ____context_0)); }
	inline ActivationContext_t976916018 * get__context_0() const { return ____context_0; }
	inline ActivationContext_t976916018 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(ActivationContext_t976916018 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((&____context_0), value);
	}

	inline static int32_t get_offset_of__evidence_1() { return static_cast<int32_t>(offsetof(ApplicationSecurityInfo_t1922225192, ____evidence_1)); }
	inline Evidence_t2008144148 * get__evidence_1() const { return ____evidence_1; }
	inline Evidence_t2008144148 ** get_address_of__evidence_1() { return &____evidence_1; }
	inline void set__evidence_1(Evidence_t2008144148 * value)
	{
		____evidence_1 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_1), value);
	}

	inline static int32_t get_offset_of__appid_2() { return static_cast<int32_t>(offsetof(ApplicationSecurityInfo_t1922225192, ____appid_2)); }
	inline ApplicationId_t3453185175 * get__appid_2() const { return ____appid_2; }
	inline ApplicationId_t3453185175 ** get_address_of__appid_2() { return &____appid_2; }
	inline void set__appid_2(ApplicationId_t3453185175 * value)
	{
		____appid_2 = value;
		Il2CppCodeGenWriteBarrier((&____appid_2), value);
	}

	inline static int32_t get_offset_of__defaultSet_3() { return static_cast<int32_t>(offsetof(ApplicationSecurityInfo_t1922225192, ____defaultSet_3)); }
	inline PermissionSet_t223948603 * get__defaultSet_3() const { return ____defaultSet_3; }
	inline PermissionSet_t223948603 ** get_address_of__defaultSet_3() { return &____defaultSet_3; }
	inline void set__defaultSet_3(PermissionSet_t223948603 * value)
	{
		____defaultSet_3 = value;
		Il2CppCodeGenWriteBarrier((&____defaultSet_3), value);
	}

	inline static int32_t get_offset_of__deployid_4() { return static_cast<int32_t>(offsetof(ApplicationSecurityInfo_t1922225192, ____deployid_4)); }
	inline ApplicationId_t3453185175 * get__deployid_4() const { return ____deployid_4; }
	inline ApplicationId_t3453185175 ** get_address_of__deployid_4() { return &____deployid_4; }
	inline void set__deployid_4(ApplicationId_t3453185175 * value)
	{
		____deployid_4 = value;
		Il2CppCodeGenWriteBarrier((&____deployid_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONSECURITYINFO_T1922225192_H
#ifndef APPLICATIONDIRECTORYMEMBERSHIPCONDITION_T2885671058_H
#define APPLICATIONDIRECTORYMEMBERSHIPCONDITION_T2885671058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationDirectoryMembershipCondition
struct  ApplicationDirectoryMembershipCondition_t2885671058  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ApplicationDirectoryMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ApplicationDirectoryMembershipCondition_t2885671058, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONDIRECTORYMEMBERSHIPCONDITION_T2885671058_H
#ifndef APPLICATIONDIRECTORY_T181335069_H
#define APPLICATIONDIRECTORY_T181335069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationDirectory
struct  ApplicationDirectory_t181335069  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.ApplicationDirectory::directory
	String_t* ___directory_0;

public:
	inline static int32_t get_offset_of_directory_0() { return static_cast<int32_t>(offsetof(ApplicationDirectory_t181335069, ___directory_0)); }
	inline String_t* get_directory_0() const { return ___directory_0; }
	inline String_t** get_address_of_directory_0() { return &___directory_0; }
	inline void set_directory_0(String_t* value)
	{
		___directory_0 = value;
		Il2CppCodeGenWriteBarrier((&___directory_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONDIRECTORY_T181335069_H
#ifndef ALLMEMBERSHIPCONDITION_T198137363_H
#define ALLMEMBERSHIPCONDITION_T198137363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.AllMembershipCondition
struct  AllMembershipCondition_t198137363  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.AllMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(AllMembershipCondition_t198137363, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLMEMBERSHIPCONDITION_T198137363_H
#ifndef URL_T207802215_H
#define URL_T207802215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Url
struct  Url_t207802215  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.Url::origin_url
	String_t* ___origin_url_0;

public:
	inline static int32_t get_offset_of_origin_url_0() { return static_cast<int32_t>(offsetof(Url_t207802215, ___origin_url_0)); }
	inline String_t* get_origin_url_0() const { return ___origin_url_0; }
	inline String_t** get_address_of_origin_url_0() { return &___origin_url_0; }
	inline void set_origin_url_0(String_t* value)
	{
		___origin_url_0 = value;
		Il2CppCodeGenWriteBarrier((&___origin_url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URL_T207802215_H
#ifndef URLMEMBERSHIPCONDITION_T1122390793_H
#define URLMEMBERSHIPCONDITION_T1122390793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.UrlMembershipCondition
struct  UrlMembershipCondition_t1122390793  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.UrlMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Policy.Url System.Security.Policy.UrlMembershipCondition::url
	Url_t207802215 * ___url_1;
	// System.String System.Security.Policy.UrlMembershipCondition::userUrl
	String_t* ___userUrl_2;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(UrlMembershipCondition_t1122390793, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlMembershipCondition_t1122390793, ___url_1)); }
	inline Url_t207802215 * get_url_1() const { return ___url_1; }
	inline Url_t207802215 ** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(Url_t207802215 * value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}

	inline static int32_t get_offset_of_userUrl_2() { return static_cast<int32_t>(offsetof(UrlMembershipCondition_t1122390793, ___userUrl_2)); }
	inline String_t* get_userUrl_2() const { return ___userUrl_2; }
	inline String_t** get_address_of_userUrl_2() { return &___userUrl_2; }
	inline void set_userUrl_2(String_t* value)
	{
		___userUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___userUrl_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLMEMBERSHIPCONDITION_T1122390793_H
#ifndef UNIONCODEGROUP_T3773268997_H
#define UNIONCODEGROUP_T3773268997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.UnionCodeGroup
struct  UnionCodeGroup_t3773268997  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONCODEGROUP_T3773268997_H
#ifndef SECURITYIDENTIFIER_T1242336359_H
#define SECURITYIDENTIFIER_T1242336359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.SecurityIdentifier
struct  SecurityIdentifier_t1242336359  : public IdentityReference_t2526738531
{
public:
	// System.String System.Security.Principal.SecurityIdentifier::_value
	String_t* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(SecurityIdentifier_t1242336359, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}
};

struct SecurityIdentifier_t1242336359_StaticFields
{
public:
	// System.Int32 System.Security.Principal.SecurityIdentifier::MaxBinaryLength
	int32_t ___MaxBinaryLength_1;
	// System.Int32 System.Security.Principal.SecurityIdentifier::MinBinaryLength
	int32_t ___MinBinaryLength_2;

public:
	inline static int32_t get_offset_of_MaxBinaryLength_1() { return static_cast<int32_t>(offsetof(SecurityIdentifier_t1242336359_StaticFields, ___MaxBinaryLength_1)); }
	inline int32_t get_MaxBinaryLength_1() const { return ___MaxBinaryLength_1; }
	inline int32_t* get_address_of_MaxBinaryLength_1() { return &___MaxBinaryLength_1; }
	inline void set_MaxBinaryLength_1(int32_t value)
	{
		___MaxBinaryLength_1 = value;
	}

	inline static int32_t get_offset_of_MinBinaryLength_2() { return static_cast<int32_t>(offsetof(SecurityIdentifier_t1242336359_StaticFields, ___MinBinaryLength_2)); }
	inline int32_t get_MinBinaryLength_2() const { return ___MinBinaryLength_2; }
	inline int32_t* get_address_of_MinBinaryLength_2() { return &___MinBinaryLength_2; }
	inline void set_MinBinaryLength_2(int32_t value)
	{
		___MinBinaryLength_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYIDENTIFIER_T1242336359_H
#ifndef NTACCOUNT_T1926110333_H
#define NTACCOUNT_T1926110333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.NTAccount
struct  NTAccount_t1926110333  : public IdentityReference_t2526738531
{
public:
	// System.String System.Security.Principal.NTAccount::_value
	String_t* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(NTAccount_t1926110333, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NTACCOUNT_T1926110333_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t1828959166  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
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
#ifndef URLIDENTITYPERMISSION_T48040392_H
#define URLIDENTITYPERMISSION_T48040392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UrlIdentityPermission
struct  UrlIdentityPermission_t48040392  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.UrlIdentityPermission::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlIdentityPermission_t48040392, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLIDENTITYPERMISSION_T48040392_H
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
#ifndef SNIP_T4156255223_H
#define SNIP_T4156255223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t4156255223 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t3456873960 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___AssemblyVersion_2)); }
	inline Version_t3456873960 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t3456873960 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t3456873960 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	char* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_com
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
#endif // SNIP_T4156255223_H
#ifndef SITEIDENTITYPERMISSION_T4239769539_H
#define SITEIDENTITYPERMISSION_T4239769539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t4239769539  : public CodeAccessPermission_t2681295399
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_1;

public:
	inline static int32_t get_offset_of__site_1() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539, ____site_1)); }
	inline String_t* get__site_1() const { return ____site_1; }
	inline String_t** get_address_of__site_1() { return &____site_1; }
	inline void set__site_1(String_t* value)
	{
		____site_1 = value;
		Il2CppCodeGenWriteBarrier((&____site_1), value);
	}
};

struct SiteIdentityPermission_t4239769539_StaticFields
{
public:
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t2897418192* ___valid_2;

public:
	inline static int32_t get_offset_of_valid_2() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t4239769539_StaticFields, ___valid_2)); }
	inline BooleanU5BU5D_t2897418192* get_valid_2() const { return ___valid_2; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valid_2() { return &___valid_2; }
	inline void set_valid_2(BooleanU5BU5D_t2897418192* value)
	{
		___valid_2 = value;
		Il2CppCodeGenWriteBarrier((&___valid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEIDENTITYPERMISSION_T4239769539_H
#ifndef SECURESTRING_T3041467854_H
#define SECURESTRING_T3041467854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t3041467854  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_2;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_3;
	// System.Boolean System.Security.SecureString::read_only
	bool ___read_only_4;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t4116647657* ___data_5;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_read_only_4() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___read_only_4)); }
	inline bool get_read_only_4() const { return ___read_only_4; }
	inline bool* get_address_of_read_only_4() { return &___read_only_4; }
	inline void set_read_only_4(bool value)
	{
		___read_only_4 = value;
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___data_5)); }
	inline ByteU5BU5D_t4116647657* get_data_5() const { return ___data_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(ByteU5BU5D_t4116647657* value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRING_T3041467854_H
#ifndef NETCODEGROUP_T2217812384_H
#define NETCODEGROUP_T2217812384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t2217812384  : public CodeGroup_t3811807446
{
public:
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t1853889766 * ____rules_8;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_9;

public:
	inline static int32_t get_offset_of__rules_8() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____rules_8)); }
	inline Hashtable_t1853889766 * get__rules_8() const { return ____rules_8; }
	inline Hashtable_t1853889766 ** get_address_of__rules_8() { return &____rules_8; }
	inline void set__rules_8(Hashtable_t1853889766 * value)
	{
		____rules_8 = value;
		Il2CppCodeGenWriteBarrier((&____rules_8), value);
	}

	inline static int32_t get_offset_of__hashcode_9() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____hashcode_9)); }
	inline int32_t get__hashcode_9() const { return ____hashcode_9; }
	inline int32_t* get_address_of__hashcode_9() { return &____hashcode_9; }
	inline void set__hashcode_9(int32_t value)
	{
		____hashcode_9 = value;
	}
};

struct NetCodeGroup_t2217812384_StaticFields
{
public:
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_6;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_7;

public:
	inline static int32_t get_offset_of_AbsentOriginScheme_6() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AbsentOriginScheme_6)); }
	inline String_t* get_AbsentOriginScheme_6() const { return ___AbsentOriginScheme_6; }
	inline String_t** get_address_of_AbsentOriginScheme_6() { return &___AbsentOriginScheme_6; }
	inline void set_AbsentOriginScheme_6(String_t* value)
	{
		___AbsentOriginScheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___AbsentOriginScheme_6), value);
	}

	inline static int32_t get_offset_of_AnyOtherOriginScheme_7() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AnyOtherOriginScheme_7)); }
	inline String_t* get_AnyOtherOriginScheme_7() const { return ___AnyOtherOriginScheme_7; }
	inline String_t** get_address_of_AnyOtherOriginScheme_7() { return &___AnyOtherOriginScheme_7; }
	inline void set_AnyOtherOriginScheme_7(String_t* value)
	{
		___AnyOtherOriginScheme_7 = value;
		Il2CppCodeGenWriteBarrier((&___AnyOtherOriginScheme_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETCODEGROUP_T2217812384_H
#ifndef NAMEDPERMISSIONSET_T2915669112_H
#define NAMEDPERMISSIONSET_T2915669112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.NamedPermissionSet
struct  NamedPermissionSet_t2915669112  : public PermissionSet_t223948603
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_2;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_3;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_description_3() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___description_3)); }
	inline String_t* get_description_3() const { return ___description_3; }
	inline String_t** get_address_of_description_3() { return &___description_3; }
	inline void set_description_3(String_t* value)
	{
		___description_3 = value;
		Il2CppCodeGenWriteBarrier((&___description_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEDPERMISSIONSET_T2915669112_H
#ifndef FIRSTMATCHCODEGROUP_T885469689_H
#define FIRSTMATCHCODEGROUP_T885469689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FirstMatchCodeGroup
struct  FirstMatchCodeGroup_t885469689  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMATCHCODEGROUP_T885469689_H
#ifndef SECURITYCONTEXT_T2435442044_H
#define SECURITYCONTEXT_T2435442044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t2435442044  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	intptr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t1202932761 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlowWindowsIdentity
	bool ____suppressFlowWindowsIdentity_3;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_4;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____winid_1)); }
	inline intptr_t get__winid_1() const { return ____winid_1; }
	inline intptr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(intptr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____stack_2)); }
	inline CompressedStack_t1202932761 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t1202932761 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t1202932761 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlowWindowsIdentity_3() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____suppressFlowWindowsIdentity_3)); }
	inline bool get__suppressFlowWindowsIdentity_3() const { return ____suppressFlowWindowsIdentity_3; }
	inline bool* get_address_of__suppressFlowWindowsIdentity_3() { return &____suppressFlowWindowsIdentity_3; }
	inline void set__suppressFlowWindowsIdentity_3(bool value)
	{
		____suppressFlowWindowsIdentity_3 = value;
	}

	inline static int32_t get_offset_of__suppressFlow_4() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____suppressFlow_4)); }
	inline bool get__suppressFlow_4() const { return ____suppressFlow_4; }
	inline bool* get_address_of__suppressFlow_4() { return &____suppressFlow_4; }
	inline void set__suppressFlow_4(bool value)
	{
		____suppressFlow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T2435442044_H
#ifndef HOSTPROTECTIONRESOURCE_T3168622669_H
#define HOSTPROTECTIONRESOURCE_T3168622669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionResource
struct  HostProtectionResource_t3168622669 
{
public:
	// System.Int32 System.Security.Permissions.HostProtectionResource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostProtectionResource_t3168622669, ___value___1)); }
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
#endif // HOSTPROTECTIONRESOURCE_T3168622669_H
#ifndef WINDOWSBUILTINROLE_T3469978812_H
#define WINDOWSBUILTINROLE_T3469978812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsBuiltInRole
struct  WindowsBuiltInRole_t3469978812 
{
public:
	// System.Int32 System.Security.Principal.WindowsBuiltInRole::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsBuiltInRole_t3469978812, ___value___1)); }
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
#endif // WINDOWSBUILTINROLE_T3469978812_H
#ifndef WINDOWSACCOUNTTYPE_T2283000883_H
#define WINDOWSACCOUNTTYPE_T2283000883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t2283000883 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t2283000883, ___value___1)); }
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
#endif // WINDOWSACCOUNTTYPE_T2283000883_H
#ifndef HOSTSECURITYMANAGEROPTIONS_T756318624_H
#define HOSTSECURITYMANAGEROPTIONS_T756318624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManagerOptions
struct  HostSecurityManagerOptions_t756318624 
{
public:
	// System.Int32 System.Security.HostSecurityManagerOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostSecurityManagerOptions_t756318624, ___value___1)); }
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
#endif // HOSTSECURITYMANAGEROPTIONS_T756318624_H
#ifndef WINDOWSIMPERSONATIONCONTEXT_T2345510004_H
#define WINDOWSIMPERSONATIONCONTEXT_T2345510004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsImpersonationContext
struct  WindowsImpersonationContext_t2345510004  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsImpersonationContext::_token
	intptr_t ____token_0;
	// System.Boolean System.Security.Principal.WindowsImpersonationContext::undo
	bool ___undo_1;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsImpersonationContext_t2345510004, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of_undo_1() { return static_cast<int32_t>(offsetof(WindowsImpersonationContext_t2345510004, ___undo_1)); }
	inline bool get_undo_1() const { return ___undo_1; }
	inline bool* get_address_of_undo_1() { return &___undo_1; }
	inline void set_undo_1(bool value)
	{
		___undo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIMPERSONATIONCONTEXT_T2345510004_H
#ifndef FILEIOPERMISSIONACCESS_T1559273540_H
#define FILEIOPERMISSIONACCESS_T1559273540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t1559273540 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t1559273540, ___value___1)); }
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
#endif // FILEIOPERMISSIONACCESS_T1559273540_H
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
#ifndef POLICYLEVELTYPE_T244468749_H
#define POLICYLEVELTYPE_T244468749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t244468749 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyLevelType_t244468749, ___value___1)); }
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
#endif // POLICYLEVELTYPE_T244468749_H
#ifndef PERMISSIONSTATE_T1178999876_H
#define PERMISSIONSTATE_T1178999876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t1178999876 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t1178999876, ___value___1)); }
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
#endif // PERMISSIONSTATE_T1178999876_H
#ifndef WELLKNOWNSIDTYPE_T2565756441_H
#define WELLKNOWNSIDTYPE_T2565756441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WellKnownSidType
struct  WellKnownSidType_t2565756441 
{
public:
	// System.Int32 System.Security.Principal.WellKnownSidType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownSidType_t2565756441, ___value___1)); }
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
#endif // WELLKNOWNSIDTYPE_T2565756441_H
#ifndef UIPERMISSIONCLIPBOARD_T4002838840_H
#define UIPERMISSIONCLIPBOARD_T4002838840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t4002838840 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t4002838840, ___value___1)); }
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
#endif // UIPERMISSIONCLIPBOARD_T4002838840_H
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
#ifndef POLICYSTATEMENTATTRIBUTE_T1674167676_H
#define POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t1674167676 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t1674167676, ___value___1)); }
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
#endif // POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifndef UIPERMISSIONWINDOW_T985109583_H
#define UIPERMISSIONWINDOW_T985109583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t985109583 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t985109583, ___value___1)); }
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
#endif // UIPERMISSIONWINDOW_T985109583_H
#ifndef POLICYEXCEPTION_T1520028310_H
#define POLICYEXCEPTION_T1520028310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyException
struct  PolicyException_t1520028310  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYEXCEPTION_T1520028310_H
#ifndef APPLICATIONVERSIONMATCH_T774557730_H
#define APPLICATIONVERSIONMATCH_T774557730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationVersionMatch
struct  ApplicationVersionMatch_t774557730 
{
public:
	// System.Int32 System.Security.Policy.ApplicationVersionMatch::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ApplicationVersionMatch_t774557730, ___value___1)); }
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
#endif // APPLICATIONVERSIONMATCH_T774557730_H
#ifndef TRUSTMANAGERUICONTEXT_T1082084074_H
#define TRUSTMANAGERUICONTEXT_T1082084074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.TrustManagerUIContext
struct  TrustManagerUIContext_t1082084074 
{
public:
	// System.Int32 System.Security.Policy.TrustManagerUIContext::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrustManagerUIContext_t1082084074, ___value___1)); }
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
#endif // TRUSTMANAGERUICONTEXT_T1082084074_H
#ifndef TOKENIMPERSONATIONLEVEL_T3773270939_H
#define TOKENIMPERSONATIONLEVEL_T3773270939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.TokenImpersonationLevel
struct  TokenImpersonationLevel_t3773270939 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t3773270939, ___value___1)); }
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
#endif // TOKENIMPERSONATIONLEVEL_T3773270939_H
#ifndef TOKENACCESSLEVELS_T3910358359_H
#define TOKENACCESSLEVELS_T3910358359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.TokenAccessLevels
struct  TokenAccessLevels_t3910358359 
{
public:
	// System.Int32 System.Security.Principal.TokenAccessLevels::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TokenAccessLevels_t3910358359, ___value___1)); }
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
#endif // TOKENACCESSLEVELS_T3910358359_H
#ifndef PRINCIPALPOLICY_T1761212333_H
#define PRINCIPALPOLICY_T1761212333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t1761212333 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t1761212333, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T1761212333_H
#ifndef KEY_T3006169375_H
#define KEY_T3006169375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies/Key
struct  Key_t3006169375 
{
public:
	// System.Int32 System.Security.Policy.DefaultPolicies/Key::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Key_t3006169375, ___value___1)); }
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
#endif // KEY_T3006169375_H
#ifndef IDENTITYNOTMAPPEDEXCEPTION_T1016813118_H
#define IDENTITYNOTMAPPEDEXCEPTION_T1016813118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.IdentityNotMappedException
struct  IdentityNotMappedException_t1016813118  : public SystemException_t176217640
{
public:
	// System.Security.Principal.IdentityReferenceCollection System.Security.Principal.IdentityNotMappedException::_coll
	IdentityReferenceCollection_t2682466582 * ____coll_12;

public:
	inline static int32_t get_offset_of__coll_12() { return static_cast<int32_t>(offsetof(IdentityNotMappedException_t1016813118, ____coll_12)); }
	inline IdentityReferenceCollection_t2682466582 * get__coll_12() const { return ____coll_12; }
	inline IdentityReferenceCollection_t2682466582 ** get_address_of__coll_12() { return &____coll_12; }
	inline void set__coll_12(IdentityReferenceCollection_t2682466582 * value)
	{
		____coll_12 = value;
		Il2CppCodeGenWriteBarrier((&____coll_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITYNOTMAPPEDEXCEPTION_T1016813118_H
#ifndef SECURITYPERMISSIONFLAG_T3459270124_H
#define SECURITYPERMISSIONFLAG_T3459270124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t3459270124 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t3459270124, ___value___1)); }
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
#endif // SECURITYPERMISSIONFLAG_T3459270124_H
#ifndef ZONEIDENTITYPERMISSION_T2250593031_H
#define ZONEIDENTITYPERMISSION_T2250593031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t2250593031  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t2250593031, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSION_T2250593031_H
#ifndef UIPERMISSION_T826475846_H
#define UIPERMISSION_T826475846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t826475846  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_1;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_2;

public:
	inline static int32_t get_offset_of__window_1() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____window_1)); }
	inline int32_t get__window_1() const { return ____window_1; }
	inline int32_t* get_address_of__window_1() { return &____window_1; }
	inline void set__window_1(int32_t value)
	{
		____window_1 = value;
	}

	inline static int32_t get_offset_of__clipboard_2() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____clipboard_2)); }
	inline int32_t get__clipboard_2() const { return ____clipboard_2; }
	inline int32_t* get_address_of__clipboard_2() { return &____clipboard_2; }
	inline void set__clipboard_2(int32_t value)
	{
		____clipboard_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSION_T826475846_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#define STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t2780499738  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_2;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t2718874744 * ____list_3;

public:
	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____list_3)); }
	inline ArrayList_t2718874744 * get__list_3() const { return ____list_3; }
	inline ArrayList_t2718874744 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t2718874744 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

struct StrongNameIdentityPermission_t2780499738_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t3456873960 * ___defaultVersion_1;

public:
	inline static int32_t get_offset_of_defaultVersion_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738_StaticFields, ___defaultVersion_1)); }
	inline Version_t3456873960 * get_defaultVersion_1() const { return ___defaultVersion_1; }
	inline Version_t3456873960 ** get_address_of_defaultVersion_1() { return &___defaultVersion_1; }
	inline void set_defaultVersion_1(Version_t3456873960 * value)
	{
		___defaultVersion_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifndef SECURITYATTRIBUTE_T4008260079_H
#define SECURITYATTRIBUTE_T4008260079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t4008260079  : public Attribute_t861562559
{
public:
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Unrestricted_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Unrestricted_1)); }
	inline bool get_m_Unrestricted_1() const { return ___m_Unrestricted_1; }
	inline bool* get_address_of_m_Unrestricted_1() { return &___m_Unrestricted_1; }
	inline void set_m_Unrestricted_1(bool value)
	{
		___m_Unrestricted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T4008260079_H
#ifndef WINDOWSIDENTITY_T2948242406_H
#define WINDOWSIDENTITY_T2948242406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t2948242406  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t950877179 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____info_5)); }
	inline SerializationInfo_t950877179 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t950877179 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t950877179 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t2948242406_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T2948242406_H
#ifndef ZONEMEMBERSHIPCONDITION_T3195636716_H
#define ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ZoneMembershipCondition
struct  ZoneMembershipCondition_t3195636716  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ZoneMembershipCondition::version
	int32_t ___version_0;
	// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifndef ZONE_T2011285646_H
#define ZONE_T2011285646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Zone
struct  Zone_t2011285646  : public RuntimeObject
{
public:
	// System.Security.SecurityZone System.Security.Policy.Zone::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(Zone_t2011285646, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONE_T2011285646_H
#ifndef HOSTPROTECTIONEXCEPTION_T1178110569_H
#define HOSTPROTECTIONEXCEPTION_T1178110569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostProtectionException
struct  HostProtectionException_t1178110569  : public SystemException_t176217640
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_protected
	int32_t ____protected_12;
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_demanded
	int32_t ____demanded_13;

public:
	inline static int32_t get_offset_of__protected_12() { return static_cast<int32_t>(offsetof(HostProtectionException_t1178110569, ____protected_12)); }
	inline int32_t get__protected_12() const { return ____protected_12; }
	inline int32_t* get_address_of__protected_12() { return &____protected_12; }
	inline void set__protected_12(int32_t value)
	{
		____protected_12 = value;
	}

	inline static int32_t get_offset_of__demanded_13() { return static_cast<int32_t>(offsetof(HostProtectionException_t1178110569, ____demanded_13)); }
	inline int32_t get__demanded_13() const { return ____demanded_13; }
	inline int32_t* get_address_of__demanded_13() { return &____demanded_13; }
	inline void set__demanded_13(int32_t value)
	{
		____demanded_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPROTECTIONEXCEPTION_T1178110569_H
#ifndef SECURITYPERMISSION_T2954997752_H
#define SECURITYPERMISSION_T2954997752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2954997752  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_1;

public:
	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(SecurityPermission_t2954997752, ___flags_1)); }
	inline int32_t get_flags_1() const { return ___flags_1; }
	inline int32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(int32_t value)
	{
		___flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2954997752_H
#ifndef TRUSTMANAGERCONTEXT_T2253791128_H
#define TRUSTMANAGERCONTEXT_T2253791128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.TrustManagerContext
struct  TrustManagerContext_t2253791128  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.TrustManagerContext::_ignorePersistedDecision
	bool ____ignorePersistedDecision_0;
	// System.Boolean System.Security.Policy.TrustManagerContext::_noPrompt
	bool ____noPrompt_1;
	// System.Boolean System.Security.Policy.TrustManagerContext::_keepAlive
	bool ____keepAlive_2;
	// System.Boolean System.Security.Policy.TrustManagerContext::_persist
	bool ____persist_3;
	// System.ApplicationIdentity System.Security.Policy.TrustManagerContext::_previousId
	ApplicationIdentity_t1917735356 * ____previousId_4;
	// System.Security.Policy.TrustManagerUIContext System.Security.Policy.TrustManagerContext::_ui
	int32_t ____ui_5;

public:
	inline static int32_t get_offset_of__ignorePersistedDecision_0() { return static_cast<int32_t>(offsetof(TrustManagerContext_t2253791128, ____ignorePersistedDecision_0)); }
	inline bool get__ignorePersistedDecision_0() const { return ____ignorePersistedDecision_0; }
	inline bool* get_address_of__ignorePersistedDecision_0() { return &____ignorePersistedDecision_0; }
	inline void set__ignorePersistedDecision_0(bool value)
	{
		____ignorePersistedDecision_0 = value;
	}

	inline static int32_t get_offset_of__noPrompt_1() { return static_cast<int32_t>(offsetof(TrustManagerContext_t2253791128, ____noPrompt_1)); }
	inline bool get__noPrompt_1() const { return ____noPrompt_1; }
	inline bool* get_address_of__noPrompt_1() { return &____noPrompt_1; }
	inline void set__noPrompt_1(bool value)
	{
		____noPrompt_1 = value;
	}

	inline static int32_t get_offset_of__keepAlive_2() { return static_cast<int32_t>(offsetof(TrustManagerContext_t2253791128, ____keepAlive_2)); }
	inline bool get__keepAlive_2() const { return ____keepAlive_2; }
	inline bool* get_address_of__keepAlive_2() { return &____keepAlive_2; }
	inline void set__keepAlive_2(bool value)
	{
		____keepAlive_2 = value;
	}

	inline static int32_t get_offset_of__persist_3() { return static_cast<int32_t>(offsetof(TrustManagerContext_t2253791128, ____persist_3)); }
	inline bool get__persist_3() const { return ____persist_3; }
	inline bool* get_address_of__persist_3() { return &____persist_3; }
	inline void set__persist_3(bool value)
	{
		____persist_3 = value;
	}

	inline static int32_t get_offset_of__previousId_4() { return static_cast<int32_t>(offsetof(TrustManagerContext_t2253791128, ____previousId_4)); }
	inline ApplicationIdentity_t1917735356 * get__previousId_4() const { return ____previousId_4; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__previousId_4() { return &____previousId_4; }
	inline void set__previousId_4(ApplicationIdentity_t1917735356 * value)
	{
		____previousId_4 = value;
		Il2CppCodeGenWriteBarrier((&____previousId_4), value);
	}

	inline static int32_t get_offset_of__ui_5() { return static_cast<int32_t>(offsetof(TrustManagerContext_t2253791128, ____ui_5)); }
	inline int32_t get__ui_5() const { return ____ui_5; }
	inline int32_t* get_address_of__ui_5() { return &____ui_5; }
	inline void set__ui_5(int32_t value)
	{
		____ui_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRUSTMANAGERCONTEXT_T2253791128_H
#ifndef POLICYSTATEMENT_T3052133691_H
#define POLICYSTATEMENT_T3052133691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t3052133691  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t223948603 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___perms_0)); }
	inline PermissionSet_t223948603 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t223948603 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t223948603 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T3052133691_H
#ifndef POLICYLEVEL_T2891196107_H
#define POLICYLEVEL_T2891196107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t2891196107  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t3811807446 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2718874744 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2718874744 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t1853889766 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t1046076091 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___root_code_group_1)); }
	inline CodeGroup_t3811807446 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t3811807446 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t3811807446 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___full_trust_assemblies_2)); }
	inline ArrayList_t2718874744 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2718874744 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2718874744 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___named_permission_sets_3)); }
	inline ArrayList_t2718874744 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2718874744 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2718874744 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___fullNames_6)); }
	inline Hashtable_t1853889766 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t1853889766 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t1853889766 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___xml_7)); }
	inline SecurityElement_t1046076091 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t1046076091 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t1046076091 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T2891196107_H
#ifndef FILECODEGROUP_T1720965944_H
#define FILECODEGROUP_T1720965944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t1720965944  : public CodeGroup_t3811807446
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_6;

public:
	inline static int32_t get_offset_of_m_access_6() { return static_cast<int32_t>(offsetof(FileCodeGroup_t1720965944, ___m_access_6)); }
	inline int32_t get_m_access_6() const { return ___m_access_6; }
	inline int32_t* get_address_of_m_access_6() { return &___m_access_6; }
	inline void set_m_access_6(int32_t value)
	{
		___m_access_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECODEGROUP_T1720965944_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#define CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t3236455365  : public SecurityAttribute_t4008260079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#define SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t2256310021  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_2;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t2256310021, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifndef SITEIDENTITYPERMISSIONATTRIBUTE_T186203858_H
#define SITEIDENTITYPERMISSIONATTRIBUTE_T186203858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermissionAttribute
struct  SiteIdentityPermissionAttribute_t186203858  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermissionAttribute::site
	String_t* ___site_2;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(SiteIdentityPermissionAttribute_t186203858, ___site_2)); }
	inline String_t* get_site_2() const { return ___site_2; }
	inline String_t** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(String_t* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEIDENTITYPERMISSIONATTRIBUTE_T186203858_H
#ifndef ZONEIDENTITYPERMISSIONATTRIBUTE_T1649283605_H
#define ZONEIDENTITYPERMISSIONATTRIBUTE_T1649283605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermissionAttribute
struct  ZoneIdentityPermissionAttribute_t1649283605  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermissionAttribute::zone
	int32_t ___zone_2;

public:
	inline static int32_t get_offset_of_zone_2() { return static_cast<int32_t>(offsetof(ZoneIdentityPermissionAttribute_t1649283605, ___zone_2)); }
	inline int32_t get_zone_2() const { return ___zone_2; }
	inline int32_t* get_address_of_zone_2() { return &___zone_2; }
	inline void set_zone_2(int32_t value)
	{
		___zone_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSIONATTRIBUTE_T1649283605_H
#ifndef STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T2910499200_H
#define STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T2910499200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermissionAttribute
struct  StrongNameIdentityPermissionAttribute_t2910499200  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::name
	String_t* ___name_2;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::key
	String_t* ___key_3;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::version
	String_t* ___version_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t2910499200, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t2910499200, ___key_3)); }
	inline String_t* get_key_3() const { return ___key_3; }
	inline String_t** get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(String_t* value)
	{
		___key_3 = value;
		Il2CppCodeGenWriteBarrier((&___key_3), value);
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t2910499200, ___version_4)); }
	inline String_t* get_version_4() const { return ___version_4; }
	inline String_t** get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(String_t* value)
	{
		___version_4 = value;
		Il2CppCodeGenWriteBarrier((&___version_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T2910499200_H
#ifndef URLIDENTITYPERMISSIONATTRIBUTE_T1757278501_H
#define URLIDENTITYPERMISSIONATTRIBUTE_T1757278501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UrlIdentityPermissionAttribute
struct  UrlIdentityPermissionAttribute_t1757278501  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.String System.Security.Permissions.UrlIdentityPermissionAttribute::url
	String_t* ___url_2;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(UrlIdentityPermissionAttribute_t1757278501, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((&___url_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLIDENTITYPERMISSIONATTRIBUTE_T1757278501_H
#ifndef UIPERMISSIONATTRIBUTE_T1315993582_H
#define UIPERMISSIONATTRIBUTE_T1315993582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionAttribute
struct  UIPermissionAttribute_t1315993582  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermissionAttribute::clipboard
	int32_t ___clipboard_2;
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermissionAttribute::window
	int32_t ___window_3;

public:
	inline static int32_t get_offset_of_clipboard_2() { return static_cast<int32_t>(offsetof(UIPermissionAttribute_t1315993582, ___clipboard_2)); }
	inline int32_t get_clipboard_2() const { return ___clipboard_2; }
	inline int32_t* get_address_of_clipboard_2() { return &___clipboard_2; }
	inline void set_clipboard_2(int32_t value)
	{
		___clipboard_2 = value;
	}

	inline static int32_t get_offset_of_window_3() { return static_cast<int32_t>(offsetof(UIPermissionAttribute_t1315993582, ___window_3)); }
	inline int32_t get_window_3() const { return ___window_3; }
	inline int32_t* get_address_of_window_3() { return &___window_3; }
	inline void set_window_3(int32_t value)
	{
		___window_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSIONATTRIBUTE_T1315993582_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (SecurityPermission_t2954997752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[2] = 
{
	0,
	SecurityPermission_t2954997752::get_offset_of_flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (SecurityPermissionAttribute_t2256310021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1401[1] = 
{
	SecurityPermissionAttribute_t2256310021::get_offset_of_m_Flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (SecurityPermissionFlag_t3459270124)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1402[17] = 
{
	SecurityPermissionFlag_t3459270124::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (SiteIdentityPermission_t4239769539), -1, sizeof(SiteIdentityPermission_t4239769539_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1403[3] = 
{
	0,
	SiteIdentityPermission_t4239769539::get_offset_of__site_1(),
	SiteIdentityPermission_t4239769539_StaticFields::get_offset_of_valid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (SiteIdentityPermissionAttribute_t186203858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[1] = 
{
	SiteIdentityPermissionAttribute_t186203858::get_offset_of_site_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (StrongNameIdentityPermission_t2780499738), -1, sizeof(StrongNameIdentityPermission_t2780499738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1405[4] = 
{
	0,
	StrongNameIdentityPermission_t2780499738_StaticFields::get_offset_of_defaultVersion_1(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__state_2(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (SNIP_t4156255223)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[3] = 
{
	SNIP_t4156255223::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (StrongNameIdentityPermissionAttribute_t2910499200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[3] = 
{
	StrongNameIdentityPermissionAttribute_t2910499200::get_offset_of_name_2(),
	StrongNameIdentityPermissionAttribute_t2910499200::get_offset_of_key_3(),
	StrongNameIdentityPermissionAttribute_t2910499200::get_offset_of_version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (StrongNamePublicKeyBlob_t3355146440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1408[1] = 
{
	StrongNamePublicKeyBlob_t3355146440::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (UIPermission_t826475846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1409[3] = 
{
	0,
	UIPermission_t826475846::get_offset_of__window_1(),
	UIPermission_t826475846::get_offset_of__clipboard_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (UIPermissionAttribute_t1315993582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1410[2] = 
{
	UIPermissionAttribute_t1315993582::get_offset_of_clipboard_2(),
	UIPermissionAttribute_t1315993582::get_offset_of_window_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (UIPermissionClipboard_t4002838840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1411[4] = 
{
	UIPermissionClipboard_t4002838840::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (UIPermissionWindow_t985109583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1412[5] = 
{
	UIPermissionWindow_t985109583::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (UrlIdentityPermission_t48040392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1413[2] = 
{
	0,
	UrlIdentityPermission_t48040392::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (UrlIdentityPermissionAttribute_t1757278501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[1] = 
{
	UrlIdentityPermissionAttribute_t1757278501::get_offset_of_url_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (ZoneIdentityPermission_t2250593031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1415[2] = 
{
	0,
	ZoneIdentityPermission_t2250593031::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (ZoneIdentityPermissionAttribute_t1649283605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1416[1] = 
{
	ZoneIdentityPermissionAttribute_t1649283605::get_offset_of_zone_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (AllMembershipCondition_t198137363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1417[1] = 
{
	AllMembershipCondition_t198137363::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (ApplicationDirectory_t181335069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[1] = 
{
	ApplicationDirectory_t181335069::get_offset_of_directory_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (ApplicationDirectoryMembershipCondition_t2885671058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1419[1] = 
{
	ApplicationDirectoryMembershipCondition_t2885671058::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (ApplicationSecurityInfo_t1922225192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1420[5] = 
{
	ApplicationSecurityInfo_t1922225192::get_offset_of__context_0(),
	ApplicationSecurityInfo_t1922225192::get_offset_of__evidence_1(),
	ApplicationSecurityInfo_t1922225192::get_offset_of__appid_2(),
	ApplicationSecurityInfo_t1922225192::get_offset_of__defaultSet_3(),
	ApplicationSecurityInfo_t1922225192::get_offset_of__deployid_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (ApplicationSecurityManager_t826984714), -1, sizeof(ApplicationSecurityManager_t826984714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1421[3] = 
{
	0,
	ApplicationSecurityManager_t826984714_StaticFields::get_offset_of__appTrustManager_1(),
	ApplicationSecurityManager_t826984714_StaticFields::get_offset_of__userAppTrusts_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (ApplicationTrust_t3270368423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1422[6] = 
{
	ApplicationTrust_t3270368423::get_offset_of__appid_0(),
	ApplicationTrust_t3270368423::get_offset_of__defaultPolicy_1(),
	ApplicationTrust_t3270368423::get_offset_of__xtranfo_2(),
	ApplicationTrust_t3270368423::get_offset_of__trustrun_3(),
	ApplicationTrust_t3270368423::get_offset_of__persist_4(),
	ApplicationTrust_t3270368423::get_offset_of_fullTrustAssemblies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (ApplicationTrustCollection_t2877879449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[1] = 
{
	ApplicationTrustCollection_t2877879449::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (ApplicationTrustEnumerator_t344791887), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[1] = 
{
	ApplicationTrustEnumerator_t344791887::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (ApplicationVersionMatch_t774557730)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1425[3] = 
{
	ApplicationVersionMatch_t774557730::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (CodeConnectAccess_t1103527196), -1, sizeof(CodeConnectAccess_t1103527196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1426[6] = 
{
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_AnyScheme_0(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_DefaultPort_1(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginPort_2(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginScheme_3(),
	CodeConnectAccess_t1103527196::get_offset_of__scheme_4(),
	CodeConnectAccess_t1103527196::get_offset_of__port_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (CodeGroup_t3811807446), -1, sizeof(CodeGroup_t3811807446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1427[6] = 
{
	CodeGroup_t3811807446::get_offset_of_m_policy_0(),
	CodeGroup_t3811807446::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t3811807446::get_offset_of_m_description_2(),
	CodeGroup_t3811807446::get_offset_of_m_name_3(),
	CodeGroup_t3811807446::get_offset_of_m_children_4(),
	CodeGroup_t3811807446_StaticFields::get_offset_of_U3CU3Ef__switchU24map2A_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (DefaultPolicies_t2520506789), -1, sizeof(DefaultPolicies_t2520506789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1428[26] = 
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
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fxVersion_13(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecmaKey_14(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecma_15(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinalKey_16(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinal_17(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fullTrust_18(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__localIntranet_19(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__internet_20(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__skipVerification_21(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__execution_22(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__nothing_23(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__everything_24(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of_U3CU3Ef__switchU24map2B_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (ReservedNames_t1041595029), -1, sizeof(ReservedNames_t1041595029_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1429[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	ReservedNames_t1041595029_StaticFields::get_offset_of_U3CU3Ef__switchU24map2C_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (Key_t3006169375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1430[3] = 
{
	Key_t3006169375::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (Evidence_t2008144148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1431[4] = 
{
	Evidence_t2008144148::get_offset_of__locked_0(),
	Evidence_t2008144148::get_offset_of_hostEvidenceList_1(),
	Evidence_t2008144148::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t2008144148::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (EvidenceEnumerator_t1708166667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1432[3] = 
{
	EvidenceEnumerator_t1708166667::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t1708166667::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t1708166667::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (FileCodeGroup_t1720965944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1433[1] = 
{
	FileCodeGroup_t1720965944::get_offset_of_m_access_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (FirstMatchCodeGroup_t885469689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (GacInstalled_t3565883570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (GacMembershipCondition_t2888728793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1436[1] = 
{
	GacMembershipCondition_t2888728793::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (Hash_t5925575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[4] = 
{
	Hash_t5925575::get_offset_of_assembly_0(),
	Hash_t5925575::get_offset_of_data_1(),
	Hash_t5925575::get_offset_of__md5_2(),
	Hash_t5925575::get_offset_of__sha1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (HashMembershipCondition_t832907304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1438[3] = 
{
	HashMembershipCondition_t832907304::get_offset_of_version_0(),
	HashMembershipCondition_t832907304::get_offset_of_hash_algorithm_1(),
	HashMembershipCondition_t832907304::get_offset_of_hash_value_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (MembershipConditionHelper_t2246572704), -1, sizeof(MembershipConditionHelper_t2246572704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1444[1] = 
{
	MembershipConditionHelper_t2246572704_StaticFields::get_offset_of_XmlTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (MonoTrustManager_t991661945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1445[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (NetCodeGroup_t2217812384), -1, sizeof(NetCodeGroup_t2217812384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1446[4] = 
{
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AbsentOriginScheme_6(),
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AnyOtherOriginScheme_7(),
	NetCodeGroup_t2217812384::get_offset_of__rules_8(),
	NetCodeGroup_t2217812384::get_offset_of__hashcode_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (PermissionRequestEvidence_t59447972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1447[3] = 
{
	PermissionRequestEvidence_t59447972::get_offset_of_requested_0(),
	PermissionRequestEvidence_t59447972::get_offset_of_optional_1(),
	PermissionRequestEvidence_t59447972::get_offset_of_denied_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (PolicyException_t1520028310), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (PolicyLevel_t2891196107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1449[8] = 
{
	PolicyLevel_t2891196107::get_offset_of_label_0(),
	PolicyLevel_t2891196107::get_offset_of_root_code_group_1(),
	PolicyLevel_t2891196107::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t2891196107::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t2891196107::get_offset_of__location_4(),
	PolicyLevel_t2891196107::get_offset_of__type_5(),
	PolicyLevel_t2891196107::get_offset_of_fullNames_6(),
	PolicyLevel_t2891196107::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (PolicyStatement_t3052133691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1450[2] = 
{
	PolicyStatement_t3052133691::get_offset_of_perms_0(),
	PolicyStatement_t3052133691::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (PolicyStatementAttribute_t1674167676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1451[5] = 
{
	PolicyStatementAttribute_t1674167676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (Publisher_t2758056332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1452[1] = 
{
	Publisher_t2758056332::get_offset_of_m_cert_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (PublisherMembershipCondition_t983000103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[2] = 
{
	PublisherMembershipCondition_t983000103::get_offset_of_version_0(),
	PublisherMembershipCondition_t983000103::get_offset_of_x509_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (Site_t1075497104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1454[1] = 
{
	Site_t1075497104::get_offset_of_origin_site_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (SiteMembershipCondition_t2628413256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1455[2] = 
{
	SiteMembershipCondition_t2628413256::get_offset_of_version_0(),
	SiteMembershipCondition_t2628413256::get_offset_of__site_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (StrongName_t3675724614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1456[3] = 
{
	StrongName_t3675724614::get_offset_of_publickey_0(),
	StrongName_t3675724614::get_offset_of_name_1(),
	StrongName_t3675724614::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (StrongNameMembershipCondition_t2614563360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[4] = 
{
	StrongNameMembershipCondition_t2614563360::get_offset_of_version_0(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_blob_1(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_name_2(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_assemblyVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (TrustManagerContext_t2253791128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1458[6] = 
{
	TrustManagerContext_t2253791128::get_offset_of__ignorePersistedDecision_0(),
	TrustManagerContext_t2253791128::get_offset_of__noPrompt_1(),
	TrustManagerContext_t2253791128::get_offset_of__keepAlive_2(),
	TrustManagerContext_t2253791128::get_offset_of__persist_3(),
	TrustManagerContext_t2253791128::get_offset_of__previousId_4(),
	TrustManagerContext_t2253791128::get_offset_of__ui_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (TrustManagerUIContext_t1082084074)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1459[4] = 
{
	TrustManagerUIContext_t1082084074::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (UnionCodeGroup_t3773268997), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (Url_t207802215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1461[1] = 
{
	Url_t207802215::get_offset_of_origin_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (UrlMembershipCondition_t1122390793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[3] = 
{
	UrlMembershipCondition_t1122390793::get_offset_of_version_0(),
	UrlMembershipCondition_t1122390793::get_offset_of_url_1(),
	UrlMembershipCondition_t1122390793::get_offset_of_userUrl_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (Zone_t2011285646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1463[1] = 
{
	Zone_t2011285646::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (ZoneMembershipCondition_t3195636716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1464[2] = 
{
	ZoneMembershipCondition_t3195636716::get_offset_of_version_0(),
	ZoneMembershipCondition_t3195636716::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (GenericIdentity_t2319019448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[2] = 
{
	GenericIdentity_t2319019448::get_offset_of_m_name_0(),
	GenericIdentity_t2319019448::get_offset_of_m_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (GenericPrincipal_t2520297622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[2] = 
{
	GenericPrincipal_t2520297622::get_offset_of_m_identity_0(),
	GenericPrincipal_t2520297622::get_offset_of_m_roles_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (IdentityNotMappedException_t1016813118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[1] = 
{
	IdentityNotMappedException_t1016813118::get_offset_of__coll_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (IdentityReference_t2526738531), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (IdentityReferenceCollection_t2682466582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1471[1] = 
{
	IdentityReferenceCollection_t2682466582::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (NTAccount_t1926110333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1472[1] = 
{
	NTAccount_t1926110333::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (PrincipalPolicy_t1761212333)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1473[4] = 
{
	PrincipalPolicy_t1761212333::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (SecurityIdentifier_t1242336359), -1, sizeof(SecurityIdentifier_t1242336359_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1474[3] = 
{
	SecurityIdentifier_t1242336359::get_offset_of__value_0(),
	SecurityIdentifier_t1242336359_StaticFields::get_offset_of_MaxBinaryLength_1(),
	SecurityIdentifier_t1242336359_StaticFields::get_offset_of_MinBinaryLength_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (TokenAccessLevels_t3910358359)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1475[14] = 
{
	TokenAccessLevels_t3910358359::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (TokenImpersonationLevel_t3773270939)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1476[6] = 
{
	TokenImpersonationLevel_t3773270939::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (WellKnownSidType_t2565756441)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1477[63] = 
{
	WellKnownSidType_t2565756441::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (WindowsAccountType_t2283000883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1478[5] = 
{
	WindowsAccountType_t2283000883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (WindowsBuiltInRole_t3469978812)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1479[10] = 
{
	WindowsBuiltInRole_t3469978812::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (WindowsIdentity_t2948242406), -1, sizeof(WindowsIdentity_t2948242406_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1480[7] = 
{
	WindowsIdentity_t2948242406::get_offset_of__token_0(),
	WindowsIdentity_t2948242406::get_offset_of__type_1(),
	WindowsIdentity_t2948242406::get_offset_of__account_2(),
	WindowsIdentity_t2948242406::get_offset_of__authenticated_3(),
	WindowsIdentity_t2948242406::get_offset_of__name_4(),
	WindowsIdentity_t2948242406::get_offset_of__info_5(),
	WindowsIdentity_t2948242406_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (WindowsImpersonationContext_t2345510004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1481[2] = 
{
	WindowsImpersonationContext_t2345510004::get_offset_of__token_0(),
	WindowsImpersonationContext_t2345510004::get_offset_of_undo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (WindowsPrincipal_t239041500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1482[2] = 
{
	WindowsPrincipal_t239041500::get_offset_of__identity_0(),
	WindowsPrincipal_t239041500::get_offset_of_m_roles_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (AllowPartiallyTrustedCallersAttribute_t1828959166), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (CodeAccessPermission_t2681295399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (HostProtectionException_t1178110569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[2] = 
{
	HostProtectionException_t1178110569::get_offset_of__protected_12(),
	HostProtectionException_t1178110569::get_offset_of__demanded_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (HostSecurityManager_t1435734729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (HostSecurityManagerOptions_t756318624)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1487[8] = 
{
	HostSecurityManagerOptions_t756318624::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (NamedPermissionSet_t2915669112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1493[2] = 
{
	NamedPermissionSet_t2915669112::get_offset_of_name_2(),
	NamedPermissionSet_t2915669112::get_offset_of_description_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (PermissionBuilder_t1403083973), -1, sizeof(PermissionBuilder_t1403083973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1494[1] = 
{
	PermissionBuilder_t1403083973_StaticFields::get_offset_of_psNone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (PermissionSet_t223948603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1495[2] = 
{
	PermissionSet_t223948603::get_offset_of_U3CResolverU3Ek__BackingField_0(),
	PermissionSet_t223948603::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t1244998447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1496[2] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t1244998447::get_offset_of_U24PC_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t1244998447::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (PolicyLevelType_t244468749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1497[5] = 
{
	PolicyLevelType_t244468749::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (SecureString_t3041467854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1498[6] = 
{
	0,
	0,
	SecureString_t3041467854::get_offset_of_length_2(),
	SecureString_t3041467854::get_offset_of_disposed_3(),
	SecureString_t3041467854::get_offset_of_read_only_4(),
	SecureString_t3041467854::get_offset_of_data_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (SecurityContext_t2435442044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1499[5] = 
{
	SecurityContext_t2435442044::get_offset_of__capture_0(),
	SecurityContext_t2435442044::get_offset_of__winid_1(),
	SecurityContext_t2435442044::get_offset_of__stack_2(),
	SecurityContext_t2435442044::get_offset_of__suppressFlowWindowsIdentity_3(),
	SecurityContext_t2435442044::get_offset_of__suppressFlow_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
