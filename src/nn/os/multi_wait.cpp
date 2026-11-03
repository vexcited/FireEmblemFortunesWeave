#include "nn/os/multi_wait.hpp"
#include "nn/os/thread_manager.hpp"

#include <stddef.h>

extern "C" uint32_t svcCancelSynchronization(uint32_t thread_handle);

namespace nn::os::detail {

[[noreturn]] void AbortMultiWaitResult(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

extern const uintptr_t
  ThreadHolderVtable[] asm("_ZTVN2nn2os6detail23MultiWaitHolderOfThreadE");

static_assert(sizeof(MultiWaitHolderBase) == 48);
static_assert(sizeof(MultiWaitHolderOfThread) == 64);
static_assert(sizeof(MultiWaitImpl) == 40);
static_assert(offsetof(MultiWaitHolderBase, object_node) == 24);
static_assert(offsetof(MultiWaitHolderBase, owner) == 40);
static_assert(offsetof(MultiWaitImpl, lock) == 32);
static_assert(offsetof(MultiWaitImpl, platform) == 36);

static void ExchangeNext(MultiWaitListNode* first, MultiWaitListNode* second) {
  MultiWaitListNode* original = first->next;
  first->next = second->next;
  original->previous = second;
  second->next->previous = first;
  second->next = original;
}

static void Detach(MultiWaitListNode* node) {
  MultiWaitListNode* next = node->next;
  MultiWaitListNode* previous = node->previous;
  MultiWaitListNode* previous_next = previous->next;
  next->previous = previous;
  previous->next = node->next;
  previous_next->previous = node;
  node->next = previous_next;
}

static InternalCriticalSection* ThreadLock(ThreadType* thread) {
  return reinterpret_cast<InternalCriticalSection*>(&thread->critical_section);
}

void MultiWaitImplByHorizon::CancelWait() {
  uint32_t result = svcCancelSynchronization(thread_handle);

  if (result) {
    AbortMultiWaitResult(&result);
  }
}

void MultiWaitImpl::NotifyAndWakeupThread(MultiWaitHolderBase* holder) {
  lock.Enter();

  if (!signaled_holder) {
    signaled_holder = holder;
    platform.CancelWait();
  }

  lock.Leave();
}

int MultiWaitHolderOfThread::IsSignaled() const {
  ThreadType* locked_thread = thread;
  ThreadLock(locked_thread)->Enter();
  int signaled = thread->state == 4;
  ThreadLock(locked_thread)->Leave();
  return signaled;
}

int MultiWaitHolderOfThread::AddToObjectList() {
  ThreadType* locked_thread = thread;
  ThreadLock(locked_thread)->Enter();
  auto* end = reinterpret_cast<MultiWaitListNode*>(&thread->waiters);
  ExchangeNext(&object_node, end);
  int signaled = thread->state == 4;
  ThreadLock(locked_thread)->Leave();
  return signaled;
}

void MultiWaitHolderOfThread::RemoveFromObjectList() {
  ThreadType* locked_thread = thread;
  ThreadLock(locked_thread)->Enter();
  auto* end = reinterpret_cast<MultiWaitListNode*>(&thread->waiters);

  if (&object_node != end) {
    Detach(&object_node);
  }

  ThreadLock(locked_thread)->Leave();
}

bool GetUserWaitNativeHandle(const MultiWaitHolderBase*, uint32_t*) {
  return false;
}

int64_t GetThreadAbsoluteTimeToWakeup(const MultiWaitHolderBase*) {
  return INT64_MAX;
}

MultiWaitHolderBase* MultiWaitImpl::AddToEachObjectListAndCheckObjectState() {
  MultiWaitHolderBase* signaled = nullptr;

  for (MultiWaitListNode* node = holders.previous; node != &holders;) {
    auto* holder = reinterpret_cast<MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 8);

    if (holder->dispatch->add_to_object_list(holder) == 1 && !signaled) {
      signaled = holder;
    }

    node = holder->multi_wait_node.previous;
  }

  return signaled;
}

void MultiWaitImpl::RemoveFromEachObjectList() {
  for (MultiWaitListNode* node = holders.previous; node != &holders;) {
    auto* holder = reinterpret_cast<MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 8);
    holder->dispatch->remove_from_object_list(holder);
    node = holder->multi_wait_node.previous;
  }
}

}

namespace nn::os {

static_assert(sizeof(MultiWaitType) == 48);
static_assert(sizeof(MultiWaitHolderType) == 64);

void InitializeMultiWait(MultiWaitType* wait) {
  auto& impl = wait->implementation;
  impl.signaled_holder = nullptr;
  impl.wait_time = 0;
  impl.lock.state.value = 0;
  impl.platform.thread_handle = 0;
  impl.holders.next = &impl.holders;
  impl.holders.previous = &impl.holders;
  impl.lock.Initialize();
  impl.platform.thread_handle = 0;
  wait->initialized = 1;
}

void InitializeMultiWaitHolder(MultiWaitHolderType* storage,
                               ThreadType* thread) {
  auto* holder = reinterpret_cast<detail::MultiWaitHolderOfThread*>(storage);
  holder->multi_wait_node.next = &holder->multi_wait_node;
  holder->multi_wait_node.previous = &holder->multi_wait_node;
  holder->object_node.next = &holder->object_node;
  holder->object_node.previous = &holder->object_node;
  holder->owner = nullptr;
  holder->thread = thread;
  holder->user_data = 0;
  holder->dispatch = reinterpret_cast<const detail::MultiWaitHolderDispatch*>(
    detail::ThreadHolderVtable + 2);
}

void FinalizeMultiWaitHolder(MultiWaitHolderType*) {
}

void LinkMultiWaitHolder(MultiWaitType* wait, MultiWaitHolderType* storage) {
  auto* holder = reinterpret_cast<detail::MultiWaitHolderBase*>(storage);
  detail::ExchangeNext(&holder->multi_wait_node, &wait->implementation.holders);
  holder->owner = &wait->implementation;
}

void UnlinkMultiWaitHolder(MultiWaitHolderType* storage) {
  auto* holder = reinterpret_cast<detail::MultiWaitHolderBase*>(storage);

  if (&holder->multi_wait_node !=
      reinterpret_cast<detail::MultiWaitListNode*>(holder->owner)) {
    detail::Detach(&holder->multi_wait_node);
  }

  holder->owner = nullptr;
}

void UnlinkAllMultiWaitHolder(MultiWaitType* wait) {
  auto* end = &wait->implementation.holders;

  while (end->previous != end) {
    auto* node = end->previous;
    auto* holder = reinterpret_cast<detail::MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 8);
    holder->owner = nullptr;
    detail::Detach(end->previous);
  }
}

void MoveAllMultiWaitHolder(MultiWaitType* destination, MultiWaitType* source) {
  auto* source_end = &source->implementation.holders;
  auto* destination_end = &destination->implementation.holders;

  for (auto* node = source_end->previous; node != source_end;
       node = node->previous) {
    auto* holder = reinterpret_cast<detail::MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 8);
    holder->owner = &destination->implementation;
  }

  auto* last = source_end->previous;

  if (last != source_end) {
    auto* next = last->next;
    auto* first = source_end->next;
    next->previous = source_end;
    source_end->next = last->next;
    first->previous = last;
    last->next = first;
    detail::ExchangeNext(last, destination_end);
  }
}

void SetMultiWaitHolderUserData(MultiWaitHolderType* storage, uintptr_t value) {
  auto* holder = reinterpret_cast<detail::MultiWaitHolderOfThread*>(storage);
  holder->user_data = value;
}

uintptr_t GetMultiWaitHolderUserData(const MultiWaitHolderType* storage) {
  auto* holder =
    reinterpret_cast<const detail::MultiWaitHolderOfThread*>(storage);
  return holder->user_data;
}

}
