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

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t433;
// UnityEngine.Object
struct Object_t38;
struct Object_t38_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t125;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m1883_gshared (CachedInvokableCall_1_t433 * __this, Object_t38 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m1883(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t433 *, Object_t38 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m1883_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m13531_gshared (CachedInvokableCall_1_t433 * __this, ObjectU5BU5D_t125* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m13531(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t433 *, ObjectU5BU5D_t125*, const MethodInfo*))CachedInvokableCall_1_Invoke_m13531_gshared)(__this, ___args, method)
