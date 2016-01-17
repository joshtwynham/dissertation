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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t2351;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t180;
// System.AsyncCallback
struct AsyncCallback_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17526_gshared (Comparison_1_t2351 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17526(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2351 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17526_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17527_gshared (Comparison_1_t2351 * __this, CustomAttributeNamedArgument_t1320  ___x, CustomAttributeNamedArgument_t1320  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17527(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2351 *, CustomAttributeNamedArgument_t1320 , CustomAttributeNamedArgument_t1320 , const MethodInfo*))Comparison_1_Invoke_m17527_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17528_gshared (Comparison_1_t2351 * __this, CustomAttributeNamedArgument_t1320  ___x, CustomAttributeNamedArgument_t1320  ___y, AsyncCallback_t181 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17528(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2351 *, CustomAttributeNamedArgument_t1320 , CustomAttributeNamedArgument_t1320 , AsyncCallback_t181 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17528_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17529_gshared (Comparison_1_t2351 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17529(__this, ___result, method) (( int32_t (*) (Comparison_1_t2351 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17529_gshared)(__this, ___result, method)
