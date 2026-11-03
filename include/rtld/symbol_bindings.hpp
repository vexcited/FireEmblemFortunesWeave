#pragma once

#include "rtld/module.hpp"

namespace fw::rtld {

using SymbolLookup = uintptr_t (*)(const char* name);
using ModuleSymbolLookup = uintptr_t (*)(Module* module, const char* name);
using BindingMessage = void (*)(const char* message);

// The error callback must not return.
void BindModuleSymbols(Module* module, uint8_t lazy, uintptr_t pltResolver,
  SymbolLookup lookup, ModuleSymbolLookup fallback, uint8_t warn,
  BindingMessage warning, BindingMessage error);

}
