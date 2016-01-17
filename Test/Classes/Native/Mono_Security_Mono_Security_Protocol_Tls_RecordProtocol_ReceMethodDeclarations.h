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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t999;
// System.AsyncCallback
struct AsyncCallback_t181;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t751;
// System.IO.Stream
struct Stream_t1001;
// System.Exception
struct Exception_t113;
// System.Threading.WaitHandle
struct WaitHandle_t1047;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m5149 (ReceiveRecordAsyncResult_t999 * __this, AsyncCallback_t181 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t751* ___initialBuffer, Stream_t1001 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1001 * ReceiveRecordAsyncResult_get_Record_m5150 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t751* ReceiveRecordAsyncResult_get_ResultingBuffer_m5151 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t751* ReceiveRecordAsyncResult_get_InitialBuffer_m5152 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m5153 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t113 * ReceiveRecordAsyncResult_get_AsyncException_m5154 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m5155 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1047 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m5156 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m5157 (ReceiveRecordAsyncResult_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5158 (ReceiveRecordAsyncResult_t999 * __this, Exception_t113 * ___ex, ByteU5BU5D_t751* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5159 (ReceiveRecordAsyncResult_t999 * __this, Exception_t113 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5160 (ReceiveRecordAsyncResult_t999 * __this, ByteU5BU5D_t751* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
