#include "nn/async/async_executor.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::async::detail {

namespace {

constexpr Result ResultOutOfMemory = {544};

template <typename T, typename... Args>
[[gnu::always_inline]] inline T* NewObject(MemoryResource* resource,
  Args&&... args) {
  void* pObject = resource->allocate(sizeof(T), alignof(T));
  if (pObject == nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(ResultOutOfMemory);
  }

  return new (pObject) T(std::forward<Args>(args)...);
}

}

inline GroupWaitHolder* ExecutionScheduler::WorkItem::GetGroupWaitHolder() {
  if (blocker.m_Handler != nullptr) {
    return &holder;
  }

  NN_ABORT_UNLESS(resumeBlocker != nullptr);
  return resumeBlocker->GetGroupWaitHolder();
}

ExecutionScheduler::WorkItemMultiWait::WorkItemMultiWait(
  os::EventType* pRefreshEvent) : m_pRefreshEvent(pRefreshEvent) {}

void ExecutionScheduler::WorkItemMultiWait::LinkWorkItem(WorkItem* item) {
  GroupWaitHolder* holder = item->GetGroupWaitHolder();
  holder->SetUserData(item);
  LinkGroupWaitHolder(holder);
}

void ExecutionScheduler::WorkItemMultiWait::UnlinkWorkItem(WorkItem* item) {
  UnlinkGroupWaitHolder(item->GetGroupWaitHolder());
}

ExecutionScheduler::Signal ExecutionScheduler::WorkItemMultiWait::WaitAny(
  GroupWaitHolder* extra) {
  GroupWaitHolderOne refresh(m_pRefreshEvent);
  LinkGroupWaitHolder(&refresh);
  if (extra != nullptr) {
    LinkGroupWaitHolder(extra);
  }

  const SignaledObject signaled = Wait();
  Signal signal;
  if (signaled.holder == &refresh) {
    signal = {SignalKind_Refresh, nullptr};
  }
  else if (signaled.holder == extra) {
    signal = {SignalKind_Extra, nullptr};
  }
  else {
    signal = {SignalKind_WorkItem,
      static_cast<WorkItem*>(signaled.holder->GetUserData())};
  }

  if (extra != nullptr) {
    UnlinkGroupWaitHolder(extra);
  }

  UnlinkGroupWaitHolder(&refresh);
  return signal;
}

ExecutionScheduler::Signal ExecutionScheduler::WorkItemMultiWait::TryWaitAny(
  GroupWaitHolder* extra) {
  GroupWaitHolderOne refresh(m_pRefreshEvent);
  LinkGroupWaitHolder(&refresh);
  if (extra != nullptr) {
    LinkGroupWaitHolder(extra);
  }

  SignaledObject signaled = {};
  Signal signal;
  if (!TryWait(&signaled)) {
    signal = {SignalKind_None, nullptr};
  }
  else if (signaled.holder == &refresh) {
    signal = {SignalKind_Refresh, nullptr};
  }
  else if (signaled.holder == extra) {
    signal = {SignalKind_Extra, nullptr};
  }
  else {
    signal = {SignalKind_WorkItem,
      static_cast<WorkItem*>(signaled.holder->GetUserData())};
  }

  if (extra != nullptr) {
    UnlinkGroupWaitHolder(extra);
  }

  UnlinkGroupWaitHolder(&refresh);
  return signal;
}

ExecutionScheduler::ExecutionScheduler(MemoryResource* resource)
  : m_pResource(resource), m_RefreshEvent(os::EventClearMode_ManualClear),
    m_MultiWait(m_RefreshEvent.GetBase()), m_MonitoredCount(0),
    m_ListMutex(true), m_WaitMutex(true), m_IsExiting(false) {}

ExecutionScheduler::~ExecutionScheduler() {
  m_IsExiting = true;
  m_RefreshEvent.Signal();
  m_ThreadCounter.WaitForAllLeaving();
  NN_ABORT_UNLESS(IsEmpty());
}

bool ExecutionScheduler::IsEmpty() {
  if (!m_WaitMutex.TryLock()) {
    return false;
  }

  m_ListMutex.Lock();
  const bool isEmpty = m_Groups.empty() && m_PreMonitoredItems.empty() &&
    m_MonitoredCount == 0;
  m_ListMutex.Unlock();
  m_WaitMutex.Unlock();
  return isEmpty;
}

[[gnu::noinline]] ExecutionScheduler::WorkItem*
ExecutionScheduler::CreateWorkItem(std::shared_ptr<Executable> executable,
  CancellationToken token, ExecutionBlocker blocker) {
  WorkItem* item = blocker.m_Handler == nullptr ?
    NewObject<WorkItem>(m_pResource, std::move(executable),
      std::move(token)) :
    NewObject<WorkItem>(m_pResource, std::move(executable),
      std::move(token), std::move(blocker));
  if (item->blocker.m_Handler != nullptr) {
    item->blocker.m_Handler->InitializeMultiWaitHolder(
      item->holder.GetMultiWaitHolder());
    item->holder.AttachOwner();
  }

  return item;
}

void ExecutionScheduler::DestroyWorkItem(WorkItem* item) {
  if (item == nullptr) {
    return;
  }

  MemoryResource* resource = m_pResource;
  item->~WorkItem();
  resource->deallocate(item, sizeof(WorkItem), alignof(WorkItem));
}

void ExecutionScheduler::EnqueueWorkItem(WorkItem* item) {
  if (item->IsBlocked()) {
    EnqueueBlockedWorkItem(item);
  }
  else {
    EnqueueRunnableWorkItem(item);
  }
}

void ExecutionScheduler::EnqueueBlockedWorkItem(WorkItem* item) {
  m_ListMutex.Lock();
  if (m_Groups.empty()) {
    m_PreMonitoredItems.push_back(*item);
    UpdateRefreshEvent();
  }
  else {
    WorkItemGroup* group = &m_Groups.back();
    if (group->kind != WorkItemGroupKind_Blocked) {
      group = NewObject<WorkItemGroup>(m_pResource,
        WorkItemGroupKind_Blocked);
      m_Groups.push_back(*group);
    }

    group->items.push_back(*item);
  }

  m_ListMutex.Unlock();
}

void ExecutionScheduler::EnqueueRunnableWorkItem(WorkItem* item) {
  m_ListMutex.Lock();
  WorkItemGroup* group;
  if (m_Groups.empty() ||
    (group = &m_Groups.back())->kind != WorkItemGroupKind_Runnable) {
    group = NewObject<WorkItemGroup>(m_pResource, WorkItemGroupKind_Runnable);
    m_Groups.push_back(*group);
  }

  group->items.push_back(*item);
  UpdateRefreshEvent();
  m_ListMutex.Unlock();
}

void ExecutionScheduler::UpdateRefreshEvent() {
  m_ListMutex.Lock();
  if (m_Groups.empty() && !m_IsExiting && m_PreMonitoredItems.empty()) {
    m_RefreshEvent.Clear();
  }
  else {
    m_RefreshEvent.Signal();
  }

  m_ListMutex.Unlock();
}

void ExecutionScheduler::ExecuteWorkItem(WorkItem* item) {
  item->holder.Finalize();
  item->blocker = ExecutionBlocker();
  item->resumeBlocker = nullptr;
  const ExecutionResult result = item->executable->Execute(item->token);
  switch (result.GetCode()) {
    case ExecutionResultCode_Await:
      item->resumeBlocker = result.GetBlocker();
      EnqueueBlockedWorkItem(item);
      break;
    case ExecutionResultCode_Yield:
      EnqueueRunnableWorkItem(item);
      break;
    case ExecutionResultCode_Complete:
      DestroyWorkItem(item);
      break;
    case ExecutionResultCode_Invalid:
      NN_ABORT_UNLESS(false);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

bool ExecutionScheduler::TryDequeueMonitoredWorkItem(WorkItem** pOut) {
  *pOut = nullptr;
  if (!m_WaitMutex.TryLock()) {
    return false;
  }

  m_ListMutex.Lock();
  MovePreMonitoredWorkItemsToMonitoredList();
  UpdateRefreshEvent();
  m_ListMutex.Unlock();
  bool isDequeued = false;
  if (m_MonitoredCount != 0) {
    const Signal signal = m_MultiWait.TryWaitAny(nullptr);
    switch (signal.kind) {
      case SignalKind_Refresh:
      case SignalKind_None:
        break;
      case SignalKind_Extra:
        NN_ABORT_UNLESS(false);
      case SignalKind_WorkItem:
        *pOut = signal.item;
        m_MultiWait.UnlinkWorkItem(signal.item);
        isDequeued = true;
        --m_MonitoredCount;
        break;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
  }

  m_WaitMutex.Unlock();
  return isDequeued;
}

void ExecutionScheduler::MovePreMonitoredWorkItemsToMonitoredList() {
  m_ListMutex.Lock();
  for (WorkItemList::iterator it = m_PreMonitoredItems.begin();
    it != m_PreMonitoredItems.end();) {
    WorkItem& item = *it;
    it = m_PreMonitoredItems.erase(it);
    m_MultiWait.LinkWorkItem(&item);
    ++m_MonitoredCount;
  }

  m_ListMutex.Unlock();
}

bool ExecutionScheduler::TryDequeueRunnableWorkItem(WorkItem** pOut) {
  *pOut = nullptr;
  m_ListMutex.Lock();
  if (!m_Groups.empty()) {
    WorkItemList& items = m_Groups.front().items;
    *pOut = &items.front();
    items.pop_front();
  }

  if (!m_Groups.empty() && m_Groups.front().items.empty()) {
    WorkItemGroup* group = &m_Groups.front();
    m_Groups.pop_front();
    m_pResource->deallocate(group, sizeof(WorkItemGroup),
      alignof(WorkItemGroup));
    if (!m_Groups.empty()) {
      WorkItemGroup* blocked = &m_Groups.front();
      m_Groups.pop_front();
      for (WorkItemList::iterator it = blocked->items.begin();
        it != blocked->items.end();) {
        WorkItem& item = *it;
        it = blocked->items.erase(it);
        m_PreMonitoredItems.push_back(item);
      }

      UpdateRefreshEvent();
      m_pResource->deallocate(blocked, sizeof(WorkItemGroup),
        alignof(WorkItemGroup));
    }
  }

  m_ListMutex.Unlock();
  return *pOut != nullptr;
}

ExecutionScheduler::Signal ExecutionScheduler::WaitForSignal(
  GroupWaitHolder* extra) {
  m_WaitMutex.Lock();
  const Signal signal = m_MultiWait.WaitAny(extra);
  switch (signal.kind) {
    case SignalKind_Refresh:
    case SignalKind_Extra:
      break;
    case SignalKind_WorkItem:
      m_MultiWait.UnlinkWorkItem(signal.item);
      --m_MonitoredCount;
      break;
    case SignalKind_None:
      NN_ABORT_UNLESS(false);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  m_WaitMutex.Unlock();
  return signal;
}

ExecutionScheduler::WorkItem* ExecutionScheduler::DoRefreshJob() {
  m_ListMutex.Lock();
  WorkItem* item;
  TryDequeueRunnableWorkItem(&item);
  MovePreMonitoredWorkItemsToMonitoredList();
  UpdateRefreshEvent();
  m_ListMutex.Unlock();
  return item;
}

void ExecutionScheduler::Enqueue(std::shared_ptr<Executable> executable,
  CancellationToken token) {
  Enqueue(std::move(executable), std::move(token), ExecutionBlocker());
}

void ExecutionScheduler::Enqueue(std::shared_ptr<Executable> executable,
  CancellationToken token, ExecutionBlocker blocker) {
  WorkItem* item = CreateWorkItem(std::move(executable), std::move(token),
    std::move(blocker));
  EnqueueWorkItem(item);
}

void ExecutionScheduler::DequeueAndCall() {
  DequeueAndCall(nullptr);
}

void ExecutionScheduler::DequeueAndCall(os::EventType* pExitEvent) {
  m_ThreadCounter.Join();
  if (!m_IsExiting) {
    WorkItem* item;
    if (TryDequeueMonitoredWorkItem(&item) ||
      TryDequeueRunnableWorkItem(&item)) {
      ExecuteWorkItem(item);
    }
    else {
      m_WaitMutex.Lock();
      item = nullptr;
      while (!m_IsExiting) {
        Signal signal;
        if (pExitEvent != nullptr) {
          GroupWaitHolderOne exitHolder(pExitEvent);
          signal = WaitForSignal(&exitHolder);
        }
        else {
          signal = WaitForSignal(nullptr);
        }

        if (signal.kind == SignalKind_Extra) {
          break;
        }

        switch (signal.kind) {
          case SignalKind_Refresh:
            item = DoRefreshJob();
            break;
          case SignalKind_WorkItem:
            item = signal.item;
            break;
          default:
            nn::detail::UnexpectedDefaultImpl();
        }

        if (item != nullptr) {
          break;
        }
      }

      m_WaitMutex.Unlock();
      if (item != nullptr) {
        ExecuteWorkItem(item);
      }
    }
  }

  m_ThreadCounter.Leave();
}

bool ExecutionScheduler::TryDequeueAndCall() {
  m_ThreadCounter.Join();
  bool isCalled = false;
  if (!m_IsExiting) {
    WorkItem* item;
    TryDequeueMonitoredWorkItem(&item);
    if (item == nullptr) {
      TryDequeueRunnableWorkItem(&item);
    }

    if (item != nullptr) {
      ExecuteWorkItem(item);
      isCalled = true;
    }
  }

  m_ThreadCounter.Leave();
  return isCalled;
}

void ExecutionScheduler::DequeueAndCallAll() {
  m_ThreadCounter.Join();
  WorkItem* item;
  if (!m_IsExiting) {
    do {
      if (!TryDequeueMonitoredWorkItem(&item) &&
        !TryDequeueRunnableWorkItem(&item)) {
        break;
      }

      ExecuteWorkItem(item);
    } while (!m_IsExiting);
  }

  if (!m_IsExiting) {
    while (!IsEmpty()) {
      m_WaitMutex.Lock();
      for (;;) {
        if (m_IsExiting || IsEmpty()) {
          m_WaitMutex.Unlock();
          m_ThreadCounter.Leave();
          return;
        }

        const Signal signal = WaitForSignal(nullptr);
        if (signal.kind == SignalKind_Refresh) {
          item = DoRefreshJob();
          if (item != nullptr) {
            break;
          }

          continue;
        }

        NN_ABORT_UNLESS(signal.kind == SignalKind_WorkItem);
        item = signal.item;
        break;
      }

      m_WaitMutex.Unlock();
      ExecuteWorkItem(item);
      if (m_IsExiting) {
        break;
      }
    }
  }

  m_ThreadCounter.Leave();
}

}
