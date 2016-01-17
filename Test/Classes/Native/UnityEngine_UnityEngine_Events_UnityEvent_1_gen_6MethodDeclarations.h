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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2042;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2018;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t354;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m13721_gshared (UnityEvent_1_t2042 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m13721(__this, method) (( void (*) (UnityEvent_1_t2042 *, const MethodInfo*))UnityEvent_1__ctor_m13721_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13722_gshared (UnityEvent_1_t2042 * __this, UnityAction_1_t2018 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m13722(__this, ___call, method) (( void (*) (UnityEvent_1_t2042 *, UnityAction_1_t2018 *, const MethodInfo*))UnityEvent_1_AddListener_m13722_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13723_gshared (UnityEvent_1_t2042 * __this, UnityAction_1_t2018 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13723(__this, ___call, method) (( void (*) (UnityEvent_1_t2042 *, UnityAction_1_t2018 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13723_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13724_gshared (UnityEvent_1_t2042 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13724(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2042 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13724_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t354 * UnityEvent_1_GetDelegate_m13725_gshared (UnityEvent_1_t2042 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13725(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t354 * (*) (UnityEvent_1_t2042 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13725_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t354 * UnityEvent_1_GetDelegate_m13726_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2018 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13726(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t354 * (*) (Object_t * /* static, unused */, UnityAction_1_t2018 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13726_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m13727_gshared (UnityEvent_1_t2042 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m13727(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2042 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m13727_gshared)(__this, ___arg0, method)
