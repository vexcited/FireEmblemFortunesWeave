#pragma once

#include "nn/account/account_types.hpp"
#include "nn/friends/detail/friends_shim_library_global.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/result.hpp"

namespace nn::friends {

namespace detail {

class AsyncContextInternal;

}

class AsyncContext {
 public:
  AsyncContext();
  ~AsyncContext();

  Result GetSystemEvent(os::SystemEvent* pEvent);
  Result Cancel();
  Result HasDone(bool* pOutHasDone);
  Result GetResult() const;
  void SetInternal(detail::AsyncContextInternal* pInternal);

 private:
  mutable os::Mutex m_Mutex;
  detail::AsyncContextInternal* m_Internal;
};

class NotificationQueue {
 public:
  NotificationQueue();
  ~NotificationQueue();

  Result Initialize();
  Result Initialize(const account::Uid& uid);
  void Finalize();
  const account::Uid& GetUid() const;
  os::SystemEvent* GetSystemEvent();
  Result Clear();
  Result Pop(NotificationInfo* pOutInfo);

 private:
  mutable os::Mutex m_Mutex;
  account::Uid m_Uid;
  detail::ipc::INotificationService* m_Service;
  os::SystemEvent m_Event;
};

}
