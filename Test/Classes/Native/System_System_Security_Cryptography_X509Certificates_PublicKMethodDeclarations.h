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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t737;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t750;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t739;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t738;
// System.Security.Cryptography.Oid
struct Oid_t740;
// System.Byte[]
struct ByteU5BU5D_t751;
// System.Security.Cryptography.DSA
struct DSA_t863;
// System.Security.Cryptography.RSA
struct RSA_t864;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m3708 (PublicKey_t737 * __this, X509Certificate_t750 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t739 * PublicKey_get_EncodedKeyValue_m3709 (PublicKey_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t739 * PublicKey_get_EncodedParameters_m3710 (PublicKey_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t738 * PublicKey_get_Key_m3711 (PublicKey_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t740 * PublicKey_get_Oid_m3712 (PublicKey_t737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t751* PublicKey_GetUnsignedBigInteger_m3713 (Object_t * __this /* static, unused */, ByteU5BU5D_t751* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t863 * PublicKey_DecodeDSA_m3714 (Object_t * __this /* static, unused */, ByteU5BU5D_t751* ___rawPublicKey, ByteU5BU5D_t751* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t864 * PublicKey_DecodeRSA_m3715 (Object_t * __this /* static, unused */, ByteU5BU5D_t751* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
