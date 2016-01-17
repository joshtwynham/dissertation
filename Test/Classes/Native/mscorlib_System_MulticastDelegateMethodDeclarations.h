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

// System.MulticastDelegate
struct MulticastDelegate_t179;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t399;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1734;
// System.Delegate
struct Delegate_t401;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6129 (MulticastDelegate_t179 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6130 (MulticastDelegate_t179 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6131 (MulticastDelegate_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1734* MulticastDelegate_GetInvocationList_m6132 (MulticastDelegate_t179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t401 * MulticastDelegate_CombineImpl_m6133 (MulticastDelegate_t179 * __this, Delegate_t401 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6134 (MulticastDelegate_t179 * __this, MulticastDelegate_t179 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t179 * MulticastDelegate_KPM_m6135 (Object_t * __this /* static, unused */, MulticastDelegate_t179 * ___needle, MulticastDelegate_t179 * ___haystack, MulticastDelegate_t179 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t401 * MulticastDelegate_RemoveImpl_m6136 (MulticastDelegate_t179 * __this, Delegate_t401 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
