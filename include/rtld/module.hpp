#pragma once

#include <stddef.h>

#include "rtld/relocations.hpp"

namespace fw::rtld {

struct Symbol {
  uint32_t name;
  uint8_t info;
  uint8_t other;
  uint16_t section;
  uint64_t value;
  uint64_t size;
};

struct GnuHashHeader {
  uint32_t bucketCount;
  uint32_t firstSymbol;
  uint32_t bloomSize;
  uint32_t bloomShift;
};

struct Module {
  Module* previous;
  Module* next;
  uintptr_t jumpRelocations;
  uintptr_t relocations;
  uint64_t reserved32;
  uintptr_t base;
  const DynamicEntry* dynamic;
  uint64_t jumpRelocationSize;
  uintptr_t initialize;
  uintptr_t finalize;
  union {
    const uint32_t* buckets;
    const uint64_t* bloom;
  } hash;
  union {
    const uint32_t* chains;
    uint32_t bloomSize;
  } hashAuxiliary;
  const char* strings;
  const Symbol* symbols;
  uint64_t stringSize;
  uintptr_t globalOffsetTable;
  uint64_t relaSize;
  uint64_t relSize;
  uint64_t relCount;
  uint64_t relaCount;
  union {
    uint64_t chainCount;
    uint64_t bloomShift;
  } hashCount;
  union {
    uint64_t bucketCount;
    const GnuHashHeader* header;
  } hashTable;
  uint64_t soname;
  uint64_t size;
  uint8_t version;
  uint8_t reserved193[2];
  uint8_t flags;
  uint32_t reserved196;
  uint64_t reserved200;
};

using DynamicCallback = void (*)(int64_t tag, uint64_t value);

void InitializeModule(Module* module, uintptr_t base, uint64_t size,
  const DynamicEntry* dynamic, uint8_t flags, DynamicCallback callback);
const Symbol* FindModuleSymbol(const Module* module, const char* name);

static_assert(sizeof(Symbol) == 24);
static_assert(sizeof(GnuHashHeader) == 16);
static_assert(sizeof(Module) == 208);
static_assert(offsetof(Module, hash) == 80);
static_assert(offsetof(Module, hashCount) == 160);
static_assert(offsetof(Module, flags) == 195);

}
