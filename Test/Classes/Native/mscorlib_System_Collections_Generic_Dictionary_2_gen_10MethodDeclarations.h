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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1990;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1812;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t399;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2419;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2420;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1994;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13129_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13129(__this, method) (( void (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2__ctor_m13129_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13131_gshared (Dictionary_2_t1990 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13131(__this, ___comparer, method) (( void (*) (Dictionary_2_t1990 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13131_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13132_gshared (Dictionary_2_t1990 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13132(__this, ___capacity, method) (( void (*) (Dictionary_2_t1990 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13132_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13134_gshared (Dictionary_2_t1990 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13134(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1990 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2__ctor_m13134_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13136_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13136(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13138_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13138(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1990 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13138_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13140_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13140(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1990 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13140_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13142_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13142(__this, ___key, method) (( bool (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13142_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13144_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13144(__this, ___key, method) (( void (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13144_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13146_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13146(__this, method) (( bool (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13146_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13148_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13148(__this, method) (( Object_t * (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13150_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13150(__this, method) (( bool (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13152_gshared (Dictionary_2_t1990 * __this, KeyValuePair_2_t1992  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13152(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1990 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13152_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13154_gshared (Dictionary_2_t1990 * __this, KeyValuePair_2_t1992  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13154(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1990 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13154_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13156_gshared (Dictionary_2_t1990 * __this, KeyValuePair_2U5BU5D_t2419* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13156(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1990 *, KeyValuePair_2U5BU5D_t2419*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13156_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13158_gshared (Dictionary_2_t1990 * __this, KeyValuePair_2_t1992  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13158(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1990 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13158_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13160_gshared (Dictionary_2_t1990 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13160(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1990 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13160_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13162_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13162(__this, method) (( Object_t * (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13162_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13164_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13164(__this, method) (( Object_t* (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13164_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13166_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13166(__this, method) (( Object_t * (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13166_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13168_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13168(__this, method) (( int32_t (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_get_Count_m13168_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13170_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13170(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13170_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13172_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13172(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1990 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13172_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13174_gshared (Dictionary_2_t1990 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13174(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1990 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13174_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13176_gshared (Dictionary_2_t1990 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13176(__this, ___size, method) (( void (*) (Dictionary_2_t1990 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13176_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13178_gshared (Dictionary_2_t1990 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13178(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1990 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13178_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1992  Dictionary_2_make_pair_m13180_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13180(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1992  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13180_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13182_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13182(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13182_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13184_gshared (Dictionary_2_t1990 * __this, KeyValuePair_2U5BU5D_t2419* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13184(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1990 *, KeyValuePair_2U5BU5D_t2419*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13184_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13186_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13186(__this, method) (( void (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_Resize_m13186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13188_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13188(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1990 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13188_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13190_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13190(__this, method) (( void (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_Clear_m13190_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13192_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13192(__this, ___key, method) (( bool (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13192_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13194_gshared (Dictionary_2_t1990 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13194(__this, ___value, method) (( bool (*) (Dictionary_2_t1990 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13194_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13196_gshared (Dictionary_2_t1990 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13196(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1990 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2_GetObjectData_m13196_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13198_gshared (Dictionary_2_t1990 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13198(__this, ___sender, method) (( void (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13198_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13200_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13200(__this, ___key, method) (( bool (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13200_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13202_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13202(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1990 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13202_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1994 * Dictionary_2_get_Values_m13204_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13204(__this, method) (( ValueCollection_t1994 * (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_get_Values_m13204_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13206_gshared (Dictionary_2_t1990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13206(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13206_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13208_gshared (Dictionary_2_t1990 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13208(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1990 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13208_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13210_gshared (Dictionary_2_t1990 * __this, KeyValuePair_2_t1992  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13210(__this, ___pair, method) (( bool (*) (Dictionary_2_t1990 *, KeyValuePair_2_t1992 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13210_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1996  Dictionary_2_GetEnumerator_m13212_gshared (Dictionary_2_t1990 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13212(__this, method) (( Enumerator_t1996  (*) (Dictionary_2_t1990 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13212_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t862  Dictionary_2_U3CCopyToU3Em__0_m13214_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13214(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t862  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13214_gshared)(__this /* static, unused */, ___key, ___value, method)
