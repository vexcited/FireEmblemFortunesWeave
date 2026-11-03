#pragma once

#include <stdint.h>

namespace fw::rtld {

struct ModuleMetadata {
  uint32_t version[3];
  uint32_t newerThan18;
};

bool HasModuleVersion(uintptr_t address);
bool InspectModule(uintptr_t* header, ModuleMetadata* metadata,
  uintptr_t address);

static_assert(sizeof(ModuleMetadata) == 16);

}
