#include "rtld/relocations.hpp"

namespace fw::rtld {
namespace {

enum class DynamicTag : int64_t {
  RelaTable = 7,
  RelaEntrySize = 9,
  RelEntrySize = 19,
  RelrSize = 35,
  RelrTable = 36,
  RelrEntrySize = 37,
  RelaCount = 0x6FFFFFF9,
  RelCount = 0x6FFFFFFA,
};

constexpr uint32_t RelativeRelocation = 1027;

[[noreturn]] void InvalidBootstrapTable() {
  for (;;) {
    asm volatile("");
  }
}

}

void BootstrapRelocate(uintptr_t base, const DynamicEntry* dynamic) {
  const Rela* rela = nullptr;
  const uint64_t* relr = nullptr;
  uint64_t relaCount = 0;
  uint64_t relCount = 0;
  uint64_t relrSize = 0;

  for (; dynamic->tag != 0; ++dynamic) {
    switch (DynamicTag(dynamic->tag)) {
      case DynamicTag::RelaTable:
        rela = reinterpret_cast<const Rela*>(base + dynamic->value);
        break;
      case DynamicTag::RelaEntrySize:
        if (dynamic->value != 24) {
          InvalidBootstrapTable();
        }
        break;
      case DynamicTag::RelEntrySize:
        if (dynamic->value != 16) {
          InvalidBootstrapTable();
        }
        break;
      case DynamicTag::RelrSize:
        relrSize = dynamic->value;
        break;
      case DynamicTag::RelrTable:
        relr = reinterpret_cast<const uint64_t*>(base + dynamic->value);
        break;
      case DynamicTag::RelrEntrySize:
        if (dynamic->value != 8) {
          InvalidBootstrapTable();
        }
        break;
      case DynamicTag::RelaCount:
        relaCount = dynamic->value;
        break;
      case DynamicTag::RelCount:
        relCount = dynamic->value;
        break;
    }
  }

  if (relCount != 0) {
    InvalidBootstrapTable();
  }

  for (uint64_t index = 0; index < relaCount; ++index) {
    const Rela& entry = rela[index];

    if (uint32_t(entry.info) == RelativeRelocation) {
      *reinterpret_cast<uint64_t*>(base + entry.offset) =
        base + uint64_t(entry.addend);
    }
  }

  if (!relr) {
    return;
  }

  uintptr_t cursor = 0;

  for (uint64_t index = 0; index < relrSize / 8; ++index) {
    uint64_t entry = relr[index];

    if ((entry & 1) == 0) {
      cursor = base + entry;
      *reinterpret_cast<uint64_t*>(cursor) += base;
      cursor += 8;
    }
    else {
      entry >>= 1;

      while (entry != 0) {
        unsigned bit = __builtin_ctzll(entry);
        *reinterpret_cast<uint64_t*>(cursor + 8 * bit) += base;
        entry &= entry - 1;
      }

      cursor += 63 * 8;
    }
  }
}

}
