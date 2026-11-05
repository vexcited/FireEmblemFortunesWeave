#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/memory_permission.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct SharedMemoryType {
  enum State : uint8_t {
    State_NotInitialized,
    State_Initialized,
    State_Mapped,
  };

  uint8_t state;
  bool isHandleManaged;
  bool isAllocated;
  void* address;
  size_t size;
  uint32_t handle;
  uint8_t reserved_1c[0x20];
  detail::InternalCriticalSection lock;
};

static_assert(sizeof(SharedMemoryType) == 64);

Result CreateSharedMemory(SharedMemoryType* sharedMemory, size_t size,
  MemoryPermission myPermission, MemoryPermission otherPermission);
void AttachSharedMemory(SharedMemoryType* sharedMemory, size_t size,
  uint32_t handle, bool managed);
void DestroySharedMemory(SharedMemoryType* sharedMemory);
void* MapSharedMemory(SharedMemoryType* sharedMemory,
  MemoryPermission permission);
void UnmapSharedMemory(SharedMemoryType* sharedMemory);
void* GetSharedMemoryAddress(const SharedMemoryType* sharedMemory);
size_t GetSharedMemorySize(const SharedMemoryType* sharedMemory);
uint32_t GetSharedMemoryHandle(const SharedMemoryType* sharedMemory);

namespace detail {

struct SharedMemoryImplByHorizon {
  static Result Create(uint32_t* handle, size_t size,
    MemoryPermission myPermission, MemoryPermission otherPermission);
  static void Close(uint32_t handle);
  static Result Map(void** address, uint32_t handle, size_t size,
    MemoryPermission permission);
  static void Unmap(uint32_t handle, void* address, size_t size);
};

}

}
