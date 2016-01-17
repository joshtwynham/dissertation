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

// UnityEngine.AsyncOperation
struct AsyncOperation_t143;
struct AsyncOperation_t143_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m1043 (AsyncOperation_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m1044 (AsyncOperation_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m1045 (AsyncOperation_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t143_marshal(const AsyncOperation_t143& unmarshaled, AsyncOperation_t143_marshaled& marshaled);
extern "C" void AsyncOperation_t143_marshal_back(const AsyncOperation_t143_marshaled& marshaled, AsyncOperation_t143& unmarshaled);
extern "C" void AsyncOperation_t143_marshal_cleanup(AsyncOperation_t143_marshaled& marshaled);
