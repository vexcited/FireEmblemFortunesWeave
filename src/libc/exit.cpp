/*
 * SPDX-License-Identifier: MIT
 * Origin: musl src/exit/exit.c and the src/exit/atexit.c adapter.
 * Revision: 57b97b42bdecafd81c4967a10aef6eaf43d3fcb8.
 * Copyright (c) 2005-2014 Rich Felker, et al.
 * License: https://git.musl-libc.org/cgit/musl/tree/COPYRIGHT
 * The full MIT notice is included in src/rtld/string.cpp.
 */

#include "libc/exit.hpp"

#include "rtld/crt.hpp"
#include "rtld/crt_registration.hpp"

namespace nn::init::detail {

void InitializeRuntimeHooks();

}

extern "C" void FlushStreamsForExit();

extern "C" void RunExitCallbacks() {
}

extern "C" void InvokeExitCallback(void* callback) {
  reinterpret_cast<void (*)()>(callback)();
}

extern "C" int atexit(void (*callback)()) {
  return fw::rtld::RegisterCrtDestructor(
    InvokeExitCallback, reinterpret_cast<void*>(callback), 0);
}

extern "C" [[noreturn]] void exit(int status) {
  RunExitCallbacks();
  fw::rtld::FinalizeCrt();
  FlushStreamsForExit();
  nn::init::detail::InitializeRuntimeHooks();
  _Exit(status);
}
