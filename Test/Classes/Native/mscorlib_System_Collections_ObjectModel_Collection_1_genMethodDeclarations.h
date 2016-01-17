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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1839;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t125;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2220;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1838;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11181_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11181(__this, method) (( void (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1__ctor_m11181_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11182_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11182(__this, method) (( bool (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11182_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11183_gshared (Collection_1_t1839 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11183(__this, ___array, ___index, method) (( void (*) (Collection_1_t1839 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11183_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11184_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11184(__this, method) (( Object_t * (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11184_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11185_gshared (Collection_1_t1839 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11185(__this, ___value, method) (( int32_t (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11185_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11186_gshared (Collection_1_t1839 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11186(__this, ___value, method) (( bool (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11186_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11187_gshared (Collection_1_t1839 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11187(__this, ___value, method) (( int32_t (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11187_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11188_gshared (Collection_1_t1839 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11188(__this, ___index, ___value, method) (( void (*) (Collection_1_t1839 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11188_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11189_gshared (Collection_1_t1839 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11189(__this, ___value, method) (( void (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11189_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11190_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11190(__this, method) (( bool (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11190_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11191_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11191(__this, method) (( Object_t * (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11191_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11192_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11192(__this, method) (( bool (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11192_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11193_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11193(__this, method) (( bool (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11193_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11194_gshared (Collection_1_t1839 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11194(__this, ___index, method) (( Object_t * (*) (Collection_1_t1839 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11194_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11195_gshared (Collection_1_t1839 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11195(__this, ___index, ___value, method) (( void (*) (Collection_1_t1839 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11195_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11196_gshared (Collection_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11196(__this, ___item, method) (( void (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_Add_m11196_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11197_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11197(__this, method) (( void (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_Clear_m11197_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11198_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11198(__this, method) (( void (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_ClearItems_m11198_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11199_gshared (Collection_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11199(__this, ___item, method) (( bool (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11199_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11200_gshared (Collection_1_t1839 * __this, ObjectU5BU5D_t125* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11200(__this, ___array, ___index, method) (( void (*) (Collection_1_t1839 *, ObjectU5BU5D_t125*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11200_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11201_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11201(__this, method) (( Object_t* (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_GetEnumerator_m11201_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11202_gshared (Collection_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11202(__this, ___item, method) (( int32_t (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11202_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11203_gshared (Collection_1_t1839 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11203(__this, ___index, ___item, method) (( void (*) (Collection_1_t1839 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11203_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11204_gshared (Collection_1_t1839 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11204(__this, ___index, ___item, method) (( void (*) (Collection_1_t1839 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11204_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11205_gshared (Collection_1_t1839 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11205(__this, ___item, method) (( bool (*) (Collection_1_t1839 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11205_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11206_gshared (Collection_1_t1839 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11206(__this, ___index, method) (( void (*) (Collection_1_t1839 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11206_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11207_gshared (Collection_1_t1839 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11207(__this, ___index, method) (( void (*) (Collection_1_t1839 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11207_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11208_gshared (Collection_1_t1839 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11208(__this, method) (( int32_t (*) (Collection_1_t1839 *, const MethodInfo*))Collection_1_get_Count_m11208_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11209_gshared (Collection_1_t1839 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11209(__this, ___index, method) (( Object_t * (*) (Collection_1_t1839 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11209_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11210_gshared (Collection_1_t1839 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11210(__this, ___index, ___value, method) (( void (*) (Collection_1_t1839 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11210_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11211_gshared (Collection_1_t1839 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11211(__this, ___index, ___item, method) (( void (*) (Collection_1_t1839 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11211_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11212_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11212(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11212_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11213_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11213(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11213_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11214_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11214(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11214_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11215_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11215(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11215_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11216_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11216(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11216_gshared)(__this /* static, unused */, ___list, method)
