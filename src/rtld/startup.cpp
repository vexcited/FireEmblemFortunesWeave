#include "rtld/startup.hpp"
#include "rtld/module_metadata.hpp"
#include "rtld/module_relocations.hpp"

#include <stddef.h>

extern "C" {
uint32_t svcQueryMemory(void* memory, uint32_t* page, uintptr_t address);
uint32_t svcBreak(uint32_t reason, uintptr_t address, uint64_t size);
void* memset(void* destination, int value, size_t size);
}

namespace fw::rtld {

extern Module* LoaderModule;
extern const uint32_t* LoaderHeader;
extern SymbolLookup AutoLookup;
extern uintptr_t PltResolver;
extern void LoaderWarning(const char* message);
[[noreturn]] extern void LoaderError(const char* message);

ModuleList ManualLoadList;
uint8_t LoaderDebugFlags;
ModuleSymbolLookup ManualLookup;

namespace {

struct Mapping {
  uintptr_t address;
  uint64_t size;
  uint32_t state;
  uint32_t attribute;
  uint32_t permission;
  uint32_t references[3];
};

[[noreturn]] void Halt() {
  for (;;) {
    asm volatile("");
  }
}

uint32_t LoadWord(uintptr_t address) {
  uint32_t value;
  __builtin_memcpy(&value, reinterpret_cast<const void*>(address), 4);
  return value;
}

void LinkNext(Module* previous, Module* next, Module* sentinel) {
  if (previous == sentinel) {
    AutoLoadList.next = next;
  }
  else {
    previous->next = next;
  }
}

void Publish(Module* module, const char* name, uintptr_t value) {
  const Symbol* symbol = FindModuleSymbol(module, name);

  if (symbol && symbol->info >= 16) {
    *reinterpret_cast<uintptr_t*>(module->base + symbol->value) = value;
  }
}

}

void OnLoaderDynamicTag(int64_t, uint64_t) {
  svcBreak(0, 0, 0);
}

void OnModuleDynamicTag(int64_t, uint64_t) {
  svcBreak(0, 0, 0);
}

void InitializeLoader(uintptr_t base, const DynamicEntry* dynamic) {
  auto* sentinel = reinterpret_cast<Module*>(&AutoLoadList);
  AutoLoadList.previous = sentinel;
  AutoLoadList.next = sentinel;
  Module* runtime = LoaderModule;
  *runtime = {};
  runtime->previous = runtime;
  runtime->next = runtime;
  auto* manual = reinterpret_cast<Module*>(&ManualLoadList);
  ManualLoadList.previous = manual;
  ManualLoadList.next = manual;

  if (LoadWord(reinterpret_cast<uintptr_t>(LoaderHeader)) != 0x30444F4D) {
    Halt();
  }

  uintptr_t runtimeEnd =
    (reinterpret_cast<uintptr_t>(LoaderHeader) +
      LoadWord(reinterpret_cast<uintptr_t>(LoaderHeader) + 12) + 4095)
    & ~uintptr_t{4095};
  InitializeModule(runtime, base, runtimeEnd - base, dynamic, 0,
    OnLoaderDynamicTag);
  Module* last = runtime->previous;
  Module* previous = AutoLoadList.previous;
  last->next = sentinel;
  AutoLoadList.previous = last;
  runtime->previous = previous;
  LinkNext(previous, runtime, sentinel);

  uintptr_t address = 0;

  for (;;) {
    Mapping mapping = {};
    uint32_t page = 0;

    if (svcQueryMemory(&mapping, &page, address)) {
      Halt();
    }

    if ((mapping.permission & 4) && mapping.state == 3 &&
      mapping.address != base) {
      uintptr_t headerAddress = 0;
      ModuleMetadata metadata = {};

      if (!InspectModule(&headerAddress, &metadata, mapping.address)) {
        Halt();
      }

      uint32_t dynamicOffset = LoadWord(headerAddress + 4);
      uint32_t bssStart = LoadWord(headerAddress + 8);
      uint32_t bssEnd = LoadWord(headerAddress + 12);

      if (bssStart != bssEnd) {
        memset(reinterpret_cast<void*>(headerAddress + bssStart), 0,
          uint64_t(bssEnd) - bssStart);
      }

      auto* module = reinterpret_cast<Module*>(headerAddress +
        LoadWord(headerAddress + 24));
      module->previous = module;
      module->next = module;
      uint64_t size = ((headerAddress + bssEnd + 4095) & ~uintptr_t{4095})
        - mapping.address;

      if (mapping.size > size) {
        Halt();
      }

      InitializeModule(module, mapping.address, size,
        reinterpret_cast<const DynamicEntry*>(headerAddress + dynamicOffset),
        0, OnModuleDynamicTag);
      RelocateModule(module, LoaderError);
      last = module->previous;
      previous = AutoLoadList.previous;
      module->previous = previous;
      last->next = sentinel;
      LinkNext(previous, module, sentinel);
      AutoLoadList.previous = last;
    }

    uintptr_t next = mapping.address + mapping.size;

    if (next <= address) {
      break;
    }

    address = next;
  }

  Module* module = AutoLoadList.next;

  if (module != sentinel) {
    SymbolLookup lookup = AutoLookup;

    do {
      Publish(module, "_ZN2nn2ro6detail15g_pAutoLoadListE",
        reinterpret_cast<uintptr_t>(&AutoLoadList));
      Publish(module, "_ZN2nn2ro6detail17g_pManualLoadListE",
        reinterpret_cast<uintptr_t>(&ManualLoadList));
      Publish(module, "_ZN2nn2ro6detail14g_pRoDebugFlagE",
        reinterpret_cast<uintptr_t>(&LoaderDebugFlags));
      Publish(module, "_ZN2nn2ro6detail34g_pLookupGlobalAutoFunctionPointerE",
        reinterpret_cast<uintptr_t>(lookup));
      Publish(module, "_ZN2nn2ro6detail36g_pLookupGlobalManualFunctionPointerE",
        reinterpret_cast<uintptr_t>(&ManualLookup));
      module = module->next;
    } while (module != sentinel);

    module = AutoLoadList.next;

    if (module != sentinel) {
      uintptr_t resolver = PltResolver;
      lookup = AutoLookup;

      do {
        BindModuleSymbols(module, (module->flags & 4) == 0, resolver,
          lookup, ManualLookup, LoaderDebugFlags, LoaderWarning, LoaderError);
        module = module->next;
      } while (module != sentinel);
    }
  }
}

}
