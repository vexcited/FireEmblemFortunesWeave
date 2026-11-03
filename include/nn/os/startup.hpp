#pragma once

#include <stdint.h>

namespace nn::os::detail {

extern uint64_t g_OsBootParamter;
alignas(8) extern unsigned char g_OsResourceManagerStorage[1288];

}

extern "C" void nnosInitialize(uintptr_t thread_handle,
  uintptr_t argument_region);
