#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t905;
// System.IO.TextReader
struct TextReader_t1172;
// System.Text.Encoding
struct Encoding_t893;

#include "mscorlib_System_Object.h"

// System.Console
struct  Console_t904  : public Object_t
{
};
struct Console_t904_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t905 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t905 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1172 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t893 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t893 * ___outputEncoding_4;
};
