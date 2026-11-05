#include "nn/friends/detail/friends_async_context_internal.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/tls.hpp"

namespace nn::friends::detail {

namespace {

const Result ResultNotInitialized = {0xe79};
const Result ResultCallInProgress = {0x1079};
const Result ResultAlreadyAttached = {0xb879};

}

AsyncContextInternal::AsyncContextInternal()
  : m_Mutex{}, m_Session(nullptr), m_IsThreadCreated(false),
    m_IsCompletionEventInitialized(false),
    m_IsCompletionEventAttached(false), m_Function(nullptr),
    m_Result(ResultNotInitialized) {}

AsyncContextInternal::~AsyncContextInternal() {
  Cancel();
  if (m_IsThreadCreated) {
    os::DestroyThread(&m_Thread);
  }
  m_Mutex.Lock();
  if (m_Session != nullptr) {
    m_Session->Release();
  }
  if (m_IsCompletionEventInitialized) {
    os::DestroySystemEvent(&m_CompletionEvent);
  }
  if (m_Function != nullptr) {
    m_Function->~AsyncFunctionBase();
  }
  m_Mutex.Unlock();
}

Result AsyncContextInternal::Initialize() {
  m_Mutex.Lock();
  NN_ABORT_UNLESS(m_Session == nullptr);
  ipc::IFriendService* session = nullptr;
  Result result =
    ShimLibraryGlobal::GetInstance().CreateAsyncSession(&session);
  if (result.IsSuccess()) {
    m_Session = session;
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      session->GetCompletionEvent(sf::Out<sf::NativeHandle>(&handle)));
    os::AttachReadableHandleToSystemEvent(&m_CompletionEvent,
      handle.GetOsHandle(), handle.IsManaged(), os::EventClearMode(0));
    handle.Detach();
    m_IsCompletionEventInitialized = true;
  }
  m_Mutex.Unlock();
  return result;
}

void AsyncContextInternal::Cancel() {
  m_Mutex.Lock();
  if (m_Session != nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(m_Session->Cancel());
  }
  m_Mutex.Unlock();
}

bool AsyncContextInternal::IsCompleted() {
  m_Mutex.Lock();
  bool isCompleted = false;
  if (m_IsCompletionEventInitialized) {
    isCompleted = os::TimedWaitSystemEvent(&m_CompletionEvent, TimeSpan(0));
  }
  m_Mutex.Unlock();
  return isCompleted;
}

Result AsyncContextInternal::GetResult() const {
  m_Mutex.Lock();
  Result result = m_Result;
  m_Mutex.Unlock();
  return result;
}

void AsyncContextInternal::AttachAllocator(AsyncMemoryAllocator&& allocator) {
  m_Mutex.Lock();
  m_Allocator = static_cast<AsyncMemoryAllocator&&>(allocator);
  m_Mutex.Unlock();
}

AsyncMemoryAllocator&& AsyncContextInternal::DetachAllocator() {
  m_Mutex.Lock();
  m_Mutex.Unlock();
  return static_cast<AsyncMemoryAllocator&&>(m_Allocator);
}

void AsyncContextInternal::Execute(AsyncFunctionBase* function,
  const char* threadName, void* stack, size_t stackSize) {
  m_Mutex.Lock();
  m_Function = function;
  int priority = os::GetThreadCurrentPriority(os::GetCurrentThread());
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateThread(&m_Thread, EntryPoint, this,
    stack, stackSize, priority, os::GetCurrentCoreNumber()));
  m_IsThreadCreated = true;
  if (threadName != nullptr) {
    os::SetThreadNamePointer(&m_Thread, threadName);
  }
  os::StartThread(&m_Thread);
  m_Mutex.Unlock();
}

void AsyncContextInternal::EntryPoint(void* argument) {
  static_cast<AsyncContextInternal*>(argument)->Invoke();
}

ipc::IFriendService* AsyncContextInternal::GetSession() {
  m_Mutex.Lock();
  ipc::IFriendService* session = m_Session;
  m_Mutex.Unlock();
  return session;
}

Result AsyncContextInternal::AttachCompletionEventReadableHandle(
  os::SystemEvent* pEvent) {
  m_Mutex.Lock();
  Result result;
  if (m_IsCompletionEventAttached) {
    result = ResultAlreadyAttached;
  }
  else {
    pEvent->AttachReadableHandle(
      os::GetReadableHandleOfSystemEvent(&m_CompletionEvent), false,
      os::EventClearMode(0));
    result = Result{};
    m_IsCompletionEventAttached = true;
  }
  m_Mutex.Unlock();
  return result;
}

void AsyncContextInternal::Invoke() {
  m_Mutex.Lock();
  m_Result = ResultCallInProgress;
  m_Mutex.Unlock();
  Result result = m_Function->Execute();
  m_Mutex.Lock();
  m_Result = result;
  m_Session->Release();
  m_Session = nullptr;
  m_Mutex.Unlock();
}

}
