#pragma once

#include "nn/os/multi_wait.hpp"

namespace nn::os {

enum MessageQueueWaitType : int32_t {
  MessageQueueWaitType_NotFull = 1,
  MessageQueueWaitType_NotEmpty = 2
};

struct MessageQueueType {
  detail::MultiWaitListNode not_full_waiters;
  detail::MultiWaitListNode not_empty_waiters;
  uintptr_t* buffer;
  int32_t capacity;
  int32_t count;
  int32_t offset;
  uint8_t initialized;
  uint8_t reserved[3];
  mutable detail::InternalCriticalSection lock;
  mutable detail::InternalConditionVariableImplByHorizon not_full;
  mutable detail::InternalConditionVariableImplByHorizon not_empty;
};

void InitializeMessageQueue(MessageQueueType* queue, uintptr_t* buffer,
                            uintptr_t capacity);
void FinalizeMessageQueue(MessageQueueType* queue);
void SendMessageQueue(MessageQueueType* queue, uintptr_t message);
bool TrySendMessageQueue(MessageQueueType* queue, uintptr_t message);
bool TimedSendMessageQueue(MessageQueueType* queue, uintptr_t message,
                           TimeSpan time);
void JamMessageQueue(MessageQueueType* queue, uintptr_t message);
bool TryJamMessageQueue(MessageQueueType* queue, uintptr_t message);
bool TimedJamMessageQueue(MessageQueueType* queue, uintptr_t message,
                          TimeSpan time);
void ReceiveMessageQueue(uintptr_t* output, MessageQueueType* queue);
bool TryReceiveMessageQueue(uintptr_t* output, MessageQueueType* queue);
bool TimedReceiveMessageQueue(uintptr_t* output, MessageQueueType* queue,
                              TimeSpan time);
void PeekMessageQueue(uintptr_t* output, const MessageQueueType* queue);
bool TryPeekMessageQueue(uintptr_t* output, const MessageQueueType* queue);
bool TimedPeekMessageQueue(uintptr_t* output, const MessageQueueType* queue,
                           TimeSpan time);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder,
                               MessageQueueType* queue,
                               MessageQueueWaitType type);

namespace detail {

struct MultiWaitHolderOfMessageQueueNotFull : MultiWaitHolderBase {
  MessageQueueType* queue;
  uintptr_t user_data;

  int IsSignaled() const;
  int AddToObjectList();
  void RemoveFromObjectList();
};

struct MultiWaitHolderOfMessageQueueNotEmpty : MultiWaitHolderBase {
  MessageQueueType* queue;
  uintptr_t user_data;

  int IsSignaled() const;
  int AddToObjectList();
  void RemoveFromObjectList();
};

}
}
