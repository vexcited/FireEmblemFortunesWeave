#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::nlibsdk {

struct __attribute__((may_alias)) PosixThreadAttributes {
  size_t stack_size;
  uint64_t reserved08;
  void* stack;
  uint32_t detached;
  uint32_t inherit_schedule;
  uint32_t policy;
  int32_t priority;
  uint64_t affinity;
  uint64_t reserved30;
};

int InitializePosixThreadAttributes(PosixThreadAttributes* attributes)
  asm("pthread_attr_init");
int DestroyPosixThreadAttributes(PosixThreadAttributes* attributes)
  asm("pthread_attr_destroy");
int GetPosixStackSize(const PosixThreadAttributes* attributes, size_t* size)
  asm("pthread_attr_getstacksize");
int SetPosixStackSize(PosixThreadAttributes* attributes, size_t size)
  asm("pthread_attr_setstacksize");
int GetPosixDetachState(const PosixThreadAttributes* attributes, int* state)
  asm("pthread_attr_getdetachstate");
int SetPosixDetachState(PosixThreadAttributes* attributes, int state)
  asm("pthread_attr_setdetachstate");
int GetPosixStack(const PosixThreadAttributes* attributes, void** stack,
  size_t* size) asm("pthread_attr_getstack");
int SetPosixStack(PosixThreadAttributes* attributes, void* stack, size_t size)
  asm("pthread_attr_setstack");
int GetPosixScope(const PosixThreadAttributes* attributes, int* scope)
  asm("pthread_attr_getscope");
int SetPosixScope(PosixThreadAttributes* attributes, int scope)
  asm("pthread_attr_setscope");
int GetPosixSchedulePolicy(const PosixThreadAttributes* attributes, int* policy)
  asm("pthread_attr_getschedpolicy");
int SetPosixSchedulePolicy(PosixThreadAttributes* attributes, int policy)
  asm("pthread_attr_setschedpolicy");
int GetPosixScheduleParameter(const PosixThreadAttributes* attributes,
  int* priority) asm("pthread_attr_getschedparam");
int SetPosixScheduleParameter(PosixThreadAttributes* attributes,
  const int* priority) asm("pthread_attr_setschedparam");
int GetPosixInheritSchedule(const PosixThreadAttributes* attributes, int* mode)
  asm("pthread_attr_getinheritsched");
int SetPosixInheritSchedule(PosixThreadAttributes* attributes, int mode)
  asm("pthread_attr_setinheritsched");
int GetPosixAffinity(const PosixThreadAttributes* attributes, size_t size,
  uint64_t* mask) asm("pthread_attr_getaffinity_np");
int SetPosixAffinity(PosixThreadAttributes* attributes, size_t size,
  const uint64_t* mask) asm("pthread_attr_setaffinity_np");

namespace detail {
void CopyDefaultPosixAttributes(PosixThreadAttributes* attributes);
}

}
