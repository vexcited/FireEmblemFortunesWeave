#pragma once

#include "rtld/global_symbols.hpp"
#include "rtld/symbol_bindings.hpp"

namespace fw::rtld {

extern ModuleList ManualLoadList;
extern uint8_t LoaderDebugFlags;
extern ModuleSymbolLookup ManualLookup;

void InitializeLoader(uintptr_t base, const DynamicEntry* dynamic);
void OnLoaderDynamicTag(int64_t tag, uint64_t value);
void OnModuleDynamicTag(int64_t tag, uint64_t value);

}
