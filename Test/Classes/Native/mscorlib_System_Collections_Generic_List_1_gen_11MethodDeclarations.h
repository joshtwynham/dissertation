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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t281;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2413;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2414;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2415;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t1971;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t392;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t1975;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t1978;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m12834_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1__ctor_m12834(__this, method) (( void (*) (List_1_t281 *, const MethodInfo*))List_1__ctor_m12834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12835_gshared (List_1_t281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m12835(__this, ___collection, method) (( void (*) (List_1_t281 *, Object_t*, const MethodInfo*))List_1__ctor_m12835_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1838_gshared (List_1_t281 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1838(__this, ___capacity, method) (( void (*) (List_1_t281 *, int32_t, const MethodInfo*))List_1__ctor_m1838_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m12836_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12836(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12836_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12837_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12837(__this, method) (( Object_t* (*) (List_1_t281 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12837_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12838_gshared (List_1_t281 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12838(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t281 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12838_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12839_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12839(__this, method) (( Object_t * (*) (List_1_t281 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12839_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12840_gshared (List_1_t281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12840(__this, ___item, method) (( int32_t (*) (List_1_t281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12840_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12841_gshared (List_1_t281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12841(__this, ___item, method) (( bool (*) (List_1_t281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12841_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12842_gshared (List_1_t281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12842(__this, ___item, method) (( int32_t (*) (List_1_t281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12842_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12843_gshared (List_1_t281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12843(__this, ___index, ___item, method) (( void (*) (List_1_t281 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12843_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12844_gshared (List_1_t281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12844(__this, ___item, method) (( void (*) (List_1_t281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12844_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12845_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12845(__this, method) (( bool (*) (List_1_t281 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12845_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12846_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12846(__this, method) (( bool (*) (List_1_t281 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12846_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12847_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12847(__this, method) (( Object_t * (*) (List_1_t281 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12848_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12848(__this, method) (( bool (*) (List_1_t281 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12848_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12849_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12849(__this, method) (( bool (*) (List_1_t281 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12849_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12850_gshared (List_1_t281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12850(__this, ___index, method) (( Object_t * (*) (List_1_t281 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12850_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12851_gshared (List_1_t281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12851(__this, ___index, ___value, method) (( void (*) (List_1_t281 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12851_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m12852_gshared (List_1_t281 * __this, UICharInfo_t276  ___item, const MethodInfo* method);
#define List_1_Add_m12852(__this, ___item, method) (( void (*) (List_1_t281 *, UICharInfo_t276 , const MethodInfo*))List_1_Add_m12852_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12853_gshared (List_1_t281 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12853(__this, ___newCount, method) (( void (*) (List_1_t281 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12853_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12854_gshared (List_1_t281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12854(__this, ___collection, method) (( void (*) (List_1_t281 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12854_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12855_gshared (List_1_t281 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12855(__this, ___enumerable, method) (( void (*) (List_1_t281 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12855_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12856_gshared (List_1_t281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12856(__this, ___collection, method) (( void (*) (List_1_t281 *, Object_t*, const MethodInfo*))List_1_AddRange_m12856_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1971 * List_1_AsReadOnly_m12857_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12857(__this, method) (( ReadOnlyCollection_1_t1971 * (*) (List_1_t281 *, const MethodInfo*))List_1_AsReadOnly_m12857_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m12858_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_Clear_m12858(__this, method) (( void (*) (List_1_t281 *, const MethodInfo*))List_1_Clear_m12858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m12859_gshared (List_1_t281 * __this, UICharInfo_t276  ___item, const MethodInfo* method);
#define List_1_Contains_m12859(__this, ___item, method) (( bool (*) (List_1_t281 *, UICharInfo_t276 , const MethodInfo*))List_1_Contains_m12859_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12860_gshared (List_1_t281 * __this, UICharInfoU5BU5D_t392* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12860(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t281 *, UICharInfoU5BU5D_t392*, int32_t, const MethodInfo*))List_1_CopyTo_m12860_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t276  List_1_Find_m12861_gshared (List_1_t281 * __this, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_Find_m12861(__this, ___match, method) (( UICharInfo_t276  (*) (List_1_t281 *, Predicate_1_t1975 *, const MethodInfo*))List_1_Find_m12861_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12862_gshared (Object_t * __this /* static, unused */, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12862(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1975 *, const MethodInfo*))List_1_CheckMatch_m12862_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12863_gshared (List_1_t281 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12863(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t281 *, int32_t, int32_t, Predicate_1_t1975 *, const MethodInfo*))List_1_GetIndex_m12863_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t1970  List_1_GetEnumerator_m12864_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12864(__this, method) (( Enumerator_t1970  (*) (List_1_t281 *, const MethodInfo*))List_1_GetEnumerator_m12864_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12865_gshared (List_1_t281 * __this, UICharInfo_t276  ___item, const MethodInfo* method);
#define List_1_IndexOf_m12865(__this, ___item, method) (( int32_t (*) (List_1_t281 *, UICharInfo_t276 , const MethodInfo*))List_1_IndexOf_m12865_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12866_gshared (List_1_t281 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12866(__this, ___start, ___delta, method) (( void (*) (List_1_t281 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12866_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12867_gshared (List_1_t281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12867(__this, ___index, method) (( void (*) (List_1_t281 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12867_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12868_gshared (List_1_t281 * __this, int32_t ___index, UICharInfo_t276  ___item, const MethodInfo* method);
#define List_1_Insert_m12868(__this, ___index, ___item, method) (( void (*) (List_1_t281 *, int32_t, UICharInfo_t276 , const MethodInfo*))List_1_Insert_m12868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12869_gshared (List_1_t281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12869(__this, ___collection, method) (( void (*) (List_1_t281 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12869_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m12870_gshared (List_1_t281 * __this, UICharInfo_t276  ___item, const MethodInfo* method);
#define List_1_Remove_m12870(__this, ___item, method) (( bool (*) (List_1_t281 *, UICharInfo_t276 , const MethodInfo*))List_1_Remove_m12870_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12871_gshared (List_1_t281 * __this, Predicate_1_t1975 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12871(__this, ___match, method) (( int32_t (*) (List_1_t281 *, Predicate_1_t1975 *, const MethodInfo*))List_1_RemoveAll_m12871_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12872_gshared (List_1_t281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12872(__this, ___index, method) (( void (*) (List_1_t281 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12872_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m12873_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_Reverse_m12873(__this, method) (( void (*) (List_1_t281 *, const MethodInfo*))List_1_Reverse_m12873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m12874_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_Sort_m12874(__this, method) (( void (*) (List_1_t281 *, const MethodInfo*))List_1_Sort_m12874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12875_gshared (List_1_t281 * __this, Comparison_1_t1978 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12875(__this, ___comparison, method) (( void (*) (List_1_t281 *, Comparison_1_t1978 *, const MethodInfo*))List_1_Sort_m12875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t392* List_1_ToArray_m12876_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_ToArray_m12876(__this, method) (( UICharInfoU5BU5D_t392* (*) (List_1_t281 *, const MethodInfo*))List_1_ToArray_m12876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m12877_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12877(__this, method) (( void (*) (List_1_t281 *, const MethodInfo*))List_1_TrimExcess_m12877_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12878_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12878(__this, method) (( int32_t (*) (List_1_t281 *, const MethodInfo*))List_1_get_Capacity_m12878_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12879_gshared (List_1_t281 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12879(__this, ___value, method) (( void (*) (List_1_t281 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12879_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m12880_gshared (List_1_t281 * __this, const MethodInfo* method);
#define List_1_get_Count_m12880(__this, method) (( int32_t (*) (List_1_t281 *, const MethodInfo*))List_1_get_Count_m12880_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t276  List_1_get_Item_m12881_gshared (List_1_t281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12881(__this, ___index, method) (( UICharInfo_t276  (*) (List_1_t281 *, int32_t, const MethodInfo*))List_1_get_Item_m12881_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12882_gshared (List_1_t281 * __this, int32_t ___index, UICharInfo_t276  ___value, const MethodInfo* method);
#define List_1_set_Item_m12882(__this, ___index, ___value, method) (( void (*) (List_1_t281 *, int32_t, UICharInfo_t276 , const MethodInfo*))List_1_set_Item_m12882_gshared)(__this, ___index, ___value, method)
