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

// System.IFormatProvider
struct IFormatProvider_t1732;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t113;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"
#include "mscorlib_System_TypeCode.h"

// System.Boolean System.Int32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Int32_System_IConvertible_ToBoolean_m5574 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Int32_System_IConvertible_ToByte_m5575 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Int32_System_IConvertible_ToChar_m5576 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t329  Int32_System_IConvertible_ToDateTime_m5577 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1074  Int32_System_IConvertible_ToDecimal_m5578 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Int32_System_IConvertible_ToDouble_m5579 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Int32_System_IConvertible_ToInt16_m5580 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Int32_System_IConvertible_ToInt32_m5581 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Int32_System_IConvertible_ToInt64_m5582 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Int32_System_IConvertible_ToSByte_m5583 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Int32_System_IConvertible_ToSingle_m5584 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Int32_System_IConvertible_ToType_m5585 (int32_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Int32_System_IConvertible_ToUInt16_m5586 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Int32_System_IConvertible_ToUInt32_m5587 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Int32_System_IConvertible_ToUInt64_m5588 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Object)
extern "C" int32_t Int32_CompareTo_m5589 (int32_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Object)
extern "C" bool Int32_Equals_m5590 (int32_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::GetHashCode()
extern "C" int32_t Int32_GetHashCode_m1817 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Int32)
extern "C" int32_t Int32_CompareTo_m3249 (int32_t* __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Int32)
extern "C" bool Int32_Equals_m1819 (int32_t* __this, int32_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ProcessTrailingWhitespace(System.Boolean,System.String,System.Int32,System.Exception&)
extern "C" bool Int32_ProcessTrailingWhitespace_m5591 (Object_t * __this /* static, unused */, bool ___tryParse, String_t* ___s, int32_t ___position, Exception_t113 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Parse(System.String,System.Boolean,System.Int32&,System.Exception&)
extern "C" bool Int32_Parse_m5592 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int32_t* ___result, Exception_t113 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
extern "C" int32_t Int32_Parse_m5593 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::CheckStyle(System.Globalization.NumberStyles,System.Boolean,System.Exception&)
extern "C" bool Int32_CheckStyle_m5594 (Object_t * __this /* static, unused */, int32_t ___style, bool ___tryParse, Exception_t113 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::JumpOverWhite(System.Int32&,System.String,System.Boolean,System.Boolean,System.Exception&)
extern "C" bool Int32_JumpOverWhite_m5595 (Object_t * __this /* static, unused */, int32_t* ___pos, String_t* ___s, bool ___reportError, bool ___tryParse, Exception_t113 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindSign(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&,System.Boolean&)
extern "C" void Int32_FindSign_m5596 (Object_t * __this /* static, unused */, int32_t* ___pos, String_t* ___s, NumberFormatInfo_t1212 * ___nfi, bool* ___foundSign, bool* ___negative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindCurrency(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&)
extern "C" void Int32_FindCurrency_m5597 (Object_t * __this /* static, unused */, int32_t* ___pos, String_t* ___s, NumberFormatInfo_t1212 * ___nfi, bool* ___foundCurrency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::FindExponent(System.Int32&,System.String,System.Int32&,System.Boolean,System.Exception&)
extern "C" bool Int32_FindExponent_m5598 (Object_t * __this /* static, unused */, int32_t* ___pos, String_t* ___s, int32_t* ___exponent, bool ___tryParse, Exception_t113 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::FindOther(System.Int32&,System.String,System.String)
extern "C" bool Int32_FindOther_m5599 (Object_t * __this /* static, unused */, int32_t* ___pos, String_t* ___s, String_t* ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ValidDigit(System.Char,System.Boolean)
extern "C" bool Int32_ValidDigit_m5600 (Object_t * __this /* static, unused */, uint16_t ___e, bool ___allowHex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Int32::GetFormatException()
extern "C" Exception_t113 * Int32_GetFormatException_m5601 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Int32&,System.Exception&)
extern "C" bool Int32_Parse_m5602 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___fp, bool ___tryParse, int32_t* ___result, Exception_t113 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C" int32_t Int32_Parse_m4551 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int32_t Int32_Parse_m5603 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" bool Int32_TryParse_m5604 (Object_t * __this /* static, unused */, String_t* ___s, int32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
extern "C" bool Int32_TryParse_m4438 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, int32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C" String_t* Int32_ToString_m1872 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.IFormatProvider)
extern "C" String_t* Int32_ToString_m5520 (int32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C" String_t* Int32_ToString_m4546 (int32_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Int32_ToString_m5523 (int32_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Int32::GetTypeCode()
extern "C" int32_t Int32_GetTypeCode_m5605 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
