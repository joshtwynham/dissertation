﻿#pragma once

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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_50.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14567_gshared (InternalEnumerator_1_t2107 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14567(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2107 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14567_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14568_gshared (InternalEnumerator_1_t2107 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14568(__this, method) (( void (*) (InternalEnumerator_1_t2107 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14568_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14569_gshared (InternalEnumerator_1_t2107 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14569(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2107 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14569_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14570_gshared (InternalEnumerator_1_t2107 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14570(__this, method) (( void (*) (InternalEnumerator_1_t2107 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14570_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14571_gshared (InternalEnumerator_1_t2107 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14571(__this, method) (( bool (*) (InternalEnumerator_1_t2107 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14571_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2106  InternalEnumerator_1_get_Current_m14572_gshared (InternalEnumerator_1_t2107 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14572(__this, method) (( KeyValuePair_2_t2106  (*) (InternalEnumerator_1_t2107 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14572_gshared)(__this, method)
