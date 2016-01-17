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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t384;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2408;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2409;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2410;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1928;
// System.Int32[]
struct Int32U5BU5D_t385;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1934;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1938;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m12287_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1__ctor_m12287(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1__ctor_m12287_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12288_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m12288(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1__ctor_m12288_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12289_gshared (List_1_t384 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12289(__this, ___capacity, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1__ctor_m12289_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m12290_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12290(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12290_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12291_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12291(__this, method) (( Object_t* (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12291_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12292_gshared (List_1_t384 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12292(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t384 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12292_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12293_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12293(__this, method) (( Object_t * (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12293_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12294_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12294(__this, ___item, method) (( int32_t (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12294_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12295_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12295(__this, ___item, method) (( bool (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12295_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12296_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12296(__this, ___item, method) (( int32_t (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12297_gshared (List_1_t384 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12297(__this, ___index, ___item, method) (( void (*) (List_1_t384 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12297_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12298_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12298(__this, ___item, method) (( void (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12298_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12299_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12299(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12299_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12300_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12300(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12300_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12301_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12301(__this, method) (( Object_t * (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12302_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12302(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12302_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12303_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12303(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12303_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12304_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12304(__this, ___index, method) (( Object_t * (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12304_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12305_gshared (List_1_t384 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12305(__this, ___index, ___value, method) (( void (*) (List_1_t384 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12305_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m12306_gshared (List_1_t384 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m12306(__this, ___item, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_Add_m12306_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12307_gshared (List_1_t384 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12307(__this, ___newCount, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12307_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12308_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12308(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12308_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12309_gshared (List_1_t384 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12309(__this, ___enumerable, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12309_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3483_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3483(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_AddRange_m3483_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1928 * List_1_AsReadOnly_m12310_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12310(__this, method) (( ReadOnlyCollection_1_t1928 * (*) (List_1_t384 *, const MethodInfo*))List_1_AsReadOnly_m12310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m12311_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_Clear_m12311(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_Clear_m12311_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m12312_gshared (List_1_t384 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m12312(__this, ___item, method) (( bool (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_Contains_m12312_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12313_gshared (List_1_t384 * __this, Int32U5BU5D_t385* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12313(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t384 *, Int32U5BU5D_t385*, int32_t, const MethodInfo*))List_1_CopyTo_m12313_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m12314_gshared (List_1_t384 * __this, Predicate_1_t1934 * ___match, const MethodInfo* method);
#define List_1_Find_m12314(__this, ___match, method) (( int32_t (*) (List_1_t384 *, Predicate_1_t1934 *, const MethodInfo*))List_1_Find_m12314_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12315_gshared (Object_t * __this /* static, unused */, Predicate_1_t1934 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12315(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1934 *, const MethodInfo*))List_1_CheckMatch_m12315_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12316_gshared (List_1_t384 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1934 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12316(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t384 *, int32_t, int32_t, Predicate_1_t1934 *, const MethodInfo*))List_1_GetIndex_m12316_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1927  List_1_GetEnumerator_m12317_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12317(__this, method) (( Enumerator_t1927  (*) (List_1_t384 *, const MethodInfo*))List_1_GetEnumerator_m12317_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12318_gshared (List_1_t384 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m12318(__this, ___item, method) (( int32_t (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_IndexOf_m12318_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12319_gshared (List_1_t384 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12319(__this, ___start, ___delta, method) (( void (*) (List_1_t384 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12319_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12320_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12320(__this, ___index, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12320_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12321_gshared (List_1_t384 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m12321(__this, ___index, ___item, method) (( void (*) (List_1_t384 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m12321_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12322_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12322(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12322_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m12323_gshared (List_1_t384 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m12323(__this, ___item, method) (( bool (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_Remove_m12323_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12324_gshared (List_1_t384 * __this, Predicate_1_t1934 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12324(__this, ___match, method) (( int32_t (*) (List_1_t384 *, Predicate_1_t1934 *, const MethodInfo*))List_1_RemoveAll_m12324_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12325_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12325(__this, ___index, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12325_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m12326_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_Reverse_m12326(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_Reverse_m12326_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m12327_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_Sort_m12327(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_Sort_m12327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12328_gshared (List_1_t384 * __this, Comparison_1_t1938 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12328(__this, ___comparison, method) (( void (*) (List_1_t384 *, Comparison_1_t1938 *, const MethodInfo*))List_1_Sort_m12328_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t385* List_1_ToArray_m12329_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_ToArray_m12329(__this, method) (( Int32U5BU5D_t385* (*) (List_1_t384 *, const MethodInfo*))List_1_ToArray_m12329_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m12330_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12330(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_TrimExcess_m12330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12331_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12331(__this, method) (( int32_t (*) (List_1_t384 *, const MethodInfo*))List_1_get_Capacity_m12331_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12332_gshared (List_1_t384 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12332(__this, ___value, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12332_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m12333_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_get_Count_m12333(__this, method) (( int32_t (*) (List_1_t384 *, const MethodInfo*))List_1_get_Count_m12333_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m12334_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12334(__this, ___index, method) (( int32_t (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_get_Item_m12334_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12335_gshared (List_1_t384 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m12335(__this, ___index, ___value, method) (( void (*) (List_1_t384 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m12335_gshared)(__this, ___index, ___value, method)
