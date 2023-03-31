#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct InterfaceActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int64>
struct Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`1<System.Byte[]>
struct Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Analytics.Internal.Buffer/Token>
struct IEnumerable_1_t289E4ECA7DAEC5A3FF262752C86C9D2031E8D102;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>
struct List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.TaskFactory`1<System.Byte[]>
struct TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct TaskFactory_1_tA5E308F830038D55E1CE6BE5FEE446DA907860DD;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskFactory_1_tEAC8771A2FE22FC3892F9623A8990888D483D322;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95;
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2;
// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Unity.Services.Analytics.Internal.Buffer/Token[]
struct TokenU5BU5D_t5BC813590D629F58134F8D9B1C0ACD7DFCF43369;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1;
// Unity.Services.Analytics.Internal.AnalyticsForgetter
struct AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0;
// Unity.Services.Analytics.AnalyticsServiceInstance
struct AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62;
// Unity.Services.Analytics.Internal.AnalyticsWebRequest
struct AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// Unity.Services.Analytics.Internal.Buffer
struct Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE;
// Unity.Services.Analytics.Internal.BufferRevoked
struct BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3;
// Unity.Services.Analytics.Internal.BufferSystemCalls
struct BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Unity.Services.Analytics.ConsentCheckException
struct ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D;
// Unity.Services.Analytics.Internal.ConsentTracker
struct ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// Unity.Services.Analytics.CoreStatsHelper
struct CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Unity.Services.Analytics.Data.DataGenerator
struct DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.Services.Analytics.Platform.DeviceIdentifiersInternal
struct DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414;
// Unity.Services.Analytics.Internal.Dispatcher
struct Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Unity.Services.Analytics.Internal.Event
struct Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779;
// Unity.Services.Analytics.Internal.EventData
struct EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.Services.Analytics.Internal.GeoAPI
struct GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287;
// Unity.Services.Analytics.Internal.GeoIPResponse
struct GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Unity.Services.Analytics.Internal.IAnalyticsForgetter
struct IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18;
// Unity.Services.Analytics.IAnalyticsService
struct IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Analytics.Internal.IBuffer
struct IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82;
// Unity.Services.Analytics.Internal.IBufferSystemCalls
struct IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// Unity.Services.Analytics.Internal.IConsentTracker
struct IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550;
// Unity.Services.Analytics.ICoreStatsHelper
struct ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD;
// Unity.Services.Analytics.Data.IDataGenerator
struct IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.Analytics.Internal.IDispatcher
struct IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Unity.Services.Analytics.Internal.IGeoAPI
struct IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD;
// Unity.Services.Analytics.Platform.IIDeviceIdentifiersInternal
struct IIDeviceIdentifiersInternal_t687B1DA3AE9BF480EADAC04B587D8C7AA70B6239;
// Unity.Services.Core.Device.Internal.IInstallationId
struct IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Authentication.Internal.IPlayerId
struct IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2;
// Unity.Services.Analytics.Internal.IWebRequest
struct IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE;
// Unity.Services.Analytics.Internal.IWebRequestHelper
struct IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858;
// Unity.Services.Analytics.InternalNewPlayerHelper
struct InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Unity.Services.Analytics.Data.StdCommonParams
struct StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// Unity.Services.Analytics.TransactionCurrencyConverter
struct TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133;
// Ua2CoreInitializeCallback
struct Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Analytics.Internal.WebRequestHelper
struct WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71;
// Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53
struct U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110;
// Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54
struct U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E;
// Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19
struct U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913;
// Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33
struct U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292;
// Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732;
// Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16
struct U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467;
// Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17
struct U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60;
// Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1
struct U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084;
// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper
struct WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Ua2CoreInitializeCallback/<Initialize>d__1
struct U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76;
// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8;
// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIDeviceIdentifiersInternal_t687B1DA3AE9BF480EADAC04B587D8C7AA70B6239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral009455CBDE8F533A179F082659C0C14AA02B9158;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1478BC45A3EF425780ADB183A6419907115E223E;
IL2CPP_EXTERN_C String_t* _stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69;
IL2CPP_EXTERN_C String_t* _stringLiteral17C932391CAC9098F30A5137100A8A293752446C;
IL2CPP_EXTERN_C String_t* _stringLiteral1A59CB27F689664DF3A79EFC791CD86ACAB8FBE9;
IL2CPP_EXTERN_C String_t* _stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7;
IL2CPP_EXTERN_C String_t* _stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39;
IL2CPP_EXTERN_C String_t* _stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054;
IL2CPP_EXTERN_C String_t* _stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral28A51A51047FE7B2AF7B929A267EC4F0F3C64879;
IL2CPP_EXTERN_C String_t* _stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C;
IL2CPP_EXTERN_C String_t* _stringLiteral2FA9058042F937E20F28C101D9767EB04471A5CB;
IL2CPP_EXTERN_C String_t* _stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4;
IL2CPP_EXTERN_C String_t* _stringLiteral3E70A85646805F0D06C50AA7EAAA591D8DD27520;
IL2CPP_EXTERN_C String_t* _stringLiteral4488E94845B9ACE3166EA65DF28FEECA27B65702;
IL2CPP_EXTERN_C String_t* _stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2;
IL2CPP_EXTERN_C String_t* _stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1;
IL2CPP_EXTERN_C String_t* _stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral51CCCD16F20968673612534128B2DD828ECDCAE7;
IL2CPP_EXTERN_C String_t* _stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7;
IL2CPP_EXTERN_C String_t* _stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB;
IL2CPP_EXTERN_C String_t* _stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F;
IL2CPP_EXTERN_C String_t* _stringLiteral58A824E6D56BC39968AB94FF04C56EB1E41A4A72;
IL2CPP_EXTERN_C String_t* _stringLiteral5CD4EC817130CA9033AF4BCFA7ED48C26B484E86;
IL2CPP_EXTERN_C String_t* _stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1CF0F514CC51BB32FE1D4AC625DC653D45A9B5;
IL2CPP_EXTERN_C String_t* _stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral656574B35FE2C0EE99259961802BB9F4B3E920FE;
IL2CPP_EXTERN_C String_t* _stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F;
IL2CPP_EXTERN_C String_t* _stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1;
IL2CPP_EXTERN_C String_t* _stringLiteral7646BCA86620BEB0AC49BAFC74ADE2D236A06D5F;
IL2CPP_EXTERN_C String_t* _stringLiteral765A3DB1011D6912AD0442B4ECBE5B8BB201E1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral76DDE57466F7C53D34AD5007FB620D205EE8EA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B05DA0A68B203AD60505AA9F0C3C292F55DB675;
IL2CPP_EXTERN_C String_t* _stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924;
IL2CPP_EXTERN_C String_t* _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789;
IL2CPP_EXTERN_C String_t* _stringLiteral851B983F2B1071B01BAFFAADAAB570596B6B2564;
IL2CPP_EXTERN_C String_t* _stringLiteral87F47D94EE1EC30005CE053B6857C7BE5A9D938D;
IL2CPP_EXTERN_C String_t* _stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2;
IL2CPP_EXTERN_C String_t* _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F;
IL2CPP_EXTERN_C String_t* _stringLiteral95313AA22BE531F33DA57ED650DDA87BC0E096B9;
IL2CPP_EXTERN_C String_t* _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921;
IL2CPP_EXTERN_C String_t* _stringLiteral9629684BC30911A2DEAA94689CC844A293D35D8F;
IL2CPP_EXTERN_C String_t* _stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD;
IL2CPP_EXTERN_C String_t* _stringLiteral9A7D169CCD77E57744CC59902A52F4727E0A7C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral9B31508304BB1389A45F8BEA31F65ABBEB18C0F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEE5507D8A5957082FF9D1BA24E8DF9EE625F7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAE33F44A5A3FB00801EF36FD68C6DD4679E581C5;
IL2CPP_EXTERN_C String_t* _stringLiteralB10D0E397CF291810D70D9CF0816E69E5F68BC09;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE;
IL2CPP_EXTERN_C String_t* _stringLiteralB407584FE1D7CEEE747D9585F6F3D5A15AC3C563;
IL2CPP_EXTERN_C String_t* _stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C8982236B58D3998BB9FB59D131EF360EFB950;
IL2CPP_EXTERN_C String_t* _stringLiteralB865D689348EFE8DC34E423330CA79525B32EC1B;
IL2CPP_EXTERN_C String_t* _stringLiteralB89D9E7580D0D17D5EE1189160034601495823D1;
IL2CPP_EXTERN_C String_t* _stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78;
IL2CPP_EXTERN_C String_t* _stringLiteralB9405AACF03EA399FE3EA77E6BB8C3ADE8E58633;
IL2CPP_EXTERN_C String_t* _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF2B1FF4DF1F5D8159AD1DCED1FD87D644A5221;
IL2CPP_EXTERN_C String_t* _stringLiteralC148D8500735E59A2A93B1BCAFAD62C90726FD66;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC365F5F1C2EDA22BED613D31A3187707C16C7891;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCC423B0AD0A6684383410341BE059D3BDDEB43CA;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2D528BF710C9F50F9620968D52C2BA6394B94B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB7987EDF6148DDF774BB81BC8810F4966EBD29;
IL2CPP_EXTERN_C String_t* _stringLiteralD34286EB83758419274C686F2C77DDE12EAFF376;
IL2CPP_EXTERN_C String_t* _stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99;
IL2CPP_EXTERN_C String_t* _stringLiteralD90D9A995858BDF53E28CF2370714015239D252B;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC543083837575FBEE37F25FE1315D6165157A7F;
IL2CPP_EXTERN_C String_t* _stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE3357C44F297EFB7BFC8B87C4C3AFAB505C0C4DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178;
IL2CPP_EXTERN_C String_t* _stringLiteralE58C0F28891FF06F83079142110323B96EFE6CE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875;
IL2CPP_EXTERN_C String_t* _stringLiteralF10B3C0352D2A01D50976F0A480FC409754BACE8;
IL2CPP_EXTERN_C String_t* _stringLiteralF8CA81E2CEF238A84BADEB55AF94A1BE19C345B3;
IL2CPP_EXTERN_C String_t* _stringLiteralFA56548758688972FE7FBEFF95E84D582BD574F0;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD315BB7AF8B2446DA124F00CE3D2B3935C9F536;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583;
IL2CPP_EXTERN_C String_t* _stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m3BDC8AE70C64D136812C838E68CD967E444E1887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_mCDF40F45EACB355E722515CAC6F3C7F2BE15F5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m9FEF28B8E10055AC90B4E69EA0B3C175B31D95D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m2E163839A43246935E1E2F10D4562569833A6193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_m3D796C8ABE3BB0B875B7C126A9B70DBDD1ADD171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m72A0CDA112A40B347BD9EDA60DE9C7F83A44E811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m74C87F85700B531ECCB58617EC9404056061E496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m99E0EB0919BB36177833B6A8B511A5D1BA760077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m809AD0ECB62159AEA06F0AF0AA70379E0F464F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m49EF4F49EA7EE5708CEEAC168C8BCA246475DA53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4399B1075DC5887FD38C8D9CB39A1411BA1DD09A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2E42DF0C55EA56379957D0AA1A5215791CF71529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4B1627333D1B07FDD3D4AFBD053E0AF39A1027F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m11FA74C1FCD8AD5EA589F5FCBEC91E953FB73CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_StartNew_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m03CFC65993DF73C74BD640F4B8D2BF9C3DF83FE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CFlushBufferToServiceU3Eb__0_m293FFDEC48EBF19F3FE28566605755ECE952474A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t489BE72A981513E97FD4A68068F4E6261EFD70D5 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>
struct List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TokenU5BU5D_t5BC813590D629F58134F8D9B1C0ACD7DFCF43369* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// Unity.Services.Analytics.Internal.AnalyticsForgetter
struct AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.AnalyticsForgetter::s_CollectUrl
	String_t* ___s_CollectUrl_0;
	// System.Byte[] Unity.Services.Analytics.Internal.AnalyticsForgetter::s_Event
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_Event_1;
	// System.Action Unity.Services.Analytics.Internal.AnalyticsForgetter::s_Callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___s_Callback_2;
	// System.Boolean Unity.Services.Analytics.Internal.AnalyticsForgetter::m_SuccessfullyUploaded
	bool ___m_SuccessfullyUploaded_3;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.AnalyticsForgetter::m_Request
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___m_Request_4;
	// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.AnalyticsForgetter::<ConsentTracker>k__BackingField
	RuntimeObject* ___U3CConsentTrackerU3Ek__BackingField_5;
};

// Unity.Services.Analytics.AnalyticsService
struct AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B  : public RuntimeObject
{
};

// Unity.Services.Analytics.AnalyticsServiceInstance
struct AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IAnalyticsForgetter Unity.Services.Analytics.AnalyticsServiceInstance::analyticsForgetter
	RuntimeObject* ___analyticsForgetter_0;
	// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Analytics.AnalyticsServiceInstance::<PlayerId>k__BackingField
	RuntimeObject* ___U3CPlayerIdU3Ek__BackingField_1;
	// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.AnalyticsServiceInstance::<InstallId>k__BackingField
	RuntimeObject* ___U3CInstallIdU3Ek__BackingField_2;
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Analytics.AnalyticsServiceInstance::<CloudProjectIdProvider>k__BackingField
	RuntimeObject* ___U3CCloudProjectIdProviderU3Ek__BackingField_3;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance::<CustomAnalyticsId>k__BackingField
	String_t* ___U3CCustomAnalyticsIdU3Ek__BackingField_4;
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.AnalyticsServiceInstance::dataBuffer
	RuntimeObject* ___dataBuffer_5;
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance::m_BufferLengthAtLastGameRunning
	int32_t ___m_BufferLengthAtLastGameRunning_6;
	// Unity.Services.Analytics.Data.IDataGenerator Unity.Services.Analytics.AnalyticsServiceInstance::dataGenerator
	RuntimeObject* ___dataGenerator_7;
	// Unity.Services.Analytics.Internal.IDispatcher Unity.Services.Analytics.AnalyticsServiceInstance::<dataDispatcher>k__BackingField
	RuntimeObject* ___U3CdataDispatcherU3Ek__BackingField_8;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance::m_CollectURL
	String_t* ___m_CollectURL_9;
	// Unity.Services.Analytics.Data.StdCommonParams Unity.Services.Analytics.AnalyticsServiceInstance::m_CommonParams
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___m_CommonParams_10;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance::m_StartUpCallingId
	String_t* ___m_StartUpCallingId_11;
	// Unity.Services.Analytics.Platform.IIDeviceIdentifiersInternal Unity.Services.Analytics.AnalyticsServiceInstance::deviceIdentifiersInternal
	RuntimeObject* ___deviceIdentifiersInternal_12;
	// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::<ServiceEnabled>k__BackingField
	bool ___U3CServiceEnabledU3Ek__BackingField_13;
	// Unity.Services.Analytics.ICoreStatsHelper Unity.Services.Analytics.AnalyticsServiceInstance::m_CoreStatsHelper
	RuntimeObject* ___m_CoreStatsHelper_14;
	// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.AnalyticsServiceInstance::ConsentTracker
	RuntimeObject* ___ConsentTracker_15;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_16;
	// Unity.Services.Analytics.TransactionCurrencyConverter Unity.Services.Analytics.AnalyticsServiceInstance::converter
	TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* ___converter_17;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

// Unity.Services.Analytics.Internal.Buffer
struct Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.Buffer::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_0;
	// System.String Unity.Services.Analytics.Internal.Buffer::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_1;
	// System.String Unity.Services.Analytics.Internal.Buffer::<PlayerID>k__BackingField
	String_t* ___U3CPlayerIDU3Ek__BackingField_2;
	// System.String Unity.Services.Analytics.Internal.Buffer::<InstallID>k__BackingField
	String_t* ___U3CInstallIDU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token> Unity.Services.Analytics.Internal.Buffer::m_Tokens
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ___m_Tokens_5;
	// Unity.Services.Analytics.Internal.IBufferSystemCalls Unity.Services.Analytics.Internal.Buffer::m_EventIdGenerator
	RuntimeObject* ___m_EventIdGenerator_6;
	// System.String Unity.Services.Analytics.Internal.Buffer::m_CacheFilePath
	String_t* ___m_CacheFilePath_7;
	// System.Int64 Unity.Services.Analytics.Internal.Buffer::m_CacheFileMaximumSize
	int64_t ___m_CacheFileMaximumSize_8;
	// System.Int32 Unity.Services.Analytics.Internal.Buffer::m_DiskCacheLastFlushedToken
	int32_t ___m_DiskCacheLastFlushedToken_9;
	// System.Int64 Unity.Services.Analytics.Internal.Buffer::m_DiskCacheSize
	int64_t ___m_DiskCacheSize_10;
};

// Unity.Services.Analytics.Internal.BufferRevoked
struct BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_0;
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<InstallID>k__BackingField
	String_t* ___U3CInstallIDU3Ek__BackingField_1;
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<PlayerID>k__BackingField
	String_t* ___U3CPlayerIDU3Ek__BackingField_2;
	// System.String Unity.Services.Analytics.Internal.BufferRevoked::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_3;
};

// Unity.Services.Analytics.Internal.BufferSystemCalls
struct BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.Consent
struct Consent_tE59B226A06E74A69A39675158441582B2BBAFE1C  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.ConsentTracker
struct ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IGeoAPI Unity.Services.Analytics.Internal.ConsentTracker::m_GeoAPI
	RuntimeObject* ___m_GeoAPI_0;
	// Unity.Services.Analytics.ICoreStatsHelper Unity.Services.Analytics.Internal.ConsentTracker::m_CoreStatsHelper
	RuntimeObject* ___m_CoreStatsHelper_1;
	// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::<optInPiplConsentStatus>k__BackingField
	int32_t ___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
	// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::<optOutConsentStatus>k__BackingField
	int32_t ___U3CoptOutConsentStatusU3Ek__BackingField_3;
	// Unity.Services.Analytics.Internal.GeoIPResponse Unity.Services.Analytics.Internal.ConsentTracker::response
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___response_4;
};

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;
};

// Unity.Services.Analytics.CoreStatsHelper
struct CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.Services.Analytics.Data.DataGenerator
struct DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183  : public RuntimeObject
{
};

// Unity.Services.Analytics.Platform.DebugDevice
struct DebugDevice_t00B4BF6773F39B73295B72D11D23309486E42CCA  : public RuntimeObject
{
};

// Unity.Services.Analytics.Platform.DeviceIdentifiersInternal
struct DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414  : public RuntimeObject
{
};

// Unity.Services.Analytics.Platform.DeviceVolumeProvider
struct DeviceVolumeProvider_tCD637AE8853864FA7CE8E52A8C94F0336055A591  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.Dispatcher
struct Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.IBuffer Unity.Services.Analytics.Internal.Dispatcher::m_DataBuffer
	RuntimeObject* ___m_DataBuffer_0;
	// Unity.Services.Analytics.Internal.IWebRequestHelper Unity.Services.Analytics.Internal.Dispatcher::m_WebRequestHelper
	RuntimeObject* ___m_WebRequestHelper_1;
	// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::<FlushInProgress>k__BackingField
	bool ___U3CFlushInProgressU3Ek__BackingField_2;
	// Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.Dispatcher::m_FlushRequest
	RuntimeObject* ___m_FlushRequest_3;
	// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token> Unity.Services.Analytics.Internal.Dispatcher::m_FlushPayload
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ___m_FlushPayload_4;
	// System.String Unity.Services.Analytics.Internal.Dispatcher::<CollectUrl>k__BackingField
	String_t* ___U3CCollectUrlU3Ek__BackingField_5;
	// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.Dispatcher::<ConsentTracker>k__BackingField
	RuntimeObject* ___U3CConsentTrackerU3Ek__BackingField_6;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// Unity.Services.Analytics.Internal.EventData
struct EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Unity.Services.Analytics.Internal.EventData::<Data>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CDataU3Ek__BackingField_0;
};

// Unity.Services.Analytics.Internal.GeoAPI
struct GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.GeoAPI::m_PrivacyEndpoint
	String_t* ___m_PrivacyEndpoint_0;
};

// Unity.Services.Analytics.Internal.GeoIPResponse
struct GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Internal.GeoIPResponse::identifier
	String_t* ___identifier_0;
};

// Unity.Services.Analytics.InternalNewPlayerHelper
struct InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476  : public RuntimeObject
{
	// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.InternalNewPlayerHelper::<InstallId>k__BackingField
	RuntimeObject* ___U3CInstallIdU3Ek__BackingField_0;
};

// Unity.Services.Analytics.Internal.Locale
struct Locale_t2F0BBEF7D8C9658CC82505313A7523D8A5708513  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Unity.Services.Analytics.Platform.Runtime
struct Runtime_t3C6559AA91E989CFC20597C28EF3BD73C3CCFB8E  : public RuntimeObject
{
};

// Unity.Services.Analytics.SdkVersion
struct SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// Unity.Services.Analytics.TransactionCurrencyConverter
struct TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133  : public RuntimeObject
{
};

// Ua2CoreInitializeCallback
struct Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.Platform.UserCountry
struct UserCountry_tA3FB1E364D53F20B4498A9E0829DA584E73228C5  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Services.Analytics.Internal.WebRequestHelper
struct WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.Dispatcher Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0::<>4__this
	Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token> Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0::tokens
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ___tokens_1;
};

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper
struct WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD  : public RuntimeObject
{
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::m_AsyncOp
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___m_AsyncOp_0;
};

// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8  : public RuntimeObject
{
	// System.Action`1<System.Int64> Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::onCompleted
	Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* ___onCompleted_0;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::requestOp
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___requestOp_1;
};

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::<>4__this
	WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::tcs
	TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* ___tcs_1;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>
struct TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___m_result_38;
};

// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.Services.Analytics.Internal.Buffer/Token
struct Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 
{
	// System.String Unity.Services.Analytics.Internal.Buffer/Token::Name
	String_t* ___Name_0;
	// Unity.Services.Analytics.Internal.Buffer/TokenType Unity.Services.Analytics.Internal.Buffer/Token::Type
	int32_t ___Type_1;
	// System.Object Unity.Services.Analytics.Internal.Buffer/Token::Data
	RuntimeObject* ___Data_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Analytics.Internal.Buffer/Token
struct Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Type_1;
	Il2CppIUnknown* ___Data_2;
};
// Native definition for COM marshalling of Unity.Services.Analytics.Internal.Buffer/Token
struct Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Type_1;
	Il2CppIUnknown* ___Data_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_2;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Internal.Buffer/Token>
struct Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 ____current_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.Services.Analytics.Internal.Event
struct Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779  : public RuntimeObject
{
	// Unity.Services.Analytics.Internal.EventData Unity.Services.Analytics.Internal.Event::<Parameters>k__BackingField
	EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* ___U3CParametersU3Ek__BackingField_0;
	// System.String Unity.Services.Analytics.Internal.Event::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Unity.Services.Analytics.Internal.Event::<Version>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CVersionU3Ek__BackingField_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Services.Analytics.Data.StdCommonParams
struct StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701  : public RuntimeObject
{
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<GameStoreID>k__BackingField
	String_t* ___U3CGameStoreIDU3Ek__BackingField_0;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<GameBundleID>k__BackingField
	String_t* ___U3CGameBundleIDU3Ek__BackingField_1;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<Platform>k__BackingField
	String_t* ___U3CPlatformU3Ek__BackingField_2;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<UasUserID>k__BackingField
	String_t* ___U3CUasUserIDU3Ek__BackingField_3;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<Idfv>k__BackingField
	String_t* ___U3CIdfvU3Ek__BackingField_4;
	// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::<DeviceVolume>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CDeviceVolumeU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::<BatteryLoad>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CBatteryLoadU3Ek__BackingField_6;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<BuildGuuid>k__BackingField
	String_t* ___U3CBuildGuuidU3Ek__BackingField_7;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<ClientVersion>k__BackingField
	String_t* ___U3CClientVersionU3Ek__BackingField_8;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<UserCountry>k__BackingField
	String_t* ___U3CUserCountryU3Ek__BackingField_9;
	// System.String Unity.Services.Analytics.Data.StdCommonParams::<ProjectID>k__BackingField
	String_t* ___U3CProjectIDU3Ek__BackingField_10;
};

// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19
struct U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913  : public RuntimeObject
{
	// System.Int32 Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>t__builder
	AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.ConsentTracker Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>4__this
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* ___U3CU3E4__this_2;
	// Unity.Services.Analytics.Internal.GeoIPResponse Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<newResponse>5__1
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___U3CnewResponseU3E5__1_3;
	// Unity.Services.Analytics.Internal.GeoIPResponse Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>s__2
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___U3CU3Es__2_4;
	// Unity.Services.Analytics.ConsentCheckException Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<e>5__3
	ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* ___U3CeU3E5__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::<>u__1
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 ___U3CU3Eu__1_6;
};

// Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33
struct U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292  : public RuntimeObject
{
	// System.Int32 Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>t__builder
	AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.ConsentTracker Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>4__this
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* ___U3CU3E4__this_2;
	// Unity.Services.Analytics.Internal.GeoIPResponse Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>s__1
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___U3CU3Es__1_3;
	// Unity.Services.Analytics.ConsentCheckException Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<e>5__2
	ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* ___U3CeU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::<>u__1
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 ___U3CU3Eu__1_5;
};

// Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1
struct U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084  : public RuntimeObject
{
	// System.Int32 Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.GeoAPI Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>4__this
	GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<request>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__1_3;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<async>5__2
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___U3CasyncU3E5__2_4;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>s__3
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___U3CU3Es__3_5;
	// Unity.Services.Analytics.Internal.GeoIPResponse Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<response>5__4
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___U3CresponseU3E5__4_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::<>u__1
	TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF ___U3CU3Eu__1_7;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int64>
struct Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Func`1<System.Byte[]>
struct Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Unity.Services.Analytics.Internal.AnalyticsWebRequest
struct AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA  : public UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Services.Analytics.ConsentCheckException
struct ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
	// Unity.Services.Analytics.ConsentCheckExceptionReason Unity.Services.Analytics.ConsentCheckException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_19;
};

// Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53
struct U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110  : public RuntimeObject
{
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::cloudProjectId
	RuntimeObject* ___cloudProjectId_2;
	// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::installId
	RuntimeObject* ___installId_3;
	// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::playerId
	RuntimeObject* ___playerId_4;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::environment
	String_t* ___environment_5;
	// System.String Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::customAnalyticsId
	String_t* ___customAnalyticsId_6;
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::<>4__this
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___U3CU3E4__this_7;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_8;
};

// Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54
struct U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E  : public RuntimeObject
{
	// System.Int32 Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::<>4__this
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::<>u__1
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 ___U3CU3Eu__1_3;
};

// Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16
struct U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467  : public RuntimeObject
{
	// System.Int32 Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.Dispatcher Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::<>4__this
	Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17
struct U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60  : public RuntimeObject
{
	// System.Int32 Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Analytics.Internal.Dispatcher Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<>4__this
	Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* ___U3CU3E4__this_2;
	// Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0 Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<>8__1
	U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* ___U3CU3E8__1_3;
	// System.Threading.Tasks.Task`1<System.Byte[]> Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<task>5__2
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___U3CtaskU3E5__2_4;
	// System.Byte[] Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<postBytes>5__3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CpostBytesU3E5__3_5;
	// System.Byte[] Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<>s__4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CU3Es__4_6;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String> Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<>s__5
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 ___U3CU3Es__5_7;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.String> Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<header>5__6
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___U3CheaderU3E5__6_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::<>u__1
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 ___U3CU3Eu__1_9;
};

// Ua2CoreInitializeCallback/<Initialize>d__1
struct U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76  : public RuntimeObject
{
	// System.Int32 Ua2CoreInitializeCallback/<Initialize>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Ua2CoreInitializeCallback/<Initialize>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreRegistry Ua2CoreInitializeCallback/<Initialize>d__1::registry
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___registry_2;
	// Ua2CoreInitializeCallback Ua2CoreInitializeCallback/<Initialize>d__1::<>4__this
	Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* ___U3CU3E4__this_3;
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Ua2CoreInitializeCallback/<Initialize>d__1::<cloudProjectId>5__1
	RuntimeObject* ___U3CcloudProjectIdU3E5__1_4;
	// Unity.Services.Core.Device.Internal.IInstallationId Ua2CoreInitializeCallback/<Initialize>d__1::<installationId>5__2
	RuntimeObject* ___U3CinstallationIdU3E5__2_5;
	// Unity.Services.Authentication.Internal.IPlayerId Ua2CoreInitializeCallback/<Initialize>d__1::<playerId>5__3
	RuntimeObject* ___U3CplayerIdU3E5__3_6;
	// Unity.Services.Core.Environments.Internal.IEnvironments Ua2CoreInitializeCallback/<Initialize>d__1::<environments>5__4
	RuntimeObject* ___U3CenvironmentsU3E5__4_7;
	// Unity.Services.Core.Configuration.Internal.IProjectConfiguration Ua2CoreInitializeCallback/<Initialize>d__1::<projectConfiguration>5__5
	RuntimeObject* ___U3CprojectConfigurationU3E5__5_8;
	// System.String Ua2CoreInitializeCallback/<Initialize>d__1::<analyticsUserId>5__6
	String_t* ___U3CanalyticsUserIdU3E5__6_9;
	// System.Runtime.CompilerServices.TaskAwaiter Ua2CoreInitializeCallback/<Initialize>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_10;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Unity.Services.Analytics.AnalyticsContainer::m_HeartbeatTime
	float ___m_HeartbeatTime_8;
	// System.Single Unity.Services.Analytics.AnalyticsContainer::m_GameRunningTime
	float ___m_GameRunningTime_9;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>
struct List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TokenU5BU5D_t5BC813590D629F58134F8D9B1C0ACD7DFCF43369* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Services.Analytics.Internal.AnalyticsForgetter

// Unity.Services.Analytics.Internal.AnalyticsForgetter

// Unity.Services.Analytics.AnalyticsService
struct AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields
{
	// Unity.Services.Analytics.AnalyticsServiceInstance Unity.Services.Analytics.AnalyticsService::internalInstance
	AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* ___internalInstance_0;
};

// Unity.Services.Analytics.AnalyticsService

// Unity.Services.Analytics.AnalyticsServiceInstance

// Unity.Services.Analytics.AnalyticsServiceInstance

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.IO.BinaryReader

// System.IO.BinaryReader

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.IO.BinaryWriter

// Unity.Services.Analytics.Internal.Buffer
struct Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_StaticFields
{
	// System.String[] Unity.Services.Analytics.Internal.Buffer::k_AllDateFormats
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___k_AllDateFormats_4;
};

// Unity.Services.Analytics.Internal.Buffer

// Unity.Services.Analytics.Internal.BufferRevoked

// Unity.Services.Analytics.Internal.BufferRevoked

// Unity.Services.Analytics.Internal.BufferSystemCalls

// Unity.Services.Analytics.Internal.BufferSystemCalls

// Unity.Services.Analytics.Internal.Consent

// Unity.Services.Analytics.Internal.Consent

// Unity.Services.Analytics.Internal.ConsentTracker

// Unity.Services.Analytics.Internal.ConsentTracker

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.CoreRegistry

// Unity.Services.Analytics.CoreStatsHelper

// Unity.Services.Analytics.CoreStatsHelper

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// Unity.Services.Analytics.Data.DataGenerator

// Unity.Services.Analytics.Data.DataGenerator

// Unity.Services.Analytics.Platform.DebugDevice

// Unity.Services.Analytics.Platform.DebugDevice

// Unity.Services.Analytics.Platform.DeviceIdentifiersInternal

// Unity.Services.Analytics.Platform.DeviceIdentifiersInternal

// Unity.Services.Analytics.Platform.DeviceVolumeProvider

// Unity.Services.Analytics.Platform.DeviceVolumeProvider

// Unity.Services.Analytics.Internal.Dispatcher

// Unity.Services.Analytics.Internal.Dispatcher

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// Unity.Services.Analytics.Internal.EventData

// Unity.Services.Analytics.Internal.EventData

// Unity.Services.Analytics.Internal.GeoAPI

// Unity.Services.Analytics.Internal.GeoAPI

// Unity.Services.Analytics.Internal.GeoIPResponse

// Unity.Services.Analytics.Internal.GeoIPResponse

// Unity.Services.Analytics.InternalNewPlayerHelper

// Unity.Services.Analytics.InternalNewPlayerHelper

// Unity.Services.Analytics.Internal.Locale

// Unity.Services.Analytics.Internal.Locale

// Unity.Services.Analytics.Platform.Runtime

// Unity.Services.Analytics.Platform.Runtime

// Unity.Services.Analytics.SdkVersion
struct SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields
{
	// System.String Unity.Services.Analytics.SdkVersion::SDK_VERSION
	String_t* ___SDK_VERSION_0;
};

// Unity.Services.Analytics.SdkVersion

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// Unity.Services.Analytics.TransactionCurrencyConverter

// Unity.Services.Analytics.TransactionCurrencyConverter

// Ua2CoreInitializeCallback

// Ua2CoreInitializeCallback

// Unity.Services.Analytics.Internal.Platform.UserCountry

// Unity.Services.Analytics.Internal.Platform.UserCountry

// Unity.Services.Analytics.Internal.WebRequestHelper

// Unity.Services.Analytics.Internal.WebRequestHelper

// Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0

// Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper

// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0

// Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0

// Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA5E308F830038D55E1CE6BE5FEE446DA907860DD* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tEAC8771A2FE22FC3892F9623A8990888D483D322* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// Unity.Services.Core.Internal.CoreRegistration

// Unity.Services.Core.Internal.CoreRegistration

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.Void

// System.Void

// Unity.Services.Analytics.Internal.Buffer/Token

// Unity.Services.Analytics.Internal.Buffer/Token

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>
struct AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Internal.Buffer/Token>

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Internal.Buffer/Token>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// Unity.Services.Analytics.Internal.Event

// Unity.Services.Analytics.Internal.Event

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Services.Analytics.Data.StdCommonParams

// Unity.Services.Analytics.Data.StdCommonParams

// System.Threading.Tasks.TaskFactory

// System.Threading.Tasks.TaskFactory

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.GameObject

// UnityEngine.GameObject

// Unity.Services.Core.RequestFailedException

// Unity.Services.Core.RequestFailedException

// Unity.Services.Core.ServicesInitializationException

// Unity.Services.Core.ServicesInitializationException

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Networking.UploadHandlerRaw

// Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19

// Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19

// Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33

// Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33

// Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1

// Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<System.Int64>

// System.Action`1<System.Int64>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`1<System.Byte[]>

// System.Func`1<System.Byte[]>

// System.Action

// System.Action

// Unity.Services.Analytics.Internal.AnalyticsWebRequest

// Unity.Services.Analytics.Internal.AnalyticsWebRequest

// Unity.Services.Analytics.ConsentCheckException

// Unity.Services.Analytics.ConsentCheckException

// Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53

// Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53

// Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54

// Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54

// Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16

// Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16

// Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17

// Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17

// Ua2CoreInitializeCallback/<Initialize>d__1

// Ua2CoreInitializeCallback/<Initialize>d__1

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Unity.Services.Analytics.AnalyticsContainer
struct AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields
{
	// System.Boolean Unity.Services.Analytics.AnalyticsContainer::s_Created
	bool ___s_Created_6;
	// UnityEngine.GameObject Unity.Services.Analytics.AnalyticsContainer::s_Container
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___s_Container_7;
	// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::<Instance>k__BackingField
	AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___U3CInstanceU3Ek__BackingField_10;
};

// Unity.Services.Analytics.AnalyticsContainer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TPackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisIl2CppFullySharedGenericAny_mC0037D9C3D926AA642C1CCFE43EB1CF8F08B8A88_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_package, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIl2CppFullySharedGenericAny_m39B2F139D6183E40C4BF47E34CE79A07F637D6FC_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisIl2CppFullySharedGenericAny_mE6FE41F488F52D5DA7C678CE949E80608E354900_gshared (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_GetServiceComponent_TisIl2CppFullySharedGenericAny_m26E5A2A0666FCF9B47AB4CD6891285167234D99B_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8* __this, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvert_DeserializeObject_TisIl2CppFullySharedGenericAny_mE887B4FC662529C0EC01965F3E537E060B13D218_gshared (String_t* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_mE5031CF7AC227B21E46267EA892356E64047FA49_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;

// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) ;
// System.Void Ua2CoreInitializeCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Ua2CoreInitializeCallback>(TPackage)
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* ___0_package, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisIl2CppFullySharedGenericAny_mC0037D9C3D926AA642C1CCFE43EB1CF8F08B8A88_gshared)((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)__this, (Il2CppFullySharedGenericAny)___0_package, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Device.Internal.IInstallationId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisIl2CppFullySharedGenericAny_m39B2F139D6183E40C4BF47E34CE79A07F637D6FC_gshared)((CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*)__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisIl2CppFullySharedGenericAny_m39B2F139D6183E40C4BF47E34CE79A07F637D6FC_gshared)((CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*)__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisIl2CppFullySharedGenericAny_m39B2F139D6183E40C4BF47E34CE79A07F637D6FC_gshared)((CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*)__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_DependsOn_TisIl2CppFullySharedGenericAny_m39B2F139D6183E40C4BF47E34CE79A07F637D6FC_gshared)((CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*)__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn<Unity.Services.Authentication.Internal.IPlayerId>()
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*, const RuntimeMethod*))CoreRegistration_OptionallyDependsOn_TisIl2CppFullySharedGenericAny_mE6FE41F488F52D5DA7C678CE949E80608E354900_gshared)((CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*)__this, method);
}
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1__ctor_m43CC7C88005E0C129817F8DDA5B774B2A2D19113 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Ua2CoreInitializeCallback/<Initialize>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisIl2CppFullySharedGenericAny_m26E5A2A0666FCF9B47AB4CD6891285167234D99B_gshared)((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Device.Internal.IInstallationId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisIl2CppFullySharedGenericAny_m26E5A2A0666FCF9B47AB4CD6891285167234D99B_gshared)((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Authentication.Internal.IPlayerId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisIl2CppFullySharedGenericAny_m26E5A2A0666FCF9B47AB4CD6891285167234D99B_gshared)((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisIl2CppFullySharedGenericAny_m26E5A2A0666FCF9B47AB4CD6891285167234D99B_gshared)((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisIl2CppFullySharedGenericAny_m26E5A2A0666FCF9B47AB4CD6891285167234D99B_gshared)((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance__ctor_m07B3F4CEF6E7821B17F294143C91FD55229AF090 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::Initialize(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_Initialize_m22E7F33CC0B3B759C865726A28FA19863D7389DB (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_cloudProjectId, RuntimeObject* ___1_installId, RuntimeObject* ___2_playerId, String_t* ___3_environment, String_t* ___4_customAnalyticsId, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Ua2CoreInitializeCallback/<Initialize>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RevokeWithForgetEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Revoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Revoke_mE996CF16F921425F885EB14591D241FAB13EE511 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked__ctor_m208AEF741C576200CF78EA83EF4DE08DBD27D0B2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9 (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Dispatcher::.ctor(Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.Internal.IWebRequestHelper,Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m4F2D8F2A3D60E40BF267F737FFE5B4225317F3B0 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___0_buffer, RuntimeObject* ___1_webRequestHelper, RuntimeObject* ___2_consentTracker, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_dataDispatcher(Unity.Services.Analytics.Internal.IDispatcher)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_dataDispatcher_mAE2E476F882FA3252C40B050D99CBAA0DAD68559_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsContainer::DestroyContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27 (const RuntimeMethod* method) ;
// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.AnalyticsServiceInstance::get_InstallId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Buffer::SaveDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Buffer_SaveDateTime_m360DA83DBB1134A447EE7EADE6F4AD40020E06CC (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::.ctor(System.String,System.String,System.String,System.String,System.Action,Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter__ctor_mA4F19D86908F6384D2B8030490DC29AC9E37AA9F (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, String_t* ___0_collectUrl, String_t* ___1_userId, String_t* ___2_timestamp, String_t* ___3_callingMethod, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_successfulUploadCallback, RuntimeObject* ___5_consentTracker, const RuntimeMethod* method) ;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Analytics.AnalyticsServiceInstance::get_CloudProjectIdProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_CloudProjectIdProvider_m971BB6E6BD8004F47A677A952C810E89A30A1CA4_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.BufferSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Buffer::.ctor(Unity.Services.Analytics.Internal.IBufferSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer__ctor_m76AFC4BEBFD8C19192BFDA8F079AD2B39A5BB93A (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, RuntimeObject* ___0_eventIdGenerator, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.DataGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Platform.DeviceIdentifiersInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceIdentifiersInternal__ctor_mE570998948E83A4393E2E9651FE7D0ADBA6CD160 (DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.CoreStatsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4 (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.TransactionCurrencyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_coreStatsHelper, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ClientVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ProjectID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_GameBundleID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Platform.Runtime::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Runtime_Name_m5691169825FA2CC731731BE5BF745118C339B1E9 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Platform(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_buildGUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BuildGuuid(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Idfv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::get_ServiceEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CloudProjectId_m99C74F5D79270202360BD822486039DFC198D378 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Analytics.AnalyticsServiceInstance::get_PlayerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_PlayerId_m0D2F879027597FF3E0653572EB04E6102A7938F3_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::GetAnalyticsUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_SessionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.IDispatcher Unity.Services.Analytics.AnalyticsServiceInstance::get_dataDispatcher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_dataDispatcher_m28C470C90EDB005FFE02125526A30DF456AB14C4_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_CloudProjectIdProvider(Unity.Services.Core.Configuration.Internal.ICloudProjectId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_CloudProjectIdProvider_m629CEFAE15BE02B276BEC2FAD642419D8E6E6D92_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_InstallId(Unity.Services.Core.Device.Internal.IInstallationId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_InstallId_m125A56DF2B78A8E5F6D27842C12258E91DC65568_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_PlayerId(Unity.Services.Authentication.Internal.IPlayerId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_PlayerId_m5B28C9692E678821579CFE4255966CC97F089D8D_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_CustomAnalyticsId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_CustomAnalyticsId_m811F510E8A5B7118BE621C0A27B2EBDFA44D15CD_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__53__ctor_m5491939CC678F7C305834EC0D08A28179078638A (U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m74C87F85700B531ECCB58617EC9404056061E496 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__54__ctor_mD29AF896260A2E90B1227A577FE6DFCF6627CED2 (U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m99E0EB0919BB36177833B6A8B511A5D1BA760077 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.String UnityEngine.SystemInfo::get_processorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D (const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Platform.DebugDevice::IsDebugDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDevice_IsDebugDevice_mA1EEB1D12950C445B81D7EBE8C254DDE2437B333 (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Locale::AnalyticsRegionLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_AnalyticsRegionLanguageCode_mBC2C7A14D9ED824729BF977BE5C1478B559BB45B (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::.ctor(Unity.Services.Core.Device.Internal.IInstallationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, RuntimeObject* ___0_installId, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.InternalNewPlayerHelper::IsNewPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalNewPlayerHelper_IsNewPlayer_mE11DEC8005D24F3B42924870C1D64FFEE878916A (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetVariableCommonParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> Unity.Services.Analytics.Platform.DeviceVolumeProvider::GetDeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 DeviceVolumeProvider_GetDeviceVolume_m1318E3ADBEF76202DE617254B3CBB6028FE3D3DE (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Nullable`1<System.Double>::.ctor(T)
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_DeviceVolume(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.SystemInfo::get_batteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SystemInfo_get_batteryLevel_m549AF9A6BB748E5C50FF2D1D04D4E9E6B1C5D8C6 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BatteryLoad(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_UasUserID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CustomAnalyticsId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetDependencies(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetDependencies_m7C79E9D3214F3D027E168348768AFD68196972B4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_cloudProjectId, RuntimeObject* ___1_installId, RuntimeObject* ___2_playerId, String_t* ___3_environment, String_t* ___4_customAnalyticsId, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsContainer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Initialize_m9246BB4ED27EDE4B07E959047A92806CD3DC4C78 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::InitializeUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_InitializeUser_mC342B361F574226BBDF056F148FAE52B90E98CFA (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m2E163839A43246935E1E2F10D4562569833A6193 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordStartupEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordStartupEvents_m91416206794DFA73F248FA6763A439FB455AF627 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse>::GetAwaiter()
inline TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7 (Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179 (TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>,Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m3BDC8AE70C64D136812C838E68CD967E444E1887 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* ___0_awaiter, U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>::GetResult()
inline GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9 (TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* __this, const RuntimeMethod* method)
{
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::OptOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_OptOut_mE80E70FBB35370154B02B32ADCED5B0EAA77B632 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.InternalNewPlayerHelper::get_InstallId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4_inline (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.InternalNewPlayerHelper::ReadAnalyticsIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalNewPlayerHelper_ReadAnalyticsIdentifier_m63998B3010974B15E5F13619BBDE43204E93F264 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::WriteAnalyticsIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper_WriteAnalyticsIdentifierToFile_m791AE057AAC5C8B6D431F7F66605C0C7DD6A7B51 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Unity.Services.Analytics.AnalyticsContainer>()
inline AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::set_Instance(Unity.Services.Analytics.AnalyticsContainer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776_inline (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordGameRunningIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::InternalTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_InternalTick_m26C028F5A6BDF4901A7FEB9888FBC9C3E0A3710A (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::GameEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_GameEnded_m0C6611FE57A7E25C6F4E5BEF66545139EAB182A4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___0_errorCode, String_t* ___1_message, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.ConsentCheckException::set_Reason(Unity.Services.Analytics.ConsentCheckExceptionReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String Unity.Services.Analytics.Internal.Locale::CurrentLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_CurrentLanguageCode_m720A4A975DCDE3417D54E73B51EA379DFC5B181E (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___0_value, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.AnalyticsForgetter::get_ConsentTracker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsForgetter_get_ConsentTracker_m290D7954B53F3E03381CA92923E8F3AD3F01052C_inline (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::get_Count()
inline int32_t List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_inline (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::.ctor()
inline void List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean Unity.Services.Analytics.Internal.Buffer::CanUseDiskPersistence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buffer_CanUseDiskPersistence_m78F73FEEF557CDAC16E513F61A0412B02837F63E (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Buffer::LoadFromDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_LoadFromDisk_m90D1B70DAEFB1696281F78B64B4D5C79E1D25975 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Buffer::ClearDiskCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_ClearDiskCache_m3E4B3D6FD5D912E2AB6B86312A8FF066882ED4D0 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m4B1627333D1B07FDD3D4AFBD053E0AF39A1027F3 (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::Clear()
inline void List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_inline (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9 (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::GetEnumerator()
inline Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C List_1_GetEnumerator_m2E42DF0C55EA56379957D0AA1A5215791CF71529 (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, const RuntimeMethod* method)
{
	Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Internal.Buffer/Token>::Dispose()
inline void Enumerator_Dispose_m809AD0ECB62159AEA06F0AF0AA70379E0F464F5C (Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Internal.Buffer/Token>::get_Current()
inline Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 Enumerator_get_Current_m4399B1075DC5887FD38C8D9CB39A1411BA1DD09A_inline (Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C* __this, const RuntimeMethod* method)
{
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String Unity.Services.Analytics.Internal.Buffer::get_UserID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_UserID_m6BD66FBC1ABA39DA24C41535DF3BE94661F15F7E_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Buffer::get_SessionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_SessionID_mD4209B933FB98CBFC2C7F69A2A96FF1772C0A970_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m91278D58CD695B07613B9A3941B745B815542E1E (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8 (StringBuilder_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_ToString_m63264635A791255A4CD3AA4FBE8498F51687FE7C (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Buffer::get_InstallID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_InstallID_mE0F85B193C37311FACA6E621F5C5AEBEDE36B6E4_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Buffer::get_PlayerID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_PlayerID_m0D017EFC14D46A7FC47081DF2064FD1982DB37E6_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.Buffer::IsRequestOverSizeLimit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buffer_IsRequestOverSizeLimit_m9F184C8767CC69366156956A92B1EEBBDC14BDD1 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_data, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Analytics.Internal.Buffer/Token>::MoveNext()
inline bool Enumerator_MoveNext_m49EF4F49EA7EE5708CEEAC168C8BCA246475DA53 (Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ParseExact_mC63B11B9478595A40022DAE69AEE30626B509BA3 (String_t* ___0_s, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_formats, RuntimeObject* ___2_provider, int32_t ___3_style, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::Add(T)
inline void List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushDouble(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushDouble_m0907B903E19C51258B1ACC66B4B7D523D5126260 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, double ___0_val, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Buffer::PushInt64(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushInt64_mC57CE4B39CE58DA48FF350C49C9C53582AB534B7 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, int64_t ___0_val, String_t* ___1_name, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64 (String_t* ___0_path, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2B32D5012023033323CE412C1093D5AA484EC052 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>::get_Item(System.Int32)
inline Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 List_1_get_Item_m11FA74C1FCD8AD5EA589F5FCBEC91E953FB73CDF (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Analytics.Internal.Buffer::WriteToken(System.IO.BinaryWriter,Unity.Services.Analytics.Internal.Buffer/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_WriteToken_m8187CE6C0C52AC30BA539CA47727D0E9EE1FBBC3 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 ___1_token, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD85F293A64917055AA78D504B87E5F7B81E4FD46 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.Buffer/Token Unity.Services.Analytics.Internal.Buffer::ReadToken(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 Buffer_ReadToken_mCB5095D17A5F366A0B4278801E78EE6520FFD568 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.DateTime Unity.Services.Analytics.Internal.Buffer::ParseDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Buffer_ParseDateTime_m544F6E26B9EB8AE1FCD996C695802204EE5FB8A4 (String_t* ___0_dateTime, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Internal.Event::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Event_get_Name_m8FD8FF91BC2CF9CCE2FFC0D303E454AB3D37DB12_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.Services.Analytics.Internal.Event::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Event_get_Version_mE0D7A0F0F0DD76C172F503E37E870C17D6106D56_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushStartEvent_m842214D8F1E4A5B175D7EE0BB912DA4FE60E3354 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_name, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___2_eventVersion, bool ___3_addPlayerIdsToEventBody, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.EventData Unity.Services.Analytics.Internal.Event::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Unity.Services.Analytics.Internal.EventData::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* EventData_get_Data_mA97B1E0133942DA374284B2EE8C8CDF1D8A05914_inline (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushFloat(System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushFloat_mAAA674E9AEF0A377CD4AE54629F78C44717711DE (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, float ___0_val, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Buffer::PushString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushString_m98468EF79ADF7D06EEA4C9848D888EAC3C512D2D (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_val, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Buffer::PushInt(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushInt_m61F6B738A02D03E5BC9C3CF7F3E45655C2FDE03D (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, int32_t ___0_val, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Buffer::PushBool(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushBool_m707E65F36301CFC39F101101E06F810DC199C4F6 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, bool ___0_val, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushEndEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushEndEvent_mFE7E5974ED82AA150C972F3A87CE56C8EF6C6F4F (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.String Unity.Services.Analytics.Internal.Consent::get_Pipl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.ConsentTracker::get_piplHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ConsentTracker_get_piplHeaders_mC7732B6E50BB062A62D669AC5201FAF1802BCD2F (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.GeoAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.Internal.IGeoAPI,Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_geoApi, RuntimeObject* ___1_coreStatsHelper, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optOutConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optInPiplConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19__ctor_mA22B5E62E9510CDE66E33922EB517238E03B71F9 (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Create()
inline AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0 (const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 il2cppRetVal = ((  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_gshared)(method);
	return il2cpp_codegen_cast_struct<AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5, AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4>(&il2cppRetVal);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Start<Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::get_Task()
inline Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, method);
	return (Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2*)il2cppRetVal;
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ValidateConsentWasChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optInPiplConsentStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optOutConsentStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33__ctor_mAAFF4D13F02EE37D4F918A4AF0070B18250B1009 (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Start<Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsGeoIpChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.ConsentCheckException::.ctor(Unity.Services.Analytics.ConsentCheckExceptionReason,System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_reason, int32_t ___1_errorCode, String_t* ___2_message, Exception_t* ___3_innerException, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker::GetGeoIPResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ConsentTracker_GetGeoIPResponse_m67ADCB7DD19286D83C63C5F1129F19E1F9F6F656 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>,Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* ___0_awaiter, U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m73AE70CC46CC8C736C47BE464B484132C9F1581A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Analytics.Internal.GeoIPResponse>,Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* ___0_awaiter, U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1__ctor_m7CC9A4D0FAC380584A2749CC5E75FDB0B650FCF8 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::Start<Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m62BF5B6343547C6A9291F3C4EF5C76012180A969 (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::.ctor()
inline void TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4 (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::get_Task()
inline Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_inline (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F*)il2cppRetVal;
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::GetAwaiter()
inline TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC (Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4 (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestTaskWrapper__ctor_m737411964301AB0483A39FB2B0D46B6CCC1E512E (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_request, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF WebRequestTaskWrapper_GetAwaiter_mE54F6FA2E11D3ECAA8BB6762857F32C1F40A5BE7 (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070 (TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Analytics.Internal.GeoIPResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>,Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738 (AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* __this, TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* ___0_awaiter, U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::GetResult()
inline UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB (TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* __this, const RuntimeMethod* method)
{
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.Services.Analytics.Internal.GeoIPResponse>(System.String)
inline GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20 (String_t* ___0_value, const RuntimeMethod* method)
{
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* il2cppRetVal;
	((  void (*) (String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisIl2CppFullySharedGenericAny_mE887B4FC662529C0EC01965F3E537E060B13D218_gshared)(___0_value, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushU3Ed__16__ctor_m5C5117A715A58C17F62F61055AC31DB1D3E60823 (U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m72A0CDA112A40B347BD9EDA60DE9C7F83A44E811 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushBufferToServiceU3Ed__17__ctor_mF2E557617B21F4BA1DCAE0AD8B740F1BB304D8A6 (U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_m3D796C8ABE3BB0B875B7C126A9B70DBDD1ADD171 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_FlushInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::get_FlushInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.Dispatcher::get_ConsentTracker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Analytics.Internal.Dispatcher::FlushBufferToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Dispatcher_FlushBufferToService_m7E29A3BE472599B605FDB1EFBF093D94081C8709 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m9FEF28B8E10055AC90B4E69EA0B3C175B31D95D2 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m8FC48EC9231A12782494788F1314D76ACE97FADF (U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mAA48933D49DC42717DD08485E7465CFCE054D498 (Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Byte[]>(System.Func`1<TResult>)
inline Task_1_t46575E75F710D631831E756B5DE20429700F6B95* TaskFactory_StartNew_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m03CFC65993DF73C74BD640F4B8D2BF9C3DF83FE5 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F* ___0_function, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, const RuntimeMethod*))TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_mE5031CF7AC227B21E46267EA892356E64047FA49_gshared)((TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*)__this, (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)___0_function, method);
	return (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*)il2cppRetVal;
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Byte[]>::GetAwaiter()
inline TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0 (Task_1_t46575E75F710D631831E756B5DE20429700F6B95* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2 (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>,Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_mCDF40F45EACB355E722515CAC6F3C7F2BE15F5A9 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* ___0_awaiter, U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>::GetResult()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0 (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String Unity.Services.Analytics.Internal.Dispatcher::get_CollectUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Void Unity.Services.Analytics.Internal.Event::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Event_set_Name_mFD545E11D2CA0FD26602862BF4EC83950B4705F4_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Event::set_Version(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Event_set_Version_m3A7BF32FB758A13967ECB8D0195A8B819E585C2F_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.EventData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData__ctor_m8909A7D0EB7F7C034FB9F8C87F338230C6FC6920 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.Event::set_Parameters(Unity.Services.Analytics.Internal.EventData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Event_set_Parameters_m987AD682F7F8AD6A3B54745372BF562233753166_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Unity.Services.Analytics.Internal.EventData::set_Data(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Data_m8F18C4676CD3D3C60353ECD22BC4B8813B6CA532_inline (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.String Unity.Services.Analytics.Internal.Platform.UserCountry::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserCountry_Name_m06B124E264D188F63FB26F69C4400862F16B8C59 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.EventData::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_Set_m8E2D9EE70BCD8BDF576528681D4548C507F1BDFE (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1DE2113561D29AF6B101E20477737F8FF6DAAF2E (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int64>::Invoke(T)
inline void Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_inline (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* __this, int64_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___0_obj, method);
}
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC (const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_fieldName, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// Unity.Services.Analytics.Platform.UA2PlatformCode Unity.Services.Analytics.Platform.Runtime::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Runtime_GetPlatform_mC00CBA2AD7478773ACCB340218D1C6866954104C (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0 (const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameStoreID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameBundleID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Idfv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UasUserID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_BuildGuuid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ClientVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UserCountry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_DeviceVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	double il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_BatteryLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ProjectID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Analytics.Data.StdCommonParams::SerializeCommonEventParams(Unity.Services.Analytics.Internal.IBuffer&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, RuntimeObject** ___0_buf, String_t* ___1_callingMethodIdentifier, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ua2CoreInitializeCallback::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback_Register_mF40ACDE0AA72C4F92C34C67044F57796F0EAE2B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new Ua2CoreInitializeCallback())
		//     .DependsOn<IInstallationId>()
		//     .DependsOn<ICloudProjectId>()
		//     .DependsOn<IEnvironments>()
		//     .DependsOn<IProjectConfiguration>()
		//     .OptionallyDependsOn<IPlayerId>();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline(NULL);
		Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* L_1 = (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD*)il2cpp_codegen_object_new(Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE(L_1, NULL);
		NullCheck(L_0);
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_2;
		L_2 = CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E(L_0, L_1, CoreRegistry_RegisterPackage_TisUa2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD_m2D03E607E78DEFB5521CD83B02846C48D6EF4F0E_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_3;
		L_3 = CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91((&V_0), CoreRegistration_DependsOn_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_mA93E2240E092DDA93C08F11936078CD15E581C91_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_4;
		L_4 = CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4((&V_0), CoreRegistration_DependsOn_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mE5B2A026998399E51D853DF4B3D4F9AA85BF84D4_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_5;
		L_5 = CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64((&V_0), CoreRegistration_DependsOn_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mF32D3AEE8770313EFCC77D92013AF760CBABCD64_RuntimeMethod_var);
		V_0 = L_5;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_6;
		L_6 = CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10((&V_0), CoreRegistration_DependsOn_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mFE611D2FD196728ACC376EAB06D4F2664D8FDD10_RuntimeMethod_var);
		V_0 = L_6;
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_7;
		L_7 = CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286((&V_0), CoreRegistration_OptionallyDependsOn_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_m5F08ADC17E47CCBEEDC9C48CC64F5A475CCFD286_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Ua2CoreInitializeCallback::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Ua2CoreInitializeCallback_Initialize_mE8CA1840C20490FD250B30B6789619403DDE5748 (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_registry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* V_0 = NULL;
	{
		U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* L_0 = (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76*)il2cpp_codegen_object_new(U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ed__1__ctor_m43CC7C88005E0C129817F8DDA5B774B2A2D19113(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* L_4 = V_0;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_5 = ___0_registry;
		NullCheck(L_4);
		L_4->___registry_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___registry_2), (void*)L_5);
		U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB(L_8, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mC5B73B581462BA69A2F6F2C65CDABC9E41EBECBB_RuntimeMethod_var);
		U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&L_9->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_10, NULL);
		return L_11;
	}
}
// System.Void Ua2CoreInitializeCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ua2CoreInitializeCallback__ctor_m096A57E67DE0D5E40E7AB84CF3935A5D7DD898CE (Ua2CoreInitializeCallback_t20D7CCCEDAF24D8AD75CBE5991731A72C70418BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1__ctor_m43CC7C88005E0C129817F8DDA5B774B2A2D19113 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_MoveNext_m6D1294910570A31C8D7E15AB3BE8B001184D85D5 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA56548758688972FE7FBEFF95E84D582BD574F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* V_2 = NULL;
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00eb_1;
		}

IL_0011_1:
		{
			// var cloudProjectId = registry.GetServiceComponent<ICloudProjectId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2 = __this->___registry_2;
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F(L_2, CoreRegistry_GetServiceComponent_TisICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_mF7458A4E56377FCF3301F3ECE3A64B8C709EB38F_RuntimeMethod_var);
			__this->___U3CcloudProjectIdU3E5__1_4 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcloudProjectIdU3E5__1_4), (void*)L_3);
			// var installationId = registry.GetServiceComponent<IInstallationId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_4 = __this->___registry_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F(L_4, CoreRegistry_GetServiceComponent_TisIInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_m154CDEFCDF91B08E20C3D0DAE197A8AD04AAE70F_RuntimeMethod_var);
			__this->___U3CinstallationIdU3E5__2_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3E5__2_5), (void*)L_5);
			// var playerId = registry.GetServiceComponent<IPlayerId>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_6 = __this->___registry_2;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC(L_6, CoreRegistry_GetServiceComponent_TisIPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_mAA43670CFBC53A1BB132782BB187BE8BF0D90BEC_RuntimeMethod_var);
			__this->___U3CplayerIdU3E5__3_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerIdU3E5__3_6), (void*)L_7);
			// var environments = registry.GetServiceComponent<IEnvironments>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_8 = __this->___registry_2;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF(L_8, CoreRegistry_GetServiceComponent_TisIEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_mB14B4F5C7C715C037C3D0B96AD44CFBC570659AF_RuntimeMethod_var);
			__this->___U3CenvironmentsU3E5__4_7 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenvironmentsU3E5__4_7), (void*)L_9);
			// var projectConfiguration = registry.GetServiceComponent<IProjectConfiguration>();
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_10 = __this->___registry_2;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312(L_10, CoreRegistry_GetServiceComponent_TisIProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_mF70AFB94326EDB167066B7836231B13A52150312_RuntimeMethod_var);
			__this->___U3CprojectConfigurationU3E5__5_8 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprojectConfigurationU3E5__5_8), (void*)L_11);
			// var analyticsUserId = projectConfiguration.GetString("com.unity.services.core.analytics-user-id");
			RuntimeObject* L_12 = __this->___U3CprojectConfigurationU3E5__5_8;
			NullCheck(L_12);
			String_t* L_13;
			L_13 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_12, _stringLiteralFA56548758688972FE7FBEFF95E84D582BD574F0, (String_t*)NULL);
			__this->___U3CanalyticsUserIdU3E5__6_9 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanalyticsUserIdU3E5__6_9), (void*)L_13);
			// AnalyticsService.internalInstance = new AnalyticsServiceInstance();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_14 = (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62*)il2cpp_codegen_object_new(AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			AnalyticsServiceInstance__ctor_m07B3F4CEF6E7821B17F294143C91FD55229AF090(L_14, NULL);
			((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0), (void*)L_14);
			// await AnalyticsService.internalInstance.Initialize(cloudProjectId, installationId, playerId, environments.Current, analyticsUserId);
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_15 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			RuntimeObject* L_16 = __this->___U3CcloudProjectIdU3E5__1_4;
			RuntimeObject* L_17 = __this->___U3CinstallationIdU3E5__2_5;
			RuntimeObject* L_18 = __this->___U3CplayerIdU3E5__3_6;
			RuntimeObject* L_19 = __this->___U3CenvironmentsU3E5__4_7;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current() */, IEnvironments_t9DCAF0398EB856DBE771A9C2D7B120661D628CB7_il2cpp_TypeInfo_var, L_19);
			String_t* L_21 = __this->___U3CanalyticsUserIdU3E5__6_9;
			NullCheck(L_15);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_22;
			L_22 = AnalyticsServiceInstance_Initialize_m22E7F33CC0B3B759C865726A28FA19863D7389DB(L_15, L_16, L_17, L_18, L_20, L_21, NULL);
			NullCheck(L_22);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_23;
			L_23 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_22, NULL);
			V_1 = L_23;
			bool L_24;
			L_24 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_24)
			{
				goto IL_0107_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_26 = V_1;
			__this->___U3CU3Eu__1_10 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84(L_27, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76_mA6CCC473E49B04FBD0815D80CC7D04EB8BDB0A84_RuntimeMethod_var);
			goto IL_01b3;
		}

IL_00eb_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_28 = __this->___U3CU3Eu__1_10;
			V_1 = L_28;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_29 = (&__this->___U3CU3Eu__1_10);
			il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_0107_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// if (AnalyticsService.internalInstance.ConsentTracker.IsGeoIpChecked())
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_31 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			NullCheck(L_31);
			RuntimeObject* L_32 = L_31->___ConsentTracker_15;
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_32);
			V_3 = L_33;
			bool L_34 = V_3;
			if (!L_34)
			{
				goto IL_012f_1;
			}
		}
		{
			// AnalyticsService.internalInstance.Flush();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_35 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
			NullCheck(L_35);
			AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(L_35, NULL);
		}

IL_012f_1:
		{
			goto IL_0175;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0131;
		}
		throw e;
	}

CATCH_0131:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CcloudProjectIdU3E5__1_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcloudProjectIdU3E5__1_4), (void*)(RuntimeObject*)NULL);
		__this->___U3CinstallationIdU3E5__2_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3E5__2_5), (void*)(RuntimeObject*)NULL);
		__this->___U3CplayerIdU3E5__3_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerIdU3E5__3_6), (void*)(RuntimeObject*)NULL);
		__this->___U3CenvironmentsU3E5__4_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenvironmentsU3E5__4_7), (void*)(RuntimeObject*)NULL);
		__this->___U3CprojectConfigurationU3E5__5_8 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprojectConfigurationU3E5__5_8), (void*)(RuntimeObject*)NULL);
		__this->___U3CanalyticsUserIdU3E5__6_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanalyticsUserIdU3E5__6_9), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_36 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_37 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_36, L_37, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b3;
	}// end catch (depth: 1)

IL_0175:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CcloudProjectIdU3E5__1_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcloudProjectIdU3E5__1_4), (void*)(RuntimeObject*)NULL);
		__this->___U3CinstallationIdU3E5__2_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallationIdU3E5__2_5), (void*)(RuntimeObject*)NULL);
		__this->___U3CplayerIdU3E5__3_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerIdU3E5__3_6), (void*)(RuntimeObject*)NULL);
		__this->___U3CenvironmentsU3E5__4_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenvironmentsU3E5__4_7), (void*)(RuntimeObject*)NULL);
		__this->___U3CprojectConfigurationU3E5__5_8 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprojectConfigurationU3E5__5_8), (void*)(RuntimeObject*)NULL);
		__this->___U3CanalyticsUserIdU3E5__6_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CanalyticsUserIdU3E5__6_9), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_38 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_38, NULL);
	}

IL_01b3:
	{
		return;
	}
}
// System.Void Ua2CoreInitializeCallback/<Initialize>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_SetStateMachine_mA709A8AC5E4AB1755D3691BAF4474C4148808268 (U3CInitializeU3Ed__1_t99E0C99E5FE14A896385692015A529E07BB77F76* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.IAnalyticsService Unity.Services.Analytics.AnalyticsService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (internalInstance == null)
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		V_0 = (bool)((((RuntimeObject*)(AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ServicesInitializationException("The Analytics service has not been initialized. Please initialize Unity Services.");
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_2 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9629684BC30911A2DEAA94689CC844A293D35D8F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return internalInstance;
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_3 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::OptOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_OptOut_mE80E70FBB35370154B02B32ADCED5B0EAA77B632 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76DDE57466F7C53D34AD5007FB620D205EE8EA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2D528BF710C9F50F9620968D52C2BA6394B94B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* G_B3_0 = NULL;
	{
		// Debug.Log(ConsentTracker.IsConsentDenied()
		//     ? "This user has opted out. Any cached events have been discarded and no more will be collected."
		//     : "This user has opted out and is in the process of being forgotten...");
		RuntimeObject* L_0 = __this->___ConsentTracker_15;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentDenied() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteralCE2D528BF710C9F50F9620968D52C2BA6394B94B;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral76DDE57466F7C53D34AD5007FB620D205EE8EA1E;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(G_B3_0, NULL);
		// if (ConsentTracker.IsConsentGiven())
		RuntimeObject* L_2 = __this->___ConsentTracker_15;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// ConsentTracker.BeginOptOutProcess();
		RuntimeObject* L_5 = __this->___ConsentTracker_15;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IConsentTracker::BeginOptOutProcess() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_5);
		// RevokeWithForgetEvent();
		AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0(__this, NULL);
		// return;
		goto IL_007e;
	}

IL_0045:
	{
		// if (ConsentTracker.IsOptingOutInProgress())
		RuntimeObject* L_6 = __this->___ConsentTracker_15;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// RevokeWithForgetEvent();
		AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0(__this, NULL);
		// return;
		goto IL_007e;
	}

IL_005e:
	{
		// Revoke();
		AnalyticsServiceInstance_Revoke_mE996CF16F921425F885EB14591D241FAB13EE511(__this, NULL);
		// ConsentTracker.SetDenyConsentToAll();
		RuntimeObject* L_9 = __this->___ConsentTracker_15;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IConsentTracker::SetDenyConsentToAll() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_9);
		// m_CoreStatsHelper.SetCoreStatsConsent(false);
		RuntimeObject* L_10 = __this->___m_CoreStatsHelper_14;
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_10, (bool)0);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Revoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Revoke_mE996CF16F921425F885EB14591D241FAB13EE511 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dataBuffer.ClearDiskCache();
		RuntimeObject* L_0 = __this->___dataBuffer_5;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(14 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearDiskCache() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0);
		// dataBuffer = new BufferRevoked();
		BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* L_1 = (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3*)il2cpp_codegen_object_new(BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BufferRevoked__ctor_m208AEF741C576200CF78EA83EF4DE08DBD27D0B2(L_1, NULL);
		__this->___dataBuffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataBuffer_5), (void*)L_1);
		// dataDispatcher = new Dispatcher(dataBuffer, new WebRequestHelper());
		RuntimeObject* L_2 = __this->___dataBuffer_5;
		WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* L_3 = (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)il2cpp_codegen_object_new(WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9(L_3, NULL);
		Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_4 = (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)il2cpp_codegen_object_new(Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dispatcher__ctor_m4F2D8F2A3D60E40BF267F737FFE5B4225317F3B0(L_4, L_2, L_3, (RuntimeObject*)NULL, NULL);
		AnalyticsServiceInstance_set_dataDispatcher_mAE2E476F882FA3252C40B050D99CBAA0DAD68559_inline(__this, L_4, NULL);
		// AnalyticsContainer.DestroyContainer();
		AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27(NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RevokeWithForgetEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RevokeWithForgetEvent_m47219E952DF689818346D5F22005DA76BAA70DF0 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dataBuffer.ClearBuffer();
		RuntimeObject* L_0 = __this->___dataBuffer_5;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(15 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearBuffer() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_0);
		// dataBuffer = new BufferRevoked();
		BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* L_1 = (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3*)il2cpp_codegen_object_new(BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BufferRevoked__ctor_m208AEF741C576200CF78EA83EF4DE08DBD27D0B2(L_1, NULL);
		__this->___dataBuffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataBuffer_5), (void*)L_1);
		// dataDispatcher = new Dispatcher(dataBuffer, new WebRequestHelper());
		RuntimeObject* L_2 = __this->___dataBuffer_5;
		WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* L_3 = (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)il2cpp_codegen_object_new(WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9(L_3, NULL);
		Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_4 = (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)il2cpp_codegen_object_new(Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dispatcher__ctor_m4F2D8F2A3D60E40BF267F737FFE5B4225317F3B0(L_4, L_2, L_3, (RuntimeObject*)NULL, NULL);
		AnalyticsServiceInstance_set_dataDispatcher_mAE2E476F882FA3252C40B050D99CBAA0DAD68559_inline(__this, L_4, NULL);
		// analyticsForgetter = new AnalyticsForgetter(m_CollectURL,
		//     InstallId.GetOrCreateIdentifier(),
		//     Internal.Buffer.SaveDateTime(DateTime.Now),
		//     k_ForgetCallingId,
		//     ForgetMeEventUploaded, ConsentTracker);
		String_t* L_5 = __this->___m_CollectURL_9;
		RuntimeObject* L_6;
		L_6 = AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Buffer_SaveDateTime_m360DA83DBB1134A447EE7EADE6F4AD40020E06CC(L_8, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059_RuntimeMethod_var), NULL);
		RuntimeObject* L_11 = __this->___ConsentTracker_15;
		AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* L_12 = (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0*)il2cpp_codegen_object_new(AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AnalyticsForgetter__ctor_mA4F19D86908F6384D2B8030490DC29AC9E37AA9F(L_12, L_5, L_7, L_9, _stringLiteral0BC237184924820231BE4541A9E248A9768C7DEC, L_10, L_11, NULL);
		__this->___analyticsForgetter_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___analyticsForgetter_0), (void*)L_12);
		// analyticsForgetter.AttemptToForget();
		RuntimeObject* L_13 = __this->___analyticsForgetter_0;
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IAnalyticsForgetter::AttemptToForget() */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_13);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::ForgetMeEventUploaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_ForgetMeEventUploaded_mDDA88D280C1A52DF1EC365BA6B52F6A1D0C5C059 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnalyticsContainer.DestroyContainer();
		AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27(NULL);
		// ConsentTracker.FinishOptOutProcess();
		RuntimeObject* L_0 = __this->___ConsentTracker_15;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IConsentTracker::FinishOptOutProcess() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// Unity.Services.Authentication.Internal.IPlayerId Unity.Services.Analytics.AnalyticsServiceInstance::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_PlayerId_m0D2F879027597FF3E0653572EB04E6102A7938F3 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal IPlayerId PlayerId { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPlayerIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_PlayerId(Unity.Services.Authentication.Internal.IPlayerId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_PlayerId_m5B28C9692E678821579CFE4255966CC97F089D8D (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IPlayerId PlayerId { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CPlayerIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.AnalyticsServiceInstance::get_InstallId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; private set; }
		RuntimeObject* L_0 = __this->___U3CInstallIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_InstallId(Unity.Services.Core.Device.Internal.IInstallationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_InstallId_m125A56DF2B78A8E5F6D27842C12258E91DC65568 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInstallIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInstallIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Analytics.AnalyticsServiceInstance::get_CloudProjectIdProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_CloudProjectIdProvider_m971BB6E6BD8004F47A677A952C810E89A30A1CA4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal ICloudProjectId CloudProjectIdProvider { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCloudProjectIdProviderU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_CloudProjectIdProvider(Unity.Services.Core.Configuration.Internal.ICloudProjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_CloudProjectIdProvider_m629CEFAE15BE02B276BEC2FAD642419D8E6E6D92 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ICloudProjectId CloudProjectIdProvider { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCloudProjectIdProviderU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCloudProjectIdProviderU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CloudProjectId_m99C74F5D79270202360BD822486039DFC198D378 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// internal string CloudProjectId => CloudProjectIdProvider?.GetCloudProjectId() ?? Application.cloudProjectId;
		RuntimeObject* L_0;
		L_0 = AnalyticsServiceInstance_get_CloudProjectIdProvider_m971BB6E6BD8004F47A677A952C810E89A30A1CA4_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t366B66869ECC734B15C1F60633D2B998CD9231FE_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		String_t* L_4;
		L_4 = Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9(NULL);
		G_B5_0 = L_4;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_CustomAnalyticsId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal string CustomAnalyticsId { get; private set; }
		String_t* L_0 = __this->___U3CCustomAnalyticsIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_CustomAnalyticsId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_CustomAnalyticsId_m811F510E8A5B7118BE621C0A27B2EBDFA44D15CD (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string CustomAnalyticsId { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCustomAnalyticsIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomAnalyticsIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Unity.Services.Analytics.Internal.IDispatcher Unity.Services.Analytics.AnalyticsServiceInstance::get_dataDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_dataDispatcher_m28C470C90EDB005FFE02125526A30DF456AB14C4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal IDispatcher dataDispatcher { get; set; }
		RuntimeObject* L_0 = __this->___U3CdataDispatcherU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::set_dataDispatcher(Unity.Services.Analytics.Internal.IDispatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_dataDispatcher_mAE2E476F882FA3252C40B050D99CBAA0DAD68559 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IDispatcher dataDispatcher { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CdataDispatcherU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdataDispatcherU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.Services.Analytics.AnalyticsServiceInstance::get_ServiceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ServiceEnabled { get; private set; } = true;
		bool L_0 = __this->___U3CServiceEnabledU3Ek__BackingField_13;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::get_SessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance__ctor_m07B3F4CEF6E7821B17F294143C91FD55229AF090 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIDeviceIdentifiersInternal_t687B1DA3AE9BF480EADAC04B587D8C7AA70B6239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC148D8500735E59A2A93B1BCAFAD62C90726FD66);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// internal IBuffer dataBuffer = new Internal.Buffer(new BufferSystemCalls());
		BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* L_0 = (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1*)il2cpp_codegen_object_new(BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C(L_0, NULL);
		Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* L_1 = (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE*)il2cpp_codegen_object_new(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Buffer__ctor_m76AFC4BEBFD8C19192BFDA8F079AD2B39A5BB93A(L_1, L_0, NULL);
		__this->___dataBuffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataBuffer_5), (void*)L_1);
		// internal IDataGenerator dataGenerator = new DataGenerator();
		DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* L_2 = (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183*)il2cpp_codegen_object_new(DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C(L_2, NULL);
		__this->___dataGenerator_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataGenerator_7), (void*)L_2);
		// readonly StdCommonParams m_CommonParams = new StdCommonParams();
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*)il2cpp_codegen_object_new(StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA(L_3, NULL);
		__this->___m_CommonParams_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CommonParams_10), (void*)L_3);
		// readonly string m_StartUpCallingId = "com.unity.services.analytics.Events.Startup";
		__this->___m_StartUpCallingId_11 = _stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StartUpCallingId_11), (void*)_stringLiteral205F66EA76831459EF2F8ED7CB36EE2870B90054);
		// internal IIDeviceIdentifiersInternal deviceIdentifiersInternal = new DeviceIdentifiersInternal();
		DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414* L_4 = (DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414*)il2cpp_codegen_object_new(DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DeviceIdentifiersInternal__ctor_mE570998948E83A4393E2E9651FE7D0ADBA6CD160(L_4, NULL);
		__this->___deviceIdentifiersInternal_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceIdentifiersInternal_12), (void*)L_4);
		// internal bool ServiceEnabled { get; private set; } = true;
		__this->___U3CServiceEnabledU3Ek__BackingField_13 = (bool)1;
		// internal ICoreStatsHelper m_CoreStatsHelper = new CoreStatsHelper();
		CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* L_5 = (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6*)il2cpp_codegen_object_new(CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4(L_5, NULL);
		__this->___m_CoreStatsHelper_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoreStatsHelper_14), (void*)L_5);
		// readonly TransactionCurrencyConverter converter = new TransactionCurrencyConverter();
		TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* L_6 = (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133*)il2cpp_codegen_object_new(TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD(L_6, NULL);
		__this->___converter_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___converter_17), (void*)L_6);
		// internal AnalyticsServiceInstance()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ConsentTracker = new ConsentTracker(m_CoreStatsHelper);
		RuntimeObject* L_7 = __this->___m_CoreStatsHelper_14;
		ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_8 = (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4*)il2cpp_codegen_object_new(ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A(L_8, L_7, NULL);
		__this->___ConsentTracker_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ConsentTracker_15), (void*)L_8);
		// if (string.IsNullOrEmpty(Application.cloudProjectId))
		String_t* L_9;
		L_9 = Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9(NULL);
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		V_0 = L_10;
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		// Debug.LogError("No cloud project ID was found by the Analytics SDK. This means Analytics events will not be sent. Please make sure to link your cloud project in the Unity editor to fix this problem.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC148D8500735E59A2A93B1BCAFAD62C90726FD66, NULL);
		// return;
		goto IL_0133;
	}

IL_0091:
	{
		// dataDispatcher = new Dispatcher(dataBuffer, new WebRequestHelper(), ConsentTracker);
		RuntimeObject* L_12 = __this->___dataBuffer_5;
		WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* L_13 = (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71*)il2cpp_codegen_object_new(WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9(L_13, NULL);
		RuntimeObject* L_14 = __this->___ConsentTracker_15;
		Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_15 = (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE*)il2cpp_codegen_object_new(Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Dispatcher__ctor_m4F2D8F2A3D60E40BF267F737FFE5B4225317F3B0(L_15, L_12, L_13, L_14, NULL);
		AnalyticsServiceInstance_set_dataDispatcher_mAE2E476F882FA3252C40B050D99CBAA0DAD68559_inline(__this, L_15, NULL);
		// SessionID = Guid.NewGuid().ToString();
		Guid_t L_16;
		L_16 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_16;
		String_t* L_17;
		L_17 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		__this->___U3CSessionIDU3Ek__BackingField_16 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_16), (void*)L_17);
		// m_CommonParams.ClientVersion = Application.version;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_18 = __this->___m_CommonParams_10;
		String_t* L_19;
		L_19 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		NullCheck(L_18);
		StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline(L_18, L_19, NULL);
		// m_CommonParams.ProjectID = Application.cloudProjectId;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_20 = __this->___m_CommonParams_10;
		String_t* L_21;
		L_21 = Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9(NULL);
		NullCheck(L_20);
		StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline(L_20, L_21, NULL);
		// m_CommonParams.GameBundleID = Application.identifier;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_22 = __this->___m_CommonParams_10;
		String_t* L_23;
		L_23 = Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056(NULL);
		NullCheck(L_22);
		StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline(L_22, L_23, NULL);
		// m_CommonParams.Platform = Runtime.Name();
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_24 = __this->___m_CommonParams_10;
		String_t* L_25;
		L_25 = Runtime_Name_m5691169825FA2CC731731BE5BF745118C339B1E9(NULL);
		NullCheck(L_24);
		StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline(L_24, L_25, NULL);
		// m_CommonParams.BuildGuuid = Application.buildGUID;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_26 = __this->___m_CommonParams_10;
		String_t* L_27;
		L_27 = Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68(NULL);
		NullCheck(L_26);
		StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline(L_26, L_27, NULL);
		// m_CommonParams.Idfv = deviceIdentifiersInternal.Idfv;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_28 = __this->___m_CommonParams_10;
		RuntimeObject* L_29 = __this->___deviceIdentifiersInternal_12;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Analytics.Platform.IIDeviceIdentifiersInternal::get_Idfv() */, IIDeviceIdentifiersInternal_t687B1DA3AE9BF480EADAC04B587D8C7AA70B6239_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_28);
		StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline(L_28, L_30, NULL);
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	{
		// if (!ServiceEnabled)
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_00f3;
	}

IL_0014:
	{
		// if (string.IsNullOrEmpty(CloudProjectId))
		String_t* L_2;
		L_2 = AnalyticsServiceInstance_get_CloudProjectId_m99C74F5D79270202360BD822486039DFC198D378(__this, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		goto IL_00f3;
	}

IL_0029:
	{
		// if (InstallId == null)
		RuntimeObject* L_5;
		L_5 = AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline(__this, NULL);
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		goto IL_00f3;
	}

IL_003c:
	{
		// if (ConsentTracker.IsGeoIpChecked() && ConsentTracker.IsConsentGiven())
		RuntimeObject* L_7 = __this->___ConsentTracker_15;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_7);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_9 = __this->___ConsentTracker_15;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_9);
		G_B9_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
	}

IL_0057:
	{
		V_3 = (bool)G_B9_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_00d4;
		}
	}
	{
		// dataBuffer.InstallID = InstallId.GetOrCreateIdentifier();
		RuntimeObject* L_12 = __this->___dataBuffer_5;
		RuntimeObject* L_13;
		L_13 = AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_12);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_InstallID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_12, L_14);
		// dataBuffer.PlayerID = PlayerId?.PlayerId;
		RuntimeObject* L_15 = __this->___dataBuffer_5;
		RuntimeObject* L_16;
		L_16 = AnalyticsServiceInstance_get_PlayerId_m0D2F879027597FF3E0653572EB04E6102A7938F3_inline(__this, NULL);
		RuntimeObject* L_17 = L_16;
		G_B11_0 = L_17;
		G_B11_1 = L_15;
		if (L_17)
		{
			G_B12_0 = L_17;
			G_B12_1 = L_15;
			goto IL_0086;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		goto IL_008b;
	}

IL_0086:
	{
		NullCheck(G_B12_0);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId() */, IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var, G_B12_0);
		G_B13_0 = L_18;
		G_B13_1 = G_B12_1;
	}

IL_008b:
	{
		NullCheck(G_B13_1);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_PlayerID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, G_B13_1, G_B13_0);
		// dataBuffer.UserID = GetAnalyticsUserID();
		RuntimeObject* L_19 = __this->___dataBuffer_5;
		String_t* L_20;
		L_20 = AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_UserID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_19, L_20);
		// dataBuffer.SessionID = SessionID;
		RuntimeObject* L_21 = __this->___dataBuffer_5;
		String_t* L_22;
		L_22 = AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IBuffer::set_SessionID(System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_21, L_22);
		// dataDispatcher.CollectUrl = m_CollectURL;
		RuntimeObject* L_23;
		L_23 = AnalyticsServiceInstance_get_dataDispatcher_m28C470C90EDB005FFE02125526A30DF456AB14C4_inline(__this, NULL);
		String_t* L_24 = __this->___m_CollectURL_9;
		NullCheck(L_23);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IDispatcher::set_CollectUrl(System.String) */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_23, L_24);
		// dataDispatcher.Flush();
		RuntimeObject* L_25;
		L_25 = AnalyticsServiceInstance_get_dataDispatcher_m28C470C90EDB005FFE02125526A30DF456AB14C4_inline(__this, NULL);
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_26;
		L_26 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(1 /* System.Threading.Tasks.Task Unity.Services.Analytics.Internal.IDispatcher::Flush() */, IDispatcher_t4DE02B283A563837EE126BBB7BA0C5E903D3357C_il2cpp_TypeInfo_var, L_25);
	}

IL_00d4:
	{
		// if (ConsentTracker.IsOptingOutInProgress())
		RuntimeObject* L_27 = __this->___ConsentTracker_15;
		NullCheck(L_27);
		bool L_28;
		L_28 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_27);
		V_4 = L_28;
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00f3;
		}
	}
	{
		// analyticsForgetter.AttemptToForget();
		RuntimeObject* L_30 = __this->___analyticsForgetter_0;
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Analytics.Internal.IAnalyticsForgetter::AttemptToForget() */, IAnalyticsForgetter_t824BE286D40D7A4B73BE27A5BF50FE8DB4C0AE18_il2cpp_TypeInfo_var, L_30);
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordInternalEvent(Unity.Services.Analytics.Internal.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordInternalEvent_mFDC81EEFAEB7E0251D4E172D1E7E597012CAE813 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* ___0_eventToRecord, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!ServiceEnabled)
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_001e;
	}

IL_0011:
	{
		// dataBuffer.PushEvent(eventToRecord);
		RuntimeObject* L_2 = __this->___dataBuffer_5;
		Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_3 = ___0_eventToRecord;
		NullCheck(L_2);
		InterfaceActionInvoker1< Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* >::Invoke(16 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEvent(Unity.Services.Analytics.Internal.Event) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetDependencies(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetDependencies_m7C79E9D3214F3D027E168348768AFD68196972B4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_cloudProjectId, RuntimeObject* ___1_installId, RuntimeObject* ___2_playerId, String_t* ___3_environment, String_t* ___4_customAnalyticsId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E70A85646805F0D06C50AA7EAAA591D8DD27520);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CloudProjectIdProvider = cloudProjectId;
		RuntimeObject* L_0 = ___0_cloudProjectId;
		AnalyticsServiceInstance_set_CloudProjectIdProvider_m629CEFAE15BE02B276BEC2FAD642419D8E6E6D92_inline(__this, L_0, NULL);
		// InstallId = installId;
		RuntimeObject* L_1 = ___1_installId;
		AnalyticsServiceInstance_set_InstallId_m125A56DF2B78A8E5F6D27842C12258E91DC65568_inline(__this, L_1, NULL);
		// PlayerId = playerId;
		RuntimeObject* L_2 = ___2_playerId;
		AnalyticsServiceInstance_set_PlayerId_m5B28C9692E678821579CFE4255966CC97F089D8D_inline(__this, L_2, NULL);
		// CustomAnalyticsId = customAnalyticsId;
		String_t* L_3 = ___4_customAnalyticsId;
		AnalyticsServiceInstance_set_CustomAnalyticsId_m811F510E8A5B7118BE621C0A27B2EBDFA44D15CD_inline(__this, L_3, NULL);
		// m_CommonParams.ProjectID = CloudProjectId;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_4 = __this->___m_CommonParams_10;
		String_t* L_5;
		L_5 = AnalyticsServiceInstance_get_CloudProjectId_m99C74F5D79270202360BD822486039DFC198D378(__this, NULL);
		NullCheck(L_4);
		StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline(L_4, L_5, NULL);
		// m_CollectURL = string.Format(k_CollectUrlPattern, CloudProjectId, environment.ToLowerInvariant());
		String_t* L_6;
		L_6 = AnalyticsServiceInstance_get_CloudProjectId_m99C74F5D79270202360BD822486039DFC198D378(__this, NULL);
		String_t* L_7 = ___3_environment;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral3E70A85646805F0D06C50AA7EAAA591D8DD27520, L_6, L_8, NULL);
		__this->___m_CollectURL_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectURL_9), (void*)L_9);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::Initialize(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Device.Internal.IInstallationId,Unity.Services.Authentication.Internal.IPlayerId,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_Initialize_m22E7F33CC0B3B759C865726A28FA19863D7389DB (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_cloudProjectId, RuntimeObject* ___1_installId, RuntimeObject* ___2_playerId, String_t* ___3_environment, String_t* ___4_customAnalyticsId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m74C87F85700B531ECCB58617EC9404056061E496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* V_0 = NULL;
	{
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_0 = (U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110*)il2cpp_codegen_object_new(U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ed__53__ctor_m5491939CC678F7C305834EC0D08A28179078638A(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_7), (void*)__this);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_4 = V_0;
		RuntimeObject* L_5 = ___0_cloudProjectId;
		NullCheck(L_4);
		L_4->___cloudProjectId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___cloudProjectId_2), (void*)L_5);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_6 = V_0;
		RuntimeObject* L_7 = ___1_installId;
		NullCheck(L_6);
		L_6->___installId_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___installId_3), (void*)L_7);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_8 = V_0;
		RuntimeObject* L_9 = ___2_playerId;
		NullCheck(L_8);
		L_8->___playerId_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___playerId_4), (void*)L_9);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_10 = V_0;
		String_t* L_11 = ___3_environment;
		NullCheck(L_10);
		L_10->___environment_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___environment_5), (void*)L_11);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_12 = V_0;
		String_t* L_13 = ___4_customAnalyticsId;
		NullCheck(L_12);
		L_12->___customAnalyticsId_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___customAnalyticsId_6), (void*)L_13);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_14 = V_0;
		NullCheck(L_14);
		L_14->___U3CU3E1__state_0 = (-1);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_15 = V_0;
		NullCheck(L_15);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (&L_15->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m74C87F85700B531ECCB58617EC9404056061E496(L_16, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m74C87F85700B531ECCB58617EC9404056061E496_RuntimeMethod_var);
		U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* L_17 = V_0;
		NullCheck(L_17);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&L_17->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
		L_19 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_18, NULL);
		return L_19;
	}
}
// System.Threading.Tasks.Task Unity.Services.Analytics.AnalyticsServiceInstance::InitializeUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AnalyticsServiceInstance_InitializeUser_mC342B361F574226BBDF056F148FAE52B90E98CFA (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m99E0EB0919BB36177833B6A8B511A5D1BA760077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* V_0 = NULL;
	{
		U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* L_0 = (U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E*)il2cpp_codegen_object_new(U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeUserU3Ed__54__ctor_mD29AF896260A2E90B1227A577FE6DFCF6627CED2(L_0, NULL);
		V_0 = L_0;
		U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m99E0EB0919BB36177833B6A8B511A5D1BA760077(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m99E0EB0919BB36177833B6A8B511A5D1BA760077_RuntimeMethod_var);
		U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordStartupEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordStartupEvents_m91416206794DFA73F248FA6763A439FB455AF627 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// dataGenerator.SdkStartup(ref dataBuffer, DateTime.Now, m_CommonParams, m_StartUpCallingId);
		RuntimeObject* L_0 = __this->___dataGenerator_7;
		RuntimeObject** L_1 = (&__this->___dataBuffer_5);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = __this->___m_CommonParams_10;
		String_t* L_4 = __this->___m_StartUpCallingId_11;
		NullCheck(L_0);
		InterfaceActionInvoker4< RuntimeObject**, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::SdkStartup(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// dataGenerator.ClientDevice(ref dataBuffer, DateTime.Now, m_CommonParams, m_StartUpCallingId, SystemInfo.processorType, SystemInfo.graphicsDeviceName, SystemInfo.processorCount, SystemInfo.systemMemorySize, Screen.width, Screen.height, (int)Screen.dpi);
		RuntimeObject* L_5 = __this->___dataGenerator_7;
		RuntimeObject** L_6 = (&__this->___dataBuffer_5);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_8 = __this->___m_CommonParams_10;
		String_t* L_9 = __this->___m_StartUpCallingId_11;
		String_t* L_10;
		L_10 = SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE(NULL);
		String_t* L_11;
		L_11 = SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2(NULL);
		int32_t L_12;
		L_12 = SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55(NULL);
		int32_t L_13;
		L_13 = SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E(NULL);
		int32_t L_14;
		L_14 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_15;
		L_15 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_16;
		L_16 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		NullCheck(L_5);
		InterfaceActionInvoker11< RuntimeObject**, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, String_t*, String_t*, int64_t, int64_t, int64_t, int64_t, int64_t >::Invoke(5 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::ClientDevice(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8, L_9, L_10, L_11, ((int64_t)L_12), ((int64_t)L_13), ((int64_t)L_14), ((int64_t)L_15), ((int64_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_16)));
		// var isTiny = false;
		V_0 = (bool)0;
		// dataGenerator.GameStarted(ref dataBuffer, DateTime.Now, m_CommonParams, m_StartUpCallingId, Application.buildGUID, SystemInfo.operatingSystem, isTiny, DebugDevice.IsDebugDevice(), Locale.AnalyticsRegionLanguageCode());
		RuntimeObject* L_17 = __this->___dataGenerator_7;
		RuntimeObject** L_18 = (&__this->___dataBuffer_5);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_20 = __this->___m_CommonParams_10;
		String_t* L_21 = __this->___m_StartUpCallingId_11;
		String_t* L_22;
		L_22 = Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68(NULL);
		String_t* L_23;
		L_23 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		bool L_24 = V_0;
		bool L_25;
		L_25 = DebugDevice_IsDebugDevice_mA1EEB1D12950C445B81D7EBE8C254DDE2437B333(NULL);
		String_t* L_26;
		L_26 = Locale_AnalyticsRegionLanguageCode_mBC2C7A14D9ED824729BF977BE5C1478B559BB45B(NULL);
		NullCheck(L_17);
		InterfaceActionInvoker9< RuntimeObject**, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, String_t*, String_t*, bool, bool, String_t* >::Invoke(3 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameStarted(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Boolean,System.Boolean,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26);
		// if (InstallId != null && new InternalNewPlayerHelper(InstallId).IsNewPlayer())
		RuntimeObject* L_27;
		L_27 = AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline(__this, NULL);
		if (!L_27)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeObject* L_28;
		L_28 = AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline(__this, NULL);
		InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* L_29 = (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476*)il2cpp_codegen_object_new(InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F(L_29, L_28, NULL);
		NullCheck(L_29);
		bool L_30;
		L_30 = InternalNewPlayerHelper_IsNewPlayer_mE11DEC8005D24F3B42924870C1D64FFEE878916A(L_29, NULL);
		G_B3_0 = ((int32_t)(L_30));
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B3_0 = 0;
	}

IL_00c5:
	{
		V_1 = (bool)G_B3_0;
		bool L_31 = V_1;
		if (!L_31)
		{
			goto IL_00f3;
		}
	}
	{
		// dataGenerator.NewPlayer(ref dataBuffer, DateTime.Now, m_CommonParams, m_StartUpCallingId, SystemInfo.deviceModel);
		RuntimeObject* L_32 = __this->___dataGenerator_7;
		RuntimeObject** L_33 = (&__this->___dataBuffer_5);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_34;
		L_34 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_35 = __this->___m_CommonParams_10;
		String_t* L_36 = __this->___m_StartUpCallingId_11;
		String_t* L_37;
		L_37 = SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185(NULL);
		NullCheck(L_32);
		InterfaceActionInvoker5< RuntimeObject**, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, String_t* >::Invoke(2 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::NewPlayer(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_32, L_33, L_34, L_35, L_36, L_37);
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::GameEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_GameEnded_m0C6611FE57A7E25C6F4E5BEF66545139EAB182A4 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!ServiceEnabled)
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0057;
	}

IL_0011:
	{
		// dataGenerator.GameEnded(ref dataBuffer, DateTime.Now, m_CommonParams, "com.unity.services.analytics.Events.Shutdown", DataGenerator.SessionEndState.QUIT);
		RuntimeObject* L_2 = __this->___dataGenerator_7;
		RuntimeObject** L_3 = (&__this->___dataBuffer_5);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_5 = __this->___m_CommonParams_10;
		NullCheck(L_2);
		InterfaceActionInvoker5< RuntimeObject**, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t*, int32_t >::Invoke(4 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameEnded(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,Unity.Services.Analytics.Data.DataGenerator/SessionEndState) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, _stringLiteral6592F2A54D864C0F2DADC704BDDAB476278DF50F, 3);
		// if (ConsentTracker != null && ConsentTracker.IsGeoIpChecked())
		RuntimeObject* L_6 = __this->___ConsentTracker_15;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_7 = __this->___ConsentTracker_15;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_7);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_004a;
	}

IL_0049:
	{
		G_B5_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// Flush();
		AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(__this, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::RecordGameRunningIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (ServiceEnabled)
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0085;
		}
	}
	{
		// if (dataBuffer.Length == 0 || dataBuffer.Length == m_BufferLengthAtLastGameRunning)
		RuntimeObject* L_2 = __this->___dataBuffer_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_4 = __this->___dataBuffer_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = __this->___m_BufferLengthAtLastGameRunning_6;
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 1;
	}

IL_002f:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// SetVariableCommonParams();
		AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C(__this, NULL);
		// dataGenerator.GameRunning(ref dataBuffer, DateTime.Now, m_CommonParams, "com.unity.services.analytics.AnalyticsServiceInstance.RecordGameRunningIfNecessary");
		RuntimeObject* L_8 = __this->___dataGenerator_7;
		RuntimeObject** L_9 = (&__this->___dataBuffer_5);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
		L_10 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_11 = __this->___m_CommonParams_10;
		NullCheck(L_8);
		InterfaceActionInvoker4< RuntimeObject**, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701*, String_t* >::Invoke(0 /* System.Void Unity.Services.Analytics.Data.IDataGenerator::GameRunning(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String) */, IDataGenerator_t3CD09958BA210D4EE5B68AE79A6936634EE801E4_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11, _stringLiteral4AA3716D19976DD411ABCF0909A0E4D4B8EA09AF);
		// m_BufferLengthAtLastGameRunning = dataBuffer.Length;
		RuntimeObject* L_12 = __this->___dataBuffer_5;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_12);
		__this->___m_BufferLengthAtLastGameRunning_6 = L_13;
		goto IL_0084;
	}

IL_0071:
	{
		// m_BufferLengthAtLastGameRunning = dataBuffer.Length;
		RuntimeObject* L_14 = __this->___dataBuffer_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Unity.Services.Analytics.Internal.IBuffer::get_Length() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_14);
		__this->___m_BufferLengthAtLastGameRunning_6 = L_15;
	}

IL_0084:
	{
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::InternalTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_InternalTick_m26C028F5A6BDF4901A7FEB9888FBC9C3E0A3710A (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (ServiceEnabled &&
		//     ConsentTracker.IsGeoIpChecked())
		bool L_0;
		L_0 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___ConsentTracker_15;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// Flush();
		AnalyticsServiceInstance_Flush_mB8F0ED919FB47026C5CB61DD3562FAA09009C21E(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance::SetVariableCommonParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIDeviceIdentifiersInternal_t687B1DA3AE9BF480EADAC04B587D8C7AA70B6239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B2_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B1_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* G_B6_1 = NULL;
	{
		// m_CommonParams.Idfv = deviceIdentifiersInternal.Idfv;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_0 = __this->___m_CommonParams_10;
		RuntimeObject* L_1 = __this->___deviceIdentifiersInternal_12;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Analytics.Platform.IIDeviceIdentifiersInternal::get_Idfv() */, IIDeviceIdentifiersInternal_t687B1DA3AE9BF480EADAC04B587D8C7AA70B6239_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline(L_0, L_2, NULL);
		// m_CommonParams.DeviceVolume = DeviceVolumeProvider.GetDeviceVolume();
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_3 = __this->___m_CommonParams_10;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_4;
		L_4 = DeviceVolumeProvider_GetDeviceVolume_m1318E3ADBEF76202DE617254B3CBB6028FE3D3DE(NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		G_B1_0 = L_3;
		if (L_5)
		{
			G_B2_0 = L_3;
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_6 = V_1;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0045;
	}

IL_0038:
	{
		float L_7;
		L_7 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_0), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_8), ((double)L_7), /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0045:
	{
		NullCheck(G_B3_1);
		StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline(G_B3_1, G_B3_0, NULL);
		// m_CommonParams.BatteryLoad = SystemInfo.batteryLevel;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_9 = __this->___m_CommonParams_10;
		float L_10;
		L_10 = SystemInfo_get_batteryLevel_m549AF9A6BB748E5C50FF2D1D04D4E9E6B1C5D8C6(NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_11), ((double)L_10), /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		NullCheck(L_9);
		StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline(L_9, L_11, NULL);
		// m_CommonParams.UasUserID = PlayerId?.PlayerId;
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_12 = __this->___m_CommonParams_10;
		RuntimeObject* L_13;
		L_13 = AnalyticsServiceInstance_get_PlayerId_m0D2F879027597FF3E0653572EB04E6102A7938F3_inline(__this, NULL);
		RuntimeObject* L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = L_12;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = L_12;
			goto IL_0075;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_007a;
	}

IL_0075:
	{
		NullCheck(G_B5_0);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.Internal.IPlayerId::get_PlayerId() */, IPlayerId_t6A7BAE55B4D78E87B15B9261828E897BAACBF913_il2cpp_TypeInfo_var, G_B5_0);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
	}

IL_007a:
	{
		NullCheck(G_B6_1);
		StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline(G_B6_1, G_B6_0, NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Analytics.AnalyticsServiceInstance::GetAnalyticsUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_GetAnalyticsUserID_m765E15065C72B9B1F8687C1129FD703048851A27 (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return !string.IsNullOrEmpty(CustomAnalyticsId) ? CustomAnalyticsId : InstallId.GetOrCreateIdentifier();
		String_t* L_0;
		L_0 = AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		goto IL_0021;
	}

IL_001b:
	{
		String_t* L_4;
		L_4 = AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60_inline(__this, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__53__ctor_m5491939CC678F7C305834EC0D08A28179078638A (U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__53_MoveNext_mB51723CC85B3DF50D1E2A22396F3727302641FBF (U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m2E163839A43246935E1E2F10D4562569833A6193_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_008d_1;
		}

IL_000e_1:
		{
			// SetDependencies(cloudProjectId, installId, playerId, environment, customAnalyticsId);
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_2 = __this->___U3CU3E4__this_7;
			RuntimeObject* L_3 = __this->___cloudProjectId_2;
			RuntimeObject* L_4 = __this->___installId_3;
			RuntimeObject* L_5 = __this->___playerId_4;
			String_t* L_6 = __this->___environment_5;
			String_t* L_7 = __this->___customAnalyticsId_6;
			NullCheck(L_2);
			AnalyticsServiceInstance_SetDependencies_m7C79E9D3214F3D027E168348768AFD68196972B4(L_2, L_3, L_4, L_5, L_6, L_7, NULL);
			// if (ServiceEnabled)
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_8 = __this->___U3CU3E4__this_7;
			NullCheck(L_8);
			bool L_9;
			L_9 = AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline(L_8, NULL);
			V_1 = L_9;
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_00be_1;
			}
		}
		{
			// AnalyticsContainer.Initialize();
			AnalyticsContainer_Initialize_m9246BB4ED27EDE4B07E959047A92806CD3DC4C78(NULL);
			// await InitializeUser();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_11 = __this->___U3CU3E4__this_7;
			NullCheck(L_11);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
			L_12 = AnalyticsServiceInstance_InitializeUser_mC342B361F574226BBDF056F148FAE52B90E98CFA(L_11, NULL);
			NullCheck(L_12);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13;
			L_13 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_12, NULL);
			V_2 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_14)
			{
				goto IL_00a9_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = V_2;
			__this->___U3CU3Eu__1_8 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m2E163839A43246935E1E2F10D4562569833A6193(L_17, (&V_2), (&V_3), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110_m2E163839A43246935E1E2F10D4562569833A6193_RuntimeMethod_var);
			goto IL_00ee;
		}

IL_008d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = __this->___U3CU3Eu__1_8;
			V_2 = L_18;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_19 = (&__this->___U3CU3Eu__1_8);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_00a9_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// RecordStartupEvents();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_21 = __this->___U3CU3E4__this_7;
			NullCheck(L_21);
			AnalyticsServiceInstance_RecordStartupEvents_m91416206794DFA73F248FA6763A439FB455AF627(L_21, NULL);
		}

IL_00be_1:
		{
			goto IL_00da;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c0;
		}
		throw e;
	}

CATCH_00c0:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ee;
	}// end catch (depth: 1)

IL_00da:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_24, NULL);
	}

IL_00ee:
	{
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<Initialize>d__53::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__53_SetStateMachine_m9C2A6D1440FF570699AFC8D25229720634E799A0 (U3CInitializeU3Ed__53_tCB625795111E0AA2870E067B61CBB1E289E7B110* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__54__ctor_mD29AF896260A2E90B1227A577FE6DFCF6627CED2 (U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__54_MoveNext_mBAD796AEFC4543A9E72DA8F37D0F50A7A7E080F2 (U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m3BDC8AE70C64D136812C838E68CD967E444E1887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* V_2 = NULL;
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_001b_1;
		}

IL_000e_1:
		{
			// SetVariableCommonParams();
			AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			AnalyticsServiceInstance_SetVariableCommonParams_mAE82C6CB3D7D7DCC5337FB51A360457D5EB7844C(L_2, NULL);
		}

IL_001b_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0021_2;
				}
			}
			{
				goto IL_0023_2;
			}

IL_0021_2:
			{
				goto IL_006a_2;
			}

IL_0023_2:
			{
				// await ConsentTracker.CheckGeoIP();
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_4 = __this->___U3CU3E4__this_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = L_4->___ConsentTracker_15;
				NullCheck(L_5);
				Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_6;
				L_6 = InterfaceFuncInvoker0< Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.IConsentTracker::CheckGeoIP() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_5);
				NullCheck(L_6);
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_7;
				L_7 = Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7(L_6, Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
				V_1 = L_7;
				bool L_8;
				L_8 = TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179((&V_1), TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0086_2;
				}
			}
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->___U3CU3E1__state_0 = L_9;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_10 = V_1;
				__this->___U3CU3Eu__1_3 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				V_2 = __this;
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m3BDC8AE70C64D136812C838E68CD967E444E1887(L_11, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E_m3BDC8AE70C64D136812C838E68CD967E444E1887_RuntimeMethod_var);
				goto IL_0112;
			}

IL_006a_2:
			{
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_12 = __this->___U3CU3Eu__1_3;
				V_1 = L_12;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* L_13 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
			}

IL_0086_2:
			{
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_15;
				L_15 = TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9((&V_1), TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
				// if (ConsentTracker.IsGeoIpChecked() && (ConsentTracker.IsConsentDenied() || ConsentTracker.IsOptingOutInProgress()))
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_16 = __this->___U3CU3E4__this_2;
				NullCheck(L_16);
				RuntimeObject* L_17 = L_16->___ConsentTracker_15;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_17);
				if (!L_18)
				{
					goto IL_00c7_2;
				}
			}
			{
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_19 = __this->___U3CU3E4__this_2;
				NullCheck(L_19);
				RuntimeObject* L_20 = L_19->___ConsentTracker_15;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentDenied() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_00c4_2;
				}
			}
			{
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_22 = __this->___U3CU3E4__this_2;
				NullCheck(L_22);
				RuntimeObject* L_23 = L_22->___ConsentTracker_15;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_23);
				G_B16_0 = ((int32_t)(L_24));
				goto IL_00c5_2;
			}

IL_00c4_2:
			{
				G_B16_0 = 1;
			}

IL_00c5_2:
			{
				G_B18_0 = G_B16_0;
				goto IL_00c8_2;
			}

IL_00c7_2:
			{
				G_B18_0 = 0;
			}

IL_00c8_2:
			{
				V_3 = (bool)G_B18_0;
				bool L_25 = V_3;
				if (!L_25)
				{
					goto IL_00da_2;
				}
			}
			{
				// OptOut();
				AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_26 = __this->___U3CU3E4__this_2;
				NullCheck(L_26);
				AnalyticsServiceInstance_OptOut_mE80E70FBB35370154B02B32ADCED5B0EAA77B632(L_26, NULL);
			}

IL_00da_2:
			{
				goto IL_00e2_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00dd_1;
			}
			throw e;
		}

CATCH_00dd_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// catch (ConsentCheckException)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e2_1;
		}// end catch (depth: 2)

IL_00e2_1:
		{
			goto IL_00fe;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_27, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0112;
	}// end catch (depth: 1)

IL_00fe:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_29, NULL);
	}

IL_0112:
	{
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsServiceInstance/<InitializeUser>d__54::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeUserU3Ed__54_SetStateMachine_m66E42F816500B42D585A37A5706EEED67B57BE77 (U3CInitializeUserU3Ed__54_t3909D5FD7F7B8D75C8286E7C8436EB04F7A9C70E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.TransactionCurrencyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCurrencyConverter__ctor_m5ACA84E75A13698EAF50E70DF0FA9FA1EC7DBFFD (TransactionCurrencyConverter_t3296A312BAFE7A8FC56182C3D53BEFD1D9474133* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Device.Internal.IInstallationId Unity.Services.Analytics.InternalNewPlayerHelper::get_InstallId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; }
		RuntimeObject* L_0 = __this->___U3CInstallIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::.ctor(Unity.Services.Core.Device.Internal.IInstallationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, RuntimeObject* ___0_installId, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* G_B1_1 = NULL;
	{
		// internal InternalNewPlayerHelper(IInstallationId installId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// InstallId = installId ?? throw new ArgumentNullException("Did not get IInstallationId provider from Unity Services Core.");
		RuntimeObject* L_0 = ___0_installId;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBEF2B1FF4DF1F5D8159AD1DCED1FD87D644A5221)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalNewPlayerHelper__ctor_m1EF18BB2B52AFA4EC9CDBC69196E406BA05F2A0F_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CInstallIdU3Ek__BackingField_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CInstallIdU3Ek__BackingField_0), (void*)G_B2_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Analytics.InternalNewPlayerHelper::IsNewPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalNewPlayerHelper_IsNewPlayer_mE11DEC8005D24F3B42924870C1D64FFEE878916A (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// var coreIdentifier = InstallId.GetOrCreateIdentifier();
		RuntimeObject* L_0;
		L_0 = InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.Internal.IInstallationId::GetOrCreateIdentifier() */, IInstallationId_tCE6DEEEBAFABEB9EC621BD1646D82BC9D82BFB0C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// var analyticsIdentifier = ReadAnalyticsIdentifier();
		String_t* L_2;
		L_2 = InternalNewPlayerHelper_ReadAnalyticsIdentifier_m63998B3010974B15E5F13619BBDE43204E93F264(__this, NULL);
		V_1 = L_2;
		// if (String.IsNullOrEmpty(analyticsIdentifier) || analyticsIdentifier != coreIdentifier)
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_5 = V_1;
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 1;
	}

IL_0026:
	{
		V_2 = (bool)G_B3_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		// WriteAnalyticsIdentifierToFile(coreIdentifier);
		String_t* L_9 = V_0;
		InternalNewPlayerHelper_WriteAnalyticsIdentifierToFile_m791AE057AAC5C8B6D431F7F66605C0C7DD6A7B51(__this, L_9, NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_003b;
	}

IL_0037:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
// System.String Unity.Services.Analytics.InternalNewPlayerHelper::ReadAnalyticsIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalNewPlayerHelper_ReadAnalyticsIdentifier_m63998B3010974B15E5F13619BBDE43204E93F264 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return PlayerPrefs.GetString(k_UnityAnalyticsInstallationIdKey);
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.InternalNewPlayerHelper::WriteAnalyticsIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalNewPlayerHelper_WriteAnalyticsIdentifierToFile_m791AE057AAC5C8B6D431F7F66605C0C7DD6A7B51 (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(k_UnityAnalyticsInstallationIdKey, identifier);
		String_t* L_0 = ___0_identifier;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralB457254733CD5BB62A9549F9D7A04E54C28936CD, L_0, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.AnalyticsContainer Unity.Services.Analytics.AnalyticsContainer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* AnalyticsContainer_get_Instance_m4C13EB040860BA9F5FDE93883C4ED596EF8A66CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::set_Instance(Unity.Services.Analytics.AnalyticsContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ___0_value;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Single Unity.Services.Analytics.AnalyticsContainer::get_TimeUntilHeartbeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnalyticsContainer_get_TimeUntilHeartbeat_m4C6BCF4F210E2F00553BEEC0F4AC8F1756FB9371 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		// internal float TimeUntilHeartbeat => k_HeartbeatPeriod - m_HeartbeatTime;
		float L_0 = __this->___m_HeartbeatTime_8;
		return ((float)il2cpp_codegen_subtract((60.0f), L_0));
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Initialize_m9246BB4ED27EDE4B07E959047A92806CD3DC4C78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!s_Created)
		bool L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// s_Container = new GameObject("AnalyticsContainer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralD80A64E0036F8330EADC3705DD59CC6581FE8E99, NULL);
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7), (void*)L_2);
		// Instance = s_Container.AddComponent<AnalyticsContainer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		NullCheck(L_3);
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_4;
		L_4 = GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11(L_3, GameObject_AddComponent_TisAnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_mE4F8B8275039940AFB099EE841C9060ACCFF2A11_RuntimeMethod_var);
		AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776_inline(L_4, NULL);
		// s_Container.hideFlags = HideFlags.DontSaveInBuild | HideFlags.NotEditable;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)24), NULL);
		// s_Container.hideFlags |= HideFlags.HideInInspector;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_7, NULL);
		NullCheck(L_7);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_7, ((int32_t)((int32_t)L_8|2)), NULL);
		// DontDestroyOnLoad(s_Container);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_9, NULL);
		// s_Created = true;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)1;
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_Update_m077BEBF391B2FFFBA1892069B942D1C31C3038CD (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// m_GameRunningTime += Time.unscaledDeltaTime;
		float L_0 = __this->___m_GameRunningTime_9;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___m_GameRunningTime_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (m_GameRunningTime >= k_GameRunningPeriod)
		float L_2 = __this->___m_GameRunningTime_9;
		V_0 = (bool)((((int32_t)((!(((float)L_2) >= ((float)(60.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// AnalyticsService.internalInstance.RecordGameRunningIfNecessary();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_4 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		NullCheck(L_4);
		AnalyticsServiceInstance_RecordGameRunningIfNecessary_mDC174CE67E36436A206DDC321308853A727484C3(L_4, NULL);
		// m_GameRunningTime = 0.0f;
		__this->___m_GameRunningTime_9 = (0.0f);
	}

IL_003f:
	{
		// m_HeartbeatTime += Time.unscaledDeltaTime;
		float L_5 = __this->___m_HeartbeatTime_8;
		float L_6;
		L_6 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___m_HeartbeatTime_8 = ((float)il2cpp_codegen_add(L_5, L_6));
		// if (m_HeartbeatTime >= k_HeartbeatPeriod)
		float L_7 = __this->___m_HeartbeatTime_8;
		V_1 = (bool)((((int32_t)((!(((float)L_7) >= ((float)(60.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		// AnalyticsService.internalInstance.InternalTick();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_9 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		NullCheck(L_9);
		AnalyticsServiceInstance_InternalTick_m26C028F5A6BDF4901A7FEB9888FBC9C3E0A3710A(L_9, NULL);
		// m_HeartbeatTime = 0.0f;
		__this->___m_HeartbeatTime_8 = (0.0f);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::DestroyContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_DestroyContainer_m3E5CEA90A331B91C79BFED5D1CB0FFC07BC55B27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(s_Container);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// s_Created = false;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer_OnDestroy_m27C97541D5D0E67B2F4FA9D110EFDD12C88866DD (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnalyticsService.internalInstance.GameEnded();
		AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* L_0 = ((AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsService_t995B7CE25709A192F70345B0335516F282C0CE7B_il2cpp_TypeInfo_var))->___internalInstance_0;
		NullCheck(L_0);
		AnalyticsServiceInstance_GameEnded_m0C6611FE57A7E25C6F4E5BEF66545139EAB182A4(L_0, NULL);
		// s_Container = null;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Container_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// s_Created = false;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___s_Created_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.AnalyticsContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsContainer__ctor_m181248237969AF6A721DE089E172681F92EE9A04 (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* __this, const RuntimeMethod* method) 
{
	{
		// float m_HeartbeatTime = 0.0f;
		__this->___m_HeartbeatTime_8 = (0.0f);
		// float m_GameRunningTime = 0.0f;
		__this->___m_GameRunningTime_9 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.ConsentCheckExceptionReason Unity.Services.Analytics.ConsentCheckException::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentCheckException_get_Reason_m9D28EC501EAD29F3D4EF76D73A63F619CE75E631 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.ConsentCheckException::set_Reason(Unity.Services.Analytics.ConsentCheckExceptionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void Unity.Services.Analytics.ConsentCheckException::.ctor(Unity.Services.Analytics.ConsentCheckExceptionReason,System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3 (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_reason, int32_t ___1_errorCode, String_t* ___2_message, Exception_t* ___3_innerException, const RuntimeMethod* method) 
{
	{
		// : base(errorCode, message, innerException)
		int32_t L_0 = ___1_errorCode;
		String_t* L_1 = ___2_message;
		Exception_t* L_2 = ___3_innerException;
		RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A(__this, L_0, L_1, L_2, NULL);
		// Reason = reason;
		int32_t L_3 = ___0_reason;
		ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline(__this, L_3, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.CoreStatsHelper::SetCoreStatsConsent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper_SetCoreStatsConsent_mF5D6EDE2380AF3DA289C217CD505940D76D9877E (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, bool ___0_userProvidedConsent, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.CoreStatsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreStatsHelper__ctor_mD543DD28C5F258FC9B9BDD30D0192F8A7ECF9DF4 (CoreStatsHelper_tBF3F119096A7ABBDDC9F22ACBF13FA25FCD166E6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.SdkVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkVersion__cctor_mC098F58A265DB7E8ED89F1FCE4A5FD67906B0FD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51CCCD16F20968673612534128B2DD828ECDCAE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string SDK_VERSION = "4.3.0";
		((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0 = _stringLiteral51CCCD16F20968673612534128B2DD828ECDCAE7;
		Il2CppCodeGenWriteBarrier((void**)(&((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0), (void*)_stringLiteral51CCCD16F20968673612534128B2DD828ECDCAE7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.Locale::CurrentLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_CurrentLanguageCode_m720A4A975DCDE3417D54E73B51EA379DFC5B181E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765A3DB1011D6912AD0442B4ECBE5B8BB201E1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A7D169CCD77E57744CC59902A52F4727E0A7C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B31508304BB1389A45F8BEA31F65ABBEB18C0F1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// AndroidJavaClass localeClass = new AndroidJavaClass("java.util.Locale");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral9A7D169CCD77E57744CC59902A52F4727E0A7C8B, NULL);
		V_0 = L_0;
		// AndroidJavaObject defaultLocale = localeClass.CallStatic<AndroidJavaObject>("getDefault");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_1, _stringLiteral9B31508304BB1389A45F8BEA31F65ABBEB18C0F1, L_2, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_1 = L_3;
		// return defaultLocale.Call<string>("getLanguage");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_6;
		L_6 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_4, _stringLiteral765A3DB1011D6912AD0442B4ECBE5B8BB201E1B2, L_5, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_2 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String Unity.Services.Analytics.Internal.Locale::AnalyticsRegionLanguageCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_AnalyticsRegionLanguageCode_mBC2C7A14D9ED824729BF977BE5C1478B559BB45B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851B983F2B1071B01BAFFAADAAB570596B6B2564);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return $"{CurrentLanguageCode()}_ZZ";
		String_t* L_0;
		L_0 = Locale_CurrentLanguageCode_m720A4A975DCDE3417D54E73B51EA379DFC5B181E(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral851B983F2B1071B01BAFFAADAAB570596B6B2564, NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.AnalyticsForgetter::get_ConsentTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsForgetter_get_ConsentTracker_m290D7954B53F3E03381CA92923E8F3AD3F01052C (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, const RuntimeMethod* method) 
{
	{
		// IConsentTracker ConsentTracker { get; }
		RuntimeObject* L_0 = __this->___U3CConsentTrackerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::.ctor(System.String,System.String,System.String,System.String,System.Action,Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter__ctor_mA4F19D86908F6384D2B8030490DC29AC9E37AA9F (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, String_t* ___0_collectUrl, String_t* ___1_userId, String_t* ___2_timestamp, String_t* ___3_callingMethod, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_successfulUploadCallback, RuntimeObject* ___5_consentTracker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public AnalyticsForgetter(string collectUrl, string userId, string timestamp, string callingMethod,
		//                           Action successfulUploadCallback, IConsentTracker consentTracker = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var eventJson =
		//     "{\"eventList\":[{" +
		//     "\"eventName\":\"ddnaForgetMe\"," +
		//     "\"userID\":\"" + userId + "\"," +
		//     "\"eventUUID\":\"" + Guid.NewGuid().ToString() + "\"," +
		//     "\"eventTimestamp\":\"" + timestamp + "\"," +
		//     "\"eventVersion\":1," +
		//     "\"eventParams\":{" +
		//     "\"clientVersion\":\"" + Application.version + "\"," +
		//     "\"sdkMethod\":\"" + callingMethod + "\"" +
		//     "}}]}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral577425CD87D93CE29BD73B7A610A2AA16814173F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___1_userId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB91505A7C57926DDC126B93151A049BC213BEC78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Guid_t L_6;
		L_6 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral782091A124984DB669E8C38AF8E8C05E76873F5A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___2_timestamp;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral294385BD410CDE2F39E14D8793B4FC3D4FAF8EB4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13;
		L_13 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral1D9C903F2CFE60C87D084257D816121914ED5CD7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = ___3_callingMethod;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralE46475A038CE8463CC88A3C7DB6950E45EC6B178);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		V_0 = L_18;
		// s_Event = Encoding.UTF8.GetBytes(eventJson);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_19;
		L_19 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_20 = V_0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_19, L_20);
		__this->___s_Event_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_Event_1), (void*)L_21);
		// s_CollectUrl = collectUrl;
		String_t* L_22 = ___0_collectUrl;
		__this->___s_CollectUrl_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_CollectUrl_0), (void*)L_22);
		// s_Callback = successfulUploadCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = ___4_successfulUploadCallback;
		__this->___s_Callback_2 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_Callback_2), (void*)L_23);
		// ConsentTracker = consentTracker;
		RuntimeObject* L_24 = ___5_consentTracker;
		__this->___U3CConsentTrackerU3Ek__BackingField_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConsentTrackerU3Ek__BackingField_5), (void*)L_24);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::AttemptToForget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_AttemptToForget_mA75A8CDDCE45A7A3C98A10096C5F370593488503 (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (m_Request != null || m_SuccessfullyUploaded)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = __this->___m_Request_4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___m_SuccessfullyUploaded_3;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_00e1;
	}

IL_001c:
	{
		// var request = new UnityWebRequest(s_CollectUrl, UnityWebRequest.kHttpVerbPOST);
		String_t* L_3 = __this->___s_CollectUrl_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_4, L_3, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		V_0 = L_4;
		// var upload = new UploadHandlerRaw(s_Event)
		// {
		//     contentType = "application/json"
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___s_Event_1;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_6 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_6, L_5, NULL);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_7 = L_6;
		NullCheck(L_7);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_7, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		V_1 = L_7;
		// request.uploadHandler = upload;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = V_0;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_9 = V_1;
		NullCheck(L_8);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_8, L_9, NULL);
		// if (ConsentTracker.IsGeoIpChecked() && ConsentTracker.IsOptingOutInProgress())
		RuntimeObject* L_10;
		L_10 = AnalyticsForgetter_get_ConsentTracker_m290D7954B53F3E03381CA92923E8F3AD3F01052C_inline(__this, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_12;
		L_12 = AnalyticsForgetter_get_ConsentTracker_m290D7954B53F3E03381CA92923E8F3AD3F01052C_inline(__this, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsOptingOutInProgress() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_12);
		G_B8_0 = ((int32_t)(L_13));
		goto IL_0068;
	}

IL_0067:
	{
		G_B8_0 = 0;
	}

IL_0068:
	{
		V_3 = (bool)G_B8_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00bd;
		}
	}
	{
		// foreach (var header in ConsentTracker.requiredHeaders)
		RuntimeObject* L_15;
		L_15 = AnalyticsForgetter_get_ConsentTracker_m290D7954B53F3E03381CA92923E8F3AD3F01052C_inline(__this, NULL);
		NullCheck(L_15);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16;
		L_16 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(1 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.IConsentTracker::get_requiredHeaders() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_17;
		L_17 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_16, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_4 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_4), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a2_1;
			}

IL_0082_1:
			{
				// foreach (var header in ConsentTracker.requiredHeaders)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_18;
				L_18 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_4), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_5 = L_18;
				// request.SetRequestHeader(header.Key, header.Value);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = V_0;
				String_t* L_20;
				L_20 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_5), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_21;
				L_21 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_5), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_19);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_19, L_20, L_21, NULL);
			}

IL_00a2_1:
			{
				// foreach (var header in ConsentTracker.requiredHeaders)
				bool L_22;
				L_22 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_4), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0082_1;
				}
			}
			{
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
	}

IL_00bd:
	{
		// m_Request = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = V_0;
		NullCheck(L_23);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_24;
		L_24 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_23, NULL);
		__this->___m_Request_4 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_4), (void*)L_24);
		// m_Request.completed += UploadComplete;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_25 = __this->___m_Request_4;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_26 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_26, __this, (intptr_t)((void*)AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_25, L_26, NULL);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsForgetter::UploadComplete(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsForgetter_UploadComplete_mB2EDE69C50A9F0B30B56A4343F4000CD60C8DBCC (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0__, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var code = m_Request.webRequest.responseCode;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = __this->___m_Request_4;
		NullCheck(L_0);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_0, NULL);
		NullCheck(L_1);
		int64_t L_2;
		L_2 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_1, NULL);
		V_0 = L_2;
		// if (m_Request.webRequest.result == UnityWebRequest.Result.Success && code == 204)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = __this->___m_Request_4;
		NullCheck(L_3);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_6 = V_0;
		G_B3_0 = ((((int64_t)L_6) == ((int64_t)((int64_t)((int32_t)204))))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
	}

IL_0031:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// m_SuccessfullyUploaded = true;
		__this->___m_SuccessfullyUploaded_3 = (bool)1;
		// s_Callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = __this->___s_Callback_2;
		NullCheck(L_8);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
	}

IL_004a:
	{
		// m_Request.webRequest.Dispose();
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_9 = __this->___m_Request_4;
		NullCheck(L_9);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10;
		L_10 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_9, NULL);
		NullCheck(L_10);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_10, NULL);
		// m_Request = null;
		__this->___m_Request_4 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_4), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.Buffer::get_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Buffer_get_UserID_m6BD66FBC1ABA39DA24C41535DF3BE94661F15F7E (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::set_UserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_set_UserID_m195EB3D64726DCC07898F459A46B6C68BAEA77BA (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUserIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.Buffer::get_SessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Buffer_get_SessionID_mD4209B933FB98CBFC2C7F69A2A96FF1772C0A970 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::set_SessionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_set_SessionID_m0D0B4EEC1A1901D33A8085ABA27A392A443A12C3 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSessionIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.Buffer::get_PlayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Buffer_get_PlayerID_m0D017EFC14D46A7FC47081DF2064FD1982DB37E6 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = __this->___U3CPlayerIDU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::set_PlayerID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_set_PlayerID_mC938D625B5D985A3B6B96CBDB555F4C7CDD0A3B3 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlayerIDU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIDU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.Buffer::get_InstallID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Buffer_get_InstallID_mE0F85B193C37311FACA6E621F5C5AEBEDE36B6E4 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = __this->___U3CInstallIDU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::set_InstallID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_set_InstallID_m5AD99439125EE59773A76F5E4B6527F44EECD351 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CInstallIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInstallIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.Services.Analytics.Internal.Buffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_get_Length_m5CD9E4991DC98E6082EF5D5B63203D732B52F8B6 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Length => m_Tokens.Count;
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_inline(L_0, List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::.ctor(Unity.Services.Analytics.Internal.IBufferSystemCalls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer__ctor_m76AFC4BEBFD8C19192BFDA8F079AD2B39A5BB93A (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, RuntimeObject* ___0_eventIdGenerator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* G_B2_0 = NULL;
	Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* G_B3_1 = NULL;
	{
		// readonly List<Token> m_Tokens = new List<Token>();
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)il2cpp_codegen_object_new(List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD(L_0, List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD_RuntimeMethod_var);
		__this->___m_Tokens_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tokens_5), (void*)L_0);
		// readonly string m_CacheFilePath = CanUseDiskPersistence() ? $"{Application.persistentDataPath}/eventcache" : "";
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Buffer_CanUseDiskPersistence_m78F73FEEF557CDAC16E513F61A0412B02837F63E(NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_001a:
	{
		String_t* L_2;
		L_2 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral4D88DC602EB6FBBEF4C8649C1866B4FE2D18A73D, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_CacheFilePath_7 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_CacheFilePath_7), (void*)G_B3_0);
		// readonly long m_CacheFileMaximumSize = 1024 * 1024 * 5; // 5MB
		__this->___m_CacheFileMaximumSize_8 = ((int64_t)((int32_t)5242880));
		// public Buffer(IBufferSystemCalls eventIdGenerator)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_EventIdGenerator = eventIdGenerator;
		RuntimeObject* L_4 = ___0_eventIdGenerator;
		__this->___m_EventIdGenerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventIdGenerator_6), (void*)L_4);
		// LoadFromDisk();
		Buffer_LoadFromDisk_m90D1B70DAEFB1696281F78B64B4D5C79E1D25975(__this, NULL);
		// ClearDiskCache();
		Buffer_ClearDiskCache_m3E4B3D6FD5D912E2AB6B86312A8FF066882ED4D0(__this, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token> Unity.Services.Analytics.Internal.Buffer::CloneTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* Buffer_CloneTokens_m0FE5D28B994E47414E13002E094C7B949888562B (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4B1627333D1B07FDD3D4AFBD053E0AF39A1027F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* V_0 = NULL;
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* V_1 = NULL;
	{
		// var tokens = new List<Token>(m_Tokens);
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_1 = (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)il2cpp_codegen_object_new(List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4B1627333D1B07FDD3D4AFBD053E0AF39A1027F3(L_1, L_0, List_1__ctor_m4B1627333D1B07FDD3D4AFBD053E0AF39A1027F3_RuntimeMethod_var);
		V_0 = L_1;
		// m_Tokens.Clear();
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_2 = __this->___m_Tokens_5;
		NullCheck(L_2);
		List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_inline(L_2, List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_RuntimeMethod_var);
		// return tokens;
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_3 = V_0;
		V_1 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_4 = V_1;
		return L_4;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::InsertTokens(System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_InsertTokens_m9E53AFFA539FA886D31FEF52E876749FA073DE86 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ___0_tokens, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tokens.AddRange(tokens);
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_1 = ___0_tokens;
		NullCheck(L_0);
		List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9(L_0, L_1, List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Byte[] Unity.Services.Analytics.Internal.Buffer::Serialize(System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Buffer_Serialize_m704977B2284D362EA1E2C70D4CE2C4A70741254F (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ___0_tokens, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m809AD0ECB62159AEA06F0AF0AA70379E0F464F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m49EF4F49EA7EE5708CEEAC168C8BCA246475DA53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4399B1075DC5887FD38C8D9CB39A1411BA1DD09A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2E42DF0C55EA56379957D0AA1A5215791CF71529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A59CB27F689664DF3A79EFC791CD86ACAB8FBE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656574B35FE2C0EE99259961802BB9F4B3E920FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7646BCA86620BEB0AC49BAFC74ADE2D236A06D5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B05DA0A68B203AD60505AA9F0C3C292F55DB675);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95313AA22BE531F33DA57ED650DDA87BC0E096B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10D0E397CF291810D70D9CF0816E69E5F68BC09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB89D9E7580D0D17D5EE1189160034601495823D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	StringBuilder_t* G_B25_0 = NULL;
	StringBuilder_t* G_B24_0 = NULL;
	String_t* G_B26_0 = NULL;
	StringBuilder_t* G_B26_1 = NULL;
	int32_t G_B45_0 = 0;
	{
		// if (tokens.Count == 0)
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = ___0_tokens;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_inline(L_0, List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return null;
		V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_05b4;
	}

IL_0016:
	{
		// var data = new StringBuilder();
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		// data.Append("{\"eventList\":[");
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral5CDEC3D17C0672B2895D89FD7D65350996F6895B, NULL);
		// foreach (var t in tokens)
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_6 = ___0_tokens;
		NullCheck(L_6);
		Enumerator_tE8DA47058A77815C294DB98197D764A821D5DD1C L_7;
		L_7 = List_1_GetEnumerator_m2E42DF0C55EA56379957D0AA1A5215791CF71529(L_6, List_1_GetEnumerator_m2E42DF0C55EA56379957D0AA1A5215791CF71529_RuntimeMethod_var);
		V_4 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0548:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m809AD0ECB62159AEA06F0AF0AA70379E0F464F5C((&V_4), Enumerator_Dispose_m809AD0ECB62159AEA06F0AF0AA70379E0F464F5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_053a_1;
			}

IL_0036_1:
			{
				// foreach (var t in tokens)
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_8;
				L_8 = Enumerator_get_Current_m4399B1075DC5887FD38C8D9CB39A1411BA1DD09A_inline((&V_4), Enumerator_get_Current_m4399B1075DC5887FD38C8D9CB39A1411BA1DD09A_RuntimeMethod_var);
				V_5 = L_8;
				// switch (t.Type)
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_9 = V_5;
				int32_t L_10 = L_9.___Type_1;
				V_7 = L_10;
				int32_t L_11 = V_7;
				V_6 = L_11;
				int32_t L_12 = V_6;
				switch (L_12)
				{
					case 0:
					{
						goto IL_0095_1;
					}
					case 1:
					{
						goto IL_0141_1;
					}
					case 2:
					{
						goto IL_01cb_1;
					}
					case 3:
					{
						goto IL_01dd_1;
					}
					case 4:
					{
						goto IL_0435_1;
					}
					case 5:
					{
						goto IL_0153_1;
					}
					case 6:
					{
						goto IL_047f_1;
					}
					case 7:
					{
						goto IL_018f_1;
					}
					case 8:
					{
						goto IL_0285_1;
					}
					case 9:
					{
						goto IL_0219_1;
					}
					case 10:
					{
						goto IL_034d_1;
					}
					case 11:
					{
						goto IL_02f0_1;
					}
					case 12:
					{
						goto IL_03af_1;
					}
					case 13:
					{
						goto IL_03ff_1;
					}
					case 14:
					{
						goto IL_04b4_1;
					}
				}
			}
			{
				goto IL_0517_1;
			}

IL_0095_1:
			{
				// data.Append("{");
				StringBuilder_t* L_13 = V_0;
				NullCheck(L_13);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
				// data.Append("\"eventName\":\"");
				StringBuilder_t* L_15 = V_0;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralB10D0E397CF291810D70D9CF0816E69E5F68BC09, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_17 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_18 = V_5;
				String_t* L_19 = L_18.___Name_0;
				NullCheck(L_17);
				StringBuilder_t* L_20;
				L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_19, NULL);
				// data.Append("\",");
				StringBuilder_t* L_21 = V_0;
				NullCheck(L_21);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
				// data.Append("\"userID\":\"");
				StringBuilder_t* L_23 = V_0;
				NullCheck(L_23);
				StringBuilder_t* L_24;
				L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral95313AA22BE531F33DA57ED650DDA87BC0E096B9, NULL);
				// data.Append(UserID);
				StringBuilder_t* L_25 = V_0;
				String_t* L_26;
				L_26 = Buffer_get_UserID_m6BD66FBC1ABA39DA24C41535DF3BE94661F15F7E_inline(__this, NULL);
				NullCheck(L_25);
				StringBuilder_t* L_27;
				L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_26, NULL);
				// data.Append("\",");
				StringBuilder_t* L_28 = V_0;
				NullCheck(L_28);
				StringBuilder_t* L_29;
				L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
				// data.Append("\"sessionID\":\"");
				StringBuilder_t* L_30 = V_0;
				NullCheck(L_30);
				StringBuilder_t* L_31;
				L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral7B05DA0A68B203AD60505AA9F0C3C292F55DB675, NULL);
				// data.Append(SessionID);
				StringBuilder_t* L_32 = V_0;
				String_t* L_33;
				L_33 = Buffer_get_SessionID_mD4209B933FB98CBFC2C7F69A2A96FF1772C0A970_inline(__this, NULL);
				NullCheck(L_32);
				StringBuilder_t* L_34;
				L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_33, NULL);
				// data.Append("\",");
				StringBuilder_t* L_35 = V_0;
				NullCheck(L_35);
				StringBuilder_t* L_36;
				L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
				// data.Append("\"eventUUID\":\"");
				StringBuilder_t* L_37 = V_0;
				NullCheck(L_37);
				StringBuilder_t* L_38;
				L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral1A59CB27F689664DF3A79EFC791CD86ACAB8FBE9, NULL);
				// data.Append(m_EventIdGenerator.GenerateGuid());
				StringBuilder_t* L_39 = V_0;
				RuntimeObject* L_40 = __this->___m_EventIdGenerator_6;
				NullCheck(L_40);
				String_t* L_41;
				L_41 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Analytics.Internal.IBufferSystemCalls::GenerateGuid() */, IBufferSystemCalls_t9CA55BD1B80E3DB50B62AC3E1F54839D2A105C41_il2cpp_TypeInfo_var, L_40);
				NullCheck(L_39);
				StringBuilder_t* L_42;
				L_42 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, L_41, NULL);
				// data.Append("\",");
				StringBuilder_t* L_43 = V_0;
				NullCheck(L_43);
				StringBuilder_t* L_44;
				L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_43, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
				// break;
				goto IL_0517_1;
			}

IL_0141_1:
			{
				// data.Append("},");
				StringBuilder_t* L_45 = V_0;
				NullCheck(L_45);
				StringBuilder_t* L_46;
				L_46 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_45, _stringLiteral7646BCA86620BEB0AC49BAFC74ADE2D236A06D5F, NULL);
				// break;
				goto IL_0517_1;
			}

IL_0153_1:
			{
				// if (data[data.Length - 1] == ',')
				StringBuilder_t* L_47 = V_0;
				StringBuilder_t* L_48 = V_0;
				NullCheck(L_48);
				int32_t L_49;
				L_49 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_48, NULL);
				NullCheck(L_47);
				Il2CppChar L_50;
				L_50 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_47, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), NULL);
				V_8 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)44)))? 1 : 0);
				bool L_51 = V_8;
				if (!L_51)
				{
					goto IL_017e_1;
				}
			}
			{
				// data.Remove(data.Length - 1, 1);
				StringBuilder_t* L_52 = V_0;
				StringBuilder_t* L_53 = V_0;
				NullCheck(L_53);
				int32_t L_54;
				L_54 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_53, NULL);
				NullCheck(L_52);
				StringBuilder_t* L_55;
				L_55 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_52, ((int32_t)il2cpp_codegen_subtract(L_54, 1)), 1, NULL);
			}

IL_017e_1:
			{
				// data.Append("},");
				StringBuilder_t* L_56 = V_0;
				NullCheck(L_56);
				StringBuilder_t* L_57;
				L_57 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_56, _stringLiteral7646BCA86620BEB0AC49BAFC74ADE2D236A06D5F, NULL);
				// break;
				goto IL_0517_1;
			}

IL_018f_1:
			{
				// if (data[data.Length - 1] == ',')
				StringBuilder_t* L_58 = V_0;
				StringBuilder_t* L_59 = V_0;
				NullCheck(L_59);
				int32_t L_60;
				L_60 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_59, NULL);
				NullCheck(L_58);
				Il2CppChar L_61;
				L_61 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_58, ((int32_t)il2cpp_codegen_subtract(L_60, 1)), NULL);
				V_9 = (bool)((((int32_t)L_61) == ((int32_t)((int32_t)44)))? 1 : 0);
				bool L_62 = V_9;
				if (!L_62)
				{
					goto IL_01ba_1;
				}
			}
			{
				// data.Remove(data.Length - 1, 1);
				StringBuilder_t* L_63 = V_0;
				StringBuilder_t* L_64 = V_0;
				NullCheck(L_64);
				int32_t L_65;
				L_65 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_64, NULL);
				NullCheck(L_63);
				StringBuilder_t* L_66;
				L_66 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_63, ((int32_t)il2cpp_codegen_subtract(L_65, 1)), 1, NULL);
			}

IL_01ba_1:
			{
				// data.Append("],");
				StringBuilder_t* L_67 = V_0;
				NullCheck(L_67);
				StringBuilder_t* L_68;
				L_68 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_67, _stringLiteralB89D9E7580D0D17D5EE1189160034601495823D1, NULL);
				// break;
				goto IL_0517_1;
			}

IL_01cb_1:
			{
				// data.Append("\"eventParams\":{");
				StringBuilder_t* L_69 = V_0;
				NullCheck(L_69);
				StringBuilder_t* L_70;
				L_70 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_69, _stringLiteral51026120A929AEFCA7209B235ACE529BEC6FD7B1, NULL);
				// break;
				goto IL_0517_1;
			}

IL_01dd_1:
			{
				// if (data[data.Length - 1] == ',')
				StringBuilder_t* L_71 = V_0;
				StringBuilder_t* L_72 = V_0;
				NullCheck(L_72);
				int32_t L_73;
				L_73 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_72, NULL);
				NullCheck(L_71);
				Il2CppChar L_74;
				L_74 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_71, ((int32_t)il2cpp_codegen_subtract(L_73, 1)), NULL);
				V_10 = (bool)((((int32_t)L_74) == ((int32_t)((int32_t)44)))? 1 : 0);
				bool L_75 = V_10;
				if (!L_75)
				{
					goto IL_0208_1;
				}
			}
			{
				// data.Remove(data.Length - 1, 1);
				StringBuilder_t* L_76 = V_0;
				StringBuilder_t* L_77 = V_0;
				NullCheck(L_77);
				int32_t L_78;
				L_78 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_77, NULL);
				NullCheck(L_76);
				StringBuilder_t* L_79;
				L_79 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_76, ((int32_t)il2cpp_codegen_subtract(L_78, 1)), 1, NULL);
			}

IL_0208_1:
			{
				// data.Append("}");
				StringBuilder_t* L_80 = V_0;
				NullCheck(L_80);
				StringBuilder_t* L_81;
				L_81 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_80, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
				// break;
				goto IL_0517_1;
			}

IL_0219_1:
			{
				// if (null != t.Name)
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_82 = V_5;
				String_t* L_83 = L_82.___Name_0;
				V_11 = (bool)((!(((RuntimeObject*)(String_t*)L_83) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_84 = V_11;
				if (!L_84)
				{
					goto IL_0252_1;
				}
			}
			{
				// data.Append("\"");
				StringBuilder_t* L_85 = V_0;
				NullCheck(L_85);
				StringBuilder_t* L_86;
				L_86 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_85, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_87 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_88 = V_5;
				String_t* L_89 = L_88.___Name_0;
				NullCheck(L_87);
				StringBuilder_t* L_90;
				L_90 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_87, L_89, NULL);
				// data.Append("\":");
				StringBuilder_t* L_91 = V_0;
				NullCheck(L_91);
				StringBuilder_t* L_92;
				L_92 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_91, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
			}

IL_0252_1:
			{
				// data.AppendFormat(CultureInfo.InvariantCulture, "{0}", (double)t.Data);
				StringBuilder_t* L_93 = V_0;
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_94;
				L_94 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_95 = V_5;
				RuntimeObject* L_96 = L_95.___Data_2;
				double L_97 = ((*(double*)((double*)(double*)UnBox(L_96, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
				RuntimeObject* L_98 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_97);
				NullCheck(L_93);
				StringBuilder_t* L_99;
				L_99 = StringBuilder_AppendFormat_m91278D58CD695B07613B9A3941B745B815542E1E(L_93, L_94, _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_98, NULL);
				// data.Append(",");
				StringBuilder_t* L_100 = V_0;
				NullCheck(L_100);
				StringBuilder_t* L_101;
				L_101 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_100, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				// break;
				goto IL_0517_1;
			}

IL_0285_1:
			{
				// if (null != t.Name)
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_102 = V_5;
				String_t* L_103 = L_102.___Name_0;
				V_12 = (bool)((!(((RuntimeObject*)(String_t*)L_103) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_104 = V_12;
				if (!L_104)
				{
					goto IL_02be_1;
				}
			}
			{
				// data.Append("\"");
				StringBuilder_t* L_105 = V_0;
				NullCheck(L_105);
				StringBuilder_t* L_106;
				L_106 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_105, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_107 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_108 = V_5;
				String_t* L_109 = L_108.___Name_0;
				NullCheck(L_107);
				StringBuilder_t* L_110;
				L_110 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_107, L_109, NULL);
				// data.Append("\":");
				StringBuilder_t* L_111 = V_0;
				NullCheck(L_111);
				StringBuilder_t* L_112;
				L_112 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_111, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
			}

IL_02be_1:
			{
				// data.Append((bool)t.Data ? "true" : "false");
				StringBuilder_t* L_113 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_114 = V_5;
				RuntimeObject* L_115 = L_114.___Data_2;
				G_B24_0 = L_113;
				if (((*(bool*)((bool*)(bool*)UnBox(L_115, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
				{
					G_B25_0 = L_113;
					goto IL_02d4_1;
				}
			}
			{
				G_B26_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
				G_B26_1 = G_B24_0;
				goto IL_02d9_1;
			}

IL_02d4_1:
			{
				G_B26_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
				G_B26_1 = G_B25_0;
			}

IL_02d9_1:
			{
				NullCheck(G_B26_1);
				StringBuilder_t* L_116;
				L_116 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B26_1, G_B26_0, NULL);
				// data.Append(",");
				StringBuilder_t* L_117 = V_0;
				NullCheck(L_117);
				StringBuilder_t* L_118;
				L_118 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_117, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				// break;
				goto IL_0517_1;
			}

IL_02f0_1:
			{
				// if (null != t.Name)
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_119 = V_5;
				String_t* L_120 = L_119.___Name_0;
				V_13 = (bool)((!(((RuntimeObject*)(String_t*)L_120) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_121 = V_13;
				if (!L_121)
				{
					goto IL_0329_1;
				}
			}
			{
				// data.Append("\"");
				StringBuilder_t* L_122 = V_0;
				NullCheck(L_122);
				StringBuilder_t* L_123;
				L_123 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_122, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_124 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_125 = V_5;
				String_t* L_126 = L_125.___Name_0;
				NullCheck(L_124);
				StringBuilder_t* L_127;
				L_127 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_124, L_126, NULL);
				// data.Append("\":");
				StringBuilder_t* L_128 = V_0;
				NullCheck(L_128);
				StringBuilder_t* L_129;
				L_129 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_128, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
			}

IL_0329_1:
			{
				// data.Append((Int64)t.Data);
				StringBuilder_t* L_130 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_131 = V_5;
				RuntimeObject* L_132 = L_131.___Data_2;
				NullCheck(L_130);
				StringBuilder_t* L_133;
				L_133 = StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8(L_130, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_132, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
				// data.Append(",");
				StringBuilder_t* L_134 = V_0;
				NullCheck(L_134);
				StringBuilder_t* L_135;
				L_135 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_134, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				// break;
				goto IL_0517_1;
			}

IL_034d_1:
			{
				// if (null != t.Name)
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_136 = V_5;
				String_t* L_137 = L_136.___Name_0;
				V_14 = (bool)((!(((RuntimeObject*)(String_t*)L_137) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_138 = V_14;
				if (!L_138)
				{
					goto IL_0386_1;
				}
			}
			{
				// data.Append("\"");
				StringBuilder_t* L_139 = V_0;
				NullCheck(L_139);
				StringBuilder_t* L_140;
				L_140 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_139, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_141 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_142 = V_5;
				String_t* L_143 = L_142.___Name_0;
				NullCheck(L_141);
				StringBuilder_t* L_144;
				L_144 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_141, L_143, NULL);
				// data.Append("\":");
				StringBuilder_t* L_145 = V_0;
				NullCheck(L_145);
				StringBuilder_t* L_146;
				L_146 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_145, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
			}

IL_0386_1:
			{
				// data.Append(JsonConvert.ToString((string)t.Data));
				StringBuilder_t* L_147 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_148 = V_5;
				RuntimeObject* L_149 = L_148.___Data_2;
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				String_t* L_150;
				L_150 = JsonConvert_ToString_m63264635A791255A4CD3AA4FBE8498F51687FE7C(((String_t*)CastclassSealed((RuntimeObject*)L_149, String_t_il2cpp_TypeInfo_var)), NULL);
				NullCheck(L_147);
				StringBuilder_t* L_151;
				L_151 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_147, L_150, NULL);
				// data.Append(",");
				StringBuilder_t* L_152 = V_0;
				NullCheck(L_152);
				StringBuilder_t* L_153;
				L_153 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_152, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				// break;
				goto IL_0517_1;
			}

IL_03af_1:
			{
				// data.Append("\"");
				StringBuilder_t* L_154 = V_0;
				NullCheck(L_154);
				StringBuilder_t* L_155;
				L_155 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_154, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_156 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_157 = V_5;
				String_t* L_158 = L_157.___Name_0;
				NullCheck(L_156);
				StringBuilder_t* L_159;
				L_159 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_156, L_158, NULL);
				// data.Append("\":\"");
				StringBuilder_t* L_160 = V_0;
				NullCheck(L_160);
				StringBuilder_t* L_161;
				L_161 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_160, _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0, NULL);
				// data.Append(SaveDateTime((DateTime)t.Data));
				StringBuilder_t* L_162 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_163 = V_5;
				RuntimeObject* L_164 = L_163.___Data_2;
				il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
				String_t* L_165;
				L_165 = Buffer_SaveDateTime_m360DA83DBB1134A447EE7EADE6F4AD40020E06CC(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_164, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), NULL);
				NullCheck(L_162);
				StringBuilder_t* L_166;
				L_166 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_162, L_165, NULL);
				// data.Append("\",");
				StringBuilder_t* L_167 = V_0;
				NullCheck(L_167);
				StringBuilder_t* L_168;
				L_168 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_167, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
				// break;
				goto IL_0517_1;
			}

IL_03ff_1:
			{
				// data.Append("\"eventTimestamp\":\"");
				StringBuilder_t* L_169 = V_0;
				NullCheck(L_169);
				StringBuilder_t* L_170;
				L_170 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_169, _stringLiteral656574B35FE2C0EE99259961802BB9F4B3E920FE, NULL);
				// data.Append(SaveDateTime((DateTime)t.Data));
				StringBuilder_t* L_171 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_172 = V_5;
				RuntimeObject* L_173 = L_172.___Data_2;
				il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
				String_t* L_174;
				L_174 = Buffer_SaveDateTime_m360DA83DBB1134A447EE7EADE6F4AD40020E06CC(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_173, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), NULL);
				NullCheck(L_171);
				StringBuilder_t* L_175;
				L_175 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_171, L_174, NULL);
				// data.Append("\",");
				StringBuilder_t* L_176 = V_0;
				NullCheck(L_176);
				StringBuilder_t* L_177;
				L_177 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_176, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
				// break;
				goto IL_0517_1;
			}

IL_0435_1:
			{
				// if (null != t.Name)
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_178 = V_5;
				String_t* L_179 = L_178.___Name_0;
				V_15 = (bool)((!(((RuntimeObject*)(String_t*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_180 = V_15;
				if (!L_180)
				{
					goto IL_046e_1;
				}
			}
			{
				// data.Append("\"");
				StringBuilder_t* L_181 = V_0;
				NullCheck(L_181);
				StringBuilder_t* L_182;
				L_182 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_181, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_183 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_184 = V_5;
				String_t* L_185 = L_184.___Name_0;
				NullCheck(L_183);
				StringBuilder_t* L_186;
				L_186 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_183, L_185, NULL);
				// data.Append("\":");
				StringBuilder_t* L_187 = V_0;
				NullCheck(L_187);
				StringBuilder_t* L_188;
				L_188 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_187, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
			}

IL_046e_1:
			{
				// data.Append("{");
				StringBuilder_t* L_189 = V_0;
				NullCheck(L_189);
				StringBuilder_t* L_190;
				L_190 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_189, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
				// break;
				goto IL_0517_1;
			}

IL_047f_1:
			{
				// data.Append("\"");
				StringBuilder_t* L_191 = V_0;
				NullCheck(L_191);
				StringBuilder_t* L_192;
				L_192 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_191, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				// data.Append(t.Name);
				StringBuilder_t* L_193 = V_0;
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_194 = V_5;
				String_t* L_195 = L_194.___Name_0;
				NullCheck(L_193);
				StringBuilder_t* L_196;
				L_196 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_193, L_195, NULL);
				// data.Append("\":");
				StringBuilder_t* L_197 = V_0;
				NullCheck(L_197);
				StringBuilder_t* L_198;
				L_198 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_197, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
				// data.Append("[");
				StringBuilder_t* L_199 = V_0;
				NullCheck(L_199);
				StringBuilder_t* L_200;
				L_200 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_199, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
				// break;
				goto IL_0517_1;
			}

IL_04b4_1:
			{
				// data.Append("\"unityInstallationID\":\"");
				StringBuilder_t* L_201 = V_0;
				NullCheck(L_201);
				StringBuilder_t* L_202;
				L_202 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_201, _stringLiteral5119119D395301AF26F5E33DACA5C4C27048BFA4, NULL);
				// data.Append(InstallID);
				StringBuilder_t* L_203 = V_0;
				String_t* L_204;
				L_204 = Buffer_get_InstallID_mE0F85B193C37311FACA6E621F5C5AEBEDE36B6E4_inline(__this, NULL);
				NullCheck(L_203);
				StringBuilder_t* L_205;
				L_205 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_203, L_204, NULL);
				// data.Append("\",");
				StringBuilder_t* L_206 = V_0;
				NullCheck(L_206);
				StringBuilder_t* L_207;
				L_207 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_206, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
				// if (!string.IsNullOrEmpty(PlayerID))
				String_t* L_208;
				L_208 = Buffer_get_PlayerID_m0D017EFC14D46A7FC47081DF2064FD1982DB37E6_inline(__this, NULL);
				bool L_209;
				L_209 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_208, NULL);
				V_16 = (bool)((((int32_t)L_209) == ((int32_t)0))? 1 : 0);
				bool L_210 = V_16;
				if (!L_210)
				{
					goto IL_0515_1;
				}
			}
			{
				// data.Append("\"unityPlayerID\":\"");
				StringBuilder_t* L_211 = V_0;
				NullCheck(L_211);
				StringBuilder_t* L_212;
				L_212 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_211, _stringLiteral46CC0A1237AF8D2AD7B8E32EE022F0AFF27543D2, NULL);
				// data.Append(PlayerID);
				StringBuilder_t* L_213 = V_0;
				String_t* L_214;
				L_214 = Buffer_get_PlayerID_m0D017EFC14D46A7FC47081DF2064FD1982DB37E6_inline(__this, NULL);
				NullCheck(L_213);
				StringBuilder_t* L_215;
				L_215 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_213, L_214, NULL);
				// data.Append("\",");
				StringBuilder_t* L_216 = V_0;
				NullCheck(L_216);
				StringBuilder_t* L_217;
				L_217 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_216, _stringLiteral0B6D138D8454083A41D1C936D8DFA8099F161DA8, NULL);
			}

IL_0515_1:
			{
				// break;
				goto IL_0517_1;
			}

IL_0517_1:
			{
				// if (t.Type == TokenType.EventEnd && IsRequestOverSizeLimit(data.ToString()))
				Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_218 = V_5;
				int32_t L_219 = L_218.___Type_1;
				if ((!(((uint32_t)L_219) == ((uint32_t)1))))
				{
					goto IL_052f_1;
				}
			}
			{
				StringBuilder_t* L_220 = V_0;
				NullCheck(L_220);
				String_t* L_221;
				L_221 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_220);
				bool L_222;
				L_222 = Buffer_IsRequestOverSizeLimit_m9F184C8767CC69366156956A92B1EEBBDC14BDD1(__this, L_221, NULL);
				G_B45_0 = ((int32_t)(L_222));
				goto IL_0530_1;
			}

IL_052f_1:
			{
				G_B45_0 = 0;
			}

IL_0530_1:
			{
				V_17 = (bool)G_B45_0;
				bool L_223 = V_17;
				if (!L_223)
				{
					goto IL_0539_1;
				}
			}
			{
				// break;
				goto IL_0546_1;
			}

IL_0539_1:
			{
			}

IL_053a_1:
			{
				// foreach (var t in tokens)
				bool L_224;
				L_224 = Enumerator_MoveNext_m49EF4F49EA7EE5708CEEAC168C8BCA246475DA53((&V_4), Enumerator_MoveNext_m49EF4F49EA7EE5708CEEAC168C8BCA246475DA53_RuntimeMethod_var);
				if (L_224)
				{
					goto IL_0036_1;
				}
			}

IL_0546_1:
			{
				goto IL_0557;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0557:
	{
		// if (data[data.Length - 1] == ',')
		StringBuilder_t* L_225 = V_0;
		StringBuilder_t* L_226 = V_0;
		NullCheck(L_226);
		int32_t L_227;
		L_227 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_226, NULL);
		NullCheck(L_225);
		Il2CppChar L_228;
		L_228 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_225, ((int32_t)il2cpp_codegen_subtract(L_227, 1)), NULL);
		V_18 = (bool)((((int32_t)L_228) == ((int32_t)((int32_t)44)))? 1 : 0);
		bool L_229 = V_18;
		if (!L_229)
		{
			goto IL_0581;
		}
	}
	{
		// data.Remove(data.Length - 1, 1);
		StringBuilder_t* L_230 = V_0;
		StringBuilder_t* L_231 = V_0;
		NullCheck(L_231);
		int32_t L_232;
		L_232 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_231, NULL);
		NullCheck(L_230);
		StringBuilder_t* L_233;
		L_233 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_230, ((int32_t)il2cpp_codegen_subtract(L_232, 1)), 1, NULL);
	}

IL_0581:
	{
		// data.Append("]}");
		StringBuilder_t* L_234 = V_0;
		NullCheck(L_234);
		StringBuilder_t* L_235;
		L_235 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_234, _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875, NULL);
		// var dataString = data.ToString();
		StringBuilder_t* L_236 = V_0;
		NullCheck(L_236);
		String_t* L_237;
		L_237 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_236);
		V_1 = L_237;
		// if (string.IsNullOrEmpty(dataString))
		String_t* L_238 = V_1;
		bool L_239;
		L_239 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_238, NULL);
		V_19 = L_239;
		bool L_240 = V_19;
		if (!L_240)
		{
			goto IL_05a5;
		}
	}
	{
		// return null;
		V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_05b4;
	}

IL_05a5:
	{
		// return Encoding.UTF8.GetBytes(dataString);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_241;
		L_241 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_242 = V_1;
		NullCheck(L_241);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_243;
		L_243 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_241, L_242);
		V_3 = L_243;
		goto IL_05b4;
	}

IL_05b4:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_244 = V_3;
		return L_244;
	}
}
// System.String Unity.Services.Analytics.Internal.Buffer::SaveDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Buffer_SaveDateTime_m360DA83DBB1134A447EE7EADE6F4AD40020E06CC (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return dateTime.ToString(k_MillisecondDateFormat, CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&___0_dateTime), _stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4, L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.DateTime Unity.Services.Analytics.Internal.Buffer::ParseDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Buffer_ParseDateTime_m544F6E26B9EB8AE1FCD996C695802204EE5FB8A4 (String_t* ___0_dateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return DateTime.ParseExact(dateTime, k_AllDateFormats, CultureInfo.InvariantCulture, DateTimeStyles.None);
		String_t* L_0 = ___0_dateTime;
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_StaticFields*)il2cpp_codegen_static_fields_for(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var))->___k_AllDateFormats_4;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_ParseExact_mC63B11B9478595A40022DAE69AEE30626B509BA3(L_0, L_1, L_2, 0, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.Buffer::IsRequestOverSizeLimit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buffer_IsRequestOverSizeLimit_m9F184C8767CC69366156956A92B1EEBBDC14BDD1 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// var byteCount = Encoding.Unicode.GetByteCount(data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		String_t* L_1 = ___0_data;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_0, L_1);
		V_0 = L_2;
		// var byteLimit = 4194304;
		V_1 = ((int32_t)4194304);
		// return byteCount >= byteLimit;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushStartEvent_m842214D8F1E4A5B175D7EE0BB912DA4FE60E3354 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_name, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___2_eventVersion, bool ___3_addPlayerIdsToEventBody, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC423B0AD0A6684383410341BE059D3BDDEB43CA);
		s_Il2CppMethodInitialized = true;
	}
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = name,
		//     Type = TokenType.EventStart,
		//     Data = null
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		String_t* L_1 = ___0_name;
		(&V_0)->___Name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_1);
		(&V_0)->___Type_1 = 0;
		(&V_0)->___Data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)NULL);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_2 = V_0;
		NullCheck(L_0);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_0, L_2, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// m_Tokens.Add(new Token
		// {
		//     Name = name,
		//     Type = TokenType.EventTimestamp,
		//     Data = datetime
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_3 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		String_t* L_4 = ___0_name;
		(&V_0)->___Name_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_4);
		(&V_0)->___Type_1 = ((int32_t)13);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___1_datetime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		(&V_0)->___Data_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_7);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_8 = V_0;
		NullCheck(L_3);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_3, L_8, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// if (eventVersion != null)
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&___2_eventVersion), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = "eventVersion",
		//     Type = TokenType.Int64,
		//     Data = eventVersion
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_11 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		(&V_0)->___Name_0 = _stringLiteralCC423B0AD0A6684383410341BE059D3BDDEB43CA;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)_stringLiteralCC423B0AD0A6684383410341BE059D3BDDEB43CA);
		(&V_0)->___Type_1 = ((int32_t)11);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_12 = ___2_eventVersion;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_13 = L_12;
		RuntimeObject* L_14 = Box(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_il2cpp_TypeInfo_var, &L_13);
		(&V_0)->___Data_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_14);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_15 = V_0;
		NullCheck(L_11);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_11, L_15, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
	}

IL_00a5:
	{
		// if (addPlayerIdsToEventBody)
		bool L_16 = ___3_addPlayerIdsToEventBody;
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_00db;
		}
	}
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = null,
		//     Type = TokenType.StandardEventIds,
		//     Data = null
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_18 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		(&V_0)->___Name_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)(String_t*)NULL);
		(&V_0)->___Type_1 = ((int32_t)14);
		(&V_0)->___Data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)NULL);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_18, L_19, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
	}

IL_00db:
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = null,
		//     Type = TokenType.EventParamsStart,
		//     Data = null
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_20 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		(&V_0)->___Name_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)(String_t*)NULL);
		(&V_0)->___Type_1 = 2;
		(&V_0)->___Data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)NULL);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_21 = V_0;
		NullCheck(L_20);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_20, L_21, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushEndEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushEndEvent_mFE7E5974ED82AA150C972F3A87CE56C8EF6C6F4F (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = null,
		//     Type = TokenType.EventParamsEnd,
		//     Data = null
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		(&V_0)->___Name_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)(String_t*)NULL);
		(&V_0)->___Type_1 = 3;
		(&V_0)->___Data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)NULL);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_1 = V_0;
		NullCheck(L_0);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_0, L_1, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// m_Tokens.Add(new Token
		// {
		//     Name = null,
		//     Type = TokenType.EventEnd,
		//     Data = null
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_2 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		(&V_0)->___Name_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)(String_t*)NULL);
		(&V_0)->___Type_1 = 1;
		(&V_0)->___Data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)NULL);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_2, L_3, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushDouble(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushDouble_m0907B903E19C51258B1ACC66B4B7D523D5126260 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, double ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = name,
		//     Type = TokenType.Float64,
		//     Data = val
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		String_t* L_1 = ___1_name;
		(&V_0)->___Name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_1);
		(&V_0)->___Type_1 = ((int32_t)9);
		double L_2 = ___0_val;
		double L_3 = L_2;
		RuntimeObject* L_4 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_3);
		(&V_0)->___Data_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_4);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_5 = V_0;
		NullCheck(L_0);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_0, L_5, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushFloat(System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushFloat_mAAA674E9AEF0A377CD4AE54629F78C44717711DE (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, float ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// PushDouble(val, name);
		float L_0 = ___0_val;
		String_t* L_1 = ___1_name;
		Buffer_PushDouble_m0907B903E19C51258B1ACC66B4B7D523D5126260(__this, ((double)L_0), L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushString_m98468EF79ADF7D06EEA4C9848D888EAC3C512D2D (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, String_t* ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = name,
		//     Type = TokenType.String,
		//     Data = val
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		String_t* L_1 = ___1_name;
		(&V_0)->___Name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_1);
		(&V_0)->___Type_1 = ((int32_t)10);
		String_t* L_2 = ___0_val;
		(&V_0)->___Data_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_2);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_3 = V_0;
		NullCheck(L_0);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_0, L_3, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushInt64(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushInt64_mC57CE4B39CE58DA48FF350C49C9C53582AB534B7 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, int64_t ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = name,
		//     Type = TokenType.Int64,
		//     Data = val
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		String_t* L_1 = ___1_name;
		(&V_0)->___Name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_1);
		(&V_0)->___Type_1 = ((int32_t)11);
		int64_t L_2 = ___0_val;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_3);
		(&V_0)->___Data_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_4);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_5 = V_0;
		NullCheck(L_0);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_0, L_5, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushInt(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushInt_m61F6B738A02D03E5BC9C3CF7F3E45655C2FDE03D (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, int32_t ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// PushInt64(val, name);
		int32_t L_0 = ___0_val;
		String_t* L_1 = ___1_name;
		Buffer_PushInt64_mC57CE4B39CE58DA48FF350C49C9C53582AB534B7(__this, ((int64_t)L_0), L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushBool(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushBool_m707E65F36301CFC39F101101E06F810DC199C4F6 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, bool ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Tokens.Add(new Token
		// {
		//     Name = name,
		//     Type = TokenType.Boolean,
		//     Data = val
		// });
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		il2cpp_codegen_initobj((&V_0), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		String_t* L_1 = ___1_name;
		(&V_0)->___Name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_1);
		(&V_0)->___Type_1 = 8;
		bool L_2 = ___0_val;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		(&V_0)->___Data_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_4);
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_5 = V_0;
		NullCheck(L_0);
		List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_0, L_5, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::FlushToDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_FlushToDisk_mE714F0A6E09F1614CA9D9388C81DEAD4C020F191 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m11FA74C1FCD8AD5EA589F5FCBEC91E953FB73CDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE58C0F28891FF06F83079142110323B96EFE6CE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8CA81E2CEF238A84BADEB55AF94A1BE19C345B3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// if (!CanUseDiskPersistence())
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Buffer_CanUseDiskPersistence_m78F73FEEF557CDAC16E513F61A0412B02837F63E(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.Log(k_NoBufferSupportMessage);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF8CA81E2CEF238A84BADEB55AF94A1BE19C345B3, NULL);
		// return;
		goto IL_00f2;
	}

IL_001e:
	{
		// if (m_DiskCacheSize > m_CacheFileMaximumSize)
		int64_t L_2 = __this->___m_DiskCacheSize_10;
		int64_t L_3 = __this->___m_CacheFileMaximumSize_8;
		V_1 = (bool)((((int64_t)L_2) > ((int64_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// return;
		goto IL_00f2;
	}

IL_0036:
	{
		// using (var stream = File.Open(m_CacheFilePath, FileMode.OpenOrCreate))
		String_t* L_5 = __this->___m_CacheFilePath_7;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6;
		L_6 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_5, 4, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e7:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_2;
					if (!L_7)
					{
						goto IL_00f1;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00f1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var writer = new BinaryWriter(stream, Encoding.UTF8))
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_2;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
				L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_11 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				BinaryWriter__ctor_m2B32D5012023033323CE412C1093D5AA484EC052(L_11, L_9, L_10, NULL);
				V_3 = L_11;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d9_1:
					{// begin finally (depth: 2)
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = V_3;
							if (!L_12)
							{
								goto IL_00e3_1;
							}
						}
						{
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = V_3;
							NullCheck(L_13);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
						}

IL_00e3_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// writer.Seek(0, SeekOrigin.End);
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_14 = V_3;
						NullCheck(L_14);
						int64_t L_15;
						L_15 = VirtualFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(7 /* System.Int64 System.IO.BinaryWriter::Seek(System.Int32,System.IO.SeekOrigin) */, L_14, 0, 2);
						// for (var i = m_DiskCacheLastFlushedToken; i < m_Tokens.Count; i++)
						int32_t L_16 = __this->___m_DiskCacheLastFlushedToken_9;
						V_4 = L_16;
						goto IL_008f_2;
					}

IL_0064_2:
					{
						// WriteToken(writer, m_Tokens[i]);
						BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_17 = V_3;
						List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_18 = __this->___m_Tokens_5;
						int32_t L_19 = V_4;
						NullCheck(L_18);
						Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_20;
						L_20 = List_1_get_Item_m11FA74C1FCD8AD5EA589F5FCBEC91E953FB73CDF(L_18, L_19, List_1_get_Item_m11FA74C1FCD8AD5EA589F5FCBEC91E953FB73CDF_RuntimeMethod_var);
						Buffer_WriteToken_m8187CE6C0C52AC30BA539CA47727D0E9EE1FBBC3(__this, L_17, L_20, NULL);
						// m_DiskCacheLastFlushedToken++;
						int32_t L_21 = __this->___m_DiskCacheLastFlushedToken_9;
						__this->___m_DiskCacheLastFlushedToken_9 = ((int32_t)il2cpp_codegen_add(L_21, 1));
						// for (var i = m_DiskCacheLastFlushedToken; i < m_Tokens.Count; i++)
						int32_t L_22 = V_4;
						V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
					}

IL_008f_2:
					{
						// for (var i = m_DiskCacheLastFlushedToken; i < m_Tokens.Count; i++)
						int32_t L_23 = V_4;
						List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_24 = __this->___m_Tokens_5;
						NullCheck(L_24);
						int32_t L_25;
						L_25 = List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_inline(L_24, List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
						V_5 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
						bool L_26 = V_5;
						if (L_26)
						{
							goto IL_0064_2;
						}
					}
					{
						// m_DiskCacheSize = stream.Length;
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_27 = V_2;
						NullCheck(L_27);
						int64_t L_28;
						L_28 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_27);
						__this->___m_DiskCacheSize_10 = L_28;
						// Debug.Log($"Flushed up to token index {m_DiskCacheLastFlushedToken}, cache file is {m_DiskCacheSize}B");
						int32_t L_29 = __this->___m_DiskCacheLastFlushedToken_9;
						int32_t L_30 = L_29;
						RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
						int64_t L_32 = __this->___m_DiskCacheSize_10;
						int64_t L_33 = L_32;
						RuntimeObject* L_34 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_33);
						String_t* L_35;
						L_35 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE58C0F28891FF06F83079142110323B96EFE6CE0, L_31, L_34, NULL);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_35, NULL);
						goto IL_00e4_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00e4_1:
			{
				goto IL_00f2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::ClearDiskCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_ClearDiskCache_m3E4B3D6FD5D912E2AB6B86312A8FF066882ED4D0 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8CA81E2CEF238A84BADEB55AF94A1BE19C345B3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!CanUseDiskPersistence())
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Buffer_CanUseDiskPersistence_m78F73FEEF557CDAC16E513F61A0412B02837F63E(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Debug.Log(k_NoBufferSupportMessage);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF8CA81E2CEF238A84BADEB55AF94A1BE19C345B3, NULL);
		// return;
		goto IL_003f;
	}

IL_001b:
	{
		// m_DiskCacheLastFlushedToken = 0;
		__this->___m_DiskCacheLastFlushedToken_9 = 0;
		// if (File.Exists(m_CacheFilePath))
		String_t* L_2 = __this->___m_CacheFilePath_7;
		bool L_3;
		L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// File.Delete(m_CacheFilePath);
		String_t* L_5 = __this->___m_CacheFilePath_7;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_5, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::ClearBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_ClearBuffer_m202E864F38D497441E513048EBAF53B38FE4A0B6 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tokens.Clear();
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = __this->___m_Tokens_5;
		NullCheck(L_0);
		List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_inline(L_0, List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_RuntimeMethod_var);
		// ClearDiskCache();
		Buffer_ClearDiskCache_m3E4B3D6FD5D912E2AB6B86312A8FF066882ED4D0(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::LoadFromDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_LoadFromDisk_m90D1B70DAEFB1696281F78B64B4D5C79E1D25975 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8CA81E2CEF238A84BADEB55AF94A1BE19C345B3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* V_2 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!CanUseDiskPersistence())
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Buffer_CanUseDiskPersistence_m78F73FEEF557CDAC16E513F61A0412B02837F63E(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.Log(k_NoBufferSupportMessage);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF8CA81E2CEF238A84BADEB55AF94A1BE19C345B3, NULL);
		// return;
		goto IL_0104;
	}

IL_001e:
	{
		// m_Tokens.Clear();
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_2 = __this->___m_Tokens_5;
		NullCheck(L_2);
		List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_inline(L_2, List_1_Clear_m85128FF795616B6353D44435F4F2CBC674F4292D_RuntimeMethod_var);
		// if (File.Exists(m_CacheFilePath))
		String_t* L_3 = __this->___m_CacheFilePath_7;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0104;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			// var incomingEvents = new List<Token>();
			List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_6 = (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)il2cpp_codegen_object_new(List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD(L_6, List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD_RuntimeMethod_var);
			V_2 = L_6;
			// using (var stream = File.Open(m_CacheFilePath, FileMode.Open))
			String_t* L_7 = __this->___m_CacheFilePath_7;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8;
			L_8 = File_Open_m3C4C3B31523AC0687F60FFD1B0FD51F49161EB64(L_7, 3, NULL);
			V_3 = L_8;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00c9_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_3;
						if (!L_9)
						{
							goto IL_00d3_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = V_3;
						NullCheck(L_10);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
					}

IL_00d3_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using (var reader = new BinaryReader(stream, Encoding.UTF8))
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_3;
					Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
					L_12 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
					NullCheck(L_13);
					BinaryReader__ctor_mD85F293A64917055AA78D504B87E5F7B81E4FD46(L_13, L_11, L_12, NULL);
					V_4 = L_13;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_00b9_2:
						{// begin finally (depth: 3)
							{
								BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = V_4;
								if (!L_14)
								{
									goto IL_00c5_2;
								}
							}
							{
								BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = V_4;
								NullCheck(L_15);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
							}

IL_00c5_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							// var length = stream.Length;
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = V_3;
							NullCheck(L_16);
							int64_t L_17;
							L_17 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_16);
							V_5 = L_17;
							goto IL_007b_3;
						}

IL_006a_3:
						{
							// incomingEvents.Add(ReadToken(reader));
							List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_18 = V_2;
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = V_4;
							Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_20;
							L_20 = Buffer_ReadToken_mCB5095D17A5F366A0B4278801E78EE6520FFD568(__this, L_19, NULL);
							NullCheck(L_18);
							List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_inline(L_18, L_20, List_1_Add_mBAC62E3B9DBB7C3BFF71A8AE002875768C82175F_RuntimeMethod_var);
						}

IL_007b_3:
						{
							// while (stream.Position != length)
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_21 = V_3;
							NullCheck(L_21);
							int64_t L_22;
							L_22 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_21);
							int64_t L_23 = V_5;
							V_6 = (bool)((((int32_t)((((int64_t)L_22) == ((int64_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
							bool L_24 = V_6;
							if (L_24)
							{
								goto IL_006a_3;
							}
						}
						{
							// m_Tokens.AddRange(incomingEvents);
							List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_25 = __this->___m_Tokens_5;
							List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_26 = V_2;
							NullCheck(L_25);
							List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9(L_25, L_26, List_1_AddRange_m88304ED59F11A7C5B0A799D62486A4C8F1F69CC9_RuntimeMethod_var);
							// m_DiskCacheSize = length;
							int64_t L_27 = V_5;
							__this->___m_DiskCacheSize_10 = L_27;
							// m_DiskCacheLastFlushedToken = m_Tokens.Count - 1;
							List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_28 = __this->___m_Tokens_5;
							NullCheck(L_28);
							int32_t L_29;
							L_29 = List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_inline(L_28, List_1_get_Count_mF1D85C9F5AD4DDC7EEAB2FC1A0F6EA7B26FF5D39_RuntimeMethod_var);
							__this->___m_DiskCacheLastFlushedToken_9 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
							goto IL_00c6_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_00c6_2:
				{
					goto IL_00d4_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00d4_1:
		{
			goto IL_0103;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d7;
		}
		throw e;
	}

CATCH_00d7:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogWarning($"Error loading cached events: file was corrupt (probably due to improper app/system shutdown). Cached events have been discarded and other operations will continue as normal. Error was {e.Message}");
		Exception_t* L_30 = V_7;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_30);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral009455CBDE8F533A179F082659C0C14AA02B9158)), L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_32, NULL);
		// m_DiskCacheSize = 0;
		__this->___m_DiskCacheSize_10 = ((int64_t)0);
		// m_DiskCacheLastFlushedToken = 0;
		__this->___m_DiskCacheLastFlushedToken_9 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0103;
	}// end catch (depth: 1)

IL_0103:
	{
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::WriteToken(System.IO.BinaryWriter,Unity.Services.Analytics.Internal.Buffer/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_WriteToken_m8187CE6C0C52AC30BA539CA47727D0E9EE1FBBC3 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_writer, Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// writer.Write((int)token.Type);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_writer;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_1 = ___1_token;
		int32_t L_2 = L_1.___Type_1;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// var hasName = null != token.Name;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_3 = ___1_token;
		String_t* L_4 = L_3.___Name_0;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// writer.Write(hasName);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = ___0_writer;
		bool L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_5, L_6);
		// if (hasName)
		bool L_7 = V_0;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// writer.Write(token.Name);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_9 = ___0_writer;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_10 = ___1_token;
		String_t* L_11 = L_10.___Name_0;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_9, L_11);
	}

IL_0034:
	{
		// switch (token.Type)
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_12 = ___1_token;
		int32_t L_13 = L_12.___Type_1;
		V_3 = L_13;
		int32_t L_14 = V_3;
		V_2 = L_14;
		int32_t L_15 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 8)))
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_009b;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_00af;
			}
			case 5:
			{
				goto IL_00af;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_005f:
	{
		// writer.Write((bool)token.Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_16 = ___0_writer;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_17 = ___1_token;
		RuntimeObject* L_18 = L_17.___Data_2;
		NullCheck(L_16);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_16, ((*(bool*)((bool*)(bool*)UnBox(L_18, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))));
		// break;
		goto IL_00c8;
	}

IL_0073:
	{
		// writer.Write((long)token.Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_19 = ___0_writer;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_20 = ___1_token;
		RuntimeObject* L_21 = L_20.___Data_2;
		NullCheck(L_19);
		VirtualActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_19, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_21, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))));
		// break;
		goto IL_00c8;
	}

IL_0087:
	{
		// writer.Write((double)token.Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_22 = ___0_writer;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_23 = ___1_token;
		RuntimeObject* L_24 = L_23.___Data_2;
		NullCheck(L_22);
		VirtualActionInvoker1< double >::Invoke(14 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_22, ((*(double*)((double*)(double*)UnBox(L_24, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))));
		// break;
		goto IL_00c8;
	}

IL_009b:
	{
		// writer.Write((string)token.Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_25 = ___0_writer;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_26 = ___1_token;
		RuntimeObject* L_27 = L_26.___Data_2;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_25, ((String_t*)CastclassSealed((RuntimeObject*)L_27, String_t_il2cpp_TypeInfo_var)));
		// break;
		goto IL_00c8;
	}

IL_00af:
	{
		// writer.Write(SaveDateTime((DateTime)token.Data));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = ___0_writer;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_29 = ___1_token;
		RuntimeObject* L_30 = L_29.___Data_2;
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		String_t* L_31;
		L_31 = Buffer_SaveDateTime_m360DA83DBB1134A447EE7EADE6F4AD40020E06CC(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_30, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_28, L_31);
		// break;
		goto IL_00c8;
	}

IL_00c8:
	{
		// }
		return;
	}
}
// Unity.Services.Analytics.Internal.Buffer/Token Unity.Services.Analytics.Internal.Buffer::ReadToken(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 Buffer_ReadToken_mCB5095D17A5F366A0B4278801E78EE6520FFD568 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var token = new Token
		// {
		//     Type = (TokenType)reader.ReadInt32()
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		(&V_2)->___Type_1 = L_1;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_2 = V_2;
		V_0 = L_2;
		// var hasName = reader.ReadBoolean();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___0_reader;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_3);
		V_1 = L_4;
		// if (hasName)
		bool L_5 = V_1;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// token.Name = reader.ReadString();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_7);
		(&V_0)->___Name_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_8);
	}

IL_0033:
	{
		// switch (token.Type)
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_9 = V_0;
		int32_t L_10 = L_9.___Type_1;
		V_5 = L_10;
		int32_t L_11 = V_5;
		V_4 = L_11;
		int32_t L_12 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 8)))
		{
			case 0:
			{
				goto IL_0062;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_009e;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_00ad;
			}
			case 5:
			{
				goto IL_00ad;
			}
		}
	}
	{
		goto IL_00c6;
	}

IL_0062:
	{
		// token.Data = reader.ReadBoolean();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_13);
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		(&V_0)->___Data_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_16);
		// break;
		goto IL_00c6;
	}

IL_0076:
	{
		// token.Data = reader.ReadInt64();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___0_reader;
		NullCheck(L_17);
		int64_t L_18;
		L_18 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_17);
		int64_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_19);
		(&V_0)->___Data_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_20);
		// break;
		goto IL_00c6;
	}

IL_008a:
	{
		// token.Data = reader.ReadDouble();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_21 = ___0_reader;
		NullCheck(L_21);
		double L_22;
		L_22 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_21);
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_23);
		(&V_0)->___Data_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_24);
		// break;
		goto IL_00c6;
	}

IL_009e:
	{
		// token.Data = reader.ReadString();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_reader;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_25);
		(&V_0)->___Data_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_26);
		// break;
		goto IL_00c6;
	}

IL_00ad:
	{
		// token.Data = ParseDateTime(reader.ReadString());
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = ___0_reader;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_27);
		il2cpp_codegen_runtime_class_init_inline(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29;
		L_29 = Buffer_ParseDateTime_m544F6E26B9EB8AE1FCD996C695802204EE5FB8A4(L_28, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_30 = L_29;
		RuntimeObject* L_31 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_30);
		(&V_0)->___Data_2 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Data_2), (void*)L_31);
		// break;
		goto IL_00c6;
	}

IL_00c6:
	{
		// return token;
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_32 = V_0;
		V_6 = L_32;
		goto IL_00cb;
	}

IL_00cb:
	{
		// }
		Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235 L_33 = V_6;
		return L_33;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::PushEvent(Unity.Services.Analytics.Internal.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_PushEvent_m617C13253CFA6C1EFCFF261C5F8FE2758A6982C0 (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* ___0_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* V_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	double V_9 = 0.0;
	bool V_10 = false;
	String_t* V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int64_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	String_t* G_B2_1 = NULL;
	Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* G_B2_2 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	String_t* G_B1_1 = NULL;
	Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* G_B1_2 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	String_t* G_B3_2 = NULL;
	Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* G_B3_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B30_0 = 0;
	{
		// var dateTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		// PushStartEvent(evt.Name, dateTime, evt.Version);
		Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_1 = ___0_evt;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Event_get_Name_m8FD8FF91BC2CF9CCE2FFC0D303E454AB3D37DB12_inline(L_1, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = V_0;
		Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_4 = ___0_evt;
		NullCheck(L_4);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5;
		L_5 = Event_get_Version_mE0D7A0F0F0DD76C172F503E37E870C17D6106D56_inline(L_4, NULL);
		V_2 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		G_B1_2 = __this;
		if (L_6)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			G_B2_2 = __this;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_7 = V_3;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0037;
	}

IL_002a:
	{
		int32_t L_8;
		L_8 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_9), ((int64_t)L_8), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0037:
	{
		NullCheck(G_B3_3);
		Buffer_PushStartEvent_m842214D8F1E4A5B175D7EE0BB912DA4FE60E3354(G_B3_3, G_B3_2, G_B3_1, G_B3_0, (bool)0, NULL);
		// var eData = evt.Parameters;
		Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_10 = ___0_evt;
		NullCheck(L_10);
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_11;
		L_11 = Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC_inline(L_10, NULL);
		V_1 = L_11;
		// foreach (var data in eData.Data)
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_12 = V_1;
		NullCheck(L_12);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13;
		L_13 = EventData_get_Data_mA97B1E0133942DA374284B2EE8C8CDF1D8A05914_inline(L_12, NULL);
		NullCheck(L_13);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_14;
		L_14 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_13, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_4 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_4), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01b4_1;
			}

IL_0058_1:
			{
				// foreach (var data in eData.Data)
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_15;
				L_15 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_4), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_5 = L_15;
				// if (data.Value is float f32Val)
				RuntimeObject* L_16;
				L_16 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_8 = L_16;
				RuntimeObject* L_17 = V_8;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
				{
					goto IL_0080_1;
				}
			}
			{
				RuntimeObject* L_18 = V_8;
				V_6 = ((*(float*)((float*)(float*)UnBox(L_18, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
				G_B8_0 = 1;
				goto IL_0081_1;
			}

IL_0080_1:
			{
				G_B8_0 = 0;
			}

IL_0081_1:
			{
				V_7 = (bool)G_B8_0;
				bool L_19 = V_7;
				if (!L_19)
				{
					goto IL_009e_1;
				}
			}
			{
				// PushFloat(f32Val, data.Key);
				float L_20 = V_6;
				String_t* L_21;
				L_21 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				Buffer_PushFloat_mAAA674E9AEF0A377CD4AE54629F78C44717711DE(__this, L_20, L_21, NULL);
				goto IL_01b3_1;
			}

IL_009e_1:
			{
				// else if (data.Value is double f64Val)
				RuntimeObject* L_22;
				L_22 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_8 = L_22;
				RuntimeObject* L_23 = V_8;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_23, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
				{
					goto IL_00bc_1;
				}
			}
			{
				RuntimeObject* L_24 = V_8;
				V_9 = ((*(double*)((double*)(double*)UnBox(L_24, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
				G_B13_0 = 1;
				goto IL_00bd_1;
			}

IL_00bc_1:
			{
				G_B13_0 = 0;
			}

IL_00bd_1:
			{
				V_10 = (bool)G_B13_0;
				bool L_25 = V_10;
				if (!L_25)
				{
					goto IL_00da_1;
				}
			}
			{
				// PushDouble(f64Val, data.Key);
				double L_26 = V_9;
				String_t* L_27;
				L_27 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				Buffer_PushDouble_m0907B903E19C51258B1ACC66B4B7D523D5126260(__this, L_26, L_27, NULL);
				goto IL_01b3_1;
			}

IL_00da_1:
			{
				// else if (data.Value is string strVal)
				RuntimeObject* L_28;
				L_28 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_11 = ((String_t*)IsInstSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var));
				String_t* L_29 = V_11;
				V_12 = (bool)((!(((RuntimeObject*)(String_t*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_30 = V_12;
				if (!L_30)
				{
					goto IL_010a_1;
				}
			}
			{
				// PushString(strVal, data.Key);
				String_t* L_31 = V_11;
				String_t* L_32;
				L_32 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				Buffer_PushString_m98468EF79ADF7D06EEA4C9848D888EAC3C512D2D(__this, L_31, L_32, NULL);
				goto IL_01b3_1;
			}

IL_010a_1:
			{
				// else if (data.Value is int intVal)
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_8 = L_33;
				RuntimeObject* L_34 = V_8;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_34, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
				{
					goto IL_0128_1;
				}
			}
			{
				RuntimeObject* L_35 = V_8;
				V_13 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_35, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
				G_B20_0 = 1;
				goto IL_0129_1;
			}

IL_0128_1:
			{
				G_B20_0 = 0;
			}

IL_0129_1:
			{
				V_14 = (bool)G_B20_0;
				bool L_36 = V_14;
				if (!L_36)
				{
					goto IL_0143_1;
				}
			}
			{
				// PushInt(intVal, data.Key);
				int32_t L_37 = V_13;
				String_t* L_38;
				L_38 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				Buffer_PushInt_m61F6B738A02D03E5BC9C3CF7F3E45655C2FDE03D(__this, L_37, L_38, NULL);
				goto IL_01b3_1;
			}

IL_0143_1:
			{
				// else if (data.Value is Int64 int64Val)
				RuntimeObject* L_39;
				L_39 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_8 = L_39;
				RuntimeObject* L_40 = V_8;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_40, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
				{
					goto IL_0161_1;
				}
			}
			{
				RuntimeObject* L_41 = V_8;
				V_15 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_41, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
				G_B25_0 = 1;
				goto IL_0162_1;
			}

IL_0161_1:
			{
				G_B25_0 = 0;
			}

IL_0162_1:
			{
				V_16 = (bool)G_B25_0;
				bool L_42 = V_16;
				if (!L_42)
				{
					goto IL_017c_1;
				}
			}
			{
				// PushInt64(int64Val, data.Key);
				int64_t L_43 = V_15;
				String_t* L_44;
				L_44 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				Buffer_PushInt64_mC57CE4B39CE58DA48FF350C49C9C53582AB534B7(__this, L_43, L_44, NULL);
				goto IL_01b3_1;
			}

IL_017c_1:
			{
				// else if (data.Value is bool boolVal)
				RuntimeObject* L_45;
				L_45 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_5), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_8 = L_45;
				RuntimeObject* L_46 = V_8;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_46, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
				{
					goto IL_019a_1;
				}
			}
			{
				RuntimeObject* L_47 = V_8;
				V_17 = ((*(bool*)((bool*)(bool*)UnBox(L_47, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
				G_B30_0 = 1;
				goto IL_019b_1;
			}

IL_019a_1:
			{
				G_B30_0 = 0;
			}

IL_019b_1:
			{
				V_18 = (bool)G_B30_0;
				bool L_48 = V_18;
				if (!L_48)
				{
					goto IL_01b3_1;
				}
			}
			{
				// PushBool(boolVal, data.Key);
				bool L_49 = V_17;
				String_t* L_50;
				L_50 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_5), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				Buffer_PushBool_m707E65F36301CFC39F101101E06F810DC199C4F6(__this, L_49, L_50, NULL);
			}

IL_01b3_1:
			{
			}

IL_01b4_1:
			{
				// foreach (var data in eData.Data)
				bool L_51;
				L_51 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_4), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_01d1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d1:
	{
		// PushEndEvent();
		Buffer_PushEndEvent_mFE7E5974ED82AA150C972F3A87CE56C8EF6C6F4F(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.Buffer::CanUseDiskPersistence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buffer_CanUseDiskPersistence_m78F73FEEF557CDAC16E513F61A0412B02837F63E (const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		//             return
		//                 Application.platform != RuntimePlatform.Switch &&
		// #if !UNITY_2021_1_OR_NEWER
		//                 Application.platform != RuntimePlatform.XboxOne &&
		// #endif
		// #if UNITY_2019 || UNITY_2020_2_OR_NEWER
		//                 Application.platform != RuntimePlatform.GameCoreXboxOne &&
		//                 Application.platform != RuntimePlatform.GameCoreXboxSeries &&
		//                 Application.platform != RuntimePlatform.PS5 &&
		// #endif
		//                 Application.platform != RuntimePlatform.PS4 &&
		//                 !string.IsNullOrEmpty(Application.persistentDataPath);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)37))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)36))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3;
		L_3 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)38))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4;
		L_4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)25))))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		G_B7_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B7_0 = 0;
	}

IL_003e:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void Unity.Services.Analytics.Internal.Buffer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer__cctor_m344529A6C952519960AFD22B1064D79E365566AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly string[] k_AllDateFormats = { k_SecondDateFormat, k_MillisecondDateFormat };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3C1DFC84C89C48D8E83EB3C98D58E22F70F5E9F4);
		((Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_StaticFields*)il2cpp_codegen_static_fields_for(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var))->___k_AllDateFormats_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_StaticFields*)il2cpp_codegen_static_fields_for(Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE_il2cpp_TypeInfo_var))->___k_AllDateFormats_4), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Analytics.Internal.Buffer/Token
IL2CPP_EXTERN_C void Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshal_pinvoke(const Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235& unmarshaled, Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_pinvoke& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___Name_0);
	marshaled.___Type_1 = unmarshaled.___Type_1;
	if (unmarshaled.___Data_2 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_2))
		{
			marshaled.___Data_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data_2));
			(marshaled.___Data_2)->AddRef();
		}
		else
		{
			marshaled.___Data_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data_2);
		}
	}
	else
	{
		marshaled.___Data_2 = NULL;
	}
}
IL2CPP_EXTERN_C void Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshal_pinvoke_back(const Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_pinvoke& marshaled, Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaledType_temp_1 = 0;
	unmarshaledType_temp_1 = marshaled.___Type_1;
	unmarshaled.___Type_1 = unmarshaledType_temp_1;
	if (marshaled.___Data_2 != NULL)
	{
		unmarshaled.___Data_2 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_2, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_2), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_2))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data_2), Il2CppIUnknown::IID, marshaled.___Data_2);
		}
	}
	else
	{
		unmarshaled.___Data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_2), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Unity.Services.Analytics.Internal.Buffer/Token
IL2CPP_EXTERN_C void Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshal_pinvoke_cleanup(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
	if (marshaled.___Data_2 != NULL)
	{
		(marshaled.___Data_2)->Release();
		marshaled.___Data_2 = NULL;
	}
}
// Conversion methods for marshalling of: Unity.Services.Analytics.Internal.Buffer/Token
IL2CPP_EXTERN_C void Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshal_com(const Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235& unmarshaled, Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_com& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Name_0);
	marshaled.___Type_1 = unmarshaled.___Type_1;
	if (unmarshaled.___Data_2 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_2))
		{
			marshaled.___Data_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data_2));
			(marshaled.___Data_2)->AddRef();
		}
		else
		{
			marshaled.___Data_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data_2);
		}
	}
	else
	{
		marshaled.___Data_2 = NULL;
	}
}
IL2CPP_EXTERN_C void Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshal_com_back(const Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_com& marshaled, Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Name_0));
	int32_t unmarshaledType_temp_1 = 0;
	unmarshaledType_temp_1 = marshaled.___Type_1;
	unmarshaled.___Type_1 = unmarshaledType_temp_1;
	if (marshaled.___Data_2 != NULL)
	{
		unmarshaled.___Data_2 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_2, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_2), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_2))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data_2), Il2CppIUnknown::IID, marshaled.___Data_2);
		}
	}
	else
	{
		unmarshaled.___Data_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_2), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Unity.Services.Analytics.Internal.Buffer/Token
IL2CPP_EXTERN_C void Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshal_com_cleanup(Token_t56680C8EE3E0DFEC87998AD3565311971EBA2235_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
	if (marshaled.___Data_2 != NULL)
	{
		(marshaled.___Data_2)->Release();
		marshaled.___Data_2 = NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_UserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_UserID_m3792A7308E3A22B473C90CB70F2177EB407A721E (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUserIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_InstallID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_InstallID_mC29B2A0C91133923ACC932C8F1F6E98230B751B2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CInstallIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInstallIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_PlayerID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_PlayerID_m5E8463277C4B37EA715076B898A4D37780C528A2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlayerIDU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIDU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::set_SessionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_set_SessionID_m8C74D0C6D7F787C6A0510ADA1C2A607CD8D3B006 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSessionIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.Services.Analytics.Internal.BufferRevoked::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferRevoked_get_Length_mD5016F14854C974BA5C331FFD2CF09F3B12FCDB6 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// public int Length => 0;
		return 0;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::ClearBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_ClearBuffer_mDBAD93ED3FBD2F1968F806A839A8980BE5EEF2CA (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::ClearDiskCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_ClearDiskCache_mCCE904407DC4D938B70808FF24F74DE2295A7E20 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token> Unity.Services.Analytics.Internal.BufferRevoked::CloneTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* BufferRevoked_CloneTokens_mFFE6EAEBF98E23FCB2FD23357F18EF54627D63AE (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* V_0 = NULL;
	{
		// return new List<Buffer.Token>();
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_0 = (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)il2cpp_codegen_object_new(List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD(L_0, List_1__ctor_m4AC21FEF9D310DB2263E7913E74C0E0E0BD3AEAD_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::InsertTokens(System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_InsertTokens_mC2EDD3A14FE87A0AE0189E7418EA7FE54BC9F660 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ___0_tokens, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::FlushToDisk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_FlushToDisk_m5322B06F1F6B732499E2715DA50184E682522F7C (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushBool(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushBool_mB26DF71292F123226A5AF9B6F5BF407067B3DFFC (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, bool ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushDouble(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushDouble_mBD049B292502643EEED579188E43B19D6175B687 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, double ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushEndEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushEndEvent_mAFE22A609752A9E0718FD2A1A3155D212FD72BBE (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushEvent(Unity.Services.Analytics.Internal.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushEvent_m1BCAFDC654C92D031F3C35FE9B962DEE4F536BAC (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* ___0_evt, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushInt64(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushInt64_mE165559F21AAA29EC8D20D997CAB8AEEF59050B1 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, int64_t ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushStartEvent_m0F9BB0A6F8FEF0B580651A18E5114E9096ACB30A (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_name, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___2_eventVersion, bool ___3_addPlayerIdsToEventBody, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::PushString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked_PushString_m807007ECECA82C206A1A3B92C7D8E31F165309D4 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, String_t* ___0_val, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Byte[] Unity.Services.Analytics.Internal.BufferRevoked::Serialize(System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferRevoked_Serialize_m5F3B9CA3A875E49C2FC1A55648807DEE4227A40B (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* ___0_tokens, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// return null;
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferRevoked::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRevoked__ctor_m208AEF741C576200CF78EA83EF4DE08DBD27D0B2 (BufferRevoked_t713408989DEAED79FCDEFED9B0437CC6991DF6B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.BufferSystemCalls::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferSystemCalls_GenerateGuid_m61F3E2FF777BFA46961A04C2ADED85F198272DED (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// return Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		V_1 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		String_t* L_2 = V_1;
		return L_2;
	}
}
// System.Void Unity.Services.Analytics.Internal.BufferSystemCalls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSystemCalls__ctor_m11A81CCB33E4BA6C679E191AB344CC3277C57B8C (BufferSystemCalls_t30CA07BE3DD2F29E9F7036ED838F0C92A50480F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.Consent::get_Pipl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static String Pipl => "pipl";
		return _stringLiteralFFBF433B627DA76F2B3F8F9137C40070252A3B18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optInPiplConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2 = L_0;
		return;
	}
}
// Unity.Services.Analytics.Internal.ConsentStatus Unity.Services.Analytics.Internal.ConsentTracker::get_optOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptOutConsentStatusU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::set_optOutConsentStatus(Unity.Services.Analytics.Internal.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptOutConsentStatusU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.ConsentTracker::get_piplHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ConsentTracker_get_piplHeaders_mC7732B6E50BB062A62D669AC5201FAF1802BCD2F (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		//     new Dictionary<string, string>
		// {
		//     { "PIPL_EXPORT", "true" },
		//     { "PIPL_CONSENT", "true" }
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral2309FB9CC1600C4642826BA92EB5C43EA0970693, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteral2A5B4A683A4FF348D7FBA286A40B146642302E8C, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.ConsentTracker::get_requiredHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ConsentTracker_get_requiredHeaders_m65D460E70EF5C3EC28C5E47057DB4CA17704F818 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B3_0 = NULL;
	{
		// response.identifier == Consent.Pipl ? piplHeaders : new Dictionary<string, string>();
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		String_t* L_2;
		L_2 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_4, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		G_B3_0 = L_4;
		goto IL_0024;
	}

IL_001e:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = ConsentTracker_get_piplHeaders_mC7732B6E50BB062A62D669AC5201FAF1802BCD2F(__this, NULL);
		G_B3_0 = L_5;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m478B76472BE051496CB2D8EE77D91DED3D332E5A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_coreStatsHelper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new GeoAPI(), coreStatsHelper) {}
		GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_0 = (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287*)il2cpp_codegen_object_new(GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D(L_0, NULL);
		RuntimeObject* L_1 = ___0_coreStatsHelper;
		ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C(__this, L_0, L_1, NULL);
		// : this(new GeoAPI(), coreStatsHelper) {}
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::.ctor(Unity.Services.Analytics.Internal.IGeoAPI,Unity.Services.Analytics.ICoreStatsHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker__ctor_m9C23286CCF2BC6690013071ECD56F7FC0B5B745C (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, RuntimeObject* ___0_geoApi, RuntimeObject* ___1_coreStatsHelper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B1_1 = NULL;
	{
		// internal ConsentTracker(IGeoAPI geoApi, ICoreStatsHelper coreStatsHelper)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_GeoAPI = geoApi ?? new GeoAPI();
		RuntimeObject* L_0 = ___0_geoApi;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_2 = (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287*)il2cpp_codegen_object_new(GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D(L_2, NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0013:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_GeoAPI_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_GeoAPI_0), (void*)G_B2_0);
		// m_CoreStatsHelper = coreStatsHelper;
		RuntimeObject* L_3 = ___1_coreStatsHelper;
		__this->___m_CoreStatsHelper_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoreStatsHelper_1), (void*)L_3);
		// optOutConsentStatus = ConsentStatus.Unknown;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 0, NULL);
		// optInPiplConsentStatus = ConsentStatus.Unknown;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 0, NULL);
		// ReadOptInPiplConsentStatus();
		ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127(__this, NULL);
		// ReadOptOutConsentStatus();
		ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80(__this, NULL);
		// m_CoreStatsHelper.SetCoreStatsConsent(false);
		RuntimeObject* L_4 = __this->___m_CoreStatsHelper_1;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_4, (bool)0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker::CheckGeoIP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ConsentTracker_CheckGeoIP_mB0D695199188D96285FD8A949913F0A0F2CA7064 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* V_0 = NULL;
	{
		U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* L_0 = (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913*)il2cpp_codegen_object_new(U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckGeoIPU3Ed__19__ctor_mA22B5E62E9510CDE66E33922EB517238E03B71F9(L_0, NULL);
		V_0 = L_0;
		U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0(AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m666764D61DB7ABC8007283DF4BF8C0A50C2E7CB2_RuntimeMethod_var);
		U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29(L_8, AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		return L_9;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsGeoIpChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return response != null;
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		V_0 = (bool)((!(((RuntimeObject*)(GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m73AE70CC46CC8C736C47BE464B484132C9F1581A (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// return IsConsentGiven(response.identifier);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		bool L_2;
		L_2 = ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentGiven(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentGiven_m45BA5C4604FBACCB87933A7D812EEA65633F8338 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (identifier == Consent.Pipl)
		String_t* L_0 = ___0_identifier;
		String_t* L_1;
		L_1 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return optInPiplConsentStatus == ConsentStatus.ConsentGiven;
		int32_t L_4;
		L_4 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		goto IL_0029;
	}

IL_001d:
	{
		// return optOutConsentStatus == ConsentStatus.Unknown;
		int32_t L_5;
		L_5 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0029:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsConsentDenied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsConsentDenied_mCF7AC1A9BB87846AA257EAC0D9D359B10F302662 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// if (response.identifier == Consent.Pipl)
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		String_t* L_2;
		L_2 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// return optInPiplConsentStatus == ConsentStatus.ConsentDenied
		//     || optInPiplConsentStatus == ConsentStatus.OptedOut;
		int32_t L_5;
		L_5 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6;
		L_6 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B4_0 = 1;
	}

IL_0037:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0046;
	}

IL_003a:
	{
		// return optOutConsentStatus == ConsentStatus.OptedOut;
		int32_t L_7;
		L_7 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		goto IL_0046;
	}

IL_0046:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.ConsentTracker::IsOptingOutInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentTracker_IsOptingOutInProgress_m6969440734089DAFF92A792F7CD7B90DB929AB4B (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// ValidateConsentWasChecked();
		ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6(__this, NULL);
		// return (response.identifier == Consent.Pipl)
		//     ? optInPiplConsentStatus == ConsentStatus.Forgetting
		//     : optOutConsentStatus == ConsentStatus.Forgetting;
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_0 = __this->___response_4;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		String_t* L_2;
		L_2 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4;
		L_4 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		goto IL_0033;
	}

IL_002a:
	{
		int32_t L_5;
		L_5 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
	}

IL_0033:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::BeginOptOutProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_BeginOptOutProcess_mB0457E034ED8BDE55B6899B824710A22FB3C5FDB (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (optInPiplConsentStatus == ConsentStatus.ConsentGiven)
		int32_t L_0;
		L_0 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// optInPiplConsentStatus = ConsentStatus.Forgetting;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 1, NULL);
		// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
		int32_t L_2;
		L_2 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_002f:
	{
		// if (optOutConsentStatus == ConsentStatus.Unknown)
		int32_t L_3;
		L_3 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		// optOutConsentStatus = ConsentStatus.Forgetting;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 1, NULL);
		// PlayerPrefs.SetInt(optOutConsentStatusPrefKey, (int)optOutConsentStatus);
		int32_t L_5;
		L_5 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, L_5, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::FinishOptOutProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_FinishOptOutProcess_mAD86F4E87DB74A31387B0D964A6F9F51BEA23165 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (optInPiplConsentStatus == ConsentStatus.Forgetting)
		int32_t L_0;
		L_0 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// optInPiplConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, 2, NULL);
		// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
		int32_t L_2;
		L_2 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_002f:
	{
		// if (optOutConsentStatus == ConsentStatus.Forgetting)
		int32_t L_3;
		L_3 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		// optOutConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 2, NULL);
		// PlayerPrefs.SetInt(optOutConsentStatusPrefKey, (int)optOutConsentStatus);
		int32_t L_5;
		L_5 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, L_5, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::SetDenyConsentToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_SetDenyConsentToAll_m6CC30B97116F72CC394F3F35044043EFD550F571 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B2_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B3_1 = NULL;
	{
		// optOutConsentStatus = ConsentStatus.OptedOut;
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, 2, NULL);
		// optInPiplConsentStatus = optInPiplConsentStatus == ConsentStatus.Forgetting
		//     ? ConsentStatus.OptedOut
		//     : ConsentStatus.ConsentDenied;
		int32_t L_0;
		L_0 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 6;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(G_B3_1, G_B3_0, NULL);
		// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
		int32_t L_1;
		L_1 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_1, NULL);
		// PlayerPrefs.SetInt(optOutConsentStatusPrefKey, (int)optOutConsentStatus);
		int32_t L_2;
		L_2 = ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptInPiplConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptInPiplConsentStatus_m1BBCAFF95811454222E9A78CCBC1DB4331CF5127 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.HasKey(optInPiplConsentStatusPrefKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// optInPiplConsentStatus = (ConsentStatus)PlayerPrefs.GetInt(optInPiplConsentStatusPrefKey);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, NULL);
		ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(__this, L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ReadOptOutConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ReadOptOutConsentStatus_m231368E1ECC2A7BBB5ADD724CB7BCB6BFA0D6E80 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.HasKey(optOutConsentStatusPrefKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// optOutConsentStatus = (ConsentStatus)PlayerPrefs.GetInt(optOutConsentStatusPrefKey);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral63727CA6C805007DCD3A3067D90A70432562D6EF, NULL);
		ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline(__this, L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.ConsentTracker::GetGeoIPResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* ConsentTracker_GetGeoIPResponse_m67ADCB7DD19286D83C63C5F1129F19E1F9F6F656 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* V_0 = NULL;
	{
		U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* L_0 = (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292*)il2cpp_codegen_object_new(U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetGeoIPResponseU3Ed__33__ctor_mAAFF4D13F02EE37D4F918A4AF0070B18250B1009(L_0, NULL);
		V_0 = L_0;
		U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0(AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m73E08A89008E64DC46E1ACEC665EC6272CDD4622_RuntimeMethod_var);
		U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29(L_8, AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker::ValidateConsentWasChecked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6 (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!IsGeoIpChecked())
		bool L_0;
		L_0 = ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ConsentCheckException(ConsentCheckExceptionReason.ConsentFlowNotKnown,
		//     CommonErrorCodes.Unknown,
		//     "The required consent flow cannot be determined. Make sure GeoIP was successfully called.",
		//     null);
		ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_2 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_2, 4, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1478BC45A3EF425780ADB183A6419907115E223E)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentTracker_ValidateConsentWasChecked_m92986F8E992406A10E6712086DE129EB009935E6_RuntimeMethod_var)));
	}

IL_001d:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19__ctor_mA22B5E62E9510CDE66E33922EB517238E03B71F9 (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* V_4 = NULL;
	bool V_5 = false;
	ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B18_0 = 0;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B21_0 = NULL;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* G_B22_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_007b_2;
			}

IL_0017_2:
			{
				// if (IsGeoIpChecked())
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_3 = __this->___U3CU3E4__this_2;
				NullCheck(L_3);
				bool L_4;
				L_4 = ConsentTracker_IsGeoIpChecked_m59099E930C861F18CAF7D68E0546C5D05663E50E(L_3, NULL);
				V_2 = L_4;
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0039_2;
				}
			}
			{
				// return response;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_6 = __this->___U3CU3E4__this_2;
				NullCheck(L_6);
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_7 = L_6->___response_4;
				V_1 = L_7;
				goto IL_0190;
			}

IL_0039_2:
			{
				// var newResponse = await GetGeoIPResponse();
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_8 = __this->___U3CU3E4__this_2;
				NullCheck(L_8);
				Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_9;
				L_9 = ConsentTracker_GetGeoIPResponse_m67ADCB7DD19286D83C63C5F1129F19E1F9F6F656(L_8, NULL);
				NullCheck(L_9);
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_10;
				L_10 = Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7(L_9, Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
				V_3 = L_10;
				bool L_11;
				L_11 = TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179((&V_3), TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0097_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_13 = V_3;
				__this->___U3CU3Eu__1_6 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				V_4 = __this;
				AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_14 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722(L_14, (&V_3), (&V_4), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913_m6F67D29FE3BD690109387456790DA526E3F3D722_RuntimeMethod_var);
				goto IL_01a5;
			}

IL_007b_2:
			{
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_15 = __this->___U3CU3Eu__1_6;
				V_3 = L_15;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* L_16 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
			}

IL_0097_2:
			{
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_18;
				L_18 = TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9((&V_3), TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
				__this->___U3CU3Es__2_4 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)L_18);
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_19 = __this->___U3CU3Es__2_4;
				__this->___U3CnewResponseU3E5__1_3 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewResponseU3E5__1_3), (void*)L_19);
				__this->___U3CU3Es__2_4 = (GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)(GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150*)NULL);
				// response = newResponse;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_20 = __this->___U3CU3E4__this_2;
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_21 = __this->___U3CnewResponseU3E5__1_3;
				NullCheck(L_20);
				L_20->___response_4 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&L_20->___response_4), (void*)L_21);
				// if (optInPiplConsentStatus == ConsentStatus.Unknown || optInPiplConsentStatus == ConsentStatus.NotRequired
				//     || optInPiplConsentStatus == ConsentStatus.RequiredButUnchecked)
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_22 = __this->___U3CU3E4__this_2;
				NullCheck(L_22);
				int32_t L_23;
				L_23 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_22, NULL);
				if (!L_23)
				{
					goto IL_00f3_2;
				}
			}
			{
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_24 = __this->___U3CU3E4__this_2;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_24, NULL);
				if ((((int32_t)L_25) == ((int32_t)3)))
				{
					goto IL_00f3_2;
				}
			}
			{
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_26 = __this->___U3CU3E4__this_2;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_26, NULL);
				G_B18_0 = ((((int32_t)L_27) == ((int32_t)4))? 1 : 0);
				goto IL_00f4_2;
			}

IL_00f3_2:
			{
				G_B18_0 = 1;
			}

IL_00f4_2:
			{
				V_5 = (bool)G_B18_0;
				bool L_28 = V_5;
				if (!L_28)
				{
					goto IL_013f_2;
				}
			}
			{
				// optInPiplConsentStatus = newResponse.identifier == Consent.Pipl
				//     ? ConsentStatus.RequiredButUnchecked
				//     : ConsentStatus.NotRequired;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_29 = __this->___U3CU3E4__this_2;
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_30 = __this->___U3CnewResponseU3E5__1_3;
				NullCheck(L_30);
				String_t* L_31 = L_30->___identifier_0;
				String_t* L_32;
				L_32 = Consent_get_Pipl_m9EA6E585847439E839D5AE3063A5DCF6F6376605(NULL);
				bool L_33;
				L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, L_32, NULL);
				G_B20_0 = L_29;
				if (L_33)
				{
					G_B21_0 = L_29;
					goto IL_011b_2;
				}
			}
			{
				G_B22_0 = 3;
				G_B22_1 = G_B20_0;
				goto IL_011c_2;
			}

IL_011b_2:
			{
				G_B22_0 = 4;
				G_B22_1 = G_B21_0;
			}

IL_011c_2:
			{
				NullCheck(G_B22_1);
				ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline(G_B22_1, G_B22_0, NULL);
				// PlayerPrefs.SetInt(optInPiplConsentStatusPrefKey, (int)optInPiplConsentStatus);
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_34 = __this->___U3CU3E4__this_2;
				NullCheck(L_34);
				int32_t L_35;
				L_35 = ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline(L_34, NULL);
				PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral843422B942D75E64BB0A2281AB972CE4A7EB3924, L_35, NULL);
				// PlayerPrefs.Save();
				PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
			}

IL_013f_2:
			{
				// m_CoreStatsHelper.SetCoreStatsConsent(IsConsentGiven());
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_36 = __this->___U3CU3E4__this_2;
				NullCheck(L_36);
				RuntimeObject* L_37 = L_36->___m_CoreStatsHelper_1;
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_38 = __this->___U3CU3E4__this_2;
				NullCheck(L_38);
				bool L_39;
				L_39 = ConsentTracker_IsConsentGiven_m73AE70CC46CC8C736C47BE464B484132C9F1581A(L_38, NULL);
				NullCheck(L_37);
				InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Unity.Services.Analytics.ICoreStatsHelper::SetCoreStatsConsent(System.Boolean) */, ICoreStatsHelper_t436ACDCFB0D414BD45F5EAC4C05281101F24E6FD_il2cpp_TypeInfo_var, L_37, L_39);
				// return newResponse;
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_40 = __this->___U3CnewResponseU3E5__1_3;
				V_1 = L_40;
				goto IL_0190;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0164_1;
			}
			throw e;
		}

CATCH_0164_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// catch (ConsentCheckException e)
			V_6 = ((ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)IL2CPP_GET_ACTIVE_EXCEPTION(ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*));
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_41 = V_6;
			__this->___U3CeU3E5__3_5 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_5), (void*)L_41);
			// throw e;
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_42 = __this->___U3CeU3E5__3_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckGeoIPU3Ed__19_MoveNext_mE50FA81A1A7EC3B8AD5BACF2ED7D89137B90394B_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0176;
		}
		throw e;
	}

CATCH_0176:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_43 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_44 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A(L_43, L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01a5;
	}// end catch (depth: 1)

IL_0190:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_45 = (&__this->___U3CU3Et__builder_1);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_46 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F(L_45, L_46, AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
	}

IL_01a5:
	{
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<CheckGeoIP>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckGeoIPU3Ed__19_SetStateMachine_mD47ACB45E356285C8BB5F9147A5DEDC5B1163650 (U3CCheckGeoIPU3Ed__19_tF4D189FF0813E0397D3684814869EC68573B2913* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33__ctor_mAAFF4D13F02EE37D4F918A4AF0070B18250B1009 (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_1 = NULL;
	TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* V_3 = NULL;
	ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_005b_2;
			}

IL_0017_2:
			{
				// return await m_GeoAPI.MakeRequest();
				ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* L_3 = __this->___U3CU3E4__this_2;
				NullCheck(L_3);
				RuntimeObject* L_4 = L_3->___m_GeoAPI_0;
				NullCheck(L_4);
				Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_5;
				L_5 = InterfaceFuncInvoker0< Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.IGeoAPI::MakeRequest() */, IGeoAPI_tC74F141E9C8F842B21B297651037711D955CA5CD_il2cpp_TypeInfo_var, L_4);
				NullCheck(L_5);
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_6;
				L_6 = Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7(L_5, Task_1_GetAwaiter_mCB01C4C331E45364EDA04B3FDB90705CA93004E7_RuntimeMethod_var);
				V_2 = L_6;
				bool L_7;
				L_7 = TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179((&V_2), TaskAwaiter_1_get_IsCompleted_mD7F9B812B03F8973495724BC92A2F4AAC37E0179_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0077_2;
				}
			}
			{
				int32_t L_8 = 0;
				V_0 = L_8;
				__this->___U3CU3E1__state_0 = L_8;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_9 = V_2;
				__this->___U3CU3Eu__1_5 = L_9;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				V_3 = __this;
				AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_10 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE(L_10, (&V_2), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886_TisU3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292_m9C98D724DAFB7DF57764019C4A1087E586617EDE_RuntimeMethod_var);
				goto IL_00ce;
			}

IL_005b_2:
			{
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886 L_11 = __this->___U3CU3Eu__1_5;
				V_2 = L_11;
				TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886* L_12 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t67679171BEFE85C38666397015D627C6E3E7D886));
				int32_t L_13 = (-1);
				V_0 = L_13;
				__this->___U3CU3E1__state_0 = L_13;
			}

IL_0077_2:
			{
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_14;
				L_14 = TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9((&V_2), TaskAwaiter_1_GetResult_m5F5B61E5E8007E22BF56CC4D63AB61FE9584FDD9_RuntimeMethod_var);
				__this->___U3CU3Es__1_3 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)L_14);
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_15 = __this->___U3CU3Es__1_3;
				V_1 = L_15;
				goto IL_00b9;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008d_1;
			}
			throw e;
		}

CATCH_008d_1:
		{// begin catch(Unity.Services.Analytics.ConsentCheckException)
			// catch (ConsentCheckException e)
			V_4 = ((ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)IL2CPP_GET_ACTIVE_EXCEPTION(ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*));
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_16 = V_4;
			__this->___U3CeU3E5__2_4 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_4), (void*)L_16);
			// throw e;
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_17 = __this->___U3CeU3E5__2_4;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetGeoIPResponseU3Ed__33_MoveNext_m8DC3796520E412B06E1C572F3D665F90CFF8D71D_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009f;
		}
		throw e;
	}

CATCH_009f:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ce;
	}// end catch (depth: 1)

IL_00b9:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_20 = (&__this->___U3CU3Et__builder_1);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
	}

IL_00ce:
	{
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.ConsentTracker/<GetGeoIPResponse>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetGeoIPResponseU3Ed__33_SetStateMachine_m74A1484D7DB6DD67B7E7F0C16106CB2EC413F225 (U3CGetGeoIPResponseU3Ed__33_tEB679EFC74F417928C47D29F932F7D9D7A8C3292* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task`1<Unity.Services.Analytics.Internal.GeoIPResponse> Unity.Services.Analytics.Internal.GeoAPI::MakeRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* GeoAPI_MakeRequest_mE3309B54EAD75F8BEAFD609006AC9DBE7306EA07 (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* V_0 = NULL;
	{
		U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* L_0 = (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084*)il2cpp_codegen_object_new(U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMakeRequestU3Ed__1__ctor_m7CC9A4D0FAC380584A2749CC5E75FDB0B650FCF8(L_0, NULL);
		V_0 = L_0;
		U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0(AsyncTaskMethodBuilder_1_Create_m4B6AFF0D63DE8B335551AC63B1E6A663CE9544A0_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2278461A5470C358F8E18E9A5B3B61AB9076AA02_RuntimeMethod_var);
		U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_1_t3F0E026C38791877CBE0DEC23CD10E9103FBA9B2* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29(L_8, AsyncTaskMethodBuilder_1_get_Task_m650E5C11347CA5B2E79BFCE9C8BDE1865F4CBA29_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoAPI__ctor_m0C73E78C464E961E626A7D252140E6E2A60C148D (GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly string m_PrivacyEndpoint = "https://pls.prd.mz.internal.unity3d.com/api/v1/user-lookup";
		__this->___m_PrivacyEndpoint_0 = _stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PrivacyEndpoint_0), (void*)_stringLiteralA07A3EB9D8DB99C62110B79812663E60297F7619);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestTaskWrapper__ctor_m737411964301AB0483A39FB2B0D46B6CCC1E512E (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_request, const RuntimeMethod* method) 
{
	{
		// public WebRequestTaskWrapper(UnityWebRequest request)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_AsyncOp = request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_request;
		NullCheck(L_0);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1;
		L_1 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_0, NULL);
		__this->___m_AsyncOp_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncOp_0), (void*)L_1);
		// }
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF WebRequestTaskWrapper_GetAwaiter_mE54F6FA2E11D3ECAA8BB6762857F32C1F40A5BE7 (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* V_0 = NULL;
	TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_0 = (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m62BF5B6343547C6A9291F3C4EF5C76012180A969(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var tcs = new TaskCompletionSource<UnityWebRequestAsyncOperation>();
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_2 = V_0;
		TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* L_3 = (TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C*)il2cpp_codegen_object_new(TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4(L_3, TaskCompletionSource_1__ctor_m28BBDEEB420B6B31DA78AC27F9ED2E899EF367B4_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___tcs_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___tcs_1), (void*)L_3);
		// m_AsyncOp.completed += obj =>
		// {
		//     var result = m_AsyncOp;
		//     tcs.SetResult(result);
		// };
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_4 = __this->___m_AsyncOp_0;
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_5 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_6 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_4, L_6, NULL);
		// return tcs.Task.GetAwaiter();
		U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* L_8 = L_7->___tcs_1;
		NullCheck(L_8);
		Task_1_t892C4382C6E738570B24B25E2972B303E8EB849F* L_9;
		L_9 = TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_inline(L_8, TaskCompletionSource_1_get_Task_m84FB049ED4EBE0B7DCF8660691DDA2B497E6F0E6_RuntimeMethod_var);
		NullCheck(L_9);
		TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_10;
		L_10 = Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC(L_9, Task_1_GetAwaiter_m1191FB560C8E8B2B31CE4C013EA83E8BA8FE17BC_RuntimeMethod_var);
		V_1 = L_10;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_11 = V_1;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m62BF5B6343547C6A9291F3C4EF5C76012180A969 (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/WebRequestTaskWrapper/<>c__DisplayClass2_0::<GetAwaiter>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CGetAwaiterU3Eb__0_m91481F295ECD1FC5445A4E7870D1013CABED3463 (U3CU3Ec__DisplayClass2_0_tA1057DDCB34766738AD61FC83B16C5939DF39952* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_0 = NULL;
	{
		// var result = m_AsyncOp;
		WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = L_0->___m_AsyncOp_0;
		V_0 = L_1;
		// tcs.SetResult(result);
		TaskCompletionSource_1_t187BBB0EA0E2FFAD5D7E09DB36D1DF3DE2B2F68C* L_2 = __this->___tcs_1;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = V_0;
		NullCheck(L_2);
		TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4(L_2, L_3, TaskCompletionSource_1_SetResult_m462302E1261DE351DB0AA663769C88ED0A78C5C4_RuntimeMethod_var);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1__ctor_m7CC9A4D0FAC380584A2749CC5E75FDB0B650FCF8 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* V_1 = NULL;
	TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0080_1;
		}

IL_000e_1:
		{
			// var request = new UnityWebRequest(m_PrivacyEndpoint, UnityWebRequest.kHttpVerbGET)
			// {
			//     timeout = 10,
			//     downloadHandler = new DownloadHandlerBuffer()
			// };
			GeoAPI_tDEC43B93D320DC5B81A4BD9F45491DD2E5D30287* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			String_t* L_3 = L_2->___m_PrivacyEndpoint_0;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_4, L_3, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = L_4;
			NullCheck(L_5);
			UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_5, ((int32_t)10), NULL);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = L_5;
			DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_7 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_7, NULL);
			NullCheck(L_6);
			UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_6, L_7, NULL);
			__this->___U3CrequestU3E5__1_3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_3), (void*)L_6);
			// var async = await new WebRequestTaskWrapper(request);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CrequestU3E5__1_3;
			WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD* L_9 = (WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD*)il2cpp_codegen_object_new(WebRequestTaskWrapper_tF4501F92C57A6AA309830A1BE02214B16ADA71FD_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			WebRequestTaskWrapper__ctor_m737411964301AB0483A39FB2B0D46B6CCC1E512E(L_9, L_8, NULL);
			NullCheck(L_9);
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_10;
			L_10 = WebRequestTaskWrapper_GetAwaiter_mE54F6FA2E11D3ECAA8BB6762857F32C1F40A5BE7(L_9, NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070((&V_2), TaskAwaiter_1_get_IsCompleted_mD3A1F9B5FE69A689A39D53FD3A093B7F8F05A070_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_13 = V_2;
			__this->___U3CU3Eu__1_7 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738(L_14, (&V_2), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF_TisU3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084_m2C53456EB05AE3BD205398F10BFAEC3A03F99738_RuntimeMethod_var);
			goto IL_019e;
		}

IL_0080_1:
		{
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF L_15 = __this->___U3CU3Eu__1_7;
			V_2 = L_15;
			TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF* L_16 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t2EFD3A7518CBC33EEAA02EBD1D5C4147D6FD47BF));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_009c_1:
		{
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_18;
			L_18 = TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB((&V_2), TaskAwaiter_1_GetResult_mE0F44BFAB46D5BBA8B6341757BC30AEC7C44F5BB_RuntimeMethod_var);
			__this->___U3CU3Es__3_5 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)L_18);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_19 = __this->___U3CU3Es__3_5;
			__this->___U3CasyncU3E5__2_4 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncU3E5__2_4), (void*)L_19);
			__this->___U3CU3Es__3_5 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
			// if (async.webRequest.result == UnityWebRequest.Result.ProtocolError ||
			//     async.webRequest.result == UnityWebRequest.Result.ConnectionError)
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_20 = __this->___U3CasyncU3E5__2_4;
			NullCheck(L_20);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21;
			L_21 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_20, NULL);
			NullCheck(L_21);
			int32_t L_22;
			L_22 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_21, NULL);
			if ((((int32_t)L_22) == ((int32_t)3)))
			{
				goto IL_00e4_1;
			}
		}
		{
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_23 = __this->___U3CasyncU3E5__2_4;
			NullCheck(L_23);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24;
			L_24 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_23, NULL);
			NullCheck(L_24);
			int32_t L_25;
			L_25 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_24, NULL);
			G_B10_0 = ((((int32_t)L_25) == ((int32_t)2))? 1 : 0);
			goto IL_00e5_1;
		}

IL_00e4_1:
		{
			G_B10_0 = 1;
		}

IL_00e5_1:
		{
			V_4 = (bool)G_B10_0;
			bool L_26 = V_4;
			if (!L_26)
			{
				goto IL_00fa_1;
			}
		}
		{
			// throw new ConsentCheckException(ConsentCheckExceptionReason.NoInternetConnection,
			//     CommonErrorCodes.TransportError,
			//     "The GeoIP request has failed - make sure you're connected to an internet connection and try again.",
			//     null);
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_27 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
			NullCheck(L_27);
			ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_27, 2, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7C8982236B58D3998BB9FB59D131EF360EFB950)), (Exception_t*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var)));
		}

IL_00fa_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				// var response = JsonConvert.DeserializeObject<GeoIPResponse>(async.webRequest.downloadHandler.text);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_28 = __this->___U3CasyncU3E5__2_4;
				NullCheck(L_28);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29;
				L_29 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_28, NULL);
				NullCheck(L_29);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_30;
				L_30 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_29, NULL);
				NullCheck(L_30);
				String_t* L_31;
				L_31 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_30, NULL);
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_32;
				L_32 = JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20(L_31, JsonConvert_DeserializeObject_TisGeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150_mE116D4B93529E5AE7C995FCF33ACB72C41D37F20_RuntimeMethod_var);
				__this->___U3CresponseU3E5__4_6 = L_32;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresponseU3E5__4_6), (void*)L_32);
				// if (response == null)
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_33 = __this->___U3CresponseU3E5__4_6;
				V_5 = (bool)((((RuntimeObject*)(GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150*)L_33) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_34 = V_5;
				if (!L_34)
				{
					goto IL_013a_2;
				}
			}
			{
				// throw new ConsentCheckException(ConsentCheckExceptionReason.Unknown, CommonErrorCodes.Unknown,
				//     "The error occurred while performing the privacy GeoIP request. Please try again later.",
				//     null);
				ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_35 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
				NullCheck(L_35);
				ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_35, 0, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58A824E6D56BC39968AB94FF04C56EB1E41A4A72)), (Exception_t*)NULL, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var)));
			}

IL_013a_2:
			{
				// return response;
				GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_36 = __this->___U3CresponseU3E5__4_6;
				V_1 = L_36;
				goto IL_017b;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0143_1;
			}
			throw e;
		}

CATCH_0143_1:
		{// begin catch(System.Exception)
			// catch (Exception)
			// throw new ConsentCheckException(ConsentCheckExceptionReason.DeserializationIssue, CommonErrorCodes.Unknown,
			//     "The error occurred while deserializing the privacy GeoIP reseponse. Please try again later.",
			//     null);
			ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* L_37 = (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D_il2cpp_TypeInfo_var)));
			NullCheck(L_37);
			ConsentCheckException__ctor_m0F6DC7108E11524A5BBBE85F07DD082873FE95B3(L_37, 1, 0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF10B3C0352D2A01D50976F0A480FC409754BACE8)), (Exception_t*)NULL, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeRequestU3Ed__1_MoveNext_m84E5C849BBA78D226EF9A48216FFC4CD3D2042F1_RuntimeMethod_var)));
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0153;
		}
		throw e;
	}

CATCH_0153:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__1_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CasyncU3E5__2_4 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncU3E5__2_4), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_38 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_39 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A(L_38, L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m755EC2E736574A631BEC6E2F204F9AF72A5CFE2A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019e;
	}// end catch (depth: 1)

IL_017b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__1_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CasyncU3E5__2_4 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncU3E5__2_4), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
		AsyncTaskMethodBuilder_1_tCC71288BC6FD1578916420F041FD9DD930D2EEE5* L_40 = (&__this->___U3CU3Et__builder_1);
		GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* L_41 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F(L_40, L_41, AsyncTaskMethodBuilder_1_SetResult_m8964201B7044B7762317C83D8CA064A284DAD38F_RuntimeMethod_var);
	}

IL_019e:
	{
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.GeoAPI/<MakeRequest>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__1_SetStateMachine_mFB6A5DBCD2E2998B9B9CE5F86800FEDD596F4D08 (U3CMakeRequestU3Ed__1_t0EF0B916953106E30ADFEE30817391CC38DF6084* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.GeoIPResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeoIPResponse__ctor_m859CD30853C62FA484459EB2A61DD81E99F95BA6 (GeoIPResponse_tADA05745323DD2374411BCB8CEC9EC086B4FE150* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Analytics.Internal.Dispatcher::get_FlushInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = __this->___U3CFlushInProgressU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_FlushInProgress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlushInProgressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.Dispatcher::get_CollectUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// public string CollectUrl { get; set; }
		String_t* L_0 = __this->___U3CCollectUrlU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::set_CollectUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_set_CollectUrl_m97595347EED574A294D5A642B952500CE4302829 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string CollectUrl { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCollectUrlU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCollectUrlU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// Unity.Services.Analytics.Internal.IConsentTracker Unity.Services.Analytics.Internal.Dispatcher::get_ConsentTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// IConsentTracker ConsentTracker { get; }
		RuntimeObject* L_0 = __this->___U3CConsentTrackerU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::.ctor(Unity.Services.Analytics.Internal.IBuffer,Unity.Services.Analytics.Internal.IWebRequestHelper,Unity.Services.Analytics.Internal.IConsentTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m4F2D8F2A3D60E40BF267F737FFE5B4225317F3B0 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, RuntimeObject* ___0_buffer, RuntimeObject* ___1_webRequestHelper, RuntimeObject* ___2_consentTracker, const RuntimeMethod* method) 
{
	{
		// public Dispatcher(IBuffer buffer, IWebRequestHelper webRequestHelper, IConsentTracker consentTracker = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_DataBuffer = buffer;
		RuntimeObject* L_0 = ___0_buffer;
		__this->___m_DataBuffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataBuffer_0), (void*)L_0);
		// m_WebRequestHelper = webRequestHelper;
		RuntimeObject* L_1 = ___1_webRequestHelper;
		__this->___m_WebRequestHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WebRequestHelper_1), (void*)L_1);
		// ConsentTracker = consentTracker;
		RuntimeObject* L_2 = ___2_consentTracker;
		__this->___U3CConsentTrackerU3Ek__BackingField_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConsentTrackerU3Ek__BackingField_6), (void*)L_2);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Analytics.Internal.Dispatcher::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Dispatcher_Flush_m868DD1F65B76D8507C62D1264C5D8B588BDF5388 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m72A0CDA112A40B347BD9EDA60DE9C7F83A44E811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* V_0 = NULL;
	{
		U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* L_0 = (U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467*)il2cpp_codegen_object_new(U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFlushU3Ed__16__ctor_m5C5117A715A58C17F62F61055AC31DB1D3E60823(L_0, NULL);
		V_0 = L_0;
		U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m72A0CDA112A40B347BD9EDA60DE9C7F83A44E811(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m72A0CDA112A40B347BD9EDA60DE9C7F83A44E811_RuntimeMethod_var);
		U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
	}
}
// System.Threading.Tasks.Task Unity.Services.Analytics.Internal.Dispatcher::FlushBufferToService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Dispatcher_FlushBufferToService_m7E29A3BE472599B605FDB1EFBF093D94081C8709 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_m3D796C8ABE3BB0B875B7C126A9B70DBDD1ADD171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* V_0 = NULL;
	{
		U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* L_0 = (U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60*)il2cpp_codegen_object_new(U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFlushBufferToServiceU3Ed__17__ctor_mF2E557617B21F4BA1DCAE0AD8B740F1BB304D8A6(L_0, NULL);
		V_0 = L_0;
		U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_m3D796C8ABE3BB0B875B7C126A9B70DBDD1ADD171(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_m3D796C8ABE3BB0B875B7C126A9B70DBDD1ADD171_RuntimeMethod_var);
		U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher::UploadCompleted(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459 (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, int64_t ___0_responseCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (!m_FlushRequest.isNetworkError &&
		//     (responseCode == 204 || responseCode == 400))
		RuntimeObject* L_0 = __this->___m_FlushRequest_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.Services.Analytics.Internal.IWebRequest::get_isNetworkError() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		int64_t L_2 = ___0_responseCode;
		if ((((int64_t)L_2) == ((int64_t)((int64_t)((int32_t)204)))))
		{
			goto IL_0022;
		}
	}
	{
		int64_t L_3 = ___0_responseCode;
		G_B4_0 = ((((int64_t)L_3) == ((int64_t)((int64_t)((int32_t)400))))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
	}

IL_0023:
	{
		G_B6_0 = G_B4_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B6_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B6_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// m_DataBuffer.ClearDiskCache();
		RuntimeObject* L_5 = __this->___m_DataBuffer_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(14 /* System.Void Unity.Services.Analytics.Internal.IBuffer::ClearDiskCache() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_5);
		goto IL_005a;
	}

IL_003a:
	{
		// m_DataBuffer.InsertTokens(m_FlushPayload);
		RuntimeObject* L_6 = __this->___m_DataBuffer_0;
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_7 = __this->___m_FlushPayload_4;
		NullCheck(L_6);
		InterfaceActionInvoker1< List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* >::Invoke(6 /* System.Void Unity.Services.Analytics.Internal.IBuffer::InsertTokens(System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_6, L_7);
		// m_DataBuffer.FlushToDisk();
		RuntimeObject* L_8 = __this->___m_DataBuffer_0;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Unity.Services.Analytics.Internal.IBuffer::FlushToDisk() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8);
	}

IL_005a:
	{
		// FlushInProgress = false;
		Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(__this, (bool)0, NULL);
		// m_FlushPayload = null;
		__this->___m_FlushPayload_4 = (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FlushPayload_4), (void*)(List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)NULL);
		// m_FlushRequest.Dispose();
		RuntimeObject* L_9 = __this->___m_FlushRequest_3;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::Dispose() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_9);
		// m_FlushRequest = null;
		__this->___m_FlushRequest_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FlushRequest_3), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushU3Ed__16__ctor_m5C5117A715A58C17F62F61055AC31DB1D3E60823 (U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushU3Ed__16_MoveNext_mAD094EECFCE4E58B123C52EAFD82724A3926B424 (U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m9FEF28B8E10055AC90B4E69EA0B3C175B31D95D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00bb_1;
		}

IL_0011_1:
		{
			// if (FlushInProgress)
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline(L_2, NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0032_1;
			}
		}
		{
			// Debug.LogWarning("Analytics Dispatcher is already flushing.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral689C6A4E0E10858B33315ABF7B58B47BF427CAB7, NULL);
			// return;
			goto IL_00fb;
		}

IL_0032_1:
		{
			// if (!ConsentTracker.IsGeoIpChecked() || !ConsentTracker.IsConsentGiven())
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A_inline(L_5, NULL);
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_6);
			if (!L_7)
			{
				goto IL_0059_1;
			}
		}
		{
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A_inline(L_8, NULL);
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_9);
			G_B9_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
			goto IL_005a_1;
		}

IL_0059_1:
		{
			G_B9_0 = 1;
		}

IL_005a_1:
		{
			V_2 = (bool)G_B9_0;
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_006f_1;
			}
		}
		{
			// Debug.LogWarning("Required consent wasn't checked and given when trying to dispatch events, the events cannot be sent.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral8905FD38EEA933AC528FF73A57DAC6B13D1127E2, NULL);
			// return;
			goto IL_00fb;
		}

IL_006f_1:
		{
			// FlushInProgress = true;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_12 = __this->___U3CU3E4__this_2;
			NullCheck(L_12);
			Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(L_12, (bool)1, NULL);
			// await FlushBufferToService();
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_13 = __this->___U3CU3E4__this_2;
			NullCheck(L_13);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
			L_14 = Dispatcher_FlushBufferToService_m7E29A3BE472599B605FDB1EFBF093D94081C8709(L_13, NULL);
			NullCheck(L_14);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15;
			L_15 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_14, NULL);
			V_3 = L_15;
			bool L_16;
			L_16 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_16)
			{
				goto IL_00d7_1;
			}
		}
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = V_3;
			__this->___U3CU3Eu__1_3 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m9FEF28B8E10055AC90B4E69EA0B3C175B31D95D2(L_19, (&V_3), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467_m9FEF28B8E10055AC90B4E69EA0B3C175B31D95D2_RuntimeMethod_var);
			goto IL_010f;
		}

IL_00bb_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_20 = __this->___U3CU3Eu__1_3;
			V_3 = L_20;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_21 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_00d7_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			goto IL_00fb;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e1;
		}
		throw e;
	}

CATCH_00e1:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_23 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_24 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_23, L_24, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010f;
	}// end catch (depth: 1)

IL_00fb:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_25, NULL);
	}

IL_010f:
	{
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<Flush>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushU3Ed__16_SetStateMachine_m8558F3D91015B3D6C06AC707B408ECFD1613E6F8 (U3CFlushU3Ed__16_t2AC365AD7347ABAB6327017129327C66DF614467* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m8FC48EC9231A12782494788F1314D76ACE97FADF (U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Byte[] Unity.Services.Analytics.Internal.Dispatcher/<>c__DisplayClass17_0::<FlushBufferToService>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CU3Ec__DisplayClass17_0_U3CFlushBufferToServiceU3Eb__0_m293FFDEC48EBF19F3FE28566605755ECE952474A (U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var task = Task.Factory.StartNew(() => m_DataBuffer.Serialize(tokens));
		Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_DataBuffer_0;
		List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_2 = __this->___tokens_1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* >::Invoke(5 /* System.Byte[] Unity.Services.Analytics.Internal.IBuffer::Serialize(System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token>) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushBufferToServiceU3Ed__17__ctor_mF2E557617B21F4BA1DCAE0AD8B740F1BB304D8A6 (U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushBufferToServiceU3Ed__17_MoveNext_m4FC02F851AB8FEB64F0F3F9309DE4841A97C2FE6 (U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_mCDF40F45EACB355E722515CAC6F3C7F2BE15F5A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskFactory_StartNew_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m03CFC65993DF73C74BD640F4B8D2BF9C3DF83FE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CFlushBufferToServiceU3Eb__0_m293FFDEC48EBF19F3FE28566605755ECE952474A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00a6_1;
		}

IL_0011_1:
		{
			U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* L_2 = (U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass17_0__ctor_m8FC48EC9231A12782494788F1314D76ACE97FADF(L_2, NULL);
			__this->___U3CU3E8__1_3 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_2);
			U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* L_3 = __this->___U3CU3E8__1_3;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_4 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			L_3->___U3CU3E4__this_0 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_0), (void*)L_4);
			// var tokens = m_DataBuffer.CloneTokens();
			U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* L_5 = __this->___U3CU3E8__1_3;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_6 = __this->___U3CU3E4__this_2;
			NullCheck(L_6);
			RuntimeObject* L_7 = L_6->___m_DataBuffer_0;
			NullCheck(L_7);
			List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_8;
			L_8 = InterfaceFuncInvoker0< List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* >::Invoke(17 /* System.Collections.Generic.List`1<Unity.Services.Analytics.Internal.Buffer/Token> Unity.Services.Analytics.Internal.IBuffer::CloneTokens() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_7);
			NullCheck(L_5);
			L_5->___tokens_1 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___tokens_1), (void*)L_8);
			// var task = Task.Factory.StartNew(() => m_DataBuffer.Serialize(tokens));
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_9;
			L_9 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
			U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* L_10 = __this->___U3CU3E8__1_3;
			Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F* L_11 = (Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F*)il2cpp_codegen_object_new(Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			Func_1__ctor_mAA48933D49DC42717DD08485E7465CFCE054D498(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CFlushBufferToServiceU3Eb__0_m293FFDEC48EBF19F3FE28566605755ECE952474A_RuntimeMethod_var), NULL);
			NullCheck(L_9);
			Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_12;
			L_12 = TaskFactory_StartNew_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m03CFC65993DF73C74BD640F4B8D2BF9C3DF83FE5(L_9, L_11, TaskFactory_StartNew_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m03CFC65993DF73C74BD640F4B8D2BF9C3DF83FE5_RuntimeMethod_var);
			__this->___U3CtaskU3E5__2_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__2_4), (void*)L_12);
			// var postBytes = await task;
			Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_13 = __this->___U3CtaskU3E5__2_4;
			NullCheck(L_13);
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_14;
			L_14 = Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0(L_13, Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
			V_1 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2((&V_1), TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_00c2_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_17 = V_1;
			__this->___U3CU3Eu__1_9 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_mCDF40F45EACB355E722515CAC6F3C7F2BE15F5A9(L_18, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60_mCDF40F45EACB355E722515CAC6F3C7F2BE15F5A9_RuntimeMethod_var);
			goto IL_02ae;
		}

IL_00a6_1:
		{
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_19 = __this->___U3CU3Eu__1_9;
			V_1 = L_19;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* L_20 = (&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
		}

IL_00c2_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
			L_22 = TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0((&V_1), TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
			__this->___U3CU3Es__4_6 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)L_22);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___U3CU3Es__4_6;
			__this->___U3CpostBytesU3E5__3_5 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpostBytesU3E5__3_5), (void*)L_23);
			__this->___U3CU3Es__4_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			// if (postBytes == null || postBytes.Length == 0)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___U3CpostBytesU3E5__3_5;
			if (!L_24)
			{
				goto IL_00f6_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___U3CpostBytesU3E5__3_5;
			NullCheck(L_25);
			G_B10_0 = ((((int32_t)(((RuntimeArray*)L_25)->max_length)) == ((int32_t)0))? 1 : 0);
			goto IL_00f7_1;
		}

IL_00f6_1:
		{
			G_B10_0 = 1;
		}

IL_00f7_1:
		{
			V_3 = (bool)G_B10_0;
			bool L_26 = V_3;
			if (!L_26)
			{
				goto IL_011a_1;
			}
		}
		{
			// FlushInProgress = false;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_27 = __this->___U3CU3E4__this_2;
			NullCheck(L_27);
			Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline(L_27, (bool)0, NULL);
			// m_FlushPayload = null;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_28 = __this->___U3CU3E4__this_2;
			NullCheck(L_28);
			L_28->___m_FlushPayload_4 = (List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_28->___m_FlushPayload_4), (void*)(List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2*)NULL);
			// return;
			goto IL_0285;
		}

IL_011a_1:
		{
			// m_FlushRequest = m_WebRequestHelper.CreateWebRequest(CollectUrl, UnityWebRequest.kHttpVerbPOST, postBytes);
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_29 = __this->___U3CU3E4__this_2;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_30 = __this->___U3CU3E4__this_2;
			NullCheck(L_30);
			RuntimeObject* L_31 = L_30->___m_WebRequestHelper_1;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_32 = __this->___U3CU3E4__this_2;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B_inline(L_32, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___U3CpostBytesU3E5__3_5;
			NullCheck(L_31);
			RuntimeObject* L_35;
			L_35 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.IWebRequestHelper::CreateWebRequest(System.String,System.String,System.Byte[]) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_31, L_33, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, L_34);
			NullCheck(L_29);
			L_29->___m_FlushRequest_3 = L_35;
			Il2CppCodeGenWriteBarrier((void**)(&L_29->___m_FlushRequest_3), (void*)L_35);
			// if (ConsentTracker.IsGeoIpChecked() && ConsentTracker.IsConsentGiven())
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_36 = __this->___U3CU3E4__this_2;
			NullCheck(L_36);
			RuntimeObject* L_37;
			L_37 = Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A_inline(L_36, NULL);
			NullCheck(L_37);
			bool L_38;
			L_38 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsGeoIpChecked() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_37);
			if (!L_38)
			{
				goto IL_016f_1;
			}
		}
		{
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_39 = __this->___U3CU3E4__this_2;
			NullCheck(L_39);
			RuntimeObject* L_40;
			L_40 = Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A_inline(L_39, NULL);
			NullCheck(L_40);
			bool L_41;
			L_41 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.Services.Analytics.Internal.IConsentTracker::IsConsentGiven() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_40);
			G_B15_0 = ((int32_t)(L_41));
			goto IL_0170_1;
		}

IL_016f_1:
		{
			G_B15_0 = 0;
		}

IL_0170_1:
		{
			V_4 = (bool)G_B15_0;
			bool L_42 = V_4;
			if (!L_42)
			{
				goto IL_0211_1;
			}
		}
		{
			// foreach (var header in ConsentTracker.requiredHeaders)
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_43 = __this->___U3CU3E4__this_2;
			NullCheck(L_43);
			RuntimeObject* L_44;
			L_44 = Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A_inline(L_43, NULL);
			NullCheck(L_44);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45;
			L_45 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(1 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Analytics.Internal.IConsentTracker::get_requiredHeaders() */, IConsentTracker_t93AFBEAEA2AE9AC2A012EEBFA4344E527FD92550_il2cpp_TypeInfo_var, L_44);
			NullCheck(L_45);
			Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_46;
			L_46 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_45, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
			__this->___U3CU3Es__5_7 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__5_7))->____dictionary_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__5_7))->____current_3))->___key_0), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__5_7))->____current_3))->___value_1), (void*)NULL);
			#endif
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_01ed_1:
				{// begin finally (depth: 2)
					{
						int32_t L_47 = V_0;
						if ((((int32_t)L_47) >= ((int32_t)0)))
						{
							goto IL_0203_1;
						}
					}
					{
						Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_48 = (&__this->___U3CU3Es__5_7);
						Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD(L_48, Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
					}

IL_0203_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_01de_2;
				}

IL_0198_2:
				{
					// foreach (var header in ConsentTracker.requiredHeaders)
					Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_49 = (&__this->___U3CU3Es__5_7);
					KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_50;
					L_50 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline(L_49, Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
					__this->___U3CheaderU3E5__6_8 = L_50;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CheaderU3E5__6_8))->___key_0), (void*)NULL);
					#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CheaderU3E5__6_8))->___value_1), (void*)NULL);
					#endif
					// m_FlushRequest.SetRequestHeader(header.Key, header.Value);
					Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_51 = __this->___U3CU3E4__this_2;
					NullCheck(L_51);
					RuntimeObject* L_52 = L_51->___m_FlushRequest_3;
					KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* L_53 = (&__this->___U3CheaderU3E5__6_8);
					String_t* L_54;
					L_54 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline(L_53, KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
					KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* L_55 = (&__this->___U3CheaderU3E5__6_8);
					String_t* L_56;
					L_56 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline(L_55, KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
					NullCheck(L_52);
					InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequest::SetRequestHeader(System.String,System.String) */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_52, L_54, L_56);
					KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* L_57 = (&__this->___U3CheaderU3E5__6_8);
					il2cpp_codegen_initobj(L_57, sizeof(KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A));
				}

IL_01de_2:
				{
					// foreach (var header in ConsentTracker.requiredHeaders)
					Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_58 = (&__this->___U3CU3Es__5_7);
					bool L_59;
					L_59 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438(L_58, Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
					if (L_59)
					{
						goto IL_0198_2;
					}
				}
				{
					goto IL_0204_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0204_1:
		{
			Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_60 = (&__this->___U3CU3Es__5_7);
			il2cpp_codegen_initobj(L_60, sizeof(Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562));
		}

IL_0211_1:
		{
			// m_FlushPayload = tokens;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_61 = __this->___U3CU3E4__this_2;
			U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732* L_62 = __this->___U3CU3E8__1_3;
			NullCheck(L_62);
			List_1_t378617EAF7470E0C692EDDE5B791E2F9489955B2* L_63 = L_62->___tokens_1;
			NullCheck(L_61);
			L_61->___m_FlushPayload_4 = L_63;
			Il2CppCodeGenWriteBarrier((void**)(&L_61->___m_FlushPayload_4), (void*)L_63);
			// m_WebRequestHelper.SendWebRequest(m_FlushRequest, UploadCompleted);
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_64 = __this->___U3CU3E4__this_2;
			NullCheck(L_64);
			RuntimeObject* L_65 = L_64->___m_WebRequestHelper_1;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_66 = __this->___U3CU3E4__this_2;
			NullCheck(L_66);
			RuntimeObject* L_67 = L_66->___m_FlushRequest_3;
			Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* L_68 = __this->___U3CU3E4__this_2;
			Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_69 = (Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929*)il2cpp_codegen_object_new(Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929_il2cpp_TypeInfo_var);
			NullCheck(L_69);
			Action_1__ctor_mC0FC430617EB8A9B54D1632C5BD95979ED5C2C2A(L_69, L_68, (intptr_t)((void*)Dispatcher_UploadCompleted_m1A96D525DB4DE2A378D239C3D11DA427E36B2459_RuntimeMethod_var), NULL);
			NullCheck(L_65);
			InterfaceActionInvoker2< RuntimeObject*, Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* >::Invoke(1 /* System.Void Unity.Services.Analytics.Internal.IWebRequestHelper::SendWebRequest(Unity.Services.Analytics.Internal.IWebRequest,System.Action`1<System.Int64>) */, IWebRequestHelper_tCCD82817C71896176475384430BB0D9BEF732858_il2cpp_TypeInfo_var, L_65, L_67, L_69);
			goto IL_0285;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0256;
		}
		throw e;
	}

CATCH_0256:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732*)NULL);
		__this->___U3CtaskU3E5__2_4 = (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__2_4), (void*)(Task_1_t46575E75F710D631831E756B5DE20429700F6B95*)NULL);
		__this->___U3CpostBytesU3E5__3_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpostBytesU3E5__3_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_70 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_71 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_70, L_71, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ae;
	}// end catch (depth: 1)

IL_0285:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass17_0_tB9BB3057755D2F6A9BB58CD7D22AEA27C6BF8732*)NULL);
		__this->___U3CtaskU3E5__2_4 = (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__2_4), (void*)(Task_1_t46575E75F710D631831E756B5DE20429700F6B95*)NULL);
		__this->___U3CpostBytesU3E5__3_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpostBytesU3E5__3_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_72 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_72, NULL);
	}

IL_02ae:
	{
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.Dispatcher/<FlushBufferToService>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushBufferToServiceU3Ed__17_SetStateMachine_m265792191277966CFB0BAACD84398BC0FC985D37 (U3CFlushBufferToServiceU3Ed__17_t5B8E5A8FCB3519780B39CC546DBD4D31944ADF60* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.Event::.ctor(System.String,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mCC02CFBFA61A69A6FB95FDD06E0863CC1C72303B (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, String_t* ___0_name, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Event(string name, int? version)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___0_name;
		Event_set_Name_mFD545E11D2CA0FD26602862BF4EC83950B4705F4_inline(__this, L_0, NULL);
		// Version = version;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = ___1_version;
		Event_set_Version_m3A7BF32FB758A13967ECB8D0195A8B819E585C2F_inline(__this, L_1, NULL);
		// Parameters = new EventData();
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_2 = (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9*)il2cpp_codegen_object_new(EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventData__ctor_m8909A7D0EB7F7C034FB9F8C87F338230C6FC6920(L_2, NULL);
		Event_set_Parameters_m987AD682F7F8AD6A3B54745372BF562233753166_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Unity.Services.Analytics.Internal.EventData Unity.Services.Analytics.Internal.Event::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) 
{
	{
		// public EventData Parameters { get; private set; }
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_0 = __this->___U3CParametersU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Event::set_Parameters(Unity.Services.Analytics.Internal.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_Parameters_m987AD682F7F8AD6A3B54745372BF562233753166 (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* ___0_value, const RuntimeMethod* method) 
{
	{
		// public EventData Parameters { get; private set; }
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_0 = ___0_value;
		__this->___U3CParametersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Internal.Event::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_m8FD8FF91BC2CF9CCE2FFC0D303E454AB3D37DB12 (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Event::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_Name_mFD545E11D2CA0FD26602862BF4EC83950B4705F4 (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Int32> Unity.Services.Analytics.Internal.Event::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Event_get_Version_mE0D7A0F0F0DD76C172F503E37E870C17D6106D56 (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) 
{
	{
		// public int? Version { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CVersionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.Event::set_Version(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_Version_m3A7BF32FB758A13967ECB8D0195A8B819E585C2F (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		// public int? Version { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___U3CVersionU3Ek__BackingField_2 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.EventData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData__ctor_m8909A7D0EB7F7C034FB9F8C87F338230C6FC6920 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal EventData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Data = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		EventData_set_Data_m8F18C4676CD3D3C60353ECD22BC4B8813B6CA532_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.EventData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_Set_m208B7B2C5EFFE2CD633FDEC128AB22BF2B934FA9 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Data[key] = value;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0;
		L_0 = EventData_get_Data_mA97B1E0133942DA374284B2EE8C8CDF1D8A05914_inline(__this, NULL);
		String_t* L_1 = ___0_key;
		RuntimeObject* L_2 = ___1_value;
		NullCheck(L_0);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_0, L_1, L_2, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.EventData::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_Set_m8E2D9EE70BCD8BDF576528681D4548C507F1BDFE (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Data[key] = value;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0;
		L_0 = EventData_get_Data_mA97B1E0133942DA374284B2EE8C8CDF1D8A05914_inline(__this, NULL);
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		NullCheck(L_0);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_0, L_1, L_2, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.EventData::AddUserCountry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_AddUserCountry_m29889316674D0DD530FC6D28A2ACDC15A458F9E4 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set("userCountry", Platform.UserCountry.Name());
		String_t* L_0;
		L_0 = UserCountry_Name_m06B124E264D188F63FB26F69C4400862F16B8C59(NULL);
		EventData_Set_m8E2D9EE70BCD8BDF576528681D4548C507F1BDFE(__this, _stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Unity.Services.Analytics.Internal.EventData::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* EventData_get_Data_mA97B1E0133942DA374284B2EE8C8CDF1D8A05914 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Data { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CDataU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.EventData::set_Data(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_set_Data_m8F18C4676CD3D3C60353ECD22BC4B8813B6CA532 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Data { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) 
{
	{
		// internal AnalyticsWebRequest(string url, string method) : base(url, method) { }
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_method;
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(__this, L_0, L_1, NULL);
		// internal AnalyticsWebRequest(string url, string method) : base(url, method) { }
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_SendWebRequest_m415458FF981E6B3BC598B67AD580DA8443D35502 (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0;
		L_0 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(__this, NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_SetRequestHeader_m150D2DC1E3957BC6F3C6052A03693C70F095B3BC (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_key;
		String_t* L_1 = ___1_value;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Unity.Services.Analytics.Internal.AnalyticsWebRequest::Unity.Services.Analytics.Internal.IWebRequest.get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalyticsWebRequest_Unity_Services_Analytics_Internal_IWebRequest_get_isNetworkError_m2C27DA5E204D0625435A7C0C27C10E18EC287E93 (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Analytics.Internal.IWebRequest Unity.Services.Analytics.Internal.WebRequestHelper::CreateWebRequest(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequestHelper_CreateWebRequest_m06C697E4C704BADC84F815F3F84A4144708DDFFA (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, String_t* ___0_url, String_t* ___1_method, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_postBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* V_0 = NULL;
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var request = new AnalyticsWebRequest(url, method);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_method;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_2 = (AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA*)il2cpp_codegen_object_new(AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnalyticsWebRequest__ctor_m8CA36BAF33C32134D350FC88E7BF795AFFDFD77D(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// var upload = new UploadHandlerRaw(postBytes)
		// {
		//     contentType = "application/json"
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_postBytes;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_4 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_4, L_3, NULL);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_5 = L_4;
		NullCheck(L_5);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_5, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		V_1 = L_5;
		// request.uploadHandler = upload;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_6 = V_0;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_7 = V_1;
		NullCheck(L_6);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_6, L_7, NULL);
		// return request;
		AnalyticsWebRequest_t2851A3E58826329B4D5AE9A1898AD98EF26DEEFA* L_8 = V_0;
		V_2 = L_8;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::SendWebRequest(Unity.Services.Analytics.Internal.IWebRequest,System.Action`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper_SendWebRequest_mF1D98192E9EBDB286BC094900284220080FF9F5D (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, RuntimeObject* ___0_request, Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* ___1_onCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_0 = (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m1DE2113561D29AF6B101E20477737F8FF6DAAF2E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_1 = V_0;
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_2 = ___1_onCompleted;
		NullCheck(L_1);
		L_1->___onCompleted_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onCompleted_0), (void*)L_2);
		// var requestOp = request.SendWebRequest();
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_3 = V_0;
		RuntimeObject* L_4 = ___0_request;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
		L_5 = InterfaceFuncInvoker0< UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* >::Invoke(0 /* UnityEngine.Networking.UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.IWebRequest::SendWebRequest() */, IWebRequest_t8FAADA0ED58F096C28998EB5AFE9E79FD05F4DFE_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		L_3->___requestOp_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___requestOp_1), (void*)L_5);
		// requestOp.completed += delegate
		// {
		//     onCompleted(requestOp.webRequest.responseCode);
		// };
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_6 = V_0;
		NullCheck(L_6);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_7 = L_6->___requestOp_1;
		U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* L_8 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_9 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestHelper__ctor_m5F76E493A0C15311928DCCCCE293752DF3DA0CC9 (WebRequestHelper_t90785D95A7FBCCA284192A9CB95D1DA845D57E71* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m1DE2113561D29AF6B101E20477737F8FF6DAAF2E (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass1_0::<SendWebRequest>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CSendWebRequestU3Eb__0_m5B75546A87917B4470194F42B9EE6B62890BA815 (U3CU3Ec__DisplayClass1_0_tEA14AF045675E396173ADD0A1FE52135E6FA37A8* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	{
		// onCompleted(requestOp.webRequest.responseCode);
		Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* L_0 = __this->___onCompleted_0;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = __this->___requestOp_1;
		NullCheck(L_1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
		L_2 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_1, NULL);
		NullCheck(L_2);
		int64_t L_3;
		L_3 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_2, NULL);
		NullCheck(L_0);
		Action_1_Invoke_mE4800C6D733A4CDE721FD3D8B4E95319B5C64E9E_inline(L_0, L_3, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Internal.Platform.UserCountry::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserCountry_Name_m06B124E264D188F63FB26F69C4400862F16B8C59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Analytics.Platform.DebugDevice::IsDebugDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDevice_IsDebugDevice_mA1EEB1D12950C445B81D7EBE8C254DDE2437B333 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Platform.DeviceIdentifiersInternal::get_Idfv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceIdentifiersInternal_get_Idfv_m2988A617A5CDDB443CBC677E7A244A33AFA9AFF0 (DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414* __this, const RuntimeMethod* method) 
{
	{
		// public string Idfv => SystemInfo.deviceUniqueIdentifier;
		String_t* L_0;
		L_0 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Platform.DeviceIdentifiersInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceIdentifiersInternal__ctor_mE570998948E83A4393E2E9651FE7D0ADBA6CD160 (DeviceIdentifiersInternal_t052B0991A5248FD64F1D6F58A81CFF090E374414* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<System.Single> Unity.Services.Analytics.Platform.DeviceVolumeProvider::GetDeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 DeviceVolumeProvider_GetDeviceVolume_m1318E3ADBEF76202DE617254B3CBB6028FE3D3DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17C932391CAC9098F30A5137100A8A293752446C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEE5507D8A5957082FF9D1BA24E8DF9EE625F7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
		// AndroidJavaObject activity = jc.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// AndroidJavaObject audioManager = activity.Call<AndroidJavaObject>("getSystemService", "audio");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_6;
		// int STREAM_MUSIC_rawValue = 3; // See android docs for STREAM_MUSIC constant on AudioManager
		V_3 = 3;
		// int volume = audioManager.Call<int>("getStreamVolume", STREAM_MUSIC_rawValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_7, _stringLiteral17C932391CAC9098F30A5137100A8A293752446C, L_9, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_4 = L_13;
		// int maxVolume = audioManager.Call<int>("getStreamMaxVolume", STREAM_MUSIC_rawValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		NullCheck(L_14);
		int32_t L_20;
		L_20 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_14, _stringLiteral9CEE5507D8A5957082FF9D1BA24E8DF9EE625F7D, L_16, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		V_5 = L_20;
		// return (float) volume / (float) maxVolume;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_23), ((float)(((float)L_21)/((float)L_22))), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		V_6 = L_23;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_24 = V_6;
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Platform.Runtime::Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Runtime_Name_m5691169825FA2CC731731BE5BF745118C339B1E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// return GetPlatform().ToString();
		int32_t L_0;
		L_0 = Runtime_GetPlatform_mC00CBA2AD7478773ACCB340218D1C6866954104C(NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(UA2PlatformCode_t169515A6E124BCE234B36176D037F6E09BC3BAC6_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// Unity.Services.Analytics.Platform.UA2PlatformCode Unity.Services.Analytics.Platform.Runtime::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Runtime_GetPlatform_mC00CBA2AD7478773ACCB340218D1C6866954104C (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B19_0 = 0;
	{
		// switch (Application.platform)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)25))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_008b;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00c0;
			}
			case 7:
			{
				goto IL_008b;
			}
			case 8:
			{
				goto IL_0090;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00c0;
			}
			case 11:
			{
				goto IL_0094;
			}
			case 12:
			{
				goto IL_00c0;
			}
			case 13:
			{
				goto IL_008b;
			}
			case 14:
			{
				goto IL_00c0;
			}
			case 15:
			{
				goto IL_00c0;
			}
			case 16:
			{
				goto IL_008b;
			}
			case 17:
			{
				goto IL_0098;
			}
			case 18:
			{
				goto IL_009d;
			}
			case 19:
			{
				goto IL_009d;
			}
			case 20:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_006a;
	}

IL_006a:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)25))))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00c0;
	}

IL_0071:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)27))))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_0078;
	}

IL_0078:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)31))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_007f;
	}

IL_007f:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00c0;
	}

IL_0086:
	{
		// return UA2PlatformCode.MAC_CLIENT;
		V_2 = ((int32_t)16);
		goto IL_00c4;
	}

IL_008b:
	{
		// return UA2PlatformCode.PC_CLIENT;
		V_2 = ((int32_t)15);
		goto IL_00c4;
	}

IL_0090:
	{
		// return UA2PlatformCode.IOS;
		V_2 = 1;
		goto IL_00c4;
	}

IL_0094:
	{
		// return UA2PlatformCode.ANDROID;
		V_2 = 5;
		goto IL_00c4;
	}

IL_0098:
	{
		// return UA2PlatformCode.WEB;
		V_2 = ((int32_t)14);
		goto IL_00c4;
	}

IL_009d:
	{
		// return (SystemInfo.deviceType == DeviceType.Handheld)
		//     ? UA2PlatformCode.WINDOWS_MOBILE
		//     : UA2PlatformCode.PC_CLIENT;
		int32_t L_8;
		L_8 = SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0(NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_00a9;
		}
	}
	{
		G_B19_0 = ((int32_t)15);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B19_0 = 8;
	}

IL_00aa:
	{
		V_2 = G_B19_0;
		goto IL_00c4;
	}

IL_00ad:
	{
		// return UA2PlatformCode.PS4;
		V_2 = ((int32_t)18);
		goto IL_00c4;
	}

IL_00b2:
	{
		// return UA2PlatformCode.XBOXONE;
		V_2 = ((int32_t)21);
		goto IL_00c4;
	}

IL_00b7:
	{
		// return UA2PlatformCode.IOS_TV;
		V_2 = 4;
		goto IL_00c4;
	}

IL_00bb:
	{
		// return UA2PlatformCode.SWITCH;
		V_2 = ((int32_t)23);
		goto IL_00c4;
	}

IL_00c0:
	{
		// return UA2PlatformCode.UNKNOWN;
		V_2 = 0;
		goto IL_00c4;
	}

IL_00c4:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameStoreID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameStoreID { get; set; }
		String_t* L_0 = __this->___U3CGameStoreIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_GameBundleID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = __this->___U3CGameBundleIDU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_GameBundleID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGameBundleIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameBundleIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = __this->___U3CPlatformU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Platform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlatformU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UasUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = __this->___U3CUasUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_UasUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUasUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUasUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_Idfv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = __this->___U3CIdfvU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_Idfv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIdfvU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdfvU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_DeviceVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CDeviceVolumeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_DeviceVolume(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CDeviceVolumeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Nullable`1<System.Double> Unity.Services.Analytics.Data.StdCommonParams::get_BatteryLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CBatteryLoadU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BatteryLoad(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CBatteryLoadU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_BuildGuuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = __this->___U3CBuildGuuidU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_BuildGuuid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CBuildGuuidU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuildGuuidU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = __this->___U3CClientVersionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ClientVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CClientVersionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientVersionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_UserCountry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UserCountry { get; set; }
		String_t* L_0 = __this->___U3CUserCountryU3Ek__BackingField_9;
		return L_0;
	}
}
// System.String Unity.Services.Analytics.Data.StdCommonParams::get_ProjectID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = __this->___U3CProjectIDU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::set_ProjectID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653 (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CProjectIDU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProjectIDU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::SerializeCommonEventParams(Unity.Services.Analytics.Internal.IBuffer&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, RuntimeObject** ___0_buf, String_t* ___1_callingMethodIdentifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	{
		// if (!string.IsNullOrEmpty(GameStoreID))
		String_t* L_0;
		L_0 = StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// buf.PushString(GameStoreID, "gameStoreID");
		RuntimeObject** L_3 = ___0_buf;
		RuntimeObject* L_4 = *((RuntimeObject**)L_3);
		String_t* L_5;
		L_5 = StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_4, L_5, _stringLiteralDCC2A0E9BB0E18185E2813F45A0FDBAAFE5F6277);
	}

IL_0028:
	{
		// if (!string.IsNullOrEmpty(GameBundleID))
		String_t* L_6;
		L_6 = StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline(__this, NULL);
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// buf.PushString(GameBundleID, "gameBundleID");
		RuntimeObject** L_9 = ___0_buf;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		String_t* L_11;
		L_11 = StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_10, L_11, _stringLiteral148824F010ADAC4C3C4CE066B0DFDB5C2654FB2B);
	}

IL_004f:
	{
		// if (!string.IsNullOrEmpty(Platform))
		String_t* L_12;
		L_12 = StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline(__this, NULL);
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// buf.PushString(Platform, "platform");
		RuntimeObject** L_15 = ___0_buf;
		RuntimeObject* L_16 = *((RuntimeObject**)L_15);
		String_t* L_17;
		L_17 = StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline(__this, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_16, L_17, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
	}

IL_0076:
	{
		// if (!string.IsNullOrEmpty(Idfv))
		String_t* L_18;
		L_18 = StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline(__this, NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		// buf.PushString(Idfv, "idfv");
		RuntimeObject** L_21 = ___0_buf;
		RuntimeObject* L_22 = *((RuntimeObject**)L_21);
		String_t* L_23;
		L_23 = StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_22, L_23, _stringLiteral170AD99AD2A9FB6605C713D5E03E562C7D968B69);
	}

IL_009d:
	{
		// if (!string.IsNullOrEmpty(UasUserID))
		String_t* L_24;
		L_24 = StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline(__this, NULL);
		bool L_25;
		L_25 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_24, NULL);
		V_4 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		// buf.PushString(UasUserID, "uasUserID");
		RuntimeObject** L_27 = ___0_buf;
		RuntimeObject* L_28 = *((RuntimeObject**)L_27);
		String_t* L_29;
		L_29 = StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline(__this, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_28, L_29, _stringLiteral54456F7D5F661596CBB77379CB87A2F212C937AB);
	}

IL_00c6:
	{
		// if (!string.IsNullOrEmpty(BuildGuuid))
		String_t* L_30;
		L_30 = StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline(__this, NULL);
		bool L_31;
		L_31 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_30, NULL);
		V_5 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_00ef;
		}
	}
	{
		// buf.PushString(BuildGuuid, "buildGUUID");
		RuntimeObject** L_33 = ___0_buf;
		RuntimeObject* L_34 = *((RuntimeObject**)L_33);
		String_t* L_35;
		L_35 = StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_34, L_35, _stringLiteralE6BB1D1C222056044DECBA8E28B892E7C7412208);
	}

IL_00ef:
	{
		// if (!string.IsNullOrEmpty(ClientVersion))
		String_t* L_36;
		L_36 = StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline(__this, NULL);
		bool L_37;
		L_37 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_36, NULL);
		V_6 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_0118;
		}
	}
	{
		// buf.PushString(ClientVersion, "clientVersion");
		RuntimeObject** L_39 = ___0_buf;
		RuntimeObject* L_40 = *((RuntimeObject**)L_39);
		String_t* L_41;
		L_41 = StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline(__this, NULL);
		NullCheck(L_40);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_40, L_41, _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
	}

IL_0118:
	{
		// if (!string.IsNullOrEmpty(UserCountry))
		String_t* L_42;
		L_42 = StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline(__this, NULL);
		bool L_43;
		L_43 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_42, NULL);
		V_7 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_7;
		if (!L_44)
		{
			goto IL_0141;
		}
	}
	{
		// buf.PushString(UserCountry, "userCountry");
		RuntimeObject** L_45 = ___0_buf;
		RuntimeObject* L_46 = *((RuntimeObject**)L_45);
		String_t* L_47;
		L_47 = StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline(__this, NULL);
		NullCheck(L_46);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_46, L_47, _stringLiteral536E5B84A146D6EAEB5D74C24E27D67FD4C0B1E7);
	}

IL_0141:
	{
		// if (DeviceVolume != null)
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_48;
		L_48 = StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline(__this, NULL);
		V_9 = L_48;
		bool L_49;
		L_49 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_9), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		V_8 = L_49;
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0174;
		}
	}
	{
		// buf.PushDouble(DeviceVolume.Value, "deviceVolume"); // Schema: Optional
		RuntimeObject** L_51 = ___0_buf;
		RuntimeObject* L_52 = *((RuntimeObject**)L_51);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_53;
		L_53 = StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline(__this, NULL);
		V_9 = L_53;
		double L_54;
		L_54 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_9), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_52);
		InterfaceActionInvoker2< double, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushDouble(System.Double,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_52, L_54, _stringLiteral35B5ADC96410AC9E0FBD60CD4B98AF30C7FF77A1);
	}

IL_0174:
	{
		// if (BatteryLoad != null)
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_55;
		L_55 = StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline(__this, NULL);
		V_9 = L_55;
		bool L_56;
		L_56 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_9), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		V_10 = L_56;
		bool L_57 = V_10;
		if (!L_57)
		{
			goto IL_01a7;
		}
	}
	{
		// buf.PushDouble(BatteryLoad.Value, "batteryLoad"); // Schema: Optional
		RuntimeObject** L_58 = ___0_buf;
		RuntimeObject* L_59 = *((RuntimeObject**)L_58);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_60;
		L_60 = StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline(__this, NULL);
		V_9 = L_60;
		double L_61;
		L_61 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_9), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_59);
		InterfaceActionInvoker2< double, String_t* >::Invoke(9 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushDouble(System.Double,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_59, L_61, _stringLiteralFE4E8D2F674A9B8C61B994B4EB2D46018E971583);
	}

IL_01a7:
	{
		// if (!string.IsNullOrEmpty(ProjectID))
		String_t* L_62;
		L_62 = StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline(__this, NULL);
		bool L_63;
		L_63 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_62, NULL);
		V_11 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_11;
		if (!L_64)
		{
			goto IL_01d0;
		}
	}
	{
		// buf.PushString(ProjectID, "projectID");
		RuntimeObject** L_65 = ___0_buf;
		RuntimeObject* L_66 = *((RuntimeObject**)L_65);
		String_t* L_67;
		L_67 = StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline(__this, NULL);
		NullCheck(L_66);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_66, L_67, _stringLiteralA517A4F85AAA7EBA705BDB743CD5CDA3F32FB5B2);
	}

IL_01d0:
	{
		// buf.PushString(callingMethodIdentifier, "sdkMethod");
		RuntimeObject** L_68 = ___0_buf;
		RuntimeObject* L_69 = *((RuntimeObject**)L_68);
		String_t* L_70 = ___1_callingMethodIdentifier;
		NullCheck(L_69);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_69, L_70, _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.StdCommonParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StdCommonParams__ctor_m973A163478DDB4C6DC21AF142FF5CF7E46D254CA (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Analytics.Data.DataGenerator::SdkStartup(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_SdkStartup_mF6316C0BA15F59621A8EE311F249F39968A2692B (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject** ___0_buf, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___2_commonParams, String_t* ___3_callingMethodIdentifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4488E94845B9ACE3166EA65DF28FEECA27B65702);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB407584FE1D7CEEE747D9585F6F3D5A15AC3C563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB7987EDF6148DDF774BB81BC8810F4966EBD29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90D9A995858BDF53E28CF2370714015239D252B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buf.PushStartEvent("sdkStart", datetime, 1, true);
		RuntimeObject** L_0 = ___0_buf;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___1_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1, _stringLiteralB407584FE1D7CEEE747D9585F6F3D5A15AC3C563, L_2, L_3, (bool)1);
		// buf.PushString(SdkVersion.SDK_VERSION, "sdkVersion");
		RuntimeObject** L_4 = ___0_buf;
		RuntimeObject* L_5 = *((RuntimeObject**)L_4);
		il2cpp_codegen_runtime_class_init_inline(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var);
		String_t* L_6 = ((SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t0BDC7D3E9F8175012EACBDB69FD9394AC2679BB8_il2cpp_TypeInfo_var))->___SDK_VERSION_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_5, L_6, _stringLiteralD90D9A995858BDF53E28CF2370714015239D252B);
		// commonParams.SerializeCommonEventParams(ref buf, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_7 = ___2_commonParams;
		RuntimeObject** L_8 = ___0_buf;
		String_t* L_9 = ___3_callingMethodIdentifier;
		NullCheck(L_7);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_7, L_8, L_9, NULL);
		// buf.PushString("com.unity.services.analytics", "sdkName"); // Schema: Required
		RuntimeObject** L_10 = ___0_buf;
		RuntimeObject* L_11 = *((RuntimeObject**)L_10);
		NullCheck(L_11);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_11, _stringLiteral4488E94845B9ACE3166EA65DF28FEECA27B65702, _stringLiteralCEB7987EDF6148DDF774BB81BC8810F4966EBD29);
		// buf.PushEndEvent();
		RuntimeObject** L_12 = ___0_buf;
		RuntimeObject* L_13 = *((RuntimeObject**)L_12);
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_13);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameRunning(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameRunning_m6D31511B0B8DFE2F0F2778194995010AA4E63926 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject** ___0_buf, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___2_commonParams, String_t* ___3_callingMethodIdentifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buf.PushStartEvent("gameRunning", datetime, 1, true);
		RuntimeObject** L_0 = ___0_buf;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___1_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1, _stringLiteral3AAADB400CC4093A2B8D65DADF92560E65DFF664, L_2, L_3, (bool)1);
		// commonParams.SerializeCommonEventParams(ref buf, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_4 = ___2_commonParams;
		RuntimeObject** L_5 = ___0_buf;
		String_t* L_6 = ___3_callingMethodIdentifier;
		NullCheck(L_4);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_4, L_5, L_6, NULL);
		// buf.PushEndEvent();
		RuntimeObject** L_7 = ___0_buf;
		RuntimeObject* L_8 = *((RuntimeObject**)L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::NewPlayer(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_NewPlayer_m75CD7630ADF33A6A769CBE842AD75CBC26608454 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject** ___0_buf, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___2_commonParams, String_t* ___3_callingMethodIdentifier, String_t* ___4_deviceModel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE33F44A5A3FB00801EF36FD68C6DD4679E581C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buf.PushStartEvent("newPlayer", datetime, 1, true);
		RuntimeObject** L_0 = ___0_buf;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___1_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1, _stringLiteralAE33F44A5A3FB00801EF36FD68C6DD4679E581C5, L_2, L_3, (bool)1);
		// commonParams.SerializeCommonEventParams(ref buf, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_4 = ___2_commonParams;
		RuntimeObject** L_5 = ___0_buf;
		String_t* L_6 = ___3_callingMethodIdentifier;
		NullCheck(L_4);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_4, L_5, L_6, NULL);
		// buf.PushString(deviceModel, "deviceModel"); // Schema: Optional
		RuntimeObject** L_7 = ___0_buf;
		RuntimeObject* L_8 = *((RuntimeObject**)L_7);
		String_t* L_9 = ___4_deviceModel;
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8, L_9, _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F);
		// buf.PushEndEvent();
		RuntimeObject** L_10 = ___0_buf;
		RuntimeObject* L_11 = *((RuntimeObject**)L_10);
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_11);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameStarted(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Boolean,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameStarted_m84D6F7197F1FB2BE4A88E9A9FC3065C9CB879400 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject** ___0_buf, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___2_commonParams, String_t* ___3_callingMethodIdentifier, String_t* ___4_idLocalProject, String_t* ___5_osVersion, bool ___6_isTiny, bool ___7_debugDevice, String_t* ___8_userLocale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FA9058042F937E20F28C101D9767EB04471A5CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB865D689348EFE8DC34E423330CA79525B32EC1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9405AACF03EA399FE3EA77E6BB8C3ADE8E58633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD34286EB83758419274C686F2C77DDE12EAFF376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3357C44F297EFB7BFC8B87C4C3AFAB505C0C4DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD315BB7AF8B2446DA124F00CE3D2B3935C9F536);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// buf.PushStartEvent("gameStarted", datetime, 1, true);
		RuntimeObject** L_0 = ___0_buf;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___1_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1, _stringLiteralD34286EB83758419274C686F2C77DDE12EAFF376, L_2, L_3, (bool)1);
		// commonParams.SerializeCommonEventParams(ref buf, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_4 = ___2_commonParams;
		RuntimeObject** L_5 = ___0_buf;
		String_t* L_6 = ___3_callingMethodIdentifier;
		NullCheck(L_4);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_4, L_5, L_6, NULL);
		// buf.PushString(userLocale, "userLocale");
		RuntimeObject** L_7 = ___0_buf;
		RuntimeObject* L_8 = *((RuntimeObject**)L_7);
		String_t* L_9 = ___8_userLocale;
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8, L_9, _stringLiteral2FA9058042F937E20F28C101D9767EB04471A5CB);
		// if (!String.IsNullOrEmpty(idLocalProject))
		String_t* L_10 = ___4_idLocalProject;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		// buf.PushString(idLocalProject, "idLocalProject");
		RuntimeObject** L_13 = ___0_buf;
		RuntimeObject* L_14 = *((RuntimeObject**)L_13);
		String_t* L_15 = ___4_idLocalProject;
		NullCheck(L_14);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_14, L_15, _stringLiteralE3357C44F297EFB7BFC8B87C4C3AFAB505C0C4DC);
	}

IL_004f:
	{
		// buf.PushString(osVersion, "osVersion");
		RuntimeObject** L_16 = ___0_buf;
		RuntimeObject* L_17 = *((RuntimeObject**)L_16);
		String_t* L_18 = ___5_osVersion;
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_17, L_18, _stringLiteralFD315BB7AF8B2446DA124F00CE3D2B3935C9F536);
		// buf.PushBool(isTiny, "isTiny");
		RuntimeObject** L_19 = ___0_buf;
		RuntimeObject* L_20 = *((RuntimeObject**)L_19);
		bool L_21 = ___6_isTiny;
		NullCheck(L_20);
		InterfaceActionInvoker2< bool, String_t* >::Invoke(12 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushBool(System.Boolean,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_20, L_21, _stringLiteralB865D689348EFE8DC34E423330CA79525B32EC1B);
		// buf.PushBool(debugDevice, "debugDevice");
		RuntimeObject** L_22 = ___0_buf;
		RuntimeObject* L_23 = *((RuntimeObject**)L_22);
		bool L_24 = ___7_debugDevice;
		NullCheck(L_23);
		InterfaceActionInvoker2< bool, String_t* >::Invoke(12 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushBool(System.Boolean,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_23, L_24, _stringLiteralB9405AACF03EA399FE3EA77E6BB8C3ADE8E58633);
		// buf.PushEndEvent();
		RuntimeObject** L_25 = ___0_buf;
		RuntimeObject* L_26 = *((RuntimeObject**)L_25);
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_26);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::GameEnded(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,Unity.Services.Analytics.Data.DataGenerator/SessionEndState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_GameEnded_mC259A9986036E3351AB52B7236035E91828D3259 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject** ___0_buf, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___2_commonParams, String_t* ___3_callingMethodIdentifier, int32_t ___4_quitState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buf.PushStartEvent("gameEnded", datetime, 1, true);
		RuntimeObject** L_0 = ___0_buf;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___1_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1, _stringLiteral1E862A707621E680436D3EE5A45C11B8B8019F39, L_2, L_3, (bool)1);
		// commonParams.SerializeCommonEventParams(ref buf, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_4 = ___2_commonParams;
		RuntimeObject** L_5 = ___0_buf;
		String_t* L_6 = ___3_callingMethodIdentifier;
		NullCheck(L_4);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_4, L_5, L_6, NULL);
		// buf.PushString(quitState.ToString(), "sessionEndState"); // Schema: Required
		RuntimeObject** L_7 = ___0_buf;
		RuntimeObject* L_8 = *((RuntimeObject**)L_7);
		Il2CppFakeBox<int32_t> L_9(SessionEndState_t2CCED7EB4774D5B9C8E77DD6365BD147EC8C9BA1_il2cpp_TypeInfo_var, (&___4_quitState));
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8, L_10, _stringLiteral76BABA91F33047678737B893F72821F1FE7CEFA4);
		// buf.PushEndEvent();
		RuntimeObject** L_11 = ___0_buf;
		RuntimeObject* L_12 = *((RuntimeObject**)L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_12);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::ClientDevice(Unity.Services.Analytics.Internal.IBuffer&,System.DateTime,Unity.Services.Analytics.Data.StdCommonParams,System.String,System.String,System.String,System.Int64,System.Int64,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator_ClientDevice_m30D721F04267F74AECE748CC8B79128DFDBB8161 (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, RuntimeObject** ___0_buf, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_datetime, StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* ___2_commonParams, String_t* ___3_callingMethodIdentifier, String_t* ___4_cpuType, String_t* ___5_gpuType, int64_t ___6_cpuCores, int64_t ___7_ramTotal, int64_t ___8_screenWidth, int64_t ___9_screenHeight, int64_t ___10_screenDPI, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A51A51047FE7B2AF7B929A267EC4F0F3C64879);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CD4EC817130CA9033AF4BCFA7ED48C26B484E86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D1CF0F514CC51BB32FE1D4AC625DC653D45A9B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F47D94EE1EC30005CE053B6857C7BE5A9D938D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC365F5F1C2EDA22BED613D31A3187707C16C7891);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC543083837575FBEE37F25FE1315D6165157A7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buf.PushStartEvent("clientDevice", datetime, 1, true);
		RuntimeObject** L_0 = ___0_buf;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___1_datetime;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)1), /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker4< String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, bool >::Invoke(7 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushStartEvent(System.String,System.DateTime,System.Nullable`1<System.Int64>,System.Boolean) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_1, _stringLiteralC365F5F1C2EDA22BED613D31A3187707C16C7891, L_2, L_3, (bool)1);
		// commonParams.SerializeCommonEventParams(ref buf, callingMethodIdentifier);
		StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* L_4 = ___2_commonParams;
		RuntimeObject** L_5 = ___0_buf;
		String_t* L_6 = ___3_callingMethodIdentifier;
		NullCheck(L_4);
		StdCommonParams_SerializeCommonEventParams_m174FE65D4790275038F1E89B2D2DD862DB5FCC0B(L_4, L_5, L_6, NULL);
		// buf.PushString(cpuType, "cpuType");
		RuntimeObject** L_7 = ___0_buf;
		RuntimeObject* L_8 = *((RuntimeObject**)L_7);
		String_t* L_9 = ___4_cpuType;
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_8, L_9, _stringLiteral87F47D94EE1EC30005CE053B6857C7BE5A9D938D);
		// buf.PushString(gpuType, "gpuType");
		RuntimeObject** L_10 = ___0_buf;
		RuntimeObject* L_11 = *((RuntimeObject**)L_10);
		String_t* L_12 = ___5_gpuType;
		NullCheck(L_11);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushString(System.String,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_11, L_12, _stringLiteral5CD4EC817130CA9033AF4BCFA7ED48C26B484E86);
		// buf.PushInt64(cpuCores, "cpuCores");
		RuntimeObject** L_13 = ___0_buf;
		RuntimeObject* L_14 = *((RuntimeObject**)L_13);
		int64_t L_15 = ___6_cpuCores;
		NullCheck(L_14);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(11 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_14, L_15, _stringLiteral5D1CF0F514CC51BB32FE1D4AC625DC653D45A9B5);
		// buf.PushInt64(ramTotal, "ramTotal");
		RuntimeObject** L_16 = ___0_buf;
		RuntimeObject* L_17 = *((RuntimeObject**)L_16);
		int64_t L_18 = ___7_ramTotal;
		NullCheck(L_17);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(11 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_17, L_18, _stringLiteral28A51A51047FE7B2AF7B929A267EC4F0F3C64879);
		// buf.PushInt64(screenWidth, "screenWidth");
		RuntimeObject** L_19 = ___0_buf;
		RuntimeObject* L_20 = *((RuntimeObject**)L_19);
		int64_t L_21 = ___8_screenWidth;
		NullCheck(L_20);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(11 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_20, L_21, _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921);
		// buf.PushInt64(screenHeight, "screenHeight");
		RuntimeObject** L_22 = ___0_buf;
		RuntimeObject* L_23 = *((RuntimeObject**)L_22);
		int64_t L_24 = ___9_screenHeight;
		NullCheck(L_23);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(11 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_23, L_24, _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789);
		// buf.PushInt64(screenDPI, "screenResolution");
		RuntimeObject** L_25 = ___0_buf;
		RuntimeObject* L_26 = *((RuntimeObject**)L_25);
		int64_t L_27 = ___10_screenDPI;
		NullCheck(L_26);
		InterfaceActionInvoker2< int64_t, String_t* >::Invoke(11 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushInt64(System.Int64,System.String) */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_26, L_27, _stringLiteralDC543083837575FBEE37F25FE1315D6165157A7F);
		// buf.PushEndEvent();
		RuntimeObject** L_28 = ___0_buf;
		RuntimeObject* L_29 = *((RuntimeObject**)L_28);
		NullCheck(L_29);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Unity.Services.Analytics.Internal.IBuffer::PushEndEvent() */, IBuffer_t0E4742F785C935FD676BFEE280CD1D6FF26BBD82_il2cpp_TypeInfo_var, L_29);
		// }
		return;
	}
}
// System.Void Unity.Services.Analytics.Data.DataGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataGenerator__ctor_m659FA5FD00306B47B1A9D7461343C53EBCC0E85C (DataGenerator_t25BC607B3B6D456EAA5DC9C3F600C4B560800183* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_dataDispatcher_mAE2E476F882FA3252C40B050D99CBAA0DAD68559_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IDispatcher dataDispatcher { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CdataDispatcherU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdataDispatcherU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_InstallId_mADFC581C2A8822AE7203E3B49228AE077D338B08_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; private set; }
		RuntimeObject* L_0 = __this->___U3CInstallIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_CloudProjectIdProvider_m971BB6E6BD8004F47A677A952C810E89A30A1CA4_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal ICloudProjectId CloudProjectIdProvider { get; private set; }
		RuntimeObject* L_0 = __this->___U3CCloudProjectIdProviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ClientVersion_m97C2B0A6328C2D38BF31BED3F628D0902F36A3D0_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CClientVersionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientVersionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_ProjectID_m3119C391E989366B60D3A7FC4B4516A0ED285653_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CProjectIDU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProjectIDU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_GameBundleID_m01625DC8750160BEF86073C96048B910A23B8FE6_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGameBundleIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameBundleIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Platform_m6270CCD19D8CB881BC5668613C041C5E5BD0996C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlatformU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BuildGuuid_m0DB0779599C5BE31C7A1B76C2AF77E9EF9A3AC0C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CBuildGuuidU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuildGuuidU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_Idfv_mC903A6BEA3F5145D959C36D123D084D211085EF9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIdfvU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdfvU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AnalyticsServiceInstance_get_ServiceEnabled_mF044EA299C12FF5CA7E6445A84BE251651365BF2_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ServiceEnabled { get; private set; } = true;
		bool L_0 = __this->___U3CServiceEnabledU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_PlayerId_m0D2F879027597FF3E0653572EB04E6102A7938F3_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal IPlayerId PlayerId { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPlayerIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_SessionID_m0BE34B73BEC292E51E9721811451EC359D9837F0_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsServiceInstance_get_dataDispatcher_m28C470C90EDB005FFE02125526A30DF456AB14C4_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal IDispatcher dataDispatcher { get; set; }
		RuntimeObject* L_0 = __this->___U3CdataDispatcherU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_CloudProjectIdProvider_m629CEFAE15BE02B276BEC2FAD642419D8E6E6D92_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ICloudProjectId CloudProjectIdProvider { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCloudProjectIdProviderU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCloudProjectIdProviderU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_InstallId_m125A56DF2B78A8E5F6D27842C12258E91DC65568_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInstallIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInstallIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_PlayerId_m5B28C9692E678821579CFE4255966CC97F089D8D_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IPlayerId PlayerId { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CPlayerIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsServiceInstance_set_CustomAnalyticsId_m811F510E8A5B7118BE621C0A27B2EBDFA44D15CD_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string CustomAnalyticsId { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CCustomAnalyticsIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomAnalyticsIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_DeviceVolume_mBC014F9E6144D31B7A21082F4F17CADA8B8B8DB8_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CDeviceVolumeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_BatteryLoad_mC06087861B7DD6C288823A7DDB4A7085B168743E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___0_value;
		__this->___U3CBatteryLoadU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StdCommonParams_set_UasUserID_m5079F59137ED8AA3D25BBDFBF10E536812D8ABB7_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUasUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUasUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsServiceInstance_get_CustomAnalyticsId_mEB3038CA04D336E4EF0C1A6D6E0D6A94E025CF60_inline (AnalyticsServiceInstance_t85C6639220B0EFF1CB3C517E36C6B55385A56A62* __this, const RuntimeMethod* method) 
{
	{
		// internal string CustomAnalyticsId { get; private set; }
		String_t* L_0 = __this->___U3CCustomAnalyticsIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InternalNewPlayerHelper_get_InstallId_m5AE652EBA796A51898603A7D4537B157226042D4_inline (InternalNewPlayerHelper_t0DA93D548680A3333E7C9D3839AB8BF071B3A476* __this, const RuntimeMethod* method) 
{
	{
		// internal IInstallationId InstallId { get; }
		RuntimeObject* L_0 = __this->___U3CInstallIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnalyticsContainer_set_Instance_m76BCB44E3E710A6310D09A7C26BE302074C9C776_inline (AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static AnalyticsContainer Instance { get; private set; }
		AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1* L_0 = ___0_value;
		((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsContainer_t80827118296A7273882EB5BAE9AC5207F90BBBE1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCheckException_set_Reason_mB9551C34C6B6C76DAAD9DF12EFF1B0E385CEE968_inline (ConsentCheckException_t96E7054ECB013548EA92EEFFFACAB143D5A86B7D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// [Preserve] public ConsentCheckExceptionReason Reason { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsForgetter_get_ConsentTracker_m290D7954B53F3E03381CA92923E8F3AD3F01052C_inline (AnalyticsForgetter_tA1B9D1F48FB306C80BE60C9858646BC1368948C0* __this, const RuntimeMethod* method) 
{
	{
		// IConsentTracker ConsentTracker { get; }
		RuntimeObject* L_0 = __this->___U3CConsentTrackerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_UserID_m6BD66FBC1ABA39DA24C41535DF3BE94661F15F7E_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string UserID { get; set; }
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_SessionID_mD4209B933FB98CBFC2C7F69A2A96FF1772C0A970_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string SessionID { get; set; }
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_InstallID_mE0F85B193C37311FACA6E621F5C5AEBEDE36B6E4_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string InstallID { get; set; }
		String_t* L_0 = __this->___U3CInstallIDU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Buffer_get_PlayerID_m0D017EFC14D46A7FC47081DF2064FD1982DB37E6_inline (Buffer_t5B524FFF417F661B5538000D2F5035A48C69E9EE* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerID { get; set; }
		String_t* L_0 = __this->___U3CPlayerIDU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Event_get_Name_m8FD8FF91BC2CF9CCE2FFC0D303E454AB3D37DB12_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Event_get_Version_mE0D7A0F0F0DD76C172F503E37E870C17D6106D56_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) 
{
	{
		// public int? Version { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CVersionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) 
{
	{
		// public EventData Parameters { get; private set; }
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_0 = __this->___U3CParametersU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* EventData_get_Data_mA97B1E0133942DA374284B2EE8C8CDF1D8A05914_inline (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Data { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optOutConsentStatus_m4BAAF67518F147B7203463AD1557E2E14A795657_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptOutConsentStatusU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentTracker_set_optInPiplConsentStatus_m7121DEA6C7203C39DD740E00262387EF06B1C732_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optInPiplConsentStatus_m1F91E59567043A5429228EFBA83709725EB53A34_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optInPiplConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptInPiplConsentStatusU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConsentTracker_get_optOutConsentStatus_mA1EB68620CB4A25DD2739C48F607DFE18924D415_inline (ConsentTracker_tBDC1E317516ED67AC655A7D3B1D44EF5666B3FC4* __this, const RuntimeMethod* method) 
{
	{
		// internal ConsentStatus optOutConsentStatus { get; set; }
		int32_t L_0 = __this->___U3CoptOutConsentStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatcher_set_FlushInProgress_mE7F87C33DBBF7012A706047DC2336D3B6EF9391E_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CFlushInProgressU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Dispatcher_get_FlushInProgress_mCC5DAEE29D9E97D753FE7B2C876FC7B9E3F50E28_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// internal bool FlushInProgress { get; private set; }
		bool L_0 = __this->___U3CFlushInProgressU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Dispatcher_get_ConsentTracker_m9B13542CFEABEA8A41C39DD1DF71C7CF9605CA7A_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// IConsentTracker ConsentTracker { get; }
		RuntimeObject* L_0 = __this->___U3CConsentTrackerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Dispatcher_get_CollectUrl_m3C55277A1037E4A2BAE8D319D83925467707033B_inline (Dispatcher_t60105C40E4336C76AECD5AF26D5C6A9448D3ECAE* __this, const RuntimeMethod* method) 
{
	{
		// public string CollectUrl { get; set; }
		String_t* L_0 = __this->___U3CCollectUrlU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Event_set_Name_mFD545E11D2CA0FD26602862BF4EC83950B4705F4_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Event_set_Version_m3A7BF32FB758A13967ECB8D0195A8B819E585C2F_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		// public int? Version { get; private set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___U3CVersionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Event_set_Parameters_m987AD682F7F8AD6A3B54745372BF562233753166_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* ___0_value, const RuntimeMethod* method) 
{
	{
		// public EventData Parameters { get; private set; }
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_0 = ___0_value;
		__this->___U3CParametersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Data_m8F18C4676CD3D3C60353ECD22BC4B8813B6CA532_inline (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Data { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameStoreID_m84117F13E7CB919145EC3EF0480411695B7B7B69_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameStoreID { get; set; }
		String_t* L_0 = __this->___U3CGameStoreIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_GameBundleID_m614C916F3CBA18D60161DDFD84B4C9D5C2E99531_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string GameBundleID { get; set; }
		String_t* L_0 = __this->___U3CGameBundleIDU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Platform_m997C2F5D078131853762DCFBA238288F8EFA191E_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Platform { get; set; }
		String_t* L_0 = __this->___U3CPlatformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_Idfv_m0CB0676EB45E77DE51316B204FFAE5437CEFA6DD_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string Idfv { get; set; }
		String_t* L_0 = __this->___U3CIdfvU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UasUserID_m6A4DE2B299022D7DBCEA6EE055C717E59BE2B32C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UasUserID { get; set; }
		String_t* L_0 = __this->___U3CUasUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_BuildGuuid_m706EB59064FA0D40D1C244514B2EA2995AE5706D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string BuildGuuid { get; set; }
		String_t* L_0 = __this->___U3CBuildGuuidU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ClientVersion_mA3D1574F4D14E5355C23D39AA130AB106960491D_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ClientVersion { get; set; }
		String_t* L_0 = __this->___U3CClientVersionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_UserCountry_mDDDF84AB7FC6D62ECBB642C7C7814D3143DAF0F9_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string UserCountry { get; set; }
		String_t* L_0 = __this->___U3CUserCountryU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_DeviceVolume_mD4CB9275283492DA050B8BDA949E1E38C35EB76C_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? DeviceVolume { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CDeviceVolumeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 StdCommonParams_get_BatteryLoad_mE5C6A63115E33A0FB67BA3BA7FF4CD98021A584A_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal double? BatteryLoad { get; set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CBatteryLoadU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StdCommonParams_get_ProjectID_m48D1D967587EF2BB877AB287B6FD03531D3E3658_inline (StdCommonParams_tDFD4FF72F7EEBBC4384155713888A4485FF5E701* __this, const RuntimeMethod* method) 
{
	{
		// internal string ProjectID { get; set; }
		String_t* L_0 = __this->___U3CProjectIDU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
