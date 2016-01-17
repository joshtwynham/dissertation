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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t513;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2028;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t354;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m3331_gshared (UnityEvent_1_t513 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3331(__this, method) (( void (*) (UnityEvent_1_t513 *, const MethodInfo*))UnityEvent_1__ctor_m3331_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m15000_gshared (UnityEvent_1_t513 * __this, UnityAction_1_t2028 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m15000(__this, ___call, method) (( void (*) (UnityEvent_1_t513 *, UnityAction_1_t2028 *, const MethodInfo*))UnityEvent_1_AddListener_m15000_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m15001_gshared (UnityEvent_1_t513 * __this, UnityAction_1_t2028 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m15001(__this, ___call, method) (( void (*) (UnityEvent_1_t513 *, UnityAction_1_t2028 *, const MethodInfo*))UnityEvent_1_RemoveListener_m15001_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15002_gshared (UnityEvent_1_t513 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m15002(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t513 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m15002_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t354 * UnityEvent_1_GetDelegate_m15003_gshared (UnityEvent_1_t513 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15003(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t354 * (*) (UnityEvent_1_t513 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m15003_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t354 * UnityEvent_1_GetDelegate_m15004_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2028 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15004(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t354 * (*) (Object_t * /* static, unused */, UnityAction_1_t2028 *, const MethodInfo*))UnityEvent_1_GetDelegate_m15004_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3333_gshared (UnityEvent_1_t513 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3333(__this, ___arg0, method) (( void (*) (UnityEvent_1_t513 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m3333_gshared)(__this, ___arg0, method)
