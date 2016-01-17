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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2264;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1812;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t399;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2454;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2455;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2269;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16719_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16719(__this, method) (( void (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2__ctor_m16719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16720_gshared (Dictionary_2_t2264 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16720(__this, ___comparer, method) (( void (*) (Dictionary_2_t2264 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16720_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16722_gshared (Dictionary_2_t2264 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16722(__this, ___capacity, method) (( void (*) (Dictionary_2_t2264 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16722_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16724_gshared (Dictionary_2_t2264 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16724(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2264 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2__ctor_m16724_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16726_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16726(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16726_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16728_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2264 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16728_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16730_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16730(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2264 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16730_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16732_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16732(__this, ___key, method) (( bool (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16732_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16734_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16734(__this, ___key, method) (( void (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16734_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16736_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16736(__this, method) (( bool (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16736_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16738_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16738(__this, method) (( Object_t * (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16738_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16740_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16740(__this, method) (( bool (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16740_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16742_gshared (Dictionary_2_t2264 * __this, KeyValuePair_2_t2266  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16742(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2264 *, KeyValuePair_2_t2266 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16742_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16744_gshared (Dictionary_2_t2264 * __this, KeyValuePair_2_t2266  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16744(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2264 *, KeyValuePair_2_t2266 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16744_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16746_gshared (Dictionary_2_t2264 * __this, KeyValuePair_2U5BU5D_t2454* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16746(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2264 *, KeyValuePair_2U5BU5D_t2454*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16746_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16748_gshared (Dictionary_2_t2264 * __this, KeyValuePair_2_t2266  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16748(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2264 *, KeyValuePair_2_t2266 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16748_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16750_gshared (Dictionary_2_t2264 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16750(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2264 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16750_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16752_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16752(__this, method) (( Object_t * (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16752_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16754_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16754(__this, method) (( Object_t* (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16754_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16756_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16756(__this, method) (( Object_t * (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16756_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16758_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16758(__this, method) (( int32_t (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_get_Count_m16758_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16760_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16760(__this, ___key, method) (( bool (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16760_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16762_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2264 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16764_gshared (Dictionary_2_t2264 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16764(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2264 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16764_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16766_gshared (Dictionary_2_t2264 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16766(__this, ___size, method) (( void (*) (Dictionary_2_t2264 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16766_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16768_gshared (Dictionary_2_t2264 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16768(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2264 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16768_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2266  Dictionary_2_make_pair_m16770_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16770(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2266  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16770_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16772_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16772(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16772_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16774_gshared (Dictionary_2_t2264 * __this, KeyValuePair_2U5BU5D_t2454* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16774(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2264 *, KeyValuePair_2U5BU5D_t2454*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16774_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16776_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16776(__this, method) (( void (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_Resize_m16776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16778_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16778(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2264 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16778_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16780_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16780(__this, method) (( void (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_Clear_m16780_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16782_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16782(__this, ___key, method) (( bool (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16782_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16784_gshared (Dictionary_2_t2264 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16784(__this, ___value, method) (( bool (*) (Dictionary_2_t2264 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16784_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16786_gshared (Dictionary_2_t2264 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16786(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2264 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2_GetObjectData_m16786_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16788_gshared (Dictionary_2_t2264 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16788(__this, ___sender, method) (( void (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16788_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16790_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16790(__this, ___key, method) (( bool (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16790_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16792_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16792(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2264 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16792_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2269 * Dictionary_2_get_Values_m16794_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16794(__this, method) (( ValueCollection_t2269 * (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_get_Values_m16794_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16796_gshared (Dictionary_2_t2264 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16796(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16796_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16798_gshared (Dictionary_2_t2264 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16798(__this, ___value, method) (( bool (*) (Dictionary_2_t2264 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16798_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16800_gshared (Dictionary_2_t2264 * __this, KeyValuePair_2_t2266  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16800(__this, ___pair, method) (( bool (*) (Dictionary_2_t2264 *, KeyValuePair_2_t2266 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16800_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2271  Dictionary_2_GetEnumerator_m16802_gshared (Dictionary_2_t2264 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16802(__this, method) (( Enumerator_t2271  (*) (Dictionary_2_t2264 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16802_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t862  Dictionary_2_U3CCopyToU3Em__0_m16804_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16804(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t862  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16804_gshared)(__this /* static, unused */, ___key, ___value, method)
