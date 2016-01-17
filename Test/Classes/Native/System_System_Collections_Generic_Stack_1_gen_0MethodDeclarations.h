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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2006;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2220;
// System.Collections.IEnumerator
struct IEnumerator_t102;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m13336_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1__ctor_m13336(__this, method) (( void (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1__ctor_m13336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m13338_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m13338(__this, method) (( bool (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m13338_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m13340_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m13340(__this, method) (( Object_t * (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m13340_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m13342_gshared (Stack_1_t2006 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m13342(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2006 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m13342_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13344_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13344(__this, method) (( Object_t* (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13344_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m13346_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m13346(__this, method) (( Object_t * (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m13346_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m13348_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_Peek_m13348(__this, method) (( Object_t * (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_Peek_m13348_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m13349_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_Pop_m13349(__this, method) (( Object_t * (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_Pop_m13349_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m13350_gshared (Stack_1_t2006 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m13350(__this, ___t, method) (( void (*) (Stack_1_t2006 *, Object_t *, const MethodInfo*))Stack_1_Push_m13350_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m13352_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m13352(__this, method) (( int32_t (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_get_Count_m13352_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2007  Stack_1_GetEnumerator_m13354_gshared (Stack_1_t2006 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m13354(__this, method) (( Enumerator_t2007  (*) (Stack_1_t2006 *, const MethodInfo*))Stack_1_GetEnumerator_m13354_gshared)(__this, method)
