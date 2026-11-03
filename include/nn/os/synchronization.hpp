#pragma once

#include <stdint.h>

#include "nn/os/time.hpp"

namespace nn::os {

enum ConditionVariableStatus {
  ConditionVariableStatus_Timeout,
  ConditionVariableStatus_NoTimeout
};

}

namespace nn::os::detail {

struct InternalCriticalSectionType {
  uint32_t value;
};

struct InternalCriticalSection {
  InternalCriticalSectionType state;

  void Initialize();
  void Finalize();
  void Enter();
  bool TryEnter();
  void Leave();
  bool IsLockedByCurrentThread() const;
};

struct InternalConditionVariableImplByHorizon {
  uint32_t value;

  InternalConditionVariableImplByHorizon();
  void Initialize();
  void Signal();
  void Broadcast();
  void Wait(InternalCriticalSectionType* lock);
  ConditionVariableStatus TimedWait(InternalCriticalSectionType* lock,
                                    const TimeoutHelper& timeout);
};

void InitializeInternalCriticalSection(InternalCriticalSectionType* state);
void FinalizeInternalCriticalSection(InternalCriticalSectionType* state);

}

namespace nn::os {

struct SdkMutexType {
  detail::InternalCriticalSection lock;

  void Initialize();
  void Lock();
  bool TryLock();
  void Unlock();
  bool IsLockedByCurrentThread() const;
};

struct SdkRecursiveMutexType {
  detail::InternalCriticalSection lock;
  uint32_t count;

  bool IsLockedByCurrentThread() const;
};

struct SdkConditionVariableType {
  detail::InternalConditionVariableImplByHorizon condition;

  void Initialize();
  void Signal();
  void Broadcast();
  void Wait(SdkMutexType& mutex);
  void Wait(SdkRecursiveMutexType& mutex);
  ConditionVariableStatus TimedWait(SdkMutexType& mutex, TimeSpan time);
  ConditionVariableStatus TimedWait(SdkRecursiveMutexType& mutex,
                                    TimeSpan time);
};

struct ReaderWriterLockType {
  detail::InternalCriticalSectionType lock;
  uint32_t state04;
  uint32_t reserved08;
  uint32_t counter0c;
  uint8_t initialized;
  uint8_t reserved11[7];
  uintptr_t owner;
  uint32_t counter20;
  uint32_t condition24;
  uint32_t condition28;
  uint32_t reserved2c;
};

void InitializeReaderWriterLock(ReaderWriterLockType* lock);

}
