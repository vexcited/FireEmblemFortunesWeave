#pragma once

#include <stdint.h>

#include "nn/os/synchronization.hpp"

namespace nn::nlibsdk::detail {

struct PosixRetirementQueue {
  uint32_t reserved00;
  os::SdkMutexType mutex;
  os::SdkConditionVariableType condition;
  uint8_t reserved0c[12];
  void** begin;
  void** end;
  void** capacity_end;
};

extern PosixRetirementQueue RetirementQueue;

void RetirePosixThread(void* thread);

}
