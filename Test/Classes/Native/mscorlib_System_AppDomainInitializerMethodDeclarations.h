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

// System.AppDomainInitializer
struct AppDomainInitializer_t1636;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t126;
// System.IAsyncResult
struct IAsyncResult_t180;
// System.AsyncCallback
struct AsyncCallback_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m10677 (AppDomainInitializer_t1636 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m10678 (AppDomainInitializer_t1636 * __this, StringU5BU5D_t126* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1636(Il2CppObject* delegate, StringU5BU5D_t126* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m10679 (AppDomainInitializer_t1636 * __this, StringU5BU5D_t126* ___args, AsyncCallback_t181 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m10680 (AppDomainInitializer_t1636 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
