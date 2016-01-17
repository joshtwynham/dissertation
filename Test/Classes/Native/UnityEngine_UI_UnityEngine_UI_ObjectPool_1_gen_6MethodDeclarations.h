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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m16604(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2242 *, UnityAction_1_t2243 *, UnityAction_1_t2243 *, const MethodInfo*))ObjectPool_1__ctor_m13940_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::get_countAll()
#define ObjectPool_1_get_countAll_m16605(__this, method) (( int32_t (*) (ObjectPool_1_t2242 *, const MethodInfo*))ObjectPool_1_get_countAll_m13942_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16606(__this, ___value, method) (( void (*) (ObjectPool_1_t2242 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13944_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Get()
#define ObjectPool_1_Get_m16607(__this, method) (( List_1_t383 * (*) (ObjectPool_1_t2242 *, const MethodInfo*))ObjectPool_1_Get_m13946_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>::Release(T)
#define ObjectPool_1_Release_m16608(__this, ___element, method) (( void (*) (ObjectPool_1_t2242 *, List_1_t383 *, const MethodInfo*))ObjectPool_1_Release_m13948_gshared)(__this, ___element, method)
