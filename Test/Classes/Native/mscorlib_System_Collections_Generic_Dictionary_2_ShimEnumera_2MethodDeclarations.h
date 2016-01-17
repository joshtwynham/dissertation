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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2274;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2264;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16869_gshared (ShimEnumerator_t2274 * __this, Dictionary_2_t2264 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16869(__this, ___host, method) (( void (*) (ShimEnumerator_t2274 *, Dictionary_2_t2264 *, const MethodInfo*))ShimEnumerator__ctor_m16869_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16870_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16870(__this, method) (( bool (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_MoveNext_m16870_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t862  ShimEnumerator_get_Entry_m16871_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16871(__this, method) (( DictionaryEntry_t862  (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Entry_m16871_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16872_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16872(__this, method) (( Object_t * (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Key_m16872_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16873_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16873(__this, method) (( Object_t * (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Value_m16873_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16874_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16874(__this, method) (( Object_t * (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Current_m16874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m16875_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16875(__this, method) (( void (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_Reset_m16875_gshared)(__this, method)
