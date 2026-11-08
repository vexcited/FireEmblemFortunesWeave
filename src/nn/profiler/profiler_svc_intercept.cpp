#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/svc/svc_handle.hpp"

namespace nn::svc {

enum ArbitrationType : int32_t {};
enum SignalType : int32_t {};

}

namespace nn::profiler {

template <typename T>
struct SyncPrimitive {
  uintptr_t address;
};

// The release SDK builds every interception point empty.
void SleepThreadInterceptEnter(int64_t) {}
void SleepThreadInterceptExit(int64_t) {}
void SignalEventInterceptEnter(svc::Handle) {}
void SignalEventInterceptExit(Result, svc::Handle) {}
void ClearEventInterceptEnter(svc::Handle) {}
void ClearEventInterceptExit(Result, svc::Handle) {}
void CloseHandleInterceptEnter(svc::Handle) {}
void CloseHandleInterceptExit(Result, svc::Handle) {}
void ResetSignalInterceptEnter(svc::Handle) {}
void ResetSignalInterceptExit(Result, svc::Handle) {}
void WaitSynchronizationInterceptEnter(int*, const svc::Handle*, int,
  int64_t) {}
void WaitSynchronizationInterceptExit(Result, int*, const svc::Handle*, int,
  int64_t) {}
void ArbitrateLockInterceptEnter(svc::Handle, SyncPrimitive<svc::Handle>,
  uint32_t) {}
void ArbitrateLockInterceptExit(Result, svc::Handle,
  SyncPrimitive<svc::Handle>, uint32_t) {}
void ArbitrateUnlockInterceptEnter(SyncPrimitive<svc::Handle>) {}
void ArbitrateUnlockInterceptExit(Result, SyncPrimitive<svc::Handle>) {}
void WaitProcessWideKeyAtomicInterceptEnter(uintptr_t, uintptr_t, uint32_t,
  int64_t) {}
void WaitProcessWideKeyAtomicInterceptExit(Result, uintptr_t, uintptr_t,
  uint32_t, int64_t) {}
void SignalProcessWideKeyInterceptEnter(uintptr_t, int) {}
void SignalProcessWideKeyInterceptExit(uintptr_t, int) {}
void SendSyncRequestInterceptEnter(svc::Handle) {}
void SendSyncRequestInterceptExit(Result, svc::Handle) {}
void SendSyncRequestWithUserBufferInterceptEnter(uintptr_t, size_t,
  svc::Handle) {}
void SendSyncRequestWithUserBufferInterceptExit(Result, uintptr_t, size_t,
  svc::Handle) {}
void WaitForAddressInterceptEnter(uintptr_t, svc::ArbitrationType, int64_t,
  int64_t) {}
void WaitForAddressInterceptExit(Result, uintptr_t, svc::ArbitrationType,
  int64_t, int64_t) {}
void SignalToAddressInterceptEnter(uintptr_t, svc::SignalType, int, int) {}
void SignalToAddressInterceptExit(Result, uintptr_t, svc::SignalType, int,
  int) {}
void ReplyAndReceiveInterceptEnter(int*, const svc::Handle*, int, svc::Handle,
  int64_t) {}
void ReplyAndReceiveInterceptExit(Result, int*, const svc::Handle*, int,
  svc::Handle, int64_t) {}
void ReplyAndReceiveWithUserBufferInterceptEnter(int*, uintptr_t, size_t,
  const svc::Handle*, int, svc::Handle, int64_t) {}
void ReplyAndReceiveWithUserBufferInterceptExit(Result, int*, uintptr_t,
  size_t, const svc::Handle*, int, svc::Handle, int64_t) {}

namespace svcIntercept {

void Enable() {}

}

}
