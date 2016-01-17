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

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t1975;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t180;
// System.AsyncCallback
struct AsyncCallback_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12964_gshared (Predicate_1_t1975 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12964(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1975 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12964_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12965_gshared (Predicate_1_t1975 * __this, UICharInfo_t276  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12965(__this, ___obj, method) (( bool (*) (Predicate_1_t1975 *, UICharInfo_t276 , const MethodInfo*))Predicate_1_Invoke_m12965_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12966_gshared (Predicate_1_t1975 * __this, UICharInfo_t276  ___obj, AsyncCallback_t181 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12966(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1975 *, UICharInfo_t276 , AsyncCallback_t181 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12966_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12967_gshared (Predicate_1_t1975 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12967(__this, ___result, method) (( bool (*) (Predicate_1_t1975 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12967_gshared)(__this, ___result, method)
