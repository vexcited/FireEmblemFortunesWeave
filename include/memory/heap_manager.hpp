#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/mem/standard_allocator.hpp"

namespace fw::memory {

struct HeapPool {
  nn::mem::StandardAllocator allocator;
  void* backing;
};

struct HeapConfig {
  const char* name;
  unsigned char unknown_08[8];
  size_t size;
  unsigned char unknown_18[8];
};

struct HeapManager {
  unsigned char unknown_00[0x38];
  nn::mem::StandardAllocator primary;
  HeapPool pools[9];
  uint8_t allocation_failed;
  unsigned char unknown_351[7];
  const char* failed_pool_name;
  size_t failed_pool_size;
  size_t total_free_size;
  size_t allocatable_size;

  void* Allocate(size_t size, size_t alignment, uint32_t pool_index);

  nn::mem::StandardAllocator& GetAllocator(uint32_t pool_index) {
    HeapPool& pool = pools[pool_index];
    return pool.backing == nullptr ? primary : pool.allocator;
  }
};

extern HeapManager* g_heap_manager;
extern HeapConfig g_heap_configs[9];

void* AllocateForFileSystem(size_t size);
void FreeForFileSystem(void* address, size_t size);

static_assert(sizeof(size_t) == 8);
static_assert(sizeof(HeapPool) == 0x50);
static_assert(offsetof(HeapPool, backing) == 0x48);
static_assert(sizeof(HeapConfig) == 0x20);
static_assert(offsetof(HeapConfig, size) == 0x10);
static_assert(offsetof(HeapManager, primary) == 0x38);
static_assert(offsetof(HeapManager, pools) == 0x80);
static_assert(offsetof(HeapManager, allocation_failed) == 0x350);
static_assert(offsetof(HeapManager, failed_pool_name) == 0x358);
static_assert(offsetof(HeapManager, failed_pool_size) == 0x360);
static_assert(offsetof(HeapManager, total_free_size) == 0x368);
static_assert(offsetof(HeapManager, allocatable_size) == 0x370);
static_assert(sizeof(HeapManager) == 0x378);

}
