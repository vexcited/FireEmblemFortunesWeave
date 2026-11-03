#pragma once

#include <stdint.h>

namespace nn::init {

using Callback = void (*)();

[[noreturn]] void Start(uintptr_t thread_handle, uintptr_t boundary,
  Callback ready, Callback initialize, Callback finalize);

}
