#pragma once

#include <new>
#include <utility>

#include "fs/memory.hpp"

namespace snd {

extern fs::Memory* g_memory;

template <typename T, typename... Args>
T* create(Args&&... args) {
  return new (g_memory->alloc(sizeof(T), 32)) T(std::forward<Args>(args)...);
}

template <typename T>
void destroy(T* object) {
  object->~T();
  g_memory->free(object);
}

}
