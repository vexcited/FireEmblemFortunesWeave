#include "rtld/global_symbols.hpp"

namespace fw::rtld {

ModuleList AutoLoadList;

uintptr_t FindGlobalSymbol(const char* name) {
  const auto* sentinel = reinterpret_cast<const Module*>(&AutoLoadList);

  for (const Module* module = AutoLoadList.next; module != sentinel;
    module = module->next) {
    const Symbol* symbol = FindModuleSymbol(module, name);

    if (symbol && symbol->info >= 16) {
      return module->base + symbol->value;
    }
  }

  return 0;
}

}
