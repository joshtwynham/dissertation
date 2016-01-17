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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2379;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m17751_gshared (DefaultComparer_t2379 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17751(__this, method) (( void (*) (DefaultComparer_t2379 *, const MethodInfo*))DefaultComparer__ctor_m17751_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17752_gshared (DefaultComparer_t2379 * __this, DateTimeOffset_t1646  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17752(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2379 *, DateTimeOffset_t1646 , const MethodInfo*))DefaultComparer_GetHashCode_m17752_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17753_gshared (DefaultComparer_t2379 * __this, DateTimeOffset_t1646  ___x, DateTimeOffset_t1646  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17753(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2379 *, DateTimeOffset_t1646 , DateTimeOffset_t1646 , const MethodInfo*))DefaultComparer_Equals_m17753_gshared)(__this, ___x, ___y, method)
