#pragma once

#include "rtld/module.hpp"

namespace fw::rtld {

void ProtectModuleMemory(uintptr_t start, uintptr_t boundary, uintptr_t end,
  const Module* module);

}
