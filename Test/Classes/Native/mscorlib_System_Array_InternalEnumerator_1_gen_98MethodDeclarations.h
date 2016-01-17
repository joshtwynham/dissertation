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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_98.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17560_gshared (InternalEnumerator_1_t2356 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17560(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2356 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17560_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17561_gshared (InternalEnumerator_1_t2356 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17561(__this, method) (( void (*) (InternalEnumerator_1_t2356 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17561_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17562_gshared (InternalEnumerator_1_t2356 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17562(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2356 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17562_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17563_gshared (InternalEnumerator_1_t2356 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17563(__this, method) (( void (*) (InternalEnumerator_1_t2356 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17563_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17564_gshared (InternalEnumerator_1_t2356 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17564(__this, method) (( bool (*) (InternalEnumerator_1_t2356 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17564_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::get_Current()
extern "C" ResourceInfo_t1351  InternalEnumerator_1_get_Current_m17565_gshared (InternalEnumerator_1_t2356 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17565(__this, method) (( ResourceInfo_t1351  (*) (InternalEnumerator_1_t2356 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17565_gshared)(__this, method)
