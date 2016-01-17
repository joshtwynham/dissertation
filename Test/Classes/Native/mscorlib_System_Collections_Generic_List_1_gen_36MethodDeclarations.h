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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t668;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t670;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2220;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2395;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1802;
// System.Object[]
struct ObjectU5BU5D_t125;
// System.Predicate`1<System.Object>
struct Predicate_1_t1840;
// System.Comparison`1<System.Object>
struct Comparison_1_t1845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11046_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1__ctor_m11046(__this, method) (( void (*) (List_1_t668 *, const MethodInfo*))List_1__ctor_m11046_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11048_gshared (List_1_t668 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11048(__this, ___collection, method) (( void (*) (List_1_t668 *, Object_t*, const MethodInfo*))List_1__ctor_m11048_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11050_gshared (List_1_t668 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11050(__this, ___capacity, method) (( void (*) (List_1_t668 *, int32_t, const MethodInfo*))List_1__ctor_m11050_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11052_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11052(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11052_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11054_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11054(__this, method) (( Object_t* (*) (List_1_t668 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11056_gshared (List_1_t668 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11056(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t668 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11056_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11058_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11058(__this, method) (( Object_t * (*) (List_1_t668 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11058_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11060_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11060(__this, ___item, method) (( int32_t (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11060_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11062_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11062(__this, ___item, method) (( bool (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11062_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11064_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11064(__this, ___item, method) (( int32_t (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11064_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11066_gshared (List_1_t668 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11066(__this, ___index, ___item, method) (( void (*) (List_1_t668 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11066_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11068_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11068(__this, ___item, method) (( void (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11068_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11070_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11070(__this, method) (( bool (*) (List_1_t668 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11072_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11072(__this, method) (( bool (*) (List_1_t668 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11072_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11074_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11074(__this, method) (( Object_t * (*) (List_1_t668 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11076_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11076(__this, method) (( bool (*) (List_1_t668 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11078_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11078(__this, method) (( bool (*) (List_1_t668 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11078_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11080_gshared (List_1_t668 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11080(__this, ___index, method) (( Object_t * (*) (List_1_t668 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11080_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11082_gshared (List_1_t668 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11082(__this, ___index, ___value, method) (( void (*) (List_1_t668 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11082_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11084_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11084(__this, ___item, method) (( void (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_Add_m11084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11086_gshared (List_1_t668 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11086(__this, ___newCount, method) (( void (*) (List_1_t668 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11086_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11088_gshared (List_1_t668 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11088(__this, ___collection, method) (( void (*) (List_1_t668 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11088_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11090_gshared (List_1_t668 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11090(__this, ___enumerable, method) (( void (*) (List_1_t668 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11090_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11092_gshared (List_1_t668 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11092(__this, ___collection, method) (( void (*) (List_1_t668 *, Object_t*, const MethodInfo*))List_1_AddRange_m11092_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1802 * List_1_AsReadOnly_m11094_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11094(__this, method) (( ReadOnlyCollection_1_t1802 * (*) (List_1_t668 *, const MethodInfo*))List_1_AsReadOnly_m11094_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11096_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_Clear_m11096(__this, method) (( void (*) (List_1_t668 *, const MethodInfo*))List_1_Clear_m11096_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11098_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11098(__this, ___item, method) (( bool (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_Contains_m11098_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11100_gshared (List_1_t668 * __this, ObjectU5BU5D_t125* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11100(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t668 *, ObjectU5BU5D_t125*, int32_t, const MethodInfo*))List_1_CopyTo_m11100_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11102_gshared (List_1_t668 * __this, Predicate_1_t1840 * ___match, const MethodInfo* method);
#define List_1_Find_m11102(__this, ___match, method) (( Object_t * (*) (List_1_t668 *, Predicate_1_t1840 *, const MethodInfo*))List_1_Find_m11102_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11104_gshared (Object_t * __this /* static, unused */, Predicate_1_t1840 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11104(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1840 *, const MethodInfo*))List_1_CheckMatch_m11104_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11106_gshared (List_1_t668 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1840 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11106(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t668 *, int32_t, int32_t, Predicate_1_t1840 *, const MethodInfo*))List_1_GetIndex_m11106_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1837  List_1_GetEnumerator_m11108_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11108(__this, method) (( Enumerator_t1837  (*) (List_1_t668 *, const MethodInfo*))List_1_GetEnumerator_m11108_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11110_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11110(__this, ___item, method) (( int32_t (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11112_gshared (List_1_t668 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11112(__this, ___start, ___delta, method) (( void (*) (List_1_t668 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11112_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11114_gshared (List_1_t668 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11114(__this, ___index, method) (( void (*) (List_1_t668 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11114_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11116_gshared (List_1_t668 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11116(__this, ___index, ___item, method) (( void (*) (List_1_t668 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11116_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11118_gshared (List_1_t668 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11118(__this, ___collection, method) (( void (*) (List_1_t668 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11118_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11120_gshared (List_1_t668 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11120(__this, ___item, method) (( bool (*) (List_1_t668 *, Object_t *, const MethodInfo*))List_1_Remove_m11120_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11122_gshared (List_1_t668 * __this, Predicate_1_t1840 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11122(__this, ___match, method) (( int32_t (*) (List_1_t668 *, Predicate_1_t1840 *, const MethodInfo*))List_1_RemoveAll_m11122_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11124_gshared (List_1_t668 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11124(__this, ___index, method) (( void (*) (List_1_t668 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11124_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11126_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_Reverse_m11126(__this, method) (( void (*) (List_1_t668 *, const MethodInfo*))List_1_Reverse_m11126_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11128_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_Sort_m11128(__this, method) (( void (*) (List_1_t668 *, const MethodInfo*))List_1_Sort_m11128_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11130_gshared (List_1_t668 * __this, Comparison_1_t1845 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11130(__this, ___comparison, method) (( void (*) (List_1_t668 *, Comparison_1_t1845 *, const MethodInfo*))List_1_Sort_m11130_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t125* List_1_ToArray_m11131_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_ToArray_m11131(__this, method) (( ObjectU5BU5D_t125* (*) (List_1_t668 *, const MethodInfo*))List_1_ToArray_m11131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11133_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11133(__this, method) (( void (*) (List_1_t668 *, const MethodInfo*))List_1_TrimExcess_m11133_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11135_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11135(__this, method) (( int32_t (*) (List_1_t668 *, const MethodInfo*))List_1_get_Capacity_m11135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11137_gshared (List_1_t668 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11137(__this, ___value, method) (( void (*) (List_1_t668 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11137_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11139_gshared (List_1_t668 * __this, const MethodInfo* method);
#define List_1_get_Count_m11139(__this, method) (( int32_t (*) (List_1_t668 *, const MethodInfo*))List_1_get_Count_m11139_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11141_gshared (List_1_t668 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11141(__this, ___index, method) (( Object_t * (*) (List_1_t668 *, int32_t, const MethodInfo*))List_1_get_Item_m11141_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11143_gshared (List_1_t668 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11143(__this, ___index, ___value, method) (( void (*) (List_1_t668 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11143_gshared)(__this, ___index, ___value, method)
