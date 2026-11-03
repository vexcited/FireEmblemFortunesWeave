#include "rtld/symbol_bindings.hpp"

namespace fw::rtld {

static void RejectRel(BindingMessage error) {
  error("RoModule::RelocateRel is called");
  asm volatile("udf #0");
  __builtin_unreachable();
}

void BindModuleSymbols(Module* module, uint8_t lazy, uintptr_t pltResolver,
  SymbolLookup lookup, ModuleSymbolLookup fallback, uint8_t warn,
  BindingMessage warning, BindingMessage error) {
  if (module->relCount < module->relSize / 16) {
    RejectRel(error);
  }

  for (uint64_t index = module->relaCount;
    index < module->relaSize / sizeof(Rela); ++index) {
    const auto* table = reinterpret_cast<const Rela*>(module->relocations);
    const Rela& entry = table[index];
    uint32_t type = uint32_t(entry.info);

    if (type == 1024) {
      error("R_COPY is not supported");
      RejectRel(error);
    }

    if (type != 257 && type != 258 && type != 1025) {
      continue;
    }

    const char* strings = module->strings;
    const Symbol& symbol = module->symbols[entry.info >> 32];
    uint32_t name = symbol.name;
    uint8_t binding = symbol.info;
    uintptr_t value = 0;
    bool usedFallback = false;

    if (symbol.other & 3) {
      const Symbol* found = FindModuleSymbol(module, strings + name);

      if (found) {
        value = module->base + found->value;
      }
    }
    else {
      value = lookup(strings + name);

      if (fallback && !value) {
        value = fallback(module, strings + name);
        usedFallback = true;
      }
    }

    if (!value && (binding & 0xF0) != 0x20) {
      module->flags |= 8;

      if (warn & 1) {
        strings = module->strings;
        warning("[ro] warning: unresolved symbol = '");
        warning(strings + name);
        warning("'\n");
      }

      continue;
    }

    // The original also writes eight bytes for type 258 ABS32.
    *reinterpret_cast<uint64_t*>(module->base + entry.offset) =
      value + uint64_t(entry.addend);

    if (!value || (usedFallback &&
      (value < module->base || value >= module->base + module->size))) {
      module->flags |= 8;
    }
  }

  uint64_t size = module->jumpRelocationSize;

  if (!(module->flags & 2) && size >= 16) {
    error("RoModule::RelocatePltRel is called");
    __builtin_unreachable();
  }

  if (size >= sizeof(Rela)) {
    if (lazy & 1) {
      for (uint64_t index = 0; index < size / sizeof(Rela); ++index) {
        const auto* table = reinterpret_cast<const Rela*>(
          module->jumpRelocations);
        const Rela& entry = table[index];

        if (uint32_t(entry.info) == 1026) {
          uintptr_t base = module->base;
          uint64_t offset = entry.offset;
          uintptr_t value = *reinterpret_cast<uint64_t*>(base + offset) + base;

          if (module->reserved200 && module->reserved200 != value) {
            error("m_ArchData.defaultPltGot != defaultPltGot");
            goto immediate;
          }

          if (!module->reserved200) {
            module->reserved200 = value;
          }

          *reinterpret_cast<uint64_t*>(base + offset) = value;
          size = module->jumpRelocationSize;
        }
      }
    }
    else {
    immediate:
      for (uint64_t index = 0; index < size / sizeof(Rela); ++index) {
        const auto* table = reinterpret_cast<const Rela*>(
          module->jumpRelocations);
        const Rela& entry = table[index];

        if (uint32_t(entry.info) != 1026) {
          continue;
        }

        uintptr_t base = module->base;
        uint64_t offset = entry.offset;
        uintptr_t defaultTarget =
          *reinterpret_cast<uint64_t*>(base + offset) + base;

        if (module->reserved200 && module->reserved200 != defaultTarget) {
          error("m_ArchData.defaultPltGot != defaultPltGot");
          goto immediate;
        }

        if (!module->reserved200) {
          module->reserved200 = defaultTarget;
        }

        const char* strings = module->strings;
        const Symbol& symbol = module->symbols[entry.info >> 32];
        uint32_t name = symbol.name;
        uint8_t binding = symbol.info;
        uintptr_t value = 0;

        if (symbol.other & 3) {
          const Symbol* found = FindModuleSymbol(module, strings + name);

          if (found) {
            value = module->base + found->value;
          }
        }
        else {
          value = lookup(strings + name);

          if (fallback && !value) {
            value = fallback(module, strings + name);
          }
        }

        if (value || (binding & 0xF0) == 0x20) {
          defaultTarget = value + uint64_t(entry.addend);
        }
        else if (warn & 1) {
          strings = module->strings;
          warning("[ro] warning: unresolved symbol = '");
          warning(strings + name);
          warning("'\n");
        }

        *reinterpret_cast<uint64_t*>(base + offset) = defaultTarget;
        size = module->jumpRelocationSize;
      }
    }
  }

  if (module->globalOffsetTable) {
    auto* got = reinterpret_cast<uint64_t*>(module->globalOffsetTable);
    got[1] = reinterpret_cast<uintptr_t>(module);
    got[2] = pltResolver;
  }
}

}
