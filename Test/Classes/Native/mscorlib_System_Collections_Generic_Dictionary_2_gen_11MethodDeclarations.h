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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2104;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2103;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t399;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t102;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2429;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14482_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14482(__this, method) (( void (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2__ctor_m14482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14484_gshared (Dictionary_2_t2104 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14484(__this, ___comparer, method) (( void (*) (Dictionary_2_t2104 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14484_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14486_gshared (Dictionary_2_t2104 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14486(__this, ___capacity, method) (( void (*) (Dictionary_2_t2104 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14486_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14488_gshared (Dictionary_2_t2104 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14488(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2104 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2__ctor_m14488_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14490_gshared (Dictionary_2_t2104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14490(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14490_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14492_gshared (Dictionary_2_t2104 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14492(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2104 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14492_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14494_gshared (Dictionary_2_t2104 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14494(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2104 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14494_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14496_gshared (Dictionary_2_t2104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14496(__this, ___key, method) (( bool (*) (Dictionary_2_t2104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14496_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14498_gshared (Dictionary_2_t2104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14498(__this, ___key, method) (( void (*) (Dictionary_2_t2104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14498_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14500_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14500(__this, method) (( bool (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14500_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14502_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14502(__this, method) (( Object_t * (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14504_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14504(__this, method) (( bool (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14504_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14506_gshared (Dictionary_2_t2104 * __this, KeyValuePair_2_t2106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14506(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2104 *, KeyValuePair_2_t2106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14506_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14508_gshared (Dictionary_2_t2104 * __this, KeyValuePair_2_t2106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14508(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2104 *, KeyValuePair_2_t2106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14508_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14510_gshared (Dictionary_2_t2104 * __this, KeyValuePair_2U5BU5D_t2428* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14510(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2104 *, KeyValuePair_2U5BU5D_t2428*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14510_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14512_gshared (Dictionary_2_t2104 * __this, KeyValuePair_2_t2106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14512(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2104 *, KeyValuePair_2_t2106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14512_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14514_gshared (Dictionary_2_t2104 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14514(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2104 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14514_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14516_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14516(__this, method) (( Object_t * (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14516_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14518_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14518(__this, method) (( Object_t* (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14518_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14520_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14520(__this, method) (( Object_t * (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14520_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14522_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14522(__this, method) (( int32_t (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_get_Count_m14522_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14524_gshared (Dictionary_2_t2104 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14524(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2104 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m14524_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14526_gshared (Dictionary_2_t2104 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14526(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2104 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14526_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14528_gshared (Dictionary_2_t2104 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14528(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2104 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14528_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14530_gshared (Dictionary_2_t2104 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14530(__this, ___size, method) (( void (*) (Dictionary_2_t2104 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14530_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14532_gshared (Dictionary_2_t2104 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14532(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2104 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14532_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2106  Dictionary_2_make_pair_m14534_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14534(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2106  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14534_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14536_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14536(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14536_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14538_gshared (Dictionary_2_t2104 * __this, KeyValuePair_2U5BU5D_t2428* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14538(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2104 *, KeyValuePair_2U5BU5D_t2428*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14538_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14540_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14540(__this, method) (( void (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_Resize_m14540_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14542_gshared (Dictionary_2_t2104 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14542(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2104 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m14542_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14544_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14544(__this, method) (( void (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_Clear_m14544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14546_gshared (Dictionary_2_t2104 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14546(__this, ___key, method) (( bool (*) (Dictionary_2_t2104 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m14546_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14548_gshared (Dictionary_2_t2104 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14548(__this, ___value, method) (( bool (*) (Dictionary_2_t2104 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14548_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14550_gshared (Dictionary_2_t2104 * __this, SerializationInfo_t399 * ___info, StreamingContext_t400  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14550(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2104 *, SerializationInfo_t399 *, StreamingContext_t400 , const MethodInfo*))Dictionary_2_GetObjectData_m14550_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14552_gshared (Dictionary_2_t2104 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14552(__this, ___sender, method) (( void (*) (Dictionary_2_t2104 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14552_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14554_gshared (Dictionary_2_t2104 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14554(__this, ___key, method) (( bool (*) (Dictionary_2_t2104 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m14554_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14556_gshared (Dictionary_2_t2104 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14556(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2104 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14556_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2108 * Dictionary_2_get_Values_m14557_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14557(__this, method) (( ValueCollection_t2108 * (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_get_Values_m14557_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m14559_gshared (Dictionary_2_t2104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14559(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2104 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14559_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14561_gshared (Dictionary_2_t2104 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14561(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2104 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14561_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14563_gshared (Dictionary_2_t2104 * __this, KeyValuePair_2_t2106  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14563(__this, ___pair, method) (( bool (*) (Dictionary_2_t2104 *, KeyValuePair_2_t2106 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14563_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2110  Dictionary_2_GetEnumerator_m14564_gshared (Dictionary_2_t2104 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14564(__this, method) (( Enumerator_t2110  (*) (Dictionary_2_t2104 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14564_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t862  Dictionary_2_U3CCopyToU3Em__0_m14566_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14566(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t862  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14566_gshared)(__this /* static, unused */, ___key, ___value, method)
