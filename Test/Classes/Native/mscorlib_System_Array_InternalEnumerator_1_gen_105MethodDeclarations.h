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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17602_gshared (InternalEnumerator_1_t2363 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17602(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2363 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17602_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17603_gshared (InternalEnumerator_1_t2363 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17603(__this, method) (( void (*) (InternalEnumerator_1_t2363 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17603_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17604_gshared (InternalEnumerator_1_t2363 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17604(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2363 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17604_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17605_gshared (InternalEnumerator_1_t2363 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17605(__this, method) (( void (*) (InternalEnumerator_1_t2363 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17605_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17606_gshared (InternalEnumerator_1_t2363 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17606(__this, method) (( bool (*) (InternalEnumerator_1_t2363 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17606_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1074  InternalEnumerator_1_get_Current_m17607_gshared (InternalEnumerator_1_t2363 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17607(__this, method) (( Decimal_t1074  (*) (InternalEnumerator_1_t2363 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17607_gshared)(__this, method)
