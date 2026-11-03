#pragma once

#include "rtld/module.hpp"

namespace fw::rtld {

struct ModuleList {
  Module* previous;
  Module* next;
};

extern ModuleList AutoLoadList;

uintptr_t FindGlobalSymbol(const char* name);

}
