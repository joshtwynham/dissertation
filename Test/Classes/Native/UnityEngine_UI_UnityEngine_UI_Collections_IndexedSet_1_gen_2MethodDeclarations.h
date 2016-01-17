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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2122;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2220;
// System.Object[]
struct ObjectU5BU5D_t125;
// System.Comparison`1<System.Object>
struct Comparison_1_t1845;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14779_gshared (IndexedSet_1_t2122 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m14779(__this, method) (( void (*) (IndexedSet_1_t2122 *, const MethodInfo*))IndexedSet_1__ctor_m14779_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14781_gshared (IndexedSet_1_t2122 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14781(__this, method) (( Object_t * (*) (IndexedSet_1_t2122 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14781_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14783_gshared (IndexedSet_1_t2122 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14783(__this, ___item, method) (( void (*) (IndexedSet_1_t2122 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14783_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14785_gshared (IndexedSet_1_t2122 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14785(__this, ___item, method) (( bool (*) (IndexedSet_1_t2122 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14785_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14787_gshared (IndexedSet_1_t2122 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14787(__this, method) (( Object_t* (*) (IndexedSet_1_t2122 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14787_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14789_gshared (IndexedSet_1_t2122 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14789(__this, method) (( void (*) (IndexedSet_1_t2122 *, const MethodInfo*))IndexedSet_1_Clear_m14789_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14791_gshared (IndexedSet_1_t2122 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14791(__this, ___item, method) (( bool (*) (IndexedSet_1_t2122 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14791_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14793_gshared (IndexedSet_1_t2122 * __this, ObjectU5BU5D_t125* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14793(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2122 *, ObjectU5BU5D_t125*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14793_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14795_gshared (IndexedSet_1_t2122 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14795(__this, method) (( int32_t (*) (IndexedSet_1_t2122 *, const MethodInfo*))IndexedSet_1_get_Count_m14795_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14797_gshared (IndexedSet_1_t2122 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14797(__this, method) (( bool (*) (IndexedSet_1_t2122 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14797_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14799_gshared (IndexedSet_1_t2122 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14799(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2122 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14799_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14801_gshared (IndexedSet_1_t2122 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14801(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2122 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14801_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14803_gshared (IndexedSet_1_t2122 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14803(__this, ___index, method) (( void (*) (IndexedSet_1_t2122 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14803_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14805_gshared (IndexedSet_1_t2122 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14805(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2122 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14805_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14807_gshared (IndexedSet_1_t2122 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14807(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2122 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14807_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14808_gshared (IndexedSet_1_t2122 * __this, Comparison_1_t1845 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14808(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2122 *, Comparison_1_t1845 *, const MethodInfo*))IndexedSet_1_Sort_m14808_gshared)(__this, ___sortLayoutFunction, method)
