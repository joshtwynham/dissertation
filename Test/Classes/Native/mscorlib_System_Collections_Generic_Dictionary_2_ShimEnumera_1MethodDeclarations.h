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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2113;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2104;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14625_gshared (ShimEnumerator_t2113 * __this, Dictionary_2_t2104 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14625(__this, ___host, method) (( void (*) (ShimEnumerator_t2113 *, Dictionary_2_t2104 *, const MethodInfo*))ShimEnumerator__ctor_m14625_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14626_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14626(__this, method) (( bool (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_MoveNext_m14626_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t862  ShimEnumerator_get_Entry_m14627_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14627(__this, method) (( DictionaryEntry_t862  (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Entry_m14627_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14628_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14628(__this, method) (( Object_t * (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Key_m14628_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14629_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14629(__this, method) (( Object_t * (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Value_m14629_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14630_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14630(__this, method) (( Object_t * (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_get_Current_m14630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m14631_gshared (ShimEnumerator_t2113 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14631(__this, method) (( void (*) (ShimEnumerator_t2113 *, const MethodInfo*))ShimEnumerator_Reset_m14631_gshared)(__this, method)
