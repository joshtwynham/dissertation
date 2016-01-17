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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t282;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2416;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2417;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t665;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t1981;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t393;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t1985;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t1988;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m12984_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1__ctor_m12984(__this, method) (( void (*) (List_1_t282 *, const MethodInfo*))List_1__ctor_m12984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12985_gshared (List_1_t282 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m12985(__this, ___collection, method) (( void (*) (List_1_t282 *, Object_t*, const MethodInfo*))List_1__ctor_m12985_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1839_gshared (List_1_t282 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1839(__this, ___capacity, method) (( void (*) (List_1_t282 *, int32_t, const MethodInfo*))List_1__ctor_m1839_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m12986_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12986(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12986_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12987_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12987(__this, method) (( Object_t* (*) (List_1_t282 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12988_gshared (List_1_t282 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12988(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t282 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12988_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12989_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12989(__this, method) (( Object_t * (*) (List_1_t282 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12989_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12990_gshared (List_1_t282 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12990(__this, ___item, method) (( int32_t (*) (List_1_t282 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12990_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12991_gshared (List_1_t282 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12991(__this, ___item, method) (( bool (*) (List_1_t282 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12991_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12992_gshared (List_1_t282 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12992(__this, ___item, method) (( int32_t (*) (List_1_t282 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12992_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12993_gshared (List_1_t282 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12993(__this, ___index, ___item, method) (( void (*) (List_1_t282 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12993_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12994_gshared (List_1_t282 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12994(__this, ___item, method) (( void (*) (List_1_t282 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12994_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12995_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12995(__this, method) (( bool (*) (List_1_t282 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12995_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12996_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12996(__this, method) (( bool (*) (List_1_t282 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12996_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12997_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12997(__this, method) (( Object_t * (*) (List_1_t282 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12997_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12998_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12998(__this, method) (( bool (*) (List_1_t282 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12998_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12999_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12999(__this, method) (( bool (*) (List_1_t282 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12999_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13000_gshared (List_1_t282 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13000(__this, ___index, method) (( Object_t * (*) (List_1_t282 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13000_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13001_gshared (List_1_t282 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13001(__this, ___index, ___value, method) (( void (*) (List_1_t282 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13001_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m13002_gshared (List_1_t282 * __this, UILineInfo_t277  ___item, const MethodInfo* method);
#define List_1_Add_m13002(__this, ___item, method) (( void (*) (List_1_t282 *, UILineInfo_t277 , const MethodInfo*))List_1_Add_m13002_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13003_gshared (List_1_t282 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13003(__this, ___newCount, method) (( void (*) (List_1_t282 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13003_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13004_gshared (List_1_t282 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13004(__this, ___collection, method) (( void (*) (List_1_t282 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13004_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13005_gshared (List_1_t282 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13005(__this, ___enumerable, method) (( void (*) (List_1_t282 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13006_gshared (List_1_t282 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13006(__this, ___collection, method) (( void (*) (List_1_t282 *, Object_t*, const MethodInfo*))List_1_AddRange_m13006_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1981 * List_1_AsReadOnly_m13007_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13007(__this, method) (( ReadOnlyCollection_1_t1981 * (*) (List_1_t282 *, const MethodInfo*))List_1_AsReadOnly_m13007_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m13008_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_Clear_m13008(__this, method) (( void (*) (List_1_t282 *, const MethodInfo*))List_1_Clear_m13008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m13009_gshared (List_1_t282 * __this, UILineInfo_t277  ___item, const MethodInfo* method);
#define List_1_Contains_m13009(__this, ___item, method) (( bool (*) (List_1_t282 *, UILineInfo_t277 , const MethodInfo*))List_1_Contains_m13009_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13010_gshared (List_1_t282 * __this, UILineInfoU5BU5D_t393* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13010(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t282 *, UILineInfoU5BU5D_t393*, int32_t, const MethodInfo*))List_1_CopyTo_m13010_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t277  List_1_Find_m13011_gshared (List_1_t282 * __this, Predicate_1_t1985 * ___match, const MethodInfo* method);
#define List_1_Find_m13011(__this, ___match, method) (( UILineInfo_t277  (*) (List_1_t282 *, Predicate_1_t1985 *, const MethodInfo*))List_1_Find_m13011_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13012_gshared (Object_t * __this /* static, unused */, Predicate_1_t1985 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13012(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1985 *, const MethodInfo*))List_1_CheckMatch_m13012_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13013_gshared (List_1_t282 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1985 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13013(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t282 *, int32_t, int32_t, Predicate_1_t1985 *, const MethodInfo*))List_1_GetIndex_m13013_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t1980  List_1_GetEnumerator_m13014_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13014(__this, method) (( Enumerator_t1980  (*) (List_1_t282 *, const MethodInfo*))List_1_GetEnumerator_m13014_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13015_gshared (List_1_t282 * __this, UILineInfo_t277  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13015(__this, ___item, method) (( int32_t (*) (List_1_t282 *, UILineInfo_t277 , const MethodInfo*))List_1_IndexOf_m13015_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13016_gshared (List_1_t282 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13016(__this, ___start, ___delta, method) (( void (*) (List_1_t282 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13016_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13017_gshared (List_1_t282 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13017(__this, ___index, method) (( void (*) (List_1_t282 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13018_gshared (List_1_t282 * __this, int32_t ___index, UILineInfo_t277  ___item, const MethodInfo* method);
#define List_1_Insert_m13018(__this, ___index, ___item, method) (( void (*) (List_1_t282 *, int32_t, UILineInfo_t277 , const MethodInfo*))List_1_Insert_m13018_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13019_gshared (List_1_t282 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13019(__this, ___collection, method) (( void (*) (List_1_t282 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13019_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m13020_gshared (List_1_t282 * __this, UILineInfo_t277  ___item, const MethodInfo* method);
#define List_1_Remove_m13020(__this, ___item, method) (( bool (*) (List_1_t282 *, UILineInfo_t277 , const MethodInfo*))List_1_Remove_m13020_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13021_gshared (List_1_t282 * __this, Predicate_1_t1985 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13021(__this, ___match, method) (( int32_t (*) (List_1_t282 *, Predicate_1_t1985 *, const MethodInfo*))List_1_RemoveAll_m13021_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13022_gshared (List_1_t282 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13022(__this, ___index, method) (( void (*) (List_1_t282 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13022_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m13023_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_Reverse_m13023(__this, method) (( void (*) (List_1_t282 *, const MethodInfo*))List_1_Reverse_m13023_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m13024_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_Sort_m13024(__this, method) (( void (*) (List_1_t282 *, const MethodInfo*))List_1_Sort_m13024_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13025_gshared (List_1_t282 * __this, Comparison_1_t1988 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13025(__this, ___comparison, method) (( void (*) (List_1_t282 *, Comparison_1_t1988 *, const MethodInfo*))List_1_Sort_m13025_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t393* List_1_ToArray_m13026_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_ToArray_m13026(__this, method) (( UILineInfoU5BU5D_t393* (*) (List_1_t282 *, const MethodInfo*))List_1_ToArray_m13026_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m13027_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13027(__this, method) (( void (*) (List_1_t282 *, const MethodInfo*))List_1_TrimExcess_m13027_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13028_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13028(__this, method) (( int32_t (*) (List_1_t282 *, const MethodInfo*))List_1_get_Capacity_m13028_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13029_gshared (List_1_t282 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13029(__this, ___value, method) (( void (*) (List_1_t282 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13029_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m13030_gshared (List_1_t282 * __this, const MethodInfo* method);
#define List_1_get_Count_m13030(__this, method) (( int32_t (*) (List_1_t282 *, const MethodInfo*))List_1_get_Count_m13030_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t277  List_1_get_Item_m13031_gshared (List_1_t282 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13031(__this, ___index, method) (( UILineInfo_t277  (*) (List_1_t282 *, int32_t, const MethodInfo*))List_1_get_Item_m13031_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13032_gshared (List_1_t282 * __this, int32_t ___index, UILineInfo_t277  ___value, const MethodInfo* method);
#define List_1_set_Item_m13032(__this, ___index, ___value, method) (( void (*) (List_1_t282 *, int32_t, UILineInfo_t277 , const MethodInfo*))List_1_set_Item_m13032_gshared)(__this, ___index, ___value, method)
