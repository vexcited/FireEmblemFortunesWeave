#pragma once

#include "nn/nlibsdk/posix_thread.hpp"
#include "nn/nlibsdk/posix_thread_retirement.hpp"
#include "nn/os/thread_api.hpp"
#include "posix_tls_internal.hpp"

namespace nn::nlibsdk::detail {

struct PosixThread {
  os::ThreadType thread;
  PosixThreadEntry entry;
  void* argument;
  void* result;
  uint8_t jump_buffer[312];
  PosixThreadStorage tls;
};

extern os::ThreadType RetirementWorker;

void RunPosixThread(void* argument);
int DetachPosixThread(PosixThread* thread);
[[noreturn]] void RunRetirementWorker(void* argument);
void JoinAndFreePosixThread(PosixThread* thread, void** result);
void SetDefaultPosixThreadName(PosixThread* thread);

}
