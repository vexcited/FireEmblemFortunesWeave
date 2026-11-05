#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/detail/internal_light_primitives.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

struct LightMessageQueueType {
  uintptr_t* buffer;
  int32_t capacity;
  int32_t count;
  int32_t offset;
  bool isInitialized;
  detail::InternalBusyMutex lock;
  uint32_t reserved_1c;
  detail::InternalLightEvent notFull;
  uint32_t reserved_24;
  detail::InternalLightEvent notEmpty;
};

void InitializeLightMessageQueue(LightMessageQueueType* queue,
  uintptr_t* buffer, size_t capacity);
void FinalizeLightMessageQueue(LightMessageQueueType* queue);
void SendLightMessageQueue(LightMessageQueueType* queue, uintptr_t value);
bool TrySendLightMessageQueue(LightMessageQueueType* queue, uintptr_t value);
bool TimedSendLightMessageQueue(LightMessageQueueType* queue, uintptr_t value,
  TimeSpan timeout);
void JamLightMessageQueue(LightMessageQueueType* queue, uintptr_t value);
bool TryJamLightMessageQueue(LightMessageQueueType* queue, uintptr_t value);
bool TimedJamLightMessageQueue(LightMessageQueueType* queue, uintptr_t value,
  TimeSpan timeout);
void ReceiveLightMessageQueue(uintptr_t* value, LightMessageQueueType* queue);
bool TryReceiveLightMessageQueue(uintptr_t* value,
  LightMessageQueueType* queue);
bool TimedReceiveLightMessageQueue(uintptr_t* value,
  LightMessageQueueType* queue, TimeSpan timeout);
void PeekLightMessageQueue(uintptr_t* value,
  const LightMessageQueueType* queue);
bool TryPeekLightMessageQueue(uintptr_t* value,
  const LightMessageQueueType* queue);
bool TimedPeekLightMessageQueue(uintptr_t* value,
  const LightMessageQueueType* queue, TimeSpan timeout);

}
