#include "nn/os/light_message_queue.hpp"

namespace nn::os {

namespace {

bool EnqueueUnsafe(LightMessageQueueType* queue, uintptr_t value) {
  const int count = queue->count;

  if (count >= queue->capacity) {
    return false;
  }

  int index = queue->offset + count;

  if (index >= queue->capacity) {
    index -= queue->capacity;
  }

  queue->buffer[index] = value;
  queue->count = count + 1;
  return true;
}

bool JamUnsafe(LightMessageQueueType* queue, uintptr_t value) {
  const int count = queue->count;

  if (count >= queue->capacity) {
    return false;
  }

  int offset = queue->offset;
  offset = (offset > 0 ? offset : offset + queue->capacity) - 1;
  queue->buffer[offset] = value;
  queue->count = count + 1;
  queue->offset = offset;
  return true;
}

bool DequeueUnsafe(uintptr_t* value, LightMessageQueueType* queue) {
  const int count = queue->count;

  if (count == 0) {
    return false;
  }

  const int offset = queue->offset;
  const uintptr_t message = queue->buffer[offset];
  int next = offset + 1;

  if (next >= queue->capacity) {
    next -= queue->capacity;
  }

  queue->count = count - 1;
  queue->offset = next;
  *value = message;
  return true;
}

bool PeekUnsafe(uintptr_t* value, const LightMessageQueueType* queue) {
  if (queue->count == 0) {
    return false;
  }

  *value = queue->buffer[queue->offset];
  return true;
}

// The blocking variants clear the event they wait on while still holding
// the lock when the queue is full or empty.
[[gnu::noinline]] bool TrySendOrClear(LightMessageQueueType* queue,
  uintptr_t value) {
  queue->lock.Lock();
  const bool isSent = EnqueueUnsafe(queue, value);

  if (!isSent) {
    queue->notFull.Clear();
  }

  queue->lock.Unlock();

  if (isSent) {
    queue->notEmpty.SignalWithManualClear();
  }

  return isSent;
}

[[gnu::noinline]] bool TryJamOrClear(LightMessageQueueType* queue,
  uintptr_t value) {
  queue->lock.Lock();
  const bool isSent = JamUnsafe(queue, value);

  if (!isSent) {
    queue->notFull.Clear();
  }

  queue->lock.Unlock();

  if (isSent) {
    queue->notEmpty.SignalWithManualClear();
  }

  return isSent;
}

[[gnu::noinline]] bool TryReceiveOrClear(uintptr_t* value,
  LightMessageQueueType* queue) {
  queue->lock.Lock();
  const bool isReceived = DequeueUnsafe(value, queue);

  if (!isReceived) {
    queue->notEmpty.Clear();
  }

  queue->lock.Unlock();

  if (isReceived) {
    queue->notFull.SignalWithManualClear();
  }

  return isReceived;
}

bool TryPeekOrClear(uintptr_t* value, LightMessageQueueType* queue) {
  queue->lock.Lock();
  const bool isPeeked = PeekUnsafe(value, queue);

  if (!isPeeked) {
    queue->notEmpty.Clear();
  }

  queue->lock.Unlock();
  return isPeeked;
}

}

void InitializeLightMessageQueue(LightMessageQueueType* queue,
  uintptr_t* buffer, size_t capacity) {
  queue->lock.value = 0;
  queue->notEmpty.state = detail::InternalLightEvent::State_NotSignaled;
  queue->buffer = buffer;
  queue->capacity = static_cast<int32_t>(capacity);
  queue->count = 0;
  queue->offset = 0;
  queue->notFull.state = detail::InternalLightEvent::State_Signaled;
  queue->isInitialized = true;
}

void FinalizeLightMessageQueue(LightMessageQueueType* queue) {
  queue->isInitialized = false;
}

void SendLightMessageQueue(LightMessageQueueType* queue, uintptr_t value) {
  while (!TrySendOrClear(queue, value)) {
    queue->notFull.WaitWithManualClear();
  }
}

bool TrySendLightMessageQueue(LightMessageQueueType* queue, uintptr_t value) {
  queue->lock.Lock();
  const bool isSent = EnqueueUnsafe(queue, value);
  queue->lock.Unlock();

  if (isSent) {
    queue->notEmpty.SignalWithManualClear();
  }

  return isSent;
}

bool TimedSendLightMessageQueue(LightMessageQueueType* queue, uintptr_t value,
  TimeSpan timeout) {
  const detail::TimeoutHelper helper = detail::MakeLightTimeout(timeout);

  while (true) {
    if (TrySendOrClear(queue, value)) {
      return true;
    }

    if (detail::IsLightTimeoutExpired(helper)) {
      return false;
    }

    queue->notFull.TimedWaitWithManualClear(helper);
  }
}

void JamLightMessageQueue(LightMessageQueueType* queue, uintptr_t value) {
  while (!TryJamOrClear(queue, value)) {
    queue->notFull.WaitWithManualClear();
  }
}

bool TryJamLightMessageQueue(LightMessageQueueType* queue, uintptr_t value) {
  queue->lock.Lock();
  const bool isSent = JamUnsafe(queue, value);
  queue->lock.Unlock();

  if (isSent) {
    queue->notEmpty.SignalWithManualClear();
  }

  return isSent;
}

bool TimedJamLightMessageQueue(LightMessageQueueType* queue, uintptr_t value,
  TimeSpan timeout) {
  const detail::TimeoutHelper helper = detail::MakeLightTimeout(timeout);

  while (true) {
    if (TryJamOrClear(queue, value)) {
      return true;
    }

    if (detail::IsLightTimeoutExpired(helper)) {
      return false;
    }

    queue->notFull.TimedWaitWithManualClear(helper);
  }
}

void ReceiveLightMessageQueue(uintptr_t* value, LightMessageQueueType* queue) {
  uintptr_t message = 0;
  while (!TryReceiveOrClear(&message, queue)) {
    queue->notEmpty.WaitWithManualClear();
  }

  *value = message;
}

bool TryReceiveLightMessageQueue(uintptr_t* value,
  LightMessageQueueType* queue) {
  queue->lock.Lock();
  const bool isReceived = DequeueUnsafe(value, queue);
  queue->lock.Unlock();

  if (isReceived) {
    queue->notFull.SignalWithManualClear();
  }

  return isReceived;
}

bool TimedReceiveLightMessageQueue(uintptr_t* value,
  LightMessageQueueType* queue, TimeSpan timeout) {
  const detail::TimeoutHelper helper = detail::MakeLightTimeout(timeout);
  uintptr_t message = 0;

  while (true) {
    if (TryReceiveOrClear(&message, queue)) {
      *value = message;
      return true;
    }

    if (detail::IsLightTimeoutExpired(helper)) {
      return false;
    }

    queue->notEmpty.TimedWaitWithManualClear(helper);
  }
}

void PeekLightMessageQueue(uintptr_t* value,
  const LightMessageQueueType* queue) {
  auto* mutableQueue = const_cast<LightMessageQueueType*>(queue);
  uintptr_t message = 0;

  while (!TryPeekOrClear(&message, mutableQueue)) {
    mutableQueue->notEmpty.WaitWithManualClear();
  }

  *value = message;
}

bool TryPeekLightMessageQueue(uintptr_t* value,
  const LightMessageQueueType* queue) {
  auto* mutableQueue = const_cast<LightMessageQueueType*>(queue);
  mutableQueue->lock.Lock();
  const bool isPeeked = PeekUnsafe(value, queue);
  mutableQueue->lock.Unlock();
  return isPeeked;
}

bool TimedPeekLightMessageQueue(uintptr_t* value,
  const LightMessageQueueType* queue, TimeSpan timeout) {
  auto* mutableQueue = const_cast<LightMessageQueueType*>(queue);
  const detail::TimeoutHelper helper = detail::MakeLightTimeout(timeout);
  uintptr_t message = 0;

  while (true) {
    if (TryPeekOrClear(&message, mutableQueue)) {
      *value = message;
      return true;
    }

    if (detail::IsLightTimeoutExpired(helper)) {
      return false;
    }

    mutableQueue->notEmpty.TimedWaitWithManualClear(helper);
  }
}

}
