#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"

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

struct MultiWaitHolderOfNativeHandle : MultiWaitHolderBase {
  uint32_t handle;
  uint32_t reserved;
  uintptr_t user_data;

  int IsSignaled() const;
  bool GetNativeHandle(uint32_t* output) const;
};

struct MultiWaitImplByHorizon {
  uint32_t thread_handle;

  void CancelWait();
  Result WaitSynchronizationN(int* output, int count, uint32_t* handles,
                              int capacity, int64_t timeout);
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
  int ConstructObjectsArray(uint32_t* handles, MultiWaitHolderBase** holders,
                            int capacity);
  MultiWaitHolderBase* RecalcMultiWaitTimeout(TimeSpan* output,
                                              TimeSpan deadline);

  template <bool Reply>
  Result InternalWaitAnyImpl(MultiWaitHolderBase** output, int* output_index,
                             bool infinite, TimeSpan time,
                             uint32_t reply_target, Span<uint32_t> handles,
                             int existing_count);

  template <bool Reply>
  Result WaitAnyImpl(MultiWaitHolderBase** output, int* output_index,
                     bool infinite, TimeSpan time, uint32_t reply_target,
                     Span<uint32_t> handles, int existing_count);
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
void FinalizeMultiWait(MultiWaitType* wait);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder, ThreadType* thread);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder, uint32_t handle);
void FinalizeMultiWaitHolder(MultiWaitHolderType* holder);
MultiWaitHolderType* WaitAny(MultiWaitType* wait);
MultiWaitHolderType* TryWaitAny(MultiWaitType* wait);
MultiWaitHolderType* TimedWaitAny(MultiWaitType* wait, TimeSpan timeout);
void LinkMultiWaitHolder(MultiWaitType* wait, MultiWaitHolderType* holder);
void UnlinkMultiWaitHolder(MultiWaitHolderType* holder);
void UnlinkAllMultiWaitHolder(MultiWaitType* wait);
void MoveAllMultiWaitHolder(MultiWaitType* destination, MultiWaitType* source);
void SetMultiWaitHolderUserData(MultiWaitHolderType* holder, uintptr_t value);
uintptr_t GetMultiWaitHolderUserData(const MultiWaitHolderType* holder);

}
