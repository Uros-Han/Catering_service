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


// System.Runtime.InteropServices.UCOMIMoniker[]
struct UCOMIMonikerU5BU5D_t3334853853;
// System.Runtime.InteropServices.UCOMIConnectionPoint[]
struct UCOMIConnectionPointU5BU5D_t909725141;
// System.Runtime.InteropServices.UCOMITypeInfo[]
struct UCOMITypeInfoU5BU5D_t3092318452;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;

struct UCOMIEnumMoniker_t2703299571;
struct BIND_OPTS_t1987624003 ;
struct UCOMIRunningObjectTable_t255439828;
struct UCOMIEnumString_t550825303;
struct CONNECTDATA_t2532328437_marshaled_com;
struct UCOMIEnumConnections_t3961786326;
struct UCOMIEnumConnectionPoints_t880281082;
struct Guid_t ;
struct UCOMIConnectionPoint_t325234620;
struct UCOMIConnectionPointContainer_t3558982126;
struct UCOMITypeInfo_t3436573129;
struct UCOMITypeComp_t1003567318;
struct UCOMIMoniker_t541441876;
struct FILETIME_t2546138622 ;
struct UCOMIStream_t1714348057;
struct STATSTG_t1720075051_marshaled_com;
struct BINDPTR_t2893609822 ;
struct UCOMIBindCtx_t322850205;
struct DISPPARAMS_t2246988669 ;
struct EXCEPINFO_t1368229618_marshaled_com;
struct UCOMITypeLib_t683656240;



// System.Runtime.InteropServices.UCOMIEnumMoniker
struct NOVTABLE UCOMIEnumMoniker_t2703299571 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Next_m1081615817(int32_t ___celt0, UCOMIMonikerU5BU5D_t3334853853* ___rgelt1, int32_t* ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Skip_m611981461(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Reset_m762882763(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Clone_m3859811953(UCOMIEnumMoniker_t2703299571** ___ppenum0) = 0;
};
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
// System.Runtime.InteropServices.UCOMIBindCtx
struct NOVTABLE UCOMIBindCtx_t322850205 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_RegisterObjectBound_m708701671(Il2CppIUnknown* ___punk0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_RevokeObjectBound_m2364686363(Il2CppIUnknown* ___punk0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_ReleaseBoundObjects_m2149756995() = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_SetBindOptions_m2114931710(BIND_OPTS_t1987624003 * ___pbindopts0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_GetBindOptions_m3687681159(BIND_OPTS_t1987624003 * ___pbindopts0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_GetRunningObjectTable_m1480463812(UCOMIRunningObjectTable_t255439828** ___pprot0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_RegisterObjectParam_m1317311573(Il2CppChar* ___pszKey0, Il2CppIUnknown* ___punk1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_GetObjectParam_m4259795442(Il2CppChar* ___pszKey0, Il2CppIUnknown** ___ppunk1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_EnumObjectParam_m2504508664(UCOMIEnumString_t550825303** ___ppenum0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIBindCtx_RevokeObjectParam_m567739255(Il2CppChar* ___pszKey0) = 0;
};
// System.Runtime.InteropServices.UCOMIEnumConnections
struct NOVTABLE UCOMIEnumConnections_t3961786326 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Next_m487663000(int32_t ___celt0, CONNECTDATA_t2532328437_marshaled_com* ___rgelt1, int32_t* ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Skip_m1685343687(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Reset_m2936747538() = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Clone_m1151074920(UCOMIEnumConnections_t3961786326** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.UCOMIEnumConnectionPoints
struct NOVTABLE UCOMIEnumConnectionPoints_t880281082 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnectionPoints_Next_m1737302899(int32_t ___celt0, UCOMIConnectionPointU5BU5D_t909725141* ___rgelt1, int32_t* ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnectionPoints_Skip_m343196997(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnectionPoints_Reset_m923142365(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnectionPoints_Clone_m3514340856(UCOMIEnumConnectionPoints_t880281082** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.UCOMIConnectionPointContainer
struct NOVTABLE UCOMIConnectionPointContainer_t3558982126 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIConnectionPointContainer_EnumConnectionPoints_m80967471(UCOMIEnumConnectionPoints_t880281082** ___ppEnum0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIConnectionPointContainer_FindConnectionPoint_m1041394074(Guid_t * ___riid0, UCOMIConnectionPoint_t325234620** ___ppCP1) = 0;
};
// System.Runtime.InteropServices.UCOMIConnectionPoint
struct NOVTABLE UCOMIConnectionPoint_t325234620 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIConnectionPoint_GetConnectionInterface_m2548507822(Guid_t * ___pIID0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIConnectionPoint_GetConnectionPointContainer_m3780374796(UCOMIConnectionPointContainer_t3558982126** ___ppCPC0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIConnectionPoint_Advise_m3659013543(Il2CppIUnknown* ___pUnkSink0, int32_t* ___pdwCookie1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIConnectionPoint_Unadvise_m2524458918(int32_t ___dwCookie0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIConnectionPoint_EnumConnections_m1771077694(UCOMIEnumConnections_t3961786326** ___ppEnum0) = 0;
};
// System.Runtime.InteropServices.UCOMITypeLib
struct NOVTABLE UCOMITypeLib_t683656240 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_GetTypeInfoCount_m541861210(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_GetTypeInfo_m585026108(int32_t ___index0, UCOMITypeInfo_t3436573129** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_GetTypeInfoType_m1121231267(int32_t ___index0, int32_t* ___pTKind1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_GetTypeInfoOfGuid_m3167054070(Guid_t * ___guid0, UCOMITypeInfo_t3436573129** ___ppTInfo1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_GetLibAttr_m3652649180(intptr_t* ___ppTLibAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_GetTypeComp_m2036701294(UCOMITypeComp_t1003567318** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_GetDocumentation_m3236045296(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_IsName_m3749284631(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_FindName_m4109263426(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, UCOMITypeInfoU5BU5D_t3092318452* ___ppTInfo2, int32_t* ___rgMemId3, int16_t* ___pcFound4) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeLib_ReleaseTLibAttr_m1743760080(intptr_t ___pTLibAttr0) = 0;
};
// System.Runtime.InteropServices.UCOMIPersistFile
struct NOVTABLE UCOMIPersistFile_t2476245654 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIPersistFile_GetClassID_m2200105850(Guid_t * ___pClassID0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIPersistFile_IsDirty_m284982687(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIPersistFile_Load_m1190008195(Il2CppChar* ___pszFileName0, int32_t ___dwMode1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIPersistFile_Save_m1517999185(Il2CppChar* ___pszFileName0, int32_t ___fRemember1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIPersistFile_SaveCompleted_m994162614(Il2CppChar* ___pszFileName0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIPersistFile_GetCurFile_m2820152145(Il2CppChar** ___ppszFileName0) = 0;
};
// System.Runtime.InteropServices.UCOMIRunningObjectTable
struct NOVTABLE UCOMIRunningObjectTable_t255439828 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIRunningObjectTable_Register_m127927435(int32_t ___grfFlags0, Il2CppIUnknown* ___punkObject1, UCOMIMoniker_t541441876* ___pmkObjectName2, int32_t* ___pdwRegister3) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIRunningObjectTable_Revoke_m993530758(int32_t ___dwRegister0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIRunningObjectTable_IsRunning_m4111256655(UCOMIMoniker_t541441876* ___pmkObjectName0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIRunningObjectTable_GetObject_m986691551(UCOMIMoniker_t541441876* ___pmkObjectName0, Il2CppIUnknown** ___ppunkObject1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIRunningObjectTable_NoteChangeTime_m3305088240(int32_t ___dwRegister0, FILETIME_t2546138622 * ___pfiletime1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIRunningObjectTable_GetTimeOfLastChange_m183106227(UCOMIMoniker_t541441876* ___pmkObjectName0, FILETIME_t2546138622 * ___pfiletime1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIRunningObjectTable_EnumRunning_m1493524556(UCOMIEnumMoniker_t2703299571** ___ppenumMoniker0) = 0;
};
// System.Runtime.InteropServices.UCOMIEnumVARIANT
struct NOVTABLE UCOMIEnumVARIANT_t801587188 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Next_m2509606380(int32_t ___celt0, int32_t ___rgvar1, int32_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Skip_m1435391602(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Reset_m2204919885(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Clone_m1975768432(int32_t ___ppenum0) = 0;
};
// System.Runtime.InteropServices.UCOMIEnumString
struct NOVTABLE UCOMIEnumString_t550825303 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Next_m1071215984(int32_t ___celt0, Il2CppChar** ___rgelt1, int32_t* ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Skip_m2478726091(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Reset_m3339919461(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Clone_m4283965056(UCOMIEnumString_t550825303** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.UCOMIStream
struct NOVTABLE UCOMIStream_t1714348057 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_Read_m3349430962(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_Write_m1135645266(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_Seek_m2536701780(int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_SetSize_m424942451(int64_t ___libNewSize0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_CopyTo_m2800388384(UCOMIStream_t1714348057* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_Commit_m335930758(int32_t ___grfCommitFlags0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_Revert_m603947979() = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_LockRegion_m40093194(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_UnlockRegion_m906444140(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_Stat_m2233422402(STATSTG_t1720075051_marshaled_com* ___pstatstg0, int32_t ___grfStatFlag1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIStream_Clone_m1996144159(UCOMIStream_t1714348057** ___ppstm0) = 0;
};
// System.Runtime.InteropServices.UCOMITypeComp
struct NOVTABLE UCOMITypeComp_t1003567318 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMITypeComp_Bind_m868857916(Il2CppChar* ___szName0, int32_t ___lHashVal1, int16_t ___wFlags2, UCOMITypeInfo_t3436573129** ___ppTInfo3, int32_t* ___pDescKind4, BINDPTR_t2893609822 * ___pBindPtr5) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeComp_BindType_m1314016607(Il2CppChar* ___szName0, int32_t ___lHashVal1, UCOMITypeInfo_t3436573129** ___ppTInfo2, UCOMITypeComp_t1003567318** ___ppTComp3) = 0;
};
// System.Runtime.InteropServices.UCOMIMoniker
struct NOVTABLE UCOMIMoniker_t541441876 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_GetClassID_m1739983138(Guid_t * ___pClassID0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_IsDirty_m10208691(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_Load_m1158727534(UCOMIStream_t1714348057* ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_Save_m2832458365(UCOMIStream_t1714348057* ___pStm0, int32_t ___fClearDirty1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_GetSizeMax_m2310145422(int64_t* ___pcbSize0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_BindToObject_m593704525(UCOMIBindCtx_t322850205* ___pbc0, UCOMIMoniker_t541441876* ___pmkToLeft1, Guid_t * ___riidResult2, Il2CppIUnknown** ___ppvResult3) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_BindToStorage_m2422502230(UCOMIBindCtx_t322850205* ___pbc0, UCOMIMoniker_t541441876* ___pmkToLeft1, Guid_t * ___riid2, Il2CppIUnknown** ___ppvObj3) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_Reduce_m3439441029(UCOMIBindCtx_t322850205* ___pbc0, int32_t ___dwReduceHowFar1, UCOMIMoniker_t541441876** ___ppmkToLeft2, UCOMIMoniker_t541441876** ___ppmkReduced3) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_ComposeWith_m1665208769(UCOMIMoniker_t541441876* ___pmkRight0, int32_t ___fOnlyIfNotGeneric1, UCOMIMoniker_t541441876** ___ppmkComposite2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_Enum_m292610546(int32_t ___fForward0, UCOMIEnumMoniker_t2703299571** ___ppenumMoniker1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_IsEqual_m4104740728(UCOMIMoniker_t541441876* ___pmkOtherMoniker0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_Hash_m2116060935(int32_t* ___pdwHash0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_IsRunning_m3452949647(UCOMIBindCtx_t322850205* ___pbc0, UCOMIMoniker_t541441876* ___pmkToLeft1, UCOMIMoniker_t541441876* ___pmkNewlyRunning2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_GetTimeOfLastChange_m1893094694(UCOMIBindCtx_t322850205* ___pbc0, UCOMIMoniker_t541441876* ___pmkToLeft1, FILETIME_t2546138622 * ___pFileTime2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_Inverse_m2445742371(UCOMIMoniker_t541441876** ___ppmk0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_CommonPrefixWith_m2407311085(UCOMIMoniker_t541441876* ___pmkOther0, UCOMIMoniker_t541441876** ___ppmkPrefix1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_RelativePathTo_m3792555823(UCOMIMoniker_t541441876* ___pmkOther0, UCOMIMoniker_t541441876** ___ppmkRelPath1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_GetDisplayName_m1999005767(UCOMIBindCtx_t322850205* ___pbc0, UCOMIMoniker_t541441876* ___pmkToLeft1, Il2CppChar** ___ppszDisplayName2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_ParseDisplayName_m2155273711(UCOMIBindCtx_t322850205* ___pbc0, UCOMIMoniker_t541441876* ___pmkToLeft1, Il2CppChar* ___pszDisplayName2, int32_t* ___pchEaten3, UCOMIMoniker_t541441876** ___ppmkOut4) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIMoniker_IsSystemMoniker_m3761896796(int32_t* ___pdwMksys0) = 0;
};
#ifndef TYPELIBCONVERTER_T1870497393_H
#define TYPELIBCONVERTER_T1870497393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibConverter
struct  TypeLibConverter_t1870497393  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBCONVERTER_T1870497393_H
#ifndef UNKNOWNWRAPPER_T3652386682_H
#define UNKNOWNWRAPPER_T3652386682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnknownWrapper
struct  UnknownWrapper_t3652386682  : public RuntimeObject
{
public:
	// System.Object System.Runtime.InteropServices.UnknownWrapper::InternalObject
	RuntimeObject * ___InternalObject_0;

public:
	inline static int32_t get_offset_of_InternalObject_0() { return static_cast<int32_t>(offsetof(UnknownWrapper_t3652386682, ___InternalObject_0)); }
	inline RuntimeObject * get_InternalObject_0() const { return ___InternalObject_0; }
	inline RuntimeObject ** get_address_of_InternalObject_0() { return &___InternalObject_0; }
	inline void set_InternalObject_0(RuntimeObject * value)
	{
		___InternalObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___InternalObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNKNOWNWRAPPER_T3652386682_H
#ifndef REGISTRATIONSERVICES_T3768291551_H
#define REGISTRATIONSERVICES_T3768291551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RegistrationServices
struct  RegistrationServices_t3768291551  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRATIONSERVICES_T3768291551_H
#ifndef RUNTIMEENVIRONMENT_T1702406123_H
#define RUNTIMEENVIRONMENT_T1702406123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RuntimeEnvironment
struct  RuntimeEnvironment_t1702406123  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEENVIRONMENT_T1702406123_H
#ifndef MARSHAL_T1757017490_H
#define MARSHAL_T1757017490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t1757017490  : public RuntimeObject
{
public:

public:
};

struct Marshal_t1757017490_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T1757017490_H
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
#ifndef VARIANTWRAPPER_T2274646356_H
#define VARIANTWRAPPER_T2274646356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VariantWrapper
struct  VariantWrapper_t2274646356  : public RuntimeObject
{
public:
	// System.Object System.Runtime.InteropServices.VariantWrapper::_wrappedObject
	RuntimeObject * ____wrappedObject_0;

public:
	inline static int32_t get_offset_of__wrappedObject_0() { return static_cast<int32_t>(offsetof(VariantWrapper_t2274646356, ____wrappedObject_0)); }
	inline RuntimeObject * get__wrappedObject_0() const { return ____wrappedObject_0; }
	inline RuntimeObject ** get_address_of__wrappedObject_0() { return &____wrappedObject_0; }
	inline void set__wrappedObject_0(RuntimeObject * value)
	{
		____wrappedObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____wrappedObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIANTWRAPPER_T2274646356_H
#ifndef FILETIME_T2546138622_H
#define FILETIME_T2546138622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FILETIME
struct  FILETIME_t2546138622 
{
public:
	// System.Int32 System.Runtime.InteropServices.FILETIME::dwLowDateTime
	int32_t ___dwLowDateTime_0;
	// System.Int32 System.Runtime.InteropServices.FILETIME::dwHighDateTime
	int32_t ___dwHighDateTime_1;

public:
	inline static int32_t get_offset_of_dwLowDateTime_0() { return static_cast<int32_t>(offsetof(FILETIME_t2546138622, ___dwLowDateTime_0)); }
	inline int32_t get_dwLowDateTime_0() const { return ___dwLowDateTime_0; }
	inline int32_t* get_address_of_dwLowDateTime_0() { return &___dwLowDateTime_0; }
	inline void set_dwLowDateTime_0(int32_t value)
	{
		___dwLowDateTime_0 = value;
	}

	inline static int32_t get_offset_of_dwHighDateTime_1() { return static_cast<int32_t>(offsetof(FILETIME_t2546138622, ___dwHighDateTime_1)); }
	inline int32_t get_dwHighDateTime_1() const { return ___dwHighDateTime_1; }
	inline int32_t* get_address_of_dwHighDateTime_1() { return &___dwHighDateTime_1; }
	inline void set_dwHighDateTime_1(int32_t value)
	{
		___dwHighDateTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILETIME_T2546138622_H
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
#ifndef SETWIN32CONTEXTINIDISPATCHATTRIBUTE_T2170432631_H
#define SETWIN32CONTEXTINIDISPATCHATTRIBUTE_T2170432631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SetWin32ContextInIDispatchAttribute
struct  SetWin32ContextInIDispatchAttribute_t2170432631  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETWIN32CONTEXTINIDISPATCHATTRIBUTE_T2170432631_H
#ifndef TYPELIBVERSIONATTRIBUTE_T570454682_H
#define TYPELIBVERSIONATTRIBUTE_T570454682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t570454682  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t570454682, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t570454682, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVERSIONATTRIBUTE_T570454682_H
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
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t3680361199  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t3680361199, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
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
#ifndef LCIDCONVERSIONATTRIBUTE_T518732629_H
#define LCIDCONVERSIONATTRIBUTE_T518732629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.LCIDConversionAttribute
struct  LCIDConversionAttribute_t518732629  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.LCIDConversionAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(LCIDConversionAttribute_t518732629, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LCIDCONVERSIONATTRIBUTE_T518732629_H
#ifndef PRESERVESIGATTRIBUTE_T979468563_H
#define PRESERVESIGATTRIBUTE_T979468563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t979468563  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T979468563_H
#ifndef PROGIDATTRIBUTE_T3523072345_H
#define PROGIDATTRIBUTE_T3523072345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ProgIdAttribute
struct  ProgIdAttribute_t3523072345  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.ProgIdAttribute::pid
	String_t* ___pid_0;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(ProgIdAttribute_t3523072345, ___pid_0)); }
	inline String_t* get_pid_0() const { return ___pid_0; }
	inline String_t** get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(String_t* value)
	{
		___pid_0 = value;
		Il2CppCodeGenWriteBarrier((&___pid_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGIDATTRIBUTE_T3523072345_H
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
#ifndef IMPORTEDFROMTYPELIBATTRIBUTE_T385006552_H
#define IMPORTEDFROMTYPELIBATTRIBUTE_T385006552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ImportedFromTypeLibAttribute
struct  ImportedFromTypeLibAttribute_t385006552  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.ImportedFromTypeLibAttribute::TlbFile
	String_t* ___TlbFile_0;

public:
	inline static int32_t get_offset_of_TlbFile_0() { return static_cast<int32_t>(offsetof(ImportedFromTypeLibAttribute_t385006552, ___TlbFile_0)); }
	inline String_t* get_TlbFile_0() const { return ___TlbFile_0; }
	inline String_t** get_address_of_TlbFile_0() { return &___TlbFile_0; }
	inline void set_TlbFile_0(String_t* value)
	{
		___TlbFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___TlbFile_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMPORTEDFROMTYPELIBATTRIBUTE_T385006552_H
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
#ifndef PRIMARYINTEROPASSEMBLYATTRIBUTE_T1736917586_H
#define PRIMARYINTEROPASSEMBLYATTRIBUTE_T1736917586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PrimaryInteropAssemblyAttribute
struct  PrimaryInteropAssemblyAttribute_t1736917586  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.PrimaryInteropAssemblyAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.PrimaryInteropAssemblyAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(PrimaryInteropAssemblyAttribute_t1736917586, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(PrimaryInteropAssemblyAttribute_t1736917586, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMARYINTEROPASSEMBLYATTRIBUTE_T1736917586_H
#ifndef TYPELIBVARFLAGS_T741585967_H
#define TYPELIBVARFLAGS_T741585967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVarFlags
struct  TypeLibVarFlags_t741585967 
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVarFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeLibVarFlags_t741585967, ___value___1)); }
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
#endif // TYPELIBVARFLAGS_T741585967_H
#ifndef CHARSET_T3391187264_H
#define CHARSET_T3391187264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t3391187264 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t3391187264, ___value___1)); }
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
#endif // CHARSET_T3391187264_H
#ifndef CALLINGCONVENTION_T1027624783_H
#define CALLINGCONVENTION_T1027624783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1027624783 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t1027624783, ___value___1)); }
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
#endif // CALLINGCONVENTION_T1027624783_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef COMINTERFACETYPE_T2732813453_H
#define COMINTERFACETYPE_T2732813453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t2732813453 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t2732813453, ___value___1)); }
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
#endif // COMINTERFACETYPE_T2732813453_H
#ifndef VARENUM_T1077183404_H
#define VARENUM_T1077183404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VarEnum
struct  VarEnum_t1077183404 
{
public:
	// System.Int32 System.Runtime.InteropServices.VarEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VarEnum_t1077183404, ___value___1)); }
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
#endif // VARENUM_T1077183404_H
#ifndef VARFLAGS_T2026423894_H
#define VARFLAGS_T2026423894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VARFLAGS
struct  VARFLAGS_t2026423894 
{
public:
	// System.Int32 System.Runtime.InteropServices.VARFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VARFLAGS_t2026423894, ___value___1)); }
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
#endif // VARFLAGS_T2026423894_H
#ifndef DESCUNION_T1864775588_H
#define DESCUNION_T1864775588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VARDESC/DESCUNION
struct  DESCUNION_t1864775588 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.VARDESC/DESCUNION::lpvarValue
			intptr_t ___lpvarValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___lpvarValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Runtime.InteropServices.VARDESC/DESCUNION::oInst
			int32_t ___oInst_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___oInst_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_lpvarValue_0() { return static_cast<int32_t>(offsetof(DESCUNION_t1864775588, ___lpvarValue_0)); }
	inline intptr_t get_lpvarValue_0() const { return ___lpvarValue_0; }
	inline intptr_t* get_address_of_lpvarValue_0() { return &___lpvarValue_0; }
	inline void set_lpvarValue_0(intptr_t value)
	{
		___lpvarValue_0 = value;
	}

	inline static int32_t get_offset_of_oInst_1() { return static_cast<int32_t>(offsetof(DESCUNION_t1864775588, ___oInst_1)); }
	inline int32_t get_oInst_1() const { return ___oInst_1; }
	inline int32_t* get_address_of_oInst_1() { return &___oInst_1; }
	inline void set_oInst_1(int32_t value)
	{
		___oInst_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCUNION_T1864775588_H
#ifndef FUNCFLAGS_T3028863005_H
#define FUNCFLAGS_T3028863005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FUNCFLAGS
struct  FUNCFLAGS_t3028863005 
{
public:
	// System.Int32 System.Runtime.InteropServices.FUNCFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FUNCFLAGS_t3028863005, ___value___1)); }
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
#endif // FUNCFLAGS_T3028863005_H
#ifndef UNMANAGEDTYPE_T523127242_H
#define UNMANAGEDTYPE_T523127242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t523127242 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t523127242, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T523127242_H
#ifndef TYPELIBTYPEFLAGS_T1754324347_H
#define TYPELIBTYPEFLAGS_T1754324347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibTypeFlags
struct  TypeLibTypeFlags_t1754324347 
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibTypeFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeLibTypeFlags_t1754324347, ___value___1)); }
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
#endif // TYPELIBTYPEFLAGS_T1754324347_H
#ifndef INVALIDOLEVARIANTTYPEEXCEPTION_T1577719016_H
#define INVALIDOLEVARIANTTYPEEXCEPTION_T1577719016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InvalidOleVariantTypeException
struct  InvalidOleVariantTypeException_t1577719016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOLEVARIANTTYPEEXCEPTION_T1577719016_H
#ifndef LIBFLAGS_T1125565902_H
#define LIBFLAGS_T1125565902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.LIBFLAGS
struct  LIBFLAGS_t1125565902 
{
public:
	// System.Int32 System.Runtime.InteropServices.LIBFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LIBFLAGS_t1125565902, ___value___1)); }
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
#endif // LIBFLAGS_T1125565902_H
#ifndef LAYOUTKIND_T899088008_H
#define LAYOUTKIND_T899088008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.LayoutKind
struct  LayoutKind_t899088008 
{
public:
	// System.Int32 System.Runtime.InteropServices.LayoutKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LayoutKind_t899088008, ___value___1)); }
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
#endif // LAYOUTKIND_T899088008_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T2580336406_H
#define MARSHALDIRECTIVEEXCEPTION_T2580336406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t2580336406  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T2580336406_H
#ifndef PARAMFLAG_T4078134650_H
#define PARAMFLAG_T4078134650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PARAMFLAG
struct  PARAMFLAG_t4078134650 
{
public:
	// System.Int32 System.Runtime.InteropServices.PARAMFLAG::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PARAMFLAG_t4078134650, ___value___1)); }
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
#endif // PARAMFLAG_T4078134650_H
#ifndef REGISTRATIONCLASSCONTEXT_T3745587976_H
#define REGISTRATIONCLASSCONTEXT_T3745587976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RegistrationClassContext
struct  RegistrationClassContext_t3745587976 
{
public:
	// System.Int32 System.Runtime.InteropServices.RegistrationClassContext::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistrationClassContext_t3745587976, ___value___1)); }
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
#endif // REGISTRATIONCLASSCONTEXT_T3745587976_H
#ifndef REGISTRATIONCONNECTIONTYPE_T3893702665_H
#define REGISTRATIONCONNECTIONTYPE_T3893702665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RegistrationConnectionType
struct  RegistrationConnectionType_t3893702665 
{
public:
	// System.Int32 System.Runtime.InteropServices.RegistrationConnectionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistrationConnectionType_t3893702665, ___value___1)); }
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
#endif // REGISTRATIONCONNECTIONTYPE_T3893702665_H
#ifndef INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#define INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InvalidComObjectException
struct  InvalidComObjectException_t3939298412  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#ifndef FUNCKIND_T2874561407_H
#define FUNCKIND_T2874561407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FUNCKIND
struct  FUNCKIND_t2874561407 
{
public:
	// System.Int32 System.Runtime.InteropServices.FUNCKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FUNCKIND_t2874561407, ___value___1)); }
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
#endif // FUNCKIND_T2874561407_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___1)); }
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
#endif // GCHANDLETYPE_T3432586689_H
#ifndef HANDLEREF_T3745784362_H
#define HANDLEREF_T3745784362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t3745784362 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::wrapper
	RuntimeObject * ___wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___wrapper_0)); }
	inline RuntimeObject * get_wrapper_0() const { return ___wrapper_0; }
	inline RuntimeObject ** get_address_of_wrapper_0() { return &___wrapper_0; }
	inline void set_wrapper_0(RuntimeObject * value)
	{
		___wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___wrapper_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEREF_T3745784362_H
#ifndef IDLFLAG_T4090619084_H
#define IDLFLAG_T4090619084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.IDLFLAG
struct  IDLFLAG_t4090619084 
{
public:
	// System.Int32 System.Runtime.InteropServices.IDLFLAG::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IDLFLAG_t4090619084, ___value___1)); }
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
#endif // IDLFLAG_T4090619084_H
#ifndef IDISPATCHIMPLTYPE_T1075235402_H
#define IDISPATCHIMPLTYPE_T1075235402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.IDispatchImplType
struct  IDispatchImplType_t1075235402 
{
public:
	// System.Int32 System.Runtime.InteropServices.IDispatchImplType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IDispatchImplType_t1075235402, ___value___1)); }
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
#endif // IDISPATCHIMPLTYPE_T1075235402_H
#ifndef IMPLTYPEFLAGS_T2991979931_H
#define IMPLTYPEFLAGS_T2991979931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.IMPLTYPEFLAGS
struct  IMPLTYPEFLAGS_t2991979931 
{
public:
	// System.Int32 System.Runtime.InteropServices.IMPLTYPEFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMPLTYPEFLAGS_t2991979931, ___value___1)); }
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
#endif // IMPLTYPEFLAGS_T2991979931_H
#ifndef INVOKEKIND_T3384973106_H
#define INVOKEKIND_T3384973106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.INVOKEKIND
struct  INVOKEKIND_t3384973106 
{
public:
	// System.Int32 System.Runtime.InteropServices.INVOKEKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(INVOKEKIND_t3384973106, ___value___1)); }
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
#endif // INVOKEKIND_T3384973106_H
#ifndef IMPORTEREVENTKIND_T947423872_H
#define IMPORTEREVENTKIND_T947423872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ImporterEventKind
struct  ImporterEventKind_t947423872 
{
public:
	// System.Int32 System.Runtime.InteropServices.ImporterEventKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImporterEventKind_t947423872, ___value___1)); }
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
#endif // IMPORTEREVENTKIND_T947423872_H
#ifndef TYPEFLAGS_T1784710990_H
#define TYPEFLAGS_T1784710990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TYPEFLAGS
struct  TYPEFLAGS_t1784710990 
{
public:
	// System.Int32 System.Runtime.InteropServices.TYPEFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TYPEFLAGS_t1784710990, ___value___1)); }
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
#endif // TYPEFLAGS_T1784710990_H
#ifndef TYPEKIND_T206896110_H
#define TYPEKIND_T206896110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TYPEKIND
struct  TYPEKIND_t206896110 
{
public:
	// System.Int32 System.Runtime.InteropServices.TYPEKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TYPEKIND_t206896110, ___value___1)); }
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
#endif // TYPEKIND_T206896110_H
#ifndef TYPEDESC_T2624412099_H
#define TYPEDESC_T2624412099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TYPEDESC
struct  TYPEDESC_t2624412099 
{
public:
	// System.IntPtr System.Runtime.InteropServices.TYPEDESC::lpValue
	intptr_t ___lpValue_0;
	// System.Int16 System.Runtime.InteropServices.TYPEDESC::vt
	int16_t ___vt_1;

public:
	inline static int32_t get_offset_of_lpValue_0() { return static_cast<int32_t>(offsetof(TYPEDESC_t2624412099, ___lpValue_0)); }
	inline intptr_t get_lpValue_0() const { return ___lpValue_0; }
	inline intptr_t* get_address_of_lpValue_0() { return &___lpValue_0; }
	inline void set_lpValue_0(intptr_t value)
	{
		___lpValue_0 = value;
	}

	inline static int32_t get_offset_of_vt_1() { return static_cast<int32_t>(offsetof(TYPEDESC_t2624412099, ___vt_1)); }
	inline int16_t get_vt_1() const { return ___vt_1; }
	inline int16_t* get_address_of_vt_1() { return &___vt_1; }
	inline void set_vt_1(int16_t value)
	{
		___vt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESC_T2624412099_H
#ifndef TYPELIBFUNCFLAGS_T1779111963_H
#define TYPELIBFUNCFLAGS_T1779111963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibFuncFlags
struct  TypeLibFuncFlags_t1779111963 
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibFuncFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeLibFuncFlags_t1779111963, ___value___1)); }
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
#endif // TYPELIBFUNCFLAGS_T1779111963_H
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
#ifndef SAFEARRAYTYPEMISMATCHEXCEPTION_T2694282323_H
#define SAFEARRAYTYPEMISMATCHEXCEPTION_T2694282323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeArrayTypeMismatchException
struct  SafeArrayTypeMismatchException_t2694282323  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEARRAYTYPEMISMATCHEXCEPTION_T2694282323_H
#ifndef TYPELIBEXPORTERFLAGS_T527350826_H
#define TYPELIBEXPORTERFLAGS_T527350826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibExporterFlags
struct  TypeLibExporterFlags_t527350826 
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibExporterFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeLibExporterFlags_t527350826, ___value___1)); }
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
#endif // TYPELIBEXPORTERFLAGS_T527350826_H
#ifndef SAFEARRAYRANKMISMATCHEXCEPTION_T733328038_H
#define SAFEARRAYRANKMISMATCHEXCEPTION_T733328038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeArrayRankMismatchException
struct  SafeArrayRankMismatchException_t733328038  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEARRAYRANKMISMATCHEXCEPTION_T733328038_H
#ifndef TYPELIBIMPORTERFLAGS_T2926831827_H
#define TYPELIBIMPORTERFLAGS_T2926831827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImporterFlags
struct  TypeLibImporterFlags_t2926831827 
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibImporterFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeLibImporterFlags_t2926831827, ___value___1)); }
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
#endif // TYPELIBIMPORTERFLAGS_T2926831827_H
#ifndef SYSKIND_T3369704323_H
#define SYSKIND_T3369704323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SYSKIND
struct  SYSKIND_t3369704323 
{
public:
	// System.Int32 System.Runtime.InteropServices.SYSKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SYSKIND_t3369704323, ___value___1)); }
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
#endif // SYSKIND_T3369704323_H
#ifndef STATSTG_T1720075051_H
#define STATSTG_T1720075051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.STATSTG
struct  STATSTG_t1720075051 
{
public:
	// System.String System.Runtime.InteropServices.STATSTG::pwcsName
	String_t* ___pwcsName_0;
	// System.Int32 System.Runtime.InteropServices.STATSTG::type
	int32_t ___type_1;
	// System.Int64 System.Runtime.InteropServices.STATSTG::cbSize
	int64_t ___cbSize_2;
	// System.Runtime.InteropServices.FILETIME System.Runtime.InteropServices.STATSTG::mtime
	FILETIME_t2546138622  ___mtime_3;
	// System.Runtime.InteropServices.FILETIME System.Runtime.InteropServices.STATSTG::ctime
	FILETIME_t2546138622  ___ctime_4;
	// System.Runtime.InteropServices.FILETIME System.Runtime.InteropServices.STATSTG::atime
	FILETIME_t2546138622  ___atime_5;
	// System.Int32 System.Runtime.InteropServices.STATSTG::grfMode
	int32_t ___grfMode_6;
	// System.Int32 System.Runtime.InteropServices.STATSTG::grfLocksSupported
	int32_t ___grfLocksSupported_7;
	// System.Guid System.Runtime.InteropServices.STATSTG::clsid
	Guid_t  ___clsid_8;
	// System.Int32 System.Runtime.InteropServices.STATSTG::grfStateBits
	int32_t ___grfStateBits_9;
	// System.Int32 System.Runtime.InteropServices.STATSTG::reserved
	int32_t ___reserved_10;

public:
	inline static int32_t get_offset_of_pwcsName_0() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___pwcsName_0)); }
	inline String_t* get_pwcsName_0() const { return ___pwcsName_0; }
	inline String_t** get_address_of_pwcsName_0() { return &___pwcsName_0; }
	inline void set_pwcsName_0(String_t* value)
	{
		___pwcsName_0 = value;
		Il2CppCodeGenWriteBarrier((&___pwcsName_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_cbSize_2() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___cbSize_2)); }
	inline int64_t get_cbSize_2() const { return ___cbSize_2; }
	inline int64_t* get_address_of_cbSize_2() { return &___cbSize_2; }
	inline void set_cbSize_2(int64_t value)
	{
		___cbSize_2 = value;
	}

	inline static int32_t get_offset_of_mtime_3() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___mtime_3)); }
	inline FILETIME_t2546138622  get_mtime_3() const { return ___mtime_3; }
	inline FILETIME_t2546138622 * get_address_of_mtime_3() { return &___mtime_3; }
	inline void set_mtime_3(FILETIME_t2546138622  value)
	{
		___mtime_3 = value;
	}

	inline static int32_t get_offset_of_ctime_4() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___ctime_4)); }
	inline FILETIME_t2546138622  get_ctime_4() const { return ___ctime_4; }
	inline FILETIME_t2546138622 * get_address_of_ctime_4() { return &___ctime_4; }
	inline void set_ctime_4(FILETIME_t2546138622  value)
	{
		___ctime_4 = value;
	}

	inline static int32_t get_offset_of_atime_5() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___atime_5)); }
	inline FILETIME_t2546138622  get_atime_5() const { return ___atime_5; }
	inline FILETIME_t2546138622 * get_address_of_atime_5() { return &___atime_5; }
	inline void set_atime_5(FILETIME_t2546138622  value)
	{
		___atime_5 = value;
	}

	inline static int32_t get_offset_of_grfMode_6() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___grfMode_6)); }
	inline int32_t get_grfMode_6() const { return ___grfMode_6; }
	inline int32_t* get_address_of_grfMode_6() { return &___grfMode_6; }
	inline void set_grfMode_6(int32_t value)
	{
		___grfMode_6 = value;
	}

	inline static int32_t get_offset_of_grfLocksSupported_7() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___grfLocksSupported_7)); }
	inline int32_t get_grfLocksSupported_7() const { return ___grfLocksSupported_7; }
	inline int32_t* get_address_of_grfLocksSupported_7() { return &___grfLocksSupported_7; }
	inline void set_grfLocksSupported_7(int32_t value)
	{
		___grfLocksSupported_7 = value;
	}

	inline static int32_t get_offset_of_clsid_8() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___clsid_8)); }
	inline Guid_t  get_clsid_8() const { return ___clsid_8; }
	inline Guid_t * get_address_of_clsid_8() { return &___clsid_8; }
	inline void set_clsid_8(Guid_t  value)
	{
		___clsid_8 = value;
	}

	inline static int32_t get_offset_of_grfStateBits_9() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___grfStateBits_9)); }
	inline int32_t get_grfStateBits_9() const { return ___grfStateBits_9; }
	inline int32_t* get_address_of_grfStateBits_9() { return &___grfStateBits_9; }
	inline void set_grfStateBits_9(int32_t value)
	{
		___grfStateBits_9 = value;
	}

	inline static int32_t get_offset_of_reserved_10() { return static_cast<int32_t>(offsetof(STATSTG_t1720075051, ___reserved_10)); }
	inline int32_t get_reserved_10() const { return ___reserved_10; }
	inline int32_t* get_address_of_reserved_10() { return &___reserved_10; }
	inline void set_reserved_10(int32_t value)
	{
		___reserved_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.STATSTG
struct STATSTG_t1720075051_marshaled_pinvoke
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t2546138622  ___mtime_3;
	FILETIME_t2546138622  ___ctime_4;
	FILETIME_t2546138622  ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t  ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.STATSTG
struct STATSTG_t1720075051_marshaled_com
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t2546138622  ___mtime_3;
	FILETIME_t2546138622  ___ctime_4;
	FILETIME_t2546138622  ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t  ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
#endif // STATSTG_T1720075051_H
#ifndef TYPELIBVARATTRIBUTE_T467349673_H
#define TYPELIBVARATTRIBUTE_T467349673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVarAttribute
struct  TypeLibVarAttribute_t467349673  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.TypeLibVarFlags System.Runtime.InteropServices.TypeLibVarAttribute::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(TypeLibVarAttribute_t467349673, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVARATTRIBUTE_T467349673_H
#ifndef TYPELIBFUNCATTRIBUTE_T2309447698_H
#define TYPELIBFUNCATTRIBUTE_T2309447698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibFuncAttribute
struct  TypeLibFuncAttribute_t2309447698  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.TypeLibFuncFlags System.Runtime.InteropServices.TypeLibFuncAttribute::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(TypeLibFuncAttribute_t2309447698, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBFUNCATTRIBUTE_T2309447698_H
#ifndef IDISPATCHIMPLATTRIBUTE_T1466067946_H
#define IDISPATCHIMPLATTRIBUTE_T1466067946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.IDispatchImplAttribute
struct  IDispatchImplAttribute_t1466067946  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.IDispatchImplType System.Runtime.InteropServices.IDispatchImplAttribute::Impl
	int32_t ___Impl_0;

public:
	inline static int32_t get_offset_of_Impl_0() { return static_cast<int32_t>(offsetof(IDispatchImplAttribute_t1466067946, ___Impl_0)); }
	inline int32_t get_Impl_0() const { return ___Impl_0; }
	inline int32_t* get_address_of_Impl_0() { return &___Impl_0; }
	inline void set_Impl_0(int32_t value)
	{
		___Impl_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDISPATCHIMPLATTRIBUTE_T1466067946_H
#ifndef TYPELIBTYPEATTRIBUTE_T821966824_H
#define TYPELIBTYPEATTRIBUTE_T821966824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibTypeAttribute
struct  TypeLibTypeAttribute_t821966824  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.TypeLibTypeFlags System.Runtime.InteropServices.TypeLibTypeAttribute::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(TypeLibTypeAttribute_t821966824, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBTYPEATTRIBUTE_T821966824_H
#ifndef IDLDESC_T3736861604_H
#define IDLDESC_T3736861604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.IDLDESC
struct  IDLDESC_t3736861604 
{
public:
	// System.Int32 System.Runtime.InteropServices.IDLDESC::dwReserved
	int32_t ___dwReserved_0;
	// System.Runtime.InteropServices.IDLFLAG System.Runtime.InteropServices.IDLDESC::wIDLFlags
	int32_t ___wIDLFlags_1;

public:
	inline static int32_t get_offset_of_dwReserved_0() { return static_cast<int32_t>(offsetof(IDLDESC_t3736861604, ___dwReserved_0)); }
	inline int32_t get_dwReserved_0() const { return ___dwReserved_0; }
	inline int32_t* get_address_of_dwReserved_0() { return &___dwReserved_0; }
	inline void set_dwReserved_0(int32_t value)
	{
		___dwReserved_0 = value;
	}

	inline static int32_t get_offset_of_wIDLFlags_1() { return static_cast<int32_t>(offsetof(IDLDESC_t3736861604, ___wIDLFlags_1)); }
	inline int32_t get_wIDLFlags_1() const { return ___wIDLFlags_1; }
	inline int32_t* get_address_of_wIDLFlags_1() { return &___wIDLFlags_1; }
	inline void set_wIDLFlags_1(int32_t value)
	{
		___wIDLFlags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDLDESC_T3736861604_H
#ifndef SEHEXCEPTION_T4051182621_H
#define SEHEXCEPTION_T4051182621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SEHException
struct  SEHException_t4051182621  : public ExternalException_t3544951457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEHEXCEPTION_T4051182621_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t1554680451  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::CharSet
	int32_t ___CharSet_1;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::SetLastError
	bool ___SetLastError_2;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::BestFitMapping
	bool ___BestFitMapping_3;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_4;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_SetLastError_2() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___SetLastError_2)); }
	inline bool get_SetLastError_2() const { return ___SetLastError_2; }
	inline bool* get_address_of_SetLastError_2() { return &___SetLastError_2; }
	inline void set_SetLastError_2(bool value)
	{
		___SetLastError_2 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_3() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___BestFitMapping_3)); }
	inline bool get_BestFitMapping_3() const { return ___BestFitMapping_3; }
	inline bool* get_address_of_BestFitMapping_3() { return &___BestFitMapping_3; }
	inline void set_BestFitMapping_3(bool value)
	{
		___BestFitMapping_3 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_4() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___ThrowOnUnmappableChar_4)); }
	inline bool get_ThrowOnUnmappableChar_4() const { return ___ThrowOnUnmappableChar_4; }
	inline bool* get_address_of_ThrowOnUnmappableChar_4() { return &___ThrowOnUnmappableChar_4; }
	inline void set_ThrowOnUnmappableChar_4(bool value)
	{
		___ThrowOnUnmappableChar_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#ifndef PARAMDESC_T1438659222_H
#define PARAMDESC_T1438659222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PARAMDESC
struct  PARAMDESC_t1438659222 
{
public:
	// System.IntPtr System.Runtime.InteropServices.PARAMDESC::lpVarValue
	intptr_t ___lpVarValue_0;
	// System.Runtime.InteropServices.PARAMFLAG System.Runtime.InteropServices.PARAMDESC::wParamFlags
	int32_t ___wParamFlags_1;

public:
	inline static int32_t get_offset_of_lpVarValue_0() { return static_cast<int32_t>(offsetof(PARAMDESC_t1438659222, ___lpVarValue_0)); }
	inline intptr_t get_lpVarValue_0() const { return ___lpVarValue_0; }
	inline intptr_t* get_address_of_lpVarValue_0() { return &___lpVarValue_0; }
	inline void set_lpVarValue_0(intptr_t value)
	{
		___lpVarValue_0 = value;
	}

	inline static int32_t get_offset_of_wParamFlags_1() { return static_cast<int32_t>(offsetof(PARAMDESC_t1438659222, ___wParamFlags_1)); }
	inline int32_t get_wParamFlags_1() const { return ___wParamFlags_1; }
	inline int32_t* get_address_of_wParamFlags_1() { return &___wParamFlags_1; }
	inline void set_wParamFlags_1(int32_t value)
	{
		___wParamFlags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMDESC_T1438659222_H
// System.Runtime.InteropServices.UCOMITypeInfo
struct NOVTABLE UCOMITypeInfo_t3436573129 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetTypeAttr_m1357754830(intptr_t* ___ppTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetTypeComp_m3967392185(UCOMITypeComp_t1003567318** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetFuncDesc_m2511950173(int32_t ___index0, intptr_t* ___ppFuncDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetVarDesc_m3756268064(int32_t ___index0, intptr_t* ___ppVarDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetNames_m2075117459(int32_t ___memid0, Il2CppChar** ___rgBstrNames1, int32_t ___cMaxNames2, int32_t* ___pcNames3) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetRefTypeOfImplType_m1677949372(int32_t ___index0, int32_t* ___href1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetImplTypeFlags_m2933563892(int32_t ___index0, int32_t* ___pImplTypeFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetIDsOfNames_m905339599(Il2CppChar** ___rgszNames0, int32_t ___cNames1, int32_t* ___pMemId2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_Invoke_m3784673606(Il2CppIUnknown* ___pvInstance0, int32_t ___memid1, int16_t ___wFlags2, DISPPARAMS_t2246988669 * ___pDispParams3, Il2CppVariant* ___pVarResult4, EXCEPINFO_t1368229618_marshaled_com* ___pExcepInfo5, int32_t* ___puArgErr6) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetDocumentation_m1850446858(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetDllEntry_m3980286946(int32_t ___memid0, int32_t ___invKind1, Il2CppChar** ___pBstrDllName2, Il2CppChar** ___pBstrName3, int16_t* ___pwOrdinal4) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetRefTypeInfo_m3548487648(int32_t ___hRef0, UCOMITypeInfo_t3436573129** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_AddressOfMember_m543125538(int32_t ___memid0, int32_t ___invKind1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_CreateInstance_m3153727371(Il2CppIUnknown* ___pUnkOuter0, Guid_t * ___riid1, Il2CppIUnknown** ___ppvObj2) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetMops_m1192533362(int32_t ___memid0, Il2CppChar** ___pBstrMops1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_GetContainingTypeLib_m3447910182(UCOMITypeLib_t683656240** ___ppTLB0, int32_t* ___pIndex1) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_ReleaseTypeAttr_m3549186021(intptr_t ___pTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_ReleaseFuncDesc_m1385231935(intptr_t ___pFuncDesc0) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeInfo_ReleaseVarDesc_m3631462157(intptr_t ___pVarDesc0) = 0;
};
#ifndef INTERFACETYPEATTRIBUTE_T633123336_H
#define INTERFACETYPEATTRIBUTE_T633123336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t633123336  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t633123336, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T633123336_H
#ifndef TYPELIBATTR_T637681552_H
#define TYPELIBATTR_T637681552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TYPELIBATTR
struct  TYPELIBATTR_t637681552 
{
public:
	// System.Guid System.Runtime.InteropServices.TYPELIBATTR::guid
	Guid_t  ___guid_0;
	// System.Int32 System.Runtime.InteropServices.TYPELIBATTR::lcid
	int32_t ___lcid_1;
	// System.Runtime.InteropServices.SYSKIND System.Runtime.InteropServices.TYPELIBATTR::syskind
	int32_t ___syskind_2;
	// System.Int16 System.Runtime.InteropServices.TYPELIBATTR::wMajorVerNum
	int16_t ___wMajorVerNum_3;
	// System.Int16 System.Runtime.InteropServices.TYPELIBATTR::wMinorVerNum
	int16_t ___wMinorVerNum_4;
	// System.Runtime.InteropServices.LIBFLAGS System.Runtime.InteropServices.TYPELIBATTR::wLibFlags
	int32_t ___wLibFlags_5;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t637681552, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_lcid_1() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t637681552, ___lcid_1)); }
	inline int32_t get_lcid_1() const { return ___lcid_1; }
	inline int32_t* get_address_of_lcid_1() { return &___lcid_1; }
	inline void set_lcid_1(int32_t value)
	{
		___lcid_1 = value;
	}

	inline static int32_t get_offset_of_syskind_2() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t637681552, ___syskind_2)); }
	inline int32_t get_syskind_2() const { return ___syskind_2; }
	inline int32_t* get_address_of_syskind_2() { return &___syskind_2; }
	inline void set_syskind_2(int32_t value)
	{
		___syskind_2 = value;
	}

	inline static int32_t get_offset_of_wMajorVerNum_3() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t637681552, ___wMajorVerNum_3)); }
	inline int16_t get_wMajorVerNum_3() const { return ___wMajorVerNum_3; }
	inline int16_t* get_address_of_wMajorVerNum_3() { return &___wMajorVerNum_3; }
	inline void set_wMajorVerNum_3(int16_t value)
	{
		___wMajorVerNum_3 = value;
	}

	inline static int32_t get_offset_of_wMinorVerNum_4() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t637681552, ___wMinorVerNum_4)); }
	inline int16_t get_wMinorVerNum_4() const { return ___wMinorVerNum_4; }
	inline int16_t* get_address_of_wMinorVerNum_4() { return &___wMinorVerNum_4; }
	inline void set_wMinorVerNum_4(int16_t value)
	{
		___wMinorVerNum_4 = value;
	}

	inline static int32_t get_offset_of_wLibFlags_5() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t637681552, ___wLibFlags_5)); }
	inline int32_t get_wLibFlags_5() const { return ___wLibFlags_5; }
	inline int32_t* get_address_of_wLibFlags_5() { return &___wLibFlags_5; }
	inline void set_wLibFlags_5(int32_t value)
	{
		___wLibFlags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBATTR_T637681552_H
#ifndef TYPEATTR_T4147420039_H
#define TYPEATTR_T4147420039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TYPEATTR
struct  TYPEATTR_t4147420039 
{
public:
	// System.Guid System.Runtime.InteropServices.TYPEATTR::guid
	Guid_t  ___guid_1;
	// System.Int32 System.Runtime.InteropServices.TYPEATTR::lcid
	int32_t ___lcid_2;
	// System.Int32 System.Runtime.InteropServices.TYPEATTR::dwReserved
	int32_t ___dwReserved_3;
	// System.Int32 System.Runtime.InteropServices.TYPEATTR::memidConstructor
	int32_t ___memidConstructor_4;
	// System.Int32 System.Runtime.InteropServices.TYPEATTR::memidDestructor
	int32_t ___memidDestructor_5;
	// System.IntPtr System.Runtime.InteropServices.TYPEATTR::lpstrSchema
	intptr_t ___lpstrSchema_6;
	// System.Int32 System.Runtime.InteropServices.TYPEATTR::cbSizeInstance
	int32_t ___cbSizeInstance_7;
	// System.Runtime.InteropServices.TYPEKIND System.Runtime.InteropServices.TYPEATTR::typekind
	int32_t ___typekind_8;
	// System.Int16 System.Runtime.InteropServices.TYPEATTR::cFuncs
	int16_t ___cFuncs_9;
	// System.Int16 System.Runtime.InteropServices.TYPEATTR::cVars
	int16_t ___cVars_10;
	// System.Int16 System.Runtime.InteropServices.TYPEATTR::cImplTypes
	int16_t ___cImplTypes_11;
	// System.Int16 System.Runtime.InteropServices.TYPEATTR::cbSizeVft
	int16_t ___cbSizeVft_12;
	// System.Int16 System.Runtime.InteropServices.TYPEATTR::cbAlignment
	int16_t ___cbAlignment_13;
	// System.Runtime.InteropServices.TYPEFLAGS System.Runtime.InteropServices.TYPEATTR::wTypeFlags
	int32_t ___wTypeFlags_14;
	// System.Int16 System.Runtime.InteropServices.TYPEATTR::wMajorVerNum
	int16_t ___wMajorVerNum_15;
	// System.Int16 System.Runtime.InteropServices.TYPEATTR::wMinorVerNum
	int16_t ___wMinorVerNum_16;
	// System.Runtime.InteropServices.TYPEDESC System.Runtime.InteropServices.TYPEATTR::tdescAlias
	TYPEDESC_t2624412099  ___tdescAlias_17;
	// System.Runtime.InteropServices.IDLDESC System.Runtime.InteropServices.TYPEATTR::idldescType
	IDLDESC_t3736861604  ___idldescType_18;

public:
	inline static int32_t get_offset_of_guid_1() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___guid_1)); }
	inline Guid_t  get_guid_1() const { return ___guid_1; }
	inline Guid_t * get_address_of_guid_1() { return &___guid_1; }
	inline void set_guid_1(Guid_t  value)
	{
		___guid_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_dwReserved_3() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___dwReserved_3)); }
	inline int32_t get_dwReserved_3() const { return ___dwReserved_3; }
	inline int32_t* get_address_of_dwReserved_3() { return &___dwReserved_3; }
	inline void set_dwReserved_3(int32_t value)
	{
		___dwReserved_3 = value;
	}

	inline static int32_t get_offset_of_memidConstructor_4() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___memidConstructor_4)); }
	inline int32_t get_memidConstructor_4() const { return ___memidConstructor_4; }
	inline int32_t* get_address_of_memidConstructor_4() { return &___memidConstructor_4; }
	inline void set_memidConstructor_4(int32_t value)
	{
		___memidConstructor_4 = value;
	}

	inline static int32_t get_offset_of_memidDestructor_5() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___memidDestructor_5)); }
	inline int32_t get_memidDestructor_5() const { return ___memidDestructor_5; }
	inline int32_t* get_address_of_memidDestructor_5() { return &___memidDestructor_5; }
	inline void set_memidDestructor_5(int32_t value)
	{
		___memidDestructor_5 = value;
	}

	inline static int32_t get_offset_of_lpstrSchema_6() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___lpstrSchema_6)); }
	inline intptr_t get_lpstrSchema_6() const { return ___lpstrSchema_6; }
	inline intptr_t* get_address_of_lpstrSchema_6() { return &___lpstrSchema_6; }
	inline void set_lpstrSchema_6(intptr_t value)
	{
		___lpstrSchema_6 = value;
	}

	inline static int32_t get_offset_of_cbSizeInstance_7() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___cbSizeInstance_7)); }
	inline int32_t get_cbSizeInstance_7() const { return ___cbSizeInstance_7; }
	inline int32_t* get_address_of_cbSizeInstance_7() { return &___cbSizeInstance_7; }
	inline void set_cbSizeInstance_7(int32_t value)
	{
		___cbSizeInstance_7 = value;
	}

	inline static int32_t get_offset_of_typekind_8() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___typekind_8)); }
	inline int32_t get_typekind_8() const { return ___typekind_8; }
	inline int32_t* get_address_of_typekind_8() { return &___typekind_8; }
	inline void set_typekind_8(int32_t value)
	{
		___typekind_8 = value;
	}

	inline static int32_t get_offset_of_cFuncs_9() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___cFuncs_9)); }
	inline int16_t get_cFuncs_9() const { return ___cFuncs_9; }
	inline int16_t* get_address_of_cFuncs_9() { return &___cFuncs_9; }
	inline void set_cFuncs_9(int16_t value)
	{
		___cFuncs_9 = value;
	}

	inline static int32_t get_offset_of_cVars_10() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___cVars_10)); }
	inline int16_t get_cVars_10() const { return ___cVars_10; }
	inline int16_t* get_address_of_cVars_10() { return &___cVars_10; }
	inline void set_cVars_10(int16_t value)
	{
		___cVars_10 = value;
	}

	inline static int32_t get_offset_of_cImplTypes_11() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___cImplTypes_11)); }
	inline int16_t get_cImplTypes_11() const { return ___cImplTypes_11; }
	inline int16_t* get_address_of_cImplTypes_11() { return &___cImplTypes_11; }
	inline void set_cImplTypes_11(int16_t value)
	{
		___cImplTypes_11 = value;
	}

	inline static int32_t get_offset_of_cbSizeVft_12() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___cbSizeVft_12)); }
	inline int16_t get_cbSizeVft_12() const { return ___cbSizeVft_12; }
	inline int16_t* get_address_of_cbSizeVft_12() { return &___cbSizeVft_12; }
	inline void set_cbSizeVft_12(int16_t value)
	{
		___cbSizeVft_12 = value;
	}

	inline static int32_t get_offset_of_cbAlignment_13() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___cbAlignment_13)); }
	inline int16_t get_cbAlignment_13() const { return ___cbAlignment_13; }
	inline int16_t* get_address_of_cbAlignment_13() { return &___cbAlignment_13; }
	inline void set_cbAlignment_13(int16_t value)
	{
		___cbAlignment_13 = value;
	}

	inline static int32_t get_offset_of_wTypeFlags_14() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___wTypeFlags_14)); }
	inline int32_t get_wTypeFlags_14() const { return ___wTypeFlags_14; }
	inline int32_t* get_address_of_wTypeFlags_14() { return &___wTypeFlags_14; }
	inline void set_wTypeFlags_14(int32_t value)
	{
		___wTypeFlags_14 = value;
	}

	inline static int32_t get_offset_of_wMajorVerNum_15() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___wMajorVerNum_15)); }
	inline int16_t get_wMajorVerNum_15() const { return ___wMajorVerNum_15; }
	inline int16_t* get_address_of_wMajorVerNum_15() { return &___wMajorVerNum_15; }
	inline void set_wMajorVerNum_15(int16_t value)
	{
		___wMajorVerNum_15 = value;
	}

	inline static int32_t get_offset_of_wMinorVerNum_16() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___wMinorVerNum_16)); }
	inline int16_t get_wMinorVerNum_16() const { return ___wMinorVerNum_16; }
	inline int16_t* get_address_of_wMinorVerNum_16() { return &___wMinorVerNum_16; }
	inline void set_wMinorVerNum_16(int16_t value)
	{
		___wMinorVerNum_16 = value;
	}

	inline static int32_t get_offset_of_tdescAlias_17() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___tdescAlias_17)); }
	inline TYPEDESC_t2624412099  get_tdescAlias_17() const { return ___tdescAlias_17; }
	inline TYPEDESC_t2624412099 * get_address_of_tdescAlias_17() { return &___tdescAlias_17; }
	inline void set_tdescAlias_17(TYPEDESC_t2624412099  value)
	{
		___tdescAlias_17 = value;
	}

	inline static int32_t get_offset_of_idldescType_18() { return static_cast<int32_t>(offsetof(TYPEATTR_t4147420039, ___idldescType_18)); }
	inline IDLDESC_t3736861604  get_idldescType_18() const { return ___idldescType_18; }
	inline IDLDESC_t3736861604 * get_address_of_idldescType_18() { return &___idldescType_18; }
	inline void set_idldescType_18(IDLDESC_t3736861604  value)
	{
		___idldescType_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEATTR_T4147420039_H
#ifndef DESCUNION_T2969319227_H
#define DESCUNION_T2969319227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ELEMDESC/DESCUNION
struct  DESCUNION_t2969319227 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Runtime.InteropServices.IDLDESC System.Runtime.InteropServices.ELEMDESC/DESCUNION::idldesc
			IDLDESC_t3736861604  ___idldesc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			IDLDESC_t3736861604  ___idldesc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Runtime.InteropServices.PARAMDESC System.Runtime.InteropServices.ELEMDESC/DESCUNION::paramdesc
			PARAMDESC_t1438659222  ___paramdesc_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			PARAMDESC_t1438659222  ___paramdesc_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_idldesc_0() { return static_cast<int32_t>(offsetof(DESCUNION_t2969319227, ___idldesc_0)); }
	inline IDLDESC_t3736861604  get_idldesc_0() const { return ___idldesc_0; }
	inline IDLDESC_t3736861604 * get_address_of_idldesc_0() { return &___idldesc_0; }
	inline void set_idldesc_0(IDLDESC_t3736861604  value)
	{
		___idldesc_0 = value;
	}

	inline static int32_t get_offset_of_paramdesc_1() { return static_cast<int32_t>(offsetof(DESCUNION_t2969319227, ___paramdesc_1)); }
	inline PARAMDESC_t1438659222  get_paramdesc_1() const { return ___paramdesc_1; }
	inline PARAMDESC_t1438659222 * get_address_of_paramdesc_1() { return &___paramdesc_1; }
	inline void set_paramdesc_1(PARAMDESC_t1438659222  value)
	{
		___paramdesc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCUNION_T2969319227_H
#ifndef ELEMDESC_T3075712643_H
#define ELEMDESC_T3075712643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ELEMDESC
struct  ELEMDESC_t3075712643 
{
public:
	// System.Runtime.InteropServices.TYPEDESC System.Runtime.InteropServices.ELEMDESC::tdesc
	TYPEDESC_t2624412099  ___tdesc_0;
	// System.Runtime.InteropServices.ELEMDESC/DESCUNION System.Runtime.InteropServices.ELEMDESC::desc
	DESCUNION_t2969319227  ___desc_1;

public:
	inline static int32_t get_offset_of_tdesc_0() { return static_cast<int32_t>(offsetof(ELEMDESC_t3075712643, ___tdesc_0)); }
	inline TYPEDESC_t2624412099  get_tdesc_0() const { return ___tdesc_0; }
	inline TYPEDESC_t2624412099 * get_address_of_tdesc_0() { return &___tdesc_0; }
	inline void set_tdesc_0(TYPEDESC_t2624412099  value)
	{
		___tdesc_0 = value;
	}

	inline static int32_t get_offset_of_desc_1() { return static_cast<int32_t>(offsetof(ELEMDESC_t3075712643, ___desc_1)); }
	inline DESCUNION_t2969319227  get_desc_1() const { return ___desc_1; }
	inline DESCUNION_t2969319227 * get_address_of_desc_1() { return &___desc_1; }
	inline void set_desc_1(DESCUNION_t2969319227  value)
	{
		___desc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMDESC_T3075712643_H
#ifndef VARDESC_T974060553_H
#define VARDESC_T974060553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VARDESC
struct  VARDESC_t974060553 
{
public:
	// System.Int32 System.Runtime.InteropServices.VARDESC::memid
	int32_t ___memid_0;
	// System.String System.Runtime.InteropServices.VARDESC::lpstrSchema
	String_t* ___lpstrSchema_1;
	// System.Runtime.InteropServices.ELEMDESC System.Runtime.InteropServices.VARDESC::elemdescVar
	ELEMDESC_t3075712643  ___elemdescVar_2;
	// System.Int16 System.Runtime.InteropServices.VARDESC::wVarFlags
	int16_t ___wVarFlags_3;
	// System.Runtime.InteropServices.VarEnum System.Runtime.InteropServices.VARDESC::varkind
	int32_t ___varkind_4;

public:
	inline static int32_t get_offset_of_memid_0() { return static_cast<int32_t>(offsetof(VARDESC_t974060553, ___memid_0)); }
	inline int32_t get_memid_0() const { return ___memid_0; }
	inline int32_t* get_address_of_memid_0() { return &___memid_0; }
	inline void set_memid_0(int32_t value)
	{
		___memid_0 = value;
	}

	inline static int32_t get_offset_of_lpstrSchema_1() { return static_cast<int32_t>(offsetof(VARDESC_t974060553, ___lpstrSchema_1)); }
	inline String_t* get_lpstrSchema_1() const { return ___lpstrSchema_1; }
	inline String_t** get_address_of_lpstrSchema_1() { return &___lpstrSchema_1; }
	inline void set_lpstrSchema_1(String_t* value)
	{
		___lpstrSchema_1 = value;
		Il2CppCodeGenWriteBarrier((&___lpstrSchema_1), value);
	}

	inline static int32_t get_offset_of_elemdescVar_2() { return static_cast<int32_t>(offsetof(VARDESC_t974060553, ___elemdescVar_2)); }
	inline ELEMDESC_t3075712643  get_elemdescVar_2() const { return ___elemdescVar_2; }
	inline ELEMDESC_t3075712643 * get_address_of_elemdescVar_2() { return &___elemdescVar_2; }
	inline void set_elemdescVar_2(ELEMDESC_t3075712643  value)
	{
		___elemdescVar_2 = value;
	}

	inline static int32_t get_offset_of_wVarFlags_3() { return static_cast<int32_t>(offsetof(VARDESC_t974060553, ___wVarFlags_3)); }
	inline int16_t get_wVarFlags_3() const { return ___wVarFlags_3; }
	inline int16_t* get_address_of_wVarFlags_3() { return &___wVarFlags_3; }
	inline void set_wVarFlags_3(int16_t value)
	{
		___wVarFlags_3 = value;
	}

	inline static int32_t get_offset_of_varkind_4() { return static_cast<int32_t>(offsetof(VARDESC_t974060553, ___varkind_4)); }
	inline int32_t get_varkind_4() const { return ___varkind_4; }
	inline int32_t* get_address_of_varkind_4() { return &___varkind_4; }
	inline void set_varkind_4(int32_t value)
	{
		___varkind_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.VARDESC
struct VARDESC_t974060553_marshaled_pinvoke
{
	int32_t ___memid_0;
	Il2CppChar* ___lpstrSchema_1;
	ELEMDESC_t3075712643  ___elemdescVar_2;
	int16_t ___wVarFlags_3;
	int32_t ___varkind_4;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.VARDESC
struct VARDESC_t974060553_marshaled_com
{
	int32_t ___memid_0;
	Il2CppChar* ___lpstrSchema_1;
	ELEMDESC_t3075712643  ___elemdescVar_2;
	int16_t ___wVarFlags_3;
	int32_t ___varkind_4;
};
#endif // VARDESC_T974060553_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (FUNCFLAGS_t3028863005)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable800[14] = 
{
	FUNCFLAGS_t3028863005::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (FUNCKIND_t2874561407)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable801[6] = 
{
	FUNCKIND_t2874561407::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (GCHandle_t3351438187)+ sizeof (RuntimeObject), sizeof(GCHandle_t3351438187 ), 0, 0 };
extern const int32_t g_FieldOffsetTable802[1] = 
{
	GCHandle_t3351438187::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (GCHandleType_t3432586689)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable803[5] = 
{
	GCHandleType_t3432586689::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (HandleRef_t3745784362)+ sizeof (RuntimeObject), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable804[2] = 
{
	HandleRef_t3745784362::get_offset_of_wrapper_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HandleRef_t3745784362::get_offset_of_handle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { sizeof (IDLDESC_t3736861604)+ sizeof (RuntimeObject), sizeof(IDLDESC_t3736861604 ), 0, 0 };
extern const int32_t g_FieldOffsetTable808[2] = 
{
	IDLDESC_t3736861604::get_offset_of_dwReserved_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IDLDESC_t3736861604::get_offset_of_wIDLFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { sizeof (IDLFLAG_t4090619084)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable809[6] = 
{
	IDLFLAG_t4090619084::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (IDispatchImplAttribute_t1466067946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable810[1] = 
{
	IDispatchImplAttribute_t1466067946::get_offset_of_Impl_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (IDispatchImplType_t1075235402)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable811[4] = 
{
	IDispatchImplType_t1075235402::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (IMPLTYPEFLAGS_t2991979931)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable812[5] = 
{
	IMPLTYPEFLAGS_t2991979931::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (INVOKEKIND_t3384973106)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable813[5] = 
{
	INVOKEKIND_t3384973106::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (ImportedFromTypeLibAttribute_t385006552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable819[1] = 
{
	ImportedFromTypeLibAttribute_t385006552::get_offset_of_TlbFile_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (ImporterEventKind_t947423872)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable820[4] = 
{
	ImporterEventKind_t947423872::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (InterfaceTypeAttribute_t633123336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable821[1] = 
{
	InterfaceTypeAttribute_t633123336::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (InvalidComObjectException_t3939298412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable822[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (InvalidOleVariantTypeException_t1577719016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable823[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (LCIDConversionAttribute_t518732629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable824[1] = 
{
	LCIDConversionAttribute_t518732629::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (LIBFLAGS_t1125565902)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable825[5] = 
{
	LIBFLAGS_t1125565902::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (LayoutKind_t899088008)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable826[4] = 
{
	LayoutKind_t899088008::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (Marshal_t1757017490), -1, sizeof(Marshal_t1757017490_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable827[2] = 
{
	Marshal_t1757017490_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t1757017490_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (MarshalDirectiveException_t2580336406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable828[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (PARAMDESC_t1438659222)+ sizeof (RuntimeObject), sizeof(PARAMDESC_t1438659222 ), 0, 0 };
extern const int32_t g_FieldOffsetTable829[2] = 
{
	PARAMDESC_t1438659222::get_offset_of_lpVarValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PARAMDESC_t1438659222::get_offset_of_wParamFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (PARAMFLAG_t4078134650)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable830[9] = 
{
	PARAMFLAG_t4078134650::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (PreserveSigAttribute_t979468563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (PrimaryInteropAssemblyAttribute_t1736917586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable832[2] = 
{
	PrimaryInteropAssemblyAttribute_t1736917586::get_offset_of_major_0(),
	PrimaryInteropAssemblyAttribute_t1736917586::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (ProgIdAttribute_t3523072345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable833[1] = 
{
	ProgIdAttribute_t3523072345::get_offset_of_pid_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (RegistrationClassContext_t3745587976)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable834[19] = 
{
	RegistrationClassContext_t3745587976::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (RegistrationConnectionType_t3893702665)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable835[6] = 
{
	RegistrationConnectionType_t3893702665::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { sizeof (RegistrationServices_t3768291551), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { sizeof (RuntimeEnvironment_t1702406123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { sizeof (SEHException_t4051182621), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { sizeof (STATSTG_t1720075051)+ sizeof (RuntimeObject), sizeof(STATSTG_t1720075051_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable839[11] = 
{
	STATSTG_t1720075051::get_offset_of_pwcsName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_cbSize_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_mtime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_ctime_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_atime_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_grfMode_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_grfLocksSupported_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_clsid_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_grfStateBits_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1720075051::get_offset_of_reserved_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { sizeof (SYSKIND_t3369704323)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable840[4] = 
{
	SYSKIND_t3369704323::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (SafeArrayRankMismatchException_t733328038), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable841[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (SafeArrayTypeMismatchException_t2694282323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable842[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (SafeHandle_t3273388951), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable843[4] = 
{
	SafeHandle_t3273388951::get_offset_of_handle_0(),
	SafeHandle_t3273388951::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t3273388951::get_offset_of_refcount_2(),
	SafeHandle_t3273388951::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (SetWin32ContextInIDispatchAttribute_t2170432631), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (TYPEATTR_t4147420039)+ sizeof (RuntimeObject), sizeof(TYPEATTR_t4147420039 ), 0, 0 };
extern const int32_t g_FieldOffsetTable845[19] = 
{
	0,
	TYPEATTR_t4147420039::get_offset_of_guid_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_dwReserved_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_memidConstructor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_memidDestructor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_lpstrSchema_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_cbSizeInstance_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_typekind_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_cFuncs_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_cVars_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_cImplTypes_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_cbSizeVft_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_cbAlignment_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_wTypeFlags_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_wMajorVerNum_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_wMinorVerNum_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_tdescAlias_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t4147420039::get_offset_of_idldescType_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (TYPEDESC_t2624412099)+ sizeof (RuntimeObject), sizeof(TYPEDESC_t2624412099 ), 0, 0 };
extern const int32_t g_FieldOffsetTable846[2] = 
{
	TYPEDESC_t2624412099::get_offset_of_lpValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEDESC_t2624412099::get_offset_of_vt_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (TYPEFLAGS_t1784710990)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable847[16] = 
{
	TYPEFLAGS_t1784710990::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (TYPEKIND_t206896110)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable848[10] = 
{
	TYPEKIND_t206896110::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (TYPELIBATTR_t637681552)+ sizeof (RuntimeObject), sizeof(TYPELIBATTR_t637681552 ), 0, 0 };
extern const int32_t g_FieldOffsetTable849[6] = 
{
	TYPELIBATTR_t637681552::get_offset_of_guid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t637681552::get_offset_of_lcid_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t637681552::get_offset_of_syskind_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t637681552::get_offset_of_wMajorVerNum_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t637681552::get_offset_of_wMinorVerNum_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t637681552::get_offset_of_wLibFlags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (TypeLibConverter_t1870497393), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (TypeLibExporterFlags_t527350826)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable851[7] = 
{
	TypeLibExporterFlags_t527350826::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (TypeLibFuncAttribute_t2309447698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable852[1] = 
{
	TypeLibFuncAttribute_t2309447698::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (TypeLibFuncFlags_t1779111963)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable853[14] = 
{
	TypeLibFuncFlags_t1779111963::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (TypeLibImportClassAttribute_t3680361199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable854[1] = 
{
	TypeLibImportClassAttribute_t3680361199::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (TypeLibImporterFlags_t2926831827)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable855[13] = 
{
	TypeLibImporterFlags_t2926831827::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (TypeLibTypeAttribute_t821966824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable856[1] = 
{
	TypeLibTypeAttribute_t821966824::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (TypeLibTypeFlags_t1754324347)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable857[15] = 
{
	TypeLibTypeFlags_t1754324347::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (TypeLibVarAttribute_t467349673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable858[1] = 
{
	TypeLibVarAttribute_t467349673::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (TypeLibVarFlags_t741585967)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable859[14] = 
{
	TypeLibVarFlags_t741585967::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (TypeLibVersionAttribute_t570454682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable860[2] = 
{
	TypeLibVersionAttribute_t570454682::get_offset_of_major_0(),
	TypeLibVersionAttribute_t570454682::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { 0, sizeof(UCOMIBindCtx_t322850205*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { 0, sizeof(UCOMIConnectionPoint_t325234620*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { 0, sizeof(UCOMIConnectionPointContainer_t3558982126*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { 0, sizeof(UCOMIEnumConnectionPoints_t880281082*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { 0, sizeof(UCOMIEnumConnections_t3961786326*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { 0, sizeof(UCOMIEnumMoniker_t2703299571*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { 0, sizeof(UCOMIEnumString_t550825303*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { 0, sizeof(UCOMIEnumVARIANT_t801587188*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { 0, sizeof(UCOMIMoniker_t541441876*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { 0, sizeof(UCOMIPersistFile_t2476245654*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { 0, sizeof(UCOMIRunningObjectTable_t255439828*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { 0, sizeof(UCOMIStream_t1714348057*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { 0, sizeof(UCOMITypeComp_t1003567318*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { 0, sizeof(UCOMITypeInfo_t3436573129*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { 0, sizeof(UCOMITypeLib_t683656240*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (UnknownWrapper_t3652386682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable876[1] = 
{
	UnknownWrapper_t3652386682::get_offset_of_InternalObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (UnmanagedFunctionPointerAttribute_t1554680451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable877[5] = 
{
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_call_conv_0(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_CharSet_1(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_SetLastError_2(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_BestFitMapping_3(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_ThrowOnUnmappableChar_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (UnmanagedType_t523127242)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable878[36] = 
{
	UnmanagedType_t523127242::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (VARDESC_t974060553)+ sizeof (RuntimeObject), sizeof(VARDESC_t974060553_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable879[5] = 
{
	VARDESC_t974060553::get_offset_of_memid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t974060553::get_offset_of_lpstrSchema_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t974060553::get_offset_of_elemdescVar_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t974060553::get_offset_of_wVarFlags_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t974060553::get_offset_of_varkind_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (DESCUNION_t1864775588)+ sizeof (RuntimeObject), sizeof(DESCUNION_t1864775588 ), 0, 0 };
extern const int32_t g_FieldOffsetTable880[2] = 
{
	DESCUNION_t1864775588::get_offset_of_lpvarValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DESCUNION_t1864775588::get_offset_of_oInst_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (VARFLAGS_t2026423894)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable881[14] = 
{
	VARFLAGS_t2026423894::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (VarEnum_t1077183404)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable882[45] = 
{
	VarEnum_t1077183404::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (VariantWrapper_t2274646356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable883[1] = 
{
	VariantWrapper_t2274646356::get_offset_of__wrappedObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
