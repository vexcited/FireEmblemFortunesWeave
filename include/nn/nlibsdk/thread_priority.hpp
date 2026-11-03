#pragma once

namespace nn::nlibsdk {

int GetMinimumSchedulerPriority(int policy) asm("sched_get_priority_min");
int GetMaximumSchedulerPriority(int policy) asm("sched_get_priority_max");
int GetDefaultThreadPriority(int* priority)
  asm("nnmem_nlib_thread_priority_default");

}
