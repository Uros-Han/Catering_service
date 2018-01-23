#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Runtime.InteropServices.UCOMITypeInfo[]
struct UCOMITypeInfoU5BU5D_t3092318452;
// System.Runtime.InteropServices.ComTypes.ITypeInfo[]
struct ITypeInfoU5BU5D_t3865376289;
// System.Runtime.InteropServices.UCOMIMoniker[]
struct UCOMIMonikerU5BU5D_t3334853853;
// System.Runtime.InteropServices.UCOMIConnectionPoint[]
struct UCOMIConnectionPointU5BU5D_t909725141;
// System.Runtime.InteropServices.ComTypes.IConnectionPoint[]
struct IConnectionPointU5BU5D_t3446966510;
// System.Runtime.InteropServices.ComTypes.IMoniker[]
struct IMonikerU5BU5D_t3379837647;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Char[]
struct CharU5BU5D_t3528271667;

struct BIND_OPTS_t831320616 ;
struct IRunningObjectTable_t1355610725;
struct IEnumString_t334177337;
struct BIND_OPTS_t1987624003 ;
struct UCOMIRunningObjectTable_t255439828;
struct UCOMIEnumString_t550825303;
struct UCOMIStream_t1714348057;
struct STATSTG_t1720075051_marshaled_com;
struct UCOMITypeInfo_t3436573129;
struct Guid_t ;
struct UCOMITypeComp_t1003567318;
struct ITypeComp_t1006330118;
struct ITypeInfo_t2595417184;
struct UCOMIMoniker_t541441876;
struct FILETIME_t2546138622 ;
struct UCOMIEnumMoniker_t2703299571;
struct UCOMIEnumConnectionPoints_t880281082;
struct CONNECTDATA_t2532328437_marshaled_com;
struct UCOMIEnumConnections_t3961786326;
struct UCOMIConnectionPoint_t325234620;
struct UCOMIConnectionPointContainer_t3558982126;
struct BINDPTR_t2893609822 ;
struct IEnumConnectionPoints_t3877902792;
struct CONNECTDATA_t1569573429_marshaled_com;
struct IEnumConnections_t1736845793;
struct IConnectionPoint_t2097756631;
struct IConnectionPointContainer_t1785655909;
struct IMoniker_t679694026;
struct FILETIME_t1200622595 ;
struct IEnumMoniker_t3824831520;
struct BINDPTR_t947377522 ;
struct IStream_t2767586507;
struct STATSTG_t1180006254_marshaled_com;
struct IEnumVARIANT_t2637587419;
struct IBindCtx_t1565995796;
struct UCOMIBindCtx_t322850205;
struct DISPPARAMS_t149323838 ;
struct ITypeLib_t2209420004;
struct DISPPARAMS_t2246988669 ;
struct EXCEPINFO_t1368229618_marshaled_com;
struct UCOMITypeLib_t683656240;



// System.Runtime.InteropServices.ComTypes.IBindCtx
struct NOVTABLE IBindCtx_t1565995796 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindCtx_RegisterObjectBound_m2904632953(Il2CppIUnknown* ___punk0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_RevokeObjectBound_m488441122(Il2CppIUnknown* ___punk0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_ReleaseBoundObjects_m1553310386() = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_SetBindOptions_m2015443062(BIND_OPTS_t831320616 * ___pbindopts0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_GetBindOptions_m2283937621(BIND_OPTS_t831320616 * ___pbindopts0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_GetRunningObjectTable_m795267003(IRunningObjectTable_t1355610725** ___pprot0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_RegisterObjectParam_m3230634795(Il2CppChar* ___pszKey0, Il2CppIUnknown* ___punk1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_GetObjectParam_m3710054258(Il2CppChar* ___pszKey0, Il2CppIUnknown** ___ppunk1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_EnumObjectParam_m4253208393(IEnumString_t334177337** ___ppenum0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_RevokeObjectParam_m1240967730(Il2CppChar* ___pszKey0, int32_t* comReturnValue) = 0;
};
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
// System.Runtime.InteropServices.UCOMIEnumVARIANT
struct NOVTABLE UCOMIEnumVARIANT_t801587188 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Next_m2509606380(int32_t ___celt0, int32_t ___rgvar1, int32_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Skip_m1435391602(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Reset_m2204919885(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumVARIANT_Clone_m1975768432(int32_t ___ppenum0) = 0;
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
// System.Runtime.InteropServices.ComTypes.ITypeLib2
struct NOVTABLE ITypeLib2_t2950318718 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_FindName_m3397677718(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, ITypeInfoU5BU5D_t3865376289* ___ppTInfo2, int32_t* ___rgMemId3, int16_t* ___pcFound4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetCustData_m2558101140(Guid_t * ___guid0, Il2CppVariant* ___pVarVal1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetDocumentation_m2947838085(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetLibAttr_m392690308(intptr_t* ___ppTLibAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetLibStatistics_m2318685522(intptr_t ___pcUniqueNames0, int32_t* ___pcchUniqueNames1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetDocumentation2_m4000434958(int32_t ___index0, Il2CppChar** ___pbstrHelpString1, int32_t* ___pdwHelpStringContext2, Il2CppChar** ___pbstrHelpStringDll3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetAllCustData_m2092930233(intptr_t ___pCustData0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeComp_m61217613(ITypeComp_t1006330118** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeInfo_m2386075501(int32_t ___index0, ITypeInfo_t2595417184** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeInfoOfGuid_m375746472(Guid_t * ___guid0, ITypeInfo_t2595417184** ___ppTInfo1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeInfoType_m1662929067(int32_t ___index0, int32_t* ___pTKind1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_IsName_m751201373(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_ReleaseTLibAttr_m1179248611(intptr_t ___pTLibAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeInfoCount_m3507616637(int32_t* comReturnValue) = 0;
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
// System.Runtime.InteropServices.UCOMIEnumMoniker
struct NOVTABLE UCOMIEnumMoniker_t2703299571 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Next_m1081615817(int32_t ___celt0, UCOMIMonikerU5BU5D_t3334853853* ___rgelt1, int32_t* ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Skip_m611981461(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Reset_m762882763(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumMoniker_Clone_m3859811953(UCOMIEnumMoniker_t2703299571** ___ppenum0) = 0;
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
// System.Runtime.InteropServices.UCOMIEnumConnections
struct NOVTABLE UCOMIEnumConnections_t3961786326 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Next_m487663000(int32_t ___celt0, CONNECTDATA_t2532328437_marshaled_com* ___rgelt1, int32_t* ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Skip_m1685343687(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Reset_m2936747538() = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumConnections_Clone_m1151074920(UCOMIEnumConnections_t3961786326** ___ppenum0) = 0;
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
// System.Runtime.InteropServices.UCOMIEnumString
struct NOVTABLE UCOMIEnumString_t550825303 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Next_m1071215984(int32_t ___celt0, Il2CppChar** ___rgelt1, int32_t* ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Skip_m2478726091(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Reset_m3339919461(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMIEnumString_Clone_m4283965056(UCOMIEnumString_t550825303** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.UCOMITypeComp
struct NOVTABLE UCOMITypeComp_t1003567318 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL UCOMITypeComp_Bind_m868857916(Il2CppChar* ___szName0, int32_t ___lHashVal1, int16_t ___wFlags2, UCOMITypeInfo_t3436573129** ___ppTInfo3, int32_t* ___pDescKind4, BINDPTR_t2893609822 * ___pBindPtr5) = 0;
	virtual il2cpp_hresult_t STDCALL UCOMITypeComp_BindType_m1314016607(Il2CppChar* ___szName0, int32_t ___lHashVal1, UCOMITypeInfo_t3436573129** ___ppTInfo2, UCOMITypeComp_t1003567318** ___ppTComp3) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumConnectionPoints
struct NOVTABLE IEnumConnectionPoints_t3877902792 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Next_m2484920507(int32_t ___celt0, IConnectionPointU5BU5D_t3446966510* ___rgelt1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Skip_m1428568912(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Reset_m1976878969() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Clone_m4112197675(IEnumConnectionPoints_t3877902792** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumConnections
struct NOVTABLE IEnumConnections_t1736845793 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumConnections_Next_m2677837324(int32_t ___celt0, CONNECTDATA_t1569573429_marshaled_com* ___rgelt1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnections_Skip_m1126088575(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnections_Reset_m2329749415() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnections_Clone_m3078436932(IEnumConnections_t1736845793** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IConnectionPointContainer
struct NOVTABLE IConnectionPointContainer_t1785655909 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IConnectionPointContainer_EnumConnectionPoints_m4232133076(IEnumConnectionPoints_t3877902792** ___ppEnum0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPointContainer_FindConnectionPoint_m2708333229(Guid_t * ___riid0, IConnectionPoint_t2097756631** ___ppCP1) = 0;
};
// System.Runtime.InteropServices.ComTypes.IConnectionPoint
struct NOVTABLE IConnectionPoint_t2097756631 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_GetConnectionInterface_m631020593(Guid_t * ___pIID0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_GetConnectionPointContainer_m1048767840(IConnectionPointContainer_t1785655909** ___ppCPC0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_Advise_m2858819636(Il2CppIUnknown* ___pUnkSink0, int32_t* ___pdwCookie1) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_Unadvise_m2320000853(int32_t ___dwCookie0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_EnumConnections_m99491527(IEnumConnections_t1736845793** ___ppEnum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumString
struct NOVTABLE IEnumString_t334177337 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumString_Next_m418527446(int32_t ___celt0, Il2CppChar** ___rgelt1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumString_Skip_m2853814515(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumString_Reset_m3490725903() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumString_Clone_m125509982(IEnumString_t334177337** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IRunningObjectTable
struct NOVTABLE IRunningObjectTable_t1355610725 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_Register_m539764902(int32_t ___grfFlags0, Il2CppIUnknown* ___punkObject1, IMoniker_t679694026* ___pmkObjectName2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_Revoke_m404046122(int32_t ___dwRegister0) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_IsRunning_m110663454(IMoniker_t679694026* ___pmkObjectName0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_GetObject_m1003701481(IMoniker_t679694026* ___pmkObjectName0, Il2CppIUnknown** ___ppunkObject1, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_NoteChangeTime_m136677173(int32_t ___dwRegister0, FILETIME_t1200622595 * ___pfiletime1) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_GetTimeOfLastChange_m4124510168(IMoniker_t679694026* ___pmkObjectName0, FILETIME_t1200622595 * ___pfiletime1, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_EnumRunning_m2066305690(IEnumMoniker_t3824831520** ___ppenumMoniker0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumMoniker
struct NOVTABLE IEnumMoniker_t3824831520 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Next_m3921435930(int32_t ___celt0, IMonikerU5BU5D_t3379837647* ___rgelt1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Skip_m661387861(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Reset_m3361439522() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Clone_m4110351627(IEnumMoniker_t3824831520** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.ITypeLib
struct NOVTABLE ITypeLib_t2209420004 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeInfoCount_m852941419(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeInfo_m3475519245(int32_t ___index0, ITypeInfo_t2595417184** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeInfoType_m706870436(int32_t ___index0, int32_t* ___pTKind1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeInfoOfGuid_m2163437542(Guid_t * ___guid0, ITypeInfo_t2595417184** ___ppTInfo1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetLibAttr_m142074965(intptr_t* ___ppTLibAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeComp_m2027774487(ITypeComp_t1006330118** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetDocumentation_m3175195189(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_IsName_m273335288(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_FindName_m962149290(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, ITypeInfoU5BU5D_t3865376289* ___ppTInfo2, int32_t* ___rgMemId3, int16_t* ___pcFound4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_ReleaseTLibAttr_m4127067337(intptr_t ___pTLibAttr0) = 0;
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
// System.Runtime.InteropServices.ComTypes.ITypeComp
struct NOVTABLE ITypeComp_t1006330118 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeComp_Bind_m2151962634(Il2CppChar* ___szName0, int32_t ___lHashVal1, int16_t ___wFlags2, ITypeInfo_t2595417184** ___ppTInfo3, int32_t* ___pDescKind4, BINDPTR_t947377522 * ___pBindPtr5) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeComp_BindType_m3621344716(Il2CppChar* ___szName0, int32_t ___lHashVal1, ITypeInfo_t2595417184** ___ppTInfo2, ITypeComp_t1006330118** ___ppTComp3) = 0;
};
// System.Runtime.InteropServices.ComTypes.IPersistFile
struct NOVTABLE IPersistFile_t4155727431 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPersistFile_GetClassID_m2458330718(Guid_t * ___pClassID0) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_IsDirty_m984775634(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_Load_m2871676684(Il2CppChar* ___pszFileName0, int32_t ___dwMode1) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_Save_m2514433017(Il2CppChar* ___pszFileName0, int32_t ___fRemember1) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_SaveCompleted_m2430462544(Il2CppChar* ___pszFileName0) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_GetCurFile_m4265973705(Il2CppChar** ___ppszFileName0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IStream
struct NOVTABLE IStream_t2767586507 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_Read_m2173113126(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Write_m2708670267(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Seek_m2787654105(int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_SetSize_m4060809076(int64_t ___libNewSize0) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m636604614(IStream_t2767586507* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Commit_m913773162(int32_t ___grfCommitFlags0) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Revert_m196104801() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_m628848789(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m2931786434(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Stat_m3782840290(STATSTG_t1180006254_marshaled_com* ___pstatstg0, int32_t ___grfStatFlag1) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Clone_m2216188370(IStream_t2767586507** ___ppstm0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumVARIANT
struct NOVTABLE IEnumVARIANT_t2637587419 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Next_m3346991815(int32_t ___celt0, ObjectU5BU5D_t2843939325* ___rgVar1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Skip_m922418450(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Reset_m4109631802(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Clone_m1980753901(IEnumVARIANT_t2637587419** comReturnValue) = 0;
};
// System.Runtime.InteropServices.ComTypes.IMoniker
struct NOVTABLE IMoniker_t679694026 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetClassID_m3614261332(Guid_t * ___pClassID0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_IsDirty_m2645074929(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Load_m3600136492(IStream_t2767586507* ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Save_m1769619697(IStream_t2767586507* ___pStm0, int32_t ___fClearDirty1) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetSizeMax_m753980094(int64_t* ___pcbSize0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_BindToObject_m3561734470(IBindCtx_t1565995796* ___pbc0, IMoniker_t679694026* ___pmkToLeft1, Guid_t * ___riidResult2, Il2CppIUnknown** ___ppvResult3) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_BindToStorage_m1852422184(IBindCtx_t1565995796* ___pbc0, IMoniker_t679694026* ___pmkToLeft1, Guid_t * ___riid2, Il2CppIUnknown** ___ppvObj3) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Reduce_m3183400877(IBindCtx_t1565995796* ___pbc0, int32_t ___dwReduceHowFar1, IMoniker_t679694026** ___ppmkToLeft2, IMoniker_t679694026** ___ppmkReduced3) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_ComposeWith_m68222741(IMoniker_t679694026* ___pmkRight0, int32_t ___fOnlyIfNotGeneric1, IMoniker_t679694026** ___ppmkComposite2) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Enum_m2002522484(int32_t ___fForward0, IEnumMoniker_t3824831520** ___ppenumMoniker1) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_IsEqual_m2762401539(IMoniker_t679694026* ___pmkOtherMoniker0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Hash_m1827101998(int32_t* ___pdwHash0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_IsRunning_m3666869008(IBindCtx_t1565995796* ___pbc0, IMoniker_t679694026* ___pmkToLeft1, IMoniker_t679694026* ___pmkNewlyRunning2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetTimeOfLastChange_m3645023692(IBindCtx_t1565995796* ___pbc0, IMoniker_t679694026* ___pmkToLeft1, FILETIME_t1200622595 * ___pFileTime2) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Inverse_m1007528350(IMoniker_t679694026** ___ppmk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_CommonPrefixWith_m718850182(IMoniker_t679694026* ___pmkOther0, IMoniker_t679694026** ___ppmkPrefix1) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_RelativePathTo_m3797599198(IMoniker_t679694026* ___pmkOther0, IMoniker_t679694026** ___ppmkRelPath1) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetDisplayName_m73412819(IBindCtx_t1565995796* ___pbc0, IMoniker_t679694026* ___pmkToLeft1, Il2CppChar** ___ppszDisplayName2) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_ParseDisplayName_m2934508083(IBindCtx_t1565995796* ___pbc0, IMoniker_t679694026* ___pmkToLeft1, Il2CppChar* ___pszDisplayName2, int32_t* ___pchEaten3, IMoniker_t679694026** ___ppmkOut4) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_IsSystemMoniker_m1289359473(int32_t* ___pdwMksys0, int32_t* comReturnValue) = 0;
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
#ifndef INVOKEKIND_T1712485679_H
#define INVOKEKIND_T1712485679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.INVOKEKIND
struct  INVOKEKIND_t1712485679 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.INVOKEKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(INVOKEKIND_t1712485679, ___value___1)); }
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
#endif // INVOKEKIND_T1712485679_H
// System.Runtime.InteropServices.ComTypes.ITypeInfo
struct NOVTABLE ITypeInfo_t2595417184 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetTypeAttr_m3187350924(intptr_t* ___ppTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetTypeComp_m2042864248(ITypeComp_t1006330118** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetFuncDesc_m594992941(int32_t ___index0, intptr_t* ___ppFuncDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetVarDesc_m3267472173(int32_t ___index0, intptr_t* ___ppVarDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetNames_m2819741356(int32_t ___memid0, Il2CppChar** ___rgBstrNames1, int32_t ___cMaxNames2, int32_t* ___pcNames3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetRefTypeOfImplType_m1065632507(int32_t ___index0, int32_t* ___href1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetImplTypeFlags_m4041947509(int32_t ___index0, int32_t* ___pImplTypeFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetIDsOfNames_m1112967735(Il2CppChar** ___rgszNames0, int32_t ___cNames1, int32_t* ___pMemId2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_Invoke_m3593798222(Il2CppIUnknown* ___pvInstance0, int32_t ___memid1, int16_t ___wFlags2, DISPPARAMS_t149323838 * ___pDispParams3, intptr_t ___pVarResult4, intptr_t ___pExcepInfo5, int32_t* ___puArgErr6) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetDocumentation_m1739051264(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetDllEntry_m1883352746(int32_t ___memid0, int32_t ___invKind1, intptr_t ___pBstrDllName2, intptr_t ___pBstrName3, intptr_t ___pwOrdinal4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetRefTypeInfo_m3554324042(int32_t ___hRef0, ITypeInfo_t2595417184** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_AddressOfMember_m1498500229(int32_t ___memid0, int32_t ___invKind1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_CreateInstance_m1418564516(Il2CppIUnknown* ___pUnkOuter0, Guid_t * ___riid1, Il2CppIUnknown** ___ppvObj2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetMops_m1521768707(int32_t ___memid0, Il2CppChar** ___pBstrMops1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetContainingTypeLib_m3465246605(ITypeLib_t2209420004** ___ppTLB0, int32_t* ___pIndex1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_ReleaseTypeAttr_m3444251828(intptr_t ___pTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_ReleaseFuncDesc_m1445615777(intptr_t ___pFuncDesc0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_ReleaseVarDesc_m79482443(intptr_t ___pVarDesc0) = 0;
};
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
// System.Runtime.InteropServices.ComTypes.ITypeInfo2
struct NOVTABLE ITypeInfo2_t2594499680 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_AddressOfMember_m2107675259(int32_t ___memid0, int32_t ___invKind1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_CreateInstance_m3988690423(Il2CppIUnknown* ___pUnkOuter0, Guid_t * ___riid1, Il2CppIUnknown** ___ppvObj2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetContainingTypeLib_m2119984831(ITypeLib_t2209420004** ___ppTLB0, int32_t* ___pIndex1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetDllEntry_m2219632542(int32_t ___memid0, int32_t ___invKind1, intptr_t ___pBstrDllName2, intptr_t ___pBstrName3, intptr_t ___pwOrdinal4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetDocumentation_m3965798128(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetIDsOfNames_m2747006457(Il2CppChar** ___rgszNames0, int32_t ___cNames1, int32_t* ___pMemId2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetImplTypeFlags_m421422557(int32_t ___index0, int32_t* ___pImplTypeFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeKind_m1799022518(int32_t* ___pTypeKind0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeFlags_m3535456208(int32_t* ___pTypeFlags0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetFuncDesc_m1630303364(int32_t ___index0, intptr_t* ___ppFuncDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetMops_m2777560266(int32_t ___memid0, Il2CppChar** ___pBstrMops1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetNames_m3490172613(int32_t ___memid0, Il2CppChar** ___rgBstrNames1, int32_t ___cMaxNames2, int32_t* ___pcNames3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetRefTypeInfo_m1394246521(int32_t ___hRef0, ITypeInfo_t2595417184** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetRefTypeOfImplType_m4284540294(int32_t ___index0, int32_t* ___href1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeAttr_m2007413580(intptr_t* ___ppTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeComp_m2460816779(ITypeComp_t1006330118** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetVarDesc_m1221975688(int32_t ___index0, intptr_t* ___ppVarDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetFuncIndexOfMemId_m1818553468(int32_t ___memid0, int32_t ___invKind1, int32_t* ___pFuncIndex2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetVarIndexOfMemId_m4219520945(int32_t ___memid0, int32_t* ___pVarIndex1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetCustData_m2064288613(Guid_t * ___guid0, Il2CppVariant* ___pVarVal1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetFuncCustData_m3664035526(int32_t ___index0, Guid_t * ___guid1, Il2CppVariant* ___pVarVal2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetParamCustData_m4278154449(int32_t ___indexFunc0, int32_t ___indexParam1, Guid_t * ___guid2, Il2CppVariant* ___pVarVal3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetVarCustData_m1502437789(int32_t ___index0, Guid_t * ___guid1, Il2CppVariant* ___pVarVal2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetImplTypeCustData_m374878456(int32_t ___index0, Guid_t * ___guid1, Il2CppVariant* ___pVarVal2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetDocumentation2_m3093176186(int32_t ___memid0, Il2CppChar** ___pbstrHelpString1, int32_t* ___pdwHelpStringContext2, Il2CppChar** ___pbstrHelpStringDll3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllCustData_m872950921(intptr_t ___pCustData0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllFuncCustData_m2917682455(int32_t ___index0, intptr_t ___pCustData1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllParamCustData_m3173084654(int32_t ___indexFunc0, int32_t ___indexParam1, intptr_t ___pCustData2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllVarCustData_m606763501(int32_t ___index0, intptr_t ___pCustData1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllImplTypeCustData_m789645224(int32_t ___index0, intptr_t ___pCustData1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_Invoke_m3816385395(Il2CppIUnknown* ___pvInstance0, int32_t ___memid1, int16_t ___wFlags2, DISPPARAMS_t149323838 * ___pDispParams3, intptr_t ___pVarResult4, intptr_t ___pExcepInfo5, int32_t* ___puArgErr6) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_ReleaseTypeAttr_m2923358772(intptr_t ___pTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_ReleaseFuncDesc_m3950067279(intptr_t ___pFuncDesc0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_ReleaseVarDesc_m1738441365(intptr_t ___pVarDesc0) = 0;
};



extern "C" void Context_t1744531130_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Context_t1744531130_0_0_0;
extern "C" void Escape_t3294788190_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Escape_t3294788190_0_0_0;
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PreviousInfo_t2148130204_0_0_0;
extern "C" void UriScheme_t2867806342_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_t2867806342_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_t2867806342_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_t2867806342_0_0_0;
extern "C" void DelegatePInvokeWrapper_AppDomainInitializer_t682969308();
extern const RuntimeType AppDomainInitializer_t682969308_0_0_0;
extern "C" void DelegatePInvokeWrapper_Swapper_t2822380397();
extern const RuntimeType Swapper_t2822380397_0_0_0;
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DictionaryEntry_t3123975638_0_0_0;
extern "C" void Slot_t3975888750_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t3975888750_0_0_0;
extern "C" void Slot_t384495010_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t384495010_0_0_0;
extern "C" void AssemblyHash_t704722890_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssemblyHash_t704722890_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssemblyHash_t704722890_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssemblyHash_t704722890_0_0_0;
extern "C" void ConsoleKeyInfo_t1802691652_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConsoleKeyInfo_t1802691652_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConsoleKeyInfo_t1802691652_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConsoleKeyInfo_t1802691652_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossAppDomainDelegate_t2801560188();
extern const RuntimeType CrossAppDomainDelegate_t2801560188_0_0_0;
extern "C" void Enum_t4135868527_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enum_t4135868527_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t714865915();
extern const RuntimeType ReadDelegate_t714865915_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t4270993571();
extern const RuntimeType WriteDelegate_t4270993571_0_0_0;
extern "C" void Identities_t4194193441_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Identities_t4194193441_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Identities_t4194193441_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Identities_t4194193441_0_0_0;
extern "C" void MonoIOStat_t592533987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoIOStat_t592533987_0_0_0;
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEnumInfo_t3694469084_0_0_0;
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeNamedArgument_t287865710_0_0_0;
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeTypedArgument_t2723150157_0_0_0;
extern "C" void CustomAttributeInfo_t1478499589_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeInfo_t1478499589_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeInfo_t1478499589_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeInfo_t1478499589_0_0_0;
extern "C" void ILExceptionBlock_t3961874966_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ILExceptionBlock_t3961874966_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ILExceptionBlock_t3961874966_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ILExceptionBlock_t3961874966_0_0_0;
extern "C" void ILExceptionInfo_t237856010_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ILExceptionInfo_t237856010_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ILExceptionInfo_t237856010_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ILExceptionInfo_t237856010_0_0_0;
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ILTokenInfo_t2325775114_0_0_0;
extern "C" void MonoResource_t4103430009_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoResource_t4103430009_0_0_0;
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoWin32Resource_t1904229483_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoWin32Resource_t1904229483_0_0_0;
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RefEmitPermissionSet_t484390987_0_0_0;
extern "C" void InterfaceMapping_t1267958657_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InterfaceMapping_t1267958657_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InterfaceMapping_t1267958657_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InterfaceMapping_t1267958657_0_0_0;
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEventInfo_t346866618_0_0_0;
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodInfo_t1248819020_0_0_0;
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoPropertyInfo_t3087356066_0_0_0;
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterModifier_t1461694466_0_0_0;
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceCacheItem_t51292791_0_0_0;
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceInfo_t2872965302_0_0_0;
extern "C" void ArrayWithOffset_t70597867_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ArrayWithOffset_t70597867_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ArrayWithOffset_t70597867_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ArrayWithOffset_t70597867_0_0_0;
extern "C" void CONNECTDATA_t1569573429_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CONNECTDATA_t1569573429_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CONNECTDATA_t1569573429_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CONNECTDATA_t1569573429_0_0_0;
extern "C" void EXCEPINFO_t4018283104_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EXCEPINFO_t4018283104_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EXCEPINFO_t4018283104_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EXCEPINFO_t4018283104_0_0_0;
extern "C" void STATSTG_t1180006254_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void STATSTG_t1180006254_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void STATSTG_t1180006254_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType STATSTG_t1180006254_0_0_0;
extern "C" void VARDESC_t1273526866_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VARDESC_t1273526866_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VARDESC_t1273526866_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VARDESC_t1273526866_0_0_0;
extern "C" void CONNECTDATA_t2532328437_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CONNECTDATA_t2532328437_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CONNECTDATA_t2532328437_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CONNECTDATA_t2532328437_0_0_0;
extern "C" void EXCEPINFO_t1368229618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EXCEPINFO_t1368229618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EXCEPINFO_t1368229618_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EXCEPINFO_t1368229618_0_0_0;
extern "C" void DelegatePInvokeWrapper_ObjectCreationDelegate_t3727257075();
extern const RuntimeType ObjectCreationDelegate_t3727257075_0_0_0;
extern "C" void STATSTG_t1720075051_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void STATSTG_t1720075051_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void STATSTG_t1720075051_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType STATSTG_t1720075051_0_0_0;
extern "C" void VARDESC_t974060553_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VARDESC_t974060553_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VARDESC_t974060553_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VARDESC_t974060553_0_0_0;
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ProcessMessageRes_t3710547145_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ProcessMessageRes_t3710547145_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossContextDelegate_t387175271();
extern const RuntimeType CrossContextDelegate_t387175271_0_0_0;
extern "C" void DelegatePInvokeWrapper_CallbackHandler_t3280319253();
extern const RuntimeType CallbackHandler_t3280319253_0_0_0;
extern "C" void SerializationEntry_t648286436_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SerializationEntry_t648286436_0_0_0;
extern "C" void StreamingContext_t3711869237_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StreamingContext_t3711869237_0_0_0;
extern "C" void DSAParameters_t1885824122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DSAParameters_t1885824122_0_0_0;
extern "C" void RSAParameters_t1728406613_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RSAParameters_t1728406613_0_0_0;
extern "C" void SNIP_t4156255223_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SNIP_t4156255223_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SNIP_t4156255223_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SNIP_t4156255223_0_0_0;
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SecurityFrame_t1422462475_0_0_0;
extern "C" void AsyncFlowControl_t153243767_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncFlowControl_t153243767_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncFlowControl_t153243767_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncFlowControl_t153243767_0_0_0;
extern "C" void DelegatePInvokeWrapper_IOCompletionCallback_t1634628208();
extern const RuntimeType IOCompletionCallback_t1634628208_0_0_0;
extern "C" void DelegatePInvokeWrapper_ThreadStart_t1006689297();
extern const RuntimeType ThreadStart_t1006689297_0_0_0;
extern "C" void ValueType_t3640485471_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueType_t3640485471_0_0_0;
extern const RuntimeType IBindCtx_t1565995796_0_0_0;
extern const RuntimeType IRunningObjectTable_t1355610725_0_0_0;
extern const RuntimeType IEnumString_t334177337_0_0_0;
extern const RuntimeType IConnectionPoint_t2097756631_0_0_0;
extern const RuntimeType IConnectionPointContainer_t1785655909_0_0_0;
extern const RuntimeType IEnumConnections_t1736845793_0_0_0;
extern const RuntimeType IEnumConnectionPoints_t3877902792_0_0_0;
extern const RuntimeType IEnumMoniker_t3824831520_0_0_0;
extern const RuntimeType IMoniker_t679694026_0_0_0;
extern const RuntimeType IEnumVARIANT_t2637587419_0_0_0;
extern const RuntimeType IStream_t2767586507_0_0_0;
extern const RuntimeType IPersistFile_t4155727431_0_0_0;
extern const RuntimeType ITypeComp_t1006330118_0_0_0;
extern const RuntimeType ITypeInfo_t2595417184_0_0_0;
extern const RuntimeType ITypeLib_t2209420004_0_0_0;
extern const RuntimeType ITypeInfo2_t2594499680_0_0_0;
extern const RuntimeType ITypeLib2_t2950318718_0_0_0;
extern const RuntimeType UCOMITypeInfo_t3436573129_0_0_0;
extern const RuntimeType UCOMITypeLib_t683656240_0_0_0;
extern const RuntimeType RegistrationServices_t3768291551_0_0_0;
extern const RuntimeType TypeLibConverter_t1870497393_0_0_0;
extern const RuntimeType UCOMIBindCtx_t322850205_0_0_0;
extern const RuntimeType UCOMIRunningObjectTable_t255439828_0_0_0;
extern const RuntimeType UCOMIEnumString_t550825303_0_0_0;
extern const RuntimeType UCOMIConnectionPoint_t325234620_0_0_0;
extern const RuntimeType UCOMIConnectionPointContainer_t3558982126_0_0_0;
extern const RuntimeType UCOMIEnumConnections_t3961786326_0_0_0;
extern const RuntimeType UCOMIEnumConnectionPoints_t880281082_0_0_0;
extern const RuntimeType UCOMIEnumMoniker_t2703299571_0_0_0;
extern const RuntimeType UCOMIMoniker_t541441876_0_0_0;
extern const RuntimeType UCOMIEnumVARIANT_t801587188_0_0_0;
extern const RuntimeType UCOMIStream_t1714348057_0_0_0;
extern const RuntimeType UCOMIPersistFile_t2476245654_0_0_0;
extern const RuntimeType UCOMITypeComp_t1003567318_0_0_0;
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType X509ChainStatus_t133602714_0_0_0;
extern "C" void IntStack_t2189327687_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntStack_t2189327687_0_0_0;
extern "C" void Interval_t1802865632_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Interval_t1802865632_0_0_0;
extern "C" void DelegatePInvokeWrapper_CostDelegate_t1722821004();
extern const RuntimeType CostDelegate_t1722821004_0_0_0;
extern "C" void UriScheme_t722425697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_t722425697_0_0_0;
extern "C" void DelegatePInvokeWrapper_Action_t1264377477();
extern const RuntimeType Action_t1264377477_0_0_0;
extern "C" void TransitionTime_t449921781_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TransitionTime_t449921781_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TransitionTime_t449921781_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TransitionTime_t449921781_0_0_0;
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationCurve_t3046754366_0_0_0;
extern "C" void DelegatePInvokeWrapper_LogCallback_t3588208630();
extern const RuntimeType LogCallback_t3588208630_0_0_0;
extern "C" void DelegatePInvokeWrapper_LowMemoryCallback_t4104246196();
extern const RuntimeType LowMemoryCallback_t4104246196_0_0_0;
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleCreateRequest_t3119663542_0_0_0;
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleRequest_t699759206_0_0_0;
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncOperation_t1445031843_0_0_0;
extern "C" void OrderBlock_t1585977831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OrderBlock_t1585977831_0_0_0;
extern "C" void Coroutine_t3829159415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Coroutine_t3829159415_0_0_0;
extern "C" void DelegatePInvokeWrapper_CSSMeasureFunc_t1554030124();
extern const RuntimeType CSSMeasureFunc_t1554030124_0_0_0;
extern "C" void CullingGroup_t2096318768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CullingGroup_t2096318768_0_0_0;
extern "C" void DelegatePInvokeWrapper_StateChanged_t2136737110();
extern const RuntimeType StateChanged_t2136737110_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044();
extern const RuntimeType DisplaysUpdatedDelegate_t51287044_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnityAction_t3245792599();
extern const RuntimeType UnityAction_t3245792599_0_0_0;
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FailedToLoadScriptObject_t547604379_0_0_0;
extern "C" void Gradient_t3067099924_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Gradient_t3067099924_0_0_0;
extern "C" void Object_t631007953_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Object_t631007953_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Object_t631007953_0_0_0;
extern "C" void PlayableBinding_t354260709_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayableBinding_t354260709_0_0_0;
extern "C" void RectOffset_t1369453676_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RectOffset_t1369453676_0_0_0;
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceRequest_t3109103591_0_0_0;
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ScriptableObject_t2528358522_0_0_0;
extern "C" void HitInfo_t3229609740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HitInfo_t3229609740_0_0_0;
extern "C" void TrackedReference_t1199777556_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedReference_t1199777556_0_0_0;
extern "C" void DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279();
extern const RuntimeType RequestAtlasCallback_t3100554279_0_0_0;
extern "C" void WorkRequest_t1354518612_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WorkRequest_t1354518612_0_0_0;
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitForSeconds_t1699091251_0_0_0;
extern "C" void YieldInstruction_t403091072_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType YieldInstruction_t403091072_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMReaderCallback_t1677636661();
extern const RuntimeType PCMReaderCallback_t1677636661_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452();
extern const RuntimeType PCMSetPositionCallback_t1059417452_0_0_0;
extern "C" void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874();
extern const RuntimeType AudioConfigurationChangeHandler_t2089929874_0_0_0;
extern "C" void CharacterInfo_t1228754872_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CharacterInfo_t1228754872_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CharacterInfo_t1228754872_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CharacterInfo_t1228754872_0_0_0;
extern "C" void DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454();
extern const RuntimeType FontTextureRebuildCallback_t2467502454_0_0_0;
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerationSettings_t1351628751_0_0_0;
extern "C" void TextGenerator_t3211863866_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerator_t3211863866_0_0_0;
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandler_t2937767557_0_0_0;
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandlerBuffer_t2928496527_0_0_0;
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityWebRequest_t463507806_0_0_0;
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityWebRequestAsyncOperation_t3852015985_0_0_0;
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandler_t2993558019_0_0_0;
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandlerRaw_t25761545_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t1580782682();
extern const RuntimeType OnNavMeshPreUpdate_t1580782682_0_0_0;
extern "C" void NavMeshPath_t2698325962_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NavMeshPath_t2698325962_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NavMeshPath_t2698325962_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NavMeshPath_t2698325962_0_0_0;
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationEvent_t1536042487_0_0_0;
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorTransitionInfo_t2534804151_0_0_0;
extern "C" void HumanBone_t2465339518_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HumanBone_t2465339518_0_0_0;
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SkeletonBone_t4134054672_0_0_0;
extern "C" void GcAchievementData_t675222246_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementData_t675222246_0_0_0;
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementDescriptionData_t643925653_0_0_0;
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcLeaderboard_t4132273028_0_0_0;
extern "C" void GcScoreData_t2125309831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcScoreData_t2125309831_0_0_0;
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcUserProfileData_t2719720026_0_0_0;
extern "C" void Event_t2956885303_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Event_t2956885303_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowFunction_t3146511083();
extern const RuntimeType WindowFunction_t3146511083_0_0_0;
extern "C" void GUIContent_t3050628031_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIContent_t3050628031_0_0_0;
extern "C" void DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295();
extern const RuntimeType SkinChangedDelegate_t1143955295_0_0_0;
extern "C" void GUIStyle_t3956901511_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyle_t3956901511_0_0_0;
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyleState_t1397964415_0_0_0;
extern "C" void SliderHandler_t1154919399_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SliderHandler_t1154919399_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SliderHandler_t1154919399_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SliderHandler_t1154919399_0_0_0;
extern "C" void CollisionModule_t1950979710_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CollisionModule_t1950979710_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CollisionModule_t1950979710_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CollisionModule_t1950979710_0_0_0;
extern "C" void ColorBySpeedModule_t3740209408_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorBySpeedModule_t3740209408_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorBySpeedModule_t3740209408_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorBySpeedModule_t3740209408_0_0_0;
extern "C" void ColorOverLifetimeModule_t3039228654_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorOverLifetimeModule_t3039228654_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorOverLifetimeModule_t3039228654_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorOverLifetimeModule_t3039228654_0_0_0;
extern "C" void EmissionModule_t311448003_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EmissionModule_t311448003_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EmissionModule_t311448003_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EmissionModule_t311448003_0_0_0;
extern "C" void EmitParams_t2216423628_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EmitParams_t2216423628_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EmitParams_t2216423628_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EmitParams_t2216423628_0_0_0;
extern "C" void ExternalForcesModule_t1424795933_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ExternalForcesModule_t1424795933_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ExternalForcesModule_t1424795933_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ExternalForcesModule_t1424795933_0_0_0;
extern "C" void ForceOverLifetimeModule_t4029962193_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ForceOverLifetimeModule_t4029962193_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ForceOverLifetimeModule_t4029962193_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ForceOverLifetimeModule_t4029962193_0_0_0;
extern "C" void InheritVelocityModule_t3940044026_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InheritVelocityModule_t3940044026_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InheritVelocityModule_t3940044026_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InheritVelocityModule_t3940044026_0_0_0;
extern "C" void LightsModule_t3616883284_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LightsModule_t3616883284_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LightsModule_t3616883284_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LightsModule_t3616883284_0_0_0;
extern "C" void LimitVelocityOverLifetimeModule_t686589569_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LimitVelocityOverLifetimeModule_t686589569_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LimitVelocityOverLifetimeModule_t686589569_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LimitVelocityOverLifetimeModule_t686589569_0_0_0;
extern "C" void MainModule_t2320046318_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MainModule_t2320046318_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MainModule_t2320046318_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MainModule_t2320046318_0_0_0;
extern "C" void MinMaxCurve_t1067599125_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MinMaxCurve_t1067599125_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MinMaxCurve_t1067599125_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MinMaxCurve_t1067599125_0_0_0;
extern "C" void MinMaxGradient_t3677460847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MinMaxGradient_t3677460847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MinMaxGradient_t3677460847_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MinMaxGradient_t3677460847_0_0_0;
extern "C" void NoiseModule_t962525627_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NoiseModule_t962525627_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NoiseModule_t962525627_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NoiseModule_t962525627_0_0_0;
extern "C" void RotationBySpeedModule_t3497409583_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RotationBySpeedModule_t3497409583_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RotationBySpeedModule_t3497409583_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RotationBySpeedModule_t3497409583_0_0_0;
extern "C" void RotationOverLifetimeModule_t1164372224_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RotationOverLifetimeModule_t1164372224_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RotationOverLifetimeModule_t1164372224_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RotationOverLifetimeModule_t1164372224_0_0_0;
extern "C" void ShapeModule_t3608330829_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ShapeModule_t3608330829_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ShapeModule_t3608330829_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ShapeModule_t3608330829_0_0_0;
extern "C" void SizeBySpeedModule_t1515126846_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SizeBySpeedModule_t1515126846_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SizeBySpeedModule_t1515126846_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SizeBySpeedModule_t1515126846_0_0_0;
extern "C" void SizeOverLifetimeModule_t1101123803_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SizeOverLifetimeModule_t1101123803_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SizeOverLifetimeModule_t1101123803_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SizeOverLifetimeModule_t1101123803_0_0_0;
extern "C" void SubEmittersModule_t903775760_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SubEmittersModule_t903775760_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SubEmittersModule_t903775760_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SubEmittersModule_t903775760_0_0_0;
extern "C" void TextureSheetAnimationModule_t738696839_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextureSheetAnimationModule_t738696839_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextureSheetAnimationModule_t738696839_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextureSheetAnimationModule_t738696839_0_0_0;
extern "C" void TrailModule_t2282589118_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrailModule_t2282589118_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrailModule_t2282589118_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrailModule_t2282589118_0_0_0;
extern "C" void TriggerModule_t1157986180_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TriggerModule_t1157986180_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TriggerModule_t1157986180_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TriggerModule_t1157986180_0_0_0;
extern "C" void VelocityOverLifetimeModule_t1982232382_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VelocityOverLifetimeModule_t1982232382_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VelocityOverLifetimeModule_t1982232382_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VelocityOverLifetimeModule_t1982232382_0_0_0;
extern "C" void Collision2D_t2842956331_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision2D_t2842956331_0_0_0;
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ContactFilter2D_t3805203441_0_0_0;
extern "C" void RaycastHit2D_t2279581989_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastHit2D_t2279581989_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastHit2D_t2279581989_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastHit2D_t2279581989_0_0_0;
extern "C" void Collision_t4262080450_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision_t4262080450_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision_t4262080450_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision_t4262080450_0_0_0;
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControllerColliderHit_t240592346_0_0_0;
extern "C" void RaycastHit_t1056001966_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastHit_t1056001966_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastHit_t1056001966_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastHit_t1056001966_0_0_0;
extern "C" void DelegatePInvokeWrapper_WillRenderCanvases_t3309123499();
extern const RuntimeType WillRenderCanvases_t3309123499_0_0_0;
extern "C" void CustomEventData_t317522481_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomEventData_t317522481_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomEventData_t317522481_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomEventData_t317522481_0_0_0;
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityAnalyticsHandler_t3011359618_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityAnalyticsHandler_t3011359618_0_0_0;
extern "C" void DelegatePInvokeWrapper_SessionStateChanged_t3163629820();
extern const RuntimeType SessionStateChanged_t3163629820_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393();
extern const RuntimeType UpdatedEventHandler_t1027848393_0_0_0;
extern "C" void RaycastResult_t3360306849_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastResult_t3360306849_0_0_0;
extern "C" void ColorTween_t809614380_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t809614380_0_0_0;
extern "C" void FloatTween_t1274330004_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_t1274330004_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t2355412304();
extern const RuntimeType OnValidateInput_t2355412304_0_0_0;
extern "C" void Navigation_t3049316579_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Navigation_t3049316579_0_0_0;
extern "C" void SpriteState_t1362986479_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteState_t1362986479_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnTrigger_t4184125570();
extern const RuntimeType OnTrigger_t4184125570_0_0_0;
extern "C" void ES3Data_t1970336570_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ES3Data_t1970336570_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ES3Data_t1970336570_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ES3Data_t1970336570_0_0_0;
extern "C" void ES3ReflectedMember_t1830935496_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ES3ReflectedMember_t1830935496_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ES3ReflectedMember_t1830935496_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ES3ReflectedMember_t1830935496_0_0_0;
extern "C" void DelegatePInvokeWrapper_ApplyTween_t3327999347();
extern const RuntimeType ApplyTween_t3327999347_0_0_0;
extern "C" void DelegatePInvokeWrapper_EasingFunction_t2767217938();
extern const RuntimeType EasingFunction_t2767217938_0_0_0;
extern "C" void CameraCollisionState_t1944070068_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CameraCollisionState_t1944070068_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CameraCollisionState_t1944070068_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CameraCollisionState_t1944070068_0_0_0;
extern "C" void NumericBoundariesSettings_t3568110065_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NumericBoundariesSettings_t3568110065_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NumericBoundariesSettings_t3568110065_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NumericBoundariesSettings_t3568110065_0_0_0;
extern "C" void DelegatePInvokeWrapper_Callback_t3139336517();
extern const RuntimeType Callback_t3139336517_0_0_0;
extern "C" void DelegatePInvokeWrapper_LoadFunction_t2078002637();
extern const RuntimeType LoadFunction_t2078002637_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnLocalizeNotification_t3391620158();
extern const RuntimeType OnLocalizeNotification_t3391620158_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnFinished_t3778785451();
extern const RuntimeType OnFinished_t3778785451_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnFinished_t3364492952();
extern const RuntimeType OnFinished_t3364492952_0_0_0;
extern "C" void DelegatePInvokeWrapper_SimpleEvent_t2783657407();
extern const RuntimeType SimpleEvent_t2783657407_0_0_0;
extern "C" void DelegatePInvokeWrapper_SimpleEvent_t3229034173();
extern const RuntimeType SimpleEvent_t3229034173_0_0_0;
extern "C" void FadeEntry_t639421133_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FadeEntry_t639421133_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FadeEntry_t639421133_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FadeEntry_t639421133_0_0_0;
extern "C" void DepthEntry_t628749918_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DepthEntry_t628749918_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DepthEntry_t628749918_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DepthEntry_t628749918_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetAnyKeyFunc_t1761480072();
extern const RuntimeType GetAnyKeyFunc_t1761480072_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetAxisFunc_t2592608932();
extern const RuntimeType GetAxisFunc_t2592608932_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetKeyStateFunc_t2810275146();
extern const RuntimeType GetKeyStateFunc_t2810275146_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetTouchCountCallback_t3185863032();
extern const RuntimeType GetTouchCountCallback_t3185863032_0_0_0;
extern "C" void DelegatePInvokeWrapper_MoveDelegate_t16019400();
extern const RuntimeType MoveDelegate_t16019400_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnCustomInput_t3508588789();
extern const RuntimeType OnCustomInput_t3508588789_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnSchemeChange_t1701155603();
extern const RuntimeType OnSchemeChange_t1701155603_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnScreenResize_t2279991692();
extern const RuntimeType OnScreenResize_t2279991692_0_0_0;
extern "C" void DelegatePInvokeWrapper_RemoveTouchDelegate_t2508278027();
extern const RuntimeType RemoveTouchDelegate_t2508278027_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnReposition_t1372889220();
extern const RuntimeType OnReposition_t1372889220_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidate_t1246632601();
extern const RuntimeType OnValidate_t1246632601_0_0_0;
extern "C" void DelegatePInvokeWrapper_ModifierFunc_t2998065802();
extern const RuntimeType ModifierFunc_t2998065802_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnGeometryUpdated_t2462438111();
extern const RuntimeType OnGeometryUpdated_t2462438111_0_0_0;
extern "C" void DelegatePInvokeWrapper_LegacyEvent_t2749056879();
extern const RuntimeType LegacyEvent_t2749056879_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnDragFinished_t3715779777();
extern const RuntimeType OnDragFinished_t3715779777_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnDragNotification_t1437737811();
extern const RuntimeType OnDragNotification_t1437737811_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnReposition_t3913508630();
extern const RuntimeType OnReposition_t3913508630_0_0_0;
extern "C" void DelegatePInvokeWrapper_Validate_t3702293971();
extern const RuntimeType Validate_t3702293971_0_0_0;
extern "C" void DelegatePInvokeWrapper_HitCheck_t2300079615();
extern const RuntimeType HitCheck_t2300079615_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnDimensionsChanged_t3101921181();
extern const RuntimeType OnDimensionsChanged_t3101921181_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[233] = 
{
	{ NULL, Context_t1744531130_marshal_pinvoke, Context_t1744531130_marshal_pinvoke_back, Context_t1744531130_marshal_pinvoke_cleanup, NULL, NULL, &Context_t1744531130_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Context */,
	{ NULL, Escape_t3294788190_marshal_pinvoke, Escape_t3294788190_marshal_pinvoke_back, Escape_t3294788190_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t3294788190_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, PreviousInfo_t2148130204_marshal_pinvoke, PreviousInfo_t2148130204_marshal_pinvoke_back, PreviousInfo_t2148130204_marshal_pinvoke_cleanup, NULL, NULL, &PreviousInfo_t2148130204_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo */,
	{ NULL, UriScheme_t2867806342_marshal_pinvoke, UriScheme_t2867806342_marshal_pinvoke_back, UriScheme_t2867806342_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t2867806342_0_0_0 } /* Mono.Security.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_t682969308, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_t682969308_0_0_0 } /* System.AppDomainInitializer */,
	{ DelegatePInvokeWrapper_Swapper_t2822380397, NULL, NULL, NULL, NULL, NULL, &Swapper_t2822380397_0_0_0 } /* System.Array/Swapper */,
	{ NULL, DictionaryEntry_t3123975638_marshal_pinvoke, DictionaryEntry_t3123975638_marshal_pinvoke_back, DictionaryEntry_t3123975638_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t3123975638_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, Slot_t3975888750_marshal_pinvoke, Slot_t3975888750_marshal_pinvoke_back, Slot_t3975888750_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t3975888750_0_0_0 } /* System.Collections.Hashtable/Slot */,
	{ NULL, Slot_t384495010_marshal_pinvoke, Slot_t384495010_marshal_pinvoke_back, Slot_t384495010_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t384495010_0_0_0 } /* System.Collections.SortedList/Slot */,
	{ NULL, AssemblyHash_t704722890_marshal_pinvoke, AssemblyHash_t704722890_marshal_pinvoke_back, AssemblyHash_t704722890_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyHash_t704722890_0_0_0 } /* System.Configuration.Assemblies.AssemblyHash */,
	{ NULL, ConsoleKeyInfo_t1802691652_marshal_pinvoke, ConsoleKeyInfo_t1802691652_marshal_pinvoke_back, ConsoleKeyInfo_t1802691652_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t1802691652_0_0_0 } /* System.ConsoleKeyInfo */,
	{ DelegatePInvokeWrapper_CrossAppDomainDelegate_t2801560188, NULL, NULL, NULL, NULL, NULL, &CrossAppDomainDelegate_t2801560188_0_0_0 } /* System.CrossAppDomainDelegate */,
	{ NULL, Enum_t4135868527_marshal_pinvoke, Enum_t4135868527_marshal_pinvoke_back, Enum_t4135868527_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t4135868527_0_0_0 } /* System.Enum */,
	{ DelegatePInvokeWrapper_ReadDelegate_t714865915, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t714865915_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t4270993571, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t4270993571_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, Identities_t4194193441_marshal_pinvoke, Identities_t4194193441_marshal_pinvoke_back, Identities_t4194193441_marshal_pinvoke_cleanup, NULL, NULL, &Identities_t4194193441_0_0_0 } /* System.IO.IsolatedStorage.IsolatedStorageFile/Identities */,
	{ NULL, MonoIOStat_t592533987_marshal_pinvoke, MonoIOStat_t592533987_marshal_pinvoke_back, MonoIOStat_t592533987_marshal_pinvoke_cleanup, NULL, NULL, &MonoIOStat_t592533987_0_0_0 } /* System.IO.MonoIOStat */,
	{ NULL, MonoEnumInfo_t3694469084_marshal_pinvoke, MonoEnumInfo_t3694469084_marshal_pinvoke_back, MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup, NULL, NULL, &MonoEnumInfo_t3694469084_0_0_0 } /* System.MonoEnumInfo */,
	{ NULL, CustomAttributeNamedArgument_t287865710_marshal_pinvoke, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t287865710_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t2723150157_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, CustomAttributeInfo_t1478499589_marshal_pinvoke, CustomAttributeInfo_t1478499589_marshal_pinvoke_back, CustomAttributeInfo_t1478499589_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeInfo_t1478499589_0_0_0 } /* System.Reflection.Emit.CustomAttributeBuilder/CustomAttributeInfo */,
	{ NULL, ILExceptionBlock_t3961874966_marshal_pinvoke, ILExceptionBlock_t3961874966_marshal_pinvoke_back, ILExceptionBlock_t3961874966_marshal_pinvoke_cleanup, NULL, NULL, &ILExceptionBlock_t3961874966_0_0_0 } /* System.Reflection.Emit.ILExceptionBlock */,
	{ NULL, ILExceptionInfo_t237856010_marshal_pinvoke, ILExceptionInfo_t237856010_marshal_pinvoke_back, ILExceptionInfo_t237856010_marshal_pinvoke_cleanup, NULL, NULL, &ILExceptionInfo_t237856010_0_0_0 } /* System.Reflection.Emit.ILExceptionInfo */,
	{ NULL, ILTokenInfo_t2325775114_marshal_pinvoke, ILTokenInfo_t2325775114_marshal_pinvoke_back, ILTokenInfo_t2325775114_marshal_pinvoke_cleanup, NULL, NULL, &ILTokenInfo_t2325775114_0_0_0 } /* System.Reflection.Emit.ILTokenInfo */,
	{ NULL, MonoResource_t4103430009_marshal_pinvoke, MonoResource_t4103430009_marshal_pinvoke_back, MonoResource_t4103430009_marshal_pinvoke_cleanup, NULL, NULL, &MonoResource_t4103430009_0_0_0 } /* System.Reflection.Emit.MonoResource */,
	{ NULL, MonoWin32Resource_t1904229483_marshal_pinvoke, MonoWin32Resource_t1904229483_marshal_pinvoke_back, MonoWin32Resource_t1904229483_marshal_pinvoke_cleanup, NULL, NULL, &MonoWin32Resource_t1904229483_0_0_0 } /* System.Reflection.Emit.MonoWin32Resource */,
	{ NULL, RefEmitPermissionSet_t484390987_marshal_pinvoke, RefEmitPermissionSet_t484390987_marshal_pinvoke_back, RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup, NULL, NULL, &RefEmitPermissionSet_t484390987_0_0_0 } /* System.Reflection.Emit.RefEmitPermissionSet */,
	{ NULL, InterfaceMapping_t1267958657_marshal_pinvoke, InterfaceMapping_t1267958657_marshal_pinvoke_back, InterfaceMapping_t1267958657_marshal_pinvoke_cleanup, NULL, NULL, &InterfaceMapping_t1267958657_0_0_0 } /* System.Reflection.InterfaceMapping */,
	{ NULL, MonoEventInfo_t346866618_marshal_pinvoke, MonoEventInfo_t346866618_marshal_pinvoke_back, MonoEventInfo_t346866618_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t346866618_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t1248819020_marshal_pinvoke, MonoMethodInfo_t1248819020_marshal_pinvoke_back, MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1248819020_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_t3087356066_marshal_pinvoke, MonoPropertyInfo_t3087356066_marshal_pinvoke_back, MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t3087356066_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterModifier_t1461694466_marshal_pinvoke, ParameterModifier_t1461694466_marshal_pinvoke_back, ParameterModifier_t1461694466_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t1461694466_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceCacheItem_t51292791_marshal_pinvoke, ResourceCacheItem_t51292791_marshal_pinvoke_back, ResourceCacheItem_t51292791_marshal_pinvoke_cleanup, NULL, NULL, &ResourceCacheItem_t51292791_0_0_0 } /* System.Resources.ResourceReader/ResourceCacheItem */,
	{ NULL, ResourceInfo_t2872965302_marshal_pinvoke, ResourceInfo_t2872965302_marshal_pinvoke_back, ResourceInfo_t2872965302_marshal_pinvoke_cleanup, NULL, NULL, &ResourceInfo_t2872965302_0_0_0 } /* System.Resources.ResourceReader/ResourceInfo */,
	{ NULL, ArrayWithOffset_t70597867_marshal_pinvoke, ArrayWithOffset_t70597867_marshal_pinvoke_back, ArrayWithOffset_t70597867_marshal_pinvoke_cleanup, NULL, NULL, &ArrayWithOffset_t70597867_0_0_0 } /* System.Runtime.InteropServices.ArrayWithOffset */,
	{ NULL, CONNECTDATA_t1569573429_marshal_pinvoke, CONNECTDATA_t1569573429_marshal_pinvoke_back, CONNECTDATA_t1569573429_marshal_pinvoke_cleanup, NULL, NULL, &CONNECTDATA_t1569573429_0_0_0 } /* System.Runtime.InteropServices.ComTypes.CONNECTDATA */,
	{ NULL, EXCEPINFO_t4018283104_marshal_pinvoke, EXCEPINFO_t4018283104_marshal_pinvoke_back, EXCEPINFO_t4018283104_marshal_pinvoke_cleanup, NULL, NULL, &EXCEPINFO_t4018283104_0_0_0 } /* System.Runtime.InteropServices.ComTypes.EXCEPINFO */,
	{ NULL, STATSTG_t1180006254_marshal_pinvoke, STATSTG_t1180006254_marshal_pinvoke_back, STATSTG_t1180006254_marshal_pinvoke_cleanup, NULL, NULL, &STATSTG_t1180006254_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STATSTG */,
	{ NULL, VARDESC_t1273526866_marshal_pinvoke, VARDESC_t1273526866_marshal_pinvoke_back, VARDESC_t1273526866_marshal_pinvoke_cleanup, NULL, NULL, &VARDESC_t1273526866_0_0_0 } /* System.Runtime.InteropServices.ComTypes.VARDESC */,
	{ NULL, CONNECTDATA_t2532328437_marshal_pinvoke, CONNECTDATA_t2532328437_marshal_pinvoke_back, CONNECTDATA_t2532328437_marshal_pinvoke_cleanup, NULL, NULL, &CONNECTDATA_t2532328437_0_0_0 } /* System.Runtime.InteropServices.CONNECTDATA */,
	{ NULL, EXCEPINFO_t1368229618_marshal_pinvoke, EXCEPINFO_t1368229618_marshal_pinvoke_back, EXCEPINFO_t1368229618_marshal_pinvoke_cleanup, NULL, NULL, &EXCEPINFO_t1368229618_0_0_0 } /* System.Runtime.InteropServices.EXCEPINFO */,
	{ DelegatePInvokeWrapper_ObjectCreationDelegate_t3727257075, NULL, NULL, NULL, NULL, NULL, &ObjectCreationDelegate_t3727257075_0_0_0 } /* System.Runtime.InteropServices.ObjectCreationDelegate */,
	{ NULL, STATSTG_t1720075051_marshal_pinvoke, STATSTG_t1720075051_marshal_pinvoke_back, STATSTG_t1720075051_marshal_pinvoke_cleanup, NULL, NULL, &STATSTG_t1720075051_0_0_0 } /* System.Runtime.InteropServices.STATSTG */,
	{ NULL, VARDESC_t974060553_marshal_pinvoke, VARDESC_t974060553_marshal_pinvoke_back, VARDESC_t974060553_marshal_pinvoke_cleanup, NULL, NULL, &VARDESC_t974060553_0_0_0 } /* System.Runtime.InteropServices.VARDESC */,
	{ NULL, ProcessMessageRes_t3710547145_marshal_pinvoke, ProcessMessageRes_t3710547145_marshal_pinvoke_back, ProcessMessageRes_t3710547145_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t3710547145_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t387175271, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t387175271_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ DelegatePInvokeWrapper_CallbackHandler_t3280319253, NULL, NULL, NULL, NULL, NULL, &CallbackHandler_t3280319253_0_0_0 } /* System.Runtime.Serialization.SerializationCallbacks/CallbackHandler */,
	{ NULL, SerializationEntry_t648286436_marshal_pinvoke, SerializationEntry_t648286436_marshal_pinvoke_back, SerializationEntry_t648286436_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t648286436_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ NULL, StreamingContext_t3711869237_marshal_pinvoke, StreamingContext_t3711869237_marshal_pinvoke_back, StreamingContext_t3711869237_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t3711869237_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, DSAParameters_t1885824122_marshal_pinvoke, DSAParameters_t1885824122_marshal_pinvoke_back, DSAParameters_t1885824122_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t1885824122_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, RSAParameters_t1728406613_marshal_pinvoke, RSAParameters_t1728406613_marshal_pinvoke_back, RSAParameters_t1728406613_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t1728406613_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, SNIP_t4156255223_marshal_pinvoke, SNIP_t4156255223_marshal_pinvoke_back, SNIP_t4156255223_marshal_pinvoke_cleanup, NULL, NULL, &SNIP_t4156255223_0_0_0 } /* System.Security.Permissions.StrongNameIdentityPermission/SNIP */,
	{ NULL, SecurityFrame_t1422462475_marshal_pinvoke, SecurityFrame_t1422462475_marshal_pinvoke_back, SecurityFrame_t1422462475_marshal_pinvoke_cleanup, NULL, NULL, &SecurityFrame_t1422462475_0_0_0 } /* System.Security.SecurityFrame */,
	{ NULL, AsyncFlowControl_t153243767_marshal_pinvoke, AsyncFlowControl_t153243767_marshal_pinvoke_back, AsyncFlowControl_t153243767_marshal_pinvoke_cleanup, NULL, NULL, &AsyncFlowControl_t153243767_0_0_0 } /* System.Threading.AsyncFlowControl */,
	{ DelegatePInvokeWrapper_IOCompletionCallback_t1634628208, NULL, NULL, NULL, NULL, NULL, &IOCompletionCallback_t1634628208_0_0_0 } /* System.Threading.IOCompletionCallback */,
	{ DelegatePInvokeWrapper_ThreadStart_t1006689297, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t1006689297_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ValueType_t3640485471_marshal_pinvoke, ValueType_t3640485471_marshal_pinvoke_back, ValueType_t3640485471_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t3640485471_0_0_0 } /* System.ValueType */,
	{ NULL, NULL, NULL, NULL, NULL, &IBindCtx_t1565995796::IID, &IBindCtx_t1565995796_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IBindCtx */,
	{ NULL, NULL, NULL, NULL, NULL, &IRunningObjectTable_t1355610725::IID, &IRunningObjectTable_t1355610725_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IRunningObjectTable */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumString_t334177337::IID, &IEnumString_t334177337_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumString */,
	{ NULL, NULL, NULL, NULL, NULL, &IConnectionPoint_t2097756631::IID, &IConnectionPoint_t2097756631_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IConnectionPoint */,
	{ NULL, NULL, NULL, NULL, NULL, &IConnectionPointContainer_t1785655909::IID, &IConnectionPointContainer_t1785655909_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IConnectionPointContainer */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumConnections_t1736845793::IID, &IEnumConnections_t1736845793_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumConnections */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumConnectionPoints_t3877902792::IID, &IEnumConnectionPoints_t3877902792_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumConnectionPoints */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumMoniker_t3824831520::IID, &IEnumMoniker_t3824831520_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumMoniker */,
	{ NULL, NULL, NULL, NULL, NULL, &IMoniker_t679694026::IID, &IMoniker_t679694026_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IMoniker */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumVARIANT_t2637587419::IID, &IEnumVARIANT_t2637587419_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumVARIANT */,
	{ NULL, NULL, NULL, NULL, NULL, &IStream_t2767586507::IID, &IStream_t2767586507_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IStream */,
	{ NULL, NULL, NULL, NULL, NULL, &IPersistFile_t4155727431::IID, &IPersistFile_t4155727431_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IPersistFile */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeComp_t1006330118::IID, &ITypeComp_t1006330118_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeComp */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeInfo_t2595417184::IID, &ITypeInfo_t2595417184_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeInfo */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeLib_t2209420004::IID, &ITypeLib_t2209420004_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeLib */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeInfo2_t2594499680::IID, &ITypeInfo2_t2594499680_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeInfo2 */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeLib2_t2950318718::IID, &ITypeLib2_t2950318718_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeLib2 */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMITypeInfo_t3436573129::IID, &UCOMITypeInfo_t3436573129_0_0_0 } /* System.Runtime.InteropServices.UCOMITypeInfo */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMITypeLib_t683656240::IID, &UCOMITypeLib_t683656240_0_0_0 } /* System.Runtime.InteropServices.UCOMITypeLib */,
	{ NULL, NULL, NULL, NULL, NULL, &RegistrationServices_t3768291551::CLSID, &RegistrationServices_t3768291551_0_0_0 } /* System.Runtime.InteropServices.RegistrationServices */,
	{ NULL, NULL, NULL, NULL, NULL, &TypeLibConverter_t1870497393::CLSID, &TypeLibConverter_t1870497393_0_0_0 } /* System.Runtime.InteropServices.TypeLibConverter */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIBindCtx_t322850205::IID, &UCOMIBindCtx_t322850205_0_0_0 } /* System.Runtime.InteropServices.UCOMIBindCtx */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIRunningObjectTable_t255439828::IID, &UCOMIRunningObjectTable_t255439828_0_0_0 } /* System.Runtime.InteropServices.UCOMIRunningObjectTable */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIEnumString_t550825303::IID, &UCOMIEnumString_t550825303_0_0_0 } /* System.Runtime.InteropServices.UCOMIEnumString */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIConnectionPoint_t325234620::IID, &UCOMIConnectionPoint_t325234620_0_0_0 } /* System.Runtime.InteropServices.UCOMIConnectionPoint */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIConnectionPointContainer_t3558982126::IID, &UCOMIConnectionPointContainer_t3558982126_0_0_0 } /* System.Runtime.InteropServices.UCOMIConnectionPointContainer */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIEnumConnections_t3961786326::IID, &UCOMIEnumConnections_t3961786326_0_0_0 } /* System.Runtime.InteropServices.UCOMIEnumConnections */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIEnumConnectionPoints_t880281082::IID, &UCOMIEnumConnectionPoints_t880281082_0_0_0 } /* System.Runtime.InteropServices.UCOMIEnumConnectionPoints */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIEnumMoniker_t2703299571::IID, &UCOMIEnumMoniker_t2703299571_0_0_0 } /* System.Runtime.InteropServices.UCOMIEnumMoniker */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIMoniker_t541441876::IID, &UCOMIMoniker_t541441876_0_0_0 } /* System.Runtime.InteropServices.UCOMIMoniker */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIEnumVARIANT_t801587188::IID, &UCOMIEnumVARIANT_t801587188_0_0_0 } /* System.Runtime.InteropServices.UCOMIEnumVARIANT */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIStream_t1714348057::IID, &UCOMIStream_t1714348057_0_0_0 } /* System.Runtime.InteropServices.UCOMIStream */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMIPersistFile_t2476245654::IID, &UCOMIPersistFile_t2476245654_0_0_0 } /* System.Runtime.InteropServices.UCOMIPersistFile */,
	{ NULL, NULL, NULL, NULL, NULL, &UCOMITypeComp_t1003567318::IID, &UCOMITypeComp_t1003567318_0_0_0 } /* System.Runtime.InteropServices.UCOMITypeComp */,
	{ NULL, X509ChainStatus_t133602714_marshal_pinvoke, X509ChainStatus_t133602714_marshal_pinvoke_back, X509ChainStatus_t133602714_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t133602714_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, IntStack_t2189327687_marshal_pinvoke, IntStack_t2189327687_marshal_pinvoke_back, IntStack_t2189327687_marshal_pinvoke_cleanup, NULL, NULL, &IntStack_t2189327687_0_0_0 } /* System.Text.RegularExpressions.Interpreter/IntStack */,
	{ NULL, Interval_t1802865632_marshal_pinvoke, Interval_t1802865632_marshal_pinvoke_back, Interval_t1802865632_marshal_pinvoke_cleanup, NULL, NULL, &Interval_t1802865632_0_0_0 } /* System.Text.RegularExpressions.Interval */,
	{ DelegatePInvokeWrapper_CostDelegate_t1722821004, NULL, NULL, NULL, NULL, NULL, &CostDelegate_t1722821004_0_0_0 } /* System.Text.RegularExpressions.IntervalCollection/CostDelegate */,
	{ NULL, UriScheme_t722425697_marshal_pinvoke, UriScheme_t722425697_marshal_pinvoke_back, UriScheme_t722425697_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t722425697_0_0_0 } /* System.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_Action_t1264377477, NULL, NULL, NULL, NULL, NULL, &Action_t1264377477_0_0_0 } /* System.Action */,
	{ NULL, TransitionTime_t449921781_marshal_pinvoke, TransitionTime_t449921781_marshal_pinvoke_back, TransitionTime_t449921781_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_t449921781_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, AnimationCurve_t3046754366_marshal_pinvoke, AnimationCurve_t3046754366_marshal_pinvoke_back, AnimationCurve_t3046754366_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_t3046754366_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_LogCallback_t3588208630, NULL, NULL, NULL, NULL, NULL, &LogCallback_t3588208630_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t4104246196, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t4104246196_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AssetBundleCreateRequest_t3119663542_marshal_pinvoke, AssetBundleCreateRequest_t3119663542_marshal_pinvoke_back, AssetBundleCreateRequest_t3119663542_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t3119663542_0_0_0 } /* UnityEngine.AssetBundleCreateRequest */,
	{ NULL, AssetBundleRequest_t699759206_marshal_pinvoke, AssetBundleRequest_t699759206_marshal_pinvoke_back, AssetBundleRequest_t699759206_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_t699759206_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ NULL, AsyncOperation_t1445031843_marshal_pinvoke, AsyncOperation_t1445031843_marshal_pinvoke_back, AsyncOperation_t1445031843_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t1445031843_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t1585977831_marshal_pinvoke, OrderBlock_t1585977831_marshal_pinvoke_back, OrderBlock_t1585977831_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t1585977831_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Coroutine_t3829159415_marshal_pinvoke, Coroutine_t3829159415_marshal_pinvoke_back, Coroutine_t3829159415_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t3829159415_0_0_0 } /* UnityEngine.Coroutine */,
	{ DelegatePInvokeWrapper_CSSMeasureFunc_t1554030124, NULL, NULL, NULL, NULL, NULL, &CSSMeasureFunc_t1554030124_0_0_0 } /* UnityEngine.CSSLayout.CSSMeasureFunc */,
	{ NULL, CullingGroup_t2096318768_marshal_pinvoke, CullingGroup_t2096318768_marshal_pinvoke_back, CullingGroup_t2096318768_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t2096318768_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t2136737110, NULL, NULL, NULL, NULL, NULL, &StateChanged_t2136737110_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t51287044_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_t3245792599, NULL, NULL, NULL, NULL, NULL, &UnityAction_t3245792599_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, FailedToLoadScriptObject_t547604379_marshal_pinvoke, FailedToLoadScriptObject_t547604379_marshal_pinvoke_back, FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t547604379_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t3067099924_marshal_pinvoke, Gradient_t3067099924_marshal_pinvoke_back, Gradient_t3067099924_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t3067099924_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, Object_t631007953_marshal_pinvoke, Object_t631007953_marshal_pinvoke_back, Object_t631007953_marshal_pinvoke_cleanup, NULL, NULL, &Object_t631007953_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t354260709_marshal_pinvoke, PlayableBinding_t354260709_marshal_pinvoke_back, PlayableBinding_t354260709_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t354260709_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, RectOffset_t1369453676_marshal_pinvoke, RectOffset_t1369453676_marshal_pinvoke_back, RectOffset_t1369453676_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t1369453676_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, ResourceRequest_t3109103591_marshal_pinvoke, ResourceRequest_t3109103591_marshal_pinvoke_back, ResourceRequest_t3109103591_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t3109103591_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_t2528358522_marshal_pinvoke, ScriptableObject_t2528358522_marshal_pinvoke_back, ScriptableObject_t2528358522_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_t2528358522_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, HitInfo_t3229609740_marshal_pinvoke, HitInfo_t3229609740_marshal_pinvoke_back, HitInfo_t3229609740_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t3229609740_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, TrackedReference_t1199777556_marshal_pinvoke, TrackedReference_t1199777556_marshal_pinvoke_back, TrackedReference_t1199777556_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_t1199777556_0_0_0 } /* UnityEngine.TrackedReference */,
	{ DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279, NULL, NULL, NULL, NULL, NULL, &RequestAtlasCallback_t3100554279_0_0_0 } /* UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback */,
	{ NULL, WorkRequest_t1354518612_marshal_pinvoke, WorkRequest_t1354518612_marshal_pinvoke_back, WorkRequest_t1354518612_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t1354518612_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t1699091251_marshal_pinvoke, WaitForSeconds_t1699091251_marshal_pinvoke_back, WaitForSeconds_t1699091251_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t1699091251_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t403091072_marshal_pinvoke, YieldInstruction_t403091072_marshal_pinvoke_back, YieldInstruction_t403091072_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t403091072_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t1677636661, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t1677636661_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t1059417452_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t2089929874_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ NULL, CharacterInfo_t1228754872_marshal_pinvoke, CharacterInfo_t1228754872_marshal_pinvoke_back, CharacterInfo_t1228754872_marshal_pinvoke_cleanup, NULL, NULL, &CharacterInfo_t1228754872_0_0_0 } /* UnityEngine.CharacterInfo */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t2467502454_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, TextGenerationSettings_t1351628751_marshal_pinvoke, TextGenerationSettings_t1351628751_marshal_pinvoke_back, TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t1351628751_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t3211863866_marshal_pinvoke, TextGenerator_t3211863866_marshal_pinvoke_back, TextGenerator_t3211863866_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t3211863866_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, DownloadHandler_t2937767557_marshal_pinvoke, DownloadHandler_t2937767557_marshal_pinvoke_back, DownloadHandler_t2937767557_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t2937767557_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerBuffer_t2928496527_marshal_pinvoke, DownloadHandlerBuffer_t2928496527_marshal_pinvoke_back, DownloadHandlerBuffer_t2928496527_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t2928496527_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, UnityWebRequest_t463507806_marshal_pinvoke, UnityWebRequest_t463507806_marshal_pinvoke_back, UnityWebRequest_t463507806_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t463507806_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke, UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t3852015985_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ NULL, UploadHandler_t2993558019_marshal_pinvoke, UploadHandler_t2993558019_marshal_pinvoke_back, UploadHandler_t2993558019_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t2993558019_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ NULL, UploadHandlerRaw_t25761545_marshal_pinvoke, UploadHandlerRaw_t25761545_marshal_pinvoke_back, UploadHandlerRaw_t25761545_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandlerRaw_t25761545_0_0_0 } /* UnityEngine.Networking.UploadHandlerRaw */,
	{ DelegatePInvokeWrapper_OnNavMeshPreUpdate_t1580782682, NULL, NULL, NULL, NULL, NULL, &OnNavMeshPreUpdate_t1580782682_0_0_0 } /* UnityEngine.AI.NavMesh/OnNavMeshPreUpdate */,
	{ NULL, NavMeshPath_t2698325962_marshal_pinvoke, NavMeshPath_t2698325962_marshal_pinvoke_back, NavMeshPath_t2698325962_marshal_pinvoke_cleanup, NULL, NULL, &NavMeshPath_t2698325962_0_0_0 } /* UnityEngine.AI.NavMeshPath */,
	{ NULL, AnimationEvent_t1536042487_marshal_pinvoke, AnimationEvent_t1536042487_marshal_pinvoke_back, AnimationEvent_t1536042487_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t1536042487_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorTransitionInfo_t2534804151_marshal_pinvoke, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t2534804151_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2465339518_marshal_pinvoke, HumanBone_t2465339518_marshal_pinvoke_back, HumanBone_t2465339518_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2465339518_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_t4134054672_marshal_pinvoke, SkeletonBone_t4134054672_marshal_pinvoke_back, SkeletonBone_t4134054672_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_t4134054672_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, GcAchievementData_t675222246_marshal_pinvoke, GcAchievementData_t675222246_marshal_pinvoke_back, GcAchievementData_t675222246_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t675222246_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_t643925653_marshal_pinvoke, GcAchievementDescriptionData_t643925653_marshal_pinvoke_back, GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_t643925653_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t4132273028_marshal_pinvoke, GcLeaderboard_t4132273028_marshal_pinvoke_back, GcLeaderboard_t4132273028_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t4132273028_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_t2125309831_marshal_pinvoke, GcScoreData_t2125309831_marshal_pinvoke_back, GcScoreData_t2125309831_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_t2125309831_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_t2719720026_marshal_pinvoke, GcUserProfileData_t2719720026_marshal_pinvoke_back, GcUserProfileData_t2719720026_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_t2719720026_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ NULL, Event_t2956885303_marshal_pinvoke, Event_t2956885303_marshal_pinvoke_back, Event_t2956885303_marshal_pinvoke_cleanup, NULL, NULL, &Event_t2956885303_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t3146511083, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t3146511083_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t3050628031_marshal_pinvoke, GUIContent_t3050628031_marshal_pinvoke_back, GUIContent_t3050628031_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t3050628031_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_t1143955295_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t3956901511_marshal_pinvoke, GUIStyle_t3956901511_marshal_pinvoke_back, GUIStyle_t3956901511_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t3956901511_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t1397964415_marshal_pinvoke, GUIStyleState_t1397964415_marshal_pinvoke_back, GUIStyleState_t1397964415_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t1397964415_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, SliderHandler_t1154919399_marshal_pinvoke, SliderHandler_t1154919399_marshal_pinvoke_back, SliderHandler_t1154919399_marshal_pinvoke_cleanup, NULL, NULL, &SliderHandler_t1154919399_0_0_0 } /* UnityEngine.SliderHandler */,
	{ NULL, CollisionModule_t1950979710_marshal_pinvoke, CollisionModule_t1950979710_marshal_pinvoke_back, CollisionModule_t1950979710_marshal_pinvoke_cleanup, NULL, NULL, &CollisionModule_t1950979710_0_0_0 } /* UnityEngine.ParticleSystem/CollisionModule */,
	{ NULL, ColorBySpeedModule_t3740209408_marshal_pinvoke, ColorBySpeedModule_t3740209408_marshal_pinvoke_back, ColorBySpeedModule_t3740209408_marshal_pinvoke_cleanup, NULL, NULL, &ColorBySpeedModule_t3740209408_0_0_0 } /* UnityEngine.ParticleSystem/ColorBySpeedModule */,
	{ NULL, ColorOverLifetimeModule_t3039228654_marshal_pinvoke, ColorOverLifetimeModule_t3039228654_marshal_pinvoke_back, ColorOverLifetimeModule_t3039228654_marshal_pinvoke_cleanup, NULL, NULL, &ColorOverLifetimeModule_t3039228654_0_0_0 } /* UnityEngine.ParticleSystem/ColorOverLifetimeModule */,
	{ NULL, EmissionModule_t311448003_marshal_pinvoke, EmissionModule_t311448003_marshal_pinvoke_back, EmissionModule_t311448003_marshal_pinvoke_cleanup, NULL, NULL, &EmissionModule_t311448003_0_0_0 } /* UnityEngine.ParticleSystem/EmissionModule */,
	{ NULL, EmitParams_t2216423628_marshal_pinvoke, EmitParams_t2216423628_marshal_pinvoke_back, EmitParams_t2216423628_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_t2216423628_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ NULL, ExternalForcesModule_t1424795933_marshal_pinvoke, ExternalForcesModule_t1424795933_marshal_pinvoke_back, ExternalForcesModule_t1424795933_marshal_pinvoke_cleanup, NULL, NULL, &ExternalForcesModule_t1424795933_0_0_0 } /* UnityEngine.ParticleSystem/ExternalForcesModule */,
	{ NULL, ForceOverLifetimeModule_t4029962193_marshal_pinvoke, ForceOverLifetimeModule_t4029962193_marshal_pinvoke_back, ForceOverLifetimeModule_t4029962193_marshal_pinvoke_cleanup, NULL, NULL, &ForceOverLifetimeModule_t4029962193_0_0_0 } /* UnityEngine.ParticleSystem/ForceOverLifetimeModule */,
	{ NULL, InheritVelocityModule_t3940044026_marshal_pinvoke, InheritVelocityModule_t3940044026_marshal_pinvoke_back, InheritVelocityModule_t3940044026_marshal_pinvoke_cleanup, NULL, NULL, &InheritVelocityModule_t3940044026_0_0_0 } /* UnityEngine.ParticleSystem/InheritVelocityModule */,
	{ NULL, LightsModule_t3616883284_marshal_pinvoke, LightsModule_t3616883284_marshal_pinvoke_back, LightsModule_t3616883284_marshal_pinvoke_cleanup, NULL, NULL, &LightsModule_t3616883284_0_0_0 } /* UnityEngine.ParticleSystem/LightsModule */,
	{ NULL, LimitVelocityOverLifetimeModule_t686589569_marshal_pinvoke, LimitVelocityOverLifetimeModule_t686589569_marshal_pinvoke_back, LimitVelocityOverLifetimeModule_t686589569_marshal_pinvoke_cleanup, NULL, NULL, &LimitVelocityOverLifetimeModule_t686589569_0_0_0 } /* UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule */,
	{ NULL, MainModule_t2320046318_marshal_pinvoke, MainModule_t2320046318_marshal_pinvoke_back, MainModule_t2320046318_marshal_pinvoke_cleanup, NULL, NULL, &MainModule_t2320046318_0_0_0 } /* UnityEngine.ParticleSystem/MainModule */,
	{ NULL, MinMaxCurve_t1067599125_marshal_pinvoke, MinMaxCurve_t1067599125_marshal_pinvoke_back, MinMaxCurve_t1067599125_marshal_pinvoke_cleanup, NULL, NULL, &MinMaxCurve_t1067599125_0_0_0 } /* UnityEngine.ParticleSystem/MinMaxCurve */,
	{ NULL, MinMaxGradient_t3677460847_marshal_pinvoke, MinMaxGradient_t3677460847_marshal_pinvoke_back, MinMaxGradient_t3677460847_marshal_pinvoke_cleanup, NULL, NULL, &MinMaxGradient_t3677460847_0_0_0 } /* UnityEngine.ParticleSystem/MinMaxGradient */,
	{ NULL, NoiseModule_t962525627_marshal_pinvoke, NoiseModule_t962525627_marshal_pinvoke_back, NoiseModule_t962525627_marshal_pinvoke_cleanup, NULL, NULL, &NoiseModule_t962525627_0_0_0 } /* UnityEngine.ParticleSystem/NoiseModule */,
	{ NULL, RotationBySpeedModule_t3497409583_marshal_pinvoke, RotationBySpeedModule_t3497409583_marshal_pinvoke_back, RotationBySpeedModule_t3497409583_marshal_pinvoke_cleanup, NULL, NULL, &RotationBySpeedModule_t3497409583_0_0_0 } /* UnityEngine.ParticleSystem/RotationBySpeedModule */,
	{ NULL, RotationOverLifetimeModule_t1164372224_marshal_pinvoke, RotationOverLifetimeModule_t1164372224_marshal_pinvoke_back, RotationOverLifetimeModule_t1164372224_marshal_pinvoke_cleanup, NULL, NULL, &RotationOverLifetimeModule_t1164372224_0_0_0 } /* UnityEngine.ParticleSystem/RotationOverLifetimeModule */,
	{ NULL, ShapeModule_t3608330829_marshal_pinvoke, ShapeModule_t3608330829_marshal_pinvoke_back, ShapeModule_t3608330829_marshal_pinvoke_cleanup, NULL, NULL, &ShapeModule_t3608330829_0_0_0 } /* UnityEngine.ParticleSystem/ShapeModule */,
	{ NULL, SizeBySpeedModule_t1515126846_marshal_pinvoke, SizeBySpeedModule_t1515126846_marshal_pinvoke_back, SizeBySpeedModule_t1515126846_marshal_pinvoke_cleanup, NULL, NULL, &SizeBySpeedModule_t1515126846_0_0_0 } /* UnityEngine.ParticleSystem/SizeBySpeedModule */,
	{ NULL, SizeOverLifetimeModule_t1101123803_marshal_pinvoke, SizeOverLifetimeModule_t1101123803_marshal_pinvoke_back, SizeOverLifetimeModule_t1101123803_marshal_pinvoke_cleanup, NULL, NULL, &SizeOverLifetimeModule_t1101123803_0_0_0 } /* UnityEngine.ParticleSystem/SizeOverLifetimeModule */,
	{ NULL, SubEmittersModule_t903775760_marshal_pinvoke, SubEmittersModule_t903775760_marshal_pinvoke_back, SubEmittersModule_t903775760_marshal_pinvoke_cleanup, NULL, NULL, &SubEmittersModule_t903775760_0_0_0 } /* UnityEngine.ParticleSystem/SubEmittersModule */,
	{ NULL, TextureSheetAnimationModule_t738696839_marshal_pinvoke, TextureSheetAnimationModule_t738696839_marshal_pinvoke_back, TextureSheetAnimationModule_t738696839_marshal_pinvoke_cleanup, NULL, NULL, &TextureSheetAnimationModule_t738696839_0_0_0 } /* UnityEngine.ParticleSystem/TextureSheetAnimationModule */,
	{ NULL, TrailModule_t2282589118_marshal_pinvoke, TrailModule_t2282589118_marshal_pinvoke_back, TrailModule_t2282589118_marshal_pinvoke_cleanup, NULL, NULL, &TrailModule_t2282589118_0_0_0 } /* UnityEngine.ParticleSystem/TrailModule */,
	{ NULL, TriggerModule_t1157986180_marshal_pinvoke, TriggerModule_t1157986180_marshal_pinvoke_back, TriggerModule_t1157986180_marshal_pinvoke_cleanup, NULL, NULL, &TriggerModule_t1157986180_0_0_0 } /* UnityEngine.ParticleSystem/TriggerModule */,
	{ NULL, VelocityOverLifetimeModule_t1982232382_marshal_pinvoke, VelocityOverLifetimeModule_t1982232382_marshal_pinvoke_back, VelocityOverLifetimeModule_t1982232382_marshal_pinvoke_cleanup, NULL, NULL, &VelocityOverLifetimeModule_t1982232382_0_0_0 } /* UnityEngine.ParticleSystem/VelocityOverLifetimeModule */,
	{ NULL, Collision2D_t2842956331_marshal_pinvoke, Collision2D_t2842956331_marshal_pinvoke_back, Collision2D_t2842956331_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t2842956331_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t3805203441_marshal_pinvoke, ContactFilter2D_t3805203441_marshal_pinvoke_back, ContactFilter2D_t3805203441_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t3805203441_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, RaycastHit2D_t2279581989_marshal_pinvoke, RaycastHit2D_t2279581989_marshal_pinvoke_back, RaycastHit2D_t2279581989_marshal_pinvoke_cleanup, NULL, NULL, &RaycastHit2D_t2279581989_0_0_0 } /* UnityEngine.RaycastHit2D */,
	{ NULL, Collision_t4262080450_marshal_pinvoke, Collision_t4262080450_marshal_pinvoke_back, Collision_t4262080450_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t4262080450_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, ControllerColliderHit_t240592346_marshal_pinvoke, ControllerColliderHit_t240592346_marshal_pinvoke_back, ControllerColliderHit_t240592346_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_t240592346_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, RaycastHit_t1056001966_marshal_pinvoke, RaycastHit_t1056001966_marshal_pinvoke_back, RaycastHit_t1056001966_marshal_pinvoke_cleanup, NULL, NULL, &RaycastHit_t1056001966_0_0_0 } /* UnityEngine.RaycastHit */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_t3309123499, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_t3309123499_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ NULL, CustomEventData_t317522481_marshal_pinvoke, CustomEventData_t317522481_marshal_pinvoke_back, CustomEventData_t317522481_marshal_pinvoke_cleanup, NULL, NULL, &CustomEventData_t317522481_0_0_0 } /* UnityEngine.Analytics.CustomEventData */,
	{ NULL, UnityAnalyticsHandler_t3011359618_marshal_pinvoke, UnityAnalyticsHandler_t3011359618_marshal_pinvoke_back, UnityAnalyticsHandler_t3011359618_marshal_pinvoke_cleanup, NULL, NULL, &UnityAnalyticsHandler_t3011359618_0_0_0 } /* UnityEngine.Analytics.UnityAnalyticsHandler */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t3163629820, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t3163629820_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_t1027848393_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, RaycastResult_t3360306849_marshal_pinvoke, RaycastResult_t3360306849_marshal_pinvoke_back, RaycastResult_t3360306849_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t3360306849_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t809614380_marshal_pinvoke, ColorTween_t809614380_marshal_pinvoke_back, ColorTween_t809614380_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t809614380_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_t1274330004_marshal_pinvoke, FloatTween_t1274330004_marshal_pinvoke_back, FloatTween_t1274330004_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t1274330004_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ DelegatePInvokeWrapper_OnValidateInput_t2355412304, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t2355412304_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t3049316579_marshal_pinvoke, Navigation_t3049316579_marshal_pinvoke_back, Navigation_t3049316579_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t3049316579_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, SpriteState_t1362986479_marshal_pinvoke, SpriteState_t1362986479_marshal_pinvoke_back, SpriteState_t1362986479_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t1362986479_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ DelegatePInvokeWrapper_OnTrigger_t4184125570, NULL, NULL, NULL, NULL, NULL, &OnTrigger_t4184125570_0_0_0 } /* UnityEngine.Analytics.EventTrigger/OnTrigger */,
	{ NULL, ES3Data_t1970336570_marshal_pinvoke, ES3Data_t1970336570_marshal_pinvoke_back, ES3Data_t1970336570_marshal_pinvoke_cleanup, NULL, NULL, &ES3Data_t1970336570_0_0_0 } /* ES3Internal.ES3Data */,
	{ NULL, ES3ReflectedMember_t1830935496_marshal_pinvoke, ES3ReflectedMember_t1830935496_marshal_pinvoke_back, ES3ReflectedMember_t1830935496_marshal_pinvoke_cleanup, NULL, NULL, &ES3ReflectedMember_t1830935496_0_0_0 } /* ES3Internal.ES3Reflection/ES3ReflectedMember */,
	{ DelegatePInvokeWrapper_ApplyTween_t3327999347, NULL, NULL, NULL, NULL, NULL, &ApplyTween_t3327999347_0_0_0 } /* iTween/ApplyTween */,
	{ DelegatePInvokeWrapper_EasingFunction_t2767217938, NULL, NULL, NULL, NULL, NULL, &EasingFunction_t2767217938_0_0_0 } /* iTween/EasingFunction */,
	{ NULL, CameraCollisionState_t1944070068_marshal_pinvoke, CameraCollisionState_t1944070068_marshal_pinvoke_back, CameraCollisionState_t1944070068_marshal_pinvoke_cleanup, NULL, NULL, &CameraCollisionState_t1944070068_0_0_0 } /* Com.LuisPedroFonseca.ProCamera2D.CameraCollisionState */,
	{ NULL, NumericBoundariesSettings_t3568110065_marshal_pinvoke, NumericBoundariesSettings_t3568110065_marshal_pinvoke_back, NumericBoundariesSettings_t3568110065_marshal_pinvoke_cleanup, NULL, NULL, &NumericBoundariesSettings_t3568110065_0_0_0 } /* Com.LuisPedroFonseca.ProCamera2D.NumericBoundariesSettings */,
	{ DelegatePInvokeWrapper_Callback_t3139336517, NULL, NULL, NULL, NULL, NULL, &Callback_t3139336517_0_0_0 } /* EventDelegate/Callback */,
	{ DelegatePInvokeWrapper_LoadFunction_t2078002637, NULL, NULL, NULL, NULL, NULL, &LoadFunction_t2078002637_0_0_0 } /* Localization/LoadFunction */,
	{ DelegatePInvokeWrapper_OnLocalizeNotification_t3391620158, NULL, NULL, NULL, NULL, NULL, &OnLocalizeNotification_t3391620158_0_0_0 } /* Localization/OnLocalizeNotification */,
	{ DelegatePInvokeWrapper_OnFinished_t3778785451, NULL, NULL, NULL, NULL, NULL, &OnFinished_t3778785451_0_0_0 } /* SpringPanel/OnFinished */,
	{ DelegatePInvokeWrapper_OnFinished_t3364492952, NULL, NULL, NULL, NULL, NULL, &OnFinished_t3364492952_0_0_0 } /* SpringPosition/OnFinished */,
	{ DelegatePInvokeWrapper_SimpleEvent_t2783657407, NULL, NULL, NULL, NULL, NULL, &SimpleEvent_t2783657407_0_0_0 } /* SpriteParticleEmitter.SimpleEvent */,
	{ DelegatePInvokeWrapper_SimpleEvent_t3229034173, NULL, NULL, NULL, NULL, NULL, &SimpleEvent_t3229034173_0_0_0 } /* SpriteToParticlesAsset.SimpleEvent */,
	{ NULL, FadeEntry_t639421133_marshal_pinvoke, FadeEntry_t639421133_marshal_pinvoke_back, FadeEntry_t639421133_marshal_pinvoke_cleanup, NULL, NULL, &FadeEntry_t639421133_0_0_0 } /* TypewriterEffect/FadeEntry */,
	{ NULL, DepthEntry_t628749918_marshal_pinvoke, DepthEntry_t628749918_marshal_pinvoke_back, DepthEntry_t628749918_marshal_pinvoke_cleanup, NULL, NULL, &DepthEntry_t628749918_0_0_0 } /* UICamera/DepthEntry */,
	{ DelegatePInvokeWrapper_GetAnyKeyFunc_t1761480072, NULL, NULL, NULL, NULL, NULL, &GetAnyKeyFunc_t1761480072_0_0_0 } /* UICamera/GetAnyKeyFunc */,
	{ DelegatePInvokeWrapper_GetAxisFunc_t2592608932, NULL, NULL, NULL, NULL, NULL, &GetAxisFunc_t2592608932_0_0_0 } /* UICamera/GetAxisFunc */,
	{ DelegatePInvokeWrapper_GetKeyStateFunc_t2810275146, NULL, NULL, NULL, NULL, NULL, &GetKeyStateFunc_t2810275146_0_0_0 } /* UICamera/GetKeyStateFunc */,
	{ DelegatePInvokeWrapper_GetTouchCountCallback_t3185863032, NULL, NULL, NULL, NULL, NULL, &GetTouchCountCallback_t3185863032_0_0_0 } /* UICamera/GetTouchCountCallback */,
	{ DelegatePInvokeWrapper_MoveDelegate_t16019400, NULL, NULL, NULL, NULL, NULL, &MoveDelegate_t16019400_0_0_0 } /* UICamera/MoveDelegate */,
	{ DelegatePInvokeWrapper_OnCustomInput_t3508588789, NULL, NULL, NULL, NULL, NULL, &OnCustomInput_t3508588789_0_0_0 } /* UICamera/OnCustomInput */,
	{ DelegatePInvokeWrapper_OnSchemeChange_t1701155603, NULL, NULL, NULL, NULL, NULL, &OnSchemeChange_t1701155603_0_0_0 } /* UICamera/OnSchemeChange */,
	{ DelegatePInvokeWrapper_OnScreenResize_t2279991692, NULL, NULL, NULL, NULL, NULL, &OnScreenResize_t2279991692_0_0_0 } /* UICamera/OnScreenResize */,
	{ DelegatePInvokeWrapper_RemoveTouchDelegate_t2508278027, NULL, NULL, NULL, NULL, NULL, &RemoveTouchDelegate_t2508278027_0_0_0 } /* UICamera/RemoveTouchDelegate */,
	{ DelegatePInvokeWrapper_OnReposition_t1372889220, NULL, NULL, NULL, NULL, NULL, &OnReposition_t1372889220_0_0_0 } /* UIGrid/OnReposition */,
	{ DelegatePInvokeWrapper_OnValidate_t1246632601, NULL, NULL, NULL, NULL, NULL, &OnValidate_t1246632601_0_0_0 } /* UIInput/OnValidate */,
	{ DelegatePInvokeWrapper_ModifierFunc_t2998065802, NULL, NULL, NULL, NULL, NULL, &ModifierFunc_t2998065802_0_0_0 } /* UILabel/ModifierFunc */,
	{ DelegatePInvokeWrapper_OnGeometryUpdated_t2462438111, NULL, NULL, NULL, NULL, NULL, &OnGeometryUpdated_t2462438111_0_0_0 } /* UIPanel/OnGeometryUpdated */,
	{ DelegatePInvokeWrapper_LegacyEvent_t2749056879, NULL, NULL, NULL, NULL, NULL, &LegacyEvent_t2749056879_0_0_0 } /* UIPopupList/LegacyEvent */,
	{ DelegatePInvokeWrapper_OnDragFinished_t3715779777, NULL, NULL, NULL, NULL, NULL, &OnDragFinished_t3715779777_0_0_0 } /* UIProgressBar/OnDragFinished */,
	{ DelegatePInvokeWrapper_OnDragNotification_t1437737811, NULL, NULL, NULL, NULL, NULL, &OnDragNotification_t1437737811_0_0_0 } /* UIScrollView/OnDragNotification */,
	{ DelegatePInvokeWrapper_OnReposition_t3913508630, NULL, NULL, NULL, NULL, NULL, &OnReposition_t3913508630_0_0_0 } /* UITable/OnReposition */,
	{ DelegatePInvokeWrapper_Validate_t3702293971, NULL, NULL, NULL, NULL, NULL, &Validate_t3702293971_0_0_0 } /* UIToggle/Validate */,
	{ DelegatePInvokeWrapper_HitCheck_t2300079615, NULL, NULL, NULL, NULL, NULL, &HitCheck_t2300079615_0_0_0 } /* UIWidget/HitCheck */,
	{ DelegatePInvokeWrapper_OnDimensionsChanged_t3101921181, NULL, NULL, NULL, NULL, NULL, &OnDimensionsChanged_t3101921181_0_0_0 } /* UIWidget/OnDimensionsChanged */,
	NULL,
};
