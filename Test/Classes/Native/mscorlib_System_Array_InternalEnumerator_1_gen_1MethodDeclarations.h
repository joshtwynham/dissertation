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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10818_gshared (InternalEnumerator_1_t1814 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10818(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1814 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10818_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10819_gshared (InternalEnumerator_1_t1814 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10819(__this, method) (( void (*) (InternalEnumerator_1_t1814 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10819_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10820_gshared (InternalEnumerator_1_t1814 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10820(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1814 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10820_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10821_gshared (InternalEnumerator_1_t1814 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10821(__this, method) (( void (*) (InternalEnumerator_1_t1814 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10821_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10822_gshared (InternalEnumerator_1_t1814 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10822(__this, method) (( bool (*) (InternalEnumerator_1_t1814 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10822_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1813  InternalEnumerator_1_get_Current_m10823_gshared (InternalEnumerator_1_t1814 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10823(__this, method) (( KeyValuePair_2_t1813  (*) (InternalEnumerator_1_t1814 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10823_gshared)(__this, method)
