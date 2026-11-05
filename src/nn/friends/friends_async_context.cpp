#include "nn/friends/friends_async_context.hpp"

#include "nn/friends/detail/friends_async_context_internal.hpp"

namespace nn::friends {

namespace {

const Result ResultNotInitialized = {0xe79};

void DestroyInternal(detail::AsyncContextInternal* pInternal) {
  detail::AsyncMemoryAllocator allocator(pInternal->DetachAllocator());
  pInternal->~AsyncContextInternal();
  allocator.Deallocate();
}

}

AsyncContext::AsyncContext() : m_Mutex(true), m_Internal(nullptr) {}

AsyncContext::~AsyncContext() {
  if (m_Internal != nullptr) {
    DestroyInternal(m_Internal);
  }
}

Result AsyncContext::GetSystemEvent(os::SystemEvent* pEvent) {
  m_Mutex.Lock();
  Result result;
  if (m_Internal != nullptr) {
    result = m_Internal->AttachCompletionEventReadableHandle(pEvent);
  }
  else {
    result = ResultNotInitialized;
  }
  m_Mutex.Unlock();
  return result;
}

Result AsyncContext::Cancel() {
  m_Mutex.Lock();
  Result result;
  if (m_Internal != nullptr) {
    m_Internal->Cancel();
    result = Result{};
  }
  else {
    result = ResultNotInitialized;
  }
  m_Mutex.Unlock();
  return result;
}

Result AsyncContext::HasDone(bool* pOutHasDone) {
  m_Mutex.Lock();
  Result result;
  if (m_Internal != nullptr) {
    *pOutHasDone = m_Internal->IsCompleted();
    result = Result{};
  }
  else {
    result = ResultNotInitialized;
  }
  m_Mutex.Unlock();
  return result;
}

Result AsyncContext::GetResult() const {
  m_Mutex.Lock();
  Result result;
  if (m_Internal != nullptr) {
    result = m_Internal->GetResult();
  }
  else {
    result = ResultNotInitialized;
  }
  m_Mutex.Unlock();
  return result;
}

void AsyncContext::SetInternal(detail::AsyncContextInternal* pInternal) {
  m_Mutex.Lock();
  if (m_Internal != nullptr) {
    DestroyInternal(m_Internal);
  }
  m_Internal = pInternal;
  m_Mutex.Unlock();
}

}
