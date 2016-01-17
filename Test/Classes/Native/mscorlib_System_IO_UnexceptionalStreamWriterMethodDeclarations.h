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

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1258;
// System.IO.Stream
struct Stream_t1001;
// System.Text.Encoding
struct Encoding_t893;
// System.Char[]
struct CharU5BU5D_t424;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m7777 (UnexceptionalStreamWriter_t1258 * __this, Stream_t1001 * ___stream, Encoding_t893 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m7778 (UnexceptionalStreamWriter_t1258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m7779 (UnexceptionalStreamWriter_t1258 * __this, CharU5BU5D_t424* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m7780 (UnexceptionalStreamWriter_t1258 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m7781 (UnexceptionalStreamWriter_t1258 * __this, CharU5BU5D_t424* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m7782 (UnexceptionalStreamWriter_t1258 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
