/*
 * SPDX-License-Identifier: MIT
 * Origin: musl src/exit/quick_exit.c and src/exit/at_quick_exit.c.
 * Revision: 57b97b42bdecafd81c4967a10aef6eaf43d3fcb8.
 * Copyright (c) 2005-2014 Rich Felker, et al.
 * License: https://git.musl-libc.org/cgit/musl/tree/COPYRIGHT
 * The full MIT notice is included in src/rtld/string.cpp.
 */

#include "libc/exit.hpp"

#include <stddef.h>
#include <stdint.h>

#include "nn/os/synchronization.hpp"

namespace {

struct QuickExitState {
  int32_t count;
  nn::os::SdkMutexType mutex;
  void (*callbacks[32])();
};

static_assert(sizeof(QuickExitState) == 264);
static_assert(offsetof(QuickExitState, mutex) == 4);
static_assert(offsetof(QuickExitState, callbacks) == 8);

QuickExitState quick_exit_state;

}

extern "C" void LockLibcMutex(nn::os::SdkMutexType* mutex) {
  mutex->Lock();
}

extern "C" void UnlockLibcMutex(nn::os::SdkMutexType* mutex) {
  mutex->Unlock();
}

extern "C" void LockQuickExitState(nn::os::SdkMutexType* mutex) {
  LockLibcMutex(mutex);
}

extern "C" void UnlockQuickExitState(nn::os::SdkMutexType* mutex) {
  UnlockLibcMutex(mutex);
}

extern "C" void RunQuickExitCallbacks() {
  LockQuickExitState(&quick_exit_state.mutex);

  while (quick_exit_state.count > 0) {
    auto callback = quick_exit_state.callbacks[--quick_exit_state.count];
    UnlockQuickExitState(&quick_exit_state.mutex);
    callback();
    LockQuickExitState(&quick_exit_state.mutex);
  }

  // The exit path retains the lock after the final callback.
}

extern "C" int at_quick_exit(void (*callback)()) {
  LockQuickExitState(&quick_exit_state.mutex);
  int result = 0;

  if (quick_exit_state.count == 32) {
    result = -1;
  }
  else {
    quick_exit_state.callbacks[quick_exit_state.count++] = callback;
  }

  UnlockQuickExitState(&quick_exit_state.mutex);
  return result;
}

extern "C" [[noreturn]] void LibcExitProcess(int status);

extern "C" [[noreturn]] void _Exit(int status) {
  LibcExitProcess(status);
}

extern "C" [[noreturn]] void quick_exit(int status) {
  RunQuickExitCallbacks();
  _Exit(status);
}
