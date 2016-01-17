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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2079;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m14133_gshared (DefaultComparer_t2079 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14133(__this, method) (( void (*) (DefaultComparer_t2079 *, const MethodInfo*))DefaultComparer__ctor_m14133_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14134_gshared (DefaultComparer_t2079 * __this, RaycastResult_t473  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14134(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2079 *, RaycastResult_t473 , const MethodInfo*))DefaultComparer_GetHashCode_m14134_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14135_gshared (DefaultComparer_t2079 * __this, RaycastResult_t473  ___x, RaycastResult_t473  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14135(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2079 *, RaycastResult_t473 , RaycastResult_t473 , const MethodInfo*))DefaultComparer_Equals_m14135_gshared)(__this, ___x, ___y, method)
