#pragma once

#include "nn/nlibsdk/posix_thread_attributes.hpp"

namespace nn::nlibsdk {

using PosixThreadHandle = uintptr_t;
using PosixThreadEntry = void* (*)(void*);

PosixThreadHandle GetPosixThread() asm("pthread_self");
int EqualPosixThreads(PosixThreadHandle first, PosixThreadHandle second)
  asm("pthread_equal");
int CreatePosixThread(PosixThreadHandle* output,
  const PosixThreadAttributes* attributes, PosixThreadEntry entry,
  void* argument) asm("pthread_create");
[[noreturn]] void ExitPosixThread(void* result) asm("pthread_exit");
int JoinPosixThread(PosixThreadHandle thread, void** result)
  asm("pthread_join");
int DetachPosixThread(PosixThreadHandle thread) asm("pthread_detach");

}
