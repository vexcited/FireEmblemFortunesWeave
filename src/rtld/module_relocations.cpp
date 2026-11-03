#include "rtld/module_relocations.hpp"

namespace fw::rtld {

Module* RelocateModule(Module* module, RelocationError error) {
  if (module->relCount) {
    error("RoModule::FixRelativeRel is called");
    asm volatile("udf #0");
    __builtin_unreachable();
  }

  uintptr_t base = module->base;
  uint64_t count = module->relaCount;
  auto* rela = reinterpret_cast<const Rela*>(module->relocations);

  for (uint64_t index = 0; index < count; ++index) {
    const Rela& entry = rela[index];

    if (uint32_t(entry.info) == 1027) {
      *reinterpret_cast<uint64_t*>(base + entry.offset) =
        base + uint64_t(entry.addend);
    }
  }

  base = module->base;
  const uint64_t* relr = nullptr;
  uint64_t size = 0;

  for (auto* dynamic = module->dynamic; dynamic->tag; ++dynamic) {
    if (dynamic->tag == 35) {
      size = dynamic->value;
    }
    else if (dynamic->tag == 36) {
      relr = reinterpret_cast<const uint64_t*>(base + dynamic->value);
    }
  }

  if (!relr) {
    return module;
  }

  uintptr_t cursor = 0;

  for (uint64_t index = 0; index < size / 8; ++index) {
    uint64_t entry = relr[index];

    if (!(entry & 1)) {
      cursor = base + entry;
      *reinterpret_cast<uint64_t*>(cursor) += base;
      cursor += 8;
    }
    else {
      entry >>= 1;

      while (entry) {
        unsigned bit = __builtin_ctzll(entry);
        *reinterpret_cast<uint64_t*>(cursor + bit * 8) += base;
        entry &= entry - 1;
      }

      cursor += 504;
    }
  }

  return module;
}

}
