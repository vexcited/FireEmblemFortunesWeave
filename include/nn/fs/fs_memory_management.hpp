#pragma once

#include <stddef.h>

namespace nn {

class MemoryResource;

}

namespace nn::fs {

using AllocateFunction = void* (*)(size_t size);
using DeallocateFunction = void (*)(void* pointer, size_t size);

void SetAllocator(AllocateFunction allocator, DeallocateFunction deallocator);

namespace detail {

void LockAllocateMutex();
void UnlockAllocateMutex();
void* AllocateUnsafe(size_t size);
void DeallocateUnsafe(void* pointer, size_t size);
MemoryResource* GetMemoryResource();

}

}
