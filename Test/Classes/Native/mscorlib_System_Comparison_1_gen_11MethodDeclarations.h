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

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t1926;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t180;
// System.AsyncCallback
struct AsyncCallback_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12283_gshared (Comparison_1_t1926 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12283(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1926 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12283_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12284_gshared (Comparison_1_t1926 * __this, Color32_t191  ___x, Color32_t191  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12284(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1926 *, Color32_t191 , Color32_t191 , const MethodInfo*))Comparison_1_Invoke_m12284_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12285_gshared (Comparison_1_t1926 * __this, Color32_t191  ___x, Color32_t191  ___y, AsyncCallback_t181 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12285(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1926 *, Color32_t191 , Color32_t191 , AsyncCallback_t181 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12285_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12286_gshared (Comparison_1_t1926 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12286(__this, ___result, method) (( int32_t (*) (Comparison_1_t1926 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12286_gshared)(__this, ___result, method)
