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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1810;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1812;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t399;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2390;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2391;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1818;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10731_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10731(__this, method) (( void (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2__ctor_m10731_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10733_gshared (Dictionary_2_t1810 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10733(__this, ___comparer, method) (( void (*) (Dictionary_2_t1810 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10733_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10735_gshared (Dictionary_2_t1810 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10735(__this, ___capacity, method) (( void (*) (Dictionary_2_t1810 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10735_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10737_gshared (Dictionary_2_t1810 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10737(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1810 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2__ctor_m10737_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10739_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10739(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10739_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10741_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10741(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1810 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10741_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10743_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10743(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1810 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10743_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10745_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10745(__this, ___key, method) (( bool (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10745_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10747_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10747(__this, ___key, method) (( void (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10747_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10749_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10749(__this, method) (( bool (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10749_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10751_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10751(__this, method) (( Object_t * (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10751_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10753_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10753(__this, method) (( bool (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10755_gshared (Dictionary_2_t1810 * __this, KeyValuePair_2_t1813  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10755(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1810 *, KeyValuePair_2_t1813 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10755_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10757_gshared (Dictionary_2_t1810 * __this, KeyValuePair_2_t1813  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10757(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1810 *, KeyValuePair_2_t1813 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10757_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10759_gshared (Dictionary_2_t1810 * __this, KeyValuePair_2U5BU5D_t2390* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10759(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1810 *, KeyValuePair_2U5BU5D_t2390*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10759_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10761_gshared (Dictionary_2_t1810 * __this, KeyValuePair_2_t1813  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10761(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1810 *, KeyValuePair_2_t1813 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10761_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10763_gshared (Dictionary_2_t1810 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10763(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1810 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10763_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10765_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10765(__this, method) (( Object_t * (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10765_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10767_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10767(__this, method) (( Object_t* (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10767_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10769_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10769(__this, method) (( Object_t * (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10769_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10771_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10771(__this, method) (( int32_t (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_get_Count_m10771_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10773_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10773(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10773_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10775_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10775(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1810 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10775_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10777_gshared (Dictionary_2_t1810 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10777(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1810 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10777_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10779_gshared (Dictionary_2_t1810 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10779(__this, ___size, method) (( void (*) (Dictionary_2_t1810 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10779_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10781_gshared (Dictionary_2_t1810 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10781(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1810 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10781_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1813  Dictionary_2_make_pair_m10783_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10783(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1813  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10783_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10785_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10785(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10785_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10787_gshared (Dictionary_2_t1810 * __this, KeyValuePair_2U5BU5D_t2390* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10787(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1810 *, KeyValuePair_2U5BU5D_t2390*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10787_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10789_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10789(__this, method) (( void (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_Resize_m10789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10791_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10791(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1810 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m10791_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10793_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10793(__this, method) (( void (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_Clear_m10793_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10795_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10795(__this, ___key, method) (( bool (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10795_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10797_gshared (Dictionary_2_t1810 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10797(__this, ___value, method) (( bool (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10797_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10799_gshared (Dictionary_2_t1810 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10799(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1810 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2_GetObjectData_m10799_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10801_gshared (Dictionary_2_t1810 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10801(__this, ___sender, method) (( void (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10801_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10803_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10803(__this, ___key, method) (( bool (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10803_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10805_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10805(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1810 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10805_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1818 * Dictionary_2_get_Values_m10807_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10807(__this, method) (( ValueCollection_t1818 * (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_get_Values_m10807_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10809_gshared (Dictionary_2_t1810 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10809(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10809_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10811_gshared (Dictionary_2_t1810 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10811(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1810 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10811_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10813_gshared (Dictionary_2_t1810 * __this, KeyValuePair_2_t1813  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10813(__this, ___pair, method) (( bool (*) (Dictionary_2_t1810 *, KeyValuePair_2_t1813 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10813_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1820  Dictionary_2_GetEnumerator_m10815_gshared (Dictionary_2_t1810 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10815(__this, method) (( Enumerator_t1820  (*) (Dictionary_2_t1810 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10815_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t862  Dictionary_2_U3CCopyToU3Em__0_m10817_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10817(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t862  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10817_gshared)(__this /* static, unused */, ___key, ___value, method)
