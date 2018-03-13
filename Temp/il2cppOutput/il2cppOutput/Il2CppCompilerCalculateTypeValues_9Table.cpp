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


// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t485815189;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2514424906;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3285446944;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t3593512748;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t3462122824;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t625731443;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Runtime.Remoting.Channels.ChanelSinkStackEntry
struct ChanelSinkStackEntry_t862199498;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t3946661254;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2141158884;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Threading.Timer
struct Timer_t716671026;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t4063984580;
// System.Collections.IList
struct IList_t2094931216;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t4217117203;
// System.Collections.IDictionary[]
struct IDictionaryU5BU5D_t3556212730;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1693217257;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Channels.IChannelSinkBase
struct IChannelSinkBase_t3062357308;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Runtime.Remoting.Messaging.CADMethodReturnMessage
struct CADMethodReturnMessage_t28129847;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Threading.Mutex
struct Mutex_t3066672582;
// System.Threading.Thread
struct Thread_t2300836069;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2807636944;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t317049502;
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t3648745595;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t652373272;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t2292721408;
// System.Collections.Queue
struct Queue_t3637523393;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t3744801856;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t2998816618;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;




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
#ifndef ACTIVATIONSERVICES_T4161385317_H
#define ACTIVATIONSERVICES_T4161385317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t4161385317  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t4161385317_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t4161385317_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T4161385317_H
#ifndef CONTEXTRESTORESINK_T687410643_H
#define CONTEXTRESTORESINK_T687410643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink
struct  ContextRestoreSink_t687410643  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink::_context
	Context_t3285446944 * ____context_1;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink::_call
	RuntimeObject* ____call_2;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(ContextRestoreSink_t687410643, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ContextRestoreSink_t687410643, ____context_1)); }
	inline Context_t3285446944 * get__context_1() const { return ____context_1; }
	inline Context_t3285446944 ** get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(Context_t3285446944 * value)
	{
		____context_1 = value;
		Il2CppCodeGenWriteBarrier((&____context_1), value);
	}

	inline static int32_t get_offset_of__call_2() { return static_cast<int32_t>(offsetof(ContextRestoreSink_t687410643, ____call_2)); }
	inline RuntimeObject* get__call_2() const { return ____call_2; }
	inline RuntimeObject** get_address_of__call_2() { return &____call_2; }
	inline void set__call_2(RuntimeObject* value)
	{
		____call_2 = value;
		Il2CppCodeGenWriteBarrier((&____call_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTRESTORESINK_T687410643_H
#ifndef CROSSCONTEXTCHANNEL_T4063984580_H
#define CROSSCONTEXTCHANNEL_T4063984580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t4063984580  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T4063984580_H
#ifndef CONTEXTPROPERTY_T3987118631_H
#define CONTEXTPROPERTY_T3987118631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextProperty
struct  ContextProperty_t3987118631  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextProperty::name
	String_t* ___name_0;
	// System.Object System.Runtime.Remoting.Contexts.ContextProperty::prop
	RuntimeObject * ___prop_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ContextProperty_t3987118631, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(ContextProperty_t3987118631, ___prop_1)); }
	inline RuntimeObject * get_prop_1() const { return ___prop_1; }
	inline RuntimeObject ** get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(RuntimeObject * value)
	{
		___prop_1 = value;
		Il2CppCodeGenWriteBarrier((&___prop_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTPROPERTY_T3987118631_H
#ifndef DYNAMICPROPERTYREG_T4086779412_H
#define DYNAMICPROPERTYREG_T4086779412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t4086779412  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t4086779412, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t4086779412, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T4086779412_H
#ifndef DYNAMICPROPERTYCOLLECTION_T652373272_H
#define DYNAMICPROPERTYCOLLECTION_T652373272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t652373272  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t2718874744 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t652373272, ____properties_0)); }
	inline ArrayList_t2718874744 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t2718874744 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t2718874744 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T652373272_H
#ifndef TRANSPORTHEADERS_T3566514082_H
#define TRANSPORTHEADERS_T3566514082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.TransportHeaders
struct  TransportHeaders_t3566514082  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.TransportHeaders::hash_table
	Hashtable_t1853889766 * ___hash_table_0;

public:
	inline static int32_t get_offset_of_hash_table_0() { return static_cast<int32_t>(offsetof(TransportHeaders_t3566514082, ___hash_table_0)); }
	inline Hashtable_t1853889766 * get_hash_table_0() const { return ___hash_table_0; }
	inline Hashtable_t1853889766 ** get_address_of_hash_table_0() { return &___hash_table_0; }
	inline void set_hash_table_0(Hashtable_t1853889766 * value)
	{
		___hash_table_0 = value;
		Il2CppCodeGenWriteBarrier((&___hash_table_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSPORTHEADERS_T3566514082_H
#ifndef SINKPROVIDERDATA_T4151372974_H
#define SINKPROVIDERDATA_T4151372974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t4151372974  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t2718874744 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t1853889766 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t4151372974, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t4151372974, ___children_1)); }
	inline ArrayList_t2718874744 * get_children_1() const { return ___children_1; }
	inline ArrayList_t2718874744 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t2718874744 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t4151372974, ___properties_2)); }
	inline Hashtable_t1853889766 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t1853889766 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t1853889766 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T4151372974_H
#ifndef SERVERDISPATCHSINKPROVIDER_T2241602845_H
#define SERVERDISPATCHSINKPROVIDER_T2241602845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ServerDispatchSinkProvider
struct  ServerDispatchSinkProvider_t2241602845  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERDISPATCHSINKPROVIDER_T2241602845_H
#ifndef SERVERDISPATCHSINK_T2676000070_H
#define SERVERDISPATCHSINK_T2676000070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ServerDispatchSink
struct  ServerDispatchSink_t2676000070  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERDISPATCHSINK_T2676000070_H
#ifndef SERVERCHANNELSINKSTACK_T3682945724_H
#define SERVERCHANNELSINKSTACK_T3682945724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ServerChannelSinkStack
struct  ServerChannelSinkStack_t3682945724  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Channels.ChanelSinkStackEntry System.Runtime.Remoting.Channels.ServerChannelSinkStack::_sinkStack
	ChanelSinkStackEntry_t862199498 * ____sinkStack_0;

public:
	inline static int32_t get_offset_of__sinkStack_0() { return static_cast<int32_t>(offsetof(ServerChannelSinkStack_t3682945724, ____sinkStack_0)); }
	inline ChanelSinkStackEntry_t862199498 * get__sinkStack_0() const { return ____sinkStack_0; }
	inline ChanelSinkStackEntry_t862199498 ** get_address_of__sinkStack_0() { return &____sinkStack_0; }
	inline void set__sinkStack_0(ChanelSinkStackEntry_t862199498 * value)
	{
		____sinkStack_0 = value;
		Il2CppCodeGenWriteBarrier((&____sinkStack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCHANNELSINKSTACK_T3682945724_H
#ifndef SYNCHRONIZEDCLIENTCONTEXTSINK_T1886771601_H
#define SYNCHRONIZEDCLIENTCONTEXTSINK_T1886771601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t1886771601  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t3946661254 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1886771601, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1886771601, ____att_1)); }
	inline SynchronizationAttribute_t3946661254 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3946661254 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3946661254 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCLIENTCONTEXTSINK_T1886771601_H
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
#ifndef CADOBJREF_T3219127730_H
#define CADOBJREF_T3219127730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CADObjRef
struct  CADObjRef_t3219127730  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Messaging.CADObjRef::objref
	ObjRef_t2141158884 * ___objref_0;
	// System.Int32 System.Runtime.Remoting.Messaging.CADObjRef::SourceDomain
	int32_t ___SourceDomain_1;

public:
	inline static int32_t get_offset_of_objref_0() { return static_cast<int32_t>(offsetof(CADObjRef_t3219127730, ___objref_0)); }
	inline ObjRef_t2141158884 * get_objref_0() const { return ___objref_0; }
	inline ObjRef_t2141158884 ** get_address_of_objref_0() { return &___objref_0; }
	inline void set_objref_0(ObjRef_t2141158884 * value)
	{
		___objref_0 = value;
		Il2CppCodeGenWriteBarrier((&___objref_0), value);
	}

	inline static int32_t get_offset_of_SourceDomain_1() { return static_cast<int32_t>(offsetof(CADObjRef_t3219127730, ___SourceDomain_1)); }
	inline int32_t get_SourceDomain_1() const { return ___SourceDomain_1; }
	inline int32_t* get_address_of_SourceDomain_1() { return &___SourceDomain_1; }
	inline void set_SourceDomain_1(int32_t value)
	{
		___SourceDomain_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CADOBJREF_T3219127730_H
#ifndef CADARGHOLDER_T583049314_H
#define CADARGHOLDER_T583049314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CADArgHolder
struct  CADArgHolder_t583049314  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Messaging.CADArgHolder::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(CADArgHolder_t583049314, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CADARGHOLDER_T583049314_H
#ifndef ARGINFO_T3261134217_H
#define ARGINFO_T3261134217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfo
struct  ArgInfo_t3261134217  : public RuntimeObject
{
public:
	// System.Int32[] System.Runtime.Remoting.Messaging.ArgInfo::_paramMap
	Int32U5BU5D_t385246372* ____paramMap_0;
	// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::_inoutArgCount
	int32_t ____inoutArgCount_1;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ArgInfo::_method
	MethodBase_t * ____method_2;

public:
	inline static int32_t get_offset_of__paramMap_0() { return static_cast<int32_t>(offsetof(ArgInfo_t3261134217, ____paramMap_0)); }
	inline Int32U5BU5D_t385246372* get__paramMap_0() const { return ____paramMap_0; }
	inline Int32U5BU5D_t385246372** get_address_of__paramMap_0() { return &____paramMap_0; }
	inline void set__paramMap_0(Int32U5BU5D_t385246372* value)
	{
		____paramMap_0 = value;
		Il2CppCodeGenWriteBarrier((&____paramMap_0), value);
	}

	inline static int32_t get_offset_of__inoutArgCount_1() { return static_cast<int32_t>(offsetof(ArgInfo_t3261134217, ____inoutArgCount_1)); }
	inline int32_t get__inoutArgCount_1() const { return ____inoutArgCount_1; }
	inline int32_t* get_address_of__inoutArgCount_1() { return &____inoutArgCount_1; }
	inline void set__inoutArgCount_1(int32_t value)
	{
		____inoutArgCount_1 = value;
	}

	inline static int32_t get_offset_of__method_2() { return static_cast<int32_t>(offsetof(ArgInfo_t3261134217, ____method_2)); }
	inline MethodBase_t * get__method_2() const { return ____method_2; }
	inline MethodBase_t ** get_address_of__method_2() { return &____method_2; }
	inline void set__method_2(MethodBase_t * value)
	{
		____method_2 = value;
		Il2CppCodeGenWriteBarrier((&____method_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFO_T3261134217_H
#ifndef LEASESINK_T3666380219_H
#define LEASESINK_T3666380219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseSink
struct  LeaseSink_t3666380219  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Lifetime.LeaseSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(LeaseSink_t3666380219, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASESINK_T3666380219_H
#ifndef LEASEMANAGER_T3648745595_H
#define LEASEMANAGER_T3648745595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t3648745595  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t2718874744 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t716671026 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t3648745595, ____objects_0)); }
	inline ArrayList_t2718874744 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t2718874744 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t2718874744 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t3648745595, ____timer_1)); }
	inline Timer_t716671026 * get__timer_1() const { return ____timer_1; }
	inline Timer_t716671026 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t716671026 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier((&____timer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASEMANAGER_T3648745595_H
#ifndef SYNCHRONIZEDCONTEXTREPLYSINK_T3770922650_H
#define SYNCHRONIZEDCONTEXTREPLYSINK_T3770922650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedContextReplySink
struct  SynchronizedContextReplySink_t3770922650  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedContextReplySink::_next
	RuntimeObject* ____next_0;
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizedContextReplySink::_newLock
	bool ____newLock_1;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedContextReplySink::_att
	SynchronizationAttribute_t3946661254 * ____att_2;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedContextReplySink_t3770922650, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__newLock_1() { return static_cast<int32_t>(offsetof(SynchronizedContextReplySink_t3770922650, ____newLock_1)); }
	inline bool get__newLock_1() const { return ____newLock_1; }
	inline bool* get_address_of__newLock_1() { return &____newLock_1; }
	inline void set__newLock_1(bool value)
	{
		____newLock_1 = value;
	}

	inline static int32_t get_offset_of__att_2() { return static_cast<int32_t>(offsetof(SynchronizedContextReplySink_t3770922650, ____att_2)); }
	inline SynchronizationAttribute_t3946661254 * get__att_2() const { return ____att_2; }
	inline SynchronizationAttribute_t3946661254 ** get_address_of__att_2() { return &____att_2; }
	inline void set__att_2(SynchronizationAttribute_t3946661254 * value)
	{
		____att_2 = value;
		Il2CppCodeGenWriteBarrier((&____att_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCONTEXTREPLYSINK_T3770922650_H
#ifndef SYNCHRONIZEDSERVERCONTEXTSINK_T2776015682_H
#define SYNCHRONIZEDSERVERCONTEXTSINK_T2776015682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t2776015682  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t3946661254 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t2776015682, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t2776015682, ____att_1)); }
	inline SynchronizationAttribute_t3946661254 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3946661254 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3946661254 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDSERVERCONTEXTSINK_T2776015682_H
#ifndef ASYNCREQUEST_T1108467204_H
#define ASYNCREQUEST_T1108467204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.AsyncRequest
struct  AsyncRequest_t1108467204  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.AsyncRequest::ReplySink
	RuntimeObject* ___ReplySink_0;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Channels.AsyncRequest::MsgRequest
	RuntimeObject* ___MsgRequest_1;

public:
	inline static int32_t get_offset_of_ReplySink_0() { return static_cast<int32_t>(offsetof(AsyncRequest_t1108467204, ___ReplySink_0)); }
	inline RuntimeObject* get_ReplySink_0() const { return ___ReplySink_0; }
	inline RuntimeObject** get_address_of_ReplySink_0() { return &___ReplySink_0; }
	inline void set_ReplySink_0(RuntimeObject* value)
	{
		___ReplySink_0 = value;
		Il2CppCodeGenWriteBarrier((&___ReplySink_0), value);
	}

	inline static int32_t get_offset_of_MsgRequest_1() { return static_cast<int32_t>(offsetof(AsyncRequest_t1108467204, ___MsgRequest_1)); }
	inline RuntimeObject* get_MsgRequest_1() const { return ___MsgRequest_1; }
	inline RuntimeObject** get_address_of_MsgRequest_1() { return &___MsgRequest_1; }
	inline void set_MsgRequest_1(RuntimeObject* value)
	{
		___MsgRequest_1 = value;
		Il2CppCodeGenWriteBarrier((&___MsgRequest_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCREQUEST_T1108467204_H
#ifndef CHANNELSERVICES_T3942013484_H
#define CHANNELSERVICES_T3942013484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t3942013484  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t3942013484_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t2718874744 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t2718874744 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t4063984580 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t3942013484_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t2718874744 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t2718874744 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t2718874744 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t3942013484_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t2718874744 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t2718874744 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t2718874744 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t3942013484_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t4063984580 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t4063984580 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t4063984580 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t3942013484_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t3942013484_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T3942013484_H
#ifndef CHANNELINFO_T2064577689_H
#define CHANNELINFO_T2064577689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t2064577689  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t2843939325* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t2064577689, ___channelData_0)); }
	inline ObjectU5BU5D_t2843939325* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t2843939325* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELINFO_T2064577689_H
#ifndef CHANNELDATASTORE_T74591489_H
#define CHANNELDATASTORE_T74591489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelDataStore
struct  ChannelDataStore_t74591489  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Remoting.Channels.ChannelDataStore::_channelURIs
	StringU5BU5D_t1281789340* ____channelURIs_0;
	// System.Collections.DictionaryEntry[] System.Runtime.Remoting.Channels.ChannelDataStore::_extraData
	DictionaryEntryU5BU5D_t4217117203* ____extraData_1;

public:
	inline static int32_t get_offset_of__channelURIs_0() { return static_cast<int32_t>(offsetof(ChannelDataStore_t74591489, ____channelURIs_0)); }
	inline StringU5BU5D_t1281789340* get__channelURIs_0() const { return ____channelURIs_0; }
	inline StringU5BU5D_t1281789340** get_address_of__channelURIs_0() { return &____channelURIs_0; }
	inline void set__channelURIs_0(StringU5BU5D_t1281789340* value)
	{
		____channelURIs_0 = value;
		Il2CppCodeGenWriteBarrier((&____channelURIs_0), value);
	}

	inline static int32_t get_offset_of__extraData_1() { return static_cast<int32_t>(offsetof(ChannelDataStore_t74591489, ____extraData_1)); }
	inline DictionaryEntryU5BU5D_t4217117203* get__extraData_1() const { return ____extraData_1; }
	inline DictionaryEntryU5BU5D_t4217117203** get_address_of__extraData_1() { return &____extraData_1; }
	inline void set__extraData_1(DictionaryEntryU5BU5D_t4217117203* value)
	{
		____extraData_1 = value;
		Il2CppCodeGenWriteBarrier((&____extraData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATASTORE_T74591489_H
#ifndef BASECHANNELOBJECTWITHPROPERTIES_T2679029464_H
#define BASECHANNELOBJECTWITHPROPERTIES_T2679029464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.BaseChannelObjectWithProperties
struct  BaseChannelObjectWithProperties_t2679029464  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.BaseChannelObjectWithProperties::table
	Hashtable_t1853889766 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(BaseChannelObjectWithProperties_t2679029464, ___table_0)); }
	inline Hashtable_t1853889766 * get_table_0() const { return ___table_0; }
	inline Hashtable_t1853889766 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Hashtable_t1853889766 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECHANNELOBJECTWITHPROPERTIES_T2679029464_H
#ifndef APPDOMAINLEVELACTIVATOR_T643114572_H
#define APPDOMAINLEVELACTIVATOR_T643114572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t643114572  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t643114572, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t643114572, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T643114572_H
#ifndef AGGREGATEENUMERATOR_T2557990122_H
#define AGGREGATEENUMERATOR_T2557990122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.AggregateEnumerator
struct  AggregateEnumerator_t2557990122  : public RuntimeObject
{
public:
	// System.Collections.IDictionary[] System.Runtime.Remoting.Channels.AggregateEnumerator::dictionaries
	IDictionaryU5BU5D_t3556212730* ___dictionaries_0;
	// System.Int32 System.Runtime.Remoting.Channels.AggregateEnumerator::pos
	int32_t ___pos_1;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Channels.AggregateEnumerator::currente
	RuntimeObject* ___currente_2;

public:
	inline static int32_t get_offset_of_dictionaries_0() { return static_cast<int32_t>(offsetof(AggregateEnumerator_t2557990122, ___dictionaries_0)); }
	inline IDictionaryU5BU5D_t3556212730* get_dictionaries_0() const { return ___dictionaries_0; }
	inline IDictionaryU5BU5D_t3556212730** get_address_of_dictionaries_0() { return &___dictionaries_0; }
	inline void set_dictionaries_0(IDictionaryU5BU5D_t3556212730* value)
	{
		___dictionaries_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionaries_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AggregateEnumerator_t2557990122, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_currente_2() { return static_cast<int32_t>(offsetof(AggregateEnumerator_t2557990122, ___currente_2)); }
	inline RuntimeObject* get_currente_2() const { return ___currente_2; }
	inline RuntimeObject** get_address_of_currente_2() { return &___currente_2; }
	inline void set_currente_2(RuntimeObject* value)
	{
		___currente_2 = value;
		Il2CppCodeGenWriteBarrier((&___currente_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEENUMERATOR_T2557990122_H
#ifndef AGGREGATEDICTIONARY_T3566733289_H
#define AGGREGATEDICTIONARY_T3566733289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.AggregateDictionary
struct  AggregateDictionary_t3566733289  : public RuntimeObject
{
public:
	// System.Collections.IDictionary[] System.Runtime.Remoting.Channels.AggregateDictionary::dictionaries
	IDictionaryU5BU5D_t3556212730* ___dictionaries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.AggregateDictionary::_values
	ArrayList_t2718874744 * ____values_1;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.AggregateDictionary::_keys
	ArrayList_t2718874744 * ____keys_2;

public:
	inline static int32_t get_offset_of_dictionaries_0() { return static_cast<int32_t>(offsetof(AggregateDictionary_t3566733289, ___dictionaries_0)); }
	inline IDictionaryU5BU5D_t3556212730* get_dictionaries_0() const { return ___dictionaries_0; }
	inline IDictionaryU5BU5D_t3556212730** get_address_of_dictionaries_0() { return &___dictionaries_0; }
	inline void set_dictionaries_0(IDictionaryU5BU5D_t3556212730* value)
	{
		___dictionaries_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionaries_0), value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(AggregateDictionary_t3566733289, ____values_1)); }
	inline ArrayList_t2718874744 * get__values_1() const { return ____values_1; }
	inline ArrayList_t2718874744 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ArrayList_t2718874744 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((&____values_1), value);
	}

	inline static int32_t get_offset_of__keys_2() { return static_cast<int32_t>(offsetof(AggregateDictionary_t3566733289, ____keys_2)); }
	inline ArrayList_t2718874744 * get__keys_2() const { return ____keys_2; }
	inline ArrayList_t2718874744 ** get_address_of__keys_2() { return &____keys_2; }
	inline void set__keys_2(ArrayList_t2718874744 * value)
	{
		____keys_2 = value;
		Il2CppCodeGenWriteBarrier((&____keys_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEDICTIONARY_T3566733289_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T842337821_H
#define CONSTRUCTIONLEVELACTIVATOR_T842337821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t842337821  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T842337821_H
#ifndef CONTEXTLEVELACTIVATOR_T975223365_H
#define CONTEXTLEVELACTIVATOR_T975223365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t975223365  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t975223365, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T975223365_H
#ifndef EXCEPTIONFILTERSINK_T1968360421_H
#define EXCEPTIONFILTERSINK_T1968360421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ExceptionFilterSink
struct  ExceptionFilterSink_t1968360421  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ExceptionFilterSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Channels.ExceptionFilterSink::_call
	RuntimeObject* ____call_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(ExceptionFilterSink_t1968360421, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__call_1() { return static_cast<int32_t>(offsetof(ExceptionFilterSink_t1968360421, ____call_1)); }
	inline RuntimeObject* get__call_1() const { return ____call_1; }
	inline RuntimeObject** get_address_of__call_1() { return &____call_1; }
	inline void set__call_1(RuntimeObject* value)
	{
		____call_1 = value;
		Il2CppCodeGenWriteBarrier((&____call_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONFILTERSINK_T1968360421_H
#ifndef CADSERIALIZER_T3804327066_H
#define CADSERIALIZER_T3804327066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CADSerializer
struct  CADSerializer_t3804327066  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CADSERIALIZER_T3804327066_H
#ifndef CROSSAPPDOMAINSINK_T2177102621_H
#define CROSSAPPDOMAINSINK_T2177102621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t2177102621  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t2177102621, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t2177102621_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t1853889766 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t2177102621_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t1853889766 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t1853889766 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t1853889766 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t2177102621_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T2177102621_H
#ifndef CROSSAPPDOMAINCHANNEL_T1606809047_H
#define CROSSAPPDOMAINCHANNEL_T1606809047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t1606809047  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t1606809047_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_2;

public:
	inline static int32_t get_offset_of_s_lock_2() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t1606809047_StaticFields, ___s_lock_2)); }
	inline RuntimeObject * get_s_lock_2() const { return ___s_lock_2; }
	inline RuntimeObject ** get_address_of_s_lock_2() { return &___s_lock_2; }
	inline void set_s_lock_2(RuntimeObject * value)
	{
		___s_lock_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T1606809047_H
#ifndef CROSSAPPDOMAINDATA_T2130208023_H
#define CROSSAPPDOMAINDATA_T2130208023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t2130208023  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2130208023, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2130208023, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2130208023, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T2130208023_H
#ifndef CLIENTCHANNELSINKSTACK_T166555188_H
#define CLIENTCHANNELSINKSTACK_T166555188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ClientChannelSinkStack
struct  ClientChannelSinkStack_t166555188  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ClientChannelSinkStack::_replySink
	RuntimeObject* ____replySink_0;
	// System.Runtime.Remoting.Channels.ChanelSinkStackEntry System.Runtime.Remoting.Channels.ClientChannelSinkStack::_sinkStack
	ChanelSinkStackEntry_t862199498 * ____sinkStack_1;

public:
	inline static int32_t get_offset_of__replySink_0() { return static_cast<int32_t>(offsetof(ClientChannelSinkStack_t166555188, ____replySink_0)); }
	inline RuntimeObject* get__replySink_0() const { return ____replySink_0; }
	inline RuntimeObject** get_address_of__replySink_0() { return &____replySink_0; }
	inline void set__replySink_0(RuntimeObject* value)
	{
		____replySink_0 = value;
		Il2CppCodeGenWriteBarrier((&____replySink_0), value);
	}

	inline static int32_t get_offset_of__sinkStack_1() { return static_cast<int32_t>(offsetof(ClientChannelSinkStack_t166555188, ____sinkStack_1)); }
	inline ChanelSinkStackEntry_t862199498 * get__sinkStack_1() const { return ____sinkStack_1; }
	inline ChanelSinkStackEntry_t862199498 ** get_address_of__sinkStack_1() { return &____sinkStack_1; }
	inline void set__sinkStack_1(ChanelSinkStackEntry_t862199498 * value)
	{
		____sinkStack_1 = value;
		Il2CppCodeGenWriteBarrier((&____sinkStack_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCHANNELSINKSTACK_T166555188_H
#ifndef CHANELSINKSTACKENTRY_T862199498_H
#define CHANELSINKSTACKENTRY_T862199498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChanelSinkStackEntry
struct  ChanelSinkStackEntry_t862199498  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Channels.IChannelSinkBase System.Runtime.Remoting.Channels.ChanelSinkStackEntry::Sink
	RuntimeObject* ___Sink_0;
	// System.Object System.Runtime.Remoting.Channels.ChanelSinkStackEntry::State
	RuntimeObject * ___State_1;
	// System.Runtime.Remoting.Channels.ChanelSinkStackEntry System.Runtime.Remoting.Channels.ChanelSinkStackEntry::Next
	ChanelSinkStackEntry_t862199498 * ___Next_2;

public:
	inline static int32_t get_offset_of_Sink_0() { return static_cast<int32_t>(offsetof(ChanelSinkStackEntry_t862199498, ___Sink_0)); }
	inline RuntimeObject* get_Sink_0() const { return ___Sink_0; }
	inline RuntimeObject** get_address_of_Sink_0() { return &___Sink_0; }
	inline void set_Sink_0(RuntimeObject* value)
	{
		___Sink_0 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_0), value);
	}

	inline static int32_t get_offset_of_State_1() { return static_cast<int32_t>(offsetof(ChanelSinkStackEntry_t862199498, ___State_1)); }
	inline RuntimeObject * get_State_1() const { return ___State_1; }
	inline RuntimeObject ** get_address_of_State_1() { return &___State_1; }
	inline void set_State_1(RuntimeObject * value)
	{
		___State_1 = value;
		Il2CppCodeGenWriteBarrier((&___State_1), value);
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(ChanelSinkStackEntry_t862199498, ___Next_2)); }
	inline ChanelSinkStackEntry_t862199498 * get_Next_2() const { return ___Next_2; }
	inline ChanelSinkStackEntry_t862199498 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(ChanelSinkStackEntry_t862199498 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANELSINKSTACKENTRY_T862199498_H
#ifndef CONTEXTATTRIBUTE_T1328788465_H
#define CONTEXTATTRIBUTE_T1328788465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t1328788465  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t1328788465, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T1328788465_H
#ifndef PROCESSMESSAGERES_T3710547145_H
#define PROCESSMESSAGERES_T3710547145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes
struct  ProcessMessageRes_t3710547145 
{
public:
	// System.Byte[] System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes::arrResponse
	ByteU5BU5D_t4116647657* ___arrResponse_0;
	// System.Runtime.Remoting.Messaging.CADMethodReturnMessage System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes::cadMrm
	CADMethodReturnMessage_t28129847 * ___cadMrm_1;

public:
	inline static int32_t get_offset_of_arrResponse_0() { return static_cast<int32_t>(offsetof(ProcessMessageRes_t3710547145, ___arrResponse_0)); }
	inline ByteU5BU5D_t4116647657* get_arrResponse_0() const { return ___arrResponse_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_arrResponse_0() { return &___arrResponse_0; }
	inline void set_arrResponse_0(ByteU5BU5D_t4116647657* value)
	{
		___arrResponse_0 = value;
		Il2CppCodeGenWriteBarrier((&___arrResponse_0), value);
	}

	inline static int32_t get_offset_of_cadMrm_1() { return static_cast<int32_t>(offsetof(ProcessMessageRes_t3710547145, ___cadMrm_1)); }
	inline CADMethodReturnMessage_t28129847 * get_cadMrm_1() const { return ___cadMrm_1; }
	inline CADMethodReturnMessage_t28129847 ** get_address_of_cadMrm_1() { return &___cadMrm_1; }
	inline void set_cadMrm_1(CADMethodReturnMessage_t28129847 * value)
	{
		___cadMrm_1 = value;
		Il2CppCodeGenWriteBarrier((&___cadMrm_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes
struct ProcessMessageRes_t3710547145_marshaled_pinvoke
{
	uint8_t* ___arrResponse_0;
	CADMethodReturnMessage_t28129847 * ___cadMrm_1;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes
struct ProcessMessageRes_t3710547145_marshaled_com
{
	uint8_t* ___arrResponse_0;
	CADMethodReturnMessage_t28129847 * ___cadMrm_1;
};
#endif // PROCESSMESSAGERES_T3710547145_H
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
#ifndef REMOTEACTIVATIONATTRIBUTE_T3014698143_H
#define REMOTEACTIVATIONATTRIBUTE_T3014698143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivationAttribute
struct  RemoteActivationAttribute_t3014698143  : public Attribute_t861562559
{
public:
	// System.Collections.IList System.Runtime.Remoting.Activation.RemoteActivationAttribute::_contextProperties
	RuntimeObject* ____contextProperties_0;

public:
	inline static int32_t get_offset_of__contextProperties_0() { return static_cast<int32_t>(offsetof(RemoteActivationAttribute_t3014698143, ____contextProperties_0)); }
	inline RuntimeObject* get__contextProperties_0() const { return ____contextProperties_0; }
	inline RuntimeObject** get_address_of__contextProperties_0() { return &____contextProperties_0; }
	inline void set__contextProperties_0(RuntimeObject* value)
	{
		____contextProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____contextProperties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATIONATTRIBUTE_T3014698143_H
#ifndef REMOTEACTIVATOR_T2150046731_H
#define REMOTEACTIVATOR_T2150046731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t2150046731  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T2150046731_H
#ifndef CONTEXTBOUNDOBJECT_T1394786030_H
#define CONTEXTBOUNDOBJECT_T1394786030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1394786030  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1394786030_H
#ifndef BASECHANNELWITHPROPERTIES_T4038062212_H
#define BASECHANNELWITHPROPERTIES_T4038062212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.BaseChannelWithProperties
struct  BaseChannelWithProperties_t4038062212  : public BaseChannelObjectWithProperties_t2679029464
{
public:
	// System.Runtime.Remoting.Channels.IChannelSinkBase System.Runtime.Remoting.Channels.BaseChannelWithProperties::SinksWithProperties
	RuntimeObject* ___SinksWithProperties_1;

public:
	inline static int32_t get_offset_of_SinksWithProperties_1() { return static_cast<int32_t>(offsetof(BaseChannelWithProperties_t4038062212, ___SinksWithProperties_1)); }
	inline RuntimeObject* get_SinksWithProperties_1() const { return ___SinksWithProperties_1; }
	inline RuntimeObject** get_address_of_SinksWithProperties_1() { return &___SinksWithProperties_1; }
	inline void set_SinksWithProperties_1(RuntimeObject* value)
	{
		___SinksWithProperties_1 = value;
		Il2CppCodeGenWriteBarrier((&___SinksWithProperties_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECHANNELWITHPROPERTIES_T4038062212_H
#ifndef BASECHANNELSINKWITHPROPERTIES_T583264687_H
#define BASECHANNELSINKWITHPROPERTIES_T583264687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.BaseChannelSinkWithProperties
struct  BaseChannelSinkWithProperties_t583264687  : public BaseChannelObjectWithProperties_t2679029464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECHANNELSINKWITHPROPERTIES_T583264687_H
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
#ifndef ACTIVATORLEVEL_T2747033636_H
#define ACTIVATORLEVEL_T2747033636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivatorLevel
struct  ActivatorLevel_t2747033636 
{
public:
	// System.Int32 System.Runtime.Remoting.Activation.ActivatorLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActivatorLevel_t2747033636, ___value___1)); }
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
#endif // ACTIVATORLEVEL_T2747033636_H
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
#ifndef CONTEXTCALLBACKOBJECT_T2292721408_H
#define CONTEXTCALLBACKOBJECT_T2292721408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t2292721408  : public ContextBoundObject_t1394786030
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T2292721408_H
#ifndef SYNCHRONIZATIONATTRIBUTE_T3946661254_H
#define SYNCHRONIZATIONATTRIBUTE_T3946661254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t3946661254  : public ContextAttribute_t1328788465
{
public:
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_5;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_6;
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_locked
	bool ____locked_7;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_8;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t3066672582 * ____mutex_9;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t2300836069 * ____ownerThread_10;

public:
	inline static int32_t get_offset_of__bReEntrant_5() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3946661254, ____bReEntrant_5)); }
	inline bool get__bReEntrant_5() const { return ____bReEntrant_5; }
	inline bool* get_address_of__bReEntrant_5() { return &____bReEntrant_5; }
	inline void set__bReEntrant_5(bool value)
	{
		____bReEntrant_5 = value;
	}

	inline static int32_t get_offset_of__flavor_6() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3946661254, ____flavor_6)); }
	inline int32_t get__flavor_6() const { return ____flavor_6; }
	inline int32_t* get_address_of__flavor_6() { return &____flavor_6; }
	inline void set__flavor_6(int32_t value)
	{
		____flavor_6 = value;
	}

	inline static int32_t get_offset_of__locked_7() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3946661254, ____locked_7)); }
	inline bool get__locked_7() const { return ____locked_7; }
	inline bool* get_address_of__locked_7() { return &____locked_7; }
	inline void set__locked_7(bool value)
	{
		____locked_7 = value;
	}

	inline static int32_t get_offset_of__lockCount_8() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3946661254, ____lockCount_8)); }
	inline int32_t get__lockCount_8() const { return ____lockCount_8; }
	inline int32_t* get_address_of__lockCount_8() { return &____lockCount_8; }
	inline void set__lockCount_8(int32_t value)
	{
		____lockCount_8 = value;
	}

	inline static int32_t get_offset_of__mutex_9() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3946661254, ____mutex_9)); }
	inline Mutex_t3066672582 * get__mutex_9() const { return ____mutex_9; }
	inline Mutex_t3066672582 ** get_address_of__mutex_9() { return &____mutex_9; }
	inline void set__mutex_9(Mutex_t3066672582 * value)
	{
		____mutex_9 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_9), value);
	}

	inline static int32_t get_offset_of__ownerThread_10() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3946661254, ____ownerThread_10)); }
	inline Thread_t2300836069 * get__ownerThread_10() const { return ____ownerThread_10; }
	inline Thread_t2300836069 ** get_address_of__ownerThread_10() { return &____ownerThread_10; }
	inline void set__ownerThread_10(Thread_t2300836069 * value)
	{
		____ownerThread_10 = value;
		Il2CppCodeGenWriteBarrier((&____ownerThread_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONATTRIBUTE_T3946661254_H
#ifndef CLIENTSPONSOR_T2806448278_H
#define CLIENTSPONSOR_T2806448278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.ClientSponsor
struct  ClientSponsor_t2806448278  : public MarshalByRefObject_t2760389100
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.ClientSponsor::renewal_time
	TimeSpan_t881159249  ___renewal_time_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Lifetime.ClientSponsor::registered_objects
	Hashtable_t1853889766 * ___registered_objects_2;

public:
	inline static int32_t get_offset_of_renewal_time_1() { return static_cast<int32_t>(offsetof(ClientSponsor_t2806448278, ___renewal_time_1)); }
	inline TimeSpan_t881159249  get_renewal_time_1() const { return ___renewal_time_1; }
	inline TimeSpan_t881159249 * get_address_of_renewal_time_1() { return &___renewal_time_1; }
	inline void set_renewal_time_1(TimeSpan_t881159249  value)
	{
		___renewal_time_1 = value;
	}

	inline static int32_t get_offset_of_registered_objects_2() { return static_cast<int32_t>(offsetof(ClientSponsor_t2806448278, ___registered_objects_2)); }
	inline Hashtable_t1853889766 * get_registered_objects_2() const { return ___registered_objects_2; }
	inline Hashtable_t1853889766 ** get_address_of_registered_objects_2() { return &___registered_objects_2; }
	inline void set_registered_objects_2(Hashtable_t1853889766 * value)
	{
		___registered_objects_2 = value;
		Il2CppCodeGenWriteBarrier((&___registered_objects_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSPONSOR_T2806448278_H
#ifndef SERVERPROCESSING_T2715069291_H
#define SERVERPROCESSING_T2715069291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ServerProcessing
struct  ServerProcessing_t2715069291 
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.ServerProcessing::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ServerProcessing_t2715069291, ___value___1)); }
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
#endif // SERVERPROCESSING_T2715069291_H
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
#ifndef ASYNCRESULT_T4194309572_H
#define ASYNCRESULT_T4194309572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.AsyncResult
struct  AsyncResult_t4194309572  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject * ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t1743403487 * ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject * ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	intptr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject * ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject * ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t1748372627 * ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t1748372627 * ___original_10;
	// System.Int32 System.Runtime.Remoting.Messaging.AsyncResult::gchandle
	int32_t ___gchandle_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t2807636944 * ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;

public:
	inline static int32_t get_offset_of_async_state_0() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___async_state_0)); }
	inline RuntimeObject * get_async_state_0() const { return ___async_state_0; }
	inline RuntimeObject ** get_address_of_async_state_0() { return &___async_state_0; }
	inline void set_async_state_0(RuntimeObject * value)
	{
		___async_state_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___handle_1)); }
	inline WaitHandle_t1743403487 * get_handle_1() const { return ___handle_1; }
	inline WaitHandle_t1743403487 ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(WaitHandle_t1743403487 * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_async_delegate_2() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___async_delegate_2)); }
	inline RuntimeObject * get_async_delegate_2() const { return ___async_delegate_2; }
	inline RuntimeObject ** get_address_of_async_delegate_2() { return &___async_delegate_2; }
	inline void set_async_delegate_2(RuntimeObject * value)
	{
		___async_delegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___async_delegate_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___data_3)); }
	inline intptr_t get_data_3() const { return ___data_3; }
	inline intptr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(intptr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_object_data_4() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___object_data_4)); }
	inline RuntimeObject * get_object_data_4() const { return ___object_data_4; }
	inline RuntimeObject ** get_address_of_object_data_4() { return &___object_data_4; }
	inline void set_object_data_4(RuntimeObject * value)
	{
		___object_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___object_data_4), value);
	}

	inline static int32_t get_offset_of_sync_completed_5() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___sync_completed_5)); }
	inline bool get_sync_completed_5() const { return ___sync_completed_5; }
	inline bool* get_address_of_sync_completed_5() { return &___sync_completed_5; }
	inline void set_sync_completed_5(bool value)
	{
		___sync_completed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_endinvoke_called_7() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___endinvoke_called_7)); }
	inline bool get_endinvoke_called_7() const { return ___endinvoke_called_7; }
	inline bool* get_address_of_endinvoke_called_7() { return &___endinvoke_called_7; }
	inline void set_endinvoke_called_7(bool value)
	{
		___endinvoke_called_7 = value;
	}

	inline static int32_t get_offset_of_async_callback_8() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___async_callback_8)); }
	inline RuntimeObject * get_async_callback_8() const { return ___async_callback_8; }
	inline RuntimeObject ** get_address_of_async_callback_8() { return &___async_callback_8; }
	inline void set_async_callback_8(RuntimeObject * value)
	{
		___async_callback_8 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_8), value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___current_9)); }
	inline ExecutionContext_t1748372627 * get_current_9() const { return ___current_9; }
	inline ExecutionContext_t1748372627 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(ExecutionContext_t1748372627 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier((&___current_9), value);
	}

	inline static int32_t get_offset_of_original_10() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___original_10)); }
	inline ExecutionContext_t1748372627 * get_original_10() const { return ___original_10; }
	inline ExecutionContext_t1748372627 ** get_address_of_original_10() { return &___original_10; }
	inline void set_original_10(ExecutionContext_t1748372627 * value)
	{
		___original_10 = value;
		Il2CppCodeGenWriteBarrier((&___original_10), value);
	}

	inline static int32_t get_offset_of_gchandle_11() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___gchandle_11)); }
	inline int32_t get_gchandle_11() const { return ___gchandle_11; }
	inline int32_t* get_address_of_gchandle_11() { return &___gchandle_11; }
	inline void set_gchandle_11(int32_t value)
	{
		___gchandle_11 = value;
	}

	inline static int32_t get_offset_of_call_message_12() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___call_message_12)); }
	inline MonoMethodMessage_t2807636944 * get_call_message_12() const { return ___call_message_12; }
	inline MonoMethodMessage_t2807636944 ** get_address_of_call_message_12() { return &___call_message_12; }
	inline void set_call_message_12(MonoMethodMessage_t2807636944 * value)
	{
		___call_message_12 = value;
		Il2CppCodeGenWriteBarrier((&___call_message_12), value);
	}

	inline static int32_t get_offset_of_message_ctrl_13() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___message_ctrl_13)); }
	inline RuntimeObject* get_message_ctrl_13() const { return ___message_ctrl_13; }
	inline RuntimeObject** get_address_of_message_ctrl_13() { return &___message_ctrl_13; }
	inline void set_message_ctrl_13(RuntimeObject* value)
	{
		___message_ctrl_13 = value;
		Il2CppCodeGenWriteBarrier((&___message_ctrl_13), value);
	}

	inline static int32_t get_offset_of_reply_message_14() { return static_cast<int32_t>(offsetof(AsyncResult_t4194309572, ___reply_message_14)); }
	inline RuntimeObject* get_reply_message_14() const { return ___reply_message_14; }
	inline RuntimeObject** get_address_of_reply_message_14() { return &___reply_message_14; }
	inline void set_reply_message_14(RuntimeObject* value)
	{
		___reply_message_14 = value;
		Il2CppCodeGenWriteBarrier((&___reply_message_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCRESULT_T4194309572_H
#ifndef URLATTRIBUTE_T221584584_H
#define URLATTRIBUTE_T221584584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t221584584  : public ContextAttribute_t1328788465
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t221584584, ___url_1)); }
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
#endif // URLATTRIBUTE_T221584584_H
#ifndef ARGINFOTYPE_T1035054221_H
#define ARGINFOTYPE_T1035054221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfoType
struct  ArgInfoType_t1035054221 
{
public:
	// System.Byte System.Runtime.Remoting.Messaging.ArgInfoType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ArgInfoType_t1035054221, ___value___1)); }
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
#endif // ARGINFOTYPE_T1035054221_H
#ifndef LIFETIMESERVICES_T3061370510_H
#define LIFETIMESERVICES_T3061370510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t3061370510  : public RuntimeObject
{
public:

public:
};

struct LifetimeServices_t3061370510_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t881159249  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t881159249  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t881159249  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t881159249  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t3648745595 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t3061370510_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t881159249  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t881159249 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t881159249  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t3061370510_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t881159249  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t881159249 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t881159249  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t3061370510_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t881159249  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t881159249 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t881159249  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t3061370510_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t881159249  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t881159249 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t881159249  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t3061370510_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t3648745595 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t3648745595 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t3648745595 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____leaseManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIFETIMESERVICES_T3061370510_H
#ifndef LEASESTATE_T747101024_H
#define LEASESTATE_T747101024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseState
struct  LeaseState_t747101024 
{
public:
	// System.Int32 System.Runtime.Remoting.Lifetime.LeaseState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaseState_t747101024, ___value___1)); }
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
#endif // LEASESTATE_T747101024_H
#ifndef CONTEXT_T3285446944_H
#define CONTEXT_T3285446944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t3285446944  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	uintptr_t ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t2843939325* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t2718874744 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t652373272 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t2292721408 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___static_data_2)); }
	inline uintptr_t get_static_data_2() const { return ___static_data_2; }
	inline uintptr_t* get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(uintptr_t value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___server_context_sink_chain_4)); }
	inline RuntimeObject* get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(RuntimeObject* value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_4), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___client_context_sink_chain_5)); }
	inline RuntimeObject* get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(RuntimeObject* value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_5), value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___datastore_6)); }
	inline ObjectU5BU5D_t2843939325* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t2843939325* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_6), value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___context_properties_7)); }
	inline ArrayList_t2718874744 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t2718874744 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t2718874744 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_7), value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t652373272 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t652373272 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t652373272 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_12), value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t3285446944, ___callback_object_13)); }
	inline ContextCallbackObject_t2292721408 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t2292721408 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t2292721408 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_13), value);
	}
};

struct Context_t3285446944_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t1853889766 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t652373272 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t3285446944_StaticFields, ___default_server_context_sink_3)); }
	inline RuntimeObject* get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline RuntimeObject** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(RuntimeObject* value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_3), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t3285446944_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t3285446944_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t1853889766 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t1853889766 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t1853889766 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier((&___namedSlots_10), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t3285446944_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t652373272 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t652373272 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t652373272 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T3285446944_H
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
#ifndef LEASE_T4051722892_H
#define LEASE_T4051722892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease
struct  Lease_t4051722892  : public MarshalByRefObject_t2760389100
{
public:
	// System.DateTime System.Runtime.Remoting.Lifetime.Lease::_leaseExpireTime
	DateTime_t3738529785  ____leaseExpireTime_1;
	// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::_currentState
	int32_t ____currentState_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_initialLeaseTime
	TimeSpan_t881159249  ____initialLeaseTime_3;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_renewOnCallTime
	TimeSpan_t881159249  ____renewOnCallTime_4;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_sponsorshipTimeout
	TimeSpan_t881159249  ____sponsorshipTimeout_5;
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.Lease::_sponsors
	ArrayList_t2718874744 * ____sponsors_6;
	// System.Collections.Queue System.Runtime.Remoting.Lifetime.Lease::_renewingSponsors
	Queue_t3637523393 * ____renewingSponsors_7;
	// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate System.Runtime.Remoting.Lifetime.Lease::_renewalDelegate
	RenewalDelegate_t3744801856 * ____renewalDelegate_8;

public:
	inline static int32_t get_offset_of__leaseExpireTime_1() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____leaseExpireTime_1)); }
	inline DateTime_t3738529785  get__leaseExpireTime_1() const { return ____leaseExpireTime_1; }
	inline DateTime_t3738529785 * get_address_of__leaseExpireTime_1() { return &____leaseExpireTime_1; }
	inline void set__leaseExpireTime_1(DateTime_t3738529785  value)
	{
		____leaseExpireTime_1 = value;
	}

	inline static int32_t get_offset_of__currentState_2() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____currentState_2)); }
	inline int32_t get__currentState_2() const { return ____currentState_2; }
	inline int32_t* get_address_of__currentState_2() { return &____currentState_2; }
	inline void set__currentState_2(int32_t value)
	{
		____currentState_2 = value;
	}

	inline static int32_t get_offset_of__initialLeaseTime_3() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____initialLeaseTime_3)); }
	inline TimeSpan_t881159249  get__initialLeaseTime_3() const { return ____initialLeaseTime_3; }
	inline TimeSpan_t881159249 * get_address_of__initialLeaseTime_3() { return &____initialLeaseTime_3; }
	inline void set__initialLeaseTime_3(TimeSpan_t881159249  value)
	{
		____initialLeaseTime_3 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_4() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____renewOnCallTime_4)); }
	inline TimeSpan_t881159249  get__renewOnCallTime_4() const { return ____renewOnCallTime_4; }
	inline TimeSpan_t881159249 * get_address_of__renewOnCallTime_4() { return &____renewOnCallTime_4; }
	inline void set__renewOnCallTime_4(TimeSpan_t881159249  value)
	{
		____renewOnCallTime_4 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_5() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____sponsorshipTimeout_5)); }
	inline TimeSpan_t881159249  get__sponsorshipTimeout_5() const { return ____sponsorshipTimeout_5; }
	inline TimeSpan_t881159249 * get_address_of__sponsorshipTimeout_5() { return &____sponsorshipTimeout_5; }
	inline void set__sponsorshipTimeout_5(TimeSpan_t881159249  value)
	{
		____sponsorshipTimeout_5 = value;
	}

	inline static int32_t get_offset_of__sponsors_6() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____sponsors_6)); }
	inline ArrayList_t2718874744 * get__sponsors_6() const { return ____sponsors_6; }
	inline ArrayList_t2718874744 ** get_address_of__sponsors_6() { return &____sponsors_6; }
	inline void set__sponsors_6(ArrayList_t2718874744 * value)
	{
		____sponsors_6 = value;
		Il2CppCodeGenWriteBarrier((&____sponsors_6), value);
	}

	inline static int32_t get_offset_of__renewingSponsors_7() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____renewingSponsors_7)); }
	inline Queue_t3637523393 * get__renewingSponsors_7() const { return ____renewingSponsors_7; }
	inline Queue_t3637523393 ** get_address_of__renewingSponsors_7() { return &____renewingSponsors_7; }
	inline void set__renewingSponsors_7(Queue_t3637523393 * value)
	{
		____renewingSponsors_7 = value;
		Il2CppCodeGenWriteBarrier((&____renewingSponsors_7), value);
	}

	inline static int32_t get_offset_of__renewalDelegate_8() { return static_cast<int32_t>(offsetof(Lease_t4051722892, ____renewalDelegate_8)); }
	inline RenewalDelegate_t3744801856 * get__renewalDelegate_8() const { return ____renewalDelegate_8; }
	inline RenewalDelegate_t3744801856 ** get_address_of__renewalDelegate_8() { return &____renewalDelegate_8; }
	inline void set__renewalDelegate_8(RenewalDelegate_t3744801856 * value)
	{
		____renewalDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____renewalDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASE_T4051722892_H
#ifndef RENEWALDELEGATE_T3744801856_H
#define RENEWALDELEGATE_T3744801856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct  RenewalDelegate_t3744801856  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENEWALDELEGATE_T3744801856_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (ActivationServices_t4161385317), -1, sizeof(ActivationServices_t4161385317_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable911[1] = 
{
	ActivationServices_t4161385317_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (ActivatorLevel_t2747033636)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable912[6] = 
{
	ActivatorLevel_t2747033636::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (AppDomainLevelActivator_t643114572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable913[2] = 
{
	AppDomainLevelActivator_t643114572::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t643114572::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (ConstructionLevelActivator_t842337821), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (ContextLevelActivator_t975223365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable915[1] = 
{
	ContextLevelActivator_t975223365::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (RemoteActivationAttribute_t3014698143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable919[1] = 
{
	RemoteActivationAttribute_t3014698143::get_offset_of__contextProperties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (RemoteActivator_t2150046731), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (UrlAttribute_t221584584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable921[1] = 
{
	UrlAttribute_t221584584::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (AggregateDictionary_t3566733289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable922[3] = 
{
	AggregateDictionary_t3566733289::get_offset_of_dictionaries_0(),
	AggregateDictionary_t3566733289::get_offset_of__values_1(),
	AggregateDictionary_t3566733289::get_offset_of__keys_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (AggregateEnumerator_t2557990122), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable923[3] = 
{
	AggregateEnumerator_t2557990122::get_offset_of_dictionaries_0(),
	AggregateEnumerator_t2557990122::get_offset_of_pos_1(),
	AggregateEnumerator_t2557990122::get_offset_of_currente_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (BaseChannelObjectWithProperties_t2679029464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable924[1] = 
{
	BaseChannelObjectWithProperties_t2679029464::get_offset_of_table_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (BaseChannelSinkWithProperties_t583264687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (BaseChannelWithProperties_t4038062212), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[1] = 
{
	BaseChannelWithProperties_t4038062212::get_offset_of_SinksWithProperties_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (ChannelDataStore_t74591489), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable927[2] = 
{
	ChannelDataStore_t74591489::get_offset_of__channelURIs_0(),
	ChannelDataStore_t74591489::get_offset_of__extraData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (ChannelInfo_t2064577689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable928[1] = 
{
	ChannelInfo_t2064577689::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (ChannelServices_t3942013484), -1, sizeof(ChannelServices_t3942013484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable929[5] = 
{
	ChannelServices_t3942013484_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t3942013484_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t3942013484_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t3942013484_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t3942013484_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (ExceptionFilterSink_t1968360421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable930[2] = 
{
	ExceptionFilterSink_t1968360421::get_offset_of__next_0(),
	ExceptionFilterSink_t1968360421::get_offset_of__call_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (ChanelSinkStackEntry_t862199498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[3] = 
{
	ChanelSinkStackEntry_t862199498::get_offset_of_Sink_0(),
	ChanelSinkStackEntry_t862199498::get_offset_of_State_1(),
	ChanelSinkStackEntry_t862199498::get_offset_of_Next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (ClientChannelSinkStack_t166555188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[2] = 
{
	ClientChannelSinkStack_t166555188::get_offset_of__replySink_0(),
	ClientChannelSinkStack_t166555188::get_offset_of__sinkStack_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CrossAppDomainData_t2130208023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable933[3] = 
{
	CrossAppDomainData_t2130208023::get_offset_of__ContextID_0(),
	CrossAppDomainData_t2130208023::get_offset_of__DomainID_1(),
	CrossAppDomainData_t2130208023::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (CrossAppDomainChannel_t1606809047), -1, sizeof(CrossAppDomainChannel_t1606809047_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable934[3] = 
{
	0,
	0,
	CrossAppDomainChannel_t1606809047_StaticFields::get_offset_of_s_lock_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (CrossAppDomainSink_t2177102621), -1, sizeof(CrossAppDomainSink_t2177102621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable935[3] = 
{
	CrossAppDomainSink_t2177102621_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t2177102621_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t2177102621::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (ProcessMessageRes_t3710547145)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable936[2] = 
{
	ProcessMessageRes_t3710547145::get_offset_of_arrResponse_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProcessMessageRes_t3710547145::get_offset_of_cadMrm_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (CADSerializer_t3804327066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (AsyncRequest_t1108467204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[2] = 
{
	AsyncRequest_t1108467204::get_offset_of_ReplySink_0(),
	AsyncRequest_t1108467204::get_offset_of_MsgRequest_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (ServerChannelSinkStack_t3682945724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable958[1] = 
{
	ServerChannelSinkStack_t3682945724::get_offset_of__sinkStack_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (ServerDispatchSink_t2676000070), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (ServerDispatchSinkProvider_t2241602845), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (ServerProcessing_t2715069291)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable961[4] = 
{
	ServerProcessing_t2715069291::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (SinkProviderData_t4151372974), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable962[3] = 
{
	SinkProviderData_t4151372974::get_offset_of_sinkName_0(),
	SinkProviderData_t4151372974::get_offset_of_children_1(),
	SinkProviderData_t4151372974::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (TransportHeaders_t3566514082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable963[1] = 
{
	TransportHeaders_t3566514082::get_offset_of_hash_table_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (Context_t3285446944), -1, sizeof(Context_t3285446944_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable964[14] = 
{
	Context_t3285446944::get_offset_of_domain_id_0(),
	Context_t3285446944::get_offset_of_context_id_1(),
	Context_t3285446944::get_offset_of_static_data_2(),
	Context_t3285446944_StaticFields::get_offset_of_default_server_context_sink_3(),
	Context_t3285446944::get_offset_of_server_context_sink_chain_4(),
	Context_t3285446944::get_offset_of_client_context_sink_chain_5(),
	Context_t3285446944::get_offset_of_datastore_6(),
	Context_t3285446944::get_offset_of_context_properties_7(),
	Context_t3285446944::get_offset_of_frozen_8(),
	Context_t3285446944_StaticFields::get_offset_of_global_count_9(),
	Context_t3285446944_StaticFields::get_offset_of_namedSlots_10(),
	Context_t3285446944_StaticFields::get_offset_of_global_dynamic_properties_11(),
	Context_t3285446944::get_offset_of_context_dynamic_properties_12(),
	Context_t3285446944::get_offset_of_callback_object_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (DynamicPropertyCollection_t652373272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable965[1] = 
{
	DynamicPropertyCollection_t652373272::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (DynamicPropertyReg_t4086779412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable966[2] = 
{
	DynamicPropertyReg_t4086779412::get_offset_of_Property_0(),
	DynamicPropertyReg_t4086779412::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (ContextCallbackObject_t2292721408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (ContextAttribute_t1328788465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable968[1] = 
{
	ContextAttribute_t1328788465::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (ContextProperty_t3987118631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable969[2] = 
{
	ContextProperty_t3987118631::get_offset_of_name_0(),
	ContextProperty_t3987118631::get_offset_of_prop_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (CrossContextChannel_t4063984580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (ContextRestoreSink_t687410643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable971[3] = 
{
	ContextRestoreSink_t687410643::get_offset_of__next_0(),
	ContextRestoreSink_t687410643::get_offset_of__context_1(),
	ContextRestoreSink_t687410643::get_offset_of__call_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (SynchronizationAttribute_t3946661254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable982[10] = 
{
	0,
	0,
	0,
	0,
	SynchronizationAttribute_t3946661254::get_offset_of__bReEntrant_5(),
	SynchronizationAttribute_t3946661254::get_offset_of__flavor_6(),
	SynchronizationAttribute_t3946661254::get_offset_of__locked_7(),
	SynchronizationAttribute_t3946661254::get_offset_of__lockCount_8(),
	SynchronizationAttribute_t3946661254::get_offset_of__mutex_9(),
	SynchronizationAttribute_t3946661254::get_offset_of__ownerThread_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (SynchronizedClientContextSink_t1886771601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable983[2] = 
{
	SynchronizedClientContextSink_t1886771601::get_offset_of__next_0(),
	SynchronizedClientContextSink_t1886771601::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (SynchronizedServerContextSink_t2776015682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable984[2] = 
{
	SynchronizedServerContextSink_t2776015682::get_offset_of__next_0(),
	SynchronizedServerContextSink_t2776015682::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (SynchronizedContextReplySink_t3770922650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[3] = 
{
	SynchronizedContextReplySink_t3770922650::get_offset_of__next_0(),
	SynchronizedContextReplySink_t3770922650::get_offset_of__newLock_1(),
	SynchronizedContextReplySink_t3770922650::get_offset_of__att_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (ClientSponsor_t2806448278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable986[2] = 
{
	ClientSponsor_t2806448278::get_offset_of_renewal_time_1(),
	ClientSponsor_t2806448278::get_offset_of_registered_objects_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (Lease_t4051722892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[8] = 
{
	Lease_t4051722892::get_offset_of__leaseExpireTime_1(),
	Lease_t4051722892::get_offset_of__currentState_2(),
	Lease_t4051722892::get_offset_of__initialLeaseTime_3(),
	Lease_t4051722892::get_offset_of__renewOnCallTime_4(),
	Lease_t4051722892::get_offset_of__sponsorshipTimeout_5(),
	Lease_t4051722892::get_offset_of__sponsors_6(),
	Lease_t4051722892::get_offset_of__renewingSponsors_7(),
	Lease_t4051722892::get_offset_of__renewalDelegate_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (RenewalDelegate_t3744801856), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (LeaseManager_t3648745595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[2] = 
{
	LeaseManager_t3648745595::get_offset_of__objects_0(),
	LeaseManager_t3648745595::get_offset_of__timer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (LeaseSink_t3666380219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable992[1] = 
{
	LeaseSink_t3666380219::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (LeaseState_t747101024)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable993[6] = 
{
	LeaseState_t747101024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (LifetimeServices_t3061370510), -1, sizeof(LifetimeServices_t3061370510_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable994[5] = 
{
	LifetimeServices_t3061370510_StaticFields::get_offset_of__leaseManagerPollTime_0(),
	LifetimeServices_t3061370510_StaticFields::get_offset_of__leaseTime_1(),
	LifetimeServices_t3061370510_StaticFields::get_offset_of__renewOnCallTime_2(),
	LifetimeServices_t3061370510_StaticFields::get_offset_of__sponsorshipTimeout_3(),
	LifetimeServices_t3061370510_StaticFields::get_offset_of__leaseManager_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (ArgInfoType_t1035054221)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable995[3] = 
{
	ArgInfoType_t1035054221::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (ArgInfo_t3261134217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable996[3] = 
{
	ArgInfo_t3261134217::get_offset_of__paramMap_0(),
	ArgInfo_t3261134217::get_offset_of__inoutArgCount_1(),
	ArgInfo_t3261134217::get_offset_of__method_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (AsyncResult_t4194309572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[15] = 
{
	AsyncResult_t4194309572::get_offset_of_async_state_0(),
	AsyncResult_t4194309572::get_offset_of_handle_1(),
	AsyncResult_t4194309572::get_offset_of_async_delegate_2(),
	AsyncResult_t4194309572::get_offset_of_data_3(),
	AsyncResult_t4194309572::get_offset_of_object_data_4(),
	AsyncResult_t4194309572::get_offset_of_sync_completed_5(),
	AsyncResult_t4194309572::get_offset_of_completed_6(),
	AsyncResult_t4194309572::get_offset_of_endinvoke_called_7(),
	AsyncResult_t4194309572::get_offset_of_async_callback_8(),
	AsyncResult_t4194309572::get_offset_of_current_9(),
	AsyncResult_t4194309572::get_offset_of_original_10(),
	AsyncResult_t4194309572::get_offset_of_gchandle_11(),
	AsyncResult_t4194309572::get_offset_of_call_message_12(),
	AsyncResult_t4194309572::get_offset_of_message_ctrl_13(),
	AsyncResult_t4194309572::get_offset_of_reply_message_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (CADArgHolder_t583049314), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable998[1] = 
{
	CADArgHolder_t583049314::get_offset_of_index_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (CADObjRef_t3219127730), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable999[2] = 
{
	CADObjRef_t3219127730::get_offset_of_objref_0(),
	CADObjRef_t3219127730::get_offset_of_SourceDomain_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
