#include "rtld/lazy_bindings.hpp"

#include "rtld/diagnostics.hpp"
#include "rtld/startup.hpp"

namespace fw::rtld {

uintptr_t BindJumpSlot(Module* module, uint32_t index) {
  if (!(module->flags & 2)) {
    LoaderError("RoModule::BindJumpSlotRel is called");
  }

  const auto* table = reinterpret_cast<const Rela*>(module->jumpRelocations);
  const Rela& entry = table[index];
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
    ModuleSymbolLookup fallback = ManualLookup;
    value = FindGlobalSymbol(strings + name);

    if (fallback && !value) {
      value = fallback(module, strings + name);
    }
  }

  if (value) {
    value += uint64_t(entry.addend);
  }
  else if ((binding & 0xF0) != 0x20) {
    LoaderWarning("[rtld] Unresolved symbol: '");
    LoaderWarning(module->strings + name);
    LoaderWarning("'\n");
  }

  // Unlike eager binding, a missing weak symbol ignores the addend.
  *reinterpret_cast<uint64_t*>(module->base + entry.offset) = value;
  return value;
}

}
