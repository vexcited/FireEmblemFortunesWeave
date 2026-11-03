#pragma once

#include <stdint.h>

namespace fw::rtld {

struct DynamicEntry {
  int64_t tag;
  uint64_t value;
};

struct Rela {
  uint64_t offset;
  uint64_t info;
  int64_t addend;
};

static_assert(sizeof(DynamicEntry) == 16);
static_assert(sizeof(Rela) == 24);

void BootstrapRelocate(uintptr_t base, const DynamicEntry* dynamic);

}
