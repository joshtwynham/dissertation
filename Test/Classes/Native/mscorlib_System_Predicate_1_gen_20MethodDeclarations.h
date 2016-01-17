#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2080;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t180;
// System.AsyncCallback
struct AsyncCallback_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14136_gshared (Predicate_1_t2080 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14136(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2080 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14136_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14137_gshared (Predicate_1_t2080 * __this, RaycastResult_t473  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14137(__this, ___obj, method) (( bool (*) (Predicate_1_t2080 *, RaycastResult_t473 , const MethodInfo*))Predicate_1_Invoke_m14137_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14138_gshared (Predicate_1_t2080 * __this, RaycastResult_t473  ___obj, AsyncCallback_t181 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14138(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2080 *, RaycastResult_t473 , AsyncCallback_t181 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14138_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14139_gshared (Predicate_1_t2080 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14139(__this, ___result, method) (( bool (*) (Predicate_1_t2080 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14139_gshared)(__this, ___result, method)
