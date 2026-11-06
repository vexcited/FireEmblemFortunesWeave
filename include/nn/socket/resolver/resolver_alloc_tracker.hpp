#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/managers.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/result.hpp"
#include "nn/socket/resolver/resolver_thread_locals.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::socket::resolver::client {

class AllocTracker {
public:
  AllocTracker();

  Result Initialize();
  void Finalize();
  void Reset();
  void ResetLocked();
  ThreadLocals* Locals();
  void Destroy(uintptr_t threadId);
  void Track(const void* pointer);
  void Untrack(const void* pointer);

  static void ThreadDestroy(uintptr_t threadId);

private:
  using ThreadList = util::IntrusiveList<ThreadAssocEntry,
    util::IntrusiveListBaseNodeTraits<ThreadAssocEntry>>;
  using UserList = util::IntrusiveList<UserAssocEntry,
    util::IntrusiveListBaseNodeTraits<UserAssocEntry>>;

  bool IsValidThreadId(uintptr_t threadId) const {
    return threadId != 0 && threadId >= m_FirstThreadId &&
      threadId < m_NextThreadId;
  }

  os::SdkMutex m_Mutex;
  uint64_t m_FirstThreadId;
  uint64_t m_NextThreadId;
  os::TlsSlot m_TlsSlot;
  ThreadList m_ThreadList;
  UserList m_UserList;
};

extern AllocTracker g_AllocTracker;

}
