#include "nn/os/message_queue.hpp"

#include <stddef.h>

namespace nn::os::detail {

[[noreturn]] void AbortQueueHolder() asm("_ZN2nn4diag6detail9AbortImplEv");

extern const uintptr_t QueueNotFullVtable[] asm(
  "_ZTVN2nn2os6detail36MultiWaitHolderOfMessageQueueNotFullE");
extern const uintptr_t QueueNotEmptyVtable[] asm(
  "_ZTVN2nn2os6detail37MultiWaitHolderOfMessageQueueNotEmptyE");

static_assert(sizeof(MessageQueueType) == 72);
static_assert(offsetof(MessageQueueType, buffer) == 32);
static_assert(offsetof(MessageQueueType, count) == 44);
static_assert(offsetof(MessageQueueType, lock) == 56);
static_assert(offsetof(MessageQueueType, not_empty) == 64);
static_assert(sizeof(MultiWaitHolderOfMessageQueueNotFull) == 64);
static_assert(sizeof(MultiWaitHolderOfMessageQueueNotEmpty) == 64);

static bool QueueReady(const MessageQueueType* queue, bool not_full) {
  return not_full ? queue->count < queue->capacity : queue->count > 0;
}

template <typename Holder>
static int QueueHolderSignaled(const Holder* holder, bool not_full) {
  MessageQueueType* locked = holder->queue;
  locked->lock.Enter();
  int result = QueueReady(holder->queue, not_full);
  locked->lock.Leave();
  return result;
}

template <typename Holder>
static int AddQueueHolder(Holder* holder, bool not_full) {
  MessageQueueType* locked = holder->queue;
  locked->lock.Enter();
  auto* end = not_full ? &holder->queue->not_full_waiters
                       : &holder->queue->not_empty_waiters;
  auto* node = &holder->object_node;
  auto* original = node->next;
  node->next = end->next;
  original->previous = end;
  end->next->previous = node;
  end->next = original;
  int result = QueueReady(holder->queue, not_full);
  locked->lock.Leave();
  return result;
}

template <typename Holder>
static void RemoveQueueHolder(Holder* holder, bool not_full) {
  MessageQueueType* locked = holder->queue;
  locked->lock.Enter();
  auto* end = not_full ? &holder->queue->not_full_waiters
                       : &holder->queue->not_empty_waiters;
  auto* node = &holder->object_node;

  if (node != end) {
    auto* next = node->next;
    auto* previous = node->previous;
    auto* previous_next = previous->next;
    next->previous = previous;
    previous->next = node->next;
    previous_next->previous = node;
    node->next = previous_next;
  }

  locked->lock.Leave();
}

int MultiWaitHolderOfMessageQueueNotFull::IsSignaled() const {
  return QueueHolderSignaled(this, true);
}

int MultiWaitHolderOfMessageQueueNotFull::AddToObjectList() {
  return AddQueueHolder(this, true);
}

void MultiWaitHolderOfMessageQueueNotFull::RemoveFromObjectList() {
  RemoveQueueHolder(this, true);
}

int MultiWaitHolderOfMessageQueueNotEmpty::IsSignaled() const {
  return QueueHolderSignaled(this, false);
}

int MultiWaitHolderOfMessageQueueNotEmpty::AddToObjectList() {
  return AddQueueHolder(this, false);
}

void MultiWaitHolderOfMessageQueueNotEmpty::RemoveFromObjectList() {
  RemoveQueueHolder(this, false);
}

static uint64_t QueueTick() {
  uint64_t ticks;
  asm volatile("mrs %0, cntpct_el0" : "=r"(ticks) : : "memory");
  return ticks;
}

static TimeoutHelper QueueTimeout(TimeSpan time) {
  if (!time.nanoseconds) {
    return {0};
  }

  uint64_t ticks = QueueTick();
  uint64_t end = ticks + uint64_t(ConvertToTick(time).value) + 1;
  return {end >= uint64_t(INT64_MAX) ? INT64_MAX : int64_t(end)};
}

static void NotifyQueueWaiters(MultiWaitListNode* end) {
  for (auto* node = end->previous; node != end; node = node->previous) {
    auto* holder = reinterpret_cast<MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 24);
    holder->owner->NotifyAndWakeupThread(holder);
  }
}

enum class QueueWait { Blocking, Poll, Timed };

template <bool Jam, QueueWait Mode>
static bool PutMessage(MessageQueueType* queue, uintptr_t message,
                       TimeSpan time = {0}) {
  TimeoutHelper timeout;

  if constexpr (Mode == QueueWait::Timed) {
    timeout = QueueTimeout(time);
  }

  queue->lock.Enter();

  while (queue->count >= queue->capacity) {
    if constexpr (Mode == QueueWait::Poll) {
      queue->lock.Leave();
      return false;
    }
    else if constexpr (Mode == QueueWait::Timed) {
      if (!timeout.deadline || int64_t(QueueTick()) >= timeout.deadline) {
        queue->lock.Leave();
        return false;
      }

      queue->not_full.TimedWait(&queue->lock.state, timeout);
    }
    else {
      queue->not_full.Wait(&queue->lock.state);
    }
  }

  int32_t index;
  int32_t count = queue->count;
  int32_t capacity = queue->capacity;

  if constexpr (Jam) {
    index = int32_t(uint32_t(queue->offset) +
                    (queue->offset > 0 ? 0u : uint32_t(capacity)) - 1);
  }
  else {
    index = int32_t(uint32_t(queue->offset) + uint32_t(count));
    index =
      int32_t(uint32_t(index) - (index < capacity ? 0u : uint32_t(capacity)));
  }

  queue->buffer[index] = message;
  queue->count = int32_t(uint32_t(count) + 1);

  if constexpr (Jam) {
    queue->offset = index;
  }

  queue->not_empty.Broadcast();
  NotifyQueueWaiters(&queue->not_empty_waiters);
  queue->lock.Leave();
  return true;
}

template <bool Remove, QueueWait Mode>
static bool GetMessage(uintptr_t* output, MessageQueueType* queue,
                       TimeSpan time = {0}) {
  TimeoutHelper timeout;

  if constexpr (Mode == QueueWait::Timed) {
    timeout = QueueTimeout(time);
  }

  queue->lock.Enter();

  while (!queue->count) {
    if constexpr (Mode == QueueWait::Poll) {
      queue->lock.Leave();
      return false;
    }
    else if constexpr (Mode == QueueWait::Timed) {
      if (!timeout.deadline || int64_t(QueueTick()) >= timeout.deadline) {
        queue->lock.Leave();
        return false;
      }

      queue->not_empty.TimedWait(&queue->lock.state, timeout);
    }
    else {
      queue->not_empty.Wait(&queue->lock.state);
    }
  }

  uintptr_t message = queue->buffer[queue->offset];

  if constexpr (Remove) {
    int32_t offset = int32_t(uint32_t(queue->offset) + 1);
    offset =
      int32_t(uint32_t(offset) -
              (offset < queue->capacity ? 0u : uint32_t(queue->capacity)));
    queue->count = int32_t(uint32_t(queue->count) - 1);
    queue->offset = offset;
  }

  *output = message;

  if constexpr (Remove) {
    queue->not_full.Broadcast();
    NotifyQueueWaiters(&queue->not_full_waiters);
  }

  queue->lock.Leave();
  return true;
}

}

namespace nn::os {

void InitializeMessageQueue(MessageQueueType* queue, uintptr_t* buffer,
                            uintptr_t capacity) {
  queue->lock.Initialize();
  queue->not_full.Initialize();
  queue->not_empty.Initialize();
  queue->not_full_waiters.next = &queue->not_full_waiters;
  queue->not_full_waiters.previous = &queue->not_full_waiters;
  queue->buffer = buffer;
  queue->capacity = int32_t(uint32_t(capacity));
  queue->count = 0;
  queue->offset = 0;
  queue->not_empty_waiters.next = &queue->not_empty_waiters;
  queue->not_empty_waiters.previous = &queue->not_empty_waiters;
  queue->initialized = 1;
}

void FinalizeMessageQueue(MessageQueueType* queue) {
  queue->initialized = 0;
  queue->lock.Finalize();
}

void SendMessageQueue(MessageQueueType* queue, uintptr_t message) {
  detail::PutMessage<false, detail::QueueWait::Blocking>(queue, message);
}

bool TrySendMessageQueue(MessageQueueType* queue, uintptr_t message) {
  return detail::PutMessage<false, detail::QueueWait::Poll>(queue, message);
}

bool TimedSendMessageQueue(MessageQueueType* queue, uintptr_t message,
                           TimeSpan time) {
  return detail::PutMessage<false, detail::QueueWait::Timed>(queue, message,
                                                             time);
}

void JamMessageQueue(MessageQueueType* queue, uintptr_t message) {
  detail::PutMessage<true, detail::QueueWait::Blocking>(queue, message);
}

bool TryJamMessageQueue(MessageQueueType* queue, uintptr_t message) {
  return detail::PutMessage<true, detail::QueueWait::Poll>(queue, message);
}

bool TimedJamMessageQueue(MessageQueueType* queue, uintptr_t message,
                          TimeSpan time) {
  return detail::PutMessage<true, detail::QueueWait::Timed>(queue, message,
                                                            time);
}

void ReceiveMessageQueue(uintptr_t* output, MessageQueueType* queue) {
  detail::GetMessage<true, detail::QueueWait::Blocking>(output, queue);
}

bool TryReceiveMessageQueue(uintptr_t* output, MessageQueueType* queue) {
  return detail::GetMessage<true, detail::QueueWait::Poll>(output, queue);
}

bool TimedReceiveMessageQueue(uintptr_t* output, MessageQueueType* queue,
                              TimeSpan time) {
  return detail::GetMessage<true, detail::QueueWait::Timed>(output, queue,
                                                            time);
}

void PeekMessageQueue(uintptr_t* output, const MessageQueueType* queue) {
  detail::GetMessage<false, detail::QueueWait::Blocking>(
    output, const_cast<MessageQueueType*>(queue));
}

bool TryPeekMessageQueue(uintptr_t* output, const MessageQueueType* queue) {
  return detail::GetMessage<false, detail::QueueWait::Poll>(
    output, const_cast<MessageQueueType*>(queue));
}

bool TimedPeekMessageQueue(uintptr_t* output, const MessageQueueType* queue,
                           TimeSpan time) {
  return detail::GetMessage<false, detail::QueueWait::Timed>(
    output, const_cast<MessageQueueType*>(queue), time);
}

void InitializeMultiWaitHolder(MultiWaitHolderType* storage,
                               MessageQueueType* queue,
                               MessageQueueWaitType type) {
  const uintptr_t* table;

  switch (type) {
    case MessageQueueWaitType_NotFull:
      table = detail::QueueNotFullVtable;
      break;
    case MessageQueueWaitType_NotEmpty:
      table = detail::QueueNotEmptyVtable;
      break;
    default:
      detail::AbortQueueHolder();
  }

  auto* holder =
    reinterpret_cast<detail::MultiWaitHolderOfMessageQueueNotFull*>(storage);
  holder->queue = queue;
  holder->user_data = 0;
  holder->multi_wait_node.next = &holder->multi_wait_node;
  holder->multi_wait_node.previous = &holder->multi_wait_node;
  holder->object_node.next = &holder->object_node;
  holder->object_node.previous = &holder->object_node;
  holder->owner = nullptr;
  holder->dispatch =
    reinterpret_cast<const detail::MultiWaitHolderDispatch*>(table + 2);
}

}
