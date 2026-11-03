#include "rtld/module_lifecycle.hpp"

#include "rtld/global_symbols.hpp"

namespace fw::rtld {

void InitializeModules() {
  auto* sentinel = reinterpret_cast<Module*>(&AutoLoadList);
  Module* first = AutoLoadList.next;

  if (first == sentinel) {
    return;
  }

  Module* cursor = sentinel;

  do {
    Module* previous = cursor == sentinel ? AutoLoadList.previous
                                          : cursor->previous;
    uintptr_t initialize = previous->initialize;

    if (initialize) {
      reinterpret_cast<void (*)()>(initialize)();
      cursor = cursor == sentinel ? AutoLoadList.previous : cursor->previous;
      first = AutoLoadList.next;
    }
    else {
      cursor = previous;
    }
  } while (cursor != first);
}

void FinalizeModules() {
  auto* sentinel = reinterpret_cast<Module*>(&AutoLoadList);

  for (Module* module = AutoLoadList.next; module != sentinel;
    module = module->next) {
    if (module->finalize) {
      reinterpret_cast<void (*)()>(module->finalize)();
    }
  }
}

}
