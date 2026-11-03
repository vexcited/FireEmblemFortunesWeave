#pragma once

#include <stdint.h>

namespace nn::os::detail {

struct InternalCriticalSectionType {
  uint32_t value;
};

struct InternalCriticalSection {
  InternalCriticalSectionType state;

  void Initialize();
  void Enter();
  void Leave();
};

struct InternalConditionVariableImplByHorizon {
  uint32_t value;

  InternalConditionVariableImplByHorizon();
};

void InitializeInternalCriticalSection(InternalCriticalSectionType* state);

}

namespace nn::os {

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
