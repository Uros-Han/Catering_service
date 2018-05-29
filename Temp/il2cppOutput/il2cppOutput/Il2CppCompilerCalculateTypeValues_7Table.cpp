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


// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.InteropServices.ComTypes.IMoniker[]
struct IMonikerU5BU5D_t3379837647;
// System.Runtime.InteropServices.ComTypes.IConnectionPoint[]
struct IConnectionPointU5BU5D_t3446966510;
// System.Runtime.InteropServices.ComTypes.ITypeInfo[]
struct ITypeInfoU5BU5D_t3865376289;
// System.String
struct String_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.ActivationContext
struct ActivationContext_t976916018;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Type
struct Type_t;

struct BIND_OPTS_t831320616 ;
struct IRunningObjectTable_t1355610725;
struct IEnumString_t334177337;
struct IEnumVARIANT_t2637587419;
struct IEnumMoniker_t3824831520;
struct CONNECTDATA_t1569573429_marshaled_com;
struct IEnumConnections_t1736845793;
struct IEnumConnectionPoints_t3877902792;
struct Guid_t ;
struct IConnectionPoint_t2097756631;
struct IConnectionPointContainer_t1785655909;
struct IStream_t2767586507;
struct IBindCtx_t1565995796;
struct IMoniker_t679694026;
struct FILETIME_t1200622595 ;
struct ITypeComp_t1006330118;
struct ITypeInfo_t2595417184;
struct BINDPTR_t947377522 ;
struct STATSTG_t1180006254_marshaled_com;
struct ITypeLib_t2209420004;
struct DISPPARAMS_t149323838 ;



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
// System.Runtime.InteropServices.ComTypes.IEnumVARIANT
struct NOVTABLE IEnumVARIANT_t2637587419 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Next_m3346991815(int32_t ___celt0, ObjectU5BU5D_t2843939325* ___rgVar1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Skip_m922418450(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Reset_m4109631802(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Clone_m1980753901(IEnumVARIANT_t2637587419** comReturnValue) = 0;
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
// System.Runtime.InteropServices.ComTypes.IEnumMoniker
struct NOVTABLE IEnumMoniker_t3824831520 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Next_m3921435930(int32_t ___celt0, IMonikerU5BU5D_t3379837647* ___rgelt1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Skip_m661387861(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Reset_m3361439522() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Clone_m4110351627(IEnumMoniker_t3824831520** ___ppenum0) = 0;
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
// System.Runtime.InteropServices.ComTypes.IEnumConnectionPoints
struct NOVTABLE IEnumConnectionPoints_t3877902792 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Next_m2484920507(int32_t ___celt0, IConnectionPointU5BU5D_t3446966510* ___rgelt1, intptr_t ___pceltFetched2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Skip_m1428568912(int32_t ___celt0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Reset_m1976878969() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Clone_m4112197675(IEnumConnectionPoints_t3877902792** ___ppenum0) = 0;
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
// System.Runtime.InteropServices.ComTypes.ITypeComp
struct NOVTABLE ITypeComp_t1006330118 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeComp_Bind_m2151962634(Il2CppChar* ___szName0, int32_t ___lHashVal1, int16_t ___wFlags2, ITypeInfo_t2595417184** ___ppTInfo3, int32_t* ___pDescKind4, BINDPTR_t947377522 * ___pBindPtr5) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeComp_BindType_m3621344716(Il2CppChar* ___szName0, int32_t ___lHashVal1, ITypeInfo_t2595417184** ___ppTInfo2, ITypeComp_t1006330118** ___ppTComp3) = 0;
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
#ifndef BSTRWRAPPER_T4014141473_H
#define BSTRWRAPPER_T4014141473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BStrWrapper
struct  BStrWrapper_t4014141473  : public RuntimeObject
{
public:
	// System.String System.Runtime.InteropServices.BStrWrapper::_value
	String_t* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(BStrWrapper_t4014141473, ____value_0)); }
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
#endif // BSTRWRAPPER_T4014141473_H
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
#ifndef APPLICATIONACTIVATOR_T1496397616_H
#define APPLICATIONACTIVATOR_T1496397616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ApplicationActivator
struct  ApplicationActivator_t1496397616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONACTIVATOR_T1496397616_H
#ifndef DISPATCHWRAPPER_T4241764895_H
#define DISPATCHWRAPPER_T4241764895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispatchWrapper
struct  DispatchWrapper_t4241764895  : public RuntimeObject
{
public:
	// System.Object System.Runtime.InteropServices.DispatchWrapper::wrappedObject
	RuntimeObject * ___wrappedObject_0;

public:
	inline static int32_t get_offset_of_wrappedObject_0() { return static_cast<int32_t>(offsetof(DispatchWrapper_t4241764895, ___wrappedObject_0)); }
	inline RuntimeObject * get_wrappedObject_0() const { return ___wrappedObject_0; }
	inline RuntimeObject ** get_address_of_wrappedObject_0() { return &___wrappedObject_0; }
	inline void set_wrappedObject_0(RuntimeObject * value)
	{
		___wrappedObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___wrappedObject_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHWRAPPER_T4241764895_H
#ifndef ERRORWRAPPER_T1772885312_H
#define ERRORWRAPPER_T1772885312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t1772885312  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t1772885312, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T1772885312_H
#ifndef EXTENSIBLECLASSFACTORY_T574234438_H
#define EXTENSIBLECLASSFACTORY_T574234438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExtensibleClassFactory
struct  ExtensibleClassFactory_t574234438  : public RuntimeObject
{
public:

public:
};

struct ExtensibleClassFactory_t574234438_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.InteropServices.ExtensibleClassFactory::hashtable
	Hashtable_t1853889766 * ___hashtable_0;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(ExtensibleClassFactory_t574234438_StaticFields, ___hashtable_0)); }
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
#endif // EXTENSIBLECLASSFACTORY_T574234438_H
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
#ifndef ACTIVATIONARGUMENTS_T4219999170_H
#define ACTIVATIONARGUMENTS_T4219999170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t4219999170  : public RuntimeObject
{
public:
	// System.ActivationContext System.Runtime.Hosting.ActivationArguments::_context
	ActivationContext_t976916018 * ____context_0;
	// System.ApplicationIdentity System.Runtime.Hosting.ActivationArguments::_identity
	ApplicationIdentity_t1917735356 * ____identity_1;
	// System.String[] System.Runtime.Hosting.ActivationArguments::_data
	StringU5BU5D_t1281789340* ____data_2;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ActivationArguments_t4219999170, ____context_0)); }
	inline ActivationContext_t976916018 * get__context_0() const { return ____context_0; }
	inline ActivationContext_t976916018 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(ActivationContext_t976916018 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((&____context_0), value);
	}

	inline static int32_t get_offset_of__identity_1() { return static_cast<int32_t>(offsetof(ActivationArguments_t4219999170, ____identity_1)); }
	inline ApplicationIdentity_t1917735356 * get__identity_1() const { return ____identity_1; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__identity_1() { return &____identity_1; }
	inline void set__identity_1(ApplicationIdentity_t1917735356 * value)
	{
		____identity_1 = value;
		Il2CppCodeGenWriteBarrier((&____identity_1), value);
	}

	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(ActivationArguments_t4219999170, ____data_2)); }
	inline StringU5BU5D_t1281789340* get__data_2() const { return ____data_2; }
	inline StringU5BU5D_t1281789340** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(StringU5BU5D_t1281789340* value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier((&____data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T4219999170_H
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
#ifndef SCOPELESSENUMATTRIBUTE_T3548012294_H
#define SCOPELESSENUMATTRIBUTE_T3548012294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ScopelessEnumAttribute
struct  ScopelessEnumAttribute_t3548012294  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOPELESSENUMATTRIBUTE_T3548012294_H
#ifndef ALLOWREVERSEPINVOKECALLSATTRIBUTE_T57095214_H
#define ALLOWREVERSEPINVOKECALLSATTRIBUTE_T57095214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.AllowReversePInvokeCallsAttribute
struct  AllowReversePInvokeCallsAttribute_t57095214  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWREVERSEPINVOKECALLSATTRIBUTE_T57095214_H
#ifndef ARRAYWITHOFFSET_T70597867_H
#define ARRAYWITHOFFSET_T70597867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ArrayWithOffset
struct  ArrayWithOffset_t70597867 
{
public:
	// System.Object System.Runtime.InteropServices.ArrayWithOffset::array
	RuntimeObject * ___array_0;
	// System.Int32 System.Runtime.InteropServices.ArrayWithOffset::offset
	int32_t ___offset_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArrayWithOffset_t70597867, ___array_0)); }
	inline RuntimeObject * get_array_0() const { return ___array_0; }
	inline RuntimeObject ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeObject * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(ArrayWithOffset_t70597867, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ArrayWithOffset
struct ArrayWithOffset_t70597867_marshaled_pinvoke
{
	Il2CppIUnknown* ___array_0;
	int32_t ___offset_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ArrayWithOffset
struct ArrayWithOffset_t70597867_marshaled_com
{
	Il2CppIUnknown* ___array_0;
	int32_t ___offset_1;
};
#endif // ARRAYWITHOFFSET_T70597867_H
#ifndef BIND_OPTS_T1987624003_H
#define BIND_OPTS_T1987624003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BIND_OPTS
struct  BIND_OPTS_t1987624003 
{
public:
	// System.Int32 System.Runtime.InteropServices.BIND_OPTS::cbStruct
	int32_t ___cbStruct_0;
	// System.Int32 System.Runtime.InteropServices.BIND_OPTS::grfFlags
	int32_t ___grfFlags_1;
	// System.Int32 System.Runtime.InteropServices.BIND_OPTS::grfMode
	int32_t ___grfMode_2;
	// System.Int32 System.Runtime.InteropServices.BIND_OPTS::dwTickCountDeadline
	int32_t ___dwTickCountDeadline_3;

public:
	inline static int32_t get_offset_of_cbStruct_0() { return static_cast<int32_t>(offsetof(BIND_OPTS_t1987624003, ___cbStruct_0)); }
	inline int32_t get_cbStruct_0() const { return ___cbStruct_0; }
	inline int32_t* get_address_of_cbStruct_0() { return &___cbStruct_0; }
	inline void set_cbStruct_0(int32_t value)
	{
		___cbStruct_0 = value;
	}

	inline static int32_t get_offset_of_grfFlags_1() { return static_cast<int32_t>(offsetof(BIND_OPTS_t1987624003, ___grfFlags_1)); }
	inline int32_t get_grfFlags_1() const { return ___grfFlags_1; }
	inline int32_t* get_address_of_grfFlags_1() { return &___grfFlags_1; }
	inline void set_grfFlags_1(int32_t value)
	{
		___grfFlags_1 = value;
	}

	inline static int32_t get_offset_of_grfMode_2() { return static_cast<int32_t>(offsetof(BIND_OPTS_t1987624003, ___grfMode_2)); }
	inline int32_t get_grfMode_2() const { return ___grfMode_2; }
	inline int32_t* get_address_of_grfMode_2() { return &___grfMode_2; }
	inline void set_grfMode_2(int32_t value)
	{
		___grfMode_2 = value;
	}

	inline static int32_t get_offset_of_dwTickCountDeadline_3() { return static_cast<int32_t>(offsetof(BIND_OPTS_t1987624003, ___dwTickCountDeadline_3)); }
	inline int32_t get_dwTickCountDeadline_3() const { return ___dwTickCountDeadline_3; }
	inline int32_t* get_address_of_dwTickCountDeadline_3() { return &___dwTickCountDeadline_3; }
	inline void set_dwTickCountDeadline_3(int32_t value)
	{
		___dwTickCountDeadline_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIND_OPTS_T1987624003_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_13;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_14;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_15;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_16;

public:
	inline static int32_t get_offset_of_flags_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_13)); }
	inline uint32_t get_flags_13() const { return ___flags_13; }
	inline uint32_t* get_address_of_flags_13() { return &___flags_13; }
	inline void set_flags_13(uint32_t value)
	{
		___flags_13 = value;
	}

	inline static int32_t get_offset_of_hi_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_14)); }
	inline uint32_t get_hi_14() const { return ___hi_14; }
	inline uint32_t* get_address_of_hi_14() { return &___hi_14; }
	inline void set_hi_14(uint32_t value)
	{
		___hi_14 = value;
	}

	inline static int32_t get_offset_of_lo_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_15)); }
	inline uint32_t get_lo_15() const { return ___lo_15; }
	inline uint32_t* get_address_of_lo_15() { return &___lo_15; }
	inline void set_lo_15(uint32_t value)
	{
		___lo_15 = value;
	}

	inline static int32_t get_offset_of_mid_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_16)); }
	inline uint32_t get_mid_16() const { return ___mid_16; }
	inline uint32_t* get_address_of_mid_16() { return &___mid_16; }
	inline void set_mid_16(uint32_t value)
	{
		___mid_16 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_12;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_4)); }
	inline Decimal_t2948259380  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2948259380 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2948259380  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_12)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_12() const { return ___MaxValueDiv10_12; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_12() { return &___MaxValueDiv10_12; }
	inline void set_MaxValueDiv10_12(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef AUTOMATIONPROXYATTRIBUTE_T1935091130_H
#define AUTOMATIONPROXYATTRIBUTE_T1935091130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.AutomationProxyAttribute
struct  AutomationProxyAttribute_t1935091130  : public Attribute_t861562559
{
public:
	// System.Boolean System.Runtime.InteropServices.AutomationProxyAttribute::val
	bool ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(AutomationProxyAttribute_t1935091130, ___val_0)); }
	inline bool get_val_0() const { return ___val_0; }
	inline bool* get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(bool value)
	{
		___val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOMATIONPROXYATTRIBUTE_T1935091130_H
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
#ifndef COMREGISTERFUNCTIONATTRIBUTE_T2107793268_H
#define COMREGISTERFUNCTIONATTRIBUTE_T2107793268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComRegisterFunctionAttribute
struct  ComRegisterFunctionAttribute_t2107793268  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMREGISTERFUNCTIONATTRIBUTE_T2107793268_H
#ifndef COMEVENTINTERFACEATTRIBUTE_T3859601718_H
#define COMEVENTINTERFACEATTRIBUTE_T3859601718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComEventInterfaceAttribute
struct  ComEventInterfaceAttribute_t3859601718  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.InteropServices.ComEventInterfaceAttribute::si
	Type_t * ___si_0;
	// System.Type System.Runtime.InteropServices.ComEventInterfaceAttribute::ep
	Type_t * ___ep_1;

public:
	inline static int32_t get_offset_of_si_0() { return static_cast<int32_t>(offsetof(ComEventInterfaceAttribute_t3859601718, ___si_0)); }
	inline Type_t * get_si_0() const { return ___si_0; }
	inline Type_t ** get_address_of_si_0() { return &___si_0; }
	inline void set_si_0(Type_t * value)
	{
		___si_0 = value;
		Il2CppCodeGenWriteBarrier((&___si_0), value);
	}

	inline static int32_t get_offset_of_ep_1() { return static_cast<int32_t>(offsetof(ComEventInterfaceAttribute_t3859601718, ___ep_1)); }
	inline Type_t * get_ep_1() const { return ___ep_1; }
	inline Type_t ** get_address_of_ep_1() { return &___ep_1; }
	inline void set_ep_1(Type_t * value)
	{
		___ep_1 = value;
		Il2CppCodeGenWriteBarrier((&___ep_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEVENTINTERFACEATTRIBUTE_T3859601718_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#define COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t2734585253  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t2734585253, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#ifndef COMCONVERSIONLOSSATTRIBUTE_T3321876310_H
#define COMCONVERSIONLOSSATTRIBUTE_T3321876310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComConversionLossAttribute
struct  ComConversionLossAttribute_t3321876310  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMCONVERSIONLOSSATTRIBUTE_T3321876310_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
struct  ComCompatibleVersionAttribute_t1233303509  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::minor
	int32_t ___minor_1;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::build
	int32_t ___build_2;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::revision
	int32_t ___revision_3;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}

	inline static int32_t get_offset_of_build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ___build_2)); }
	inline int32_t get_build_2() const { return ___build_2; }
	inline int32_t* get_address_of_build_2() { return &___build_2; }
	inline void set_build_2(int32_t value)
	{
		___build_2 = value;
	}

	inline static int32_t get_offset_of_revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ___revision_3)); }
	inline int32_t get_revision_3() const { return ___revision_3; }
	inline int32_t* get_address_of_revision_3() { return &___revision_3; }
	inline void set_revision_3(int32_t value)
	{
		___revision_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#ifndef COMUNREGISTERFUNCTIONATTRIBUTE_T2952369895_H
#define COMUNREGISTERFUNCTIONATTRIBUTE_T2952369895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComUnregisterFunctionAttribute
struct  ComUnregisterFunctionAttribute_t2952369895  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMUNREGISTERFUNCTIONATTRIBUTE_T2952369895_H
#ifndef BESTFITMAPPINGATTRIBUTE_T4073720592_H
#define BESTFITMAPPINGATTRIBUTE_T4073720592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t4073720592  : public Attribute_t861562559
{
public:
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::bfm
	bool ___bfm_0;
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_1;

public:
	inline static int32_t get_offset_of_bfm_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t4073720592, ___bfm_0)); }
	inline bool get_bfm_0() const { return ___bfm_0; }
	inline bool* get_address_of_bfm_0() { return &___bfm_0; }
	inline void set_bfm_0(bool value)
	{
		___bfm_0 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_1() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t4073720592, ___ThrowOnUnmappableChar_1)); }
	inline bool get_ThrowOnUnmappableChar_1() const { return ___ThrowOnUnmappableChar_1; }
	inline bool* get_address_of_ThrowOnUnmappableChar_1() { return &___ThrowOnUnmappableChar_1; }
	inline void set_ThrowOnUnmappableChar_1(bool value)
	{
		___ThrowOnUnmappableChar_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BESTFITMAPPINGATTRIBUTE_T4073720592_H
#ifndef COMSOURCEINTERFACESATTRIBUTE_T372280649_H
#define COMSOURCEINTERFACESATTRIBUTE_T372280649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComSourceInterfacesAttribute
struct  ComSourceInterfacesAttribute_t372280649  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.ComSourceInterfacesAttribute::internalValue
	String_t* ___internalValue_0;

public:
	inline static int32_t get_offset_of_internalValue_0() { return static_cast<int32_t>(offsetof(ComSourceInterfacesAttribute_t372280649, ___internalValue_0)); }
	inline String_t* get_internalValue_0() const { return ___internalValue_0; }
	inline String_t** get_address_of_internalValue_0() { return &___internalValue_0; }
	inline void set_internalValue_0(String_t* value)
	{
		___internalValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___internalValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMSOURCEINTERFACESATTRIBUTE_T372280649_H
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
#ifndef CONNECTDATA_T2532328437_H
#define CONNECTDATA_T2532328437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CONNECTDATA
struct  CONNECTDATA_t2532328437 
{
public:
	// System.Object System.Runtime.InteropServices.CONNECTDATA::pUnk
	RuntimeObject * ___pUnk_0;
	// System.Int32 System.Runtime.InteropServices.CONNECTDATA::dwCookie
	int32_t ___dwCookie_1;

public:
	inline static int32_t get_offset_of_pUnk_0() { return static_cast<int32_t>(offsetof(CONNECTDATA_t2532328437, ___pUnk_0)); }
	inline RuntimeObject * get_pUnk_0() const { return ___pUnk_0; }
	inline RuntimeObject ** get_address_of_pUnk_0() { return &___pUnk_0; }
	inline void set_pUnk_0(RuntimeObject * value)
	{
		___pUnk_0 = value;
		Il2CppCodeGenWriteBarrier((&___pUnk_0), value);
	}

	inline static int32_t get_offset_of_dwCookie_1() { return static_cast<int32_t>(offsetof(CONNECTDATA_t2532328437, ___dwCookie_1)); }
	inline int32_t get_dwCookie_1() const { return ___dwCookie_1; }
	inline int32_t* get_address_of_dwCookie_1() { return &___dwCookie_1; }
	inline void set_dwCookie_1(int32_t value)
	{
		___dwCookie_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.CONNECTDATA
struct CONNECTDATA_t2532328437_marshaled_pinvoke
{
	Il2CppIUnknown* ___pUnk_0;
	int32_t ___dwCookie_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.CONNECTDATA
struct CONNECTDATA_t2532328437_marshaled_com
{
	Il2CppIUnknown* ___pUnk_0;
	int32_t ___dwCookie_1;
};
#endif // CONNECTDATA_T2532328437_H
#ifndef COMALIASNAMEATTRIBUTE_T2348302473_H
#define COMALIASNAMEATTRIBUTE_T2348302473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComAliasNameAttribute
struct  ComAliasNameAttribute_t2348302473  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.ComAliasNameAttribute::val
	String_t* ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(ComAliasNameAttribute_t2348302473, ___val_0)); }
	inline String_t* get_val_0() const { return ___val_0; }
	inline String_t** get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(String_t* value)
	{
		___val_0 = value;
		Il2CppCodeGenWriteBarrier((&___val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMALIASNAMEATTRIBUTE_T2348302473_H
#ifndef DISPIDATTRIBUTE_T491906453_H
#define DISPIDATTRIBUTE_T491906453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t491906453  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t491906453, ___id_0)); }
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
#endif // DISPIDATTRIBUTE_T491906453_H
#ifndef SUPPRESSILDASMATTRIBUTE_T3739123956_H
#define SUPPRESSILDASMATTRIBUTE_T3739123956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.SuppressIldasmAttribute
struct  SuppressIldasmAttribute_t3739123956  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSILDASMATTRIBUTE_T3739123956_H
#ifndef BIND_OPTS_T831320616_H
#define BIND_OPTS_T831320616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.BIND_OPTS
struct  BIND_OPTS_t831320616 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.BIND_OPTS::cbStruct
	int32_t ___cbStruct_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.BIND_OPTS::grfFlags
	int32_t ___grfFlags_1;
	// System.Int32 System.Runtime.InteropServices.ComTypes.BIND_OPTS::grfMode
	int32_t ___grfMode_2;
	// System.Int32 System.Runtime.InteropServices.ComTypes.BIND_OPTS::dwTickCountDeadline
	int32_t ___dwTickCountDeadline_3;

public:
	inline static int32_t get_offset_of_cbStruct_0() { return static_cast<int32_t>(offsetof(BIND_OPTS_t831320616, ___cbStruct_0)); }
	inline int32_t get_cbStruct_0() const { return ___cbStruct_0; }
	inline int32_t* get_address_of_cbStruct_0() { return &___cbStruct_0; }
	inline void set_cbStruct_0(int32_t value)
	{
		___cbStruct_0 = value;
	}

	inline static int32_t get_offset_of_grfFlags_1() { return static_cast<int32_t>(offsetof(BIND_OPTS_t831320616, ___grfFlags_1)); }
	inline int32_t get_grfFlags_1() const { return ___grfFlags_1; }
	inline int32_t* get_address_of_grfFlags_1() { return &___grfFlags_1; }
	inline void set_grfFlags_1(int32_t value)
	{
		___grfFlags_1 = value;
	}

	inline static int32_t get_offset_of_grfMode_2() { return static_cast<int32_t>(offsetof(BIND_OPTS_t831320616, ___grfMode_2)); }
	inline int32_t get_grfMode_2() const { return ___grfMode_2; }
	inline int32_t* get_address_of_grfMode_2() { return &___grfMode_2; }
	inline void set_grfMode_2(int32_t value)
	{
		___grfMode_2 = value;
	}

	inline static int32_t get_offset_of_dwTickCountDeadline_3() { return static_cast<int32_t>(offsetof(BIND_OPTS_t831320616, ___dwTickCountDeadline_3)); }
	inline int32_t get_dwTickCountDeadline_3() const { return ___dwTickCountDeadline_3; }
	inline int32_t* get_address_of_dwTickCountDeadline_3() { return &___dwTickCountDeadline_3; }
	inline void set_dwTickCountDeadline_3(int32_t value)
	{
		___dwTickCountDeadline_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIND_OPTS_T831320616_H
#ifndef PREPREPAREMETHODATTRIBUTE_T3223698298_H
#define PREPREPAREMETHODATTRIBUTE_T3223698298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.PrePrepareMethodAttribute
struct  PrePrepareMethodAttribute_t3223698298  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPREPAREMETHODATTRIBUTE_T3223698298_H
#ifndef CONNECTDATA_T1569573429_H
#define CONNECTDATA_T1569573429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.CONNECTDATA
struct  CONNECTDATA_t1569573429 
{
public:
	// System.Object System.Runtime.InteropServices.ComTypes.CONNECTDATA::pUnk
	RuntimeObject * ___pUnk_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.CONNECTDATA::dwCookie
	int32_t ___dwCookie_1;

public:
	inline static int32_t get_offset_of_pUnk_0() { return static_cast<int32_t>(offsetof(CONNECTDATA_t1569573429, ___pUnk_0)); }
	inline RuntimeObject * get_pUnk_0() const { return ___pUnk_0; }
	inline RuntimeObject ** get_address_of_pUnk_0() { return &___pUnk_0; }
	inline void set_pUnk_0(RuntimeObject * value)
	{
		___pUnk_0 = value;
		Il2CppCodeGenWriteBarrier((&___pUnk_0), value);
	}

	inline static int32_t get_offset_of_dwCookie_1() { return static_cast<int32_t>(offsetof(CONNECTDATA_t1569573429, ___dwCookie_1)); }
	inline int32_t get_dwCookie_1() const { return ___dwCookie_1; }
	inline int32_t* get_address_of_dwCookie_1() { return &___dwCookie_1; }
	inline void set_dwCookie_1(int32_t value)
	{
		___dwCookie_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ComTypes.CONNECTDATA
struct CONNECTDATA_t1569573429_marshaled_pinvoke
{
	Il2CppIUnknown* ___pUnk_0;
	int32_t ___dwCookie_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ComTypes.CONNECTDATA
struct CONNECTDATA_t1569573429_marshaled_com
{
	Il2CppIUnknown* ___pUnk_0;
	int32_t ___dwCookie_1;
};
#endif // CONNECTDATA_T1569573429_H
#ifndef STRINGFREEZINGATTRIBUTE_T3031362240_H
#define STRINGFREEZINGATTRIBUTE_T3031362240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t3031362240  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T3031362240_H
#ifndef SPECIALNAMEATTRIBUTE_T2303676958_H
#define SPECIALNAMEATTRIBUTE_T2303676958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.SpecialNameAttribute
struct  SpecialNameAttribute_t2303676958  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALNAMEATTRIBUTE_T2303676958_H
#ifndef FILETIME_T1200622595_H
#define FILETIME_T1200622595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.FILETIME
struct  FILETIME_t1200622595 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwLowDateTime
	int32_t ___dwLowDateTime_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwHighDateTime
	int32_t ___dwHighDateTime_1;

public:
	inline static int32_t get_offset_of_dwLowDateTime_0() { return static_cast<int32_t>(offsetof(FILETIME_t1200622595, ___dwLowDateTime_0)); }
	inline int32_t get_dwLowDateTime_0() const { return ___dwLowDateTime_0; }
	inline int32_t* get_address_of_dwLowDateTime_0() { return &___dwLowDateTime_0; }
	inline void set_dwLowDateTime_0(int32_t value)
	{
		___dwLowDateTime_0 = value;
	}

	inline static int32_t get_offset_of_dwHighDateTime_1() { return static_cast<int32_t>(offsetof(FILETIME_t1200622595, ___dwHighDateTime_1)); }
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
#endif // FILETIME_T1200622595_H
#ifndef EXCEPINFO_T1368229618_H
#define EXCEPINFO_T1368229618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.EXCEPINFO
struct  EXCEPINFO_t1368229618 
{
public:
	// System.Int16 System.Runtime.InteropServices.EXCEPINFO::wCode
	int16_t ___wCode_0;
	// System.Int16 System.Runtime.InteropServices.EXCEPINFO::wReserved
	int16_t ___wReserved_1;
	// System.String System.Runtime.InteropServices.EXCEPINFO::bstrSource
	String_t* ___bstrSource_2;
	// System.String System.Runtime.InteropServices.EXCEPINFO::bstrDescription
	String_t* ___bstrDescription_3;
	// System.String System.Runtime.InteropServices.EXCEPINFO::bstrHelpFile
	String_t* ___bstrHelpFile_4;
	// System.Int32 System.Runtime.InteropServices.EXCEPINFO::dwHelpContext
	int32_t ___dwHelpContext_5;
	// System.IntPtr System.Runtime.InteropServices.EXCEPINFO::pvReserved
	intptr_t ___pvReserved_6;
	// System.IntPtr System.Runtime.InteropServices.EXCEPINFO::pfnDeferredFillIn
	intptr_t ___pfnDeferredFillIn_7;

public:
	inline static int32_t get_offset_of_wCode_0() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___wCode_0)); }
	inline int16_t get_wCode_0() const { return ___wCode_0; }
	inline int16_t* get_address_of_wCode_0() { return &___wCode_0; }
	inline void set_wCode_0(int16_t value)
	{
		___wCode_0 = value;
	}

	inline static int32_t get_offset_of_wReserved_1() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___wReserved_1)); }
	inline int16_t get_wReserved_1() const { return ___wReserved_1; }
	inline int16_t* get_address_of_wReserved_1() { return &___wReserved_1; }
	inline void set_wReserved_1(int16_t value)
	{
		___wReserved_1 = value;
	}

	inline static int32_t get_offset_of_bstrSource_2() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___bstrSource_2)); }
	inline String_t* get_bstrSource_2() const { return ___bstrSource_2; }
	inline String_t** get_address_of_bstrSource_2() { return &___bstrSource_2; }
	inline void set_bstrSource_2(String_t* value)
	{
		___bstrSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___bstrSource_2), value);
	}

	inline static int32_t get_offset_of_bstrDescription_3() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___bstrDescription_3)); }
	inline String_t* get_bstrDescription_3() const { return ___bstrDescription_3; }
	inline String_t** get_address_of_bstrDescription_3() { return &___bstrDescription_3; }
	inline void set_bstrDescription_3(String_t* value)
	{
		___bstrDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___bstrDescription_3), value);
	}

	inline static int32_t get_offset_of_bstrHelpFile_4() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___bstrHelpFile_4)); }
	inline String_t* get_bstrHelpFile_4() const { return ___bstrHelpFile_4; }
	inline String_t** get_address_of_bstrHelpFile_4() { return &___bstrHelpFile_4; }
	inline void set_bstrHelpFile_4(String_t* value)
	{
		___bstrHelpFile_4 = value;
		Il2CppCodeGenWriteBarrier((&___bstrHelpFile_4), value);
	}

	inline static int32_t get_offset_of_dwHelpContext_5() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___dwHelpContext_5)); }
	inline int32_t get_dwHelpContext_5() const { return ___dwHelpContext_5; }
	inline int32_t* get_address_of_dwHelpContext_5() { return &___dwHelpContext_5; }
	inline void set_dwHelpContext_5(int32_t value)
	{
		___dwHelpContext_5 = value;
	}

	inline static int32_t get_offset_of_pvReserved_6() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___pvReserved_6)); }
	inline intptr_t get_pvReserved_6() const { return ___pvReserved_6; }
	inline intptr_t* get_address_of_pvReserved_6() { return &___pvReserved_6; }
	inline void set_pvReserved_6(intptr_t value)
	{
		___pvReserved_6 = value;
	}

	inline static int32_t get_offset_of_pfnDeferredFillIn_7() { return static_cast<int32_t>(offsetof(EXCEPINFO_t1368229618, ___pfnDeferredFillIn_7)); }
	inline intptr_t get_pfnDeferredFillIn_7() const { return ___pfnDeferredFillIn_7; }
	inline intptr_t* get_address_of_pfnDeferredFillIn_7() { return &___pfnDeferredFillIn_7; }
	inline void set_pfnDeferredFillIn_7(intptr_t value)
	{
		___pfnDeferredFillIn_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.EXCEPINFO
struct EXCEPINFO_t1368229618_marshaled_pinvoke
{
	int16_t ___wCode_0;
	int16_t ___wReserved_1;
	Il2CppChar* ___bstrSource_2;
	Il2CppChar* ___bstrDescription_3;
	Il2CppChar* ___bstrHelpFile_4;
	int32_t ___dwHelpContext_5;
	intptr_t ___pvReserved_6;
	intptr_t ___pfnDeferredFillIn_7;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.EXCEPINFO
struct EXCEPINFO_t1368229618_marshaled_com
{
	int16_t ___wCode_0;
	int16_t ___wReserved_1;
	Il2CppChar* ___bstrSource_2;
	Il2CppChar* ___bstrDescription_3;
	Il2CppChar* ___bstrHelpFile_4;
	int32_t ___dwHelpContext_5;
	intptr_t ___pvReserved_6;
	intptr_t ___pfnDeferredFillIn_7;
};
#endif // EXCEPINFO_T1368229618_H
#ifndef DESCKIND_T3213663876_H
#define DESCKIND_T3213663876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.DESCKIND
struct  DESCKIND_t3213663876 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.DESCKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DESCKIND_t3213663876, ___value___1)); }
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
#endif // DESCKIND_T3213663876_H
#ifndef DISPPARAMS_T149323838_H
#define DISPPARAMS_T149323838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.DISPPARAMS
struct  DISPPARAMS_t149323838 
{
public:
	// System.IntPtr System.Runtime.InteropServices.ComTypes.DISPPARAMS::rgvarg
	intptr_t ___rgvarg_0;
	// System.IntPtr System.Runtime.InteropServices.ComTypes.DISPPARAMS::rgdispidNamedArgs
	intptr_t ___rgdispidNamedArgs_1;
	// System.Int32 System.Runtime.InteropServices.ComTypes.DISPPARAMS::cArgs
	int32_t ___cArgs_2;
	// System.Int32 System.Runtime.InteropServices.ComTypes.DISPPARAMS::cNamedArgs
	int32_t ___cNamedArgs_3;

public:
	inline static int32_t get_offset_of_rgvarg_0() { return static_cast<int32_t>(offsetof(DISPPARAMS_t149323838, ___rgvarg_0)); }
	inline intptr_t get_rgvarg_0() const { return ___rgvarg_0; }
	inline intptr_t* get_address_of_rgvarg_0() { return &___rgvarg_0; }
	inline void set_rgvarg_0(intptr_t value)
	{
		___rgvarg_0 = value;
	}

	inline static int32_t get_offset_of_rgdispidNamedArgs_1() { return static_cast<int32_t>(offsetof(DISPPARAMS_t149323838, ___rgdispidNamedArgs_1)); }
	inline intptr_t get_rgdispidNamedArgs_1() const { return ___rgdispidNamedArgs_1; }
	inline intptr_t* get_address_of_rgdispidNamedArgs_1() { return &___rgdispidNamedArgs_1; }
	inline void set_rgdispidNamedArgs_1(intptr_t value)
	{
		___rgdispidNamedArgs_1 = value;
	}

	inline static int32_t get_offset_of_cArgs_2() { return static_cast<int32_t>(offsetof(DISPPARAMS_t149323838, ___cArgs_2)); }
	inline int32_t get_cArgs_2() const { return ___cArgs_2; }
	inline int32_t* get_address_of_cArgs_2() { return &___cArgs_2; }
	inline void set_cArgs_2(int32_t value)
	{
		___cArgs_2 = value;
	}

	inline static int32_t get_offset_of_cNamedArgs_3() { return static_cast<int32_t>(offsetof(DISPPARAMS_t149323838, ___cNamedArgs_3)); }
	inline int32_t get_cNamedArgs_3() const { return ___cNamedArgs_3; }
	inline int32_t* get_address_of_cNamedArgs_3() { return &___cNamedArgs_3; }
	inline void set_cNamedArgs_3(int32_t value)
	{
		___cNamedArgs_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPPARAMS_T149323838_H
#ifndef DISPPARAMS_T2246988669_H
#define DISPPARAMS_T2246988669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DISPPARAMS
struct  DISPPARAMS_t2246988669 
{
public:
	// System.IntPtr System.Runtime.InteropServices.DISPPARAMS::rgvarg
	intptr_t ___rgvarg_0;
	// System.IntPtr System.Runtime.InteropServices.DISPPARAMS::rgdispidNamedArgs
	intptr_t ___rgdispidNamedArgs_1;
	// System.Int32 System.Runtime.InteropServices.DISPPARAMS::cArgs
	int32_t ___cArgs_2;
	// System.Int32 System.Runtime.InteropServices.DISPPARAMS::cNamedArgs
	int32_t ___cNamedArgs_3;

public:
	inline static int32_t get_offset_of_rgvarg_0() { return static_cast<int32_t>(offsetof(DISPPARAMS_t2246988669, ___rgvarg_0)); }
	inline intptr_t get_rgvarg_0() const { return ___rgvarg_0; }
	inline intptr_t* get_address_of_rgvarg_0() { return &___rgvarg_0; }
	inline void set_rgvarg_0(intptr_t value)
	{
		___rgvarg_0 = value;
	}

	inline static int32_t get_offset_of_rgdispidNamedArgs_1() { return static_cast<int32_t>(offsetof(DISPPARAMS_t2246988669, ___rgdispidNamedArgs_1)); }
	inline intptr_t get_rgdispidNamedArgs_1() const { return ___rgdispidNamedArgs_1; }
	inline intptr_t* get_address_of_rgdispidNamedArgs_1() { return &___rgdispidNamedArgs_1; }
	inline void set_rgdispidNamedArgs_1(intptr_t value)
	{
		___rgdispidNamedArgs_1 = value;
	}

	inline static int32_t get_offset_of_cArgs_2() { return static_cast<int32_t>(offsetof(DISPPARAMS_t2246988669, ___cArgs_2)); }
	inline int32_t get_cArgs_2() const { return ___cArgs_2; }
	inline int32_t* get_address_of_cArgs_2() { return &___cArgs_2; }
	inline void set_cArgs_2(int32_t value)
	{
		___cArgs_2 = value;
	}

	inline static int32_t get_offset_of_cNamedArgs_3() { return static_cast<int32_t>(offsetof(DISPPARAMS_t2246988669, ___cNamedArgs_3)); }
	inline int32_t get_cNamedArgs_3() const { return ___cNamedArgs_3; }
	inline int32_t* get_address_of_cNamedArgs_3() { return &___cNamedArgs_3; }
	inline void set_cNamedArgs_3(int32_t value)
	{
		___cNamedArgs_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPPARAMS_T2246988669_H
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
#ifndef DESCKIND_T2664518927_H
#define DESCKIND_T2664518927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DESCKIND
struct  DESCKIND_t2664518927 
{
public:
	// System.Int32 System.Runtime.InteropServices.DESCKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DESCKIND_t2664518927, ___value___1)); }
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
#endif // DESCKIND_T2664518927_H
#ifndef CURRENCYWRAPPER_T3164925625_H
#define CURRENCYWRAPPER_T3164925625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CurrencyWrapper
struct  CurrencyWrapper_t3164925625  : public RuntimeObject
{
public:
	// System.Decimal System.Runtime.InteropServices.CurrencyWrapper::currency
	Decimal_t2948259380  ___currency_0;

public:
	inline static int32_t get_offset_of_currency_0() { return static_cast<int32_t>(offsetof(CurrencyWrapper_t3164925625, ___currency_0)); }
	inline Decimal_t2948259380  get_currency_0() const { return ___currency_0; }
	inline Decimal_t2948259380 * get_address_of_currency_0() { return &___currency_0; }
	inline void set_currency_0(Decimal_t2948259380  value)
	{
		___currency_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENCYWRAPPER_T3164925625_H
#ifndef COMMEMBERTYPE_T322658443_H
#define COMMEMBERTYPE_T322658443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComMemberType
struct  ComMemberType_t322658443 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComMemberType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComMemberType_t322658443, ___value___1)); }
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
#endif // COMMEMBERTYPE_T322658443_H
#ifndef EXCEPINFO_T4018283104_H
#define EXCEPINFO_T4018283104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.EXCEPINFO
struct  EXCEPINFO_t4018283104 
{
public:
	// System.Int16 System.Runtime.InteropServices.ComTypes.EXCEPINFO::wCode
	int16_t ___wCode_0;
	// System.Int16 System.Runtime.InteropServices.ComTypes.EXCEPINFO::wReserved
	int16_t ___wReserved_1;
	// System.String System.Runtime.InteropServices.ComTypes.EXCEPINFO::bstrSource
	String_t* ___bstrSource_2;
	// System.String System.Runtime.InteropServices.ComTypes.EXCEPINFO::bstrDescription
	String_t* ___bstrDescription_3;
	// System.String System.Runtime.InteropServices.ComTypes.EXCEPINFO::bstrHelpFile
	String_t* ___bstrHelpFile_4;
	// System.Int32 System.Runtime.InteropServices.ComTypes.EXCEPINFO::dwHelpContext
	int32_t ___dwHelpContext_5;
	// System.IntPtr System.Runtime.InteropServices.ComTypes.EXCEPINFO::pvReserved
	intptr_t ___pvReserved_6;
	// System.IntPtr System.Runtime.InteropServices.ComTypes.EXCEPINFO::pfnDeferredFillIn
	intptr_t ___pfnDeferredFillIn_7;
	// System.Int32 System.Runtime.InteropServices.ComTypes.EXCEPINFO::scode
	int32_t ___scode_8;

public:
	inline static int32_t get_offset_of_wCode_0() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___wCode_0)); }
	inline int16_t get_wCode_0() const { return ___wCode_0; }
	inline int16_t* get_address_of_wCode_0() { return &___wCode_0; }
	inline void set_wCode_0(int16_t value)
	{
		___wCode_0 = value;
	}

	inline static int32_t get_offset_of_wReserved_1() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___wReserved_1)); }
	inline int16_t get_wReserved_1() const { return ___wReserved_1; }
	inline int16_t* get_address_of_wReserved_1() { return &___wReserved_1; }
	inline void set_wReserved_1(int16_t value)
	{
		___wReserved_1 = value;
	}

	inline static int32_t get_offset_of_bstrSource_2() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___bstrSource_2)); }
	inline String_t* get_bstrSource_2() const { return ___bstrSource_2; }
	inline String_t** get_address_of_bstrSource_2() { return &___bstrSource_2; }
	inline void set_bstrSource_2(String_t* value)
	{
		___bstrSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___bstrSource_2), value);
	}

	inline static int32_t get_offset_of_bstrDescription_3() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___bstrDescription_3)); }
	inline String_t* get_bstrDescription_3() const { return ___bstrDescription_3; }
	inline String_t** get_address_of_bstrDescription_3() { return &___bstrDescription_3; }
	inline void set_bstrDescription_3(String_t* value)
	{
		___bstrDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___bstrDescription_3), value);
	}

	inline static int32_t get_offset_of_bstrHelpFile_4() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___bstrHelpFile_4)); }
	inline String_t* get_bstrHelpFile_4() const { return ___bstrHelpFile_4; }
	inline String_t** get_address_of_bstrHelpFile_4() { return &___bstrHelpFile_4; }
	inline void set_bstrHelpFile_4(String_t* value)
	{
		___bstrHelpFile_4 = value;
		Il2CppCodeGenWriteBarrier((&___bstrHelpFile_4), value);
	}

	inline static int32_t get_offset_of_dwHelpContext_5() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___dwHelpContext_5)); }
	inline int32_t get_dwHelpContext_5() const { return ___dwHelpContext_5; }
	inline int32_t* get_address_of_dwHelpContext_5() { return &___dwHelpContext_5; }
	inline void set_dwHelpContext_5(int32_t value)
	{
		___dwHelpContext_5 = value;
	}

	inline static int32_t get_offset_of_pvReserved_6() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___pvReserved_6)); }
	inline intptr_t get_pvReserved_6() const { return ___pvReserved_6; }
	inline intptr_t* get_address_of_pvReserved_6() { return &___pvReserved_6; }
	inline void set_pvReserved_6(intptr_t value)
	{
		___pvReserved_6 = value;
	}

	inline static int32_t get_offset_of_pfnDeferredFillIn_7() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___pfnDeferredFillIn_7)); }
	inline intptr_t get_pfnDeferredFillIn_7() const { return ___pfnDeferredFillIn_7; }
	inline intptr_t* get_address_of_pfnDeferredFillIn_7() { return &___pfnDeferredFillIn_7; }
	inline void set_pfnDeferredFillIn_7(intptr_t value)
	{
		___pfnDeferredFillIn_7 = value;
	}

	inline static int32_t get_offset_of_scode_8() { return static_cast<int32_t>(offsetof(EXCEPINFO_t4018283104, ___scode_8)); }
	inline int32_t get_scode_8() const { return ___scode_8; }
	inline int32_t* get_address_of_scode_8() { return &___scode_8; }
	inline void set_scode_8(int32_t value)
	{
		___scode_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ComTypes.EXCEPINFO
struct EXCEPINFO_t4018283104_marshaled_pinvoke
{
	int16_t ___wCode_0;
	int16_t ___wReserved_1;
	Il2CppChar* ___bstrSource_2;
	Il2CppChar* ___bstrDescription_3;
	Il2CppChar* ___bstrHelpFile_4;
	int32_t ___dwHelpContext_5;
	intptr_t ___pvReserved_6;
	intptr_t ___pfnDeferredFillIn_7;
	int32_t ___scode_8;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ComTypes.EXCEPINFO
struct EXCEPINFO_t4018283104_marshaled_com
{
	int16_t ___wCode_0;
	int16_t ___wReserved_1;
	Il2CppChar* ___bstrSource_2;
	Il2CppChar* ___bstrDescription_3;
	Il2CppChar* ___bstrHelpFile_4;
	int32_t ___dwHelpContext_5;
	intptr_t ___pvReserved_6;
	intptr_t ___pfnDeferredFillIn_7;
	int32_t ___scode_8;
};
#endif // EXCEPINFO_T4018283104_H
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
#ifndef STATSTG_T1180006254_H
#define STATSTG_T1180006254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.STATSTG
struct  STATSTG_t1180006254 
{
public:
	// System.String System.Runtime.InteropServices.ComTypes.STATSTG::pwcsName
	String_t* ___pwcsName_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::type
	int32_t ___type_1;
	// System.Int64 System.Runtime.InteropServices.ComTypes.STATSTG::cbSize
	int64_t ___cbSize_2;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::mtime
	FILETIME_t1200622595  ___mtime_3;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::ctime
	FILETIME_t1200622595  ___ctime_4;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::atime
	FILETIME_t1200622595  ___atime_5;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfMode
	int32_t ___grfMode_6;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfLocksSupported
	int32_t ___grfLocksSupported_7;
	// System.Guid System.Runtime.InteropServices.ComTypes.STATSTG::clsid
	Guid_t  ___clsid_8;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfStateBits
	int32_t ___grfStateBits_9;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::reserved
	int32_t ___reserved_10;

public:
	inline static int32_t get_offset_of_pwcsName_0() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___pwcsName_0)); }
	inline String_t* get_pwcsName_0() const { return ___pwcsName_0; }
	inline String_t** get_address_of_pwcsName_0() { return &___pwcsName_0; }
	inline void set_pwcsName_0(String_t* value)
	{
		___pwcsName_0 = value;
		Il2CppCodeGenWriteBarrier((&___pwcsName_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_cbSize_2() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___cbSize_2)); }
	inline int64_t get_cbSize_2() const { return ___cbSize_2; }
	inline int64_t* get_address_of_cbSize_2() { return &___cbSize_2; }
	inline void set_cbSize_2(int64_t value)
	{
		___cbSize_2 = value;
	}

	inline static int32_t get_offset_of_mtime_3() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___mtime_3)); }
	inline FILETIME_t1200622595  get_mtime_3() const { return ___mtime_3; }
	inline FILETIME_t1200622595 * get_address_of_mtime_3() { return &___mtime_3; }
	inline void set_mtime_3(FILETIME_t1200622595  value)
	{
		___mtime_3 = value;
	}

	inline static int32_t get_offset_of_ctime_4() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___ctime_4)); }
	inline FILETIME_t1200622595  get_ctime_4() const { return ___ctime_4; }
	inline FILETIME_t1200622595 * get_address_of_ctime_4() { return &___ctime_4; }
	inline void set_ctime_4(FILETIME_t1200622595  value)
	{
		___ctime_4 = value;
	}

	inline static int32_t get_offset_of_atime_5() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___atime_5)); }
	inline FILETIME_t1200622595  get_atime_5() const { return ___atime_5; }
	inline FILETIME_t1200622595 * get_address_of_atime_5() { return &___atime_5; }
	inline void set_atime_5(FILETIME_t1200622595  value)
	{
		___atime_5 = value;
	}

	inline static int32_t get_offset_of_grfMode_6() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___grfMode_6)); }
	inline int32_t get_grfMode_6() const { return ___grfMode_6; }
	inline int32_t* get_address_of_grfMode_6() { return &___grfMode_6; }
	inline void set_grfMode_6(int32_t value)
	{
		___grfMode_6 = value;
	}

	inline static int32_t get_offset_of_grfLocksSupported_7() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___grfLocksSupported_7)); }
	inline int32_t get_grfLocksSupported_7() const { return ___grfLocksSupported_7; }
	inline int32_t* get_address_of_grfLocksSupported_7() { return &___grfLocksSupported_7; }
	inline void set_grfLocksSupported_7(int32_t value)
	{
		___grfLocksSupported_7 = value;
	}

	inline static int32_t get_offset_of_clsid_8() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___clsid_8)); }
	inline Guid_t  get_clsid_8() const { return ___clsid_8; }
	inline Guid_t * get_address_of_clsid_8() { return &___clsid_8; }
	inline void set_clsid_8(Guid_t  value)
	{
		___clsid_8 = value;
	}

	inline static int32_t get_offset_of_grfStateBits_9() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___grfStateBits_9)); }
	inline int32_t get_grfStateBits_9() const { return ___grfStateBits_9; }
	inline int32_t* get_address_of_grfStateBits_9() { return &___grfStateBits_9; }
	inline void set_grfStateBits_9(int32_t value)
	{
		___grfStateBits_9 = value;
	}

	inline static int32_t get_offset_of_reserved_10() { return static_cast<int32_t>(offsetof(STATSTG_t1180006254, ___reserved_10)); }
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
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t1180006254_marshaled_pinvoke
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t1200622595  ___mtime_3;
	FILETIME_t1200622595  ___ctime_4;
	FILETIME_t1200622595  ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t  ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t1180006254_marshaled_com
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t1200622595  ___mtime_3;
	FILETIME_t1200622595  ___ctime_4;
	FILETIME_t1200622595  ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t  ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
#endif // STATSTG_T1180006254_H
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
#ifndef CER_T573022029_H
#define CER_T573022029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t573022029 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t573022029, ___value___1)); }
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
#endif // CER_T573022029_H
#ifndef CONSISTENCY_T4071665526_H
#define CONSISTENCY_T4071665526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t4071665526 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t4071665526, ___value___1)); }
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
#endif // CONSISTENCY_T4071665526_H
#ifndef BINDPTR_T947377522_H
#define BINDPTR_T947377522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.BINDPTR
struct  BINDPTR_t947377522 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.ComTypes.BINDPTR::lpfuncdesc
			intptr_t ___lpfuncdesc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___lpfuncdesc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.ComTypes.BINDPTR::lptcomp
			intptr_t ___lptcomp_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___lptcomp_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.ComTypes.BINDPTR::lpvardesc
			intptr_t ___lpvardesc_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___lpvardesc_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_lpfuncdesc_0() { return static_cast<int32_t>(offsetof(BINDPTR_t947377522, ___lpfuncdesc_0)); }
	inline intptr_t get_lpfuncdesc_0() const { return ___lpfuncdesc_0; }
	inline intptr_t* get_address_of_lpfuncdesc_0() { return &___lpfuncdesc_0; }
	inline void set_lpfuncdesc_0(intptr_t value)
	{
		___lpfuncdesc_0 = value;
	}

	inline static int32_t get_offset_of_lptcomp_1() { return static_cast<int32_t>(offsetof(BINDPTR_t947377522, ___lptcomp_1)); }
	inline intptr_t get_lptcomp_1() const { return ___lptcomp_1; }
	inline intptr_t* get_address_of_lptcomp_1() { return &___lptcomp_1; }
	inline void set_lptcomp_1(intptr_t value)
	{
		___lptcomp_1 = value;
	}

	inline static int32_t get_offset_of_lpvardesc_2() { return static_cast<int32_t>(offsetof(BINDPTR_t947377522, ___lpvardesc_2)); }
	inline intptr_t get_lpvardesc_2() const { return ___lpvardesc_2; }
	inline intptr_t* get_address_of_lpvardesc_2() { return &___lpvardesc_2; }
	inline void set_lpvardesc_2(intptr_t value)
	{
		___lpvardesc_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDPTR_T947377522_H
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
#ifndef CALLCONV_T145397880_H
#define CALLCONV_T145397880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.CALLCONV
struct  CALLCONV_t145397880 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.CALLCONV::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CALLCONV_t145397880, ___value___1)); }
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
#endif // CALLCONV_T145397880_H
#ifndef EXPORTEREVENTKIND_T2094490288_H
#define EXPORTEREVENTKIND_T2094490288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExporterEventKind
struct  ExporterEventKind_t2094490288 
{
public:
	// System.Int32 System.Runtime.InteropServices.ExporterEventKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExporterEventKind_t2094490288, ___value___1)); }
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
#endif // EXPORTEREVENTKIND_T2094490288_H
#ifndef BINDPTR_T2893609822_H
#define BINDPTR_T2893609822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BINDPTR
struct  BINDPTR_t2893609822 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.BINDPTR::lpfuncdesc
			intptr_t ___lpfuncdesc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___lpfuncdesc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.BINDPTR::lptcomp
			intptr_t ___lptcomp_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___lptcomp_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.BINDPTR::lpvardesc
			intptr_t ___lpvardesc_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___lpvardesc_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_lpfuncdesc_0() { return static_cast<int32_t>(offsetof(BINDPTR_t2893609822, ___lpfuncdesc_0)); }
	inline intptr_t get_lpfuncdesc_0() const { return ___lpfuncdesc_0; }
	inline intptr_t* get_address_of_lpfuncdesc_0() { return &___lpfuncdesc_0; }
	inline void set_lpfuncdesc_0(intptr_t value)
	{
		___lpfuncdesc_0 = value;
	}

	inline static int32_t get_offset_of_lptcomp_1() { return static_cast<int32_t>(offsetof(BINDPTR_t2893609822, ___lptcomp_1)); }
	inline intptr_t get_lptcomp_1() const { return ___lptcomp_1; }
	inline intptr_t* get_address_of_lptcomp_1() { return &___lptcomp_1; }
	inline void set_lptcomp_1(intptr_t value)
	{
		___lptcomp_1 = value;
	}

	inline static int32_t get_offset_of_lpvardesc_2() { return static_cast<int32_t>(offsetof(BINDPTR_t2893609822, ___lpvardesc_2)); }
	inline intptr_t get_lpvardesc_2() const { return ___lpvardesc_2; }
	inline intptr_t* get_address_of_lpvardesc_2() { return &___lpvardesc_2; }
	inline void set_lpvardesc_2(intptr_t value)
	{
		___lpvardesc_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDPTR_T2893609822_H
#ifndef IMPLTYPEFLAGS_T2580827010_H
#define IMPLTYPEFLAGS_T2580827010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.IMPLTYPEFLAGS
struct  IMPLTYPEFLAGS_t2580827010 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.IMPLTYPEFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMPLTYPEFLAGS_t2580827010, ___value___1)); }
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
#endif // IMPLTYPEFLAGS_T2580827010_H
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
#ifndef VARFLAGS_T4167126199_H
#define VARFLAGS_T4167126199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.VARFLAGS
struct  VARFLAGS_t4167126199 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.VARFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VARFLAGS_t4167126199, ___value___1)); }
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
#endif // VARFLAGS_T4167126199_H
#ifndef ASSEMBLYREGISTRATIONFLAGS_T1865906142_H
#define ASSEMBLYREGISTRATIONFLAGS_T1865906142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.AssemblyRegistrationFlags
struct  AssemblyRegistrationFlags_t1865906142 
{
public:
	// System.Int32 System.Runtime.InteropServices.AssemblyRegistrationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyRegistrationFlags_t1865906142, ___value___1)); }
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
#endif // ASSEMBLYREGISTRATIONFLAGS_T1865906142_H
#ifndef LIBFLAGS_T3518176881_H
#define LIBFLAGS_T3518176881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.LIBFLAGS
struct  LIBFLAGS_t3518176881 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.LIBFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LIBFLAGS_t3518176881, ___value___1)); }
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
#endif // LIBFLAGS_T3518176881_H
#ifndef VARKIND_T2343753751_H
#define VARKIND_T2343753751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.VARKIND
struct  VARKIND_t2343753751 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.VARKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VARKIND_t2343753751, ___value___1)); }
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
#endif // VARKIND_T2343753751_H
#ifndef SYSKIND_T2151735481_H
#define SYSKIND_T2151735481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.SYSKIND
struct  SYSKIND_t2151735481 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.SYSKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SYSKIND_t2151735481, ___value___1)); }
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
#endif // SYSKIND_T2151735481_H
#ifndef TYPEDESC_T3854979023_H
#define TYPEDESC_T3854979023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.TYPEDESC
struct  TYPEDESC_t3854979023 
{
public:
	// System.IntPtr System.Runtime.InteropServices.ComTypes.TYPEDESC::lpValue
	intptr_t ___lpValue_0;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEDESC::vt
	int16_t ___vt_1;

public:
	inline static int32_t get_offset_of_lpValue_0() { return static_cast<int32_t>(offsetof(TYPEDESC_t3854979023, ___lpValue_0)); }
	inline intptr_t get_lpValue_0() const { return ___lpValue_0; }
	inline intptr_t* get_address_of_lpValue_0() { return &___lpValue_0; }
	inline void set_lpValue_0(intptr_t value)
	{
		___lpValue_0 = value;
	}

	inline static int32_t get_offset_of_vt_1() { return static_cast<int32_t>(offsetof(TYPEDESC_t3854979023, ___vt_1)); }
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
#endif // TYPEDESC_T3854979023_H
#ifndef TYPEFLAGS_T536984397_H
#define TYPEFLAGS_T536984397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.TYPEFLAGS
struct  TYPEFLAGS_t536984397 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPEFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TYPEFLAGS_t536984397, ___value___1)); }
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
#endif // TYPEFLAGS_T536984397_H
#ifndef TYPEKIND_T2684547567_H
#define TYPEKIND_T2684547567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.TYPEKIND
struct  TYPEKIND_t2684547567 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPEKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TYPEKIND_t2684547567, ___value___1)); }
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
#endif // TYPEKIND_T2684547567_H
#ifndef DESCUNION_T3801796303_H
#define DESCUNION_T3801796303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.VARDESC/DESCUNION
struct  DESCUNION_t3801796303 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Runtime.InteropServices.ComTypes.VARDESC/DESCUNION::lpvarValue
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
			// System.Int32 System.Runtime.InteropServices.ComTypes.VARDESC/DESCUNION::oInst
			int32_t ___oInst_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___oInst_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_lpvarValue_0() { return static_cast<int32_t>(offsetof(DESCUNION_t3801796303, ___lpvarValue_0)); }
	inline intptr_t get_lpvarValue_0() const { return ___lpvarValue_0; }
	inline intptr_t* get_address_of_lpvarValue_0() { return &___lpvarValue_0; }
	inline void set_lpvarValue_0(intptr_t value)
	{
		___lpvarValue_0 = value;
	}

	inline static int32_t get_offset_of_oInst_1() { return static_cast<int32_t>(offsetof(DESCUNION_t3801796303, ___oInst_1)); }
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
#endif // DESCUNION_T3801796303_H
#ifndef PARAMFLAG_T1610111164_H
#define PARAMFLAG_T1610111164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.PARAMFLAG
struct  PARAMFLAG_t1610111164 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.PARAMFLAG::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PARAMFLAG_t1610111164, ___value___1)); }
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
#endif // PARAMFLAG_T1610111164_H
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
#ifndef FUNCKIND_T2251532099_H
#define FUNCKIND_T2251532099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.FUNCKIND
struct  FUNCKIND_t2251532099 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.FUNCKIND::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FUNCKIND_t2251532099, ___value___1)); }
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
#endif // FUNCKIND_T2251532099_H
#ifndef CLASSINTERFACETYPE_T4029497327_H
#define CLASSINTERFACETYPE_T4029497327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t4029497327 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t4029497327, ___value___1)); }
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
#endif // CLASSINTERFACETYPE_T4029497327_H
#ifndef FUNCFLAGS_T3156981464_H
#define FUNCFLAGS_T3156981464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.FUNCFLAGS
struct  FUNCFLAGS_t3156981464 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.FUNCFLAGS::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FUNCFLAGS_t3156981464, ___value___1)); }
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
#endif // FUNCFLAGS_T3156981464_H
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
#ifndef IDLFLAG_T947767676_H
#define IDLFLAG_T947767676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.IDLFLAG
struct  IDLFLAG_t947767676 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.IDLFLAG::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IDLFLAG_t947767676, ___value___1)); }
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
#endif // IDLFLAG_T947767676_H
#ifndef CALLCONV_T1230382893_H
#define CALLCONV_T1230382893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CALLCONV
struct  CALLCONV_t1230382893 
{
public:
	// System.Int32 System.Runtime.InteropServices.CALLCONV::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CALLCONV_t1230382893, ___value___1)); }
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
#endif // CALLCONV_T1230382893_H
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
#ifndef TYPELIBATTR_T928361529_H
#define TYPELIBATTR_T928361529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.TYPELIBATTR
struct  TYPELIBATTR_t928361529 
{
public:
	// System.Guid System.Runtime.InteropServices.ComTypes.TYPELIBATTR::guid
	Guid_t  ___guid_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPELIBATTR::lcid
	int32_t ___lcid_1;
	// System.Runtime.InteropServices.ComTypes.SYSKIND System.Runtime.InteropServices.ComTypes.TYPELIBATTR::syskind
	int32_t ___syskind_2;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPELIBATTR::wMajorVerNum
	int16_t ___wMajorVerNum_3;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPELIBATTR::wMinorVerNum
	int16_t ___wMinorVerNum_4;
	// System.Runtime.InteropServices.ComTypes.LIBFLAGS System.Runtime.InteropServices.ComTypes.TYPELIBATTR::wLibFlags
	int32_t ___wLibFlags_5;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t928361529, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_lcid_1() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t928361529, ___lcid_1)); }
	inline int32_t get_lcid_1() const { return ___lcid_1; }
	inline int32_t* get_address_of_lcid_1() { return &___lcid_1; }
	inline void set_lcid_1(int32_t value)
	{
		___lcid_1 = value;
	}

	inline static int32_t get_offset_of_syskind_2() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t928361529, ___syskind_2)); }
	inline int32_t get_syskind_2() const { return ___syskind_2; }
	inline int32_t* get_address_of_syskind_2() { return &___syskind_2; }
	inline void set_syskind_2(int32_t value)
	{
		___syskind_2 = value;
	}

	inline static int32_t get_offset_of_wMajorVerNum_3() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t928361529, ___wMajorVerNum_3)); }
	inline int16_t get_wMajorVerNum_3() const { return ___wMajorVerNum_3; }
	inline int16_t* get_address_of_wMajorVerNum_3() { return &___wMajorVerNum_3; }
	inline void set_wMajorVerNum_3(int16_t value)
	{
		___wMajorVerNum_3 = value;
	}

	inline static int32_t get_offset_of_wMinorVerNum_4() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t928361529, ___wMinorVerNum_4)); }
	inline int16_t get_wMinorVerNum_4() const { return ___wMinorVerNum_4; }
	inline int16_t* get_address_of_wMinorVerNum_4() { return &___wMinorVerNum_4; }
	inline void set_wMinorVerNum_4(int16_t value)
	{
		___wMinorVerNum_4 = value;
	}

	inline static int32_t get_offset_of_wLibFlags_5() { return static_cast<int32_t>(offsetof(TYPELIBATTR_t928361529, ___wLibFlags_5)); }
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
#endif // TYPELIBATTR_T928361529_H
#ifndef IDLDESC_T3540229105_H
#define IDLDESC_T3540229105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.IDLDESC
struct  IDLDESC_t3540229105 
{
public:
	// System.IntPtr System.Runtime.InteropServices.ComTypes.IDLDESC::dwReserved
	intptr_t ___dwReserved_0;
	// System.Runtime.InteropServices.ComTypes.IDLFLAG System.Runtime.InteropServices.ComTypes.IDLDESC::wIDLFlags
	int32_t ___wIDLFlags_1;

public:
	inline static int32_t get_offset_of_dwReserved_0() { return static_cast<int32_t>(offsetof(IDLDESC_t3540229105, ___dwReserved_0)); }
	inline intptr_t get_dwReserved_0() const { return ___dwReserved_0; }
	inline intptr_t* get_address_of_dwReserved_0() { return &___dwReserved_0; }
	inline void set_dwReserved_0(intptr_t value)
	{
		___dwReserved_0 = value;
	}

	inline static int32_t get_offset_of_wIDLFlags_1() { return static_cast<int32_t>(offsetof(IDLDESC_t3540229105, ___wIDLFlags_1)); }
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
#endif // IDLDESC_T3540229105_H
#ifndef CLASSINTERFACEATTRIBUTE_T2274790349_H
#define CLASSINTERFACEATTRIBUTE_T2274790349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2274790349  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2274790349, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2274790349_H
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
#ifndef COMEXCEPTION_T1620828383_H
#define COMEXCEPTION_T1620828383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1620828383  : public ExternalException_t3544951457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1620828383_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T502331440_H
#define RELIABILITYCONTRACTATTRIBUTE_T502331440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t502331440  : public Attribute_t861562559
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t502331440, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t502331440, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T502331440_H
#ifndef PARAMDESC_T1970356037_H
#define PARAMDESC_T1970356037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.PARAMDESC
struct  PARAMDESC_t1970356037 
{
public:
	// System.IntPtr System.Runtime.InteropServices.ComTypes.PARAMDESC::lpVarValue
	intptr_t ___lpVarValue_0;
	// System.Runtime.InteropServices.ComTypes.PARAMFLAG System.Runtime.InteropServices.ComTypes.PARAMDESC::wParamFlags
	int32_t ___wParamFlags_1;

public:
	inline static int32_t get_offset_of_lpVarValue_0() { return static_cast<int32_t>(offsetof(PARAMDESC_t1970356037, ___lpVarValue_0)); }
	inline intptr_t get_lpVarValue_0() const { return ___lpVarValue_0; }
	inline intptr_t* get_address_of_lpVarValue_0() { return &___lpVarValue_0; }
	inline void set_lpVarValue_0(intptr_t value)
	{
		___lpVarValue_0 = value;
	}

	inline static int32_t get_offset_of_wParamFlags_1() { return static_cast<int32_t>(offsetof(PARAMDESC_t1970356037, ___wParamFlags_1)); }
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
#endif // PARAMDESC_T1970356037_H
#ifndef DESCUNION_T1708300132_H
#define DESCUNION_T1708300132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.ELEMDESC/DESCUNION
struct  DESCUNION_t1708300132 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Runtime.InteropServices.ComTypes.IDLDESC System.Runtime.InteropServices.ComTypes.ELEMDESC/DESCUNION::idldesc
			IDLDESC_t3540229105  ___idldesc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			IDLDESC_t3540229105  ___idldesc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Runtime.InteropServices.ComTypes.PARAMDESC System.Runtime.InteropServices.ComTypes.ELEMDESC/DESCUNION::paramdesc
			PARAMDESC_t1970356037  ___paramdesc_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			PARAMDESC_t1970356037  ___paramdesc_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_idldesc_0() { return static_cast<int32_t>(offsetof(DESCUNION_t1708300132, ___idldesc_0)); }
	inline IDLDESC_t3540229105  get_idldesc_0() const { return ___idldesc_0; }
	inline IDLDESC_t3540229105 * get_address_of_idldesc_0() { return &___idldesc_0; }
	inline void set_idldesc_0(IDLDESC_t3540229105  value)
	{
		___idldesc_0 = value;
	}

	inline static int32_t get_offset_of_paramdesc_1() { return static_cast<int32_t>(offsetof(DESCUNION_t1708300132, ___paramdesc_1)); }
	inline PARAMDESC_t1970356037  get_paramdesc_1() const { return ___paramdesc_1; }
	inline PARAMDESC_t1970356037 * get_address_of_paramdesc_1() { return &___paramdesc_1; }
	inline void set_paramdesc_1(PARAMDESC_t1970356037  value)
	{
		___paramdesc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCUNION_T1708300132_H
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
#ifndef TYPEATTR_T2585690119_H
#define TYPEATTR_T2585690119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.TYPEATTR
struct  TYPEATTR_t2585690119 
{
public:
	// System.Guid System.Runtime.InteropServices.ComTypes.TYPEATTR::guid
	Guid_t  ___guid_1;
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPEATTR::lcid
	int32_t ___lcid_2;
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPEATTR::dwReserved
	int32_t ___dwReserved_3;
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPEATTR::memidConstructor
	int32_t ___memidConstructor_4;
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPEATTR::memidDestructor
	int32_t ___memidDestructor_5;
	// System.IntPtr System.Runtime.InteropServices.ComTypes.TYPEATTR::lpstrSchema
	intptr_t ___lpstrSchema_6;
	// System.Int32 System.Runtime.InteropServices.ComTypes.TYPEATTR::cbSizeInstance
	int32_t ___cbSizeInstance_7;
	// System.Runtime.InteropServices.ComTypes.TYPEKIND System.Runtime.InteropServices.ComTypes.TYPEATTR::typekind
	int32_t ___typekind_8;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEATTR::cFuncs
	int16_t ___cFuncs_9;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEATTR::cVars
	int16_t ___cVars_10;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEATTR::cImplTypes
	int16_t ___cImplTypes_11;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEATTR::cbSizeVft
	int16_t ___cbSizeVft_12;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEATTR::cbAlignment
	int16_t ___cbAlignment_13;
	// System.Runtime.InteropServices.ComTypes.TYPEFLAGS System.Runtime.InteropServices.ComTypes.TYPEATTR::wTypeFlags
	int32_t ___wTypeFlags_14;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEATTR::wMajorVerNum
	int16_t ___wMajorVerNum_15;
	// System.Int16 System.Runtime.InteropServices.ComTypes.TYPEATTR::wMinorVerNum
	int16_t ___wMinorVerNum_16;
	// System.Runtime.InteropServices.ComTypes.TYPEDESC System.Runtime.InteropServices.ComTypes.TYPEATTR::tdescAlias
	TYPEDESC_t3854979023  ___tdescAlias_17;
	// System.Runtime.InteropServices.ComTypes.IDLDESC System.Runtime.InteropServices.ComTypes.TYPEATTR::idldescType
	IDLDESC_t3540229105  ___idldescType_18;

public:
	inline static int32_t get_offset_of_guid_1() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___guid_1)); }
	inline Guid_t  get_guid_1() const { return ___guid_1; }
	inline Guid_t * get_address_of_guid_1() { return &___guid_1; }
	inline void set_guid_1(Guid_t  value)
	{
		___guid_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_dwReserved_3() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___dwReserved_3)); }
	inline int32_t get_dwReserved_3() const { return ___dwReserved_3; }
	inline int32_t* get_address_of_dwReserved_3() { return &___dwReserved_3; }
	inline void set_dwReserved_3(int32_t value)
	{
		___dwReserved_3 = value;
	}

	inline static int32_t get_offset_of_memidConstructor_4() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___memidConstructor_4)); }
	inline int32_t get_memidConstructor_4() const { return ___memidConstructor_4; }
	inline int32_t* get_address_of_memidConstructor_4() { return &___memidConstructor_4; }
	inline void set_memidConstructor_4(int32_t value)
	{
		___memidConstructor_4 = value;
	}

	inline static int32_t get_offset_of_memidDestructor_5() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___memidDestructor_5)); }
	inline int32_t get_memidDestructor_5() const { return ___memidDestructor_5; }
	inline int32_t* get_address_of_memidDestructor_5() { return &___memidDestructor_5; }
	inline void set_memidDestructor_5(int32_t value)
	{
		___memidDestructor_5 = value;
	}

	inline static int32_t get_offset_of_lpstrSchema_6() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___lpstrSchema_6)); }
	inline intptr_t get_lpstrSchema_6() const { return ___lpstrSchema_6; }
	inline intptr_t* get_address_of_lpstrSchema_6() { return &___lpstrSchema_6; }
	inline void set_lpstrSchema_6(intptr_t value)
	{
		___lpstrSchema_6 = value;
	}

	inline static int32_t get_offset_of_cbSizeInstance_7() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___cbSizeInstance_7)); }
	inline int32_t get_cbSizeInstance_7() const { return ___cbSizeInstance_7; }
	inline int32_t* get_address_of_cbSizeInstance_7() { return &___cbSizeInstance_7; }
	inline void set_cbSizeInstance_7(int32_t value)
	{
		___cbSizeInstance_7 = value;
	}

	inline static int32_t get_offset_of_typekind_8() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___typekind_8)); }
	inline int32_t get_typekind_8() const { return ___typekind_8; }
	inline int32_t* get_address_of_typekind_8() { return &___typekind_8; }
	inline void set_typekind_8(int32_t value)
	{
		___typekind_8 = value;
	}

	inline static int32_t get_offset_of_cFuncs_9() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___cFuncs_9)); }
	inline int16_t get_cFuncs_9() const { return ___cFuncs_9; }
	inline int16_t* get_address_of_cFuncs_9() { return &___cFuncs_9; }
	inline void set_cFuncs_9(int16_t value)
	{
		___cFuncs_9 = value;
	}

	inline static int32_t get_offset_of_cVars_10() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___cVars_10)); }
	inline int16_t get_cVars_10() const { return ___cVars_10; }
	inline int16_t* get_address_of_cVars_10() { return &___cVars_10; }
	inline void set_cVars_10(int16_t value)
	{
		___cVars_10 = value;
	}

	inline static int32_t get_offset_of_cImplTypes_11() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___cImplTypes_11)); }
	inline int16_t get_cImplTypes_11() const { return ___cImplTypes_11; }
	inline int16_t* get_address_of_cImplTypes_11() { return &___cImplTypes_11; }
	inline void set_cImplTypes_11(int16_t value)
	{
		___cImplTypes_11 = value;
	}

	inline static int32_t get_offset_of_cbSizeVft_12() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___cbSizeVft_12)); }
	inline int16_t get_cbSizeVft_12() const { return ___cbSizeVft_12; }
	inline int16_t* get_address_of_cbSizeVft_12() { return &___cbSizeVft_12; }
	inline void set_cbSizeVft_12(int16_t value)
	{
		___cbSizeVft_12 = value;
	}

	inline static int32_t get_offset_of_cbAlignment_13() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___cbAlignment_13)); }
	inline int16_t get_cbAlignment_13() const { return ___cbAlignment_13; }
	inline int16_t* get_address_of_cbAlignment_13() { return &___cbAlignment_13; }
	inline void set_cbAlignment_13(int16_t value)
	{
		___cbAlignment_13 = value;
	}

	inline static int32_t get_offset_of_wTypeFlags_14() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___wTypeFlags_14)); }
	inline int32_t get_wTypeFlags_14() const { return ___wTypeFlags_14; }
	inline int32_t* get_address_of_wTypeFlags_14() { return &___wTypeFlags_14; }
	inline void set_wTypeFlags_14(int32_t value)
	{
		___wTypeFlags_14 = value;
	}

	inline static int32_t get_offset_of_wMajorVerNum_15() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___wMajorVerNum_15)); }
	inline int16_t get_wMajorVerNum_15() const { return ___wMajorVerNum_15; }
	inline int16_t* get_address_of_wMajorVerNum_15() { return &___wMajorVerNum_15; }
	inline void set_wMajorVerNum_15(int16_t value)
	{
		___wMajorVerNum_15 = value;
	}

	inline static int32_t get_offset_of_wMinorVerNum_16() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___wMinorVerNum_16)); }
	inline int16_t get_wMinorVerNum_16() const { return ___wMinorVerNum_16; }
	inline int16_t* get_address_of_wMinorVerNum_16() { return &___wMinorVerNum_16; }
	inline void set_wMinorVerNum_16(int16_t value)
	{
		___wMinorVerNum_16 = value;
	}

	inline static int32_t get_offset_of_tdescAlias_17() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___tdescAlias_17)); }
	inline TYPEDESC_t3854979023  get_tdescAlias_17() const { return ___tdescAlias_17; }
	inline TYPEDESC_t3854979023 * get_address_of_tdescAlias_17() { return &___tdescAlias_17; }
	inline void set_tdescAlias_17(TYPEDESC_t3854979023  value)
	{
		___tdescAlias_17 = value;
	}

	inline static int32_t get_offset_of_idldescType_18() { return static_cast<int32_t>(offsetof(TYPEATTR_t2585690119, ___idldescType_18)); }
	inline IDLDESC_t3540229105  get_idldescType_18() const { return ___idldescType_18; }
	inline IDLDESC_t3540229105 * get_address_of_idldescType_18() { return &___idldescType_18; }
	inline void set_idldescType_18(IDLDESC_t3540229105  value)
	{
		___idldescType_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEATTR_T2585690119_H
#ifndef ELEMDESC_T1253873_H
#define ELEMDESC_T1253873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.ELEMDESC
struct  ELEMDESC_t1253873 
{
public:
	// System.Runtime.InteropServices.ComTypes.TYPEDESC System.Runtime.InteropServices.ComTypes.ELEMDESC::tdesc
	TYPEDESC_t3854979023  ___tdesc_0;
	// System.Runtime.InteropServices.ComTypes.ELEMDESC/DESCUNION System.Runtime.InteropServices.ComTypes.ELEMDESC::desc
	DESCUNION_t1708300132  ___desc_1;

public:
	inline static int32_t get_offset_of_tdesc_0() { return static_cast<int32_t>(offsetof(ELEMDESC_t1253873, ___tdesc_0)); }
	inline TYPEDESC_t3854979023  get_tdesc_0() const { return ___tdesc_0; }
	inline TYPEDESC_t3854979023 * get_address_of_tdesc_0() { return &___tdesc_0; }
	inline void set_tdesc_0(TYPEDESC_t3854979023  value)
	{
		___tdesc_0 = value;
	}

	inline static int32_t get_offset_of_desc_1() { return static_cast<int32_t>(offsetof(ELEMDESC_t1253873, ___desc_1)); }
	inline DESCUNION_t1708300132  get_desc_1() const { return ___desc_1; }
	inline DESCUNION_t1708300132 * get_address_of_desc_1() { return &___desc_1; }
	inline void set_desc_1(DESCUNION_t1708300132  value)
	{
		___desc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMDESC_T1253873_H
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
#ifndef VARDESC_T1273526866_H
#define VARDESC_T1273526866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.VARDESC
struct  VARDESC_t1273526866 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.VARDESC::memid
	int32_t ___memid_0;
	// System.String System.Runtime.InteropServices.ComTypes.VARDESC::lpstrSchema
	String_t* ___lpstrSchema_1;
	// System.Runtime.InteropServices.ComTypes.VARDESC/DESCUNION System.Runtime.InteropServices.ComTypes.VARDESC::desc
	DESCUNION_t3801796303  ___desc_2;
	// System.Runtime.InteropServices.ComTypes.ELEMDESC System.Runtime.InteropServices.ComTypes.VARDESC::elemdescVar
	ELEMDESC_t1253873  ___elemdescVar_3;
	// System.Int16 System.Runtime.InteropServices.ComTypes.VARDESC::wVarFlags
	int16_t ___wVarFlags_4;
	// System.Runtime.InteropServices.ComTypes.VARKIND System.Runtime.InteropServices.ComTypes.VARDESC::varkind
	int32_t ___varkind_5;

public:
	inline static int32_t get_offset_of_memid_0() { return static_cast<int32_t>(offsetof(VARDESC_t1273526866, ___memid_0)); }
	inline int32_t get_memid_0() const { return ___memid_0; }
	inline int32_t* get_address_of_memid_0() { return &___memid_0; }
	inline void set_memid_0(int32_t value)
	{
		___memid_0 = value;
	}

	inline static int32_t get_offset_of_lpstrSchema_1() { return static_cast<int32_t>(offsetof(VARDESC_t1273526866, ___lpstrSchema_1)); }
	inline String_t* get_lpstrSchema_1() const { return ___lpstrSchema_1; }
	inline String_t** get_address_of_lpstrSchema_1() { return &___lpstrSchema_1; }
	inline void set_lpstrSchema_1(String_t* value)
	{
		___lpstrSchema_1 = value;
		Il2CppCodeGenWriteBarrier((&___lpstrSchema_1), value);
	}

	inline static int32_t get_offset_of_desc_2() { return static_cast<int32_t>(offsetof(VARDESC_t1273526866, ___desc_2)); }
	inline DESCUNION_t3801796303  get_desc_2() const { return ___desc_2; }
	inline DESCUNION_t3801796303 * get_address_of_desc_2() { return &___desc_2; }
	inline void set_desc_2(DESCUNION_t3801796303  value)
	{
		___desc_2 = value;
	}

	inline static int32_t get_offset_of_elemdescVar_3() { return static_cast<int32_t>(offsetof(VARDESC_t1273526866, ___elemdescVar_3)); }
	inline ELEMDESC_t1253873  get_elemdescVar_3() const { return ___elemdescVar_3; }
	inline ELEMDESC_t1253873 * get_address_of_elemdescVar_3() { return &___elemdescVar_3; }
	inline void set_elemdescVar_3(ELEMDESC_t1253873  value)
	{
		___elemdescVar_3 = value;
	}

	inline static int32_t get_offset_of_wVarFlags_4() { return static_cast<int32_t>(offsetof(VARDESC_t1273526866, ___wVarFlags_4)); }
	inline int16_t get_wVarFlags_4() const { return ___wVarFlags_4; }
	inline int16_t* get_address_of_wVarFlags_4() { return &___wVarFlags_4; }
	inline void set_wVarFlags_4(int16_t value)
	{
		___wVarFlags_4 = value;
	}

	inline static int32_t get_offset_of_varkind_5() { return static_cast<int32_t>(offsetof(VARDESC_t1273526866, ___varkind_5)); }
	inline int32_t get_varkind_5() const { return ___varkind_5; }
	inline int32_t* get_address_of_varkind_5() { return &___varkind_5; }
	inline void set_varkind_5(int32_t value)
	{
		___varkind_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ComTypes.VARDESC
struct VARDESC_t1273526866_marshaled_pinvoke
{
	int32_t ___memid_0;
	Il2CppChar* ___lpstrSchema_1;
	DESCUNION_t3801796303  ___desc_2;
	ELEMDESC_t1253873  ___elemdescVar_3;
	int16_t ___wVarFlags_4;
	int32_t ___varkind_5;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ComTypes.VARDESC
struct VARDESC_t1273526866_marshaled_com
{
	int32_t ___memid_0;
	Il2CppChar* ___lpstrSchema_1;
	DESCUNION_t3801796303  ___desc_2;
	ELEMDESC_t1253873  ___elemdescVar_3;
	int16_t ___wVarFlags_4;
	int32_t ___varkind_5;
};
#endif // VARDESC_T1273526866_H
#ifndef FUNCDESC_T1627495042_H
#define FUNCDESC_T1627495042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FUNCDESC
struct  FUNCDESC_t1627495042 
{
public:
	// System.Int32 System.Runtime.InteropServices.FUNCDESC::memid
	int32_t ___memid_0;
	// System.IntPtr System.Runtime.InteropServices.FUNCDESC::lprgscode
	intptr_t ___lprgscode_1;
	// System.IntPtr System.Runtime.InteropServices.FUNCDESC::lprgelemdescParam
	intptr_t ___lprgelemdescParam_2;
	// System.Runtime.InteropServices.FUNCKIND System.Runtime.InteropServices.FUNCDESC::funckind
	int32_t ___funckind_3;
	// System.Runtime.InteropServices.INVOKEKIND System.Runtime.InteropServices.FUNCDESC::invkind
	int32_t ___invkind_4;
	// System.Runtime.InteropServices.CALLCONV System.Runtime.InteropServices.FUNCDESC::callconv
	int32_t ___callconv_5;
	// System.Int16 System.Runtime.InteropServices.FUNCDESC::cParams
	int16_t ___cParams_6;
	// System.Int16 System.Runtime.InteropServices.FUNCDESC::cParamsOpt
	int16_t ___cParamsOpt_7;
	// System.Int16 System.Runtime.InteropServices.FUNCDESC::oVft
	int16_t ___oVft_8;
	// System.Int16 System.Runtime.InteropServices.FUNCDESC::cScodes
	int16_t ___cScodes_9;
	// System.Runtime.InteropServices.ELEMDESC System.Runtime.InteropServices.FUNCDESC::elemdescFunc
	ELEMDESC_t3075712643  ___elemdescFunc_10;
	// System.Int16 System.Runtime.InteropServices.FUNCDESC::wFuncFlags
	int16_t ___wFuncFlags_11;

public:
	inline static int32_t get_offset_of_memid_0() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___memid_0)); }
	inline int32_t get_memid_0() const { return ___memid_0; }
	inline int32_t* get_address_of_memid_0() { return &___memid_0; }
	inline void set_memid_0(int32_t value)
	{
		___memid_0 = value;
	}

	inline static int32_t get_offset_of_lprgscode_1() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___lprgscode_1)); }
	inline intptr_t get_lprgscode_1() const { return ___lprgscode_1; }
	inline intptr_t* get_address_of_lprgscode_1() { return &___lprgscode_1; }
	inline void set_lprgscode_1(intptr_t value)
	{
		___lprgscode_1 = value;
	}

	inline static int32_t get_offset_of_lprgelemdescParam_2() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___lprgelemdescParam_2)); }
	inline intptr_t get_lprgelemdescParam_2() const { return ___lprgelemdescParam_2; }
	inline intptr_t* get_address_of_lprgelemdescParam_2() { return &___lprgelemdescParam_2; }
	inline void set_lprgelemdescParam_2(intptr_t value)
	{
		___lprgelemdescParam_2 = value;
	}

	inline static int32_t get_offset_of_funckind_3() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___funckind_3)); }
	inline int32_t get_funckind_3() const { return ___funckind_3; }
	inline int32_t* get_address_of_funckind_3() { return &___funckind_3; }
	inline void set_funckind_3(int32_t value)
	{
		___funckind_3 = value;
	}

	inline static int32_t get_offset_of_invkind_4() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___invkind_4)); }
	inline int32_t get_invkind_4() const { return ___invkind_4; }
	inline int32_t* get_address_of_invkind_4() { return &___invkind_4; }
	inline void set_invkind_4(int32_t value)
	{
		___invkind_4 = value;
	}

	inline static int32_t get_offset_of_callconv_5() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___callconv_5)); }
	inline int32_t get_callconv_5() const { return ___callconv_5; }
	inline int32_t* get_address_of_callconv_5() { return &___callconv_5; }
	inline void set_callconv_5(int32_t value)
	{
		___callconv_5 = value;
	}

	inline static int32_t get_offset_of_cParams_6() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___cParams_6)); }
	inline int16_t get_cParams_6() const { return ___cParams_6; }
	inline int16_t* get_address_of_cParams_6() { return &___cParams_6; }
	inline void set_cParams_6(int16_t value)
	{
		___cParams_6 = value;
	}

	inline static int32_t get_offset_of_cParamsOpt_7() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___cParamsOpt_7)); }
	inline int16_t get_cParamsOpt_7() const { return ___cParamsOpt_7; }
	inline int16_t* get_address_of_cParamsOpt_7() { return &___cParamsOpt_7; }
	inline void set_cParamsOpt_7(int16_t value)
	{
		___cParamsOpt_7 = value;
	}

	inline static int32_t get_offset_of_oVft_8() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___oVft_8)); }
	inline int16_t get_oVft_8() const { return ___oVft_8; }
	inline int16_t* get_address_of_oVft_8() { return &___oVft_8; }
	inline void set_oVft_8(int16_t value)
	{
		___oVft_8 = value;
	}

	inline static int32_t get_offset_of_cScodes_9() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___cScodes_9)); }
	inline int16_t get_cScodes_9() const { return ___cScodes_9; }
	inline int16_t* get_address_of_cScodes_9() { return &___cScodes_9; }
	inline void set_cScodes_9(int16_t value)
	{
		___cScodes_9 = value;
	}

	inline static int32_t get_offset_of_elemdescFunc_10() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___elemdescFunc_10)); }
	inline ELEMDESC_t3075712643  get_elemdescFunc_10() const { return ___elemdescFunc_10; }
	inline ELEMDESC_t3075712643 * get_address_of_elemdescFunc_10() { return &___elemdescFunc_10; }
	inline void set_elemdescFunc_10(ELEMDESC_t3075712643  value)
	{
		___elemdescFunc_10 = value;
	}

	inline static int32_t get_offset_of_wFuncFlags_11() { return static_cast<int32_t>(offsetof(FUNCDESC_t1627495042, ___wFuncFlags_11)); }
	inline int16_t get_wFuncFlags_11() const { return ___wFuncFlags_11; }
	inline int16_t* get_address_of_wFuncFlags_11() { return &___wFuncFlags_11; }
	inline void set_wFuncFlags_11(int16_t value)
	{
		___wFuncFlags_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCDESC_T1627495042_H
#ifndef FUNCDESC_T3830931527_H
#define FUNCDESC_T3830931527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.FUNCDESC
struct  FUNCDESC_t3830931527 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.FUNCDESC::memid
	int32_t ___memid_0;
	// System.IntPtr System.Runtime.InteropServices.ComTypes.FUNCDESC::lprgscode
	intptr_t ___lprgscode_1;
	// System.IntPtr System.Runtime.InteropServices.ComTypes.FUNCDESC::lprgelemdescParam
	intptr_t ___lprgelemdescParam_2;
	// System.Runtime.InteropServices.ComTypes.FUNCKIND System.Runtime.InteropServices.ComTypes.FUNCDESC::funckind
	int32_t ___funckind_3;
	// System.Runtime.InteropServices.ComTypes.INVOKEKIND System.Runtime.InteropServices.ComTypes.FUNCDESC::invkind
	int32_t ___invkind_4;
	// System.Runtime.InteropServices.ComTypes.CALLCONV System.Runtime.InteropServices.ComTypes.FUNCDESC::callconv
	int32_t ___callconv_5;
	// System.Int16 System.Runtime.InteropServices.ComTypes.FUNCDESC::cParams
	int16_t ___cParams_6;
	// System.Int16 System.Runtime.InteropServices.ComTypes.FUNCDESC::cParamsOpt
	int16_t ___cParamsOpt_7;
	// System.Int16 System.Runtime.InteropServices.ComTypes.FUNCDESC::oVft
	int16_t ___oVft_8;
	// System.Int16 System.Runtime.InteropServices.ComTypes.FUNCDESC::cScodes
	int16_t ___cScodes_9;
	// System.Runtime.InteropServices.ComTypes.ELEMDESC System.Runtime.InteropServices.ComTypes.FUNCDESC::elemdescFunc
	ELEMDESC_t1253873  ___elemdescFunc_10;
	// System.Int16 System.Runtime.InteropServices.ComTypes.FUNCDESC::wFuncFlags
	int16_t ___wFuncFlags_11;

public:
	inline static int32_t get_offset_of_memid_0() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___memid_0)); }
	inline int32_t get_memid_0() const { return ___memid_0; }
	inline int32_t* get_address_of_memid_0() { return &___memid_0; }
	inline void set_memid_0(int32_t value)
	{
		___memid_0 = value;
	}

	inline static int32_t get_offset_of_lprgscode_1() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___lprgscode_1)); }
	inline intptr_t get_lprgscode_1() const { return ___lprgscode_1; }
	inline intptr_t* get_address_of_lprgscode_1() { return &___lprgscode_1; }
	inline void set_lprgscode_1(intptr_t value)
	{
		___lprgscode_1 = value;
	}

	inline static int32_t get_offset_of_lprgelemdescParam_2() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___lprgelemdescParam_2)); }
	inline intptr_t get_lprgelemdescParam_2() const { return ___lprgelemdescParam_2; }
	inline intptr_t* get_address_of_lprgelemdescParam_2() { return &___lprgelemdescParam_2; }
	inline void set_lprgelemdescParam_2(intptr_t value)
	{
		___lprgelemdescParam_2 = value;
	}

	inline static int32_t get_offset_of_funckind_3() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___funckind_3)); }
	inline int32_t get_funckind_3() const { return ___funckind_3; }
	inline int32_t* get_address_of_funckind_3() { return &___funckind_3; }
	inline void set_funckind_3(int32_t value)
	{
		___funckind_3 = value;
	}

	inline static int32_t get_offset_of_invkind_4() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___invkind_4)); }
	inline int32_t get_invkind_4() const { return ___invkind_4; }
	inline int32_t* get_address_of_invkind_4() { return &___invkind_4; }
	inline void set_invkind_4(int32_t value)
	{
		___invkind_4 = value;
	}

	inline static int32_t get_offset_of_callconv_5() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___callconv_5)); }
	inline int32_t get_callconv_5() const { return ___callconv_5; }
	inline int32_t* get_address_of_callconv_5() { return &___callconv_5; }
	inline void set_callconv_5(int32_t value)
	{
		___callconv_5 = value;
	}

	inline static int32_t get_offset_of_cParams_6() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___cParams_6)); }
	inline int16_t get_cParams_6() const { return ___cParams_6; }
	inline int16_t* get_address_of_cParams_6() { return &___cParams_6; }
	inline void set_cParams_6(int16_t value)
	{
		___cParams_6 = value;
	}

	inline static int32_t get_offset_of_cParamsOpt_7() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___cParamsOpt_7)); }
	inline int16_t get_cParamsOpt_7() const { return ___cParamsOpt_7; }
	inline int16_t* get_address_of_cParamsOpt_7() { return &___cParamsOpt_7; }
	inline void set_cParamsOpt_7(int16_t value)
	{
		___cParamsOpt_7 = value;
	}

	inline static int32_t get_offset_of_oVft_8() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___oVft_8)); }
	inline int16_t get_oVft_8() const { return ___oVft_8; }
	inline int16_t* get_address_of_oVft_8() { return &___oVft_8; }
	inline void set_oVft_8(int16_t value)
	{
		___oVft_8 = value;
	}

	inline static int32_t get_offset_of_cScodes_9() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___cScodes_9)); }
	inline int16_t get_cScodes_9() const { return ___cScodes_9; }
	inline int16_t* get_address_of_cScodes_9() { return &___cScodes_9; }
	inline void set_cScodes_9(int16_t value)
	{
		___cScodes_9 = value;
	}

	inline static int32_t get_offset_of_elemdescFunc_10() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___elemdescFunc_10)); }
	inline ELEMDESC_t1253873  get_elemdescFunc_10() const { return ___elemdescFunc_10; }
	inline ELEMDESC_t1253873 * get_address_of_elemdescFunc_10() { return &___elemdescFunc_10; }
	inline void set_elemdescFunc_10(ELEMDESC_t1253873  value)
	{
		___elemdescFunc_10 = value;
	}

	inline static int32_t get_offset_of_wFuncFlags_11() { return static_cast<int32_t>(offsetof(FUNCDESC_t3830931527, ___wFuncFlags_11)); }
	inline int16_t get_wFuncFlags_11() const { return ___wFuncFlags_11; }
	inline int16_t* get_address_of_wFuncFlags_11() { return &___wFuncFlags_11; }
	inline void set_wFuncFlags_11(int16_t value)
	{
		___wFuncFlags_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCDESC_T3830931527_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (ScopelessEnumAttribute_t3548012294), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (SpecialNameAttribute_t2303676958), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (StringFreezingAttribute_t3031362240), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (SuppressIldasmAttribute_t3739123956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (Cer_t573022029)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable704[4] = 
{
	Cer_t573022029::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (Consistency_t4071665526)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable705[5] = 
{
	Consistency_t4071665526::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (CriticalFinalizerObject_t701527852), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (PrePrepareMethodAttribute_t3223698298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (ReliabilityContractAttribute_t502331440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable708[2] = 
{
	ReliabilityContractAttribute_t502331440::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t502331440::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (ActivationArguments_t4219999170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable709[3] = 
{
	ActivationArguments_t4219999170::get_offset_of__context_0(),
	ActivationArguments_t4219999170::get_offset_of__identity_1(),
	ActivationArguments_t4219999170::get_offset_of__data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (ApplicationActivator_t1496397616), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (BINDPTR_t947377522)+ sizeof (RuntimeObject), sizeof(BINDPTR_t947377522 ), 0, 0 };
extern const int32_t g_FieldOffsetTable711[3] = 
{
	BINDPTR_t947377522::get_offset_of_lpfuncdesc_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BINDPTR_t947377522::get_offset_of_lptcomp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BINDPTR_t947377522::get_offset_of_lpvardesc_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (BIND_OPTS_t831320616)+ sizeof (RuntimeObject), sizeof(BIND_OPTS_t831320616 ), 0, 0 };
extern const int32_t g_FieldOffsetTable712[4] = 
{
	BIND_OPTS_t831320616::get_offset_of_cbStruct_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BIND_OPTS_t831320616::get_offset_of_grfFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BIND_OPTS_t831320616::get_offset_of_grfMode_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BIND_OPTS_t831320616::get_offset_of_dwTickCountDeadline_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (CALLCONV_t145397880)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable713[11] = 
{
	CALLCONV_t145397880::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (CONNECTDATA_t1569573429)+ sizeof (RuntimeObject), sizeof(CONNECTDATA_t1569573429_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable714[2] = 
{
	CONNECTDATA_t1569573429::get_offset_of_pUnk_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CONNECTDATA_t1569573429::get_offset_of_dwCookie_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (DESCKIND_t3213663876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable715[7] = 
{
	DESCKIND_t3213663876::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (DISPPARAMS_t149323838)+ sizeof (RuntimeObject), sizeof(DISPPARAMS_t149323838 ), 0, 0 };
extern const int32_t g_FieldOffsetTable716[4] = 
{
	DISPPARAMS_t149323838::get_offset_of_rgvarg_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DISPPARAMS_t149323838::get_offset_of_rgdispidNamedArgs_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DISPPARAMS_t149323838::get_offset_of_cArgs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DISPPARAMS_t149323838::get_offset_of_cNamedArgs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (ELEMDESC_t1253873)+ sizeof (RuntimeObject), sizeof(ELEMDESC_t1253873 ), 0, 0 };
extern const int32_t g_FieldOffsetTable717[2] = 
{
	ELEMDESC_t1253873::get_offset_of_tdesc_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ELEMDESC_t1253873::get_offset_of_desc_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (DESCUNION_t1708300132)+ sizeof (RuntimeObject), sizeof(DESCUNION_t1708300132 ), 0, 0 };
extern const int32_t g_FieldOffsetTable718[2] = 
{
	DESCUNION_t1708300132::get_offset_of_idldesc_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DESCUNION_t1708300132::get_offset_of_paramdesc_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (EXCEPINFO_t4018283104)+ sizeof (RuntimeObject), sizeof(EXCEPINFO_t4018283104_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable719[9] = 
{
	EXCEPINFO_t4018283104::get_offset_of_wCode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_wReserved_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_bstrSource_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_bstrDescription_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_bstrHelpFile_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_dwHelpContext_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_pvReserved_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_pfnDeferredFillIn_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t4018283104::get_offset_of_scode_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (FILETIME_t1200622595)+ sizeof (RuntimeObject), sizeof(FILETIME_t1200622595 ), 0, 0 };
extern const int32_t g_FieldOffsetTable720[2] = 
{
	FILETIME_t1200622595::get_offset_of_dwLowDateTime_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FILETIME_t1200622595::get_offset_of_dwHighDateTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (FUNCDESC_t3830931527)+ sizeof (RuntimeObject), sizeof(FUNCDESC_t3830931527 ), 0, 0 };
extern const int32_t g_FieldOffsetTable721[12] = 
{
	FUNCDESC_t3830931527::get_offset_of_memid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_lprgscode_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_lprgelemdescParam_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_funckind_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_invkind_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_callconv_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_cParams_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_cParamsOpt_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_oVft_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_cScodes_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_elemdescFunc_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t3830931527::get_offset_of_wFuncFlags_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (FUNCFLAGS_t3156981464)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable722[14] = 
{
	FUNCFLAGS_t3156981464::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (FUNCKIND_t2251532099)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable723[6] = 
{
	FUNCKIND_t2251532099::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { 0, sizeof(IBindCtx_t1565995796*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { 0, sizeof(IConnectionPoint_t2097756631*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { 0, sizeof(IConnectionPointContainer_t1785655909*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (IDLDESC_t3540229105)+ sizeof (RuntimeObject), sizeof(IDLDESC_t3540229105 ), 0, 0 };
extern const int32_t g_FieldOffsetTable727[2] = 
{
	IDLDESC_t3540229105::get_offset_of_dwReserved_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IDLDESC_t3540229105::get_offset_of_wIDLFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (IDLFLAG_t947767676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable728[6] = 
{
	IDLFLAG_t947767676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { 0, sizeof(IEnumConnectionPoints_t3877902792*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { 0, sizeof(IEnumConnections_t1736845793*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { 0, sizeof(IEnumMoniker_t3824831520*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { 0, sizeof(IEnumString_t334177337*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { 0, sizeof(IEnumVARIANT_t2637587419*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (IMPLTYPEFLAGS_t2580827010)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable734[5] = 
{
	IMPLTYPEFLAGS_t2580827010::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { 0, sizeof(IMoniker_t679694026*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (INVOKEKIND_t1712485679)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable736[5] = 
{
	INVOKEKIND_t1712485679::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { 0, sizeof(IPersistFile_t4155727431*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { 0, sizeof(IRunningObjectTable_t1355610725*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { 0, sizeof(IStream_t2767586507*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { 0, sizeof(ITypeComp_t1006330118*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { 0, sizeof(ITypeInfo_t2595417184*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { 0, sizeof(ITypeInfo2_t2594499680*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { 0, sizeof(ITypeLib_t2209420004*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { 0, sizeof(ITypeLib2_t2950318718*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { sizeof (LIBFLAGS_t3518176881)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable745[5] = 
{
	LIBFLAGS_t3518176881::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { sizeof (PARAMDESC_t1970356037)+ sizeof (RuntimeObject), sizeof(PARAMDESC_t1970356037 ), 0, 0 };
extern const int32_t g_FieldOffsetTable746[2] = 
{
	PARAMDESC_t1970356037::get_offset_of_lpVarValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PARAMDESC_t1970356037::get_offset_of_wParamFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { sizeof (PARAMFLAG_t1610111164)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable747[9] = 
{
	PARAMFLAG_t1610111164::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (STATSTG_t1180006254)+ sizeof (RuntimeObject), sizeof(STATSTG_t1180006254_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable748[11] = 
{
	STATSTG_t1180006254::get_offset_of_pwcsName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_cbSize_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_mtime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_ctime_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_atime_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_grfMode_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_grfLocksSupported_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_clsid_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_grfStateBits_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	STATSTG_t1180006254::get_offset_of_reserved_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { sizeof (SYSKIND_t2151735481)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable749[5] = 
{
	SYSKIND_t2151735481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (TYPEATTR_t2585690119)+ sizeof (RuntimeObject), sizeof(TYPEATTR_t2585690119 ), 0, 0 };
extern const int32_t g_FieldOffsetTable750[19] = 
{
	0,
	TYPEATTR_t2585690119::get_offset_of_guid_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_dwReserved_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_memidConstructor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_memidDestructor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_lpstrSchema_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_cbSizeInstance_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_typekind_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_cFuncs_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_cVars_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_cImplTypes_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_cbSizeVft_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_cbAlignment_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_wTypeFlags_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_wMajorVerNum_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_wMinorVerNum_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_tdescAlias_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEATTR_t2585690119::get_offset_of_idldescType_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { sizeof (TYPEDESC_t3854979023)+ sizeof (RuntimeObject), sizeof(TYPEDESC_t3854979023 ), 0, 0 };
extern const int32_t g_FieldOffsetTable751[2] = 
{
	TYPEDESC_t3854979023::get_offset_of_lpValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPEDESC_t3854979023::get_offset_of_vt_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { sizeof (TYPEFLAGS_t536984397)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable752[16] = 
{
	TYPEFLAGS_t536984397::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { sizeof (TYPEKIND_t2684547567)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable753[10] = 
{
	TYPEKIND_t2684547567::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { sizeof (TYPELIBATTR_t928361529)+ sizeof (RuntimeObject), sizeof(TYPELIBATTR_t928361529 ), 0, 0 };
extern const int32_t g_FieldOffsetTable754[6] = 
{
	TYPELIBATTR_t928361529::get_offset_of_guid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t928361529::get_offset_of_lcid_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t928361529::get_offset_of_syskind_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t928361529::get_offset_of_wMajorVerNum_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t928361529::get_offset_of_wMinorVerNum_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TYPELIBATTR_t928361529::get_offset_of_wLibFlags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (VARDESC_t1273526866)+ sizeof (RuntimeObject), sizeof(VARDESC_t1273526866_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable755[6] = 
{
	VARDESC_t1273526866::get_offset_of_memid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t1273526866::get_offset_of_lpstrSchema_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t1273526866::get_offset_of_desc_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t1273526866::get_offset_of_elemdescVar_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t1273526866::get_offset_of_wVarFlags_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VARDESC_t1273526866::get_offset_of_varkind_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (DESCUNION_t3801796303)+ sizeof (RuntimeObject), sizeof(DESCUNION_t3801796303 ), 0, 0 };
extern const int32_t g_FieldOffsetTable756[2] = 
{
	DESCUNION_t3801796303::get_offset_of_lpvarValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DESCUNION_t3801796303::get_offset_of_oInst_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (VARFLAGS_t4167126199)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable757[14] = 
{
	VARFLAGS_t4167126199::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { sizeof (VARKIND_t2343753751)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable758[5] = 
{
	VARKIND_t2343753751::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { sizeof (AllowReversePInvokeCallsAttribute_t57095214), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { sizeof (ArrayWithOffset_t70597867)+ sizeof (RuntimeObject), sizeof(ArrayWithOffset_t70597867_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable761[2] = 
{
	ArrayWithOffset_t70597867::get_offset_of_array_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArrayWithOffset_t70597867::get_offset_of_offset_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (AssemblyRegistrationFlags_t1865906142)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable762[3] = 
{
	AssemblyRegistrationFlags_t1865906142::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (AutomationProxyAttribute_t1935091130), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable763[1] = 
{
	AutomationProxyAttribute_t1935091130::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (BINDPTR_t2893609822)+ sizeof (RuntimeObject), sizeof(BINDPTR_t2893609822 ), 0, 0 };
extern const int32_t g_FieldOffsetTable764[3] = 
{
	BINDPTR_t2893609822::get_offset_of_lpfuncdesc_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BINDPTR_t2893609822::get_offset_of_lptcomp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BINDPTR_t2893609822::get_offset_of_lpvardesc_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (BIND_OPTS_t1987624003)+ sizeof (RuntimeObject), sizeof(BIND_OPTS_t1987624003 ), 0, 0 };
extern const int32_t g_FieldOffsetTable765[4] = 
{
	BIND_OPTS_t1987624003::get_offset_of_cbStruct_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BIND_OPTS_t1987624003::get_offset_of_grfFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BIND_OPTS_t1987624003::get_offset_of_grfMode_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BIND_OPTS_t1987624003::get_offset_of_dwTickCountDeadline_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (BStrWrapper_t4014141473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable766[1] = 
{
	BStrWrapper_t4014141473::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { sizeof (BestFitMappingAttribute_t4073720592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable767[2] = 
{
	BestFitMappingAttribute_t4073720592::get_offset_of_bfm_0(),
	BestFitMappingAttribute_t4073720592::get_offset_of_ThrowOnUnmappableChar_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (CALLCONV_t1230382893)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable768[11] = 
{
	CALLCONV_t1230382893::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (COMException_t1620828383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (CONNECTDATA_t2532328437)+ sizeof (RuntimeObject), sizeof(CONNECTDATA_t2532328437_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable770[2] = 
{
	CONNECTDATA_t2532328437::get_offset_of_pUnk_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CONNECTDATA_t2532328437::get_offset_of_dwCookie_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (CallingConvention_t1027624783)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable771[6] = 
{
	CallingConvention_t1027624783::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (CharSet_t3391187264)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable772[5] = 
{
	CharSet_t3391187264::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (ClassInterfaceAttribute_t2274790349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable773[1] = 
{
	ClassInterfaceAttribute_t2274790349::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (ClassInterfaceType_t4029497327)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable774[4] = 
{
	ClassInterfaceType_t4029497327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (ComAliasNameAttribute_t2348302473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable775[1] = 
{
	ComAliasNameAttribute_t2348302473::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (ComCompatibleVersionAttribute_t1233303509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable776[4] = 
{
	ComCompatibleVersionAttribute_t1233303509::get_offset_of_major_0(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of_minor_1(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of_build_2(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of_revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (ComConversionLossAttribute_t3321876310), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (ComDefaultInterfaceAttribute_t2734585253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable778[1] = 
{
	ComDefaultInterfaceAttribute_t2734585253::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (ComEventInterfaceAttribute_t3859601718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable779[2] = 
{
	ComEventInterfaceAttribute_t3859601718::get_offset_of_si_0(),
	ComEventInterfaceAttribute_t3859601718::get_offset_of_ep_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (ComInterfaceType_t2732813453)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable780[4] = 
{
	ComInterfaceType_t2732813453::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (ComMemberType_t322658443)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable781[4] = 
{
	ComMemberType_t322658443::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (ComRegisterFunctionAttribute_t2107793268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (ComSourceInterfacesAttribute_t372280649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable783[1] = 
{
	ComSourceInterfacesAttribute_t372280649::get_offset_of_internalValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (ComUnregisterFunctionAttribute_t2952369895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (CriticalHandle_t2719507733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable785[2] = 
{
	CriticalHandle_t2719507733::get_offset_of_handle_0(),
	CriticalHandle_t2719507733::get_offset_of__disposed_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (CurrencyWrapper_t3164925625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable786[1] = 
{
	CurrencyWrapper_t3164925625::get_offset_of_currency_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (DESCKIND_t2664518927)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable787[7] = 
{
	DESCKIND_t2664518927::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (DISPPARAMS_t2246988669)+ sizeof (RuntimeObject), sizeof(DISPPARAMS_t2246988669 ), 0, 0 };
extern const int32_t g_FieldOffsetTable788[4] = 
{
	DISPPARAMS_t2246988669::get_offset_of_rgvarg_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DISPPARAMS_t2246988669::get_offset_of_rgdispidNamedArgs_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DISPPARAMS_t2246988669::get_offset_of_cArgs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DISPPARAMS_t2246988669::get_offset_of_cNamedArgs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (DispIdAttribute_t491906453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable789[1] = 
{
	DispIdAttribute_t491906453::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (DispatchWrapper_t4241764895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable790[1] = 
{
	DispatchWrapper_t4241764895::get_offset_of_wrappedObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (ELEMDESC_t3075712643)+ sizeof (RuntimeObject), sizeof(ELEMDESC_t3075712643 ), 0, 0 };
extern const int32_t g_FieldOffsetTable791[2] = 
{
	ELEMDESC_t3075712643::get_offset_of_tdesc_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ELEMDESC_t3075712643::get_offset_of_desc_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (DESCUNION_t2969319227)+ sizeof (RuntimeObject), sizeof(DESCUNION_t2969319227 ), 0, 0 };
extern const int32_t g_FieldOffsetTable792[2] = 
{
	DESCUNION_t2969319227::get_offset_of_idldesc_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DESCUNION_t2969319227::get_offset_of_paramdesc_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (EXCEPINFO_t1368229618)+ sizeof (RuntimeObject), sizeof(EXCEPINFO_t1368229618_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable793[8] = 
{
	EXCEPINFO_t1368229618::get_offset_of_wCode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t1368229618::get_offset_of_wReserved_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t1368229618::get_offset_of_bstrSource_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t1368229618::get_offset_of_bstrDescription_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t1368229618::get_offset_of_bstrHelpFile_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t1368229618::get_offset_of_dwHelpContext_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t1368229618::get_offset_of_pvReserved_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EXCEPINFO_t1368229618::get_offset_of_pfnDeferredFillIn_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (ErrorWrapper_t1772885312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable794[1] = 
{
	ErrorWrapper_t1772885312::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (ExporterEventKind_t2094490288)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable795[4] = 
{
	ExporterEventKind_t2094490288::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (ExtensibleClassFactory_t574234438), -1, sizeof(ExtensibleClassFactory_t574234438_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable796[1] = 
{
	ExtensibleClassFactory_t574234438_StaticFields::get_offset_of_hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (ExternalException_t3544951457), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (FILETIME_t2546138622)+ sizeof (RuntimeObject), sizeof(FILETIME_t2546138622 ), 0, 0 };
extern const int32_t g_FieldOffsetTable798[2] = 
{
	FILETIME_t2546138622::get_offset_of_dwLowDateTime_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FILETIME_t2546138622::get_offset_of_dwHighDateTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { sizeof (FUNCDESC_t1627495042)+ sizeof (RuntimeObject), sizeof(FUNCDESC_t1627495042 ), 0, 0 };
extern const int32_t g_FieldOffsetTable799[12] = 
{
	FUNCDESC_t1627495042::get_offset_of_memid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_lprgscode_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_lprgelemdescParam_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_funckind_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_invkind_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_callconv_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_cParams_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_cParamsOpt_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_oVft_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_cScodes_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_elemdescFunc_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FUNCDESC_t1627495042::get_offset_of_wFuncFlags_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
