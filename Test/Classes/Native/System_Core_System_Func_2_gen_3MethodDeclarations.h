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

// System.Func`2<System.Object,System.Object>
struct Func_2_t2290;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t180;
// System.AsyncCallback
struct AsyncCallback_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m16979_gshared (Func_2_t2290 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m16979(__this, ___object, ___method, method) (( void (*) (Func_2_t2290 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m16979_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m16980_gshared (Func_2_t2290 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m16980(__this, ___arg1, method) (( Object_t * (*) (Func_2_t2290 *, Object_t *, const MethodInfo*))Func_2_Invoke_m16980_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m16981_gshared (Func_2_t2290 * __this, Object_t * ___arg1, AsyncCallback_t181 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m16981(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2290 *, Object_t *, AsyncCallback_t181 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m16981_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m16982_gshared (Func_2_t2290 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m16982(__this, ___result, method) (( Object_t * (*) (Func_2_t2290 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m16982_gshared)(__this, ___result, method)
