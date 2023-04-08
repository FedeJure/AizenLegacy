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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
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
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9;
// System.Action`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182;
// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct KeyCollection_t4086C49B4C1F2946B8DBC4865F916CD48FD89EC8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct KeyCollection_t3D13752A4658CCDE00708745AB656C70E9C3C9BC;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.TaskFactory`1<Firebase.Auth.FirebaseUser>
struct TaskFactory_1_t7C8300A7F1C0B035B03E4868A6198B7D12FEA84F;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct ValueCollection_t8500C66C51989A40CD020FAF501F081D24021A24;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct ValueCollection_t9CB0ACF9154F201291AA613E4FFC3DE25BA69B24;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Auth.Future_User/Action>[]
struct EntryU5BU5D_t7885DEDA3A261DE989C321910CBD3A316B99A798;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.Auth.FirebaseAuth>[]
struct EntryU5BU5D_t7E823F775D4CCF50F69687D5BAA1B80E4E2E5511;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36;
// Firebase.Auth.Future_User
struct Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D;
// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1
struct U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051;
// Firebase.Auth.Future_User/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F;
// Firebase.Auth.Future_User/Action
struct Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C;
// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mFA48B358BD9B09CBF4EB6578D59B3F9C16B167E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mFDAF9A9CC24374B8CD161F5249847DD1AD3004D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2E0A935E599F11118B4620741CAFA61C7EB43F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8DE99D67967291A3EA1E9FC95A5D2C7628E8E910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6CA682461D2CF9256A108B618A7E89E731393F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEC5C75419C4794BBD2BDC871F63F20C180956259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0125750016304D2457B5851E166252BA80B34C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF7F504692CCBB0834A57249FFC09FFFD7709A5E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_GetAuthInternal_m55709A4143C7E2EC3108ACF3706A971567ECF5E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_IdTokenChangedFunction_mAA679E88457386BCDC9EAF2045CCE3CDA56C10DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_LogHeartbeatInternal_mB2A72926FD90F462F8B3399150BC51B9ACA27F0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_OnAppDisposed_m2E2A8B66F4B39F27E3CEE795B182F2D50EDC4E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ReleaseReferenceInternal_mC40BBDB8654D089090D0CD2FE6944B4C8CB07B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_SignInWithCredentialInternalAsync_mAA7A7978B4084AF60EBA28BEA1A50FA1EBE16FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_SignOut_m6334FED9987E29CCB5AAAF8AC50A894BFF8AF5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_StateChangedFunction_m00EA0FD26C6875CD5AE555412B07B2590F621561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ThrowIfNull_m75B5ACDD65C62406B8D55EBDD062B6A48795C065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_get_CurrentUserInternal_m056E7E027AFCF6EB9C63FBCF9001DD6503E545AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_GetResult_mCC89E0C0C618E82468F3ECAC3EB96894290B5A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_CompletionDispatcher_m4D8780428EE377272E731A6E9988328C64CFC82E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_FreeCompletionData_m8F3A20ADF11FB34B93D0E2A10E9E6DDB6C3574D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_OnCompletion_m4423B04C2D94704B96D6F9658E3A595B32281BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_ThrowIfDisposed_m63693BBFEEC103A351DEBA56ADE6E028547A46E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAuthProvider_GetCredential_m908C6090ED39CA7687DF6DC7878728729D137827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSourceCompat_1_SetException_mA8B5E5BD2B53FE86D96533E63D7F9409838A6A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__25_0_mD56E4FFCA8F83F4DA4DFAB740C7EDCB29DCA06D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStateChangedFunctionU3Eb__24_0_m25FE5EF7275A4E54EEAD23507A99E08D71CC9297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_1_U3CForwardStateChangeU3Eb__0_m95B57ED08D8D92E50775CFEDB0AE034745CC1E9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass49_0_U3CSignInWithCredentialAsyncU3Eb__0_mC153688E2D25613BA3B1DE9ACF7FAAC19D11A782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mC46419BB62CE470D6A5EF5177D88980F148CE5AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserInfoInterface_get_DisplayName_m7AC6606E65DF9883078C26DD521A83C4056475A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserInfoInterface_get_Email_m9AF15B59421B9A64E87AF6DEA14800F197F6E584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserInfoInterface_get_PhotoUrlInternal_m45B1F726CA9206F5731F137FD05A6F8D47C3EDD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserInfoInterface_get_UserId_m789311856DFE3585EB321D6CE4BFE55FBB222D6E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7C47F8C646DD002BCFED7D95CB522C10585F50D7 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7885DEDA3A261DE989C321910CBD3A316B99A798* ____entries_1;
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
	KeyCollection_t4086C49B4C1F2946B8DBC4865F916CD48FD89EC8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8500C66C51989A40CD020FAF501F081D24021A24* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7E823F775D4CCF50F69687D5BAA1B80E4E2E5511* ____entries_1;
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
	KeyCollection_t3D13752A4658CCDE00708745AB656C70E9C3C9BC* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9CB0ACF9154F201291AA613E4FFC3DE25BA69B24* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// Firebase.Auth.AuthUtil
struct AuthUtil_t8EE1E6800343A54D198ED93603284F34262CB222  : public RuntimeObject
{
};

// Firebase.Auth.AuthUtilPINVOKE
struct AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.Auth.GoogleAuthProvider
struct GoogleAuthProvider_t646272DD18929729FAEDA1A1F2CAD87CC5DB8D6E  : public RuntimeObject
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
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

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270  : public RuntimeObject
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A  : public RuntimeObject
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D  : public RuntimeObject
{
};

// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057  : public RuntimeObject
{
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_0;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0::app
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643  : public RuntimeObject
{
	// Firebase.InitResult Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::init_result
	int32_t ___init_result_0;
	// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0 Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* ___CSU24U3CU3E8__locals1_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426  : public RuntimeObject
{
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0::stateChangeClosure
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___stateChangeClosure_0;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1
struct U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_0;
	// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0 Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* ___CSU24U3CU3E8__locals1_1;
};

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::<>4__this
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::taskCompletionSource
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___taskCompletionSource_1;
};

// Firebase.Auth.Future_User/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F  : public RuntimeObject
{
	// Firebase.Auth.Future_User Firebase.Auth.Future_User/<>c__DisplayClass5_0::fu
	Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User/<>c__DisplayClass5_0::tcs
	TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___tcs_1;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.Credential::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2* ___appPlatform_14;
};

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;
};

// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED  : public Exception_t
{
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E  : public Exception_t
{
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_18;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9  : public MulticastDelegate_t
{
};

// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17  : public MulticastDelegate_t
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A  : public UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___authProxy_3;
};

// Firebase.Auth.Future_User
struct Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Future_User::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.Auth.Future_User::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Auth.Future_User/SWIG_CompletionDelegate Firebase.Auth.Future_User::SWIG_CompletionCB
	SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* ___SWIG_CompletionCB_7;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_User/Action
struct Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C  : public MulticastDelegate_t
{
};

// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78  : public MulticastDelegate_t
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1  : public MulticastDelegate_t
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A  : public MulticastDelegate_t
{
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Firebase.Auth.AuthUtil

// Firebase.Auth.AuthUtil

// Firebase.Auth.AuthUtilPINVOKE
struct AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields
{
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper Firebase.Auth.AuthUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* ___swigExceptionHelper_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper Firebase.Auth.AuthUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* ___swigStringHelper_1;
};

// Firebase.Auth.AuthUtilPINVOKE

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Firebase.Auth.GoogleAuthProvider

// Firebase.Auth.GoogleAuthProvider

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.Uri

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields
{
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___applicationDelegate_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___arithmeticDelegate_1;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___divideByZeroDelegate_2;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___indexOutOfRangeDelegate_3;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___invalidCastDelegate_4;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___invalidOperationDelegate_5;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___ioDelegate_6;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___nullReferenceDelegate_7;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___outOfMemoryDelegate_8;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___overflowDelegate_9;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___systemDelegate_10;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___argumentDelegate_11;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___argumentNullDelegate_12;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper

// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields
{
	// System.Int32 Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields
{
	// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields
{
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* ___stringDelegate_0;
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper

// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields
{
	// Firebase.Auth.FirebaseAuth/<>c Firebase.Auth.FirebaseAuth/<>c::<>9
	U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* ___U3CU3E9_0;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c::<>9__24_0
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___U3CU3E9__24_0_1;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c::<>9__25_0
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___U3CU3E9__25_0_2;
};

// Firebase.Auth.FirebaseAuth/<>c

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0

// Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0

// Firebase.Auth.Future_User/<>c__DisplayClass5_0

// Firebase.Auth.Future_User/<>c__DisplayClass5_0

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7C8300A7F1C0B035B03E4868A6198B7D12FEA84F* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// System.AggregateException

// System.AggregateException

// System.ApplicationException

// System.ApplicationException

// Firebase.Auth.Credential

// Firebase.Auth.Credential

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Boolean Firebase.FirebaseApp::userAgentRegistered
	bool ___userAgentRegistered_11;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_12;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_13;
};

// Firebase.FirebaseApp

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* ___appCPtrToAuth_10;
};

// Firebase.Auth.FirebaseAuth

// Firebase.FirebaseException

// Firebase.FirebaseException

// Firebase.FutureBase

// Firebase.FutureBase

// Firebase.InitializationException

// Firebase.InitializationException

// System.SystemException

// System.SystemException

// Firebase.Auth.UserInfoInterface

// Firebase.Auth.UserInfoInterface

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>

// System.Action`1<Firebase.Auth.FirebaseAuth>

// System.Action`1<Firebase.Auth.FirebaseAuth>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.EventHandler

// System.EventHandler

// Firebase.Auth.FirebaseUser

// Firebase.Auth.FirebaseUser

// Firebase.Auth.Future_User
struct Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action> Firebase.Auth.Future_User::Callbacks
	Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* ___Callbacks_3;
	// System.Int32 Firebase.Auth.Future_User::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Auth.Future_User::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.Auth.Future_User

// System.IO.IOException

// System.IO.IOException

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// System.OutOfMemoryException

// System.OutOfMemoryException

// Firebase.Auth.FirebaseAuth/StateChangedDelegate

// Firebase.Auth.FirebaseAuth/StateChangedDelegate

// Firebase.Auth.Future_User/Action

// Firebase.Auth.Future_User/Action

// Firebase.Auth.Future_User/SWIG_CompletionDelegate

// Firebase.Auth.Future_User/SWIG_CompletionDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.DivideByZeroException

// System.DivideByZeroException

// System.OverflowException

// System.OverflowException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m58C4BD8A0F4F1FAA417EC05E2EDC79F0D6C5ADB7_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m094D37FCDE8D0431163D8998A9000CA96CADBB45_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m1E6D9992EA0D24A89938F63C6D4A4DA425E56814_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Threading.Tasks.TaskCompletionSource`1<T>,System.AggregateException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSourceCompat_1_SetException_mD42345DF7671BF94C0C6F98FB8AFAC19160B8580_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* ___0_tcs, AggregateException_t51B6205846DFB356B94452702201DD239D44422F* ___1_exception, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;

// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_m4D8780428EE377272E731A6E9988328C64CFC82E (int32_t ___0_key, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIGUpcast_m8351BB3FFF59BBB0E79A615DE27479EE2D490B27 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m9B0F0C6E70D2635D44B671021F34588C0E995491 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_mDE5DCFBB612138DDA4A71F05AE25A3FC55385D53 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m249348EDFCD5F2A76A0C282F5F94481231B9D57A (U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9 (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Boolean Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m882B63921C8EAF5A22A08AFD6851BE6F4400A48C (const RuntimeMethod* method) ;
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835 (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m58C4BD8A0F4F1FAA417EC05E2EDC79F0D6C5ADB7_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, ___0_exception, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::get_Task()
inline Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_inline (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*)il2cppRetVal;
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_errorCode, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m36EB2EEF5DEC591F7A825B3DDEBE00060E132492 (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_mE74D483740D50328FEED02B74BC8C4D36B072844 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* ___0_userCompletionCallback, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m63693BBFEEC103A351DEBA56ADE6E028547A46E6 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m230CBDCDB23532B178FCCEEFF97D4CB2B9402FD3 (SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::.ctor()
inline void Dictionary_2__ctor_mEC5C75419C4794BBD2BDC871F63F20C180956259 (Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m0125750016304D2457B5851E166252BA80B34C2A (Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* __this, int32_t ___0_key, Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m4423B04C2D94704B96D6F9658E3A595B32281BE6 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m8F3A20ADF11FB34B93D0E2A10E9E6DDB6C3574D5 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8DE99D67967291A3EA1E9FC95A5D2C7628E8E910 (Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* __this, int32_t ___0_key, Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::Remove(TKey)
inline bool Dictionary_2_Remove_mFA48B358BD9B09CBF4EB6578D59B3F9C16B167E4 (Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_inline (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_m296C5844E099430387E2F721F1D6A24FD54AF941 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_mCC85615B9EA0C81F14B6931EFEE22EE54688779A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_GetResult_m0C533833AEE8C39D03639B1C4E7118AF22C643F4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_mD6A2E9077DE9A427BA26ACE7091EE8C4936EE809 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m094D37FCDE8D0431163D8998A9000CA96CADBB45_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Future_User_GetResult_mCC89E0C0C618E82468F3ECAC3EB96894290B5A2B (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* __this, FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Credential::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_m45A76A45D0F3A85A3DBC050A08FB0055DD38C7B3 (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Credential_m9BBFD0335963236DDC1ACD3F4F34C50A395083E7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_mC8B6DCC4B1E24F42B676EA58E1AD2EBCDF2967CE (const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::GoogleAuthProvider_GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_GoogleAuthProvider_GetCredential_m98D471DEBF8A1C50200D407F52FF1C73AA74CA95 (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Credential::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential__ctor_m4A17C65E57E8B4CAA8F25248AA8E645B71F32B02 (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserInfoInterface(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserInfoInterface_m8D0C46DE47E822CA27457B7AFA84FA550F6EE486 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Auth.UserInfoInterface::get_PhotoUrlInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserInfoInterface_get_PhotoUrlInternal_m45B1F726CA9206F5731F137FD05A6F8D47C3EDD1 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) ;
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* FirebaseApp_UrlStringToUri_mD212E37D37B2F0DE5EE30CDAAB0E95E5E87B4F79 (String_t* ___0_urlString, const RuntimeMethod* method) ;
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_UserId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_UserId_get_m3428D7A0C57C6481EF6FB0491DA97F045CEE7C75 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_Email_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_Email_get_mD6EBAEDF0B1F5DC104D5781431ABF89C648A9219 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_DisplayName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_DisplayName_get_m41D43B4B54197A1A095B371CD9B9F19F873A689E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_PhotoUrlInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_PhotoUrlInternal_get_mB065ADB3EA4D4B1EFC997C0C1BFB5F6096A49407 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_SWIGUpcast_m7CAB9D14AEA69B1F0AEBC88EBC4CA0BA90CABB46 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.UserInfoInterface::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface__ctor_mBC0F4C86070AE545C35D518F3CAD3860D9BB73BC (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseUser_m49FDDF59500F3E43F730B2043E1C95332F6F81DD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_m5FB1ACA215115E1BFC233C59D2C1B91B7848F3B0 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m00EA0FD26C6875CD5AE555412B07B2590F621561 (intptr_t ___0_appCPtr, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_mAA679E88457386BCDC9EAF2045CCE3CDA56C10DA (intptr_t ___0_appCPtr, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m39057F702EDFCD2736F1930BEC6AE16C2383A32F (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_m91A20FEFCF1EF71AC451CDF5E24AF3296C3CC4AA (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2E0A935E599F11118B4620741CAFA61C7EB43F41 (Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* __this, intptr_t ___0_key, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m5BA94BEA2582743E481859C1F4376480C97E43C0 (U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1__ctor_mF8D8387CF1928604864B73AD3B866729F15CEC7C (U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_obj, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_ProxyFromAppCPtr_mD5C867BF65F336BCB8A7F513BD9D476DA2821961 (intptr_t ___0_appCPtr, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::LogHeartbeatInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_LogHeartbeatInternal_mB2A72926FD90F462F8B3399150BC51B9ACA27F0A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_closureToExecute, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_m971B96650420F9DD96060A076F8D39527962C42F (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_state_changed_delegate, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_state_changed_delegate, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF7F504692CCBB0834A57249FFC09FFFD7709A5E7 (Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* __this, intptr_t ___0_key, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_mB18CAF1EFC8848B2E9372C18B7E3A322E28B6E2B (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::Remove(TKey)
inline bool Dictionary_2_Remove_mFDAF9A9CC24374B8CD161F5249847DD1AD3004D0 (Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* __this, intptr_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.UserInfoInterface::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_m10151E5E08983ADB015CF780456F34722AC3E998 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, intptr_t ___1_listener, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, intptr_t ___1_listener, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_mC40BBDB8654D089090D0CD2FE6944B4C8CB07B4E (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_instance, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m9976BF776BAC98193D01D29B902FB24CFE64AEC2 (U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_1__ctor_mF48D1CFC3A407C0177EA4DD27B47C71EE7B9122E (U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* __this, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCEFE148B5861F0552A70B8F2B958AF20DB3B04BA (Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m9898EE4EC1826FA343E715A8C4EA25281C6D7759 (intptr_t ___0_appCPtr, Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___1_stateChangeClosure, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseUser_getCPtr_m7E40369A31F1A725E399F01966A02CAABF32A869 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___0_obj, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUserInternal_m056E7E027AFCF6EB9C63FBCF9001DD6503E545AC (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_UpdateCurrentUser_m8C0906D45788F454E7E19A8C929FEBA42792A06B (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___0_proxy, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m41D9546731C9E5DBA791D6B2355E5363C7FBF20A (U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_m75B5ACDD65C62406B8D55EBDD062B6A48795C065 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialInternalAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithCredentialInternalAsync_mAA7A7978B4084AF60EBA28BEA1A50FA1EBE16FC6 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___0_credential, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007 (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38 (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182*, const RuntimeMethod*))Task_1_ContinueWith_m1E6D9992EA0D24A89938F63C6D4A4DA425E56814_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, (Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182*)___0_continuationAction, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<Firebase.Auth.FirebaseUser>::SetException(System.Threading.Tasks.TaskCompletionSource`1<T>,System.AggregateException)
inline void TaskCompletionSourceCompat_1_SetException_mA8B5E5BD2B53FE86D96533E63D7F9409838A6A66 (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___0_tcs, AggregateException_t51B6205846DFB356B94452702201DD239D44422F* ___1_exception, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, AggregateException_t51B6205846DFB356B94452702201DD239D44422F*, const RuntimeMethod*))TaskCompletionSourceCompat_1_SetException_mD42345DF7671BF94C0C6F98FB8AFAC19160B8580_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)___0_tcs, ___1_exception, method);
}
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, const RuntimeMethod* method)
{
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* il2cppRetVal;
	((  void (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::getCPtr(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Credential_getCPtr_m8E7872F98919E36F7A67DF50D27AE2B890D38CC1 (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredentialInternal(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_m3BA64866D0A1958123C6A0FEC1B77BEE1A2D6358 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m4921804BE72053DD67804F59F83DBDC31CC33B59 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* Future_User_GetTask_m6F04A551DD05AC7F83B046814B211FD1F94BE732 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* ___0_fu, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignOut(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_SignOut_m2A10F7589BABECFD819E06E4DD8BADD83D8512E0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m3E83970E2674AEC5DDD01FD9818845156FE134AB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_mEC6DE61B81F05CB9FDE8A906A83F0E5F1399613C (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_LogHeartbeatInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_LogHeartbeatInternal_m66F0D6932BA24BBFF5FB02522D1F901C1AA87D1D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_obj, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mFED7F33D46743757B5DE19BF3D91C701F5671876 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_mB1ED6160407E8C4982746296099A9B1DE21D5DAC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::.ctor()
inline void Dictionary_2__ctor_m6CA682461D2CF9256A108B618A7E89E731393F65 (Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_GetAuthInternal_m55709A4143C7E2EC3108ACF3706A971567ECF5E4 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, int32_t* ___1_init_result_out, const RuntimeMethod* method) ;
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m68E3C1F4B8BE16E94441B47A815203360CC4E47D (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___0_result, const RuntimeMethod* method) ;
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::Invoke(T)
inline void Action_1_Invoke_m1E7F3EF0DE14DA642C9C76E520CCF3422001A3B0_inline (Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* __this, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD414BD20F66C697B495DF5E566C07B0F4B7804D (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___1_taskCompletionSource, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m6709B95358A2A3B65272194E10E6AFD106926A1C (SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mC8327633A09D4DD655AA5FEA5A2A7BF7C841430E (SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m5A0AC467CB894DA14A8D5FC72E1C4C0923C12E61 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___0_applicationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___1_arithmeticDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___2_divideByZeroDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___4_invalidCastDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___5_invalidOperationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___6_ioDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___7_nullReferenceDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___8_outOfMemoryDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___9_overflowDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAD9B1407D55B00A38D10D3CE2B615942F9BDDF0B (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___0_argumentDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3 (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m39AE1969D572DCB5A0266DC4EAE96243DFFEDE6D (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_mF1E51D0E5816C991DC9BD57E0668EEDCF81CA902 (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* ___0_stringDelegate, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_m0A51BCF7288AC201F2774CB5506D5F5DEFFD2682 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m79297782C9683325F91FB03C0577B3B02664EC31 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_m38F412B973371F0CFF8D891D71C97CE99022FDC5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_mACBDFF676A4BC45B7951C31647CFBDCED08D1B4D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_User(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Credential(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential(char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_UserInfoInterface(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_UserId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_Email_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_DisplayName_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_UserInfoInterface_PhotoUrlInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FirebaseUser(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignOut(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateAuthStateListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyAuthStateListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateIdTokenListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyIdTokenListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AuthUtil(Il2CppMethodPointer);
#endif
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_User_SWIG_CompletionDispatcher_m4D8780428EE377272E731A6E9988328C64CFC82E(int32_t ___0_key)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_User_SWIG_CompletionDispatcher_m4D8780428EE377272E731A6E9988328C64CFC82E(___0_key, NULL);

}
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m4921804BE72053DD67804F59F83DBDC31CC33B59 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___callbackData_6 = L_0;
		__this->___SWIG_CompletionCB_7 = (SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78*)NULL);
		intptr_t L_1 = ___0_cPtr;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = AuthUtilPINVOKE_Future_User_SWIGUpcast_m8351BB3FFF59BBB0E79A615DE27479EE2D490B27(L_1, NULL);
		bool L_3 = ___1_cMemoryOwn;
		FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0(__this, L_2, L_3, NULL);
		intptr_t L_4 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5;
		memset((&L_5), 0, sizeof(L_5));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_5), __this, L_4, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_Dispose_m11787F5815D6E96F1210F52467F4E15D22E5D914 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0086;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0086:
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
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_2);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_006a_1;
				}
			}
			{
				intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				Future_User_SetCompletionData_m9B0F0C6E70D2635D44B671021F34588C0E995491(__this, L_9, NULL);
				bool L_10 = ((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1;
				V_3 = L_10;
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0058_1;
				}
			}
			{
				((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_12 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				AuthUtilPINVOKE_delete_Future_User_mDE5DCFBB612138DDA4A71F05AE25A3FC55385D53(L_12, NULL);
			}

IL_0058_1:
			{
				intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_14;
				memset((&L_14), 0, sizeof(L_14));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_14), NULL, L_13, /*hidden argument*/NULL);
				__this->___swigCPtr_2 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
			}

IL_006a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				bool L_15 = ___0_disposing;
				FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB(__this, L_15, NULL);
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* Future_User_GetTask_m6F04A551DD05AC7F83B046814B211FD1F94BE732 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* ___0_fu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mC46419BB62CE470D6A5EF5177D88980F148CE5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* V_0 = NULL;
	bool V_1 = false;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_0 = (U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m249348EDFCD5F2A76A0C282F5F94481231B9D57A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_1 = V_0;
		Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_2 = ___0_fu;
		NullCheck(L_1);
		L_1->___fu_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fu_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_3 = V_0;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_4 = (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7*)il2cpp_codegen_object_new(TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9(L_4, TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___tcs_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___tcs_1), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m882B63921C8EAF5A22A08AFD6851BE6F4400A48C(NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_8 = L_7->___tcs_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835(L_8, L_9, TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_11 = L_10->___tcs_1;
		NullCheck(L_11);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_12;
		L_12 = TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_inline(L_11, TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_00a0;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_13 = V_0;
		NullCheck(L_13);
		Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_14 = L_13->___fu_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_14, NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_17 = V_0;
		NullCheck(L_17);
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_18 = L_17->___tcs_1;
		FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_19 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_19, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, NULL);
		NullCheck(L_18);
		TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835(L_18, L_19, TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_20 = V_0;
		NullCheck(L_20);
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_21 = L_20->___tcs_1;
		NullCheck(L_21);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_22;
		L_22 = TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_inline(L_21, TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_00a0;
	}

IL_007a:
	{
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_23 = V_0;
		NullCheck(L_23);
		Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_24 = L_23->___fu_0;
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_25 = V_0;
		Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* L_26 = (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C*)il2cpp_codegen_object_new(Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action__ctor_m36EB2EEF5DEC591F7A825B3DDEBE00060E132492(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mC46419BB62CE470D6A5EF5177D88980F148CE5AB_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		Future_User_SetOnCompletionCallback_mE74D483740D50328FEED02B74BC8C4D36B072844(L_24, L_26, NULL);
		U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* L_27 = V_0;
		NullCheck(L_27);
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_28 = L_27->___tcs_1;
		NullCheck(L_28);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_29;
		L_29 = TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_inline(L_28, TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_RuntimeMethod_var);
		V_2 = L_29;
		goto IL_00a0;
	}

IL_00a0:
	{
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_30 = V_2;
		return L_30;
	}
}
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m63693BBFEEC103A351DEBA56ADE6E028547A46E6 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_2);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_ThrowIfDisposed_m63693BBFEEC103A351DEBA56ADE6E028547A46E6_RuntimeMethod_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_mE74D483740D50328FEED02B74BC8C4D36B072844 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* ___0_userCompletionCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEC5C75419C4794BBD2BDC871F63F20C180956259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0125750016304D2457B5851E166252BA80B34C2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_SWIG_CompletionDispatcher_m4D8780428EE377272E731A6E9988328C64CFC82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Future_User_ThrowIfDisposed_m63693BBFEEC103A351DEBA56ADE6E028547A46E6(__this, NULL);
		SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* L_0 = __this->___SWIG_CompletionCB_7;
		V_1 = (bool)((((RuntimeObject*)(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* L_2 = (SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78*)il2cpp_codegen_object_new(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SWIG_CompletionDelegate__ctor_m230CBDCDB23532B178FCCEEFF97D4CB2B9402FD3(L_2, NULL, (intptr_t)((void*)Future_User_SWIG_CompletionDispatcher_m4D8780428EE377272E731A6E9988328C64CFC82E_RuntimeMethod_var), NULL);
		__this->___SWIG_CompletionCB_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)L_2);
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_2 = L_3;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_3;
					if (!L_4)
					{
						goto IL_007d;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_007d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_3), NULL);
				il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
				Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* L_7 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___Callbacks_3;
				V_4 = (bool)((((RuntimeObject*)(Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0055_1;
				}
			}
			{
				Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* L_9 = (Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732*)il2cpp_codegen_object_new(Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				Dictionary_2__ctor_mEC5C75419C4794BBD2BDC871F63F20C180956259(L_9, Dictionary_2__ctor_mEC5C75419C4794BBD2BDC871F63F20C180956259_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
				((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___Callbacks_3 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___Callbacks_3), (void*)L_9);
			}

IL_0055_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
				int32_t L_10 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___CallbackIndex_4;
				int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___CallbackIndex_4 = L_11;
				V_0 = L_11;
				Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* L_12 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_13 = V_0;
				Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* L_14 = ___0_userCompletionCallback;
				NullCheck(L_12);
				Dictionary_2_set_Item_m0125750016304D2457B5851E166252BA80B34C2A(L_12, L_13, L_14, Dictionary_2_set_Item_m0125750016304D2457B5851E166252BA80B34C2A_RuntimeMethod_var);
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* L_15 = __this->___SWIG_CompletionCB_7;
		int32_t L_16 = V_0;
		intptr_t L_17;
		L_17 = Future_User_SWIG_OnCompletion_m4423B04C2D94704B96D6F9658E3A595B32281BE6(__this, L_15, L_16, NULL);
		Future_User_SetCompletionData_m9B0F0C6E70D2635D44B671021F34588C0E995491(__this, L_17, NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m9B0F0C6E70D2635D44B671021F34588C0E995491 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	{
		Future_User_ThrowIfDisposed_m63693BBFEEC103A351DEBA56ADE6E028547A46E6(__this, NULL);
		intptr_t L_0 = __this->___callbackData_6;
		Future_User_SWIG_FreeCompletionData_m8F3A20ADF11FB34B93D0E2A10E9E6DDB6C3574D5(__this, L_0, NULL);
		intptr_t L_1 = ___0_data;
		__this->___callbackData_6 = L_1;
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_m4D8780428EE377272E731A6E9988328C64CFC82E (int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mFA48B358BD9B09CBF4EB6578D59B3F9C16B167E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8DE99D67967291A3EA1E9FC95A5D2C7628E8E910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C*)NULL;
		il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_004b;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
				Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* L_4 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___Callbacks_3;
				if (!L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
				Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* L_5 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_6 = ___0_key;
				NullCheck(L_5);
				bool L_7;
				L_7 = Dictionary_2_TryGetValue_m8DE99D67967291A3EA1E9FC95A5D2C7628E8E910(L_5, L_6, (&V_0), Dictionary_2_TryGetValue_m8DE99D67967291A3EA1E9FC95A5D2C7628E8E910_RuntimeMethod_var);
				G_B4_0 = ((int32_t)(L_7));
				goto IL_002c_1;
			}

IL_002b_1:
			{
				G_B4_0 = 0;
			}

IL_002c_1:
			{
				V_3 = (bool)G_B4_0;
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_003e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
				Dictionary_2_t105F85A15BF9481F3725B84078FC8A7B5DDC3732* L_9 = ((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_10 = ___0_key;
				NullCheck(L_9);
				bool L_11;
				L_11 = Dictionary_2_Remove_mFA48B358BD9B09CBF4EB6578D59B3F9C16B167E4(L_9, L_10, Dictionary_2_Remove_mFA48B358BD9B09CBF4EB6578D59B3F9C16B167E4_RuntimeMethod_var);
			}

IL_003e_1:
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* L_12 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* L_14 = V_0;
		NullCheck(L_14);
		Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_inline(L_14, NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m4423B04C2D94704B96D6F9658E3A595B32281BE6 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* L_1 = ___0_cs_callback;
		int32_t L_2 = ___1_cs_key;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_m296C5844E099430387E2F721F1D6A24FD54AF941(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_SWIG_OnCompletion_m4423B04C2D94704B96D6F9658E3A595B32281BE6_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		intptr_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m8F3A20ADF11FB34B93D0E2A10E9E6DDB6C3574D5 (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		intptr_t L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_mCC85615B9EA0C81F14B6931EFEE22EE54688779A(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_SWIG_FreeCompletionData_m8F3A20ADF11FB34B93D0E2A10E9E6DDB6C3574D5_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Future_User_GetResult_mCC89E0C0C618E82468F3ECAC3EB96894290B5A2B (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_1 = NULL;
	bool V_2 = false;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_3 = NULL;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_Future_User_GetResult_m0C533833AEE8C39D03639B1C4E7118AF22C643F4(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_5 = V_0;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_6 = (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)il2cpp_codegen_object_new(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FirebaseUser__ctor_mD6A2E9077DE9A427BA26ACE7091EE8C4936EE809(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_GetResult_mCC89E0C0C618E82468F3ECAC3EB96894290B5A2B_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11 = V_3;
		return L_11;
	}
}
// System.Void Firebase.Auth.Future_User::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__cctor_m272E15A5111BCD75464C3C58B28A736273E51D2E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___CallbackIndex_4 = 0;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___CallbackLock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var))->___CallbackLock_5), (void*)L_0);
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
void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_Multicast(Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* currentDelegate = reinterpret_cast<Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_OpenInst(Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_OpenStatic(Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_OpenStaticInvoker(Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_ClosedStaticInvoker(Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m36EB2EEF5DEC591F7A825B3DDEBE00060E132492 (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_Multicast;
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_Multicast(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* currentDelegate = reinterpret_cast<SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_OpenInst(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_OpenStatic(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_OpenStaticInvoker(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_index);
}
void SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_ClosedStaticInvoker(SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_index);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78 (SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_index);

}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m230CBDCDB23532B178FCCEEFF97D4CB2B9402FD3 (SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF_Multicast;
}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m2B9306AF3FF81D93F90BB7460F660398C0BC0EFF (SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.Future_User/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m249348EDFCD5F2A76A0C282F5F94481231B9D57A (U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User/<>c__DisplayClass5_0::<GetTask>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mC46419BB62CE470D6A5EF5177D88980F148CE5AB (U3CU3Ec__DisplayClass5_0_tF18E120CCE6DF944BADA0613281D1B8558FDBB3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_0 = __this->___fu_0;
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_0, NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024_1;
			}
		}
		{
			TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_3 = __this->___tcs_1;
			NullCheck(L_3);
			TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC(L_3, TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var);
			goto IL_0074_1;
		}

IL_0024_1:
		{
			Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_4 = __this->___fu_0;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030(L_4, NULL);
			V_1 = L_5;
			int32_t L_6 = V_1;
			V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_005a_1;
			}
		}
		{
			TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_8 = __this->___tcs_1;
			int32_t L_9 = V_1;
			Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_10 = __this->___fu_0;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527(L_10, NULL);
			FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_12 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_12, L_9, L_11, NULL);
			NullCheck(L_8);
			TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835(L_8, L_12, TaskCompletionSource_1_SetException_m9E418F55F0F0FF8C793BB1BCAC6A5F84D29F8835_RuntimeMethod_var);
			goto IL_0073_1;
		}

IL_005a_1:
		{
			TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_13 = __this->___tcs_1;
			Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_14 = __this->___fu_0;
			NullCheck(L_14);
			FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_15;
			L_15 = Future_User_GetResult_mCC89E0C0C618E82468F3ECAC3EB96894290B5A2B(L_14, NULL);
			NullCheck(L_13);
			TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C(L_13, L_15, TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C_RuntimeMethod_var);
		}

IL_0073_1:
		{
		}

IL_0074_1:
		{
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_16 = V_3;
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(4, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	}// end catch (depth: 1)

IL_008e:
	{
		Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_18 = __this->___fu_0;
		NullCheck(L_18);
		FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E(L_18, NULL);
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
// System.Void Firebase.Auth.Credential::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential__ctor_m4A17C65E57E8B4CAA8F25248AA8E645B71F32B02 (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::getCPtr(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Credential_getCPtr_m8E7872F98919E36F7A67DF50D27AE2B890D38CC1 (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Auth.Credential::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Finalize_mF29D83866FC90FBD5CF9D6932E5497A8AD475F69 (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Credential_Dispose_m45A76A45D0F3A85A3DBC050A08FB0055DD38C7B3(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.Credential::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_m442C8D4C0921BAB54013A17D1BBC9D4A340398BC (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Credential_Dispose_m45A76A45D0F3A85A3DBC050A08FB0055DD38C7B3(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.Credential::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_m45A76A45D0F3A85A3DBC050A08FB0055DD38C7B3 (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
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
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				AuthUtilPINVOKE_delete_Credential_m9BBFD0335963236DDC1ACD3F4F34C50A395083E7(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
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
// System.Void Firebase.Auth.GoogleAuthProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthProvider__cctor_mADD148E7CEA017F1ABEDCC47DB0D4459DC707338 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_InitializeLogging_mC8B6DCC4B1E24F42B676EA58E1AD2EBCDF2967CE(NULL);
		return;
	}
}
// Firebase.Auth.Credential Firebase.Auth.GoogleAuthProvider::GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* GoogleAuthProvider_GetCredential_m908C6090ED39CA7687DF6DC7878728729D137827 (String_t* ___0_idToken, String_t* ___1_accessToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* V_0 = NULL;
	bool V_1 = false;
	Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* V_2 = NULL;
	{
		String_t* L_0 = ___0_idToken;
		String_t* L_1 = ___1_accessToken;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = AuthUtilPINVOKE_GoogleAuthProvider_GetCredential_m98D471DEBF8A1C50200D407F52FF1C73AA74CA95(L_0, L_1, NULL);
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_3 = (Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1*)il2cpp_codegen_object_new(Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Credential__ctor_m4A17C65E57E8B4CAA8F25248AA8E645B71F32B02(L_3, L_2, (bool)1, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GoogleAuthProvider_GetCredential_m908C6090ED39CA7687DF6DC7878728729D137827_RuntimeMethod_var)));
	}

IL_001e:
	{
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_7 = V_0;
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_8 = V_2;
		return L_8;
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
// System.Void Firebase.Auth.UserInfoInterface::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface__ctor_mBC0F4C86070AE545C35D518F3CAD3860D9BB73BC (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Auth.UserInfoInterface::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Finalize_m06B83086DFE672E40B822A8056292229C09A4721 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(9 /* System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.UserInfoInterface::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_m10151E5E08983ADB015CF780456F34722AC3E998 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_m5FB1ACA215115E1BFC233C59D2C1B91B7848F3B0 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
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
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				AuthUtilPINVOKE_delete_UserInfoInterface_m8D0C46DE47E822CA27457B7AFA84FA550F6EE486(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// System.Uri Firebase.Auth.UserInfoInterface::get_PhotoUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* UserInfoInterface_get_PhotoUrl_mCE42C8EEF130C3C91C8E54E62FF42295D838A0EE (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = UserInfoInterface_get_PhotoUrlInternal_m45B1F726CA9206F5731F137FD05A6F8D47C3EDD1(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = FirebaseApp_UrlStringToUri_mD212E37D37B2F0DE5EE30CDAAB0E95E5E87B4F79(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = V_0;
		return L_2;
	}
}
// System.String Firebase.Auth.UserInfoInterface::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserInfoInterface_get_UserId_m789311856DFE3585EB321D6CE4BFE55FBB222D6E (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AuthUtilPINVOKE_UserInfoInterface_UserId_get_m3428D7A0C57C6481EF6FB0491DA97F045CEE7C75(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserInfoInterface_get_UserId_m789311856DFE3585EB321D6CE4BFE55FBB222D6E_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.Auth.UserInfoInterface::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserInfoInterface_get_Email_m9AF15B59421B9A64E87AF6DEA14800F197F6E584 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AuthUtilPINVOKE_UserInfoInterface_Email_get_mD6EBAEDF0B1F5DC104D5781431ABF89C648A9219(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserInfoInterface_get_Email_m9AF15B59421B9A64E87AF6DEA14800F197F6E584_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.Auth.UserInfoInterface::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserInfoInterface_get_DisplayName_m7AC6606E65DF9883078C26DD521A83C4056475A8 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AuthUtilPINVOKE_UserInfoInterface_DisplayName_get_m41D43B4B54197A1A095B371CD9B9F19F873A689E(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserInfoInterface_get_DisplayName_m7AC6606E65DF9883078C26DD521A83C4056475A8_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.Auth.UserInfoInterface::get_PhotoUrlInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserInfoInterface_get_PhotoUrlInternal_m45B1F726CA9206F5731F137FD05A6F8D47C3EDD1 (UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AuthUtilPINVOKE_UserInfoInterface_PhotoUrlInternal_get_mB065ADB3EA4D4B1EFC997C0C1BFB5F6096A49407(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UserInfoInterface_get_PhotoUrlInternal_m45B1F726CA9206F5731F137FD05A6F8D47C3EDD1_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
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
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_mD6A2E9077DE9A427BA26ACE7091EE8C4936EE809 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_cPtr;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_FirebaseUser_SWIGUpcast_m7CAB9D14AEA69B1F0AEBC88EBC4CA0BA90CABB46(L_0, NULL);
		bool L_2 = ___1_cMemoryOwn;
		UserInfoInterface__ctor_mBC0F4C86070AE545C35D518F3CAD3860D9BB73BC(__this, L_1, L_2, NULL);
		intptr_t L_3 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseUser_getCPtr_m7E40369A31F1A725E399F01966A02CAABF32A869 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_2;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Auth.FirebaseUser::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_m3C1EFF971DD161419D47F0961320F5C2D22EED4A (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
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
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_2);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = ((UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062*)__this)->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				((UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				AuthUtilPINVOKE_delete_FirebaseUser_m49FDDF59500F3E43F730B2043E1C95332F6F81DD(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_2 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				bool L_14 = ___0_disposing;
				UserInfoInterface_Dispose_m5FB1ACA215115E1BFC233C59D2C1B91B7848F3B0(__this, L_14, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_StateChangedFunction_m00EA0FD26C6875CD5AE555412B07B2590F621561(intptr_t ___0_appCPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_StateChangedFunction_m00EA0FD26C6875CD5AE555412B07B2590F621561(___0_appCPtr, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_IdTokenChangedFunction_mAA679E88457386BCDC9EAF2045CCE3CDA56C10DA(intptr_t ___0_appCPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_IdTokenChangedFunction_mAA679E88457386BCDC9EAF2045CCE3CDA56C10DA(___0_appCPtr, NULL);

}
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_mEC6DE61B81F05CB9FDE8A906A83F0E5F1399613C (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	{
		__this->___persistentLoaded_9 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___1_cMemoryOwn;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_1 = ___0_obj;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Finalize_m014CBC2FDA405956BD72DEAE698953B3DC2C4F92 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			FirebaseAuth_Dispose_m39057F702EDFCD2736F1930BEC6AE16C2383A32F(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_mB18CAF1EFC8848B2E9372C18B7E3A322E28B6E2B (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_Dispose_m39057F702EDFCD2736F1930BEC6AE16C2383A32F(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m39057F702EDFCD2736F1930BEC6AE16C2383A32F (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_DisposeInternal_m91A20FEFCF1EF71AC451CDF5E24AF3296C3CC4AA(__this, NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_ProxyFromAppCPtr_mD5C867BF65F336BCB8A7F513BD9D476DA2821961 (intptr_t ___0_appCPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2E0A935E599F11118B4620741CAFA61C7EB43F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* V_0 = NULL;
	bool V_1 = false;
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* V_2 = NULL;
	bool V_3 = false;
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* V_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_0 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0037;
					}
				}
				{
					Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
				Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_4 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
				intptr_t L_5 = ___0_appCPtr;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_m2E0A935E599F11118B4620741CAFA61C7EB43F41(L_4, L_5, (&V_2), Dictionary_2_TryGetValue_m2E0A935E599F11118B4620741CAFA61C7EB43F41_RuntimeMethod_var);
				V_3 = L_6;
				bool L_7 = V_3;
				if (!L_7)
				{
					goto IL_002a_1;
				}
			}
			{
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_8 = V_2;
				V_4 = L_8;
				goto IL_003d;
			}

IL_002a_1:
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		V_4 = (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_9 = V_4;
		return L_9;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_m75B5ACDD65C62406B8D55EBDD062B6A48795C065 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_0);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_5 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_ThrowIfNull_m75B5ACDD65C62406B8D55EBDD062B6A48795C065_RuntimeMethod_var)));
	}

IL_0021:
	{
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_GetAuth_m87E0F1B3A6841C85AEDF8ED9C916360BA063C081 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF7F504692CCBB0834A57249FFC09FFFD7709A5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_IdTokenChangedFunction_mAA679E88457386BCDC9EAF2045CCE3CDA56C10DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_OnAppDisposed_m2E2A8B66F4B39F27E3CEE795B182F2D50EDC4E48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_StateChangedFunction_m00EA0FD26C6875CD5AE555412B07B2590F621561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* V_0 = NULL;
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* V_1 = NULL;
	bool V_2 = false;
	U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* V_7 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_0 = (U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_m5BA94BEA2582743E481859C1F4376480C97E43C0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_1 = V_0;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = ___0_app;
		NullCheck(L_1);
		L_1->___app_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___app_1), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_3 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_016b:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0175;
					}
				}
				{
					Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0175:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_6 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_7 = (U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				U3CU3Ec__DisplayClass20_1__ctor_mF8D8387CF1928604864B73AD3B866729F15CEC7C(L_7, NULL);
				V_3 = L_7;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_8 = V_3;
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_9 = V_0;
				NullCheck(L_8);
				L_8->___CSU24U3CU3E8__locals1_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&L_8->___CSU24U3CU3E8__locals1_1), (void*)L_9);
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_10 = V_3;
				NullCheck(L_10);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_11 = L_10->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_11);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_12 = L_11->___app_1;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				L_13 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_12, NULL);
				V_5 = L_13;
				intptr_t L_14;
				L_14 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_5), NULL);
				V_4 = L_14;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_15 = V_3;
				NullCheck(L_15);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_16 = L_15->___CSU24U3CU3E8__locals1_1;
				intptr_t L_17 = V_4;
				il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_18;
				L_18 = FirebaseAuth_ProxyFromAppCPtr_mD5C867BF65F336BCB8A7F513BD9D476DA2821961(L_17, NULL);
				NullCheck(L_16);
				L_16->___auth_0 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&L_16->___auth_0), (void*)L_18);
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_19 = V_3;
				NullCheck(L_19);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_20 = L_19->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_20);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_21 = L_20->___auth_0;
				V_6 = (bool)((!(((RuntimeObject*)(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_22 = V_6;
				if (!L_22)
				{
					goto IL_0092_1;
				}
			}
			{
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_23 = V_3;
				NullCheck(L_23);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_24 = L_23->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_24);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_25 = L_24->___app_1;
				il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
				FirebaseAuth_LogHeartbeatInternal_mB2A72926FD90F462F8B3399150BC51B9ACA27F0A(L_25, NULL);
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_26 = V_3;
				NullCheck(L_26);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_27 = L_26->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_27);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_28 = L_27->___auth_0;
				V_7 = L_28;
				goto IL_0180;
			}

IL_0092_1:
			{
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_29 = V_3;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF_RuntimeMethod_var), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				FirebaseApp_TranslateDllNotFoundException_m8A53BF93797E69E0A396E5D387C8BE2FAC5A887E(L_30, NULL);
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_31 = V_3;
				NullCheck(L_31);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_32 = L_31->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_32);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_33 = L_32->___auth_0;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_34 = V_3;
				NullCheck(L_34);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_35 = L_34->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_35);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_36 = L_35->___auth_0;
				StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* L_37 = (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051*)il2cpp_codegen_object_new(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051_il2cpp_TypeInfo_var);
				NullCheck(L_37);
				StateChangedDelegate__ctor_m971B96650420F9DD96060A076F8D39527962C42F(L_37, NULL, (intptr_t)((void*)FirebaseAuth_StateChangedFunction_m00EA0FD26C6875CD5AE555412B07B2590F621561_RuntimeMethod_var), NULL);
				intptr_t L_38;
				L_38 = AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6(L_36, L_37, NULL);
				NullCheck(L_33);
				L_33->___authStateListener_4 = L_38;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_39 = V_3;
				NullCheck(L_39);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_40 = L_39->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_40);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_41 = L_40->___auth_0;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_42 = V_3;
				NullCheck(L_42);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_43 = L_42->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_43);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_44 = L_43->___auth_0;
				StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* L_45 = (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051*)il2cpp_codegen_object_new(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051_il2cpp_TypeInfo_var);
				NullCheck(L_45);
				StateChangedDelegate__ctor_m971B96650420F9DD96060A076F8D39527962C42F(L_45, NULL, (intptr_t)((void*)FirebaseAuth_IdTokenChangedFunction_mAA679E88457386BCDC9EAF2045CCE3CDA56C10DA_RuntimeMethod_var), NULL);
				intptr_t L_46;
				L_46 = AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616(L_44, L_45, NULL);
				NullCheck(L_41);
				L_41->___idTokenListener_5 = L_46;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_47 = V_3;
				NullCheck(L_47);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_48 = L_47->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_48);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_49 = L_48->___auth_0;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_50 = V_3;
				NullCheck(L_50);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_51 = L_50->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_51);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_52 = L_51->___app_1;
				NullCheck(L_49);
				L_49->___appProxy_2 = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&L_49->___appProxy_2), (void*)L_52);
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_53 = V_3;
				NullCheck(L_53);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_54 = L_53->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_54);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_55 = L_54->___auth_0;
				intptr_t L_56 = V_4;
				NullCheck(L_55);
				L_55->___appCPtr_3 = L_56;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_57 = V_3;
				NullCheck(L_57);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_58 = L_57->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_58);
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_59 = L_58->___app_1;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_60 = V_3;
				NullCheck(L_60);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_61 = L_60->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_61);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_62 = L_61->___auth_0;
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_63 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
				NullCheck(L_63);
				EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_63, L_62, (intptr_t)((void*)FirebaseAuth_OnAppDisposed_m2E2A8B66F4B39F27E3CEE795B182F2D50EDC4E48_RuntimeMethod_var), NULL);
				NullCheck(L_59);
				FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85(L_59, L_63, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
				Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_64 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
				intptr_t L_65 = V_4;
				U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* L_66 = V_3;
				NullCheck(L_66);
				U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_67 = L_66->___CSU24U3CU3E8__locals1_1;
				NullCheck(L_67);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_68 = L_67->___auth_0;
				NullCheck(L_64);
				Dictionary_2_set_Item_mF7F504692CCBB0834A57249FFC09FFFD7709A5E7(L_64, L_65, L_68, Dictionary_2_set_Item_mF7F504692CCBB0834A57249FFC09FFFD7709A5E7_RuntimeMethod_var);
				goto IL_0176;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0176:
	{
		U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_69 = V_0;
		NullCheck(L_69);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_70 = L_69->___auth_0;
		V_7 = L_70;
		goto IL_0180;
	}

IL_0180:
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_71 = V_7;
		return L_71;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_OnAppDisposed_m2E2A8B66F4B39F27E3CEE795B182F2D50EDC4E48 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_eventArgs, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_Dispose_mB18CAF1EFC8848B2E9372C18B7E3A322E28B6E2B(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_m91A20FEFCF1EF71AC451CDF5E24AF3296C3CC4AA (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mFDAF9A9CC24374B8CD161F5249847DD1AD3004D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_OnAppDisposed_m2E2A8B66F4B39F27E3CEE795B182F2D50EDC4E48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_0 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0145;
					}
				}
				{
					Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0145:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				RuntimeObject* L_4 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
				V_2 = L_4;
				V_3 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_012d_1:
					{// begin finally (depth: 2)
						{
							bool L_5 = V_3;
							if (!L_5)
							{
								goto IL_0137_1;
							}
						}
						{
							RuntimeObject* L_6 = V_2;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
						}

IL_0137_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_7 = V_2;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_3), NULL);
						il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
						GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
						HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_8 = (&__this->___swigCPtr_0);
						intptr_t L_9;
						L_9 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_8, NULL);
						intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						bool L_11;
						L_11 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_9, L_10, NULL);
						V_4 = L_11;
						bool L_12 = V_4;
						if (!L_12)
						{
							goto IL_012a_2;
						}
					}
					{
						il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
						Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_13 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
						intptr_t L_14 = __this->___appCPtr_3;
						NullCheck(L_13);
						bool L_15;
						L_15 = Dictionary_2_Remove_mFDAF9A9CC24374B8CD161F5249847DD1AD3004D0(L_13, L_14, Dictionary_2_Remove_mFDAF9A9CC24374B8CD161F5249847DD1AD3004D0_RuntimeMethod_var);
						FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_16 = __this->___appProxy_2;
						EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_17 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
						NullCheck(L_17);
						EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_17, __this, (intptr_t)((void*)FirebaseAuth_OnAppDisposed_m2E2A8B66F4B39F27E3CEE795B182F2D50EDC4E48_RuntimeMethod_var), NULL);
						NullCheck(L_16);
						FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289(L_16, L_17, NULL);
						__this->___appProxy_2 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___appProxy_2), (void*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL);
						intptr_t L_18 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						__this->___appCPtr_3 = L_18;
						FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_19 = __this->___currentUser_6;
						V_5 = (bool)((!(((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_19) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
						bool L_20 = V_5;
						if (!L_20)
						{
							goto IL_00aa_2;
						}
					}
					{
						FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_21 = __this->___currentUser_6;
						NullCheck(L_21);
						UserInfoInterface_Dispose_m10151E5E08983ADB015CF780456F34722AC3E998(L_21, NULL);
						__this->___currentUser_6 = (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)NULL;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___currentUser_6), (void*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)NULL);
					}

IL_00aa_2:
					{
						intptr_t L_22 = __this->___authStateListener_4;
						intptr_t L_23 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						bool L_24;
						L_24 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_22, L_23, NULL);
						V_6 = L_24;
						bool L_25 = V_6;
						if (!L_25)
						{
							goto IL_00da_2;
						}
					}
					{
						intptr_t L_26 = __this->___authStateListener_4;
						AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83(__this, L_26, NULL);
						intptr_t L_27 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						__this->___authStateListener_4 = L_27;
					}

IL_00da_2:
					{
						intptr_t L_28 = __this->___idTokenListener_5;
						intptr_t L_29 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						bool L_30;
						L_30 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_28, L_29, NULL);
						V_7 = L_30;
						bool L_31 = V_7;
						if (!L_31)
						{
							goto IL_010a_2;
						}
					}
					{
						intptr_t L_32 = __this->___idTokenListener_5;
						AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504(__this, L_32, NULL);
						intptr_t L_33 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						__this->___idTokenListener_5 = L_33;
					}

IL_010a_2:
					{
						il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
						FirebaseAuth_ReleaseReferenceInternal_mC40BBDB8654D089090D0CD2FE6944B4C8CB07B4E(__this, NULL);
						__this->___swigCMemOwn_1 = (bool)0;
						intptr_t L_34 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_35;
						memset((&L_35), 0, sizeof(L_35));
						HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_35), NULL, L_34, /*hidden argument*/NULL);
						__this->___swigCPtr_0 = L_35;
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
					}

IL_012a_2:
					{
						goto IL_0138_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0138_1:
			{
				goto IL_0146;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0146:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m9898EE4EC1826FA343E715A8C4EA25281C6D7759 (intptr_t ___0_appCPtr, Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* ___1_stateChangeClosure, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_1_U3CForwardStateChangeU3Eb__0_m95B57ED08D8D92E50775CFEDB0AE034745CC1E9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* V_0 = NULL;
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* V_1 = NULL;
	bool V_2 = false;
	U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* V_3 = NULL;
	bool V_4 = false;
	{
		U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* L_0 = (U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass23_0__ctor_m9976BF776BAC98193D01D29B902FB24CFE64AEC2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* L_1 = V_0;
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_2 = ___1_stateChangeClosure;
		NullCheck(L_1);
		L_1->___stateChangeClosure_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___stateChangeClosure_0), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_3 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0067;
					}
				}
				{
					Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0067:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_6 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
				U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* L_7 = (U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				U3CU3Ec__DisplayClass23_1__ctor_mF48D1CFC3A407C0177EA4DD27B47C71EE7B9122E(L_7, NULL);
				V_3 = L_7;
				U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* L_8 = V_3;
				U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* L_9 = V_0;
				NullCheck(L_8);
				L_8->___CSU24U3CU3E8__locals1_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&L_8->___CSU24U3CU3E8__locals1_1), (void*)L_9);
				U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* L_10 = V_3;
				intptr_t L_11 = ___0_appCPtr;
				il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_12;
				L_12 = FirebaseAuth_ProxyFromAppCPtr_mD5C867BF65F336BCB8A7F513BD9D476DA2821961(L_11, NULL);
				NullCheck(L_10);
				L_10->___auth_0 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&L_10->___auth_0), (void*)L_12);
				U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* L_13 = V_3;
				NullCheck(L_13);
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_14 = L_13->___auth_0;
				V_4 = (bool)((!(((RuntimeObject*)(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_005a_1;
				}
			}
			{
				U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* L_16 = V_3;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass23_1_U3CForwardStateChangeU3Eb__0_m95B57ED08D8D92E50775CFEDB0AE034745CC1E9D_RuntimeMethod_var), NULL);
				il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
				ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_17, NULL);
			}

IL_005a_1:
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m00EA0FD26C6875CD5AE555412B07B2590F621561 (intptr_t ___0_appCPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStateChangedFunctionU3Eb__24_0_m25FE5EF7275A4E54EEAD23507A99E08D71CC9297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		intptr_t L_0 = ___0_appCPtr;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_1 = ((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1;
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* L_3 = ((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_4 = (Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17*)il2cpp_codegen_object_new(Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mCEFE148B5861F0552A70B8F2B958AF20DB3B04BA(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStateChangedFunctionU3Eb__24_0_m25FE5EF7275A4E54EEAD23507A99E08D71CC9297_RuntimeMethod_var), NULL);
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_5 = L_4;
		((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_ForwardStateChange_m9898EE4EC1826FA343E715A8C4EA25281C6D7759(G_B2_1, G_B2_0, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_mAA679E88457386BCDC9EAF2045CCE3CDA56C10DA (intptr_t ___0_appCPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__25_0_mD56E4FFCA8F83F4DA4DFAB740C7EDCB29DCA06D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		intptr_t L_0 = ___0_appCPtr;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_1 = ((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_2;
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* L_3 = ((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_4 = (Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17*)il2cpp_codegen_object_new(Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mCEFE148B5861F0552A70B8F2B958AF20DB3B04BA(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__25_0_mD56E4FFCA8F83F4DA4DFAB740C7EDCB29DCA06D3_RuntimeMethod_var), NULL);
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_5 = L_4;
		((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_ForwardStateChange_m9898EE4EC1826FA343E715A8C4EA25281C6D7759(G_B2_1, G_B2_0, NULL);
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_UpdateCurrentUser_m8C0906D45788F454E7E19A8C929FEBA42792A06B (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___0_proxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_7 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_0 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00ab;
					}
				}
				{
					Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00ab:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_4 = ___0_proxy;
				V_2 = (bool)((((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0026_1;
				}
			}
			{
				__this->___currentUser_6 = (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___currentUser_6), (void*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)NULL);
				goto IL_0083_1;
			}

IL_0026_1:
			{
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_6 = __this->___currentUser_6;
				V_3 = (bool)((((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_7 = V_3;
				if (!L_7)
				{
					goto IL_003e_1;
				}
			}
			{
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_8 = ___0_proxy;
				__this->___currentUser_6 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___currentUser_6), (void*)L_8);
				goto IL_0083_1;
			}

IL_003e_1:
			{
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_9 = __this->___currentUser_6;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
				L_10 = FirebaseUser_getCPtr_m7E40369A31F1A725E399F01966A02CAABF32A869(L_9, NULL);
				V_5 = L_10;
				intptr_t L_11;
				L_11 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_5), NULL);
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_12 = ___0_proxy;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				L_13 = FirebaseUser_getCPtr_m7E40369A31F1A725E399F01966A02CAABF32A869(L_12, NULL);
				V_5 = L_13;
				intptr_t L_14;
				L_14 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&V_5), NULL);
				bool L_15;
				L_15 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_11, L_14, NULL);
				V_4 = L_15;
				bool L_16 = V_4;
				if (!L_16)
				{
					goto IL_0082_1;
				}
			}
			{
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_17 = __this->___currentUser_6;
				NullCheck(L_17);
				UserInfoInterface_Dispose_m10151E5E08983ADB015CF780456F34722AC3E998(L_17, NULL);
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_18 = ___0_proxy;
				__this->___currentUser_6 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___currentUser_6), (void*)L_18);
			}

IL_0082_1:
			{
			}

IL_0083_1:
			{
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_19 = __this->___currentUser_6;
				V_6 = (bool)((!(((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_19) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_20 = V_6;
				if (!L_20)
				{
					goto IL_009e_1;
				}
			}
			{
				FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_21 = __this->___currentUser_6;
				NullCheck(L_21);
				L_21->___authProxy_3 = __this;
				Il2CppCodeGenWriteBarrier((void**)(&L_21->___authProxy_3), (void*)__this);
			}

IL_009e_1:
			{
				goto IL_00ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_22 = __this->___currentUser_6;
		V_7 = L_22;
		goto IL_00b6;
	}

IL_00b6:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_23 = V_7;
		return L_23;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_0 = NULL;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_1 = NULL;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_0);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)(NULL));
		goto IL_0021;
	}

IL_001b:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_4;
		L_4 = FirebaseAuth_get_CurrentUserInternal_m056E7E027AFCF6EB9C63FBCF9001DD6503E545AC(__this, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_5 = V_0;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_6;
		L_6 = FirebaseAuth_UpdateCurrentUser_m8C0906D45788F454E7E19A8C929FEBA42792A06B(__this, L_5, NULL);
		V_1 = L_6;
		goto IL_002c;
	}

IL_002c:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_7 = V_1;
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithCredentialAsync_m113AA2F02FEE5A28A9D49492AC5F33AA54A55D74 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___0_credential, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass49_0_U3CSignInWithCredentialAsyncU3Eb__0_mC153688E2D25613BA3B1DE9ACF7FAAC19D11A782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* V_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* L_0 = (U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass49_0__ctor_m41D9546731C9E5DBA791D6B2355E5363C7FBF20A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		FirebaseAuth_ThrowIfNull_m75B5ACDD65C62406B8D55EBDD062B6A48795C065(__this, NULL);
		U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* L_2 = V_0;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_3 = (TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7*)il2cpp_codegen_object_new(TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9(L_3, TaskCompletionSource_1__ctor_m07417FCCF4B1AFC798B6E6689EF51B56E50957A9_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___taskCompletionSource_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___taskCompletionSource_1), (void*)L_3);
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_4 = ___0_credential;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_5;
		L_5 = FirebaseAuth_SignInWithCredentialInternalAsync_mAA7A7978B4084AF60EBA28BEA1A50FA1EBE16FC6(__this, L_4, NULL);
		U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* L_6 = V_0;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_7 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass49_0_U3CSignInWithCredentialAsyncU3Eb__0_mC153688E2D25613BA3B1DE9ACF7FAAC19D11A782_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38(L_5, L_7, Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var);
		U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_10 = L_9->___taskCompletionSource_1;
		NullCheck(L_10);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_11;
		L_11 = TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_inline(L_10, TaskCompletionSource_1_get_Task_mF187F846976EC355B497BEF2732E7DB334DFF486_RuntimeMethod_var);
		V_1 = L_11;
		goto IL_0047;
	}

IL_0047:
	{
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_12 = V_1;
		return L_12;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* ___1_taskCompletionSource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSourceCompat_1_SetException_mA8B5E5BD2B53FE86D96533E63D7F9409838A6A66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_3 = ___1_taskCompletionSource;
		NullCheck(L_3);
		TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC(L_3, TaskCompletionSource_1_SetCanceled_m3BCD8A3933D86F155005ACEC30431C292BE070CC_RuntimeMethod_var);
		goto IL_0046;
	}

IL_0016:
	{
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_4 = ___0_task;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_7 = ___1_taskCompletionSource;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_8 = ___0_task;
		NullCheck(L_8);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_9;
		L_9 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_8, NULL);
		TaskCompletionSourceCompat_1_SetException_mA8B5E5BD2B53FE86D96533E63D7F9409838A6A66(L_7, L_9, TaskCompletionSourceCompat_1_SetException_mA8B5E5BD2B53FE86D96533E63D7F9409838A6A66_RuntimeMethod_var);
		goto IL_0046;
	}

IL_0031:
	{
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_10 = ___1_taskCompletionSource;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_11 = ___0_task;
		NullCheck(L_11);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_12;
		L_12 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_11, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_13;
		L_13 = FirebaseAuth_UpdateCurrentUser_m8C0906D45788F454E7E19A8C929FEBA42792A06B(__this, L_12, NULL);
		NullCheck(L_10);
		TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C(L_10, L_13, TaskCompletionSource_1_SetResult_m24FDB6300E1FD71FF3832D96E8668C8E9554DE7C_RuntimeMethod_var);
	}

IL_0046:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialInternalAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithCredentialInternalAsync_mAA7A7978B4084AF60EBA28BEA1A50FA1EBE16FC6 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___0_credential, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_1 = ___0_credential;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = Credential_getCPtr_m8E7872F98919E36F7A67DF50D27AE2B890D38CC1(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_m3BA64866D0A1958123C6A0FEC1B77BEE1A2D6358(L_0, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_SignInWithCredentialInternalAsync_mAA7A7978B4084AF60EBA28BEA1A50FA1EBE16FC6_RuntimeMethod_var)));
	}

IL_0022:
	{
		intptr_t L_7 = V_0;
		Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236* L_8 = (Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236*)il2cpp_codegen_object_new(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Future_User__ctor_m4921804BE72053DD67804F59F83DBDC31CC33B59(L_8, L_7, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Future_User_t9D023CB6F4028F3276681CA0126A8206A5A9F236_il2cpp_TypeInfo_var);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_9;
		L_9 = Future_User_GetTask_m6F04A551DD05AC7F83B046814B211FD1F94BE732(L_8, NULL);
		V_2 = L_9;
		goto IL_0031;
	}

IL_0031:
	{
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_10 = V_2;
		return L_10;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_SignOut_m6334FED9987E29CCB5AAAF8AC50A894BFF8AF5C8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_FirebaseAuth_SignOut_m2A10F7589BABECFD819E06E4DD8BADD83D8512E0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_SignOut_m6334FED9987E29CCB5AAAF8AC50A894BFF8AF5C8_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_GetAuthInternal_m55709A4143C7E2EC3108ACF3706A971567ECF5E4 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, int32_t* ___1_init_result_out, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* V_2 = NULL;
	bool V_3 = false;
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* V_4 = NULL;
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* G_B4_0 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				int32_t* L_0 = ___1_init_result_out;
				int32_t L_1 = V_0;
				*((int32_t*)L_0) = (int32_t)L_1;
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = ___0_app;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
				L_3 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
				intptr_t L_4;
				L_4 = AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m3E83970E2674AEC5DDD01FD9818845156FE134AB(L_3, (&V_0), NULL);
				V_1 = L_4;
				intptr_t L_5 = V_1;
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, L_6, NULL);
				if (L_7)
				{
					goto IL_0028_1;
				}
			}
			{
				intptr_t L_8 = V_1;
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_9 = (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*)il2cpp_codegen_object_new(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				FirebaseAuth__ctor_mEC6DE61B81F05CB9FDE8A906A83F0E5F1399613C(L_9, L_8, (bool)1, NULL);
				G_B4_0 = L_9;
				goto IL_0029_1;
			}

IL_0028_1:
			{
				G_B4_0 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF*)(NULL));
			}

IL_0029_1:
			{
				V_2 = G_B4_0;
				il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
				V_3 = L_10;
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0039_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
				Exception_t* L_12;
				L_12 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_GetAuthInternal_m55709A4143C7E2EC3108ACF3706A971567ECF5E4_RuntimeMethod_var)));
			}

IL_0039_1:
			{
				FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_13 = V_2;
				V_4 = L_13;
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_14 = V_4;
		return L_14;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::LogHeartbeatInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_LogHeartbeatInternal_mB2A72926FD90F462F8B3399150BC51B9ACA27F0A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_FirebaseAuth_LogHeartbeatInternal_m66F0D6932BA24BBFF5FB02522D1F901C1AA87D1D(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_LogHeartbeatInternal_mB2A72926FD90F462F8B3399150BC51B9ACA27F0A_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_mC40BBDB8654D089090D0CD2FE6944B4C8CB07B4E (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_instance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_instance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mFED7F33D46743757B5DE19BF3D91C701F5671876(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_ReleaseReferenceInternal_mC40BBDB8654D089090D0CD2FE6944B4C8CB07B4E_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUserInternal_m056E7E027AFCF6EB9C63FBCF9001DD6503E545AC (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_1 = NULL;
	bool V_2 = false;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_3 = NULL;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* G_B3_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_mB1ED6160407E8C4982746296099A9B1DE21D5DAC(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_5 = V_0;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_6 = (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)il2cpp_codegen_object_new(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FirebaseUser__ctor_mD6A2E9077DE9A427BA26ACE7091EE8C4936EE809(L_6, L_5, (bool)0, NULL);
		G_B3_0 = L_6;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_get_CurrentUserInternal_m056E7E027AFCF6EB9C63FBCF9001DD6503E545AC_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_10 = V_1;
		V_3 = L_10;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11 = V_3;
		return L_11;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__cctor_m82DDB910A74B0E1DCC58CAA46E60639DDC622BB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6CA682461D2CF9256A108B618A7E89E731393F65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_0 = (Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2*)il2cpp_codegen_object_new(Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6CA682461D2CF9256A108B618A7E89E731393F65(L_0, Dictionary_2__ctor_m6CA682461D2CF9256A108B618A7E89E731393F65_RuntimeMethod_var);
		((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10), (void*)L_0);
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
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_Multicast(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* currentDelegate = reinterpret_cast<StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_authCPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenInst(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_authCPtr, method);
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStatic(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_authCPtr, method);
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStaticInvoker(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_authCPtr);
}
void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_ClosedStaticInvoker(StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_authCPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051 (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_authCPtr);

}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_m971B96650420F9DD96060A076F8D39527962C42F (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4_Multicast;
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_Invoke_m1202665B970B49F5254C58F9B74D527796F8FEF4 (StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* __this, intptr_t ___0_authCPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_authCPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m5BA94BEA2582743E481859C1F4376480C97E43C0 (U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1__ctor_mF8D8387CF1928604864B73AD3B866729F15CEC7C (U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass20_1::<GetAuth>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF (U3CU3Ec__DisplayClass20_1_t9BD75B6913C2B52B6F8F805A799D03B156FA7643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		U3CU3Ec__DisplayClass20_0_t39729C57E9DEA0C2557F004CDDB6BB2C8AF9C737* L_1 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_1);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = L_1->___app_1;
		int32_t* L_3 = (&__this->___init_result_0);
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4;
		L_4 = FirebaseAuth_GetAuthInternal_m55709A4143C7E2EC3108ACF3706A971567ECF5E4(L_2, L_3, NULL);
		NullCheck(L_0);
		L_0->___auth_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___auth_0), (void*)L_4);
		int32_t L_5 = __this->___init_result_0;
		V_0 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = __this->___init_result_0;
		InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_8 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InitializationException__ctor_m68E3C1F4B8BE16E94441B47A815203360CC4E47D(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass20_1_U3CGetAuthU3Eb__0_mB1A8F1DF269278FF25902E6A86AE0F9797ABA8EF_RuntimeMethod_var)));
	}

IL_003c:
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m9976BF776BAC98193D01D29B902FB24CFE64AEC2 (U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_1__ctor_mF48D1CFC3A407C0177EA4DD27B47C71EE7B9122E (U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass23_1::<ForwardStateChange>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_1_U3CForwardStateChangeU3Eb__0_m95B57ED08D8D92E50775CFEDB0AE034745CC1E9D (U3CU3Ec__DisplayClass23_1_t536AA3A74822C0FCCD202DB0315271AC8655066A* __this, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass23_0_tB8454AB4D400B47AFBAD0D24FE4FF1AF2BB4F426* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		Action_1_t2ACA44D91D1E3F346CE96ED2A9225182DAF52A17* L_1 = L_0->___stateChangeClosure_0;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_2 = __this->___auth_0;
		NullCheck(L_1);
		Action_1_Invoke_m1E7F3EF0DE14DA642C9C76E520CCF3422001A3B0_inline(L_1, L_2, NULL);
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
// System.Void Firebase.Auth.FirebaseAuth/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2679267971D705E9EC045B2D7F18588CA504DCF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* L_0 = (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057*)il2cpp_codegen_object_new(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFD414BD20F66C697B495DF5E566C07B0F4B7804D(L_0, NULL);
		((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD414BD20F66C697B495DF5E566C07B0F4B7804D (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::<StateChangedFunction>b__24_0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStateChangedFunctionU3Eb__24_0_m25FE5EF7275A4E54EEAD23507A99E08D71CC9297 (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* V_1 = NULL;
	bool V_2 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		NullCheck(L_0);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0->___stateChangedImpl_7;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_3 = ((FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var))->___appCPtrToAuth_10;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_003b;
					}
				}
				{
					Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
			FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_7 = ___0_auth;
			FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_8 = ___0_auth;
			NullCheck(L_8);
			FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_9;
			L_9 = FirebaseAuth_get_CurrentUserInternal_m056E7E027AFCF6EB9C63FBCF9001DD6503E545AC(L_8, NULL);
			NullCheck(L_7);
			FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_10;
			L_10 = FirebaseAuth_UpdateCurrentUser_m8C0906D45788F454E7E19A8C929FEBA42792A06B(L_7, L_9, NULL);
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_11 = ___0_auth;
		NullCheck(L_11);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_12 = L_11->___stateChangedImpl_7;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_13 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_14 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_12);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_12, L_13, L_14, NULL);
	}

IL_004f:
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_15 = ___0_auth;
		NullCheck(L_15);
		L_15->___persistentLoaded_9 = (bool)1;
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::<IdTokenChangedFunction>b__25_0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__25_0_mD56E4FFCA8F83F4DA4DFAB740C7EDCB29DCA06D3 (U3CU3Ec_t13EA01333FD53EE385E6EB3AE51518C140F25057* __this, FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		NullCheck(L_0);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0->___idTokenChangedImpl_8;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_3 = ___0_auth;
		NullCheck(L_3);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = L_3->___idTokenChangedImpl_8;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_5 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_6 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_4);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_4, L_5, L_6, NULL);
	}

IL_0022:
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m41D9546731C9E5DBA791D6B2355E5363C7FBF20A (U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass49_0::<SignInWithCredentialAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0_U3CSignInWithCredentialAsyncU3Eb__0_mC153688E2D25613BA3B1DE9ACF7FAAC19D11A782 (U3CU3Ec__DisplayClass49_0_t0CCEE1EB59037097C568AF5385FD4BE3AC1107B3* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___0_task, const RuntimeMethod* method) 
{
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___U3CU3E4__this_0;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_1 = ___0_task;
		TaskCompletionSource_1_t7A8BB1FACC6B54730981FB9E5CE79C28AF19BEC7* L_2 = __this->___taskCompletionSource_1;
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m8B737EC46AD5F532A0DE7E90341A5FBC3E28DFC8(L_0, L_1, L_2, NULL);
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
// System.Void Firebase.Auth.AuthUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE__cctor_m1630D95EAAE6E61E8A8E565239682157B7385C38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* L_0 = (SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270*)il2cpp_codegen_object_new(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m6709B95358A2A3B65272194E10E6AFD106926A1C(L_0, NULL);
		((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* L_1 = (SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D*)il2cpp_codegen_object_new(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_mC8327633A09D4DD655AA5FEA5A2A7BF7C841430E(L_1, NULL);
		((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_m296C5844E099430387E2F721F1D6A24FD54AF941 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_tB4CF397F15014F9BEA59F667A633E7F832DB7C78* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_mCC85615B9EA0C81F14B6931EFEE22EE54688779A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_GetResult_m0C533833AEE8C39D03639B1C4E7118AF22C643F4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_Future_User_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_mDE5DCFBB612138DDA4A71F05AE25A3FC55385D53 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_delete_Future_User", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_User)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Credential_m9BBFD0335963236DDC1ACD3F4F34C50A395083E7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_delete_Credential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Credential)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::GoogleAuthProvider_GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_GoogleAuthProvider_GetCredential_m98D471DEBF8A1C50200D407F52FF1C73AA74CA95 (String_t* ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	char* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_string(___0_jarg1);

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_GoogleAuthProvider_GetCredential)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_jarg1' native representation
	il2cpp_codegen_marshal_free(____0_jarg1_marshaled);
	____0_jarg1_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserInfoInterface(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserInfoInterface_m8D0C46DE47E822CA27457B7AFA84FA550F6EE486 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_delete_UserInfoInterface", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_UserInfoInterface)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_UserId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_UserId_get_m3428D7A0C57C6481EF6FB0491DA97F045CEE7C75 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_UserInfoInterface_UserId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_UserId_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_Email_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_Email_get_mD6EBAEDF0B1F5DC104D5781431ABF89C648A9219 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_UserInfoInterface_Email_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_Email_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_DisplayName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_DisplayName_get_m41D43B4B54197A1A095B371CD9B9F19F873A689E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_UserInfoInterface_DisplayName_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_DisplayName_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::UserInfoInterface_PhotoUrlInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_UserInfoInterface_PhotoUrlInternal_get_mB065ADB3EA4D4B1EFC997C0C1BFB5F6096A49407 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_UserInfoInterface_PhotoUrlInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_UserInfoInterface_PhotoUrlInternal_get)(____0_jarg1_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseUser_m49FDDF59500F3E43F730B2043E1C95332F6F81DD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_delete_FirebaseUser", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FirebaseUser)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredentialInternal(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_m3BA64866D0A1958123C6A0FEC1B77BEE1A2D6358 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	void* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = (void*)___1_jarg2.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignOut(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_SignOut_m2A10F7589BABECFD819E06E4DD8BADD83D8512E0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignOut", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignOut)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m3E83970E2674AEC5DDD01FD9818845156FE134AB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, int32_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_LogHeartbeatInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_LogHeartbeatInternal_m66F0D6932BA24BBFF5FB02522D1F901C1AA87D1D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mFED7F33D46743757B5DE19BF3D91C701F5671876 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_mB1ED6160407E8C4982746296099A9B1DE21D5DAC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_m0A51BCF7288AC201F2774CB5506D5F5DEFFD2682 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_CreateAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateAuthStateListener)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m79297782C9683325F91FB03C0577B3B02664EC31 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_DestroyAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyAuthStateListener)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_m38F412B973371F0CFF8D891D71C97CE99022FDC5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_CreateIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateIdTokenListener)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_mACBDFF676A4BC45B7951C31647CFBDCED08D1B4D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_DestroyIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyIdTokenListener)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIGUpcast_m8351BB3FFF59BBB0E79A615DE27479EE2D490B27 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_Future_User_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_SWIGUpcast_m7CAB9D14AEA69B1F0AEBC88EBC4CA0BA90CABB46 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m5A0AC467CB894DA14A8D5FC72E1C4C0923C12E61 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___0_applicationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___1_arithmeticDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___2_divideByZeroDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___4_invalidCastDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___5_invalidOperationDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___6_ioDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___7_nullReferenceDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___8_outOfMemoryDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___9_overflowDelegate, ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "SWIGRegisterExceptionCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_applicationDelegate' to native representation
	Il2CppMethodPointer ____0_applicationDelegate_marshaled = NULL;
	____0_applicationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_applicationDelegate));

	// Marshaling of parameter '___1_arithmeticDelegate' to native representation
	Il2CppMethodPointer ____1_arithmeticDelegate_marshaled = NULL;
	____1_arithmeticDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_arithmeticDelegate));

	// Marshaling of parameter '___2_divideByZeroDelegate' to native representation
	Il2CppMethodPointer ____2_divideByZeroDelegate_marshaled = NULL;
	____2_divideByZeroDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_divideByZeroDelegate));

	// Marshaling of parameter '___3_indexOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____3_indexOutOfRangeDelegate_marshaled = NULL;
	____3_indexOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___3_indexOutOfRangeDelegate));

	// Marshaling of parameter '___4_invalidCastDelegate' to native representation
	Il2CppMethodPointer ____4_invalidCastDelegate_marshaled = NULL;
	____4_invalidCastDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___4_invalidCastDelegate));

	// Marshaling of parameter '___5_invalidOperationDelegate' to native representation
	Il2CppMethodPointer ____5_invalidOperationDelegate_marshaled = NULL;
	____5_invalidOperationDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___5_invalidOperationDelegate));

	// Marshaling of parameter '___6_ioDelegate' to native representation
	Il2CppMethodPointer ____6_ioDelegate_marshaled = NULL;
	____6_ioDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___6_ioDelegate));

	// Marshaling of parameter '___7_nullReferenceDelegate' to native representation
	Il2CppMethodPointer ____7_nullReferenceDelegate_marshaled = NULL;
	____7_nullReferenceDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___7_nullReferenceDelegate));

	// Marshaling of parameter '___8_outOfMemoryDelegate' to native representation
	Il2CppMethodPointer ____8_outOfMemoryDelegate_marshaled = NULL;
	____8_outOfMemoryDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___8_outOfMemoryDelegate));

	// Marshaling of parameter '___9_overflowDelegate' to native representation
	Il2CppMethodPointer ____9_overflowDelegate_marshaled = NULL;
	____9_overflowDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___9_overflowDelegate));

	// Marshaling of parameter '___10_systemExceptionDelegate' to native representation
	Il2CppMethodPointer ____10_systemExceptionDelegate_marshaled = NULL;
	____10_systemExceptionDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___10_systemExceptionDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AuthUtil)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAD9B1407D55B00A38D10D3CE2B615942F9BDDF0B (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___0_argumentDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "SWIGRegisterExceptionArgumentCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_argumentDelegate' to native representation
	Il2CppMethodPointer ____0_argumentDelegate_marshaled = NULL;
	____0_argumentDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_argumentDelegate));

	// Marshaling of parameter '___1_argumentNullDelegate' to native representation
	Il2CppMethodPointer ____1_argumentNullDelegate_marshaled = NULL;
	____1_argumentNullDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_argumentNullDelegate));

	// Marshaling of parameter '___2_argumentOutOfRangeDelegate' to native representation
	Il2CppMethodPointer ____2_argumentOutOfRangeDelegate_marshaled = NULL;
	____2_argumentOutOfRangeDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_argumentOutOfRangeDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_AuthUtil)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___0_message = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___1_paramName;
		String_t* L_8 = ___0_message;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___0_message = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___1_paramName;
		String_t* L_8 = ___0_message;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m082E44E87C697836CECA0760676EF7FC0FFCC789 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_0 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_mD3D5DF4565F2D8B785CECDDE06C94EB1AF3B7ACD_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_1 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m6D48FAE1D40F739EBE2EB7B7A2D35A4C38E273D2_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_2 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m5E4DFAD8B4B70C66EA34EC78307E69F6B0D8F7E7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_3 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m05738E7A913471982107EC9DAFF8E575AD16D09D_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_4 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m7CEBADF8ADECB392731AD0215CA9D2162344E3EB_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_5 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m946F88971C00DC640C4A7FEFB4D820E03AFCBA8A_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_6 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_m097E27E1B950DDEDBE75ECAA525FBA1F9CCC55FC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_7 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m7103FEC1AD9831462CD640AF2BD4BD51B457BE24_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_8 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_m477DE4F591DB31AFA8DFACEBACA2CCA81CD28367_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_9 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m5E2F92E1488F0943C4B43806F9F6EF812073D384_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_10 = (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*)il2cpp_codegen_object_new(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m988E84E7A45B7FCE1EC1597585471AFA78B06887_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_11 = (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m21B2170535EECF45751C6F48948BC1322346A5F0_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_12 = (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m09944997FE4F760BD1423A7DC3082736F605535C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_13 = (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m7111A0768AC3707D3151755C7456E30482F974DF_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_14 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_15 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_16 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_17 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_18 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_19 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_20 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_21 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_22 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_23 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* L_24 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m5A0AC467CB894DA14A8D5FC72E1C4C0923C12E61(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_25 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_26 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* L_27 = ((SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_mAD9B1407D55B00A38D10D3CE2B615942F9BDDF0B(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m6709B95358A2A3B65272194E10E6AFD106926A1C (SWIGExceptionHelper_t05DAD01A90446484A21E9CC1112DA02202C77270* __this, const RuntimeMethod* method) 
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
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_Multicast(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* currentDelegate = reinterpret_cast<ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenInst(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStatic(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStaticInvoker(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_ClosedStaticInvoker(ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m499CCC99321ACEAB5A59666F10B707010802EFE5 (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C_Multicast;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m46C9C9C3E1F3AE938DC4A5F07B91AE94FED25E0C (ExceptionDelegate_tBD5E636A02BB2A87476121A0D154ABDE69916D8A* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_Multicast(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenInst(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStatic(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStaticInvoker(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_ClosedStaticInvoker(ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1 (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Marshaling of parameter '___1_paramName' to native representation
	char* ____1_paramName_marshaled = NULL;
	____1_paramName_marshaled = il2cpp_codegen_marshal_string(___1_paramName);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled, ____1_paramName_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_paramName' native representation
	il2cpp_codegen_marshal_free(____1_paramName_marshaled);
	____1_paramName_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m3F2FB66273FFCF78BE237864E1209316F6FC195A (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D_Multicast;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m62CBEE541DBAA197B82571A6D8125143F4469C0D (ExceptionArgumentDelegate_t2CB92E157C904122629802F9D5EBAC4BBF5981A1* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m882B63921C8EAF5A22A08AFD6851BE6F4400A48C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_001d:
	{
		bool L_4 = V_0;
		V_3 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m7DB36E92553934D1116607493BD5D44F78710D9B_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_11 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_2), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		return;
	}
}
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mAC5AB6C8BD341602F66565E1E8B2DAB5B03E172E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_3 = L_5;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_4;
					if (!L_6)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_8 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_4), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
			goto IL_0057;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		Exception_t* L_10 = V_0;
		V_5 = L_10;
		goto IL_005e;
	}

IL_005e:
	{
		Exception_t* L_11 = V_5;
		return L_11;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_mE0D00CBC7AAB9C703CD919329322A196DB282FA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE736A8E3A7119D121CB6D496E3E1C282C8C9B89A_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_mF1E51D0E5816C991DC9BD57E0668EEDCF81CA902 (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "SWIGRegisterStringCallback_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AuthUtil)(____0_stringDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_stringDelegate_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3 (String_t* ___0_cString, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_cString;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m4233D189A57454B02357CBCC668E53E2B93F71D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* L_0 = (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820*)il2cpp_codegen_object_new(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m39AE1969D572DCB5A0266DC4EAE96243DFFEDE6D(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m973E9F1971668A0D3BEA767B3479889D49CC39E3_RuntimeMethod_var), NULL);
		((SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* L_1 = ((SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_mF1E51D0E5816C991DC9BD57E0668EEDCF81CA902(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mC8327633A09D4DD655AA5FEA5A2A7BF7C841430E (SWIGStringHelper_t54C89246F8AD42733FDD4305243013933303AE2D* __this, const RuntimeMethod* method) 
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
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_Multicast(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* currentDelegate = reinterpret_cast<SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenInst(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStatic(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStaticInvoker(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_ClosedStaticInvoker(SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820 (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m39AE1969D572DCB5A0266DC4EAE96243DFFEDE6D (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E_Multicast;
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m2D64F3CEBF8E1B722FE1679E830742A423261D1E (SWIGStringDelegate_t9CD01F3A48BC7BC15A65A0BB2B7DAC5DF7608820* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_state_changed_delegate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* L_2 = ___1_state_changed_delegate;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateAuthStateListener_m0A51BCF7288AC201F2774CB5506D5F5DEFFD2682(L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateAuthStateListener_mD22744C56BD1CE6B28D72EF8C0C4E6EAD33419D6_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, intptr_t ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		intptr_t L_2 = ___1_listener;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyAuthStateListener_m79297782C9683325F91FB03C0577B3B02664EC31(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyAuthStateListener_m6F9EC8163EEEEEF16C95440A873991C3E90E2D83_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* ___1_state_changed_delegate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		StateChangedDelegate_t5BEFB485EC0FAFB6678FE8F50A5153BAF0D4E051* L_2 = ___1_state_changed_delegate;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateIdTokenListener_m38F412B973371F0CFF8D891D71C97CE99022FDC5(L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateIdTokenListener_m8C6F2E7117ACC51D7CF40F116E11CD28609EE616_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___0_auth, intptr_t ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ___0_auth;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = FirebaseAuth_getCPtr_mF3D3A8469B4C252267CB1EBAC51D24A9DD11B6B8(L_0, NULL);
		intptr_t L_2 = ___1_listener;
		il2cpp_codegen_runtime_class_init_inline(AuthUtilPINVOKE_t1F2E0415FF5D0F19282D5F618361E28FC401F7A6_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyIdTokenListener_mACBDFF676A4BC45B7951C31647CFBDCED08D1B4D(L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyIdTokenListener_m087ED37EF1A7E0FCBDC0EFD4D4AD649C5046A504_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_mD0A5243978A9C45E0F19C49CF290539F912DEECA_inline (Action_tD73236A0B99956CAA0E15FAAFA848B02E8C8541C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
