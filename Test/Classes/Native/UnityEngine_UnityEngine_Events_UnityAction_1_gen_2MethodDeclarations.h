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

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t654;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t180;
// System.AsyncCallback
struct AsyncCallback_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m3345_gshared (UnityAction_1_t654 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m3345(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t654 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3345_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13536_gshared (UnityAction_1_t654 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13536(__this, ___arg0, method) (( void (*) (UnityAction_1_t654 *, bool, const MethodInfo*))UnityAction_1_Invoke_m13536_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13537_gshared (UnityAction_1_t654 * __this, bool ___arg0, AsyncCallback_t181 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13537(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t654 *, bool, AsyncCallback_t181 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13537_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13538_gshared (UnityAction_1_t654 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13538(__this, ___result, method) (( void (*) (UnityAction_1_t654 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13538_gshared)(__this, ___result, method)
