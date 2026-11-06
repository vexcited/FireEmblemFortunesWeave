#include <stdlib.h>
#include <string.h>

#include "nandroid/MovieHeap.h"
#include "nn/diag/diag_abort.hpp"
#include "nn/lmem/exp_heap.hpp"
#include "nn/lmem/exp_heap_inspection.hpp"
#include "nn/movie/detail/movie_message.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t size, AllocatorInfo* allocatorInfo);
void* AllocateMemory(size_t alignment, size_t size,
  AllocatorInfo* allocatorInfo);
void FreeMemory(void* address, AllocatorInfo* allocatorInfo);

namespace {

inline void UpdateUsage(AllocatorInfo* allocatorInfo) {
  if (allocatorInfo->size == 0) {
    return;
  }
  if (allocatorInfo->type == AllocatorType_ExpHeap) {
    allocatorInfo->usedSize = allocatorInfo->size -
      lmem::GetExpHeapTotalFreeSize(*allocatorInfo->pExpHeap);
  }
  else if (allocatorInfo->type == AllocatorType_StandardAllocator) {
    const size_t freeSize = allocatorInfo->allocator->GetTotalFreeSize();
    allocatorInfo->usedSize = allocatorInfo->size - freeSize;
    allocatorInfo->freeSize = freeSize;
    allocatorInfo->allocatableSize =
      allocatorInfo->allocator->GetAllocatableSize();
  }
  if (allocatorInfo->usedSize > allocatorInfo->peakUsedSize) {
    allocatorInfo->peakUsedSize = allocatorInfo->usedSize;
  }
}

}

void* AllocateMemory(size_t size, AllocatorInfo* allocatorInfo) {
  void* address = nullptr;
  switch (allocatorInfo->type) {
    case AllocatorType_StandardAllocator:
      address = allocatorInfo->allocator->Allocate(size);
      break;
    case AllocatorType_ExpHeap:
      address = lmem::AllocateFromExpHeap(*allocatorInfo->pExpHeap, size);
      break;
    case AllocatorType_StandardLibrary:
      address = malloc(size);
      break;
    case AllocatorType_Callback: {
      AllocatorCallbacks* callbacks = allocatorInfo->pCallbacks;
      if (callbacks->allocate != nullptr) {
        address = callbacks->allocate(size, 16, callbacks->userData);
      }
      break;
    }
    default:
      break;
  }

  if (HeapMemoryManager::GetInstance().IsStatisticsEnabled()) {
    const uintptr_t value = reinterpret_cast<uintptr_t>(address);
    if (allocatorInfo->firstAddress == 0) {
      allocatorInfo->firstAddress = value;
    }
    if (allocatorInfo->blockSize != 0 &&
      allocatorInfo->blockSize == value - allocatorInfo->firstAddress) {
      ++allocatorInfo->blockCount;
    }
    UpdateUsage(allocatorInfo);
  }
  return address;
}

void FreeMemory(void* address, AllocatorInfo* allocatorInfo) {
  switch (allocatorInfo->type) {
    case AllocatorType_StandardAllocator:
      allocatorInfo->allocator->Free(address);
      break;
    case AllocatorType_ExpHeap:
      lmem::FreeToExpHeap(*allocatorInfo->pExpHeap, address);
      break;
    case AllocatorType_StandardLibrary:
      free(address);
      break;
    case AllocatorType_Callback: {
      AllocatorCallbacks* callbacks = allocatorInfo->pCallbacks;
      if (address != nullptr && callbacks->free != nullptr) {
        callbacks->free(address, callbacks->userData);
      }
      break;
    }
    default:
      break;
  }

  if (HeapMemoryManager::GetInstance().IsStatisticsEnabled()) {
    UpdateUsage(allocatorInfo);
  }
}

namespace {

inline AllocatorInfo* GetCurrentAllocatorInfo() {
  return reinterpret_cast<AllocatorInfo*>(
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

}

}

using nn::movie::detail::AllocatorInfo;
using nn::movie::detail::AllocatorType_StandardAllocator;
using nn::movie::detail::GetCurrentAllocatorInfo;

extern "C" {

void* MovieMalloc(size_t size) {
  return nn::movie::detail::AllocateMemory(size, GetCurrentAllocatorInfo());
}

void* MovieCalloc(size_t count, size_t size) {
  const size_t total = count * size;
  void* address =
    nn::movie::detail::AllocateMemory(total, GetCurrentAllocatorInfo());
  if (address != nullptr) {
    memset(address, 0, total);
  }
  return address;
}

void* MovieAlignedAlloc(size_t alignment, size_t size) {
  return nn::movie::detail::AllocateMemory(alignment, size,
    GetCurrentAllocatorInfo());
}

void MovieFree(void* address) {
  if (address == nullptr) {
    return;
  }
  nn::movie::detail::FreeMemory(address, GetCurrentAllocatorInfo());
}

char* MovieStrdup(const char* string) {
  if (string == nullptr) {
    return nullptr;
  }
  const size_t length = strlen(string);
  char* copy = static_cast<char*>(
    nn::movie::detail::AllocateMemory(length + 1, GetCurrentAllocatorInfo()));
  if (copy == nullptr) {
    return nullptr;
  }
  return strcpy(copy, string);
}

size_t MovieMallocUsableSize(void* address) {
  if (address == nullptr) {
    return 0;
  }
  AllocatorInfo* allocatorInfo = GetCurrentAllocatorInfo();
  NN_ABORT_UNLESS(allocatorInfo->type == AllocatorType_StandardAllocator);
  return allocatorInfo->allocator->GetSizeOf(address);
}

}
