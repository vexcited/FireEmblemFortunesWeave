#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::ro::detail {

struct Elf64Symbol {
  uint32_t name;
  uint8_t info;
  uint8_t other;
  uint16_t sectionIndex;
  uint64_t value;
  uint64_t size;
};

struct Elf64Rela {
  uint64_t offset;
  uint64_t info;
  int64_t addend;
};

enum ModuleFlag : uint8_t {
  ModuleFlag_NotReferenced = 1 << 0,
  ModuleFlag_PltIsRela = 1 << 1,
};

// Modules sit on circular lists whose head is a node of its own.
struct RoModule {
  RoModule* pPrevious;
  RoModule* pNext;
  const Elf64Rela* pPltRelocations;
  const Elf64Rela* pRelocations;
  uint8_t reserved20[0x8];
  uintptr_t baseAddress;
  uint8_t reserved30[0x8];
  size_t pltRelocationsSize;
  uint8_t reserved40[0x20];
  const char* pStrings;
  const Elf64Symbol* pSymbols;
  uint8_t reserved70[0x10];
  size_t relocationsSize;
  size_t relSize;
  size_t relCount;
  size_t relativeCount;
  uint8_t reserveda0[0x18];
  size_t size;
  uint8_t reservedc0[0x3];
  uint8_t flags;
  uint8_t reservedc4[0x4];
  uintptr_t lazyBindEntry;

  void BindVariables(const RoModule* pOther);
  void RestoreFunctions(RoModule* pOther, void (*log)(const char* pText));
  void RestoreVariables(RoModule* pOther);
  void RevertReference(RoModule* pOther, void (*log)(const char* pText));
};

static_assert(offsetof(RoModule, baseAddress) == 0x28);
static_assert(offsetof(RoModule, pltRelocationsSize) == 0x38);
static_assert(offsetof(RoModule, pStrings) == 0x60);
static_assert(offsetof(RoModule, relocationsSize) == 0x80);
static_assert(offsetof(RoModule, size) == 0xb8);
static_assert(offsetof(RoModule, flags) == 0xc3);
static_assert(offsetof(RoModule, lazyBindEntry) == 0xc8);

}
