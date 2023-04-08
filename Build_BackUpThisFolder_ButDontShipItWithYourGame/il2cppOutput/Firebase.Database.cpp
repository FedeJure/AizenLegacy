#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
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
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>
struct Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7;
// System.Action`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044;
// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct KeyCollection_t6A4A7E84EA0F87A544ABA1FFCB9E0C75C26DD0EE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct KeyCollection_t378133431A5C79BFB5565210E88EA17D38F1CE5A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Database.FirebaseDatabase>
struct KeyCollection_tCE86288D46D2A8B1CA9062CC4D48804EFA516E5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>
struct TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.DataSnapshot>
struct TaskFactory_1_tD6D69737A2AED7131413D9284A8170289D59D0B1;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.InternalDataSnapshot>
struct TaskFactory_1_t90B6A200C85A5DDEDD4F85EC4314FEF1F5AFFA78;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50;
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>
struct Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct ValueCollection_t2583015C9521963C96356827CE38EEC52B636079;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct ValueCollection_t64C179083240F71FF763A454EA0B7ED4D70F734B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Database.FirebaseDatabase>
struct ValueCollection_t910CEC07E1C2B78A8208B6E42A63BCDC84915F2B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.InternalListener>[]
struct EntryU5BU5D_tA27C7EDFC78680914AA578013DF67DF3509E8499;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>[]
struct EntryU5BU5D_t33489EF4DE8589EE5A49D2926B1479047F817336;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Database.FirebaseDatabase>[]
struct EntryU5BU5D_t0F0413FC28465F7BB7A1D58C7030A899E8870149;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
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
// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A;
// Firebase.Database.DatabaseError
struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9;
// Firebase.Database.DatabaseException
struct DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232;
// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D;
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
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960;
// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED;
// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36;
// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480;
// Firebase.Database.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F;
// Firebase.Database.Internal.InternalListener
struct InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA;
// Firebase.Database.InternalQuery
struct InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D;
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
// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED;
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
// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB;
// Firebase.Variant
struct Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B;
// Firebase.Database.DatabaseReference/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C;
// Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED;
// Firebase.Database.Future_InternalDataSnapshot/Action
struct Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8;
// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6;
// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0;
// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F;
// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B;
// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19;
// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374;
// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5;
// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D;
// Firebase.Database.Query/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983;
IL2CPP_EXTERN_C String_t* _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral19709657F1A68406CA65F0C729F82F01A9E68B23;
IL2CPP_EXTERN_C String_t* _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102;
IL2CPP_EXTERN_C String_t* _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C;
IL2CPP_EXTERN_C String_t* _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201;
IL2CPP_EXTERN_C String_t* _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A;
IL2CPP_EXTERN_C String_t* _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9;
IL2CPP_EXTERN_C String_t* _stringLiteral50384A583A192C06635CCD8BE23070E725470116;
IL2CPP_EXTERN_C String_t* _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C;
IL2CPP_EXTERN_C String_t* _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD;
IL2CPP_EXTERN_C String_t* _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A;
IL2CPP_EXTERN_C String_t* _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480;
IL2CPP_EXTERN_C String_t* _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92;
IL2CPP_EXTERN_C String_t* _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5;
IL2CPP_EXTERN_C String_t* _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50;
IL2CPP_EXTERN_C String_t* _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m6CD847B4ECAE767215C81F8BD395BF954EA86A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m194F02B4821ECDF29014865E577588C882B88FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEE1EC7670144B9AFEDEC5B1066B48CB8035EDD27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m005E9A5B663C38227381B4BAFE67FC74CECD1BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_m026B66421CE54361558C66EA439144F7B42F330A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_mA5B21F93A8D42BE9A0BBDD4A48B130DBEA65F811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_GetResult_m49E679F1272DF0A77AF56930C32ADC5BD4FA940F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m207504FA1000EF0BD7832B183D80014021D26A0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_FreeCompletionData_mBFABB246B4475320E815EF1A38869A089F6D256D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_OnCompletion_m3D3A3D578D03C34950D4EC51C0F715DFF2A459F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_ThrowIfDisposed_m30E2B463AC06313078F644896B453ED1937642ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnCancelledHandler_m9AB5FF95793990985428D19F313ACBC24E72D851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildChangeHandler_m8095E9DE76B1928F9BC80950EB01834E481DC20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildRemovedHandler_m594BBE968EF6D2838A00A1FD6D9636A8C8826B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_key_string_m68793A52FE65FECF6EBE00644FD8E3B9D7549136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_value_mD0ED1285B11BE056D3D290E79B8AEFB6B0D5750D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_Child_m6385A496BB5DD4F533FD891004DC37CA1F235B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_is_valid_m3DEC0D72CA088CC171EEB8F471788549E79A77D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_url_m1EF82C3E8799AD219F46EF643E1CCC1F24404A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetInstanceInternal_m398BDDEDC7D96F575D89B8F32614D0579FF82CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m6C73048E76BBF88BA25C10B97CBACFE76485F7D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_ReleaseReferenceInternal_m7F475749AB105348EAE69F618A39E88CDD38D0E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyChildListener_m2EF3D7ACFD479D8CEFE32FCA22A1817E5B578E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyValueListener_m34D4329F6CCD18720B1AAE2CF1725C8EF418FBD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_GetValueAsync_m1FA7B1F73A2EA7887C94D194124EA52D5D4D71BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterChildListenerCallbacks_m163BDACD7E477F4E52E07CCC737152EC484BC0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterValueListenerCallbacks_m02FA94059B9B4CB903AD2A9FC461D1DFBC2BDEAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_is_valid_mEE28991F00E1C1C167B0B5B65B360D0F816DFA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnCancelledHandler_m488ACD2B13095C11B53C435167BF0EF21DBDAFE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnValueChangedHandler_mB87BCD8900157B34D77C3D719E94A05FC2D5B5A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_CheckTaskStatus_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1D8412817F39898D0540277F7EEFE5C0F6CE1414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query__ctor_mFB0C416EC37A86BFC866C3B841FA6E30F22F002E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mC00FC1080D4B7ACCA73425E9F4CFD711A425396F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m751E631864FDF20467E3BF8DDD39751D085C7EE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m8052362115CB69B05B59DE95B0DD7626E58ED4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA8CB9DDD630EE287A396E5D06E805B8AA5EF8BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mBA043F290EE08502EC632E3E5F2B45194793F91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m377FFF99FAB396800F30BFE8A7DD758BAF06F2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m21BD2976DC85588FD4B0AE11042A9BF962774CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m186709ECD9C1432E633A146E0A0BE9B27A0B0FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m9B53F0D753F9D0084B0A098F3A06372BEF88BBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m7718782C1E9A9A3B13A63BC991DBF557CE6BB84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m19DBC9CDB96739AF984498CCB4A5697EEEEC7D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mE151CCDC422D04D6B718DA55C627F0F496F7C995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m01B698BBF46D7129825119F5F5C79237FF172A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m26D600DFFBB9789EEE2E75DE261A8AA48A2773A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mFCEF2F2C6C95F8378679E9EF5753E3B42065457C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m0411DE933C6264C4DC4ECB4F234DAB9AFC6EFB29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m719C9EE8C3B930D30106E4341ED056D985A26277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mC87E41E4345E5E5579A2403C4FE6C1589F399FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m17B9BF57CB656DDB8C9009DAB0BA2532E32F5CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m6A4706F5264B536B306211AB12085C807F4481ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m7F06860B88DE40B341B7B6424B56E2D654A32B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m45CF48763C805E6AD9D57D64D6326B3E4EB7B38E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m4A5DE2CC01B3D8E87D29BD6081958700B60BF63D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m44D7F07A2651825C7119B1EE94E470F09DE93EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mB58B1C0B65428B0188DC34CAEA9C8DE1B7264176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mD0A55AE835C9AF48FE7E69DBA3DE84E3CD445E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m50D84306365A8F086387DDD43C4083C03BB0B609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_m0A52BED0A41EAED007AED2CFF7496514ABEBE28D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_MakeVariant_mAD868620EF30F894C9B34AFC0F58897705DCED78_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t835FC236834DF52C940280F2BBD3A8364601904E 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA27C7EDFC78680914AA578013DF67DF3509E8499* ____entries_1;
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
	KeyCollection_t6A4A7E84EA0F87A544ABA1FFCB9E0C75C26DD0EE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2583015C9521963C96356827CE38EEC52B636079* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34* ____entries_1;
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
	KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t33489EF4DE8589EE5A49D2926B1479047F817336* ____entries_1;
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
	KeyCollection_t378133431A5C79BFB5565210E88EA17D38F1CE5A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64C179083240F71FF763A454EA0B7ED4D70F734B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0F0413FC28465F7BB7A1D58C7030A899E8870149* ____entries_1;
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
	KeyCollection_tCE86288D46D2A8B1CA9062CC4D48804EFA516E5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t910CEC07E1C2B78A8208B6E42A63BCDC84915F2B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>
struct TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A  : public RuntimeObject
{
	// Firebase.Database.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList_3;
};

// Firebase.Database.DatabaseError
struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9  : public RuntimeObject
{
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_2;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_3;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_4;
};

// Firebase.Database.DatabaseInternalPINVOKE
struct DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960  : public RuntimeObject
{
	// Firebase.Database.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___internalDatabase_0;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_1;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___U3CAppU3Ek__BackingField_2;
};

// Firebase.Database.Internal.InternalListener
struct InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA  : public RuntimeObject
{
	// System.Int32 Firebase.Database.Internal.InternalListener::uid
	int32_t ___uid_2;
};

// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED  : public RuntimeObject
{
	// Firebase.Database.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* ___childListener_3;
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

// Firebase.Database.Internal.Utilities
struct Utilities_t5091E4F03E25FFF1E7F492DB937EA027ADAB3A68  : public RuntimeObject
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

// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7  : public RuntimeObject
{
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A  : public RuntimeObject
{
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1  : public RuntimeObject
{
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B  : public RuntimeObject
{
};

// Firebase.Database.DatabaseReference/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF  : public RuntimeObject
{
	// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::<>4__this
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::tcs
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___tcs_1;
};

// Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED  : public RuntimeObject
{
	// Firebase.Database.Future_InternalDataSnapshot Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0::fu
	Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0::tcs
	TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* ___tcs_1;
};

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6  : public RuntimeObject
{
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Error Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::msg
	String_t* ___msg_2;
};

// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374  : public RuntimeObject
{
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Error Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::msg
	String_t* ___msg_2;
};

// Firebase.Database.Query/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0  : public RuntimeObject
{
	// Firebase.Database.Query Firebase.Database.Query/<>c__DisplayClass21_0::<>4__this
	Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot> Firebase.Database.Query/<>c__DisplayClass21_0::tcs
	TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* ___tcs_1;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>
struct Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;
};

// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D  : public Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED
{
	// Firebase.Database.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___U3CDatabaseU3Ek__BackingField_5;
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

// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___U3CDatabaseErrorU3Ek__BackingField_2;
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

// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569  : public InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA
{
	// System.Object Firebase.Database.Internal.InternalChildListener::eventLock
	RuntimeObject* ___eventLock_3;
	// Firebase.Database.InternalQuery Firebase.Database.Internal.InternalChildListener::internalQuery
	InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalChildListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalChildListener::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_6;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::cancelledImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___cancelledImpl_7;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childAddedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childAddedImpl_8;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childChangedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childChangedImpl_9;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childMovedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childMovedImpl_10;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childRemovedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childRemovedImpl_11;
};

// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D  : public InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA
{
	// System.Object Firebase.Database.Internal.InternalValueListener::eventLock
	RuntimeObject* ___eventLock_3;
	// Firebase.Database.InternalQuery Firebase.Database.Internal.InternalValueListener::internalQuery
	InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalValueListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalValueListener::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_6;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.InternalValueListener::valueChangedImpl
	EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* ___valueChangedImpl_7;
};

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389  : public RuntimeObject
{
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::callbackId
	int32_t ___callbackId_1;
	// Firebase.Database.ChildChangeType Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::changeType
	int32_t ___changeType_2;
	// System.String Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::previousChildName
	String_t* ___previousChildName_3;
};

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21  : public RuntimeObject
{
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::callbackId
	int32_t ___callbackId_1;
};

// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19  : public RuntimeObject
{
	// System.IntPtr Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::callbackId
	int32_t ___callbackId_1;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.Database.DatabaseException
struct DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232  : public Exception_t
{
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

// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalDataSnapshot::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalDataSnapshot::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalFirebaseDatabase::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Database.InternalQuery
struct InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalQuery::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalQuery::swigCMemOwn
	bool ___swigCMemOwn_1;
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

// Firebase.Variant
struct Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>
struct Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577  : public MulticastDelegate_t
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

// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t6828E7CF61D9964ABFF37AEE2159B3A85866A51C* ___SWIG_CompletionCB_7;
};

// Firebase.Database.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Future_InternalDataSnapshot::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.Database.Future_InternalDataSnapshot::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate Firebase.Database.Future_InternalDataSnapshot::SWIG_CompletionCB
	SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* ___SWIG_CompletionCB_7;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1  : public InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalDatabaseReference::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
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

// Firebase.Database.Future_InternalDataSnapshot/Action
struct Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8  : public MulticastDelegate_t
{
};

// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D  : public MulticastDelegate_t
{
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0  : public MulticastDelegate_t
{
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F  : public MulticastDelegate_t
{
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34  : public MulticastDelegate_t
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

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>

// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>

// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Firebase.Database.DataSnapshot

// Firebase.Database.DataSnapshot

// Firebase.Database.DatabaseError
struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_1;
};

// Firebase.Database.DatabaseError

// Firebase.Database.DatabaseInternalPINVOKE
struct DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_StaticFields
{
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper Firebase.Database.DatabaseInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A* ___swigExceptionHelper_0;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper Firebase.Database.DatabaseInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B* ___swigStringHelper_1;
};

// Firebase.Database.DatabaseInternalPINVOKE

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* ___databases_3;
};

// Firebase.Database.FirebaseDatabase

// Firebase.Database.Internal.InternalListener
struct InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields
{
	// System.Int32 Firebase.Database.Internal.InternalListener::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener> Firebase.Database.Internal.InternalListener::databaseCallbacks
	Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* ___databaseCallbacks_1;
};

// Firebase.Database.Internal.InternalListener

// Firebase.Database.Query

// Firebase.Database.Query

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

// Firebase.Database.Internal.Utilities

// Firebase.Database.Internal.Utilities

// Firebase.Database.DataSnapshot/DataSnapshotList

// Firebase.Database.DataSnapshot/DataSnapshotList

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields
{
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___applicationDelegate_0;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___arithmeticDelegate_1;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___divideByZeroDelegate_2;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___indexOutOfRangeDelegate_3;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___invalidCastDelegate_4;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___invalidOperationDelegate_5;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___ioDelegate_6;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___nullReferenceDelegate_7;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___outOfMemoryDelegate_8;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___overflowDelegate_9;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___systemDelegate_10;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___argumentDelegate_11;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___argumentNullDelegate_12;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper

// Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields
{
	// System.Int32 Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields
{
	// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_StaticFields
{
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* ___stringDelegate_0;
};

// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper

// Firebase.Database.DatabaseReference/<>c__DisplayClass29_0

// Firebase.Database.DatabaseReference/<>c__DisplayClass29_0

// Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0

// Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0

// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0

// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0

// Firebase.Database.Query/<>c__DisplayClass21_0

// Firebase.Database.Query/<>c__DisplayClass21_0

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD6D69737A2AED7131413D9284A8170289D59D0B1* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>

// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>
struct Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t90B6A200C85A5DDEDD4F85EC4314FEF1F5AFFA78* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>

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

// Firebase.Database.ChildChangedEventArgs

// Firebase.Database.ChildChangedEventArgs

// Firebase.Database.DatabaseReference

// Firebase.Database.DatabaseReference

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Firebase.Database.ValueChangedEventArgs

// Firebase.Database.ValueChangedEventArgs

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

// Firebase.Database.Internal.InternalChildListener

// Firebase.Database.Internal.InternalChildListener

// Firebase.Database.Internal.InternalValueListener

// Firebase.Database.Internal.InternalValueListener

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0

// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0

// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0

// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0

// System.ApplicationException

// System.ApplicationException

// Firebase.Database.DatabaseException

// Firebase.Database.DatabaseException

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

// Firebase.FirebaseException

// Firebase.FirebaseException

// Firebase.FutureBase

// Firebase.FutureBase

// Firebase.Database.InternalDataSnapshot

// Firebase.Database.InternalDataSnapshot

// Firebase.Database.InternalFirebaseDatabase

// Firebase.Database.InternalFirebaseDatabase

// Firebase.Database.InternalQuery

// Firebase.Database.InternalQuery

// System.SystemException

// System.SystemException

// Firebase.Variant

// Firebase.Variant

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<System.Threading.Tasks.Task>

// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>

// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>

// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>

// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.ArithmeticException

// System.ArithmeticException

// System.EventHandler

// System.EventHandler

// Firebase.FutureVoid
struct FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_tEBFCFFA99EEBBA3CF0A0DF5BD3966D9EE67FBA4A* ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.FutureVoid

// Firebase.Database.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action> Firebase.Database.Future_InternalDataSnapshot::Callbacks
	Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* ___Callbacks_3;
	// System.Int32 Firebase.Database.Future_InternalDataSnapshot::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Database.Future_InternalDataSnapshot::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// Firebase.Database.Future_InternalDataSnapshot

// System.IO.IOException

// System.IO.IOException

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// Firebase.Database.InternalDatabaseReference

// Firebase.Database.InternalDatabaseReference

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// System.OutOfMemoryException

// System.OutOfMemoryException

// Firebase.Database.Future_InternalDataSnapshot/Action

// Firebase.Database.Future_InternalDataSnapshot/Action

// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate

// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate

// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate

// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate

// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate

// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate

// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate

// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate

// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate

// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate

// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate

// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate

// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate

// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate

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


// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Query::CheckTaskStatus<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Query_CheckTaskStatus_TisIl2CppFullySharedGenericAny_m3CA4E6F37DD449EBD0B7C015B456069B5DFABA3F_gshared (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* ___1_tcs, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m1E6D9992EA0D24A89938F63C6D4A4DA425E56814_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182* ___0_continuationAction, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m58C4BD8A0F4F1FAA417EC05E2EDC79F0D6C5ADB7_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m094D37FCDE8D0431163D8998A9000CA96CADBB45_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___0_sender, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method) ;

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m948AC98E08D0ABBFAC38557B796DD79877904DB9 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___0_internalSnapshot, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___2_parentSnapshot, DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___3_parentList, const RuntimeMethod* method) ;
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_GetValue_m8CE6C5E7DC1FA7DF2D3768351402A3071B43358C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, bool ___0_useExportFormat, const RuntimeMethod* method) ;
// System.String Firebase.Database.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m68793A52FE65FECF6EBE00644FD8E3B9D7549136 (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, const RuntimeMethod* method) ;
// Firebase.Variant Firebase.Database.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* InternalDataSnapshot_value_mD0ED1285B11BE056D3D290E79B8AEFB6B0D5750D (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, const RuntimeMethod* method) ;
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant,Firebase.VariantExtension/KeyOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariantExtension_ToObject_m48E049BEBDB87869AC67AE16FB2F31E7981CA594 (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_variant, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4 (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m2F61999312C601BF78E91D36A83A81F86EFD0C4F (int32_t ___0_error, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_mADE8BF63184FF3A6B166B16C8B2C3890F4E2AA87 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___0_code, String_t* ___1_message, String_t* ___2_details, const RuntimeMethod* method) ;
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mFB0C416EC37A86BFC866C3B841FA6E30F22F002E (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___0_internalQuery, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C_inline (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___0_value, const RuntimeMethod* method) ;
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalDatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* InternalDatabaseReference_Child_m6385A496BB5DD4F533FD891004DC37CA1F235B1A (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::get_Database()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* DatabaseReference_get_Database_m8A3E998AF1DE24536B74A1584569DF886DCE252E_inline (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_m4F35D1AC9D2AED2A7E780C76D46C2DB72D982B93 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* ___0_internalRef, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) ;
// Firebase.Variant Firebase.Database.Internal.Utilities::MakeVariant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* Utilities_MakeVariant_mAD868620EF30F894C9B34AFC0F58897705DCED78 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.InternalDatabaseReference::SetValueAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* InternalDatabaseReference_SetValueAsync_mD55EBED21F562BD036AA5886A9FEBB74D7863E86 (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::WrapInternalDefaultTask(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_WrapInternalDefaultTask_mD2BA3FB54EF67FC34C6D8E1124C16685A27D6F8B (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_it, const RuntimeMethod* method) ;
// System.String Firebase.Database.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m1EF82C3E8799AD219F46EF643E1CCC1F24404A00 (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m7879D5367934E8A8D1AC36B4E62A765333952F83 (U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cppRetVal;
}
// System.Boolean Firebase.Database.Query::CheckTaskStatus<System.Boolean>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
inline bool Query_CheckTaskStatus_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1D8412817F39898D0540277F7EEFE5C0F6CE1414 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___1_tcs, const RuntimeMethod* method)
{
	return ((  bool (*) (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))Query_CheckTaskStatus_TisIl2CppFullySharedGenericAny_m3CA4E6F37DD449EBD0B7C015B456069B5DFABA3F_gshared)((Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED*)__this, ___0_task, (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)___1_tcs, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)&___0_result, method);
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_value, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::Remove(TKey)
inline bool Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m32270C5F86D65B3E544A5FCBF9B6A2B6F1D648FC (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962 (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_GetInstance_m026B66421CE54361558C66EA439144F7B42F330A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_url, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, String_t* ___0_key, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// Firebase.Database.InternalFirebaseDatabase Firebase.Database.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* InternalFirebaseDatabase_GetInstanceInternal_m398BDDEDC7D96F575D89B8F32614D0579FF82CB6 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_url, int32_t* ___2_init_result_out, const RuntimeMethod* method) ;
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_mD73A6212DB32399675D99A13138CDC1F26EE0C86 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___1_internalDB, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617 (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, String_t* ___0_key, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* InternalFirebaseDatabase_GetReference_m6C73048E76BBF88BA25C10B97CBACFE76485F7D0 (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::.ctor()
inline void Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994 (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_m8273861D166C478D4592F392E84A9AD77879EF1A (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* __this, InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___0_internalQuery, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_mDFC3BECF0BD387DB7E4E29F750829C4D6A67C7D1 (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* __this, InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___0_internalQuery, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Query/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m2514DB000570AADA4C858E82AE4CC5557ACA82D5 (U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93 (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6D6019F9EDE17393140A8A515289A1D0EC4C188A (Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m17B9BF57CB656DDB8C9009DAB0BA2532E32F5CA0 (Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* __this, Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182*, const RuntimeMethod*))Task_1_ContinueWith_m1E6D9992EA0D24A89938F63C6D4A4DA425E56814_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, (Action_1_tE6E50482E4ADBDF3F8AAB2E1468F55A7DF4BB182*)___0_continuationAction, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::get_Task()
inline Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_inline (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*)il2cppRetVal;
}
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* InternalQuery_GetValueAsync_m1FA7B1F73A2EA7887C94D194124EA52D5D4D71BD (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_WrapInternalDataSnapshotTask_m6741076F9B35964B59B90186C3FE0339E63175B2 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* ___0_it, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Query::CheckTaskStatus<Firebase.Database.DataSnapshot>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
inline bool Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* ___1_tcs, const RuntimeMethod* method)
{
	return ((  bool (*) (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))Query_CheckTaskStatus_TisIl2CppFullySharedGenericAny_m3CA4E6F37DD449EBD0B7C015B456069B5DFABA3F_gshared)((Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED*)__this, ___0_task, (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)___1_tcs, method);
}
// TResult System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>::get_Result()
inline InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* Task_1_get_Result_m6A4706F5264B536B306211AB12085C807F4481ED (Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* __this, const RuntimeMethod* method)
{
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* il2cppRetVal;
	((  void (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* DataSnapshot_CreateSnapshot_m2EDD325B01CE1C59B70AB5689316F66E6EE5C1F7 (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___0_internalSnapshot, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54 (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m207504FA1000EF0BD7832B183D80014021D26A0B (int32_t ___0_key, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_m49F7F2106ADDC0BA49B3E52A984FCC0E9C631B82 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_mAA4E8E317176CDF9D079F5BDF76E3F75BF707808 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_m3265978851D3C9EC5D2E8167DFAFF0427ED0BA10 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m17D716EFFAF752B7DBF402C73D757D02C34457EB (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mD0599D179BE401E0A2DFD2EBA181066E72EF8637 (U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_mC87E41E4345E5E5579A2403C4FE6C1589F399FBB (TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m227356FFA0C750F08EAAC87EC890D84BBAC3BEB1 (const RuntimeMethod* method) ;
// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128 (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869 (TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m58C4BD8A0F4F1FAA417EC05E2EDC79F0D6C5ADB7_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, ___0_exception, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::get_Task()
inline Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_inline (TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D*)il2cppRetVal;
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___0_errorCode, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m5E0404E6BF573ECD3645640AFCE8DBD63173F55B (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_mA2EFD93C21FC6CA05D9DCD1601D3BB56CB029A71 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* ___0_userCompletionCallback, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_m30E2B463AC06313078F644896B453ED1937642ED (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mAA1C87AAB261AA0227140B239FDCC11396B00DC0 (SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::.ctor()
inline void Dictionary_2__ctor_mEE1EC7670144B9AFEDEC5B1066B48CB8035EDD27 (Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m005E9A5B663C38227381B4BAFE67FC74CECD1BDA (Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* __this, int32_t ___0_key, Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.IntPtr Firebase.Database.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m3D3A3D578D03C34950D4EC51C0F715DFF2A459F6 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_mBFABB246B4475320E815EF1A38869A089F6D256D (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m194F02B4821ECDF29014865E577588C882B88FB9 (Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* __this, int32_t ___0_key, Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::Remove(TKey)
inline bool Dictionary_2_Remove_m6CD847B4ECAE767215C81F8BD395BF954EA86A22 (Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_inline (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mB092BCAAE048658527EC96816197C26AD97858BC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m9F3C28735B00145DCAE15E9B6322FEC3C36AF580 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_mFE66424CFF346ADACE64F9B8CD6CCFF1495F989E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m697E1A225D18E76664CE7B7FCAFFFE9358B7EDF3 (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m0411DE933C6264C4DC4ECB4F234DAB9AFC6EFB29 (TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m094D37FCDE8D0431163D8998A9000CA96CADBB45_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// Firebase.Database.InternalDataSnapshot Firebase.Database.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* Future_InternalDataSnapshot_GetResult_m49E679F1272DF0A77AF56930C32ADC5BD4FA940F (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m719C9EE8C3B930D30106E4341ED056D985A26277 (TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* __this, InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m20A3A9EACC332D8ECC8AA9E690B90E6C56835CED_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m7F475749AB105348EAE69F618A39E88CDD38D0E1 (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___0_instance, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_0_mA66AD0BD29EE77022482443C931BD25E9912CCDD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mFA0925524043CB4A6CF05D1077A001F4DD42465E (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_m04AFDE17136626FCF0AEF17085C209E2F7C9DBA2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, int32_t* ___2_jarg3, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_mE61FE74E49CF311EC4D87ED24A7C243D62FE9856 (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::getCPtr(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F InternalFirebaseDatabase_getCPtr_m227152CAAADEC9E1CDDAC559F5168E1180090D8B (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___0_obj, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m7D07BAA524947C1C37B3FBD2B905FA812FC83ADF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_m9B4F29AEFAB9F75C0DDE194CC9F240A56944EEFC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_mA2EE4631F0F9A099237A65D31DE7BE43C12B5F9B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_m287A94D7F9C95E4751E89B29957EB46AD0209643 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_mCBCDC0D6E1290E1A8412B59A4A8956BC32DFA163 (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_m90A6FFAC0DB2AC6092334DDE739D4AE8C290AEF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_GetValue_mE8FF00BBF07A616360EDCAFF9E400464EF73409E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_m94A6E26951332FD46E16A3962BF7ECA782959B6C (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.Future_InternalDataSnapshot::GetTask(Firebase.Database.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* Future_InternalDataSnapshot_GetTask_m1090C78F556C35E670B74B2968C8CDC384E5E196 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* ___0_fu, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_m08E3E8399135C4E65FA85F34290904A922ABCCAE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m87E4EF6960BA02F67F47ABB56A4375BF042DB2A4 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_mFC5FEF32EE1234BA8AB3AD6995A968C8B7C9A02F (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_jarg1, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m76F43AD90DFFBE797FA6C3C7D8E7CBA2E6B87B04 (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m71F33785368094C7D023E22FF3ACAA41EE1F30DB (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_jarg1, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___1_jarg2, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___2_jarg3, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m96801A06500A9E85E0730EC68A362A14C76353DF (intptr_t ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_mF168588E6A99DDC51DBB08761DD9EC5897B67CD7 (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m7C09B39DA3F1BA03E6F5A3C0B07FAC9F00BD90C1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_mEC96604AADD48C41DB4720653EA62507D38106E5 (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m27D0CC706E61AA9579E37860A86E088B7C93AFFE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_Child__SWIG_0_mF116A429BD565D6DE91948DEC8F8620BEC7D2E09 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Variant::getCPtr(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F Variant_getCPtr_m02745459FA3350FFDC29D01587C8D797BFC10067 (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SetValue(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SetValue_m5943066DDF3AF1FF2A4477CE8C531B4711B24709 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) ;
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043 (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* ___0_fu, const RuntimeMethod* method) ;
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_m217ECDD7213E8262A4F8D3D2370A9866833FCDB3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m4435F9A51D157BA76A38E4D2B82D7FC977DB7B23 (SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m01717AFAD645A2B00D656E8783AB1BAB58B60F8C (SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mC00FC1080D4B7ACCA73425E9F4CFD711A425396F (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mBA043F290EE08502EC632E3E5F2B45194793F91E (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m377FFF99FAB396800F30BFE8A7DD758BAF06F2AC (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m186709ECD9C1432E633A146E0A0BE9B27A0B0FCF (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m9B53F0D753F9D0084B0A098F3A06372BEF88BBC5 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m7718782C1E9A9A3B13A63BC991DBF557CE6BB84F (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m21BD2976DC85588FD4B0AE11042A9BF962774CF6 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m19DBC9CDB96739AF984498CCB4A5697EEEEC7D30 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE151CCDC422D04D6B718DA55C627F0F496F7C995 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m01B698BBF46D7129825119F5F5C79237FF172A00 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m26D600DFFBB9789EEE2E75DE261A8AA48A2773A6 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m751E631864FDF20467E3BF8DDD39751D085C7EE8 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m8052362115CB69B05B59DE95B0DD7626E58ED4C3 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA8CB9DDD630EE287A396E5D06E805B8AA5EF8BF6 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905 (Exception_t* ___0_e, const RuntimeMethod* method) ;
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380 (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD64F44DD005A28E34EC39C5CBB48175631C3C072 (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m1DB3C84F742953AE94FF31C0794DE618A8F82C02 (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___0_applicationDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___1_arithmeticDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___2_divideByZeroDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___4_invalidCastDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___5_invalidOperationDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___6_ioDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___7_nullReferenceDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___8_outOfMemoryDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___9_overflowDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___10_systemExceptionDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m0215CBEF6143F677C79684EB63C73A97777BA1C3 (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___0_argumentDelegate, ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) ;
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mFCEF2F2C6C95F8378679E9EF5753E3B42065457C (String_t* ___0_cString, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m09A3E195CDD7DAEAB46D62AA8B42428EB15F1944 (SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m9BB704D671386CBA6AA948E6F20AFB82091564DF (SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* ___0_stringDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m8095E9DE76B1928F9BC80950EB01834E481DC20D (int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m594BBE968EF6D2838A00A1FD6D9636A8C8826B12 (int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m9AB5FF95793990985428D19F313ACBC24E72D851 (int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_m77AD3B221D83B5E24AC82532606CFBF38B7A1058 (int32_t ___0_uid, InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** ___1_listener, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m703F13125386B07B7EC39F6C6AE6A1F827475559 (U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m9A18CB149B5F6B19618F0745EFAB6ED9701EA6CF (U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m74BE29A48F64486243F16A7BFC3B3AB2579C99F5 (U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m278F4837562673E7CA3C172D6BDB62BD9238B78E (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m11125CD973C22C05C781648FD541AAA731526F8C (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m163BDACD7E477F4E52E07CCC737152EC484BC0F3 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_cancelledCallback, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___1_childChangeCallback, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___2_childRemovedCallback, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180 (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m2EF3D7ACFD479D8CEFE32FCA22A1817E5B578E08 (intptr_t ___0_listener, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mCC4C39B30A23688A32A2A048AF0FF38F23AFA60D (int32_t ___0_callbackId, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** ___1_childListener, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_snapshot, String_t* ___1_previousChildName, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* __this, RuntimeObject* ___0_sender, ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mECA22BB52D5699902D9297AA71E8CEE322A794EB (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, const RuntimeMethod* method) ;
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* DatabaseError_FromError_m6159F357D50E2B0B0EBE88BF88D47AEAD0B836DE (int32_t ___0_error, String_t* ___1_msg, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mCE05C1743B7236D84ADFC50D1DC746D205C7E4CC (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_error, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851 (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* __this, int32_t ___0_key, InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m6D7CA28EE5C08ED9103B2EAD4ACCD0016ACDA0CC (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::Remove(TKey)
inline bool Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7 (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::.ctor()
inline void Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709 (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_mB87BCD8900157B34D77C3D719E94A05FC2D5B5A2 (int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m488ACD2B13095C11B53C435167BF0EF21DBDAFE6 (int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mFE8599AB5E622C2D83A9137B928B3F718073A012 (U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mEFA4AD4328B629C396FDAA9929191B23FAFBC74F (U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m80BF259A3B5530546C3765A0D9822B7F76644BE4 (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m02FA94059B9B4CB903AD2A9FC461D1DFBC2BDEAC (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_cancelledCallback, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___1_valueChangedCallback, const RuntimeMethod* method) ;
// System.Void Firebase.Database.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m34D4329F6CCD18720B1AAE2CF1725C8EF418FBD6 (intptr_t ___0_listener, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m398354C414B128FF471D0F55245E89CA396C6CB1 (int32_t ___0_callbackId, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** ___1_valueListener, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m3746F9CA3C31CF3ECFE96A4C2E258D394149F7BF (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_snapshot, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m138A2D3506A270F2AB9DF6EE30246FE32C0F2672_inline (EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* __this, RuntimeObject* ___0_sender, ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_mFAFCFA9665476BAD0D16CD6906EA3554ABB0F283 (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_error, const RuntimeMethod* method) ;
// Firebase.Variant Firebase.Variant::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* Variant_FromObject_m5D406B8B5BBF1DB6FDD90D83468B7F29B01501B7 (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m30665E8EB8BE7EC9D7EF15D7B91CD3CD0FDDDB73 (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* __this, String_t* ___0_message, Exception_t* ___1_cause, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_Future_InternalDataSnapshot(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_0(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal(void*, char*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDataSnapshot(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_key_string(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_value(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalQuery(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_GetValue(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyValueListener(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyChildListener(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDatabaseReference(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_Child__SWIG_0(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_SetValue(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_url(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_DatabaseInternal(Il2CppMethodPointer);
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
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_snapshot, String_t* ___1_previousChildName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___1_previousChildName;
		ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3_inline(__this, L_0, NULL);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_1 = ___0_snapshot;
		ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mCE05C1743B7236D84ADFC50D1DC746D205C7E4CC (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___0_error;
		ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_value, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___0_value;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_value, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___0_value;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPreviousChildNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousChildNameU3Ek__BackingField_3), (void*)L_0);
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
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m948AC98E08D0ABBFAC38557B796DD79877904DB9 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___0_internalSnapshot, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___2_parentSnapshot, DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___3_parentList, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_0 = ___0_internalSnapshot;
		__this->___internalSnapshot_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalSnapshot_0), (void*)L_0);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1 = ___1_database;
		__this->___database_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_1), (void*)L_1);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_2 = ___2_parentSnapshot;
		__this->___parentSnapshot_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentSnapshot_2), (void*)L_2);
		DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* L_3 = ___3_parentList;
		__this->___parentList_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentList_3), (void*)L_3);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* DataSnapshot_CreateSnapshot_m2EDD325B01CE1C59B70AB5689316F66E6EE5C1F7 (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___0_internalSnapshot, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_0 = NULL;
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_0 = ___0_internalSnapshot;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1 = ___1_database;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_2 = (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A*)il2cpp_codegen_object_new(DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DataSnapshot__ctor_m948AC98E08D0ABBFAC38557B796DD79877904DB9(L_2, L_0, L_1, (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A*)NULL, (DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7*)NULL, NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_3 = V_0;
		return L_3;
	}
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataSnapshot_GetValue_m8CE6C5E7DC1FA7DF2D3768351402A3071B43358C(__this, (bool)0, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_0 = __this->___internalSnapshot_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDataSnapshot_key_string_m68793A52FE65FECF6EBE00644FD8E3B9D7549136(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_GetValue_m8CE6C5E7DC1FA7DF2D3768351402A3071B43358C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, bool ___0_useExportFormat, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_0 = __this->___internalSnapshot_0;
		NullCheck(L_0);
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_1;
		L_1 = InternalDataSnapshot_value_mD0ED1285B11BE056D3D290E79B8AEFB6B0D5750D(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = VariantExtension_ToObject_m48E049BEBDB87869AC67AE16FB2F31E7981CA594(L_1, 1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Database.DataSnapshot::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_ToString_m6BC5EFD78A962DE07A12D64ED72E0B4A68782E19 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6;
		L_6 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		String_t* L_8;
		L_8 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_7, NULL);
		V_0 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		String_t* L_9 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.DatabaseError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__cctor_mF8B0A8017111B053958D71D8B12BEB5D175CEAA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_0 = (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*)il2cpp_codegen_object_new(Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4(L_0, Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0), (void*)L_0);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_1 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_1, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1), (void*)L_1);
		RuntimeObject* L_2 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_2, (-1), _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		RuntimeObject* L_3 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_3, ((int32_t)-2), _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		RuntimeObject* L_4 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_4, ((int32_t)-3), _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		RuntimeObject* L_5 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_5, ((int32_t)-4), _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		RuntimeObject* L_6 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_6);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_6, ((int32_t)-6), _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		RuntimeObject* L_7 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_7, ((int32_t)-7), _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		RuntimeObject* L_8 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_8, ((int32_t)-8), _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		RuntimeObject* L_9 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_9, ((int32_t)-9), _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		RuntimeObject* L_10 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_10, ((int32_t)-10), _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		RuntimeObject* L_11 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_11, ((int32_t)-11), _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		RuntimeObject* L_12 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_12, ((int32_t)-24), _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		RuntimeObject* L_13 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_13, ((int32_t)-25), _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		RuntimeObject* L_14 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_14, ((int32_t)-999), _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		RuntimeObject* L_15 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_15, _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C, (-1));
		RuntimeObject* L_16 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_16, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, ((int32_t)-2));
		RuntimeObject* L_17 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_17, _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A, ((int32_t)-3));
		RuntimeObject* L_18 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_18, _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C, ((int32_t)-4));
		RuntimeObject* L_19 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_19, _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983, ((int32_t)-6));
		RuntimeObject* L_20 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_20, _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5, ((int32_t)-7));
		RuntimeObject* L_21 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_21, _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50, ((int32_t)-8));
		RuntimeObject* L_22 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_22, _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A, ((int32_t)-9));
		RuntimeObject* L_23 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_23, _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102, ((int32_t)-10));
		RuntimeObject* L_24 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_24, _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92, ((int32_t)-24));
		RuntimeObject* L_25 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_25, _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3, ((int32_t)-25));
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_mADE8BF63184FF3A6B166B16C8B2C3890F4E2AA87 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___0_code, String_t* ___1_message, String_t* ___2_details, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* G_B2_0 = NULL;
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_code;
		DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_message;
		DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0_inline(__this, L_1, NULL);
		String_t* L_2 = ___2_details;
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___2_details;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001f:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B_inline(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCodeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDetailsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m2F61999312C601BF78E91D36A83A81F86EFD0C4F (int32_t ___0_error, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_error;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0054;
			}
			case 4:
			{
				goto IL_0059;
			}
			case 5:
			{
				goto IL_005e;
			}
			case 6:
			{
				goto IL_0063;
			}
			case 7:
			{
				goto IL_0068;
			}
			case 8:
			{
				goto IL_006d;
			}
			case 9:
			{
				goto IL_0072;
			}
			case 10:
			{
				goto IL_007a;
			}
			case 11:
			{
				goto IL_007f;
			}
			case 12:
			{
				goto IL_007f;
			}
			case 13:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0045:
	{
		V_1 = ((int32_t)-4);
		goto IL_0087;
	}

IL_004a:
	{
		V_1 = ((int32_t)-6);
		goto IL_0087;
	}

IL_004f:
	{
		V_1 = ((int32_t)-7);
		goto IL_0087;
	}

IL_0054:
	{
		V_1 = ((int32_t)-8);
		goto IL_0087;
	}

IL_0059:
	{
		V_1 = ((int32_t)-24);
		goto IL_0087;
	}

IL_005e:
	{
		V_1 = ((int32_t)-2);
		goto IL_0087;
	}

IL_0063:
	{
		V_1 = ((int32_t)-9);
		goto IL_0087;
	}

IL_0068:
	{
		V_1 = ((int32_t)-3);
		goto IL_0087;
	}

IL_006d:
	{
		V_1 = ((int32_t)-10);
		goto IL_0087;
	}

IL_0072:
	{
		V_1 = ((int32_t)-999);
		goto IL_0087;
	}

IL_007a:
	{
		V_1 = ((int32_t)-25);
		goto IL_0087;
	}

IL_007f:
	{
		V_1 = ((int32_t)-999);
		goto IL_0087;
	}

IL_0087:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* DatabaseError_FromError_m6159F357D50E2B0B0EBE88BF88D47AEAD0B836DE (int32_t ___0_error, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* V_2 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___0_error;
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DatabaseError_ErrorToCode_m2F61999312C601BF78E91D36A83A81F86EFD0C4F(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___1_msg;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = ___1_msg;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_5 = ___1_msg;
		G_B4_0 = L_5;
		goto IL_0026;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.String>::get_Item(TKey) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_6, L_7);
		G_B4_0 = L_8;
	}

IL_0026:
	{
		V_1 = G_B4_0;
		int32_t L_9 = V_0;
		String_t* L_10 = V_1;
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_11 = (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9*)il2cpp_codegen_object_new(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DatabaseError__ctor_mADE8BF63184FF3A6B166B16C8B2C3890F4E2AA87(L_11, L_9, L_10, (String_t*)NULL, NULL);
		V_2 = L_11;
		goto IL_0032;
	}

IL_0032:
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_12 = V_2;
		return L_12;
	}
}
// System.String Firebase.Database.DatabaseError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_ToString_m055C002095D30932189163DF5A5AE178560BAE12 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A, L_0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
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
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962 (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m30665E8EB8BE7EC9D7EF15D7B91CD3CD0FDDDB73 (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* __this, String_t* ___0_message, Exception_t* ___1_cause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_cause;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_m4F35D1AC9D2AED2A7E780C76D46C2DB72D982B93 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* ___0_internalRef, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) 
{
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_0 = ___0_internalRef;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1 = ___1_database;
		Query__ctor_mFB0C416EC37A86BFC866C3B841FA6E30F22F002E(__this, L_0, L_1, NULL);
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_2 = ___0_internalRef;
		__this->___internalReference_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalReference_4), (void*)L_2);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3 = ___1_database;
		DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C_inline(__this, L_3, NULL);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::get_Database()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* DatabaseReference_get_Database_m8A3E998AF1DE24536B74A1584569DF886DCE252E (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = __this->___U3CDatabaseU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___0_value, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = ___0_value;
		__this->___U3CDatabaseU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___0_pathString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* V_0 = NULL;
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_0 = __this->___internalReference_4;
		String_t* L_1 = ___0_pathString;
		NullCheck(L_0);
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_2;
		L_2 = InternalDatabaseReference_Child_m6385A496BB5DD4F533FD891004DC37CA1F235B1A(L_0, L_1, NULL);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3;
		L_3 = DatabaseReference_get_Database_m8A3E998AF1DE24536B74A1584569DF886DCE252E_inline(__this, NULL);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_4 = (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D*)il2cpp_codegen_object_new(DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DatabaseReference__ctor_m4F35D1AC9D2AED2A7E780C76D46C2DB72D982B93(L_4, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_5 = V_0;
		return L_5;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetValueAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_SetValueAsync_m4BF66416AA9AD3C1022FAC34FB3E7B22F355DC00 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_0 = __this->___internalReference_4;
		RuntimeObject* L_1 = ___0_value;
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_2;
		L_2 = Utilities_MakeVariant_mAD868620EF30F894C9B34AFC0F58897705DCED78(L_1, NULL);
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = InternalDatabaseReference_SetValueAsync_mD55EBED21F562BD036AA5886A9FEBB74D7863E86(L_0, L_2, NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = DatabaseReference_WrapInternalDefaultTask_mD2BA3FB54EF67FC34C6D8E1124C16685A27D6F8B(__this, L_3, NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.Database.DatabaseReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseReference_ToString_mC43EB2D3C99EAF07116EBAD3CCCD2BE6037B8606 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_0 = __this->___internalReference_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDatabaseReference_url_m1EF82C3E8799AD219F46EF643E1CCC1F24404A00(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseReference_Equals_mB96AC53247EB74CD6D3713588588BF3858C72E7A (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D*)IsInstSealed((RuntimeObject*)L_0, DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseReference_GetHashCode_mAE101105F6D0C81635E79097D21CBF4A86E274EA (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::WrapInternalDefaultTask(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_WrapInternalDefaultTask_mD2BA3FB54EF67FC34C6D8E1124C16685A27D6F8B (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m45CF48763C805E6AD9D57D64D6326B3E4EB7B38E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* L_0 = (U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass29_0__ctor_m7879D5367934E8A8D1AC36B4E62A765333952F83(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* L_2 = V_0;
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_3 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_3, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___tcs_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___tcs_1), (void*)L_3);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = ___0_it;
		U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* L_5 = V_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_6 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m45CF48763C805E6AD9D57D64D6326B3E4EB7B38E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C(L_4, L_6, NULL);
		U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_9 = L_8->___tcs_1;
		NullCheck(L_9);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
		L_10 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_9, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		V_1 = L_10;
		goto IL_003a;
	}

IL_003a:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11 = V_1;
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
// System.Void Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m7879D5367934E8A8D1AC36B4E62A765333952F83 (U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::<WrapInternalDefaultTask>b__0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m45CF48763C805E6AD9D57D64D6326B3E4EB7B38E (U3CU3Ec__DisplayClass29_0_t9A4F4EEB1FCE9E8F55DD25412C9CA5DB7CEFEEFF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_CheckTaskStatus_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1D8412817F39898D0540277F7EEFE5C0F6CE1414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_0 = __this->___U3CU3E4__this_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___0_task;
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_2 = __this->___tcs_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Query_CheckTaskStatus_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1D8412817F39898D0540277F7EEFE5C0F6CE1414(L_0, L_1, L_2, Query_CheckTaskStatus_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1D8412817F39898D0540277F7EEFE5C0F6CE1414_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_5 = __this->___tcs_1;
		NullCheck(L_5);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_5, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
	}

IL_0026:
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
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_mD73A6212DB32399675D99A13138CDC1F26EE0C86 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___1_internalDB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_app;
		FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline(__this, L_0, NULL);
		InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_1 = ___1_internalDB;
		__this->___internalDatabase_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalDatabase_0), (void*)L_1);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85(L_2, L_3, NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Finalize_m03DBF4DED5E098A1524E069DEA659A1C69867EAF (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_eventArgs, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* V_3 = NULL;
	bool V_4 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0098;
					}
				}
				{
					FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0098:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_3 = __this->___internalDatabase_0;
				V_2 = (bool)((((RuntimeObject*)(InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_4 = V_2;
				if (!L_4)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0099;
			}

IL_0025_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_5 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
				V_3 = L_5;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_004c_1:
					{// begin finally (depth: 2)
						{
							bool L_6 = V_4;
							if (!L_6)
							{
								goto IL_0057_1;
							}
						}
						{
							Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_7 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
						}

IL_0057_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_8 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_4), NULL);
					il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
					Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_9 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
					String_t* L_10 = __this->___name_1;
					NullCheck(L_9);
					bool L_11;
					L_11 = Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA(L_9, L_10, Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA_RuntimeMethod_var);
					goto IL_0058_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0058_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_12;
				L_12 = FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline(__this, NULL);
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_13 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_13, __this, (intptr_t)((void*)FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var), NULL);
				NullCheck(L_12);
				FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289(L_12, L_13, NULL);
				FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline(__this, (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL, NULL);
				InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_14 = __this->___internalDatabase_0;
				NullCheck(L_14);
				InternalFirebaseDatabase_Dispose_m32270C5F86D65B3E544A5FCBF9B6A2B6F1D648FC(L_14, NULL);
				__this->___internalDatabase_0 = (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___internalDatabase_0), (void*)(InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F*)NULL);
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = __this->___U3CAppU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_value, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_value;
		__this->___U3CAppU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_GetInstance_mA5B21F93A8D42BE9A0BBDD4A48B130DBEA65F811 (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	bool V_1 = false;
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		V_0 = L_0;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* L_3 = (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50384A583A192C06635CCD8BE23070E725470116)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_mA5B21F93A8D42BE9A0BBDD4A48B130DBEA65F811_RuntimeMethod_var)));
	}

IL_001b:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_4 = V_0;
		String_t* L_5 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_6;
		L_6 = FirebaseDatabase_GetInstance_m026B66421CE54361558C66EA439144F7B42F330A(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_7 = V_2;
		return L_7;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_GetInstance_m026B66421CE54361558C66EA439144F7B42F330A (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* V_7 = NULL;
	bool V_8 = false;
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* V_9 = NULL;
	int32_t G_B7_0 = 0;
	{
		String_t* L_0 = ___1_url;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* L_3 = (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_m026B66421CE54361558C66EA439144F7B42F330A_RuntimeMethod_var)));
	}

IL_0017:
	{
		V_0 = (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960*)NULL;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_4 = ___0_app;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(L_4, NULL);
		String_t* L_6 = ___1_url;
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_5, L_6, NULL);
		V_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_8 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
		V_3 = L_8;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009f:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_4;
					if (!L_9)
					{
						goto IL_00aa;
					}
				}
				{
					Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_10 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_00aa:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_11 = V_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_4), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_12 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
				String_t* L_13 = V_1;
				NullCheck(L_12);
				bool L_14;
				L_14 = Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A(L_12, L_13, (&V_0), Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_5;
				if (!L_15)
				{
					goto IL_009c_1;
				}
			}
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_16 = ___0_app;
				String_t* L_17 = ___1_url;
				InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_18;
				L_18 = InternalFirebaseDatabase_GetInstanceInternal_m398BDDEDC7D96F575D89B8F32614D0579FF82CB6(L_16, L_17, (&V_6), NULL);
				V_7 = L_18;
				InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_19 = V_7;
				if (!L_19)
				{
					goto IL_006b_1;
				}
			}
			{
				int32_t L_20 = V_6;
				G_B7_0 = ((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
				goto IL_006c_1;
			}

IL_006b_1:
			{
				G_B7_0 = 1;
			}

IL_006c_1:
			{
				V_8 = (bool)G_B7_0;
				bool L_21 = V_8;
				if (!L_21)
				{
					goto IL_007e_1;
				}
			}
			{
				DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* L_22 = (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var)));
				NullCheck(L_22);
				DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_m026B66421CE54361558C66EA439144F7B42F330A_RuntimeMethod_var)));
			}

IL_007e_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_23 = ___0_app;
				InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_24 = V_7;
				FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_25 = (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960*)il2cpp_codegen_object_new(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				FirebaseDatabase__ctor_mD73A6212DB32399675D99A13138CDC1F26EE0C86(L_25, L_23, L_24, NULL);
				V_0 = L_25;
				FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_26 = V_0;
				String_t* L_27 = V_1;
				NullCheck(L_26);
				L_26->___name_1 = L_27;
				Il2CppCodeGenWriteBarrier((void**)(&L_26->___name_1), (void*)L_27);
				il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_28 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
				String_t* L_29 = V_1;
				FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_30 = V_0;
				NullCheck(L_28);
				Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617(L_28, L_29, L_30, Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617_RuntimeMethod_var);
			}

IL_009c_1:
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_31 = V_0;
		V_9 = L_31;
		goto IL_00b0;
	}

IL_00b0:
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_32 = V_9;
		return L_32;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* V_0 = NULL;
	{
		InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_0 = __this->___internalDatabase_0;
		NullCheck(L_0);
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_1;
		L_1 = InternalFirebaseDatabase_GetReference_m6C73048E76BBF88BA25C10B97CBACFE76485F7D0(L_0, NULL);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_2 = (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D*)il2cpp_codegen_object_new(DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DatabaseReference__ctor_m4F35D1AC9D2AED2A7E780C76D46C2DB72D982B93(L_2, L_1, __this, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__cctor_m626639DA9AA4F9F539D913F8C1816036B591FB43 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_0 = (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF*)il2cpp_codegen_object_new(Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994(L_0, Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994_RuntimeMethod_var);
		((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3), (void*)L_0);
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
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mFB0C416EC37A86BFC866C3B841FA6E30F22F002E (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___0_internalQuery, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* L_0 = ___0_internalQuery;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean Firebase.Database.InternalQuery::is_valid() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Query__ctor_mFB0C416EC37A86BFC866C3B841FA6E30F22F002E_RuntimeMethod_var)));
	}

IL_0021:
	{
		InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* L_4 = ___0_internalQuery;
		__this->___internalQuery_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalQuery_0), (void*)L_4);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_5 = ___1_database;
		__this->___database_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_1), (void*)L_5);
		InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* L_6 = ___0_internalQuery;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_7 = ___1_database;
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_8 = (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)il2cpp_codegen_object_new(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		InternalValueListener__ctor_m8273861D166C478D4592F392E84A9AD77879EF1A(L_8, L_6, L_7, NULL);
		__this->___valueListener_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueListener_2), (void*)L_8);
		InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* L_9 = ___0_internalQuery;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_10 = ___1_database;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_11 = (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)il2cpp_codegen_object_new(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		InternalChildListener__ctor_mDFC3BECF0BD387DB7E4E29F750829C4D6A67C7D1(L_11, L_9, L_10, NULL);
		__this->___childListener_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childListener_3), (void*)L_11);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_WrapInternalDataSnapshotTask_m6741076F9B35964B59B90186C3FE0339E63175B2 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* ___0_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m17B9BF57CB656DDB8C9009DAB0BA2532E32F5CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m7F06860B88DE40B341B7B6424B56E2D654A32B5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* V_0 = NULL;
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* L_0 = (U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_m2514DB000570AADA4C858E82AE4CC5557ACA82D5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* L_2 = V_0;
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_3 = (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B*)il2cpp_codegen_object_new(TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93(L_3, TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___tcs_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___tcs_1), (void*)L_3);
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_4 = ___0_it;
		U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* L_5 = V_0;
		Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7* L_6 = (Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7*)il2cpp_codegen_object_new(Action_1_t6399A265B182F78DB00181AD52B2EF4B01E027D7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m6D6019F9EDE17393140A8A515289A1D0EC4C188A(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m7F06860B88DE40B341B7B6424B56E2D654A32B5A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_1_ContinueWith_m17B9BF57CB656DDB8C9009DAB0BA2532E32F5CA0(L_4, L_6, Task_1_ContinueWith_m17B9BF57CB656DDB8C9009DAB0BA2532E32F5CA0_RuntimeMethod_var);
		U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_9 = L_8->___tcs_1;
		NullCheck(L_9);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_10;
		L_10 = TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_inline(L_9, TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_RuntimeMethod_var);
		V_1 = L_10;
		goto IL_003a;
	}

IL_003a:
	{
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_11 = V_1;
		return L_11;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, const RuntimeMethod* method) 
{
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* V_0 = NULL;
	{
		InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* L_0 = __this->___internalQuery_0;
		NullCheck(L_0);
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_1;
		L_1 = InternalQuery_GetValueAsync_m1FA7B1F73A2EA7887C94D194124EA52D5D4D71BD(L_0, NULL);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_2;
		L_2 = Query_WrapInternalDataSnapshotTask_m6741076F9B35964B59B90186C3FE0339E63175B2(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_3 = V_0;
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
// System.Void Firebase.Database.Query/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m2514DB000570AADA4C858E82AE4CC5557ACA82D5 (U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Query/<>c__DisplayClass21_0::<WrapInternalDataSnapshotTask>b__0(System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m7F06860B88DE40B341B7B6424B56E2D654A32B5A (U3CU3Ec__DisplayClass21_0_t0F6ABC9EE8ABA23C4C072727A44A85595A9032F0* __this, Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m6A4706F5264B536B306211AB12085C807F4481ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* L_0 = __this->___U3CU3E4__this_0;
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_1 = ___0_task;
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_2 = __this->___tcs_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B(L_0, L_1, L_2, Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_5 = __this->___tcs_1;
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_6 = ___0_task;
		NullCheck(L_6);
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_7;
		L_7 = Task_1_get_Result_m6A4706F5264B536B306211AB12085C807F4481ED(L_6, Task_1_get_Result_m6A4706F5264B536B306211AB12085C807F4481ED_RuntimeMethod_var);
		Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* L_8 = __this->___U3CU3E4__this_0;
		NullCheck(L_8);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_9 = L_8->___database_1;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_10;
		L_10 = DataSnapshot_CreateSnapshot_m2EDD325B01CE1C59B70AB5689316F66E6EE5C1F7(L_7, L_9, NULL);
		NullCheck(L_5);
		TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54(L_5, L_10, TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54_RuntimeMethod_var);
	}

IL_003b:
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
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m3746F9CA3C31CF3ECFE96A4C2E258D394149F7BF (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_snapshot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___0_snapshot;
		ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_mFAFCFA9665476BAD0D16CD6906EA3554ABB0F283 (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___0_error;
		ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449 (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_value, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___0_value;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_value, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___0_value;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m207504FA1000EF0BD7832B183D80014021D26A0B(int32_t ___0_key)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m207504FA1000EF0BD7832B183D80014021D26A0B(___0_key, NULL);

}
// System.Void Firebase.Database.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_m94A6E26951332FD46E16A3962BF7ECA782959B6C (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___callbackData_6 = L_0;
		__this->___SWIG_CompletionCB_7 = (SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9*)NULL);
		intptr_t L_1 = ___0_cPtr;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_m49F7F2106ADDC0BA49B3E52A984FCC0E9C631B82(L_1, NULL);
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
// System.Void Firebase.Database.Future_InternalDataSnapshot::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_Dispose_m1B925C075E8430087BC8B404D9F9ECABDE2CD136 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
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
				Future_InternalDataSnapshot_SetCompletionData_mAA4E8E317176CDF9D079F5BDF76E3F75BF707808(__this, L_9, NULL);
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
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_m3265978851D3C9EC5D2E8167DFAFF0427ED0BA10(L_12, NULL);
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
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.Future_InternalDataSnapshot::GetTask(Firebase.Database.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* Future_InternalDataSnapshot_GetTask_m1090C78F556C35E670B74B2968C8CDC384E5E196 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* ___0_fu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mC87E41E4345E5E5579A2403C4FE6C1589F399FBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mD0A55AE835C9AF48FE7E69DBA3DE84E3CD445E2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* V_0 = NULL;
	bool V_1 = false;
	Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_0 = (U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_mD0599D179BE401E0A2DFD2EBA181066E72EF8637(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_1 = V_0;
		Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_2 = ___0_fu;
		NullCheck(L_1);
		L_1->___fu_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fu_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_3 = V_0;
		TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_4 = (TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskCompletionSource_1__ctor_mC87E41E4345E5E5579A2403C4FE6C1589F399FBB(L_4, TaskCompletionSource_1__ctor_mC87E41E4345E5E5579A2403C4FE6C1589F399FBB_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___tcs_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___tcs_1), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m227356FFA0C750F08EAAC87EC890D84BBAC3BEB1(NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_8 = L_7->___tcs_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_9;
		L_9 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869(L_8, L_9, TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_11 = L_10->___tcs_1;
		NullCheck(L_11);
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_12;
		L_12 = TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_inline(L_11, TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_00a0;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_13 = V_0;
		NullCheck(L_13);
		Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_14 = L_13->___fu_0;
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
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_17 = V_0;
		NullCheck(L_17);
		TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_18 = L_17->___tcs_1;
		FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_19 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_19, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, NULL);
		NullCheck(L_18);
		TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869(L_18, L_19, TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_20 = V_0;
		NullCheck(L_20);
		TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_21 = L_20->___tcs_1;
		NullCheck(L_21);
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_22;
		L_22 = TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_inline(L_21, TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_00a0;
	}

IL_007a:
	{
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_23 = V_0;
		NullCheck(L_23);
		Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_24 = L_23->___fu_0;
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_25 = V_0;
		Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* L_26 = (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8*)il2cpp_codegen_object_new(Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action__ctor_m5E0404E6BF573ECD3645640AFCE8DBD63173F55B(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mD0A55AE835C9AF48FE7E69DBA3DE84E3CD445E2B_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		Future_InternalDataSnapshot_SetOnCompletionCallback_mA2EFD93C21FC6CA05D9DCD1601D3BB56CB029A71(L_24, L_26, NULL);
		U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* L_27 = V_0;
		NullCheck(L_27);
		TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_28 = L_27->___tcs_1;
		NullCheck(L_28);
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_29;
		L_29 = TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_inline(L_28, TaskCompletionSource_1_get_Task_m46E5DC490622B5E67C495F14CD2D0A17DC869920_RuntimeMethod_var);
		V_2 = L_29;
		goto IL_00a0;
	}

IL_00a0:
	{
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_30 = V_2;
		return L_30;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_m30E2B463AC06313078F644896B453ED1937642ED (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, const RuntimeMethod* method) 
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_ThrowIfDisposed_m30E2B463AC06313078F644896B453ED1937642ED_RuntimeMethod_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_mA2EFD93C21FC6CA05D9DCD1601D3BB56CB029A71 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* ___0_userCompletionCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEE1EC7670144B9AFEDEC5B1066B48CB8035EDD27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m005E9A5B663C38227381B4BAFE67FC74CECD1BDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m207504FA1000EF0BD7832B183D80014021D26A0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_m30E2B463AC06313078F644896B453ED1937642ED(__this, NULL);
		SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* L_0 = __this->___SWIG_CompletionCB_7;
		V_1 = (bool)((((RuntimeObject*)(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* L_2 = (SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9*)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SWIG_CompletionDelegate__ctor_mAA1C87AAB261AA0227140B239FDCC11396B00DC0(L_2, NULL, (intptr_t)((void*)Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m207504FA1000EF0BD7832B183D80014021D26A0B_RuntimeMethod_var), NULL);
		__this->___SWIG_CompletionCB_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)L_2);
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___CallbackLock_5;
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
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
				Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* L_7 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___Callbacks_3;
				V_4 = (bool)((((RuntimeObject*)(Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0055_1;
				}
			}
			{
				Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* L_9 = (Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE*)il2cpp_codegen_object_new(Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				Dictionary_2__ctor_mEE1EC7670144B9AFEDEC5B1066B48CB8035EDD27(L_9, Dictionary_2__ctor_mEE1EC7670144B9AFEDEC5B1066B48CB8035EDD27_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
				((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___Callbacks_3 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___Callbacks_3), (void*)L_9);
			}

IL_0055_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
				int32_t L_10 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___CallbackIndex_4;
				int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___CallbackIndex_4 = L_11;
				V_0 = L_11;
				Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* L_12 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_13 = V_0;
				Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* L_14 = ___0_userCompletionCallback;
				NullCheck(L_12);
				Dictionary_2_set_Item_m005E9A5B663C38227381B4BAFE67FC74CECD1BDA(L_12, L_13, L_14, Dictionary_2_set_Item_m005E9A5B663C38227381B4BAFE67FC74CECD1BDA_RuntimeMethod_var);
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
		SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* L_15 = __this->___SWIG_CompletionCB_7;
		int32_t L_16 = V_0;
		intptr_t L_17;
		L_17 = Future_InternalDataSnapshot_SWIG_OnCompletion_m3D3A3D578D03C34950D4EC51C0F715DFF2A459F6(__this, L_15, L_16, NULL);
		Future_InternalDataSnapshot_SetCompletionData_mAA4E8E317176CDF9D079F5BDF76E3F75BF707808(__this, L_17, NULL);
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_mAA4E8E317176CDF9D079F5BDF76E3F75BF707808 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_m30E2B463AC06313078F644896B453ED1937642ED(__this, NULL);
		intptr_t L_0 = __this->___callbackData_6;
		Future_InternalDataSnapshot_SWIG_FreeCompletionData_mBFABB246B4475320E815EF1A38869A089F6D256D(__this, L_0, NULL);
		intptr_t L_1 = ___0_data;
		__this->___callbackData_6 = L_1;
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m207504FA1000EF0BD7832B183D80014021D26A0B (int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m6CD847B4ECAE767215C81F8BD395BF954EA86A22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m194F02B4821ECDF29014865E577588C882B88FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8*)NULL;
		il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___CallbackLock_5;
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
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
				Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* L_4 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___Callbacks_3;
				if (!L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
				Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* L_5 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_6 = ___0_key;
				NullCheck(L_5);
				bool L_7;
				L_7 = Dictionary_2_TryGetValue_m194F02B4821ECDF29014865E577588C882B88FB9(L_5, L_6, (&V_0), Dictionary_2_TryGetValue_m194F02B4821ECDF29014865E577588C882B88FB9_RuntimeMethod_var);
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
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
				Dictionary_2_t514FB35E858826A5AD56D5DF538EB3BB90EC1BCE* L_9 = ((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_10 = ___0_key;
				NullCheck(L_9);
				bool L_11;
				L_11 = Dictionary_2_Remove_m6CD847B4ECAE767215C81F8BD395BF954EA86A22(L_9, L_10, Dictionary_2_Remove_m6CD847B4ECAE767215C81F8BD395BF954EA86A22_RuntimeMethod_var);
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
		Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* L_12 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* L_14 = V_0;
		NullCheck(L_14);
		Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_inline(L_14, NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.IntPtr Firebase.Database.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m3D3A3D578D03C34950D4EC51C0F715DFF2A459F6 (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* ___0_cs_callback, int32_t ___1_cs_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
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
		SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* L_1 = ___0_cs_callback;
		int32_t L_2 = ___1_cs_key;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mB092BCAAE048658527EC96816197C26AD97858BC(L_0, L_1, L_2, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_OnCompletion_m3D3A3D578D03C34950D4EC51C0F715DFF2A459F6_RuntimeMethod_var)));
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
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_mBFABB246B4475320E815EF1A38869A089F6D256D (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, intptr_t ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		intptr_t L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m9F3C28735B00145DCAE15E9B6322FEC3C36AF580(L_0, L_1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_FreeCompletionData_mBFABB246B4475320E815EF1A38869A089F6D256D_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Database.InternalDataSnapshot Firebase.Database.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* Future_InternalDataSnapshot_GetResult_m49E679F1272DF0A77AF56930C32ADC5BD4FA940F (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* V_0 = NULL;
	bool V_1 = false;
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_mFE66424CFF346ADACE64F9B8CD6CCFF1495F989E(L_0, NULL);
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_2 = (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D*)il2cpp_codegen_object_new(InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InternalDataSnapshot__ctor_m697E1A225D18E76664CE7B7FCAFFFE9358B7EDF3(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_GetResult_m49E679F1272DF0A77AF56930C32ADC5BD4FA940F_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__cctor_m114B99070CE79AD207A662A66150FBBC7129EF21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___CallbackIndex_4 = 0;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___CallbackLock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var))->___CallbackLock_5), (void*)L_0);
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
void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_Multicast(Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* currentDelegate = reinterpret_cast<Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_OpenInst(Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_OpenStatic(Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_OpenStaticInvoker(Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_ClosedStaticInvoker(Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8 (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m5E0404E6BF573ECD3645640AFCE8DBD63173F55B (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_Multicast;
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44 (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method) 
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
void SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_Multicast(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* currentDelegate = reinterpret_cast<SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_OpenInst(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_OpenStatic(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_index, method);
}
void SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_OpenStaticInvoker(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_index);
}
void SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_ClosedStaticInvoker(SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_index);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9 (SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_index);

}
// System.Void Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mAA1C87AAB261AA0227140B239FDCC11396B00DC0 (SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76_Multicast;
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m8BDF75E8953F67D4644F56D8FDB49E8A73FA4C76 (SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* __this, int32_t ___0_index, const RuntimeMethod* method) 
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
// System.Void Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mD0599D179BE401E0A2DFD2EBA181066E72EF8637 (U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass5_0::<GetTask>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CGetTaskU3Eb__0_mD0A55AE835C9AF48FE7E69DBA3DE84E3CD445E2B (U3CU3Ec__DisplayClass5_0_t4B6B5D4E93FF8F59486E10CC908707B048F7D0ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m0411DE933C6264C4DC4ECB4F234DAB9AFC6EFB29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m719C9EE8C3B930D30106E4341ED056D985A26277_RuntimeMethod_var);
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
			Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_0 = __this->___fu_0;
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
			TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_3 = __this->___tcs_1;
			NullCheck(L_3);
			TaskCompletionSource_1_SetCanceled_m0411DE933C6264C4DC4ECB4F234DAB9AFC6EFB29(L_3, TaskCompletionSource_1_SetCanceled_m0411DE933C6264C4DC4ECB4F234DAB9AFC6EFB29_RuntimeMethod_var);
			goto IL_0074_1;
		}

IL_0024_1:
		{
			Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_4 = __this->___fu_0;
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
			TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_8 = __this->___tcs_1;
			int32_t L_9 = V_1;
			Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_10 = __this->___fu_0;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527(L_10, NULL);
			FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_12 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_12, L_9, L_11, NULL);
			NullCheck(L_8);
			TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869(L_8, L_12, TaskCompletionSource_1_SetException_m8597E2AF4CB1053FD90CF1527EC4102709B08869_RuntimeMethod_var);
			goto IL_0073_1;
		}

IL_005a_1:
		{
			TaskCompletionSource_1_tC8D6CA926CA6D58EA0EB12C7CDA47CBA8DC0E6CD* L_13 = __this->___tcs_1;
			Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_14 = __this->___fu_0;
			NullCheck(L_14);
			InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_15;
			L_15 = Future_InternalDataSnapshot_GetResult_m49E679F1272DF0A77AF56930C32ADC5BD4FA940F(L_14, NULL);
			NullCheck(L_13);
			TaskCompletionSource_1_SetResult_m719C9EE8C3B930D30106E4341ED056D985A26277(L_13, L_15, TaskCompletionSource_1_SetResult_m719C9EE8C3B930D30106E4341ED056D985A26277_RuntimeMethod_var);
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
		Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_18 = __this->___fu_0;
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
// System.Void Firebase.Database.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_mE61FE74E49CF311EC4D87ED24A7C243D62FE9856 (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::getCPtr(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F InternalFirebaseDatabase_getCPtr_m227152CAAADEC9E1CDDAC559F5168E1180090D8B (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___0_obj, const RuntimeMethod* method) 
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
		InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_1 = ___0_obj;
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
// System.Void Firebase.Database.InternalFirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Finalize_mBEDB124376E6E6CA5874A6F9E85EA991ACD06F0E (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m32270C5F86D65B3E544A5FCBF9B6A2B6F1D648FC (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m2849542730DED52B649BB90D2B18A62CD8E4DB55 (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0046;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0046:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			InternalFirebaseDatabase_ReleaseReferenceInternal_m7F475749AB105348EAE69F618A39E88CDD38D0E1(__this, NULL);
			__this->___swigCMemOwn_1 = (bool)0;
			intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5;
			memset((&L_5), 0, sizeof(L_5));
			HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_5), NULL, L_4, /*hidden argument*/NULL);
			__this->___swigCPtr_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
			goto IL_0047;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		return;
	}
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* InternalFirebaseDatabase_GetReference_m6C73048E76BBF88BA25C10B97CBACFE76485F7D0 (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* V_0 = NULL;
	bool V_1 = false;
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_0_mA66AD0BD29EE77022482443C931BD25E9912CCDD(L_0, NULL);
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_2 = (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1*)il2cpp_codegen_object_new(InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InternalDatabaseReference__ctor_mFA0925524043CB4A6CF05D1077A001F4DD42465E(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetReference_m6C73048E76BBF88BA25C10B97CBACFE76485F7D0_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_7 = V_2;
		return L_7;
	}
}
// Firebase.Database.InternalFirebaseDatabase Firebase.Database.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* InternalFirebaseDatabase_GetInstanceInternal_m398BDDEDC7D96F575D89B8F32614D0579FF82CB6 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_app, String_t* ___1_url, int32_t* ___2_init_result_out, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* V_2 = NULL;
	bool V_3 = false;
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* V_4 = NULL;
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* G_B4_0 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				int32_t* L_0 = ___2_init_result_out;
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
				String_t* L_4 = ___1_url;
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
				intptr_t L_5;
				L_5 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_m04AFDE17136626FCF0AEF17085C209E2F7C9DBA2(L_3, L_4, (&V_0), NULL);
				V_1 = L_5;
				intptr_t L_6 = V_1;
				intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_8;
				L_8 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_6, L_7, NULL);
				if (L_8)
				{
					goto IL_0029_1;
				}
			}
			{
				intptr_t L_9 = V_1;
				InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_10 = (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F*)il2cpp_codegen_object_new(InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				InternalFirebaseDatabase__ctor_mE61FE74E49CF311EC4D87ED24A7C243D62FE9856(L_10, L_9, (bool)0, NULL);
				G_B4_0 = L_10;
				goto IL_002a_1;
			}

IL_0029_1:
			{
				G_B4_0 = ((InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F*)(NULL));
			}

IL_002a_1:
			{
				V_2 = G_B4_0;
				il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_003a_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
				Exception_t* L_13;
				L_13 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetInstanceInternal_m398BDDEDC7D96F575D89B8F32614D0579FF82CB6_RuntimeMethod_var)));
			}

IL_003a_1:
			{
				InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_14 = V_2;
				V_4 = L_14;
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_15 = V_4;
		return L_15;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m7F475749AB105348EAE69F618A39E88CDD38D0E1 (InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___0_instance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* L_0 = ___0_instance;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = InternalFirebaseDatabase_getCPtr_m227152CAAADEC9E1CDDAC559F5168E1180090D8B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m7D07BAA524947C1C37B3FBD2B905FA812FC83ADF(L_1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_ReleaseReferenceInternal_m7F475749AB105348EAE69F618A39E88CDD38D0E1_RuntimeMethod_var)));
	}

IL_001c:
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
// System.Void Firebase.Database.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m697E1A225D18E76664CE7B7FCAFFFE9358B7EDF3 (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Void Firebase.Database.InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Finalize_m15488C10D816F4CDC2BE17E08100A99DB0C29DC2 (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.Database.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mECA22BB52D5699902D9297AA71E8CEE322A794EB (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_m78E93244105D6E9E6A076B15BAD361DAB440204C (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
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
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_InternalDataSnapshot_m9B4F29AEFAB9F75C0DDE194CC9F240A56944EEFC(L_11, NULL);
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
// System.String Firebase.Database.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m68793A52FE65FECF6EBE00644FD8E3B9D7549136 (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_mA2EE4631F0F9A099237A65D31DE7BE43C12B5F9B(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_key_string_m68793A52FE65FECF6EBE00644FD8E3B9D7549136_RuntimeMethod_var)));
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
// Firebase.Variant Firebase.Database.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* InternalDataSnapshot_value_mD0ED1285B11BE056D3D290E79B8AEFB6B0D5750D (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* V_0 = NULL;
	bool V_1 = false;
	Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_value_m287A94D7F9C95E4751E89B29957EB46AD0209643(L_0, NULL);
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_2 = (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C*)il2cpp_codegen_object_new(Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Variant__ctor_mCBCDC0D6E1290E1A8412B59A4A8956BC32DFA163(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_value_mD0ED1285B11BE056D3D290E79B8AEFB6B0D5750D_RuntimeMethod_var)));
	}

IL_0022:
	{
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_7 = V_2;
		return L_7;
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
// System.Void Firebase.Database.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_mF168588E6A99DDC51DBB08761DD9EC5897B67CD7 (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
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
// System.Void Firebase.Database.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_m6E808A2FFDDF01B544353487E4EFF3C065101051 (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, const RuntimeMethod* method) 
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
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void Firebase.Database.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m1407C0C2AAD78369D28204EF35E436F90084E0E1 (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_mEC96604AADD48C41DB4720653EA62507D38106E5 (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
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
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_InternalQuery_m90A6FFAC0DB2AC6092334DDE739D4AE8C290AEF9(L_11, NULL);
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
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* InternalQuery_GetValueAsync_m1FA7B1F73A2EA7887C94D194124EA52D5D4D71BD (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalQuery_GetValue_mE8FF00BBF07A616360EDCAFF9E400464EF73409E(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_GetValueAsync_m1FA7B1F73A2EA7887C94D194124EA52D5D4D71BD_RuntimeMethod_var)));
	}

IL_001c:
	{
		intptr_t L_5 = V_0;
		Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD* L_6 = (Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD*)il2cpp_codegen_object_new(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Future_InternalDataSnapshot__ctor_m94A6E26951332FD46E16A3962BF7ECA782959B6C(L_6, L_5, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t4FD9C35AAA7BE682060CF99DE0CDC72C083559BD_il2cpp_TypeInfo_var);
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_7;
		L_7 = Future_InternalDataSnapshot_GetTask_m1090C78F556C35E670B74B2968C8CDC384E5E196(L_6, NULL);
		V_2 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		Task_1_t61F32CDE33792C37824D839AEBC072F7B03E3E7D* L_8 = V_2;
		return L_8;
	}
}
// System.Boolean Firebase.Database.InternalQuery::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalQuery_is_valid_mEE28991F00E1C1C167B0B5B65B360D0F816DFA18 (InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_InternalQuery_is_valid_m08E3E8399135C4E65FA85F34290904A922ABCCAE(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_is_valid_mEE28991F00E1C1C167B0B5B65B360D0F816DFA18_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.Database.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m34D4329F6CCD18720B1AAE2CF1725C8EF418FBD6 (intptr_t ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_listener;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m87E4EF6960BA02F67F47ABB56A4375BF042DB2A4(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyValueListener_m34D4329F6CCD18720B1AAE2CF1725C8EF418FBD6_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m02FA94059B9B4CB903AD2A9FC461D1DFBC2BDEAC (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_cancelledCallback, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___1_valueChangedCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = ___0_cancelledCallback;
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* L_1 = ___1_valueChangedCallback;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_mFC5FEF32EE1234BA8AB3AD6995A968C8B7C9A02F(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterValueListenerCallbacks_m02FA94059B9B4CB903AD2A9FC461D1DFBC2BDEAC_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m2EF3D7ACFD479D8CEFE32FCA22A1817E5B578E08 (intptr_t ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_listener;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m76F43AD90DFFBE797FA6C3C7D8E7CBA2E6B87B04(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyChildListener_m2EF3D7ACFD479D8CEFE32FCA22A1817E5B578E08_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m163BDACD7E477F4E52E07CCC737152EC484BC0F3 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_cancelledCallback, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___1_childChangeCallback, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___2_childRemovedCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = ___0_cancelledCallback;
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* L_1 = ___1_childChangeCallback;
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* L_2 = ___2_childRemovedCallback;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m71F33785368094C7D023E22FF3ACAA41EE1F30DB(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterChildListenerCallbacks_m163BDACD7E477F4E52E07CCC737152EC484BC0F3_RuntimeMethod_var)));
	}

IL_0019:
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
// System.Void Firebase.Database.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mFA0925524043CB4A6CF05D1077A001F4DD42465E (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, intptr_t ___0_cPtr, bool ___1_cMemoryOwn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_cPtr;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m96801A06500A9E85E0730EC68A362A14C76353DF(L_0, NULL);
		bool L_2 = ___1_cMemoryOwn;
		InternalQuery__ctor_mF168588E6A99DDC51DBB08761DD9EC5897B67CD7(__this, L_1, L_2, NULL);
		intptr_t L_3 = ___0_cPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalDatabaseReference::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Dispose_m942BC4FEA012E6D528C49584CD3B0BF7F9717E94 (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
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
				bool L_9 = ((InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056*)__this)->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				((InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m7C09B39DA3F1BA03E6F5A3C0B07FAC9F00BD90C1(L_11, NULL);
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
				InternalQuery_Dispose_mEC96604AADD48C41DB4720653EA62507D38106E5(__this, L_14, NULL);
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
// System.Boolean Firebase.Database.InternalDatabaseReference::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDatabaseReference_is_valid_m3DEC0D72CA088CC171EEB8F471788549E79A77D4 (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m27D0CC706E61AA9579E37860A86E088B7C93AFFE(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_is_valid_m3DEC0D72CA088CC171EEB8F471788549E79A77D4_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalDatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* InternalDatabaseReference_Child_m6385A496BB5DD4F533FD891004DC37CA1F235B1A (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* V_0 = NULL;
	bool V_1 = false;
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		String_t* L_1 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_InternalDatabaseReference_Child__SWIG_0_mF116A429BD565D6DE91948DEC8F8620BEC7D2E09(L_0, L_1, NULL);
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_3 = (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1*)il2cpp_codegen_object_new(InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InternalDatabaseReference__ctor_mFA0925524043CB4A6CF05D1077A001F4DD42465E(L_3, L_2, (bool)1, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_Child_m6385A496BB5DD4F533FD891004DC37CA1F235B1A_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* L_8 = V_2;
		return L_8;
	}
}
// System.Threading.Tasks.Task Firebase.Database.InternalDatabaseReference::SetValueAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* InternalDatabaseReference_SetValueAsync_mD55EBED21F562BD036AA5886A9FEBB74D7863E86 (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_1 = ___0_value;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = Variant_getCPtr_m02745459FA3350FFDC29D01587C8D797BFC10067(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = DatabaseInternalPINVOKE_InternalDatabaseReference_SetValue_m5943066DDF3AF1FF2A4477CE8C531B4711B24709(L_0, L_2, NULL);
		FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480* L_4 = (FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480*)il2cpp_codegen_object_new(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FutureVoid__ctor_m6E0B9CCC4BD6777C7369CA92E236C003CCCBC043(L_4, L_3, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(FutureVoid_tD62347E000F5AF2C471C137CC4B27C652CE44480_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = FutureVoid_GetTask_m68B083F4868870F64B15374FE3D1343543C863DF(L_4, NULL);
		V_0 = L_5;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6 = V_0;
		V_1 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = V_1;
		return L_7;
	}
}
// System.String Firebase.Database.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m1EF82C3E8799AD219F46EF643E1CCC1F24404A00 (InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_url_m217ECDD7213E8262A4F8D3D2370A9866833FCDB3(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_url_m1EF82C3E8799AD219F46EF643E1CCC1F24404A00_RuntimeMethod_var)));
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE__cctor_mCB2EA9954110F83F77C5ECEC56612B81985EFC19 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A* L_0 = (SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A*)il2cpp_codegen_object_new(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m4435F9A51D157BA76A38E4D2B82D7FC977DB7B23(L_0, NULL);
		((DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B* L_1 = (SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B*)il2cpp_codegen_object_new(SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_m01717AFAD645A2B00D656E8783AB1BAB58B60F8C(L_1, NULL);
		((DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t688350F60BB05C93E6B80EB6B64181492937512F_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mB092BCAAE048658527EC96816197C26AD97858BC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, SWIG_CompletionDelegate_t949FDF41F70E0F081E90389828604556255CF4A9* ___1_jarg2, int32_t ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m9F3C28735B00145DCAE15E9B6322FEC3C36AF580 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, intptr_t ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData)(____0_jarg1_marshaled, ___1_jarg2);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ___1_jarg2);
	#endif

}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_mFE66424CFF346ADACE64F9B8CD6CCFF1495F989E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_m3265978851D3C9EC5D2E8167DFAFF0427ED0BA10 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_delete_Future_InternalDataSnapshot", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_Future_InternalDataSnapshot)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_0_mA66AD0BD29EE77022482443C931BD25E9912CCDD (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_0)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_m04AFDE17136626FCF0AEF17085C209E2F7C9DBA2 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, int32_t* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ___2_jarg3);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m7D07BAA524947C1C37B3FBD2B905FA812FC83ADF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_m9B4F29AEFAB9F75C0DDE194CC9F240A56944EEFC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_delete_InternalDataSnapshot", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDataSnapshot)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_mA2EE4631F0F9A099237A65D31DE7BE43C12B5F9B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalDataSnapshot_key_string", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_key_string)(____0_jarg1_marshaled);
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
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_m287A94D7F9C95E4751E89B29957EB46AD0209643 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalDataSnapshot_value", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_value)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_m90A6FFAC0DB2AC6092334DDE739D4AE8C290AEF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_delete_InternalQuery", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalQuery)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_GetValue_mE8FF00BBF07A616360EDCAFF9E400464EF73409E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalQuery_GetValue", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_GetValue)(____0_jarg1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return returnValue;
}
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_m08E3E8399135C4E65FA85F34290904A922ABCCAE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalQuery_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_is_valid)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m87E4EF6960BA02F67F47ABB56A4375BF042DB2A4 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalQuery_DestroyValueListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyValueListener)(___0_jarg1);
	#else
	il2cppPInvokeFunc(___0_jarg1);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_mFC5FEF32EE1234BA8AB3AD6995A968C8B7C9A02F (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_jarg1, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	Il2CppMethodPointer ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_jarg1));

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m76F43AD90DFFBE797FA6C3C7D8E7CBA2E6B87B04 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalQuery_DestroyChildListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyChildListener)(___0_jarg1);
	#else
	il2cppPInvokeFunc(___0_jarg1);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m71F33785368094C7D023E22FF3ACAA41EE1F30DB (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___0_jarg1, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___1_jarg2, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___2_jarg3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	Il2CppMethodPointer ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_jarg1));

	// Marshaling of parameter '___1_jarg2' to native representation
	Il2CppMethodPointer ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_jarg2));

	// Marshaling of parameter '___2_jarg3' to native representation
	Il2CppMethodPointer ____2_jarg3_marshaled = NULL;
	____2_jarg3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_jarg3));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks)(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled, ____2_jarg3_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m7C09B39DA3F1BA03E6F5A3C0B07FAC9F00BD90C1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_delete_InternalDatabaseReference", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDatabaseReference)(____0_jarg1_marshaled);
	#else
	il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

}
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m27D0CC706E61AA9579E37860A86E088B7C93AFFE (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_is_valid)(____0_jarg1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_Child__SWIG_0_mF116A429BD565D6DE91948DEC8F8620BEC7D2E09 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, String_t* ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_Child__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Marshaling of parameter '___1_jarg2' to native representation
	char* ____1_jarg2_marshaled = NULL;
	____1_jarg2_marshaled = il2cpp_codegen_marshal_string(___1_jarg2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_Child__SWIG_0)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_jarg2' native representation
	il2cpp_codegen_marshal_free(____1_jarg2_marshaled);
	____1_jarg2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SetValue(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SetValue_m5943066DDF3AF1FF2A4477CE8C531B4711B24709 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___1_jarg2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_SetValue", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_SetValue)(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_jarg1_marshaled, ____1_jarg2_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_m217ECDD7213E8262A4F8D3D2370A9866833FCDB3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_jarg1, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_url", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_jarg1' to native representation
	void* ____0_jarg1_marshaled = NULL;
	____0_jarg1_marshaled = (void*)___0_jarg1.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_url)(____0_jarg1_marshaled);
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
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_m49F7F2106ADDC0BA49B3E52A984FCC0E9C631B82 (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast)(___0_jarg1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_jarg1);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m96801A06500A9E85E0730EC68A362A14C76353DF (intptr_t ___0_jarg1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast)(___0_jarg1);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mC00FC1080D4B7ACCA73425E9F4CFD711A425396F(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mC00FC1080D4B7ACCA73425E9F4CFD711A425396F(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mBA043F290EE08502EC632E3E5F2B45194793F91E(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mBA043F290EE08502EC632E3E5F2B45194793F91E(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m377FFF99FAB396800F30BFE8A7DD758BAF06F2AC(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m377FFF99FAB396800F30BFE8A7DD758BAF06F2AC(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m186709ECD9C1432E633A146E0A0BE9B27A0B0FCF(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m186709ECD9C1432E633A146E0A0BE9B27A0B0FCF(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m9B53F0D753F9D0084B0A098F3A06372BEF88BBC5(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m9B53F0D753F9D0084B0A098F3A06372BEF88BBC5(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m7718782C1E9A9A3B13A63BC991DBF557CE6BB84F(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m7718782C1E9A9A3B13A63BC991DBF557CE6BB84F(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m21BD2976DC85588FD4B0AE11042A9BF962774CF6(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m21BD2976DC85588FD4B0AE11042A9BF962774CF6(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m19DBC9CDB96739AF984498CCB4A5697EEEEC7D30(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m19DBC9CDB96739AF984498CCB4A5697EEEEC7D30(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mE151CCDC422D04D6B718DA55C627F0F496F7C995(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mE151CCDC422D04D6B718DA55C627F0F496F7C995(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m01B698BBF46D7129825119F5F5C79237FF172A00(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m01B698BBF46D7129825119F5F5C79237FF172A00(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m26D600DFFBB9789EEE2E75DE261A8AA48A2773A6(char* ___0_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m26D600DFFBB9789EEE2E75DE261A8AA48A2773A6(____0_message_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m751E631864FDF20467E3BF8DDD39751D085C7EE8(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m751E631864FDF20467E3BF8DDD39751D085C7EE8(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m8052362115CB69B05B59DE95B0DD7626E58ED4C3(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m8052362115CB69B05B59DE95B0DD7626E58ED4C3(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA8CB9DDD630EE287A396E5D06E805B8AA5EF8BF6(char* ___0_message, char* ___1_paramName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_message' to managed representation
	String_t* ____0_message_unmarshaled = NULL;
	____0_message_unmarshaled = il2cpp_codegen_marshal_string_result(___0_message);

	// Marshaling of parameter '___1_paramName' to managed representation
	String_t* ____1_paramName_unmarshaled = NULL;
	____1_paramName_unmarshaled = il2cpp_codegen_marshal_string_result(___1_paramName);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA8CB9DDD630EE287A396E5D06E805B8AA5EF8BF6(____0_message_unmarshaled, ____1_paramName_unmarshaled, NULL);

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m1DB3C84F742953AE94FF31C0794DE618A8F82C02 (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___0_applicationDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___1_arithmeticDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___2_divideByZeroDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___3_indexOutOfRangeDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___4_invalidCastDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___5_invalidOperationDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___6_ioDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___7_nullReferenceDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___8_outOfMemoryDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___9_overflowDelegate, ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* ___10_systemExceptionDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "SWIGRegisterExceptionCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_DatabaseInternal)(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_applicationDelegate_marshaled, ____1_arithmeticDelegate_marshaled, ____2_divideByZeroDelegate_marshaled, ____3_indexOutOfRangeDelegate_marshaled, ____4_invalidCastDelegate_marshaled, ____5_invalidOperationDelegate_marshaled, ____6_ioDelegate_marshaled, ____7_nullReferenceDelegate_marshaled, ____8_outOfMemoryDelegate_marshaled, ____9_overflowDelegate_marshaled, ____10_systemExceptionDelegate_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m0215CBEF6143F677C79684EB63C73A97777BA1C3 (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___0_argumentDelegate, ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___1_argumentNullDelegate, ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* ___2_argumentOutOfRangeDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal)(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_argumentDelegate_marshaled, ____1_argumentNullDelegate_marshaled, ____2_argumentOutOfRangeDelegate_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mC00FC1080D4B7ACCA73425E9F4CFD711A425396F (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mBA043F290EE08502EC632E3E5F2B45194793F91E (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m377FFF99FAB396800F30BFE8A7DD758BAF06F2AC (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m186709ECD9C1432E633A146E0A0BE9B27A0B0FCF (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m9B53F0D753F9D0084B0A098F3A06372BEF88BBC5 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m7718782C1E9A9A3B13A63BC991DBF557CE6BB84F (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m21BD2976DC85588FD4B0AE11042A9BF962774CF6 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m19DBC9CDB96739AF984498CCB4A5697EEEEC7D30 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mE151CCDC422D04D6B718DA55C627F0F496F7C995 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m01B698BBF46D7129825119F5F5C79237FF172A00 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m26D600DFFBB9789EEE2E75DE261A8AA48A2773A6 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m751E631864FDF20467E3BF8DDD39751D085C7EE8 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_paramName;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m8052362115CB69B05B59DE95B0DD7626E58ED4C3 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA8CB9DDD630EE287A396E5D06E805B8AA5EF8BF6 (String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128(NULL);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mD2F456A170FA12462F9AD0FACA39E786F4909279 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_mC00FC1080D4B7ACCA73425E9F4CFD711A425396F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m751E631864FDF20467E3BF8DDD39751D085C7EE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m8052362115CB69B05B59DE95B0DD7626E58ED4C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA8CB9DDD630EE287A396E5D06E805B8AA5EF8BF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_mBA043F290EE08502EC632E3E5F2B45194793F91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m377FFF99FAB396800F30BFE8A7DD758BAF06F2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m21BD2976DC85588FD4B0AE11042A9BF962774CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m186709ECD9C1432E633A146E0A0BE9B27A0B0FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m9B53F0D753F9D0084B0A098F3A06372BEF88BBC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m7718782C1E9A9A3B13A63BC991DBF557CE6BB84F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m19DBC9CDB96739AF984498CCB4A5697EEEEC7D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mE151CCDC422D04D6B718DA55C627F0F496F7C995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m01B698BBF46D7129825119F5F5C79237FF172A00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m26D600DFFBB9789EEE2E75DE261A8AA48A2773A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_0 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_mC00FC1080D4B7ACCA73425E9F4CFD711A425396F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_1 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_mBA043F290EE08502EC632E3E5F2B45194793F91E_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_2 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m377FFF99FAB396800F30BFE8A7DD758BAF06F2AC_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_3 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m186709ECD9C1432E633A146E0A0BE9B27A0B0FCF_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_4 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m9B53F0D753F9D0084B0A098F3A06372BEF88BBC5_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_5 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m7718782C1E9A9A3B13A63BC991DBF557CE6BB84F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_6 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_m21BD2976DC85588FD4B0AE11042A9BF962774CF6_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_7 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m19DBC9CDB96739AF984498CCB4A5697EEEEC7D30_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_8 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_mE151CCDC422D04D6B718DA55C627F0F496F7C995_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_9 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m01B698BBF46D7129825119F5F5C79237FF172A00_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_10 = (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*)il2cpp_codegen_object_new(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m26D600DFFBB9789EEE2E75DE261A8AA48A2773A6_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* L_11 = (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_mD64F44DD005A28E34EC39C5CBB48175631C3C072(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m751E631864FDF20467E3BF8DDD39751D085C7EE8_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* L_12 = (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_mD64F44DD005A28E34EC39C5CBB48175631C3C072(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m8052362115CB69B05B59DE95B0DD7626E58ED4C3_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* L_13 = (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_mD64F44DD005A28E34EC39C5CBB48175631C3C072(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mA8CB9DDD630EE287A396E5D06E805B8AA5EF8BF6_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_14 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_15 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_16 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_17 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_18 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_19 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_20 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_21 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_22 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_23 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* L_24 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m1DB3C84F742953AE94FF31C0794DE618A8F82C02(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* L_25 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* L_26 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* L_27 = ((SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m0215CBEF6143F677C79684EB63C73A97777BA1C3(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m4435F9A51D157BA76A38E4D2B82D7FC977DB7B23 (SWIGExceptionHelper_tBB9B621417E49E1B1875F38D5D0D19DCD4D1F88A* __this, const RuntimeMethod* method) 
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
void ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_Multicast(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* currentDelegate = reinterpret_cast<ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_OpenInst(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_OpenStatic(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_OpenStaticInvoker(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_ClosedStaticInvoker(ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, String_t* ___0_message, const RuntimeMethod* method)
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mC37304D69ABC78D71DD612CE860B397E66AFB380 (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357_Multicast;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m65808CBE9325095409F95386834D799B9523A357 (ExceptionDelegate_tDDFC9EA98CCE60E60A21CA7CD6CE75F9F359031F* __this, String_t* ___0_message, const RuntimeMethod* method) 
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
void ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_Multicast(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, ___1_paramName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_OpenInst(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_OpenStatic(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, ___1_paramName, method);
}
void ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_OpenStaticInvoker(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message, ___1_paramName);
}
void ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_ClosedStaticInvoker(ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message, ___1_paramName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0 (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method)
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD64F44DD005A28E34EC39C5CBB48175631C3C072 (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A_Multicast;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m689FD8E4164D93C266529C611D87BDFD0165826A (ExceptionArgumentDelegate_t34C90C327D0A04150099806AFB68CE714ECD39C0* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) 
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
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m227356FFA0C750F08EAAC87EC890D84BBAC3BEB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0;
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905 (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___0_e;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m90034474409E91A3345BA6DF09EC781DD0F9B905_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___exceptionsLock_2;
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
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
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
// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mD2E8B5A0E197E9CB98CC1A7C3E1A90CA929B5128 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___exceptionsLock_2;
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
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m49BC5479183A27657F4507624766D9D1F9BFDF77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t921D116549951EFCDF4A8CC5AB7D77E5E45960E1_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mFCEF2F2C6C95F8378679E9EF5753E3B42065457C(char* ___0_cString)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_cString' to managed representation
	String_t* ____0_cString_unmarshaled = NULL;
	____0_cString_unmarshaled = il2cpp_codegen_marshal_string_result(___0_cString);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mFCEF2F2C6C95F8378679E9EF5753E3B42065457C(____0_cString_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m9BB704D671386CBA6AA948E6F20AFB82091564DF (SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* ___0_stringDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_6_0"), "SWIGRegisterStringCallback_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_stringDelegate' to native representation
	Il2CppMethodPointer ____0_stringDelegate_marshaled = NULL;
	____0_stringDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_stringDelegate));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_6_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_DatabaseInternal)(____0_stringDelegate_marshaled);
	#else
	il2cppPInvokeFunc(____0_stringDelegate_marshaled);
	#endif

}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mFCEF2F2C6C95F8378679E9EF5753E3B42065457C (String_t* ___0_cString, const RuntimeMethod* method) 
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m7D15DF36434C7139F9EF30F583C0944246249454 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mFCEF2F2C6C95F8378679E9EF5753E3B42065457C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* L_0 = (SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34*)il2cpp_codegen_object_new(SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m09A3E195CDD7DAEAB46D62AA8B42428EB15F1944(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_mFCEF2F2C6C95F8378679E9EF5753E3B42065457C_RuntimeMethod_var), NULL);
		((SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* L_1 = ((SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m9BB704D671386CBA6AA948E6F20AFB82091564DF(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m01717AFAD645A2B00D656E8783AB1BAB58B60F8C (SWIGStringHelper_t703479B4DCA0FB9A4DC863D7C20994A573E6D90B* __this, const RuntimeMethod* method) 
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
String_t* SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_Multicast(SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* currentDelegate = reinterpret_cast<SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_OpenInst(SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_OpenStatic(SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
String_t* SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_OpenStaticInvoker(SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
String_t* SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_ClosedStaticInvoker(SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34 (SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, String_t* ___0_message, const RuntimeMethod* method)
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m09A3E195CDD7DAEAB46D62AA8B42428EB15F1944 (SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0_Multicast;
}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m417CF1E02C5C9D65D72E30326A42800470C6EFE0 (SWIGStringDelegate_t1DD54CC2F04E95E7A036563DB573F764FB517A34* __this, String_t* ___0_message, const RuntimeMethod* method) 
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildChangeHandler_m8095E9DE76B1928F9BC80950EB01834E481DC20D(int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, char* ___3_previousChildName)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___3_previousChildName' to managed representation
	String_t* ____3_previousChildName_unmarshaled = NULL;
	____3_previousChildName_unmarshaled = il2cpp_codegen_marshal_string_result(___3_previousChildName);

	// Managed method invocation
	InternalChildListener_OnChildChangeHandler_m8095E9DE76B1928F9BC80950EB01834E481DC20D(___0_callbackId, ___1_changeType, ___2_snapshot, ____3_previousChildName_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildRemovedHandler_m594BBE968EF6D2838A00A1FD6D9636A8C8826B12(int32_t ___0_callbackId, intptr_t ___1_snapshot)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalChildListener_OnChildRemovedHandler_m594BBE968EF6D2838A00A1FD6D9636A8C8826B12(___0_callbackId, ___1_snapshot, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnCancelledHandler_m9AB5FF95793990985428D19F313ACBC24E72D851(int32_t ___0_callbackId, int32_t ___1_error, char* ___2_msg)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___2_msg' to managed representation
	String_t* ____2_msg_unmarshaled = NULL;
	____2_msg_unmarshaled = il2cpp_codegen_marshal_string_result(___2_msg);

	// Managed method invocation
	InternalChildListener_OnCancelledHandler_m9AB5FF95793990985428D19F313ACBC24E72D851(___0_callbackId, ___1_error, ____2_msg_unmarshaled, NULL);

}
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mCC4C39B30A23688A32A2A048AF0FF38F23AFA60D (int32_t ___0_callbackId, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** ___1_childListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA*)NULL;
		int32_t L_0 = ___0_callbackId;
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_m77AD3B221D83B5E24AC82532606CFBF38B7A1058(L_0, (&V_0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** L_3 = ___1_childListener;
		InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* L_4 = V_0;
		*((RuntimeObject**)L_3) = (RuntimeObject*)((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)IsInstSealed((RuntimeObject*)L_4, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)IsInstSealed((RuntimeObject*)L_4, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var)));
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** L_5 = ___1_childListener;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_6 = *((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569**)L_5);
		V_2 = (bool)((!(((RuntimeObject*)(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0028;
	}

IL_0020:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** L_7 = ___1_childListener;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m8095E9DE76B1928F9BC80950EB01834E481DC20D (int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mB58B1C0B65428B0188DC34CAEA9C8DE1B7264176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* L_0 = (U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m703F13125386B07B7EC39F6C6AE6A1F827475559(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* L_1 = V_0;
		intptr_t L_2 = ___2_snapshot;
		NullCheck(L_1);
		L_1->___snapshot_0 = L_2;
		U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* L_3 = V_0;
		int32_t L_4 = ___0_callbackId;
		NullCheck(L_3);
		L_3->___callbackId_1 = L_4;
		U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* L_5 = V_0;
		int32_t L_6 = ___1_changeType;
		NullCheck(L_5);
		L_5->___changeType_2 = L_6;
		U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* L_7 = V_0;
		String_t* L_8 = ___3_previousChildName;
		NullCheck(L_7);
		L_7->___previousChildName_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___previousChildName_3), (void*)L_8);
		U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mB58B1C0B65428B0188DC34CAEA9C8DE1B7264176_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_10, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m594BBE968EF6D2838A00A1FD6D9636A8C8826B12 (int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m50D84306365A8F086387DDD43C4083C03BB0B609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* L_0 = (U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m9A18CB149B5F6B19618F0745EFAB6ED9701EA6CF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* L_1 = V_0;
		intptr_t L_2 = ___1_snapshot;
		NullCheck(L_1);
		L_1->___snapshot_0 = L_2;
		U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* L_3 = V_0;
		int32_t L_4 = ___0_callbackId;
		NullCheck(L_3);
		L_3->___callbackId_1 = L_4;
		U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m50D84306365A8F086387DDD43C4083C03BB0B609_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_6, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m9AB5FF95793990985428D19F313ACBC24E72D851 (int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_m0A52BED0A41EAED007AED2CFF7496514ABEBE28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* L_0 = (U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m74BE29A48F64486243F16A7BFC3B3AB2579C99F5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* L_1 = V_0;
		int32_t L_2 = ___0_callbackId;
		NullCheck(L_1);
		L_1->___callbackId_0 = L_2;
		U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* L_3 = V_0;
		int32_t L_4 = ___1_error;
		NullCheck(L_3);
		L_3->___error_1 = L_4;
		U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* L_5 = V_0;
		String_t* L_6 = ___2_msg;
		NullCheck(L_5);
		L_5->___msg_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___msg_2), (void*)L_6);
		U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_m0A52BED0A41EAED007AED2CFF7496514ABEBE28D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_8, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__cctor_mF3FD4C1BB748957D2CEB117828DD44AF8FA2705F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnCancelledHandler_m9AB5FF95793990985428D19F313ACBC24E72D851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildChangeHandler_m8095E9DE76B1928F9BC80950EB01834E481DC20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildRemovedHandler_m594BBE968EF6D2838A00A1FD6D9636A8C8826B12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0*)il2cpp_codegen_object_new(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B(L_0, NULL, (intptr_t)((void*)InternalChildListener_OnCancelledHandler_m9AB5FF95793990985428D19F313ACBC24E72D851_RuntimeMethod_var), NULL);
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* L_1 = (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F*)il2cpp_codegen_object_new(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnChildChangeDelegate__ctor_m278F4837562673E7CA3C172D6BDB62BD9238B78E(L_1, NULL, (intptr_t)((void*)InternalChildListener_OnChildChangeHandler_m8095E9DE76B1928F9BC80950EB01834E481DC20D_RuntimeMethod_var), NULL);
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* L_2 = (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B*)il2cpp_codegen_object_new(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OnChildRemovedDelegate__ctor_m11125CD973C22C05C781648FD541AAA731526F8C(L_2, NULL, (intptr_t)((void*)InternalChildListener_OnChildRemovedHandler_m594BBE968EF6D2838A00A1FD6D9636A8C8826B12_RuntimeMethod_var), NULL);
		InternalQuery_RegisterChildListenerCallbacks_m163BDACD7E477F4E52E07CCC737152EC484BC0F3(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_mDFC3BECF0BD387DB7E4E29F750829C4D6A67C7D1 (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* __this, InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___0_internalQuery, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___eventLock_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventLock_3), (void*)L_0);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___cppListener_5 = L_1;
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180(__this, NULL);
		InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* L_2 = ___0_internalQuery;
		__this->___internalQuery_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalQuery_4), (void*)L_2);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3 = ___1_database;
		__this->___database_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_6), (void*)L_3);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_DestroyCppListener_m01ED1FBDB1052C672AA189B9F8BB8EB6A20CB036 (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___cppListener_5;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___cppListener_5;
		InternalQuery_DestroyChildListener_m2EF3D7ACFD479D8CEFE32FCA22A1817E5B578E08(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___cppListener_5 = L_5;
	}

IL_002e:
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
void OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_Multicast(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* currentDelegate = reinterpret_cast<OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_callbackId, ___1_error, ___2_msg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_OpenInst(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_error, ___2_msg, method);
}
void OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_OpenStatic(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_error, ___2_msg, method);
}
void OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_OpenStaticInvoker(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_callbackId, ___1_error, ___2_msg);
}
void OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_ClosedStaticInvoker(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_callbackId, ___1_error, ___2_msg);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___2_msg' to native representation
	char* ____2_msg_marshaled = NULL;
	____2_msg_marshaled = il2cpp_codegen_marshal_string(___2_msg);

	// Native function invocation
	il2cppPInvokeFunc(___0_callbackId, ___1_error, ____2_msg_marshaled);

	// Marshaling cleanup of parameter '___2_msg' native representation
	il2cpp_codegen_marshal_free(____2_msg_marshaled);
	____2_msg_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2_Multicast;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_mA00102DE0A949637B150745E93FA65084F0A73E2 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_callbackId, ___1_error, ___2_msg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_Multicast(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* currentDelegate = reinterpret_cast<OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_callbackId, ___1_changeType, ___2_snapshot, ___3_previousChildName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_OpenInst(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_changeType, ___2_snapshot, ___3_previousChildName, method);
}
void OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_OpenStatic(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_changeType, ___2_snapshot, ___3_previousChildName, method);
}
void OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_OpenStaticInvoker(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_callbackId, ___1_changeType, ___2_snapshot, ___3_previousChildName);
}
void OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_ClosedStaticInvoker(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, int32_t, intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_callbackId, ___1_changeType, ___2_snapshot, ___3_previousChildName);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___3_previousChildName' to native representation
	char* ____3_previousChildName_marshaled = NULL;
	____3_previousChildName_marshaled = il2cpp_codegen_marshal_string(___3_previousChildName);

	// Native function invocation
	il2cppPInvokeFunc(___0_callbackId, ___1_changeType, ___2_snapshot, ____3_previousChildName_marshaled);

	// Marshaling cleanup of parameter '___3_previousChildName' native representation
	il2cpp_codegen_marshal_free(____3_previousChildName_marshaled);
	____3_previousChildName_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m278F4837562673E7CA3C172D6BDB62BD9238B78E (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052_Multicast;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_Invoke_mFD1E3E5C183953690BC6FAE7CC6C8DAC533E6052 (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___0_callbackId, int32_t ___1_changeType, intptr_t ___2_snapshot, String_t* ___3_previousChildName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_callbackId, ___1_changeType, ___2_snapshot, ___3_previousChildName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_Multicast(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* currentDelegate = reinterpret_cast<OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_callbackId, ___1_snapshot, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_OpenInst(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_snapshot, method);
}
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_OpenStatic(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_snapshot, method);
}
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_OpenStaticInvoker(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_callbackId, ___1_snapshot);
}
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_ClosedStaticInvoker(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_callbackId, ___1_snapshot);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_callbackId, ___1_snapshot);

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m11125CD973C22C05C781648FD541AAA731526F8C (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_Multicast;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384 (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_callbackId, ___1_snapshot, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m703F13125386B07B7EC39F6C6AE6A1F827475559 (U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::<OnChildChangeHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mB58B1C0B65428B0188DC34CAEA9C8DE1B7264176 (U3CU3Ec__DisplayClass4_0_t24E7D0FFB8462DEF733594B8B540CA44655C0389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* V_0 = NULL;
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* V_1 = NULL;
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		intptr_t L_0 = __this->___snapshot_0;
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_1 = (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D*)il2cpp_codegen_object_new(InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InternalDataSnapshot__ctor_m697E1A225D18E76664CE7B7FCAFFFE9358B7EDF3(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)NULL;
		V_2 = (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)NULL;
		int32_t L_2 = __this->___callbackId_1;
		il2cpp_codegen_runtime_class_init_inline(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_mCC4C39B30A23688A32A2A048AF0FF38F23AFA60D(L_2, (&V_2), NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_5 = __this->___changeType_2;
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1)))
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_005e;
	}

IL_0043:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_7 = V_2;
		NullCheck(L_7);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_8 = L_7->___childAddedImpl_8;
		V_1 = L_8;
		goto IL_005e;
	}

IL_004c:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_10 = L_9->___childChangedImpl_9;
		V_1 = L_10;
		goto IL_005e;
	}

IL_0055:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_12 = L_11->___childMovedImpl_10;
		V_1 = L_12;
		goto IL_005e;
	}

IL_005e:
	{
	}

IL_005f:
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_13 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_15 = V_1;
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_16 = V_0;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_17 = V_2;
		NullCheck(L_17);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_18 = L_17->___database_6;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_19;
		L_19 = DataSnapshot_CreateSnapshot_m2EDD325B01CE1C59B70AB5689316F66E6EE5C1F7(L_16, L_18, NULL);
		String_t* L_20 = __this->___previousChildName_3;
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_21 = (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937*)il2cpp_codegen_object_new(ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013(L_21, L_19, L_20, NULL);
		NullCheck(L_15);
		EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline(L_15, NULL, L_21, NULL);
		goto IL_0095;
	}

IL_008c:
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_22 = V_0;
		NullCheck(L_22);
		InternalDataSnapshot_Dispose_mECA22BB52D5699902D9297AA71E8CEE322A794EB(L_22, NULL);
	}

IL_0095:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m9A18CB149B5F6B19618F0745EFAB6ED9701EA6CF (U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::<OnChildRemovedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m50D84306365A8F086387DDD43C4083C03BB0B609 (U3CU3Ec__DisplayClass5_0_t37038CA1AFAEC977AF5727E26360F98412D59D21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* V_0 = NULL;
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* V_1 = NULL;
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		intptr_t L_0 = __this->___snapshot_0;
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_1 = (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D*)il2cpp_codegen_object_new(InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InternalDataSnapshot__ctor_m697E1A225D18E76664CE7B7FCAFFFE9358B7EDF3(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)NULL;
		V_2 = (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)NULL;
		int32_t L_2 = __this->___callbackId_1;
		il2cpp_codegen_runtime_class_init_inline(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_mCC4C39B30A23688A32A2A048AF0FF38F23AFA60D(L_2, (&V_2), NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_5 = V_2;
		NullCheck(L_5);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_6 = L_5->___childRemovedImpl_11;
		V_1 = L_6;
	}

IL_002c:
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_9 = V_1;
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_10 = V_0;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_11 = V_2;
		NullCheck(L_11);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_12 = L_11->___database_6;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_13;
		L_13 = DataSnapshot_CreateSnapshot_m2EDD325B01CE1C59B70AB5689316F66E6EE5C1F7(L_10, L_12, NULL);
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_14 = (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937*)il2cpp_codegen_object_new(ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013(L_14, L_13, (String_t*)NULL, NULL);
		NullCheck(L_9);
		EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline(L_9, NULL, L_14, NULL);
		goto IL_005d;
	}

IL_0054:
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_15 = V_0;
		NullCheck(L_15);
		InternalDataSnapshot_Dispose_mECA22BB52D5699902D9297AA71E8CEE322A794EB(L_15, NULL);
	}

IL_005d:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m74BE29A48F64486243F16A7BFC3B3AB2579C99F5 (U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::<OnCancelledHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_m0A52BED0A41EAED007AED2CFF7496514ABEBE28D (U3CU3Ec__DisplayClass6_0_t98235751DF965BF2CC6D0204F01C8DA2F4A867B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* V_0 = NULL;
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)NULL;
		int32_t L_0 = __this->___callbackId_0;
		il2cpp_codegen_runtime_class_init_inline(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalChildListener_TryGetListener_mCC4C39B30A23688A32A2A048AF0FF38F23AFA60D(L_0, (&V_1), NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_3 = V_1;
		NullCheck(L_3);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_4 = L_3->___cancelledImpl_7;
		V_0 = L_4;
	}

IL_001d:
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_5 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_7 = V_0;
		int32_t L_8 = __this->___error_1;
		String_t* L_9 = __this->___msg_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_10;
		L_10 = DatabaseError_FromError_m6159F357D50E2B0B0EBE88BF88D47AEAD0B836DE(L_8, L_9, NULL);
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_11 = (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937*)il2cpp_codegen_object_new(ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ChildChangedEventArgs__ctor_mCE05C1743B7236D84ADFC50D1DC746D205C7E4CC(L_11, L_10, NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline(L_7, NULL, L_11, NULL);
	}

IL_0045:
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
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_m77AD3B221D83B5E24AC82532606CFBF38B7A1058 (int32_t ___0_uid, InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
			Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_4 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
			int32_t L_5 = ___0_uid;
			InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** L_6 = ___1_listener;
			NullCheck(L_4);
			bool L_7;
			L_7 = Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851(L_4, L_5, L_6, Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851_RuntimeMethod_var);
			V_2 = L_7;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180 (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* V_0 = NULL;
	bool V_1 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
			int32_t L_4 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___uidGenerator_0;
			int32_t L_5 = L_4;
			((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___uidGenerator_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
			__this->___uid_2 = L_5;
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Finalize_m6BBDE3363C32BF18B507EED58DC2A4479EBEE267 (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InternalListener_Dispose_m6D7CA28EE5C08ED9103B2EAD4ACCD0016ACDA0CC(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m6D7CA28EE5C08ED9103B2EAD4ACCD0016ACDA0CC (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* V_0 = NULL;
	bool V_1 = false;
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0038;
					}
				}
				{
					Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
			Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_4 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
			int32_t L_5 = __this->___uid_2;
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7(L_4, L_5, Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7_RuntimeMethod_var);
			goto IL_0039;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__cctor_m821B03843379636576B9FE514F95AC7F9B2C1134 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___uidGenerator_0 = 0;
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D*)il2cpp_codegen_object_new(Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709(L_0, Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709_RuntimeMethod_var);
		((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1), (void*)L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnValueChangedHandler_mB87BCD8900157B34D77C3D719E94A05FC2D5B5A2(int32_t ___0_callbackId, intptr_t ___1_snapshot)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalValueListener_OnValueChangedHandler_mB87BCD8900157B34D77C3D719E94A05FC2D5B5A2(___0_callbackId, ___1_snapshot, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnCancelledHandler_m488ACD2B13095C11B53C435167BF0EF21DBDAFE6(int32_t ___0_callbackId, int32_t ___1_error, char* ___2_msg)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___2_msg' to managed representation
	String_t* ____2_msg_unmarshaled = NULL;
	____2_msg_unmarshaled = il2cpp_codegen_marshal_string_result(___2_msg);

	// Managed method invocation
	InternalValueListener_OnCancelledHandler_m488ACD2B13095C11B53C435167BF0EF21DBDAFE6(___0_callbackId, ___1_error, ____2_msg_unmarshaled, NULL);

}
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m398354C414B128FF471D0F55245E89CA396C6CB1 (int32_t ___0_callbackId, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** ___1_valueListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA*)NULL;
		int32_t L_0 = ___0_callbackId;
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_m77AD3B221D83B5E24AC82532606CFBF38B7A1058(L_0, (&V_0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** L_3 = ___1_valueListener;
		InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* L_4 = V_0;
		*((RuntimeObject**)L_3) = (RuntimeObject*)((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)IsInstSealed((RuntimeObject*)L_4, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)IsInstSealed((RuntimeObject*)L_4, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var)));
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** L_5 = ___1_valueListener;
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_6 = *((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D**)L_5);
		V_2 = (bool)((!(((RuntimeObject*)(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0028;
	}

IL_0020:
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** L_7 = ___1_valueListener;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_mB87BCD8900157B34D77C3D719E94A05FC2D5B5A2 (int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m4A5DE2CC01B3D8E87D29BD6081958700B60BF63D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* L_0 = (U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mFE8599AB5E622C2D83A9137B928B3F718073A012(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* L_1 = V_0;
		intptr_t L_2 = ___1_snapshot;
		NullCheck(L_1);
		L_1->___snapshot_0 = L_2;
		U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* L_3 = V_0;
		int32_t L_4 = ___0_callbackId;
		NullCheck(L_3);
		L_3->___callbackId_1 = L_4;
		U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m4A5DE2CC01B3D8E87D29BD6081958700B60BF63D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_6, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m488ACD2B13095C11B53C435167BF0EF21DBDAFE6 (int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m44D7F07A2651825C7119B1EE94E470F09DE93EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* L_0 = (U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mEFA4AD4328B629C396FDAA9929191B23FAFBC74F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* L_1 = V_0;
		int32_t L_2 = ___0_callbackId;
		NullCheck(L_1);
		L_1->___callbackId_0 = L_2;
		U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* L_3 = V_0;
		int32_t L_4 = ___1_error;
		NullCheck(L_3);
		L_3->___error_1 = L_4;
		U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* L_5 = V_0;
		String_t* L_6 = ___2_msg;
		NullCheck(L_5);
		L_5->___msg_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___msg_2), (void*)L_6);
		U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m44D7F07A2651825C7119B1EE94E470F09DE93EDD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_8, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__cctor_mAF5D954ECC06940045110FD4568EAD4FD82A3B48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnCancelledHandler_m488ACD2B13095C11B53C435167BF0EF21DBDAFE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnValueChangedHandler_mB87BCD8900157B34D77C3D719E94A05FC2D5B5A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0*)il2cpp_codegen_object_new(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B(L_0, NULL, (intptr_t)((void*)InternalValueListener_OnCancelledHandler_m488ACD2B13095C11B53C435167BF0EF21DBDAFE6_RuntimeMethod_var), NULL);
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* L_1 = (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D*)il2cpp_codegen_object_new(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnValueChangedDelegate__ctor_m80BF259A3B5530546C3765A0D9822B7F76644BE4(L_1, NULL, (intptr_t)((void*)InternalValueListener_OnValueChangedHandler_mB87BCD8900157B34D77C3D719E94A05FC2D5B5A2_RuntimeMethod_var), NULL);
		InternalQuery_RegisterValueListenerCallbacks_m02FA94059B9B4CB903AD2A9FC461D1DFBC2BDEAC(L_0, L_1, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_m8273861D166C478D4592F392E84A9AD77879EF1A (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* __this, InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___0_internalQuery, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___1_database, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___eventLock_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventLock_3), (void*)L_0);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___cppListener_5 = L_1;
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180(__this, NULL);
		InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* L_2 = ___0_internalQuery;
		__this->___internalQuery_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalQuery_4), (void*)L_2);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3 = ___1_database;
		__this->___database_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_6), (void*)L_3);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_DestroyCppListener_m2F5CB0AEF6BDDD53B3DB2CD1CA73FA71DDB458D3 (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___cppListener_5;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = __this->___cppListener_5;
		InternalQuery_DestroyValueListener_m34D4329F6CCD18720B1AAE2CF1725C8EF418FBD6(L_4, NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___cppListener_5 = L_5;
	}

IL_002e:
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
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_Multicast(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* currentDelegate = reinterpret_cast<OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_callbackId, ___1_snapshot, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_OpenInst(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_snapshot, method);
}
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_OpenStatic(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_snapshot, method);
}
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_OpenStaticInvoker(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_callbackId, ___1_snapshot);
}
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_ClosedStaticInvoker(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_callbackId, ___1_snapshot);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_callbackId, ___1_snapshot);

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m80BF259A3B5530546C3765A0D9822B7F76644BE4 (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_Multicast;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36 (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___0_callbackId, intptr_t ___1_snapshot, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_callbackId, ___1_snapshot, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_Multicast(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* currentDelegate = reinterpret_cast<OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_callbackId, ___1_error, ___2_msg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_OpenInst(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_error, ___2_msg, method);
}
void OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_OpenStatic(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_error, ___2_msg, method);
}
void OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_OpenStaticInvoker(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_callbackId, ___1_error, ___2_msg);
}
void OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_ClosedStaticInvoker(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_callbackId, ___1_error, ___2_msg);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5 (OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___2_msg' to native representation
	char* ____2_msg_marshaled = NULL;
	____2_msg_marshaled = il2cpp_codegen_marshal_string(___2_msg);

	// Native function invocation
	il2cppPInvokeFunc(___0_callbackId, ___1_error, ____2_msg_marshaled);

	// Marshaling cleanup of parameter '___2_msg' native representation
	il2cpp_codegen_marshal_free(____2_msg_marshaled);
	____2_msg_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m8FAB144B0258C7B1B9E92ABB0767928DF52080B8 (OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949_Multicast;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m5AB4D291086D9032E46F29FADC0F78B888B73949 (OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___0_callbackId, int32_t ___1_error, String_t* ___2_msg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_callbackId, ___1_error, ___2_msg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mFE8599AB5E622C2D83A9137B928B3F718073A012 (U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::<OnValueChangedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m4A5DE2CC01B3D8E87D29BD6081958700B60BF63D (U3CU3Ec__DisplayClass3_0_tA33F9A04A549ED4600CF025ED3BD9E5D1DBD6A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* V_0 = NULL;
	EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* V_1 = NULL;
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		intptr_t L_0 = __this->___snapshot_0;
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_1 = (InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D*)il2cpp_codegen_object_new(InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InternalDataSnapshot__ctor_m697E1A225D18E76664CE7B7FCAFFFE9358B7EDF3(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044*)NULL;
		V_2 = (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)NULL;
		int32_t L_2 = __this->___callbackId_1;
		il2cpp_codegen_runtime_class_init_inline(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalValueListener_TryGetListener_m398354C414B128FF471D0F55245E89CA396C6CB1(L_2, (&V_2), NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_5 = V_2;
		NullCheck(L_5);
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_6 = L_5->___valueChangedImpl_7;
		V_1 = L_6;
	}

IL_002c:
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_9 = V_1;
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_10 = V_0;
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_11 = V_2;
		NullCheck(L_11);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_12 = L_11->___database_6;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_13;
		L_13 = DataSnapshot_CreateSnapshot_m2EDD325B01CE1C59B70AB5689316F66E6EE5C1F7(L_10, L_12, NULL);
		ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* L_14 = (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB*)il2cpp_codegen_object_new(ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ValueChangedEventArgs__ctor_m3746F9CA3C31CF3ECFE96A4C2E258D394149F7BF(L_14, L_13, NULL);
		NullCheck(L_9);
		EventHandler_1_Invoke_m138A2D3506A270F2AB9DF6EE30246FE32C0F2672_inline(L_9, NULL, L_14, NULL);
		goto IL_005c;
	}

IL_0053:
	{
		InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* L_15 = V_0;
		NullCheck(L_15);
		InternalDataSnapshot_Dispose_mECA22BB52D5699902D9297AA71E8CEE322A794EB(L_15, NULL);
	}

IL_005c:
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
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mEFA4AD4328B629C396FDAA9929191B23FAFBC74F (U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::<OnCancelledHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m44D7F07A2651825C7119B1EE94E470F09DE93EDD (U3CU3Ec__DisplayClass4_0_tF15B6502CEB46B82CD07CA4C75E1CFBA5FD2F374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* V_0 = NULL;
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044*)NULL;
		int32_t L_0 = __this->___callbackId_0;
		il2cpp_codegen_runtime_class_init_inline(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalValueListener_TryGetListener_m398354C414B128FF471D0F55245E89CA396C6CB1(L_0, (&V_1), NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_3 = V_1;
		NullCheck(L_3);
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_4 = L_3->___valueChangedImpl_7;
		V_0 = L_4;
	}

IL_001d:
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_5 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_7 = V_0;
		int32_t L_8 = __this->___error_1;
		String_t* L_9 = __this->___msg_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_10;
		L_10 = DatabaseError_FromError_m6159F357D50E2B0B0EBE88BF88D47AEAD0B836DE(L_8, L_9, NULL);
		ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* L_11 = (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB*)il2cpp_codegen_object_new(ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ValueChangedEventArgs__ctor_mFAFCFA9665476BAD0D16CD6906EA3554ABB0F283(L_11, L_10, NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m138A2D3506A270F2AB9DF6EE30246FE32C0F2672_inline(L_7, NULL, L_11, NULL);
	}

IL_0045:
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
// Firebase.Variant Firebase.Database.Internal.Utilities::MakeVariant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* Utilities_MakeVariant_mAD868620EF30F894C9B34AFC0F58897705DCED78 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* V_0 = NULL;
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_0 = ___0_value;
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_1;
		L_1 = Variant_FromObject_m5D406B8B5BBF1DB6FDD90D83468B7F29B01501B7(L_0, NULL);
		V_0 = L_1;
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.ArgumentException)
		V_1 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));
		RuntimeObject* L_2 = ___0_value;
		String_t* L_3;
		L_3 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19709657F1A68406CA65F0C729F82F01A9E68B23)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = V_1;
		DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* L_5 = (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		DatabaseException__ctor_m30665E8EB8BE7EC9D7EF15D7B91CD3CD0FDDDB73(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utilities_MakeVariant_mAD868620EF30F894C9B34AFC0F58897705DCED78_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_001f:
	{
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPreviousChildNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousChildNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_value, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___0_value;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_value, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___0_value;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCodeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDetailsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C_inline (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___0_value, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = ___0_value;
		__this->___U3CDatabaseU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* DatabaseReference_get_Database_m8A3E998AF1DE24536B74A1584569DF886DCE252E_inline (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = __this->___U3CDatabaseU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___0_value, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___0_value;
		__this->___U3CAppU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = __this->___U3CAppU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___0_value, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___0_value;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___0_value, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___0_value;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_mB76D0D70ECCEF2EBB69A4376D1A75DBB52300D44_inline (Action_t33F1097A0A9B25B579B84B2014DDA783CD83A3C8* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___0_sender, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
