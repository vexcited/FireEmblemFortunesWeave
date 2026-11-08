#include "nn/diag/diag_abort.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/sf/hipc.hpp"

namespace nn::svc {

struct Handle {
  uint32_t value;
};

[[gnu::visibility("hidden")]] Result CloseHandle(Handle handle);
[[gnu::visibility("hidden")]] Result ConnectToPort(Handle* pOutHandle,
  Handle port);
[[gnu::visibility("hidden")]] Result SendAsyncRequestWithUserBuffer(
  Handle* pOutEvent, uintptr_t buffer, size_t size, Handle session);
[[gnu::visibility("hidden")]] Result WaitSynchronization(int32_t* pOutIndex,
  const Handle* handles, int32_t count, int64_t timeout);
[[gnu::visibility("hidden")]] Result CreatePort(Handle* pOutServer,
  Handle* pOutClient, int32_t maxSessions, bool isLight, uintptr_t name);
[[gnu::visibility("hidden")]] Result AcceptSession(Handle* pOutSession,
  Handle port);
[[gnu::visibility("hidden")]] Result CreateSession(Handle* pOutServer,
  Handle* pOutClient, bool isLight, uintptr_t name);
[[gnu::visibility("hidden")]] Result ReplyAndReceive(int32_t* pOutIndex,
  const Handle* handles, int32_t count, Handle replyTarget, int64_t timeout);
[[gnu::visibility("hidden")]] Result ReplyAndReceiveWithUserBuffer(
  int32_t* pOutIndex, uintptr_t buffer, size_t size, const Handle* handles,
  int32_t count, Handle replyTarget, int64_t timeout);

}

namespace nn::sf::hipc {

namespace {

constexpr uint32_t ResultSessionClosed = 0xf601;
constexpr uint32_t ResultTimedOut = 0xea01;
constexpr uint32_t ResultReceiveListBroken = 0x20401;
constexpr uint32_t ResultPortSessionsExhausted = 0xce01;
constexpr Result ResultCommunicationError = {0x25a0b};
constexpr Result ResultOutOfSessions = {0x1060b};

[[gnu::always_inline]] inline uint32_t GetDescription(Result result) {
  return result.value & 0x3fffff;
}

[[gnu::always_inline]] inline void* GetTlsMessageBuffer() {
  void* buffer;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(buffer));
  return buffer;
}

[[gnu::always_inline]] inline Result ReceiveImpl(svc::Handle session,
  void* buffer, size_t size) {
  int32_t index = 0;
  if (buffer == GetTlsMessageBuffer()) {
    return svc::ReplyAndReceive(&index, &session, 1, svc::Handle{0}, 0);
  }

  return svc::ReplyAndReceiveWithUserBuffer(&index,
    reinterpret_cast<uintptr_t>(buffer), size, &session, 1, svc::Handle{0},
    0);
}

}

[[gnu::visibility("hidden")]] extern PortProcessorState g_PortProcessorState;

PortProcessor* GetPortProcessor(svc::Handle handle);

enum ReceiveResult : uint8_t {
  ReceiveResult_Success = 1,
  ReceiveResult_Closed = 2,
  ReceiveResult_NeedsRetry = 3,
};

void CloseClientPortHandle(svc::Handle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(svc::CloseHandle(handle));
}

Result ConnectToPort(svc::Handle* pOutHandle, svc::Handle port, bool) {
  return svc::ConnectToPort(pOutHandle, port);
}

Result SendAsyncRequest(svc::Handle* pOutEvent, svc::Handle session,
  void* buffer, size_t size) {
  const Result result = svc::SendAsyncRequestWithUserBuffer(pOutEvent,
    reinterpret_cast<uintptr_t>(buffer), size, session);
  if (result.IsSuccess()) {
    return result;
  }

  if (GetDescription(result) == ResultSessionClosed) {
    return ResultCommunicationError;
  }

  return result;
}

Result WaitClientRequestHandle(svc::Handle event, void* buffer, size_t) {
  int32_t index = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(svc::WaitSynchronization(&index, &event, 1,
    -1));
  return *static_cast<uint64_t*>(buffer) == 0 ? ResultCommunicationError :
    Result{};
}

void CloseClientRequestHandle(svc::Handle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(svc::CloseHandle(handle));
}

Result CreatePort(svc::Handle* pOutServer, svc::Handle* pOutClient,
  int maxSessions) {
  return svc::CreatePort(pOutServer, pOutClient, maxSessions, false, 0);
}

void CloseServerPortHandle(svc::Handle handle) {
  PortProcessor* processor = GetPortProcessor(handle);
  if (processor != nullptr) {
    using Close = void (*)(PortProcessor*, svc::Handle);
    reinterpret_cast<Close>(processor->vtable[6])(processor, handle);
    return;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(svc::CloseHandle(handle));
}

void AttachWaitHolderForAccept(os::MultiWaitHolderType* holder,
  svc::Handle port) {
  os::InitializeMultiWaitHolder(holder, port.value);
}

Result AcceptSession(svc::Handle* pOutSession, svc::Handle port) {
  PortProcessor* processor = GetPortProcessor(port);
  if (processor != nullptr) {
    using Accept = Result (*)(PortProcessor*, svc::Handle*, svc::Handle);
    return reinterpret_cast<Accept>(processor->vtable[4])(processor,
      pOutSession, port);
  }

  return svc::AcceptSession(pOutSession, port);
}

Result CreateSession(svc::Handle* pOutServer, svc::Handle* pOutClient) {
  const Result result = svc::CreateSession(pOutServer, pOutClient, false, 0);
  if (result.IsSuccess()) {
    return {};
  }

  return GetDescription(result) == ResultPortSessionsExhausted ?
    ResultOutOfSessions : result;
}

void CloseServerSessionHandle(svc::Handle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(svc::CloseHandle(handle));
}

void AttachWaitHolderForReceive(os::MultiWaitHolderType* holder,
  svc::Handle session) {
  os::InitializeMultiWaitHolder(holder, session.value);
}

Result Receive(bool* pOutIsClosed, svc::Handle session, void* buffer,
  size_t size) {
  const Result result = ReceiveImpl(session, buffer, size);
  if (result.IsSuccess()) {
    *pOutIsClosed = false;
    return {};
  }

  if (GetDescription(result) == ResultSessionClosed) {
    *pOutIsClosed = true;
    return {};
  }

  return result;
}

Result Receive(ReceiveResult* pOutResult, svc::Handle session, void* buffer,
  size_t size) {
  const Result result = ReceiveImpl(session, buffer, size);
  if (result.IsSuccess()) {
    *pOutResult = ReceiveResult_Success;
    return {};
  }

  const uint32_t description = GetDescription(result);
  if (description == ResultReceiveListBroken) {
    *pOutResult = ReceiveResult_NeedsRetry;
    return {};
  }

  if (description == ResultSessionClosed) {
    *pOutResult = ReceiveResult_Closed;
    return {};
  }

  if (description == ResultTimedOut) {
    *pOutResult = ReceiveResult_NeedsRetry;
    return {};
  }

  return result;
}

Result Reply(svc::Handle session, void* buffer, size_t size) {
  int32_t index = 0;
  const Result result = buffer == GetTlsMessageBuffer() ?
    svc::ReplyAndReceive(&index, &session, 0, session, 0) :
    svc::ReplyAndReceiveWithUserBuffer(&index,
      reinterpret_cast<uintptr_t>(buffer), size, &session, 0, session, 0);
  NN_ABORT_UNLESS(result.IsFailure());
  if (GetDescription(result) == ResultTimedOut) {
    return {};
  }

  return GetDescription(result) == ResultSessionClosed ? Result{} : result;
}

void AttachWaitHolderForReply(os::MultiWaitHolderType* holder,
  svc::Handle session) {
  os::InitializeMultiWaitHolder(holder, session.value);
}

[[gnu::noinline]] PortProcessor* GetPortProcessor(svc::Handle handle) {
  PortProcessor* processor = g_PortProcessorState.processor;
  if (processor == nullptr) {
    return nullptr;
  }

  using Filter = bool (*)(PortProcessor*, svc::Handle);
  const bool isTarget = reinterpret_cast<Filter>(
    g_PortProcessorState.filter_vtable[0])(processor, handle);
  return isTarget ? g_PortProcessorState.processor : nullptr;
}

}
