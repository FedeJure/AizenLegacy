#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// Unity.Services.PushNotifications.AndroidPushNotifications
struct AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.Services.Analytics.Internal.Event
struct Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779;
// Unity.Services.Analytics.Internal.EventData
struct EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9;
// Unity.Services.PushNotifications.EventsWrapper
struct EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Unity.Services.Analytics.IAnalyticsService
struct IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Services.PushNotifications.IOSPushNotifications
struct IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper
struct IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B;
// Unity.Services.PushNotifications.IPushNotificationEventsWrapper
struct IPushNotificationEventsWrapper_t5F5C37639C6FBDB4A20927D97FDBE1E92E64B40C;
// Unity.Services.PushNotifications.IPushNotificationsAnalytics
struct IPushNotificationsAnalytics_tF7BA580EC5B7110B356DBE752C2146C2A165E9A7;
// Unity.Services.PushNotifications.IPushNotificationsService
struct IPushNotificationsService_t9E82AE589B01B4BE1924D0F3BCC144A4609568FF;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.Services.PushNotifications.PushNotificationAnalytics
struct PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74;
// Unity.Services.PushNotifications.PushNotificationCoreInitialization
struct PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7;
// Unity.Services.PushNotifications.PushNotificationReceivedHandler
struct PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973;
// Unity.Services.PushNotifications.PushNotificationSettings
struct PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3;
// Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper
struct PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75;
// Unity.Services.PushNotifications.PushNotificationsServiceInstance
struct PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560;
// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001;
// Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback
struct NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E;
// Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback
struct NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701;
// Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4
struct U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPushNotificationEventsWrapper_t5F5C37639C6FBDB4A20927D97FDBE1E92E64B40C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPushNotificationsAnalytics_tF7BA580EC5B7110B356DBE752C2146C2A165E9A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE4F10585BB0F59F3D83D16E762530A0168DC14;
IL2CPP_EXTERN_C String_t* _stringLiteral1151043BBE43CF90E6BCDC931786CCA9E2C265A0;
IL2CPP_EXTERN_C String_t* _stringLiteral189EE3A3E565D46B3514A166D75CD9A28F261944;
IL2CPP_EXTERN_C String_t* _stringLiteral1CFF325C0493A126A0B24242A404DC0AAD8EB0CC;
IL2CPP_EXTERN_C String_t* _stringLiteral1E486CA167F3CC0F27F2C671BB23C579E8673C43;
IL2CPP_EXTERN_C String_t* _stringLiteral2486F092CCAEB838B1D4AC365D94E63689D6CEAE;
IL2CPP_EXTERN_C String_t* _stringLiteral25D7C633A486F1DEC6BB862122B242245362B5C2;
IL2CPP_EXTERN_C String_t* _stringLiteral2FA1DC9876B1A0C1AD86BA1997C2DDE4E83C7D59;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral39A70924F207B0B380B9832314EDA6574F8BA840;
IL2CPP_EXTERN_C String_t* _stringLiteral45781C19CB30F4812DBE50F3B90E55E5E6458411;
IL2CPP_EXTERN_C String_t* _stringLiteral474C3DFD5E89CCE35EFB7570667F981A5628113D;
IL2CPP_EXTERN_C String_t* _stringLiteral47D969784C67DFB106E4A53E6F4F4BB5C73BEFE1;
IL2CPP_EXTERN_C String_t* _stringLiteral48C3435123EE230FF28549A4BA5928100B8B4594;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral650BAE2E2F1D3FA8E84430AED39006EBB2AD0708;
IL2CPP_EXTERN_C String_t* _stringLiteral6C96C41BD07C11F0ACBE37A31E2BB00E2CA0E184;
IL2CPP_EXTERN_C String_t* _stringLiteral6F8134958A7808D405BD9BCC360626B1DC197986;
IL2CPP_EXTERN_C String_t* _stringLiteral7E4D5CDEF40CA65734DCCCA47986C5A04796C023;
IL2CPP_EXTERN_C String_t* _stringLiteral7ED4352A36FB6A93B6B4FBE7F3153FA82FD71DF9;
IL2CPP_EXTERN_C String_t* _stringLiteral8F688B85FFB4F73AD57DBE9E63856B97E76562B3;
IL2CPP_EXTERN_C String_t* _stringLiteral99BBDAC5E9C7CA0406B87B766477198B22CCF639;
IL2CPP_EXTERN_C String_t* _stringLiteral9D89AA67C04A4F99D071645693689BBC42CF339E;
IL2CPP_EXTERN_C String_t* _stringLiteralA2D4E3BC35FFA6E9F54FA4F3384269384A73B4FF;
IL2CPP_EXTERN_C String_t* _stringLiteralAF9BFFA803A971C61D1E0B324F8100ED0AEC3FE1;
IL2CPP_EXTERN_C String_t* _stringLiteralB211B38FC9F5640F96759325450FAD574F3A6477;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C2A9882124437D2341ECA3022ED9EC1C302F63;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE;
IL2CPP_EXTERN_C String_t* _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A830AC453993876B733013A91401C9743AED0B;
IL2CPP_EXTERN_C String_t* _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774;
IL2CPP_EXTERN_C String_t* _stringLiteralBC9EF1FC4C1A8160EE47CC5F74771111A070CE24;
IL2CPP_EXTERN_C String_t* _stringLiteralBEBB733A9A33C1B9865D8B30A043477C3B9209B2;
IL2CPP_EXTERN_C String_t* _stringLiteralC09E6E7FC2DD040F6669C6DF60170F49295B9B01;
IL2CPP_EXTERN_C String_t* _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87;
IL2CPP_EXTERN_C String_t* _stringLiteralC932519F10AC8944AD50F26CA653F7547F9FB103;
IL2CPP_EXTERN_C String_t* _stringLiteralCA86673E6AA4900204DE2221BEAE074E375996F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD13D7B88FCF7A275765203E3E2E77C0C6A41D230;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD47778A389B7F2930821A5B0A86CE1866E8A3D23;
IL2CPP_EXTERN_C String_t* _stringLiteralD90D9A995858BDF53E28CF2370714015239D252B;
IL2CPP_EXTERN_C String_t* _stringLiteralE1258264F63488353EED28A14F9DDCBE512AA2F8;
IL2CPP_EXTERN_C String_t* _stringLiteralE170ABB9A7ACC8521EBF25722B9712F924D3BBBC;
IL2CPP_EXTERN_C String_t* _stringLiteralE2096279F4E839EE1029B68D19C8D2E85773B4F0;
IL2CPP_EXTERN_C String_t* _stringLiteralEEB0E8570EA6768E2C0B2CA94F9ED53CA7FACABF;
IL2CPP_EXTERN_C String_t* _stringLiteralF126807AE87D93F3E71F73B40235897201D08FB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF8C00E0FDA82C47DC74A9903444AC3D03B0E41B5;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_m5269E00C8CFB701C5FC8E6DFB874D53017C1C20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_mE03E8CDC51AC944E2E283EC81C594828F1E75B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisPushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_m97E4497B301EEBDBE50667333D163BA72FAF74F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PushNotificationsServiceInstance_RegisterForPushNotificationsInternal_m09C82679C72BD610A889EFA32ACA5C638B447325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PushNotificationsService_get_Instance_m00D578A14C07F3DA1C7D2215841BAE86F81A0A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_mCCF4D0CBEBF5CB00331E7355961B2A32ECB1DCC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_m4C8950F56DAD72911D33D2D01B25EF80B02E421E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3COnTokenReceivedU3Eb__0_m568CAF2D4C2C9FFF7F4A502EE7C79E9DE0D48820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3COnNotificationReceivedU3Eb__0_m88354A02D4C4CAED03096251605E626B1C3CFA8E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t494F899B4FCEB7AEE693068C7F116A9241BDB382 
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

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Unity.Services.Analytics.Internal.EventData
struct EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Unity.Services.Analytics.Internal.EventData::<Data>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CDataU3Ek__BackingField_0;
};

// Unity.Services.PushNotifications.EventsWrapper
struct EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA  : public RuntimeObject
{
};

// Unity.Services.PushNotifications.IOSPushNotifications
struct IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C  : public RuntimeObject
{
};

// Unity.Services.PushNotifications.MainThreadHelper
struct MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9  : public RuntimeObject
{
};

// Unity.Services.PushNotifications.PushNotificationAnalytics
struct PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74  : public RuntimeObject
{
	// Unity.Services.PushNotifications.IPushNotificationEventsWrapper Unity.Services.PushNotifications.PushNotificationAnalytics::m_EventsWrapper
	RuntimeObject* ___m_EventsWrapper_0;
	// Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper Unity.Services.PushNotifications.PushNotificationAnalytics::m_AnalyticsPlatformWrapper
	RuntimeObject* ___m_AnalyticsPlatformWrapper_1;
};

// Unity.Services.PushNotifications.PushNotificationCoreInitialization
struct PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7  : public RuntimeObject
{
};

// Unity.Services.PushNotifications.PushNotificationReceivedHandler
struct PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973  : public RuntimeObject
{
	// Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper Unity.Services.PushNotifications.PushNotificationReceivedHandler::m_PlatformWrapper
	RuntimeObject* ___m_PlatformWrapper_0;
	// Unity.Services.PushNotifications.IPushNotificationsAnalytics Unity.Services.PushNotifications.PushNotificationReceivedHandler::m_NotificationAnalytics
	RuntimeObject* ___m_NotificationAnalytics_1;
	// System.Boolean Unity.Services.PushNotifications.PushNotificationReceivedHandler::m_IsCleanStart
	bool ___m_IsCleanStart_2;
};

// Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper
struct PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75  : public RuntimeObject
{
};

// Unity.Services.PushNotifications.PushNotificationsService
struct PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2  : public RuntimeObject
{
};

// Unity.Services.PushNotifications.PushNotificationsServiceInstance
struct PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A  : public RuntimeObject
{
	// Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper Unity.Services.PushNotifications.PushNotificationsServiceInstance::m_AnalyticsPlatformWrapper
	PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* ___m_AnalyticsPlatformWrapper_0;
	// Unity.Services.PushNotifications.PushNotificationAnalytics Unity.Services.PushNotifications.PushNotificationsServiceInstance::m_PushNotificationAnalyticsImpl
	PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* ___m_PushNotificationAnalyticsImpl_1;
	// Unity.Services.PushNotifications.PushNotificationReceivedHandler Unity.Services.PushNotifications.PushNotificationsServiceInstance::notificationReceivedHandler
	PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* ___notificationReceivedHandler_2;
	// Unity.Services.PushNotifications.AndroidPushNotifications Unity.Services.PushNotifications.PushNotificationsServiceInstance::m_AndroidPushNotifications
	AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* ___m_AndroidPushNotifications_3;
};

// Unity.Services.PushNotifications.SdkVersion
struct SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5  : public RuntimeObject
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

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
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

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;
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

// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560  : public RuntimeObject
{
	// Unity.Services.PushNotifications.AndroidPushNotifications Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0::<>4__this
	AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* ___U3CU3E4__this_0;
	// System.String Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0::token
	String_t* ___token_1;
};

// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001  : public RuntimeObject
{
	// Unity.Services.PushNotifications.AndroidPushNotifications Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0::<>4__this
	AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* ___U3CU3E4__this_0;
	// System.String Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0::notificationDataAsJson
	String_t* ___notificationDataAsJson_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
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

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
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

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// Unity.Services.PushNotifications.AndroidPushNotifications
struct AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// Unity.Services.PushNotifications.PushNotificationReceivedHandler Unity.Services.PushNotifications.AndroidPushNotifications::m_NotificationReceivedHandler
	PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* ___m_NotificationReceivedHandler_7;
	// Unity.Services.PushNotifications.PushNotificationAnalytics Unity.Services.PushNotifications.AndroidPushNotifications::m_NotificationAnalytics
	PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* ___m_NotificationAnalytics_8;
	// UnityEngine.AndroidJavaObject Unity.Services.PushNotifications.AndroidPushNotifications::m_IntentExtras
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_IntentExtras_9;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> Unity.Services.PushNotifications.AndroidPushNotifications::InternalNotificationWasReceived
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___InternalNotificationWasReceived_10;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4
struct U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6  : public RuntimeObject
{
	// System.Int32 Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Action Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::methodToRun
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___methodToRun_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Unity.Services.PushNotifications.PushNotificationSettings
struct PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Unity.Services.PushNotifications.PushNotificationSettings::firebaseWebApiKey
	String_t* ___firebaseWebApiKey_9;
	// System.String Unity.Services.PushNotifications.PushNotificationSettings::firebaseProjectNumber
	String_t* ___firebaseProjectNumber_10;
	// System.String Unity.Services.PushNotifications.PushNotificationSettings::firebaseAppID
	String_t* ___firebaseAppID_11;
	// System.String Unity.Services.PushNotifications.PushNotificationSettings::firebaseProjectID
	String_t* ___firebaseProjectID_12;
};

// Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback
struct NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E  : public MulticastDelegate_t
{
};

// Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback
struct NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.CoreRegistry

// Unity.Services.Analytics.Internal.EventData

// Unity.Services.Analytics.Internal.EventData

// Unity.Services.PushNotifications.EventsWrapper

// Unity.Services.PushNotifications.EventsWrapper

// Unity.Services.PushNotifications.IOSPushNotifications
struct IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields
{
	// System.Object Unity.Services.PushNotifications.IOSPushNotifications::s_RegistrationLock
	RuntimeObject* ___s_RegistrationLock_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Unity.Services.PushNotifications.IOSPushNotifications::s_DeviceRegistrationTcs
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___s_DeviceRegistrationTcs_1;
	// System.String Unity.Services.PushNotifications.IOSPushNotifications::s_DeviceToken
	String_t* ___s_DeviceToken_2;
	// Unity.Services.PushNotifications.PushNotificationReceivedHandler Unity.Services.PushNotifications.IOSPushNotifications::s_NotificationReceivedHandler
	PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* ___s_NotificationReceivedHandler_3;
	// Unity.Services.PushNotifications.PushNotificationAnalytics Unity.Services.PushNotifications.IOSPushNotifications::s_NotificationAnalytics
	PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* ___s_NotificationAnalytics_4;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> Unity.Services.PushNotifications.IOSPushNotifications::InternalNotificationWasReceived
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___InternalNotificationWasReceived_5;
};

// Unity.Services.PushNotifications.IOSPushNotifications

// Unity.Services.PushNotifications.MainThreadHelper
struct MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_StaticFields
{
	// System.Threading.SynchronizationContext Unity.Services.PushNotifications.MainThreadHelper::s_UnitySynchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___s_UnitySynchronizationContext_0;
	// System.Threading.Tasks.TaskScheduler Unity.Services.PushNotifications.MainThreadHelper::s_TaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_TaskScheduler_1;
	// System.Int32 Unity.Services.PushNotifications.MainThreadHelper::s_MainThreadId
	int32_t ___s_MainThreadId_2;
};

// Unity.Services.PushNotifications.MainThreadHelper

// Unity.Services.PushNotifications.PushNotificationAnalytics

// Unity.Services.PushNotifications.PushNotificationAnalytics

// Unity.Services.PushNotifications.PushNotificationCoreInitialization

// Unity.Services.PushNotifications.PushNotificationCoreInitialization

// Unity.Services.PushNotifications.PushNotificationReceivedHandler

// Unity.Services.PushNotifications.PushNotificationReceivedHandler

// Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper

// Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper

// Unity.Services.PushNotifications.PushNotificationsService
struct PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_StaticFields
{
	// Unity.Services.PushNotifications.PushNotificationsServiceInstance Unity.Services.PushNotifications.PushNotificationsService::internalInstance
	PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* ___internalInstance_0;
};

// Unity.Services.PushNotifications.PushNotificationsService

// Unity.Services.PushNotifications.PushNotificationsServiceInstance

// Unity.Services.PushNotifications.PushNotificationsServiceInstance

// Unity.Services.PushNotifications.SdkVersion
struct SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_StaticFields
{
	// System.String Unity.Services.PushNotifications.SdkVersion::SDK_VERSION
	String_t* ___SDK_VERSION_0;
};

// Unity.Services.PushNotifications.SdkVersion

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.SynchronizationContext

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

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E* ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_4;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_5;
};

// System.Threading.Tasks.TaskScheduler

// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0

// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0

// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0

// Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>

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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// Unity.Services.Core.Internal.CoreRegistration

// Unity.Services.Core.Internal.CoreRegistration

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

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.Void

// System.Void

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Delegate

// System.Delegate

// Unity.Services.Analytics.Internal.Event

// Unity.Services.Analytics.Internal.Event

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Threading.Tasks.TaskFactory

// System.Threading.Tasks.TaskFactory

// Unity.Services.PushNotifications.AndroidPushNotifications
struct AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields
{
	// System.Object Unity.Services.PushNotifications.AndroidPushNotifications::s_RegistrationLock
	RuntimeObject* ___s_RegistrationLock_4;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Unity.Services.PushNotifications.AndroidPushNotifications::s_DeviceRegistrationTcs
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___s_DeviceRegistrationTcs_5;
	// System.String Unity.Services.PushNotifications.AndroidPushNotifications::s_DeviceToken
	String_t* ___s_DeviceToken_6;
};

// Unity.Services.PushNotifications.AndroidPushNotifications

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4

// Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// Unity.Services.PushNotifications.PushNotificationSettings

// Unity.Services.PushNotifications.PushNotificationSettings

// Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback

// Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback

// Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback

// Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
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
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m013D2C6E801E5EA838414D149B4A5FE9834DE0EB_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m4C03ED1589D48A864F726E0FDF00D8E976DDCE0F_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TPackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisIl2CppFullySharedGenericAny_mC0037D9C3D926AA642C1CCFE43EB1CF8F08B8A88_gshared (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_package, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvert_DeserializeObject_TisIl2CppFullySharedGenericAny_mE887B4FC662529C0EC01965F3E537E060B13D218_gshared (String_t* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;

// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// System.Void Unity.Services.Analytics.Internal.Event::.ctor(System.String,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mCC02CFBFA61A69A6FB95FDD06E0863CC1C72303B (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, String_t* ___0_name, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_version, const RuntimeMethod* method) ;
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
// Unity.Services.Analytics.Internal.EventData Unity.Services.Analytics.Internal.Event::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Analytics.Internal.EventData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_Set_m208B7B2C5EFFE2CD633FDEC128AB22BF2B934FA9 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Void Unity.Services.Analytics.Internal.EventData::AddUserCountry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_AddUserCountry_m29889316674D0DD530FC6D28A2ACDC15A458F9E4 (EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* __this, const RuntimeMethod* method) ;
// Unity.Services.Analytics.IAnalyticsService Unity.Services.Analytics.AnalyticsService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int64 System.Convert::ToInt64(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mB980D7B1AB7B7071D416EE892C2B736D712BE1B5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Unity.Services.PushNotifications.AndroidPushNotifications::GetCurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPushNotifications_GetCurrentActivity_mB3B27D2A19755B471569FBF3A83DC3BE3652AB03 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::OnNotificationReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications_OnNotificationReceived_mF4ECEF74A118B693AE336FDA8D4E848777E5485A (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, String_t* ___0_notificationDataAsJson, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.String>(TResult)
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3 (String_t* ___0_result, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_gshared)((Il2CppFullySharedGenericAny)___0_result, method);
	return (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*)il2cppRetVal;
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*)il2cppRetVal;
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// UnityEngine.AndroidJavaObject Unity.Services.PushNotifications.AndroidPushNotifications::GetPluginInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPushNotifications_GetPluginInstance_m283BF109C5362326C99E8EDF2D0ABABF44523506 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.String>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m013D2C6E801E5EA838414D149B4A5FE9834DE0EB_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, ___0_exception, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_fieldName, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m68BC247747EBFB5A680D9BA3BEAEA0AF37876592 (U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.String>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, String_t* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m4C03ED1589D48A864F726E0FDF00D8E976DDCE0F_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.MainThreadHelper::RunOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadHelper_RunOnMainThread_m269CC2CC3DC7B7E73DB9C94CD614ACEA9B477541 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_methodToRun, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mD3B7FCD31E8B34140F63CAAD8B12A776F746B1E6 (U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.PushNotificationAnalytics::RecordPushTokenUpdated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationAnalytics_RecordPushTokenUpdated_mB5D5066604319E0BA9FDEC7841A355E2C16B141B (PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* __this, String_t* ___0_pushToken, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Unity.Services.PushNotifications.PushNotificationReceivedHandler::HandleReceivedNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* PushNotificationReceivedHandler_HandleReceivedNotification_m9CA29B8683AE528CC0FA57215F2F3EE142F25B4C (PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* __this, String_t* ___0_jsonNotificationData, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Invoke(T)
inline void Action_1_Invoke_mB12967EA6C99F3E62D5EE7CF4263695731070976_inline (Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::NotificationRegistrationTokenReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications_NotificationRegistrationTokenReceived_m59857393797FA94225C34E6A9E39030E2AD9BFB0 (String_t* ___0_token, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::NotificationReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications_NotificationReceived_m1EDC8FAD0EFD5F3DF20F0C0E257B0DABED4E594F (String_t* ___0_serialisedNotificationData, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7 (const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnMainThreadU3Ed__4__ctor_m1DC3C115EB7FF97616A2117B1AAE35D3BC670A10 (U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_mE03E8CDC51AC944E2E283EC81C594828F1E75B3C (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::StartNew(System.Action,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_StartNew_m9A85CE0BA992F5B0735034FFF493F81E7D69C587 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, int32_t ___2_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___3_scheduler, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_m5269E00C8CFB701C5FC8E6DFB874D53017C1C20A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.PushNotificationCoreInitialization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationCoreInitialization__ctor_m3774889E0C6B01AB95B98E0354FA22DE6BECABD4 (PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.Services.PushNotifications.PushNotificationCoreInitialization>(TPackage)
inline CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 CoreRegistry_RegisterPackage_TisPushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_m97E4497B301EEBDBE50667333D163BA72FAF74F9 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7* ___0_package, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 (*) (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisIl2CppFullySharedGenericAny_mC0037D9C3D926AA642C1CCFE43EB1CF8F08B8A88_gshared)((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)__this, (Il2CppFullySharedGenericAny)___0_package, method);
}
// System.Void Unity.Services.PushNotifications.PushNotificationsServiceInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsServiceInstance__ctor_m0B633AE4175BFE7E80B93AB7A096535029D959BD (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.String)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE (String_t* ___0_value, const RuntimeMethod* method)
{
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* il2cppRetVal;
	((  void (*) (String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisIl2CppFullySharedGenericAny_mE887B4FC662529C0EC01965F3E537E060B13D218_gshared)(___0_value, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Resources::Load<Unity.Services.PushNotifications.PushNotificationSettings>(System.String)
inline PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* Resources_Load_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_mCCF4D0CBEBF5CB00331E7355961B2A32ECB1DCC5 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<Unity.Services.PushNotifications.PushNotificationSettings>()
inline PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* ScriptableObject_CreateInstance_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_m4C8950F56DAD72911D33D2D01B25EF80B02E421E (const RuntimeMethod* method)
{
	return ((  PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsAnalyticsPlatformWrapper__ctor_mD5FEFFC5689DC468EA63874AA6FE35190D03F443 (PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.EventsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsWrapper__ctor_mB95AC99E37A3911AA74166D7A9E811E20E47FC86 (EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.PushNotificationAnalytics::.ctor(Unity.Services.PushNotifications.IPushNotificationEventsWrapper,Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationAnalytics__ctor_m49FBC30B44C5A82E8038F55C39B185128DD04922 (PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* __this, RuntimeObject* ___0_eventsWrapper, RuntimeObject* ___1_analyticsPlatformWrapper, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.PushNotificationReceivedHandler::.ctor(Unity.Services.PushNotifications.IPushNotificationsAnalytics,Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationReceivedHandler__ctor_m4A941E377273EC1F51E61F7808983DFE9B53B145 (PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* __this, RuntimeObject* ___0_analytics, RuntimeObject* ___1_platformWrapper, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::.ctor(Unity.Services.PushNotifications.PushNotificationReceivedHandler,Unity.Services.PushNotifications.PushNotificationAnalytics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications__ctor_m5698C2A48B793FE9C0B3BAE4A3080A1CC380600B (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* ___0_notificationReceivedHandler, PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* ___1_analytics, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::add_InternalNotificationWasReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications_add_InternalNotificationWasReceived_m75D9BC1E0A1C6714094E7B449CD1FE22F2014202 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::remove_InternalNotificationWasReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications_remove_InternalNotificationWasReceived_mE98CCEE5A830A5C0911541E340A6223330BCDEC8 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) ;
// Unity.Services.PushNotifications.PushNotificationSettings Unity.Services.PushNotifications.PushNotificationSettings::GetAssetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* PushNotificationSettings_GetAssetInstance_mFCF438B5C0F44DC2807B4E80391F82090BC4B1CC (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Unity.Services.PushNotifications.PushNotificationsServiceInstance::RegisterForPushNotificationsInternal(Unity.Services.PushNotifications.PushNotificationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* PushNotificationsServiceInstance_RegisterForPushNotificationsInternal_m09C82679C72BD610A889EFA32ACA5C638B447325 (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* ___0_settings, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Unity.Services.PushNotifications.AndroidPushNotifications::RegisterForPushNotificationsAsync(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AndroidPushNotifications_RegisterForPushNotificationsAsync_mAA8605438B140D6B3D6A34AD577808811F104645 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, String_t* ___0_firebaseApiKey, String_t* ___1_firebaseSenderId, String_t* ___2_firebaseApplicationId, String_t* ___3_firebaseProjectId, const RuntimeMethod* method) ;
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
// System.Void Unity.Services.PushNotifications.EventsWrapper::RecordCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsWrapper_RecordCustomEvent_m40DC2EB269E0E3F741680E83E22D0707BB348151 (EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA* __this, String_t* ___0_eventName, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_parameters, int32_t ___2_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* V_0 = NULL;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Event evt = new Event(eventName, version);
		String_t* L_0 = ___0_eventName;
		int32_t L_1 = ___2_version;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_3 = (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779*)il2cpp_codegen_object_new(Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Event__ctor_mCC02CFBFA61A69A6FB95FDD06E0863CC1C72303B(L_3, L_0, L_2, NULL);
		V_0 = L_3;
		// foreach (KeyValuePair<string, object> parameter in parameters)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___1_parameters;
		NullCheck(L_4);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_5;
		L_5 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_4, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_1), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003c_1;
			}

IL_0018_1:
			{
				// foreach (KeyValuePair<string, object> parameter in parameters)
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_6;
				L_6 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_1), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_2 = L_6;
				// evt.Parameters.Set(parameter.Key, parameter.Value);
				Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_7 = V_0;
				NullCheck(L_7);
				EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_8;
				L_8 = Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC_inline(L_7, NULL);
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_2), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				RuntimeObject* L_10;
				L_10 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_2), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				NullCheck(L_8);
				EventData_Set_m208B7B2C5EFFE2CD633FDEC128AB22BF2B934FA9(L_8, L_9, L_10, NULL);
			}

IL_003c_1:
			{
				// foreach (KeyValuePair<string, object> parameter in parameters)
				bool L_11;
				L_11 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_1), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// evt.Parameters.AddUserCountry();
		Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_12 = V_0;
		NullCheck(L_12);
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_13;
		L_13 = Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC_inline(L_12, NULL);
		NullCheck(L_13);
		EventData_AddUserCountry_m29889316674D0DD530FC6D28A2ACDC15A458F9E4(L_13, NULL);
		// AnalyticsService.Instance.RecordInternalEvent(evt);
		RuntimeObject* L_14;
		L_14 = AnalyticsService_get_Instance_mD65A4BCA1F3A8D3977E5FFF422319EA564BFD059(NULL);
		Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* >::Invoke(0 /* System.Void Unity.Services.Analytics.IAnalyticsService::RecordInternalEvent(Unity.Services.Analytics.Internal.Event) */, IAnalyticsService_t131A8925CF4FBBB151AB85D6BE6D07785E210DC0_il2cpp_TypeInfo_var, L_14, L_15);
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.EventsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsWrapper__ctor_mB95AC99E37A3911AA74166D7A9E811E20E47FC86 (EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Services.PushNotifications.SdkVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkVersion__cctor_mD93B80F8AECDDBEB56EB5089F3547041DD230EB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF126807AE87D93F3E71F73B40235897201D08FB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string SDK_VERSION = "3.0.0-pre.1";
		((SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var))->___SDK_VERSION_0 = _stringLiteralF126807AE87D93F3E71F73B40235897201D08FB8;
		Il2CppCodeGenWriteBarrier((void**)(&((SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var))->___SDK_VERSION_0), (void*)_stringLiteralF126807AE87D93F3E71F73B40235897201D08FB8);
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
// System.Void Unity.Services.PushNotifications.PushNotificationAnalytics::.ctor(Unity.Services.PushNotifications.IPushNotificationEventsWrapper,Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationAnalytics__ctor_m49FBC30B44C5A82E8038F55C39B185128DD04922 (PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* __this, RuntimeObject* ___0_eventsWrapper, RuntimeObject* ___1_analyticsPlatformWrapper, const RuntimeMethod* method) 
{
	{
		// internal PushNotificationAnalytics(IPushNotificationEventsWrapper eventsWrapper, IPushNotificationAnalyticsPlatformWrapper analyticsPlatformWrapper)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_EventsWrapper = eventsWrapper;
		RuntimeObject* L_0 = ___0_eventsWrapper;
		__this->___m_EventsWrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventsWrapper_0), (void*)L_0);
		// m_AnalyticsPlatformWrapper = analyticsPlatformWrapper;
		RuntimeObject* L_1 = ___1_analyticsPlatformWrapper;
		__this->___m_AnalyticsPlatformWrapper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnalyticsPlatformWrapper_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.PushNotificationAnalytics::RecordPushTokenUpdated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationAnalytics_RecordPushTokenUpdated_mB5D5066604319E0BA9FDEC7841A355E2C16B141B (PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* __this, String_t* ___0_pushToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPushNotificationEventsWrapper_t5F5C37639C6FBDB4A20927D97FDBE1E92E64B40C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CFF325C0493A126A0B24242A404DC0AAD8EB0CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral474C3DFD5E89CCE35EFB7570667F981A5628113D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E4D5CDEF40CA65734DCCCA47986C5A04796C023);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C2A9882124437D2341ECA3022ED9EC1C302F63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90D9A995858BDF53E28CF2370714015239D252B);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// Dictionary<string, object> eventData = new Dictionary<string, object>
		// {
		//     { "clientVersion", m_AnalyticsPlatformWrapper.ApplicationVersion() },
		//     { "sdkVersion", SdkVersion.SDK_VERSION },
		//     { "sdkMethod", "com.unity.services.pushNotifications.PushNotificationsAnalytics.RecordPushTokenUpdated" },
		//     { "platform", m_AnalyticsPlatformWrapper.AnalyticsPlatform() }
		// };
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		RuntimeObject* L_2 = __this->___m_AnalyticsPlatformWrapper_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper::ApplicationVersion() */, IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774, L_3, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var))->___SDK_VERSION_0;
		NullCheck(L_4);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_4, _stringLiteralD90D9A995858BDF53E28CF2370714015239D252B, L_5, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = L_4;
		NullCheck(L_6);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_6, _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD, _stringLiteralB2C2A9882124437D2341ECA3022ED9EC1C302F63, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = L_6;
		RuntimeObject* L_8 = __this->___m_AnalyticsPlatformWrapper_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper::AnalyticsPlatform() */, IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE, L_9, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_7;
		// RuntimePlatform runtimePlatform = m_AnalyticsPlatformWrapper.RuntimePlatform();
		RuntimeObject* L_10 = __this->___m_AnalyticsPlatformWrapper_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.RuntimePlatform Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper::RuntimePlatform() */, IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var, L_10);
		V_1 = L_11;
		// if (runtimePlatform == RuntimePlatform.Android)
		int32_t L_12 = V_1;
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// eventData.Add("androidRegistrationID", pushToken);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = V_0;
		String_t* L_15 = ___0_pushToken;
		NullCheck(L_14);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_14, _stringLiteral1CFF325C0493A126A0B24242A404DC0AAD8EB0CC, L_15, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		goto IL_009c;
	}

IL_007d:
	{
		// else if (runtimePlatform == RuntimePlatform.IPhonePlayer || runtimePlatform == RuntimePlatform.tvOS)
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)8)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_17 = V_1;
		G_B5_0 = ((((int32_t)L_17) == ((int32_t)((int32_t)31)))? 1 : 0);
		goto IL_0089;
	}

IL_0088:
	{
		G_B5_0 = 1;
	}

IL_0089:
	{
		V_3 = (bool)G_B5_0;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		// eventData.Add("pushNotificationToken", pushToken);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = V_0;
		String_t* L_20 = ___0_pushToken;
		NullCheck(L_19);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_19, _stringLiteral474C3DFD5E89CCE35EFB7570667F981A5628113D, L_20, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_009c:
	{
		// m_EventsWrapper.RecordCustomEvent("notificationServices", eventData, 1);
		RuntimeObject* L_21 = __this->___m_EventsWrapper_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker3< String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, int32_t >::Invoke(0 /* System.Void Unity.Services.PushNotifications.IPushNotificationEventsWrapper::RecordCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Int32) */, IPushNotificationEventsWrapper_t5F5C37639C6FBDB4A20927D97FDBE1E92E64B40C_il2cpp_TypeInfo_var, L_21, _stringLiteral7E4D5CDEF40CA65734DCCCA47986C5A04796C023, L_22, 1);
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.PushNotificationAnalytics::RecordNotificationOpened(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationAnalytics_RecordNotificationOpened_mFB5E550EC394000A658DC9EA6DEFE3BF4D41F4EA (PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_payload, bool ___1_didLaunch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPushNotificationEventsWrapper_t5F5C37639C6FBDB4A20927D97FDBE1E92E64B40C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BE4F10585BB0F59F3D83D16E762530A0168DC14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1151043BBE43CF90E6BCDC931786CCA9E2C265A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral189EE3A3E565D46B3514A166D75CD9A28F261944);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E486CA167F3CC0F27F2C671BB23C579E8673C43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D7C633A486F1DEC6BB862122B242245362B5C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39A70924F207B0B380B9832314EDA6574F8BA840);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45781C19CB30F4812DBE50F3B90E55E5E6458411);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8134958A7808D405BD9BCC360626B1DC197986);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D89AA67C04A4F99D071645693689BBC42CF339E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF9BFFA803A971C61D1E0B324F8100ED0AEC3FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB998ED74BBE643EFB1178023AB66097D25232774);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC9EF1FC4C1A8160EE47CC5F74771111A070CE24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC932519F10AC8944AD50F26CA653F7547F9FB103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD47778A389B7F2930821A5B0A86CE1866E8A3D23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD90D9A995858BDF53E28CF2370714015239D252B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE170ABB9A7ACC8521EBF25722B9712F924D3BBBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8C00E0FDA82C47DC74A9903444AC3D03B0E41B5);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// Dictionary<string, object> eventParams = new Dictionary<string, object>
		// {
		//     { "clientVersion", m_AnalyticsPlatformWrapper.ApplicationVersion() },
		//     { "sdkVersion", SdkVersion.SDK_VERSION },
		//     { "sdkMethod", "com.unity.services.pushNotifications.PushNotificationsAnalytics.RecordNotificationOpened" },
		//     { "platform", m_AnalyticsPlatformWrapper.AnalyticsPlatform() }
		// };
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		RuntimeObject* L_2 = __this->___m_AnalyticsPlatformWrapper_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper::ApplicationVersion() */, IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteralB998ED74BBE643EFB1178023AB66097D25232774, L_3, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_StaticFields*)il2cpp_codegen_static_fields_for(SdkVersion_t8ED90D7FB69B2B487C1BA5EF22EF98EDA51E01E5_il2cpp_TypeInfo_var))->___SDK_VERSION_0;
		NullCheck(L_4);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_4, _stringLiteralD90D9A995858BDF53E28CF2370714015239D252B, L_5, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = L_4;
		NullCheck(L_6);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_6, _stringLiteralB77E31D2A4A06B38E1B7C8FC29C34D00063605FD, _stringLiteral6F8134958A7808D405BD9BCC360626B1DC197986, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = L_6;
		RuntimeObject* L_8 = __this->___m_AnalyticsPlatformWrapper_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper::AnalyticsPlatform() */, IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE, L_9, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_7;
		// bool insertCommunicationAttrs = false;
		V_1 = (bool)0;
		// if (payload.ContainsKey("_ddCampaign"))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = ___0_payload;
		NullCheck(L_10);
		bool L_11;
		L_11 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_10, _stringLiteralC932519F10AC8944AD50F26CA653F7547F9FB103, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		// eventParams["campaignId"] = Convert.ToInt64(payload["_ddCampaign"]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = ___0_payload;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_14, _stringLiteralC932519F10AC8944AD50F26CA653F7547F9FB103, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_16;
		L_16 = Convert_ToInt64_mB980D7B1AB7B7071D416EE892C2B736D712BE1B5(L_15, NULL);
		int64_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_13);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_13, _stringLiteral9D89AA67C04A4F99D071645693689BBC42CF339E, L_18, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// insertCommunicationAttrs = true;
		V_1 = (bool)1;
	}

IL_008d:
	{
		// if (payload.ContainsKey("_ddCohort"))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = ___0_payload;
		NullCheck(L_19);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_19, _stringLiteralF8C00E0FDA82C47DC74A9903444AC3D03B0E41B5, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// eventParams["cohortId"] = Convert.ToInt64(payload["_ddCohort"]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_22 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_23 = ___0_payload;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_23, _stringLiteralF8C00E0FDA82C47DC74A9903444AC3D03B0E41B5, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_25;
		L_25 = Convert_ToInt64_mB980D7B1AB7B7071D416EE892C2B736D712BE1B5(L_24, NULL);
		int64_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_22);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_22, _stringLiteral1151043BBE43CF90E6BCDC931786CCA9E2C265A0, L_27, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// insertCommunicationAttrs = true;
		V_1 = (bool)1;
	}

IL_00c1:
	{
		// if (insertCommunicationAttrs && payload.ContainsKey("_ddCommunicationSender"))
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_00d1;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_29 = ___0_payload;
		NullCheck(L_29);
		bool L_30;
		L_30 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_29, _stringLiteralBC9EF1FC4C1A8160EE47CC5F74771111A070CE24, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		G_B7_0 = ((int32_t)(L_30));
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B7_0 = 0;
	}

IL_00d2:
	{
		V_4 = (bool)G_B7_0;
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_0102;
		}
	}
	{
		// eventParams["communicationSender"] = payload["_ddCommunicationSender"];
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_33 = ___0_payload;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_33, _stringLiteralBC9EF1FC4C1A8160EE47CC5F74771111A070CE24, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_32);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_32, _stringLiteral189EE3A3E565D46B3514A166D75CD9A28F261944, L_34, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// eventParams["communicationState"] = "OPEN";
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_35 = V_0;
		NullCheck(L_35);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_35, _stringLiteralE170ABB9A7ACC8521EBF25722B9712F924D3BBBC, _stringLiteral0BE4F10585BB0F59F3D83D16E762530A0168DC14, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_0102:
	{
		// if (didLaunch)
		bool L_36 = ___1_didLaunch;
		V_5 = L_36;
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_011d;
		}
	}
	{
		// eventParams["notificationLaunch"] = true;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_38 = V_0;
		bool L_39 = ((bool)1);
		RuntimeObject* L_40 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_38);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_38, _stringLiteral45781C19CB30F4812DBE50F3B90E55E5E6458411, L_40, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_011d:
	{
		// if (payload.ContainsKey("_ddId"))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_41 = ___0_payload;
		NullCheck(L_41);
		bool L_42;
		L_42 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_41, _stringLiteral1E486CA167F3CC0F27F2C671BB23C579E8673C43, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		V_6 = L_42;
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_0151;
		}
	}
	{
		// eventParams["notificationId"] = Convert.ToInt64(payload["_ddId"]);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_44 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_45 = ___0_payload;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_45, _stringLiteral1E486CA167F3CC0F27F2C671BB23C579E8673C43, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_47;
		L_47 = Convert_ToInt64_mB980D7B1AB7B7071D416EE892C2B736D712BE1B5(L_46, NULL);
		int64_t L_48 = L_47;
		RuntimeObject* L_49 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_44);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_44, _stringLiteral39A70924F207B0B380B9832314EDA6574F8BA840, L_49, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_0151:
	{
		// if (payload.ContainsKey("_ddName"))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_50 = ___0_payload;
		NullCheck(L_50);
		bool L_51;
		L_51 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_50, _stringLiteralAF9BFFA803A971C61D1E0B324F8100ED0AEC3FE1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		V_7 = L_51;
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_017b;
		}
	}
	{
		// eventParams["notificationName"] = payload["_ddName"];
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_53 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_54 = ___0_payload;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_54, _stringLiteralAF9BFFA803A971C61D1E0B324F8100ED0AEC3FE1, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_53);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_53, _stringLiteralD47778A389B7F2930821A5B0A86CE1866E8A3D23, L_55, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_017b:
	{
		// eventParams["communicationState"] = "OPEN";
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_56 = V_0;
		NullCheck(L_56);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_56, _stringLiteralE170ABB9A7ACC8521EBF25722B9712F924D3BBBC, _stringLiteral0BE4F10585BB0F59F3D83D16E762530A0168DC14, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// m_EventsWrapper.RecordCustomEvent("notificationOpened", eventParams, 1);
		RuntimeObject* L_57 = __this->___m_EventsWrapper_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_58 = V_0;
		NullCheck(L_57);
		InterfaceActionInvoker3< String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, int32_t >::Invoke(0 /* System.Void Unity.Services.PushNotifications.IPushNotificationEventsWrapper::RecordCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Int32) */, IPushNotificationEventsWrapper_t5F5C37639C6FBDB4A20927D97FDBE1E92E64B40C_il2cpp_TypeInfo_var, L_57, _stringLiteral25D7C633A486F1DEC6BB862122B242245362B5C2, L_58, 1);
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
// System.String Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper::ApplicationVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PushNotificationsAnalyticsPlatformWrapper_ApplicationVersion_mA482CB81A11E47AB2B0F25B6DF81723947976D3A (PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Application.version;
		String_t* L_0;
		L_0 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RuntimePlatform Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper::RuntimePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PushNotificationsAnalyticsPlatformWrapper_RuntimePlatform_m2EAAAE8D173FD9CDB32141BE7D2757D1129523F0 (PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return Application.platform;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper::IsApplicationFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PushNotificationsAnalyticsPlatformWrapper_IsApplicationFocused_mD37FE77CAD4450DE87324B8BD3C10BCD03CA299A (PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Application.isFocused;
		bool L_0;
		L_0 = Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper::AnalyticsPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PushNotificationsAnalyticsPlatformWrapper_AnalyticsPlatform_m37B6F09772EF310EBA3CC8A06BB7C003B9D41C8E (PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C96C41BD07C11F0ACBE37A31E2BB00E2CA0E184);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "ANDROID";
		V_0 = _stringLiteral6C96C41BD07C11F0ACBE37A31E2BB00E2CA0E184;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Services.PushNotifications.PushNotificationsAnalyticsPlatformWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsAnalyticsPlatformWrapper__ctor_mD5FEFFC5689DC468EA63874AA6FE35190D03F443 (PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::.ctor(Unity.Services.PushNotifications.PushNotificationReceivedHandler,Unity.Services.PushNotifications.PushNotificationAnalytics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications__ctor_m5698C2A48B793FE9C0B3BAE4A3080A1CC380600B (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* ___0_notificationReceivedHandler, PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* ___1_analytics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FA1DC9876B1A0C1AD86BA1997C2DDE4E83C7D59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F688B85FFB4F73AD57DBE9E63856B97E76562B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEBB733A9A33C1B9865D8B30A043477C3B9209B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC09E6E7FC2DD040F6669C6DF60170F49295B9B01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// : base("com.unity.services.pushnotifications.android.UnityCallbackClass")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral2FA1DC9876B1A0C1AD86BA1997C2DDE4E83C7D59, NULL);
		// m_NotificationReceivedHandler = notificationReceivedHandler;
		PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* L_0 = ___0_notificationReceivedHandler;
		__this->___m_NotificationReceivedHandler_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NotificationReceivedHandler_7), (void*)L_0);
		// m_NotificationAnalytics = analytics;
		PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_1 = ___1_analytics;
		__this->___m_NotificationAnalytics_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NotificationAnalytics_8), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		{
			// AndroidJavaObject intent = GetCurrentActivity().Call<AndroidJavaObject>("getIntent");
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
			L_2 = AndroidPushNotifications_GetCurrentActivity_mB3B27D2A19755B471569FBF3A83DC3BE3652AB03(__this, NULL);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
			L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_2);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
			L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			V_0 = L_4;
			// string intentNotificationData = intent.Call<string>("getStringExtra", "notificationData");
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, _stringLiteralC09E6E7FC2DD040F6669C6DF60170F49295B9B01);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC09E6E7FC2DD040F6669C6DF60170F49295B9B01);
			NullCheck(L_5);
			String_t* L_8;
			L_8 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_5, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_7, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			V_1 = L_8;
			// if (intentNotificationData != null)
			String_t* L_9 = V_1;
			V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_0083_1;
			}
		}
		{
			// Debug.Log("App launched from notification, sending relevant events");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8F688B85FFB4F73AD57DBE9E63856B97E76562B3, NULL);
			// OnNotificationReceived(intentNotificationData);
			String_t* L_11 = V_1;
			AndroidPushNotifications_OnNotificationReceived_mF4ECEF74A118B693AE336FDA8D4E848777E5485A(__this, L_11, NULL);
			// intent.Call("removeExtra", "notificationData");
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, _stringLiteralC09E6E7FC2DD040F6669C6DF60170F49295B9B01);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC09E6E7FC2DD040F6669C6DF60170F49295B9B01);
			NullCheck(L_12);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteralBEBB733A9A33C1B9865D8B30A043477C3B9209B2, L_14, NULL);
		}

IL_0083_1:
		{
			goto IL_00a1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError($"Failed to check intent for notification data: {e.Message}");
		Exception_t* L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral650BAE2E2F1D3FA8E84430AED39006EBB2AD0708)), L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a1;
	}// end catch (depth: 1)

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::add_InternalNotificationWasReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications_add_InternalNotificationWasReceived_m75D9BC1E0A1C6714094E7B449CD1FE22F2014202 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_0 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_1 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_2 = NULL;
	{
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_0 = __this->___InternalNotificationWasReceived_10;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_2 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)Castclass((RuntimeObject*)L_4, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var));
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B** L_5 = (&__this->___InternalNotificationWasReceived_10);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_6 = V_2;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_7 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_9 = V_0;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_9) == ((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::remove_InternalNotificationWasReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications_remove_InternalNotificationWasReceived_mE98CCEE5A830A5C0911541E340A6223330BCDEC8 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_0 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_1 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_2 = NULL;
	{
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_0 = __this->___InternalNotificationWasReceived_10;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_2 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)Castclass((RuntimeObject*)L_4, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var));
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B** L_5 = (&__this->___InternalNotificationWasReceived_10);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_6 = V_2;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_7 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_9 = V_0;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_9) == ((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.PushNotifications.AndroidPushNotifications::RegisterForPushNotificationsAsync(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AndroidPushNotifications_RegisterForPushNotificationsAsync_mAA8605438B140D6B3D6A34AD577808811F104645 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, String_t* ___0_firebaseApiKey, String_t* ___1_firebaseSenderId, String_t* ___2_firebaseApplicationId, String_t* ___3_firebaseProjectId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA86673E6AA4900204DE2221BEAE074E375996F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* V_3 = NULL;
	bool V_4 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// lock (s_RegistrationLock)
		il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_RegistrationLock_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e9:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00f3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (!string.IsNullOrEmpty(s_DeviceToken))
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				String_t* L_4 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceToken_6;
				bool L_5;
				L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
				V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0035_1;
				}
			}
			{
				// return Task.FromResult(s_DeviceToken);
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				String_t* L_7 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceToken_6;
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_8;
				L_8 = Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3(L_7, Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3_RuntimeMethod_var);
				V_3 = L_8;
				goto IL_00f4;
			}

IL_0035_1:
			{
				// if (s_DeviceRegistrationTcs != null)
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_9 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5;
				V_4 = (bool)((!(((RuntimeObject*)(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_0054_1;
				}
			}
			{
				// return s_DeviceRegistrationTcs.Task;
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_11 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5;
				NullCheck(L_11);
				Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_12;
				L_12 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_11, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
				V_3 = L_12;
				goto IL_00f4;
			}

IL_0054_1:
			{
				// s_DeviceRegistrationTcs = new TaskCompletionSource<string>();
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_13 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_13, TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5), (void*)L_13);
			}
			try
			{// begin try (depth: 2)
				// AndroidJavaObject applicationContext = GetCurrentActivity().Call<AndroidJavaObject>("getApplicationContext");
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
				L_14 = AndroidPushNotifications_GetCurrentActivity_mB3B27D2A19755B471569FBF3A83DC3BE3652AB03(__this, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
				L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_14);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16;
				L_16 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_14, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_15, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_5 = L_16;
				// AndroidJavaObject instance = GetPluginInstance();
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
				L_17 = AndroidPushNotifications_GetPluginInstance_m283BF109C5362326C99E8EDF2D0ABABF44523506(__this, NULL);
				V_6 = L_17;
				// instance.Call("setCallbackClass", this);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, __this);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
				NullCheck(L_18);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_18, _stringLiteralCA86673E6AA4900204DE2221BEAE074E375996F2, L_20, NULL);
				// instance.Call("initialize", applicationContext,
				//     firebaseApiKey, firebaseApplicationId, firebaseSenderId, firebaseProjectId);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = V_5;
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, L_24);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
				String_t* L_26 = ___0_firebaseApiKey;
				NullCheck(L_25);
				ArrayElementTypeCheck (L_25, L_26);
				(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
				String_t* L_28 = ___2_firebaseApplicationId;
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, L_28);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_28);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
				String_t* L_30 = ___1_firebaseSenderId;
				NullCheck(L_29);
				ArrayElementTypeCheck (L_29, L_30);
				(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_30);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
				String_t* L_32 = ___3_firebaseProjectId;
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_32);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_32);
				NullCheck(L_21);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_21, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_31, NULL);
				goto IL_00dc_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00c1_1;
				}
				throw e;
			}

CATCH_00c1_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// s_DeviceRegistrationTcs.TrySetException(new Exception($"Failed to initialize Push Notification plugin instance and register the device for remote notifications"));
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var)));
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_33 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))))->___s_DeviceRegistrationTcs_5;
				Exception_t* L_34 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_34);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99BBDAC5E9C7CA0406B87B766477198B22CCF639)), NULL);
				NullCheck(L_33);
				bool L_35;
				L_35 = TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C(L_33, L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var)));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00dc_1;
			}// end catch (depth: 2)

IL_00dc_1:
			{
				// return s_DeviceRegistrationTcs.Task;
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_36 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5;
				NullCheck(L_36);
				Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_37;
				L_37 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_36, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
				V_3 = L_37;
				goto IL_00f4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		// }
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_38 = V_3;
		return L_38;
	}
}
// UnityEngine.AndroidJavaObject Unity.Services.PushNotifications.AndroidPushNotifications::GetPluginInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPushNotifications_GetPluginInstance_m283BF109C5362326C99E8EDF2D0ABABF44523506 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ED4352A36FB6A93B6B4FBE7F3153FA82FD71DF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD13D7B88FCF7A275765203E3E2E77C0C6A41D230);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2096279F4E839EE1029B68D19C8D2E85773B4F0);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	{
		// AndroidJavaClass notificationPluginObject = new AndroidJavaClass("com.unity.services.pushnotifications.android.UnityNotifications");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral7ED4352A36FB6A93B6B4FBE7F3153FA82FD71DF9, NULL);
		V_0 = L_0;
		// AndroidJavaObject instance = notificationPluginObject.GetStatic<AndroidJavaObject>("INSTANCE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralD13D7B88FCF7A275765203E3E2E77C0C6A41D230, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// if (instance == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		V_2 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("Unity Push Notification Android plugin is missing, android push notifications will not work as expected.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE2096279F4E839EE1029B68D19C8D2E85773B4F0, NULL);
		// return null;
		V_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		goto IL_0034;
	}

IL_0030:
	{
		// return instance;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
		V_3 = L_5;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_3;
		return L_6;
	}
}
// UnityEngine.AndroidJavaObject Unity.Services.PushNotifications.AndroidPushNotifications::GetCurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPushNotifications_GetCurrentActivity_mB3B27D2A19755B471569FBF3A83DC3BE3652AB03 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
		// return unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		return L_3;
	}
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::OnTokenReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications_OnTokenReceived_mF6046C9C81849BA09786CFB4247624334E7C2092 (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3COnTokenReceivedU3Eb__0_m568CAF2D4C2C9FFF7F4A502EE7C79E9DE0D48820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2486F092CCAEB838B1D4AC365D94E63689D6CEAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7A830AC453993876B733013A91401C9743AED0B);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_0 = (U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m68BC247747EBFB5A680D9BA3BEAEA0AF37876592(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_2 = V_0;
		String_t* L_3 = ___0_token;
		NullCheck(L_2);
		L_2->___token_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___token_1), (void*)L_3);
		// lock (s_RegistrationLock)
		il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_RegistrationLock_4;
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c4:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_00ce;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_00ce:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_2), NULL);
				// if (s_DeviceRegistrationTcs != null)
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_8 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5;
				V_3 = (bool)((!(((RuntimeObject*)(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_0078_1;
				}
			}
			{
				// if (String.IsNullOrEmpty(token))
				U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_10 = V_0;
				NullCheck(L_10);
				String_t* L_11 = L_10->___token_1;
				bool L_12;
				L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
				V_4 = L_12;
				bool L_13 = V_4;
				if (!L_13)
				{
					goto IL_005e_1;
				}
			}
			{
				// s_DeviceRegistrationTcs.TrySetException(new Exception("Failed to register the device for remote notifications."));
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_14 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5;
				Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, _stringLiteral2486F092CCAEB838B1D4AC365D94E63689D6CEAE, NULL);
				NullCheck(L_14);
				bool L_16;
				L_16 = TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C(L_14, L_15, TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
				goto IL_0071_1;
			}

IL_005e_1:
			{
				// s_DeviceRegistrationTcs.TrySetResult(token);
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_17 = ((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5;
				U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_18 = V_0;
				NullCheck(L_18);
				String_t* L_19 = L_18->___token_1;
				NullCheck(L_17);
				bool L_20;
				L_20 = TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176(L_17, L_19, TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
			}

IL_0071_1:
			{
				// s_DeviceRegistrationTcs = null;
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_5), (void*)(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)NULL);
			}

IL_0078_1:
			{
				// if (!String.IsNullOrEmpty(token))
				U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_21 = V_0;
				NullCheck(L_21);
				String_t* L_22 = L_21->___token_1;
				bool L_23;
				L_23 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_22, NULL);
				V_5 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
				bool L_24 = V_5;
				if (!L_24)
				{
					goto IL_00c1_1;
				}
			}
			{
				// s_DeviceToken = token;
				U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_25 = V_0;
				NullCheck(L_25);
				String_t* L_26 = L_25->___token_1;
				il2cpp_codegen_runtime_class_init_inline(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
				((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceToken_6 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_DeviceToken_6), (void*)L_26);
				// MainThreadHelper.RunOnMainThread(() =>
				// {
				//     m_NotificationAnalytics.RecordPushTokenUpdated(token);
				// });
				U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_27 = V_0;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
				NullCheck(L_28);
				Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3COnTokenReceivedU3Eb__0_m568CAF2D4C2C9FFF7F4A502EE7C79E9DE0D48820_RuntimeMethod_var), NULL);
				MainThreadHelper_RunOnMainThread_m269CC2CC3DC7B7E73DB9C94CD614ACEA9B477541(L_28, NULL);
				// Debug.Log($"Successfully registered for remote push notifications with token: {token}");
				U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* L_29 = V_0;
				NullCheck(L_29);
				String_t* L_30 = L_29->___token_1;
				String_t* L_31;
				L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB7A830AC453993876B733013A91401C9743AED0B, L_30, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_31, NULL);
			}

IL_00c1_1:
			{
				goto IL_00cf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::OnNotificationReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications_OnNotificationReceived_mF4ECEF74A118B693AE336FDA8D4E848777E5485A (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* __this, String_t* ___0_notificationDataAsJson, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3COnNotificationReceivedU3Eb__0_m88354A02D4C4CAED03096251605E626B1C3CFA8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47D969784C67DFB106E4A53E6F4F4BB5C73BEFE1);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* L_0 = (U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_mD3B7FCD31E8B34140F63CAAD8B12A776F746B1E6(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* L_2 = V_0;
		String_t* L_3 = ___0_notificationDataAsJson;
		NullCheck(L_2);
		L_2->___notificationDataAsJson_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___notificationDataAsJson_1), (void*)L_3);
		// if (string.IsNullOrEmpty(notificationDataAsJson))
		U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___notificationDataAsJson_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("Notification received with no data, ignoring");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral47D969784C67DFB106E4A53E6F4F4BB5C73BEFE1, NULL);
		// return;
		goto IL_0044;
	}

IL_0032:
	{
		// MainThreadHelper.RunOnMainThread(() =>
		// {
		//     Dictionary<string, object> notificationData = m_NotificationReceivedHandler.HandleReceivedNotification(notificationDataAsJson);
		//     InternalNotificationWasReceived?.Invoke(notificationData);
		// });
		U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3COnNotificationReceivedU3Eb__0_m88354A02D4C4CAED03096251605E626B1C3CFA8E_RuntimeMethod_var), NULL);
		MainThreadHelper_RunOnMainThread_m269CC2CC3DC7B7E73DB9C94CD614ACEA9B477541(L_9, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPushNotifications__cctor_m713310F44C73E6BB028515176FC1E3F7F1E47025 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static object s_RegistrationLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_RegistrationLock_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var))->___s_RegistrationLock_4), (void*)L_0);
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
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m68BC247747EBFB5A680D9BA3BEAEA0AF37876592 (U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass13_0::<OnTokenReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3COnTokenReceivedU3Eb__0_m568CAF2D4C2C9FFF7F4A502EE7C79E9DE0D48820 (U3CU3Ec__DisplayClass13_0_tBEAB061D839D6D67BDF1B1FE2729629800905560* __this, const RuntimeMethod* method) 
{
	{
		// m_NotificationAnalytics.RecordPushTokenUpdated(token);
		AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_1 = L_0->___m_NotificationAnalytics_8;
		String_t* L_2 = __this->___token_1;
		NullCheck(L_1);
		PushNotificationAnalytics_RecordPushTokenUpdated_mB5D5066604319E0BA9FDEC7841A355E2C16B141B(L_1, L_2, NULL);
		// });
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
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mD3B7FCD31E8B34140F63CAAD8B12A776F746B1E6 (U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.PushNotifications.AndroidPushNotifications/<>c__DisplayClass14_0::<OnNotificationReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3COnNotificationReceivedU3Eb__0_m88354A02D4C4CAED03096251605E626B1C3CFA8E (U3CU3Ec__DisplayClass14_0_t08AE2208F9E19A497EC5BC59999DDEBE83EDC001* __this, const RuntimeMethod* method) 
{
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* G_B2_0 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* G_B1_0 = NULL;
	{
		// Dictionary<string, object> notificationData = m_NotificationReceivedHandler.HandleReceivedNotification(notificationDataAsJson);
		AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* L_1 = L_0->___m_NotificationReceivedHandler_7;
		String_t* L_2 = __this->___notificationDataAsJson_1;
		NullCheck(L_1);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3;
		L_3 = PushNotificationReceivedHandler_HandleReceivedNotification_m9CA29B8683AE528CC0FA57215F2F3EE142F25B4C(L_1, L_2, NULL);
		V_0 = L_3;
		// InternalNotificationWasReceived?.Invoke(notificationData);
		AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_5 = L_4->___InternalNotificationWasReceived_10;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0029;
		}
	}
	{
		goto IL_0030;
	}

IL_0029:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mB12967EA6C99F3E62D5EE7CF4263695731070976_inline(G_B2_0, L_7, NULL);
	}

IL_0030:
	{
		// });
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IOSPushNotifications_NotificationRegistrationTokenReceived_m59857393797FA94225C34E6A9E39030E2AD9BFB0(char* ___0_token)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_token' to managed representation
	String_t* ____0_token_unmarshaled = NULL;
	____0_token_unmarshaled = il2cpp_codegen_marshal_string_result(___0_token);

	// Managed method invocation
	IOSPushNotifications_NotificationRegistrationTokenReceived_m59857393797FA94225C34E6A9E39030E2AD9BFB0(____0_token_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IOSPushNotifications_NotificationReceived_m1EDC8FAD0EFD5F3DF20F0C0E257B0DABED4E594F(char* ___0_serialisedNotificationData)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_serialisedNotificationData' to managed representation
	String_t* ____0_serialisedNotificationData_unmarshaled = NULL;
	____0_serialisedNotificationData_unmarshaled = il2cpp_codegen_marshal_string_result(___0_serialisedNotificationData);

	// Managed method invocation
	IOSPushNotifications_NotificationReceived_m1EDC8FAD0EFD5F3DF20F0C0E257B0DABED4E594F(____0_serialisedNotificationData_unmarshaled, NULL);

}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::add_InternalNotificationWasReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications_add_InternalNotificationWasReceived_m008D723CF3B1003872FCB89771A7EB992D12720C (Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_0 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_1 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_0 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___InternalNotificationWasReceived_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_2 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)Castclass((RuntimeObject*)L_4, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_5 = V_2;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_6 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*>((&((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___InternalNotificationWasReceived_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_8 = V_0;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_8) == ((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::remove_InternalNotificationWasReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications_remove_InternalNotificationWasReceived_m4C30F3C04BAB50D8D48EC03E2645D061DCFADE2C (Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_0 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_1 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_0 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___InternalNotificationWasReceived_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_2 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)Castclass((RuntimeObject*)L_4, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_5 = V_2;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_6 = V_1;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*>((&((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___InternalNotificationWasReceived_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_8 = V_0;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_8) == ((RuntimeObject*)(Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::.ctor(Unity.Services.PushNotifications.PushNotificationReceivedHandler,Unity.Services.PushNotifications.PushNotificationAnalytics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications__ctor_m2AA0B77C7819386B338326FFECEA1AF6E983554C (IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C* __this, PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* ___0_notificationReceivedHandler, PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* ___1_analytics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IOSPushNotifications(PushNotificationReceivedHandler notificationReceivedHandler, PushNotificationAnalytics analytics)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// s_NotificationReceivedHandler = notificationReceivedHandler;
		PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* L_0 = ___0_notificationReceivedHandler;
		il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_NotificationReceivedHandler_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_NotificationReceivedHandler_3), (void*)L_0);
		// s_NotificationAnalytics = analytics;
		PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_1 = ___1_analytics;
		((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_NotificationAnalytics_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_NotificationAnalytics_4), (void*)L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.PushNotifications.IOSPushNotifications::RegisterForPushNotificationsAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* IOSPushNotifications_RegisterForPushNotificationsAsync_m8C4C414424FD2B4521E0F1306E60CA1BD44AA84D (IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2D4E3BC35FFA6E9F54FA4F3384269384A73B4FF);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* V_0 = NULL;
	{
		// Debug.Log("iOS notification support is only available in iOS builds");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA2D4E3BC35FFA6E9F54FA4F3384269384A73B4FF, NULL);
		// return Task.FromResult<string>(null);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_0;
		L_0 = Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3((String_t*)NULL, Task_FromResult_TisString_t_mD3675A87F3208922F8205BF9BF6AC78BF2DE22C3_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::NotificationRegistrationTokenReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications_NotificationRegistrationTokenReceived_m59857393797FA94225C34E6A9E39030E2AD9BFB0 (String_t* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2486F092CCAEB838B1D4AC365D94E63689D6CEAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7A830AC453993876B733013A91401C9743AED0B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (s_RegistrationLock)
		il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_RegistrationLock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_007a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_007a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (string.IsNullOrEmpty(token))
				String_t* L_4 = ___0_token;
				bool L_5;
				L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
				V_2 = L_5;
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0036_1;
				}
			}
			{
				// s_DeviceRegistrationTcs.TrySetException(new Exception("Failed to register the device for remote notifications."));
				il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_7 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_1;
				Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, _stringLiteral2486F092CCAEB838B1D4AC365D94E63689D6CEAE, NULL);
				NullCheck(L_7);
				bool L_9;
				L_9 = TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C(L_7, L_8, TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
				goto IL_0067_1;
			}

IL_0036_1:
			{
				// s_DeviceToken = token;
				String_t* L_10 = ___0_token;
				il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
				((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_DeviceToken_2 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_DeviceToken_2), (void*)L_10);
				// s_DeviceRegistrationTcs.TrySetResult(token);
				TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_11 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_1;
				String_t* L_12 = ___0_token;
				NullCheck(L_11);
				bool L_13;
				L_13 = TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176(L_11, L_12, TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
				// s_NotificationAnalytics.RecordPushTokenUpdated(token);
				PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_14 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_NotificationAnalytics_4;
				String_t* L_15 = ___0_token;
				NullCheck(L_14);
				PushNotificationAnalytics_RecordPushTokenUpdated_mB5D5066604319E0BA9FDEC7841A355E2C16B141B(L_14, L_15, NULL);
				// Debug.Log($"Successfully registered for remote push notifications with token: {token}");
				String_t* L_16 = ___0_token;
				String_t* L_17;
				L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB7A830AC453993876B733013A91401C9743AED0B, L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
			}

IL_0067_1:
			{
				// s_DeviceRegistrationTcs = null;
				il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
				((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_1 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_DeviceRegistrationTcs_1), (void*)(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)NULL);
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::NotificationReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications_NotificationReceived_m1EDC8FAD0EFD5F3DF20F0C0E257B0DABED4E594F (String_t* ___0_serialisedNotificationData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	bool V_1 = false;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* G_B4_0 = NULL;
	Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* G_B3_0 = NULL;
	{
		// if (string.IsNullOrEmpty(serialisedNotificationData))
		String_t* L_0 = ___0_serialisedNotificationData;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_002c;
	}

IL_000e:
	{
		// Dictionary<string, object> userInfo = s_NotificationReceivedHandler.HandleReceivedNotification(serialisedNotificationData);
		il2cpp_codegen_runtime_class_init_inline(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* L_3 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_NotificationReceivedHandler_3;
		String_t* L_4 = ___0_serialisedNotificationData;
		NullCheck(L_3);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5;
		L_5 = PushNotificationReceivedHandler_HandleReceivedNotification_m9CA29B8683AE528CC0FA57215F2F3EE142F25B4C(L_3, L_4, NULL);
		V_0 = L_5;
		// InternalNotificationWasReceived?.Invoke(userInfo);
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_6 = ((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___InternalNotificationWasReceived_5;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0025;
		}
	}
	{
		goto IL_002c;
	}

IL_0025:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = V_0;
		NullCheck(G_B4_0);
		Action_1_Invoke_mB12967EA6C99F3E62D5EE7CF4263695731070976_inline(G_B4_0, L_8, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSPushNotifications__cctor_m449B7D7F9999E7D6274FBE5DEEEFB3C6CFDEE485 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static object s_RegistrationLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_RegistrationLock_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_StaticFields*)il2cpp_codegen_static_fields_for(IOSPushNotifications_tCE14A1D0B963D4CC43D4C86FA19E9B217B8F058C_il2cpp_TypeInfo_var))->___s_RegistrationLock_0), (void*)L_0);
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
void NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_Multicast(NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* currentDelegate = reinterpret_cast<NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_deviceToken, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_OpenInst(NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, const RuntimeMethod* method)
{
	NullCheck(___0_deviceToken);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceToken, method);
}
void NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_OpenStatic(NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceToken, method);
}
void NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_OpenStaticInvoker(NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_deviceToken);
}
void NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_ClosedStaticInvoker(NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_deviceToken);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701 (NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_deviceToken' to native representation
	char* ____0_deviceToken_marshaled = NULL;
	____0_deviceToken_marshaled = il2cpp_codegen_marshal_string(___0_deviceToken);

	// Native function invocation
	il2cppPInvokeFunc(____0_deviceToken_marshaled);

	// Marshaling cleanup of parameter '___0_deviceToken' native representation
	il2cpp_codegen_marshal_free(____0_deviceToken_marshaled);
	____0_deviceToken_marshaled = NULL;

}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationRegistrationCallback__ctor_m0FAEA8B73BADDF8E166CFB89EED78BA836B075F2 (NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD_Multicast;
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationRegistrationCallback_Invoke_m3A213EB8F7489BADC4760B4F4E61BE99A5D895BD (NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceToken, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationRegistrationCallback_BeginInvoke_mAAD20F824669FCF2727AFE405E3458324F29D3D3 (NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, String_t* ___0_deviceToken, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_deviceToken;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications/NotificationRegistrationCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationRegistrationCallback_EndInvoke_m09339224EEBF19694C934F9A6B4A0EFCBA538B8C (NotificationRegistrationCallback_t823604A773AA277006F5B25B2FFDD3EF7257B701* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_Multicast(NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* currentDelegate = reinterpret_cast<NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_serialisedNotificationData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_OpenInst(NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, const RuntimeMethod* method)
{
	NullCheck(___0_serialisedNotificationData);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_serialisedNotificationData, method);
}
void NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_OpenStatic(NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_serialisedNotificationData, method);
}
void NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_OpenStaticInvoker(NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_serialisedNotificationData);
}
void NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_ClosedStaticInvoker(NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_serialisedNotificationData);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E (NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_serialisedNotificationData' to native representation
	char* ____0_serialisedNotificationData_marshaled = NULL;
	____0_serialisedNotificationData_marshaled = il2cpp_codegen_marshal_string(___0_serialisedNotificationData);

	// Native function invocation
	il2cppPInvokeFunc(____0_serialisedNotificationData_marshaled);

	// Marshaling cleanup of parameter '___0_serialisedNotificationData' native representation
	il2cpp_codegen_marshal_free(____0_serialisedNotificationData_marshaled);
	____0_serialisedNotificationData_marshaled = NULL;

}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mEC37D54D71ED8C8221BF9F4BACDECA3A8D5B41C0 (NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A_Multicast;
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m034C3D2101563714C8BC49030E6ABFE9B469B35A (NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_serialisedNotificationData, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_mB312F32C013B6230FFA04CB39B32791A0D2FC1A1 (NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, String_t* ___0_serialisedNotificationData, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_serialisedNotificationData;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Unity.Services.PushNotifications.IOSPushNotifications/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_mA0CFAB069111137DD83105D8E0528A23D1A83DD3 (NotificationReceivedCallback_t0A956F709528DC132CCA7E176735A2FF8A06DA6E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.PushNotifications.MainThreadHelper::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadHelper_Init_m68D3FF8B57344CDEC6DCBE3711DBEE3401C5706C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_UnitySynchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0;
		L_0 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		((MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var))->___s_UnitySynchronizationContext_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var))->___s_UnitySynchronizationContext_0), (void*)L_0);
		// s_TaskScheduler = TaskScheduler.FromCurrentSynchronizationContext();
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_1;
		L_1 = TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7(NULL);
		((MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var))->___s_TaskScheduler_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var))->___s_TaskScheduler_1), (void*)L_1);
		// s_MainThreadId = Thread.CurrentThread.ManagedThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		((MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var))->___s_MainThreadId_2 = L_3;
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.MainThreadHelper::RunOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadHelper_RunOnMainThread_m269CC2CC3DC7B7E73DB9C94CD614ACEA9B477541 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_methodToRun, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_mE03E8CDC51AC944E2E283EC81C594828F1E75B3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* V_0 = NULL;
	{
		U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* L_0 = (U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6*)il2cpp_codegen_object_new(U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRunOnMainThreadU3Ed__4__ctor_m1DC3C115EB7FF97616A2117B1AAE35D3BC670A10(L_0, NULL);
		V_0 = L_0;
		U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___0_methodToRun;
		NullCheck(L_3);
		L_3->___methodToRun_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___methodToRun_2), (void*)L_4);
		U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3E1__state_0 = (-1);
		U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* L_6 = V_0;
		NullCheck(L_6);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_7 = (&L_6->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_mE03E8CDC51AC944E2E283EC81C594828F1E75B3C(L_7, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_mE03E8CDC51AC944E2E283EC81C594828F1E75B3C_RuntimeMethod_var);
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
// System.Void Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnMainThreadU3Ed__4__ctor_m1DC3C115EB7FF97616A2117B1AAE35D3BC670A10 (U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnMainThreadU3Ed__4_MoveNext_m69EB0C88C1C633F5AB22DF688E21352B8AA8472B (U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_m5269E00C8CFB701C5FC8E6DFB874D53017C1C20A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* V_2 = NULL;
	Exception_t* V_3 = NULL;
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
			goto IL_005d_1;
		}

IL_000e_1:
		{
			// await Task.Factory.StartNew(methodToRun, CancellationToken.None, TaskCreationOptions.None,
			//     s_TaskScheduler);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_2;
			L_2 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___methodToRun_2;
			il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
			L_4 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
			TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = ((MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadHelper_t247B778E74F6DB8F9B7DC2A8873D775D8D7762F9_il2cpp_TypeInfo_var))->___s_TaskScheduler_1;
			NullCheck(L_2);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
			L_6 = TaskFactory_StartNew_m9A85CE0BA992F5B0735034FFF493F81E7D69C587(L_2, L_3, L_4, 0, L_5, NULL);
			NullCheck(L_6);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7;
			L_7 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_6, NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_8)
			{
				goto IL_0079_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = V_1;
			__this->___U3CU3Eu__1_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_m5269E00C8CFB701C5FC8E6DFB874D53017C1C20A(L_11, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6_m5269E00C8CFB701C5FC8E6DFB874D53017C1C20A_RuntimeMethod_var);
			goto IL_00af;
		}

IL_005d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = __this->___U3CU3Eu__1_3;
			V_1 = L_12;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_13 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0079_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_009b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_16 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_15, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00af;
	}// end catch (depth: 1)

IL_009b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_17 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_17, NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Void Unity.Services.PushNotifications.MainThreadHelper/<RunOnMainThread>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnMainThreadU3Ed__4_SetStateMachine_m197A9328C3EE628D1ED5B3E0CC273C17719DE48F (U3CRunOnMainThreadU3Ed__4_tAF73603E3243B9C1E6F1615B86337EF2284FC7C6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
// System.Void Unity.Services.PushNotifications.PushNotificationCoreInitialization::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationCoreInitialization_Register_m4DCFB2BCDC94699A6F2C03BC15133DDC06632F64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisPushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_m97E4497B301EEBDBE50667333D163BA72FAF74F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CoreRegistry.Instance.RegisterPackage(new PushNotificationCoreInitialization());
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0;
		L_0 = CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline(NULL);
		PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7* L_1 = (PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7*)il2cpp_codegen_object_new(PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PushNotificationCoreInitialization__ctor_m3774889E0C6B01AB95B98E0354FA22DE6BECABD4(L_1, NULL);
		NullCheck(L_0);
		CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 L_2;
		L_2 = CoreRegistry_RegisterPackage_TisPushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_m97E4497B301EEBDBE50667333D163BA72FAF74F9(L_0, L_1, CoreRegistry_RegisterPackage_TisPushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7_m97E4497B301EEBDBE50667333D163BA72FAF74F9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.PushNotifications.PushNotificationCoreInitialization::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* PushNotificationCoreInitialization_Initialize_m421ED66CF7CA3E4AC75C742853A60FCA7D6F6E1D (PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_registry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		// PushNotificationsService.internalInstance = new PushNotificationsServiceInstance();
		PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* L_0 = (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A*)il2cpp_codegen_object_new(PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PushNotificationsServiceInstance__ctor_m0B633AE4175BFE7E80B93AB7A096535029D959BD(L_0, NULL);
		((PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_StaticFields*)il2cpp_codegen_static_fields_for(PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_il2cpp_TypeInfo_var))->___internalInstance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_StaticFields*)il2cpp_codegen_static_fields_for(PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_il2cpp_TypeInfo_var))->___internalInstance_0), (void*)L_0);
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Services.PushNotifications.PushNotificationCoreInitialization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationCoreInitialization__ctor_m3774889E0C6B01AB95B98E0354FA22DE6BECABD4 (PushNotificationCoreInitialization_tF6A7DCC27CFA790DB8769B2B1758CF3AD77577D7* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Services.PushNotifications.PushNotificationReceivedHandler::.ctor(Unity.Services.PushNotifications.IPushNotificationsAnalytics,Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationReceivedHandler__ctor_m4A941E377273EC1F51E61F7808983DFE9B53B145 (PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* __this, RuntimeObject* ___0_analytics, RuntimeObject* ___1_platformWrapper, const RuntimeMethod* method) 
{
	{
		// bool m_IsCleanStart = true;
		__this->___m_IsCleanStart_2 = (bool)1;
		// internal PushNotificationReceivedHandler(IPushNotificationsAnalytics analytics, IPushNotificationAnalyticsPlatformWrapper platformWrapper)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_NotificationAnalytics = analytics;
		RuntimeObject* L_0 = ___0_analytics;
		__this->___m_NotificationAnalytics_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NotificationAnalytics_1), (void*)L_0);
		// m_PlatformWrapper = platformWrapper;
		RuntimeObject* L_1 = ___1_platformWrapper;
		__this->___m_PlatformWrapper_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlatformWrapper_0), (void*)L_1);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Unity.Services.PushNotifications.PushNotificationReceivedHandler::HandleReceivedNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* PushNotificationReceivedHandler_HandleReceivedNotification_m9CA29B8683AE528CC0FA57215F2F3EE142F25B4C (PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* __this, String_t* ___0_jsonNotificationData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPushNotificationsAnalytics_tF7BA580EC5B7110B356DBE752C2146C2A165E9A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// Dictionary<string, object> notificationData = JsonConvert.DeserializeObject<Dictionary<string, object>>(jsonNotificationData);
			String_t* L_0 = ___0_jsonNotificationData;
			il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1;
			L_1 = JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE(L_0, JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
			V_0 = L_1;
			// if (notificationData != null)
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
			V_1 = (bool)((!(((RuntimeObject*)(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0056_1;
			}
		}
		{
			// if (!m_PlatformWrapper.IsApplicationFocused() || m_IsCleanStart)
			RuntimeObject* L_4 = __this->___m_PlatformWrapper_0;
			NullCheck(L_4);
			bool L_5;
			L_5 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.Services.PushNotifications.IPushNotificationAnalyticsPlatformWrapper::IsApplicationFocused() */, IPushNotificationAnalyticsPlatformWrapper_t25922CC4879E50FC28AAA6A519C95DBBFB7D8C1B_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0027_1;
			}
		}
		{
			bool L_6 = __this->___m_IsCleanStart_2;
			G_B5_0 = ((int32_t)(L_6));
			goto IL_0028_1;
		}

IL_0027_1:
		{
			G_B5_0 = 1;
		}

IL_0028_1:
		{
			V_2 = (bool)G_B5_0;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0045_1;
			}
		}
		{
			// m_NotificationAnalytics.RecordNotificationOpened(notificationData, true);
			RuntimeObject* L_8 = __this->___m_NotificationAnalytics_1;
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker2< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, bool >::Invoke(1 /* System.Void Unity.Services.PushNotifications.IPushNotificationsAnalytics::RecordNotificationOpened(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean) */, IPushNotificationsAnalytics_tF7BA580EC5B7110B356DBE752C2146C2A165E9A7_il2cpp_TypeInfo_var, L_8, L_9, (bool)1);
			// m_IsCleanStart = false;
			__this->___m_IsCleanStart_2 = (bool)0;
			goto IL_0055_1;
		}

IL_0045_1:
		{
			// m_NotificationAnalytics.RecordNotificationOpened(notificationData, false);
			RuntimeObject* L_10 = __this->___m_NotificationAnalytics_1;
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker2< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, bool >::Invoke(1 /* System.Void Unity.Services.PushNotifications.IPushNotificationsAnalytics::RecordNotificationOpened(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean) */, IPushNotificationsAnalytics_tF7BA580EC5B7110B356DBE752C2146C2A165E9A7_il2cpp_TypeInfo_var, L_10, L_11, (bool)0);
		}

IL_0055_1:
		{
		}

IL_0056_1:
		{
			// return notificationData;
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = V_0;
			V_3 = L_12;
			goto IL_0078;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log($"Failed to parse notification user info dictionary data: {e.Message}");
		Exception_t* L_13 = V_4;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEEB0E8570EA6768E2C0B2CA94F9ED53CA7FACABF)), L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// return null;
		V_3 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0078:
	{
		// }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = V_3;
		return L_16;
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
// Unity.Services.PushNotifications.PushNotificationSettings Unity.Services.PushNotifications.PushNotificationSettings::GetAssetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* PushNotificationSettings_GetAssetInstance_mFCF438B5C0F44DC2807B4E80391F82090BC4B1CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_mCCF4D0CBEBF5CB00331E7355961B2A32ECB1DCC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_m4C8950F56DAD72911D33D2D01B25EF80B02E421E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C3435123EE230FF28549A4BA5928100B8B4594);
		s_Il2CppMethodInitialized = true;
	}
	PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* V_0 = NULL;
	bool V_1 = false;
	PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* V_2 = NULL;
	{
		// PushNotificationSettings cfg = Resources.Load<PushNotificationSettings>(settingsAssetName);
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_0;
		L_0 = Resources_Load_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_mCCF4D0CBEBF5CB00331E7355961B2A32ECB1DCC5(_stringLiteral48C3435123EE230FF28549A4BA5928100B8B4594, Resources_Load_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_mCCF4D0CBEBF5CB00331E7355961B2A32ECB1DCC5_RuntimeMethod_var);
		V_0 = L_0;
		// if (cfg == null)
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// cfg = CreateInstance<PushNotificationSettings>();
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_4;
		L_4 = ScriptableObject_CreateInstance_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_m4C8950F56DAD72911D33D2D01B25EF80B02E421E(ScriptableObject_CreateInstance_TisPushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3_m4C8950F56DAD72911D33D2D01B25EF80B02E421E_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_001f:
	{
		// return cfg;
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_5 = V_0;
		V_2 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_6 = V_2;
		return L_6;
	}
}
// System.Void Unity.Services.PushNotifications.PushNotificationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationSettings__ctor_mB907934B11E93B760E799F4C89CA86B5D954EE94 (PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// Unity.Services.PushNotifications.IPushNotificationsService Unity.Services.PushNotifications.PushNotificationsService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PushNotificationsService_get_Instance_m00D578A14C07F3DA1C7D2215841BAE86F81A0A59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (internalInstance == null)
		PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* L_0 = ((PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_StaticFields*)il2cpp_codegen_static_fields_for(PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_il2cpp_TypeInfo_var))->___internalInstance_0;
		V_0 = (bool)((((RuntimeObject*)(PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new Exception("The SDK hasn't been initialised - please make sure you've called `await UnityServices.InitializeAsync()` before using the Push Notifications SDK.");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB211B38FC9F5640F96759325450FAD574F3A6477)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PushNotificationsService_get_Instance_m00D578A14C07F3DA1C7D2215841BAE86F81A0A59_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return internalInstance;
		PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* L_3 = ((PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_StaticFields*)il2cpp_codegen_static_fields_for(PushNotificationsService_tA3233ECA914A95E0D3E6ECCD9A5C577FD0097CB2_il2cpp_TypeInfo_var))->___internalInstance_0;
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
// System.Void Unity.Services.PushNotifications.PushNotificationsServiceInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsServiceInstance__ctor_m0B633AE4175BFE7E80B93AB7A096535029D959BD (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal PushNotificationsServiceInstance()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_AnalyticsPlatformWrapper = new PushNotificationsAnalyticsPlatformWrapper();
		PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* L_0 = (PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75*)il2cpp_codegen_object_new(PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PushNotificationsAnalyticsPlatformWrapper__ctor_mD5FEFFC5689DC468EA63874AA6FE35190D03F443(L_0, NULL);
		__this->___m_AnalyticsPlatformWrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnalyticsPlatformWrapper_0), (void*)L_0);
		// m_PushNotificationAnalyticsImpl = new PushNotificationAnalytics(new EventsWrapper(), m_AnalyticsPlatformWrapper);
		EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA* L_1 = (EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA*)il2cpp_codegen_object_new(EventsWrapper_t972BB2CA90BC455C5B3D6C2E4D0DC2C713C8D2FA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventsWrapper__ctor_mB95AC99E37A3911AA74166D7A9E811E20E47FC86(L_1, NULL);
		PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* L_2 = __this->___m_AnalyticsPlatformWrapper_0;
		PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_3 = (PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74*)il2cpp_codegen_object_new(PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PushNotificationAnalytics__ctor_m49FBC30B44C5A82E8038F55C39B185128DD04922(L_3, L_1, L_2, NULL);
		__this->___m_PushNotificationAnalyticsImpl_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PushNotificationAnalyticsImpl_1), (void*)L_3);
		// notificationReceivedHandler = new PushNotificationReceivedHandler(m_PushNotificationAnalyticsImpl, m_AnalyticsPlatformWrapper);
		PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_4 = __this->___m_PushNotificationAnalyticsImpl_1;
		PushNotificationsAnalyticsPlatformWrapper_t5D32695AAD179090981D6A69BDBB49DC255FBB75* L_5 = __this->___m_AnalyticsPlatformWrapper_0;
		PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* L_6 = (PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973*)il2cpp_codegen_object_new(PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PushNotificationReceivedHandler__ctor_m4A941E377273EC1F51E61F7808983DFE9B53B145(L_6, L_4, L_5, NULL);
		__this->___notificationReceivedHandler_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___notificationReceivedHandler_2), (void*)L_6);
		// m_AndroidPushNotifications = new AndroidPushNotifications(notificationReceivedHandler, m_PushNotificationAnalyticsImpl);
		PushNotificationReceivedHandler_tA593D288F8A25886C0D86CE220BED5CFE6269973* L_7 = __this->___notificationReceivedHandler_2;
		PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_8 = __this->___m_PushNotificationAnalyticsImpl_1;
		AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* L_9 = (AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C*)il2cpp_codegen_object_new(AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AndroidPushNotifications__ctor_m5698C2A48B793FE9C0B3BAE4A3080A1CC380600B(L_9, L_7, L_8, NULL);
		__this->___m_AndroidPushNotifications_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AndroidPushNotifications_3), (void*)L_9);
		// }
		return;
	}
}
// System.Void Unity.Services.PushNotifications.PushNotificationsServiceInstance::add_OnNotificationReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsServiceInstance_add_OnNotificationReceived_m46DA270DD8AD965A5A0603C8081CF83D3830E8B0 (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) 
{
	{
		// add => m_AndroidPushNotifications.InternalNotificationWasReceived += value;
		AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* L_0 = __this->___m_AndroidPushNotifications_3;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_1 = ___0_value;
		NullCheck(L_0);
		AndroidPushNotifications_add_InternalNotificationWasReceived_m75D9BC1E0A1C6714094E7B449CD1FE22F2014202(L_0, L_1, NULL);
		return;
	}
}
// System.Void Unity.Services.PushNotifications.PushNotificationsServiceInstance::remove_OnNotificationReceived(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushNotificationsServiceInstance_remove_OnNotificationReceived_m2763766512C3B4114B3F00A08CA5055984AED40A (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* ___0_value, const RuntimeMethod* method) 
{
	{
		// remove => m_AndroidPushNotifications.InternalNotificationWasReceived -= value;
		AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* L_0 = __this->___m_AndroidPushNotifications_3;
		Action_1_t62BC0E99742914ACEBB53334208F1929A63B489B* L_1 = ___0_value;
		NullCheck(L_0);
		AndroidPushNotifications_remove_InternalNotificationWasReceived_mE98CCEE5A830A5C0911541E340A6223330BCDEC8(L_0, L_1, NULL);
		return;
	}
}
// Unity.Services.PushNotifications.IPushNotificationsAnalytics Unity.Services.PushNotifications.PushNotificationsServiceInstance::get_Analytics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PushNotificationsServiceInstance_get_Analytics_m369B53BDD1F4911BDD9E565E72C6EA125E7DBCD9 (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, const RuntimeMethod* method) 
{
	{
		// public IPushNotificationsAnalytics Analytics => m_PushNotificationAnalyticsImpl;
		PushNotificationAnalytics_t5612FAE285A72A3ED6F7E58B4D8B3C30F73A4B74* L_0 = __this->___m_PushNotificationAnalyticsImpl_1;
		return L_0;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.PushNotifications.PushNotificationsServiceInstance::RegisterForPushNotificationsAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* PushNotificationsServiceInstance_RegisterForPushNotificationsAsync_m3A1074BCC7917C7C74ABA2A16BD3D3CDB216D9AD (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, const RuntimeMethod* method) 
{
	PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* V_0 = NULL;
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* V_1 = NULL;
	{
		// PushNotificationSettings settings = PushNotificationSettings.GetAssetInstance();
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_0;
		L_0 = PushNotificationSettings_GetAssetInstance_mFCF438B5C0F44DC2807B4E80391F82090BC4B1CC(NULL);
		V_0 = L_0;
		// return RegisterForPushNotificationsInternal(settings);
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_1 = V_0;
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_2;
		L_2 = PushNotificationsServiceInstance_RegisterForPushNotificationsInternal_m09C82679C72BD610A889EFA32ACA5C638B447325(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_3 = V_1;
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.PushNotifications.PushNotificationsServiceInstance::RegisterForPushNotificationsInternal(Unity.Services.PushNotifications.PushNotificationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* PushNotificationsServiceInstance_RegisterForPushNotificationsInternal_m09C82679C72BD610A889EFA32ACA5C638B447325 (PushNotificationsServiceInstance_tF6C08B4455CC54B7628F0C9D6C17B79EB331E38A* __this, PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* ___0_settings, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* V_1 = NULL;
	int32_t G_B5_0 = 0;
	{
		// if (string.IsNullOrEmpty(settings.firebaseWebApiKey) || string.IsNullOrEmpty(settings.firebaseAppID) || string.IsNullOrEmpty(settings.firebaseProjectNumber) || string.IsNullOrEmpty(settings.firebaseProjectID))
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_0 = ___0_settings;
		NullCheck(L_0);
		String_t* L_1 = L_0->___firebaseWebApiKey_9;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_3 = ___0_settings;
		NullCheck(L_3);
		String_t* L_4 = L_3->___firebaseAppID_11;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_6 = ___0_settings;
		NullCheck(L_6);
		String_t* L_7 = L_6->___firebaseProjectNumber_10;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_9 = ___0_settings;
		NullCheck(L_9);
		String_t* L_10 = L_9->___firebaseProjectID_12;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 1;
	}

IL_0036:
	{
		V_0 = (bool)G_B5_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		// throw new Exception("UGS Push Notifications is missing Android settings - make sure these are set in the editor Project Settings");
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1258264F63488353EED28A14F9DDCBE512AA2F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PushNotificationsServiceInstance_RegisterForPushNotificationsInternal_m09C82679C72BD610A889EFA32ACA5C638B447325_RuntimeMethod_var)));
	}

IL_0046:
	{
		// return m_AndroidPushNotifications.RegisterForPushNotificationsAsync(settings.firebaseWebApiKey, settings.firebaseProjectNumber, settings.firebaseAppID, settings.firebaseProjectID);
		AndroidPushNotifications_t49E45B4DB822E40B46D99A6CC7A172ED45F9880C* L_14 = __this->___m_AndroidPushNotifications_3;
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_15 = ___0_settings;
		NullCheck(L_15);
		String_t* L_16 = L_15->___firebaseWebApiKey_9;
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_17 = ___0_settings;
		NullCheck(L_17);
		String_t* L_18 = L_17->___firebaseProjectNumber_10;
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_19 = ___0_settings;
		NullCheck(L_19);
		String_t* L_20 = L_19->___firebaseAppID_11;
		PushNotificationSettings_t4237381A6ACB8FACA356562FC6C9E59D422476B3* L_21 = ___0_settings;
		NullCheck(L_21);
		String_t* L_22 = L_21->___firebaseProjectID_12;
		NullCheck(L_14);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_23;
		L_23 = AndroidPushNotifications_RegisterForPushNotificationsAsync_mAA8605438B140D6B3D6A34AD577808811F104645(L_14, L_16, L_18, L_20, L_22, NULL);
		V_1 = L_23;
		goto IL_006c;
	}

IL_006c:
	{
		// }
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_24 = V_1;
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* Event_get_Parameters_m2D666FFD0302986591540D7D06DDF5AB8A149FDC_inline (Event_tD9437278379F641EDEFC62CAAC9419E3E6E29779* __this, const RuntimeMethod* method) 
{
	{
		// public EventData Parameters { get; private set; }
		EventData_t2B2B196B233CC914CED6BF00E57F83F4F8917FD9* L_0 = __this->___U3CParametersU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
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
