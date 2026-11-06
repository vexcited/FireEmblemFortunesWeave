#include <new>

#include "nn/os/tls.hpp"
#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/resolver_alloc_tracker.hpp"

namespace nn::socket::resolver::client {

namespace {

void ResetThreadLocals(ThreadLocals& locals) {
  locals.m_HostErrno = 0;
  ClearHostEnt(&locals.m_pHostEntry);
  ClearHostEnt(&locals.m_pHostEntryOld);
  detail::Free(locals.m_pHostErrorString);
  locals.m_pHostErrorString = nullptr;
  detail::Free(locals.m_pAddrInfoErrorString);
  locals.m_pAddrInfoErrorString = nullptr;
}

}

AllocTracker::AllocTracker() : m_FirstThreadId(1), m_NextThreadId(1) {}

Result AllocTracker::Initialize() {
  m_Mutex.lock();
  Result result = os::SdkAllocateTlsSlot(&m_TlsSlot, ThreadDestroy);
  m_Mutex.unlock();
  return result;
}

void AllocTracker::Finalize() {
  m_Mutex.lock();
  os::FreeTlsSlot(m_TlsSlot);
  ResetLocked();
  m_Mutex.unlock();
}

void AllocTracker::Reset() {
  m_Mutex.lock();
  ResetLocked();
  m_Mutex.unlock();
}

void AllocTracker::ResetLocked() {
  for (auto it = m_UserList.begin(); it != m_UserList.end();) {
    UserAssocEntry& entry = *it;
    it = m_UserList.erase(it);
    detail::Free(&entry);
  }

  for (auto it = m_ThreadList.begin(); it != m_ThreadList.end();) {
    ThreadAssocEntry& entry = *it;
    it = m_ThreadList.erase(it);
    ResetThreadLocals(entry.m_Locals);
    detail::Free(&entry);
  }

  m_NextThreadId = m_NextThreadId + 1;
  m_FirstThreadId = m_NextThreadId;
}

ThreadLocals* AllocTracker::Locals() {
  m_Mutex.lock();
  ThreadLocals* pLocals = nullptr;
  uintptr_t threadId = os::GetTlsValue(m_TlsSlot);
  if (IsValidThreadId(threadId)) {
    for (auto& entry : m_ThreadList) {
      if (entry.m_ThreadId == threadId) {
        pLocals = &entry.m_Locals;
        break;
      }
    }
  }

  if (pLocals == nullptr) {
    void* pStorage = detail::Alloc(sizeof(ThreadAssocEntry));
    if (pStorage != nullptr) {
      uint64_t newThreadId = m_NextThreadId++;
      os::SetTlsValue(m_TlsSlot, newThreadId);
      ThreadAssocEntry* pEntry = new (pStorage) ThreadAssocEntry(newThreadId);
      m_ThreadList.push_back(*pEntry);
      pLocals = &pEntry->m_Locals;
    }
  }
  m_Mutex.unlock();
  return pLocals;
}

void AllocTracker::Destroy(uintptr_t threadId) {
  m_Mutex.lock();
  if (IsValidThreadId(threadId)) {
    for (auto& entry : m_ThreadList) {
      if (entry.m_ThreadId == threadId) {
        m_ThreadList.erase(entry);
        ResetThreadLocals(entry.m_Locals);
        detail::Free(&entry);
        break;
      }
    }
  }
  m_Mutex.unlock();
}

void AllocTracker::Track(const void* pointer) {
  void* pStorage = detail::Alloc(sizeof(UserAssocEntry));
  if (pStorage == nullptr) {
    return;
  }

  UserAssocEntry* pEntry = new (pStorage) UserAssocEntry(pointer);
  m_Mutex.lock();
  m_UserList.push_back(*pEntry);
  m_Mutex.unlock();
}

void AllocTracker::Untrack(const void* pointer) {
  m_Mutex.lock();
  for (auto& entry : m_UserList) {
    if (entry.m_Pointer == pointer) {
      m_UserList.erase(entry);
      detail::Free(&entry);
      break;
    }
  }
  m_Mutex.unlock();
}

void AllocTracker::ThreadDestroy(uintptr_t threadId) {
  if (threadId != 0) {
    g_AllocTracker.Destroy(threadId);
  }
}

}
