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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14599_gshared (Enumerator_t2110 * __this, Dictionary_2_t2104 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14599(__this, ___dictionary, method) (( void (*) (Enumerator_t2110 *, Dictionary_2_t2104 *, const MethodInfo*))Enumerator__ctor_m14599_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14600_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14600(__this, method) (( Object_t * (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14600_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14601_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14601(__this, method) (( void (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14601_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t862  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14602_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14602(__this, method) (( DictionaryEntry_t862  (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14602_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14603_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14603(__this, method) (( Object_t * (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14604_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14604(__this, method) (( Object_t * (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14605_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14605(__this, method) (( bool (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_MoveNext_m14605_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2106  Enumerator_get_Current_m14606_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14606(__this, method) (( KeyValuePair_2_t2106  (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_get_Current_m14606_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m14607_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14607(__this, method) (( int32_t (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_get_CurrentKey_m14607_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14608_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14608(__this, method) (( Object_t * (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_get_CurrentValue_m14608_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m14609_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14609(__this, method) (( void (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_Reset_m14609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14610_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14610(__this, method) (( void (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_VerifyState_m14610_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14611_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14611(__this, method) (( void (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_VerifyCurrent_m14611_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14612_gshared (Enumerator_t2110 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14612(__this, method) (( void (*) (Enumerator_t2110 *, const MethodInfo*))Enumerator_Dispose_m14612_gshared)(__this, method)
