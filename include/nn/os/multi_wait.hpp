#pragma once

#include "nn/os/synchronization.hpp"

namespace nn::os {

struct ThreadType;

namespace detail {

struct MultiWaitHolderBase;
struct MultiWaitImpl;

struct MultiWaitListNode {
  MultiWaitListNode* next;
  MultiWaitListNode* previous;
};

struct MultiWaitHolderDispatch {
  int (*is_signaled)(const MultiWaitHolderBase*);
  int (*add_to_object_list)(MultiWaitHolderBase*);
  void (*remove_from_object_list)(MultiWaitHolderBase*);
  bool (*get_native_handle)(const MultiWaitHolderBase*, uint32_t*);
  int64_t (*get_absolute_time_to_wakeup)(const MultiWaitHolderBase*);
};

struct MultiWaitHolderBase {
  const MultiWaitHolderDispatch* dispatch;
  MultiWaitListNode multi_wait_node;
  MultiWaitListNode object_node;
  MultiWaitImpl* owner;
};

struct MultiWaitHolderOfThread : MultiWaitHolderBase {
  ThreadType* thread;
  uintptr_t user_data;

  int IsSignaled() const;
  int AddToObjectList();
  void RemoveFromObjectList();
};

struct MultiWaitImplByHorizon {
  uint32_t thread_handle;

  void CancelWait();
};

struct MultiWaitImpl {
  MultiWaitListNode holders;
  MultiWaitHolderBase* signaled_holder;
  int64_t wait_time;
  InternalCriticalSection lock;
  MultiWaitImplByHorizon platform;

  void NotifyAndWakeupThread(MultiWaitHolderBase* holder);
  MultiWaitHolderBase* AddToEachObjectListAndCheckObjectState();
  void RemoveFromEachObjectList();
};

bool GetUserWaitNativeHandle(const MultiWaitHolderBase* holder,
                             uint32_t* output);
int64_t GetThreadAbsoluteTimeToWakeup(const MultiWaitHolderBase* holder);

}

struct MultiWaitType {
  uint8_t initialized;
  uint8_t reserved[7];
  detail::MultiWaitImpl implementation;
};

struct MultiWaitHolderType {
  alignas(8) uint8_t storage[64];
};

void InitializeMultiWait(MultiWaitType* wait);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder, ThreadType* thread);
void FinalizeMultiWaitHolder(MultiWaitHolderType* holder);
void LinkMultiWaitHolder(MultiWaitType* wait, MultiWaitHolderType* holder);
void UnlinkMultiWaitHolder(MultiWaitHolderType* holder);
void UnlinkAllMultiWaitHolder(MultiWaitType* wait);
void MoveAllMultiWaitHolder(MultiWaitType* destination, MultiWaitType* source);
void SetMultiWaitHolderUserData(MultiWaitHolderType* holder, uintptr_t value);
uintptr_t GetMultiWaitHolderUserData(const MultiWaitHolderType* holder);

}
