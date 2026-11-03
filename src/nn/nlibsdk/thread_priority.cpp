#include "nn/nlibsdk/thread_priority.hpp"

#include <stdint.h>

#include "libc/errno.hpp"

namespace nn::nlibsdk {

int GetMinimumSchedulerPriority(int policy) {
  if (uint32_t(policy) < 2) {
    return 5;
  }

  *fw::libc::GetErrnoLocation() = 22;
  return -1;
}

int GetMaximumSchedulerPriority(int policy) {
  if (uint32_t(policy) < 2) {
    return 36;
  }

  *fw::libc::GetErrnoLocation() = 22;
  return -1;
}

int GetDefaultThreadPriority(int* priority) {
  int minimum = GetMinimumSchedulerPriority(0);
  int maximum = GetMaximumSchedulerPriority(0);
  *priority = (minimum + maximum) / 2;
  return 0;
}

}
