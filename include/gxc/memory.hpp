#pragma once

#include <cstddef>

namespace gxc {

using AllocateFunction = void* (*)(size_t size, size_t alignment,
  void* userData);
using FreeFunction = void (*)(void* pointer, void* userData);

void SetAllocator(AllocateFunction allocate, void* allocateData,
  FreeFunction free, void* freeData);
void SetAllocator(int heap, AllocateFunction allocate, void* allocateData,
  FreeFunction free, void* freeData);

void* Allocate(size_t size, size_t alignment);
void Free(void* pointer);
void* Allocate(int heap, size_t size, size_t alignment);
void Free(int heap, void* pointer);

int GetDefaultHeap();

}
