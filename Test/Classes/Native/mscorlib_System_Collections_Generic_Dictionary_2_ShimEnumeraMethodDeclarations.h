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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1824;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1810;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10900_gshared (ShimEnumerator_t1824 * __this, Dictionary_2_t1810 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10900(__this, ___host, method) (( void (*) (ShimEnumerator_t1824 *, Dictionary_2_t1810 *, const MethodInfo*))ShimEnumerator__ctor_m10900_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10901_gshared (ShimEnumerator_t1824 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10901(__this, method) (( bool (*) (ShimEnumerator_t1824 *, const MethodInfo*))ShimEnumerator_MoveNext_m10901_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t862  ShimEnumerator_get_Entry_m10902_gshared (ShimEnumerator_t1824 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10902(__this, method) (( DictionaryEntry_t862  (*) (ShimEnumerator_t1824 *, const MethodInfo*))ShimEnumerator_get_Entry_m10902_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10903_gshared (ShimEnumerator_t1824 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10903(__this, method) (( Object_t * (*) (ShimEnumerator_t1824 *, const MethodInfo*))ShimEnumerator_get_Key_m10903_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10904_gshared (ShimEnumerator_t1824 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10904(__this, method) (( Object_t * (*) (ShimEnumerator_t1824 *, const MethodInfo*))ShimEnumerator_get_Value_m10904_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10905_gshared (ShimEnumerator_t1824 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10905(__this, method) (( Object_t * (*) (ShimEnumerator_t1824 *, const MethodInfo*))ShimEnumerator_get_Current_m10905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m10906_gshared (ShimEnumerator_t1824 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m10906(__this, method) (( void (*) (ShimEnumerator_t1824 *, const MethodInfo*))ShimEnumerator_Reset_m10906_gshared)(__this, method)
