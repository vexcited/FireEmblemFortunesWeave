#include "nn/os/shared_memory.hpp"

#include "nn/os/thread_manager.hpp"

namespace nn::os {

namespace {

detail::InternalCriticalSection* GetCurrentThreadLock() {
  uintptr_t tls;
  asm("mrs %0, tpidrro_el0" : "=r"(tls));
  auto* thread = *reinterpret_cast<ThreadType**>(tls + 0x1f8);
  return reinterpret_cast<detail::InternalCriticalSection*>(
    &thread->critical_section);
}

void UnmapSharedMemoryUnsafe(SharedMemoryType* sharedMemory) {
  if (sharedMemory->state != SharedMemoryType::State_Mapped) {
    return;
  }

  detail::SharedMemoryImplByHorizon::Unmap(sharedMemory->handle,
    sharedMemory->address, sharedMemory->size);

  if (sharedMemory->isAllocated) {
    sharedMemory->isAllocated = false;
  }

  sharedMemory->address = nullptr;
  sharedMemory->state = SharedMemoryType::State_Initialized;
}

}

Result CreateSharedMemory(SharedMemoryType* sharedMemory, size_t size,
  MemoryPermission myPermission, MemoryPermission otherPermission) {
  uint32_t handle = 0;
  const Result result = detail::SharedMemoryImplByHorizon::Create(&handle,
    size, myPermission, otherPermission);

  if (result.IsFailure()) {
    return result;
  }

  sharedMemory->handle = handle;
  sharedMemory->isHandleManaged = true;
  sharedMemory->isAllocated = false;
  sharedMemory->address = nullptr;
  sharedMemory->size = size;
  sharedMemory->lock.Initialize();
  sharedMemory->state = SharedMemoryType::State_Initialized;
  return result;
}

void AttachSharedMemory(SharedMemoryType* sharedMemory, size_t size,
  uint32_t handle, bool managed) {
  sharedMemory->handle = handle;
  sharedMemory->isHandleManaged = managed;
  sharedMemory->isAllocated = false;
  sharedMemory->address = nullptr;
  sharedMemory->size = size;
  sharedMemory->lock.Initialize();
  sharedMemory->state = SharedMemoryType::State_Initialized;
}

void DestroySharedMemory(SharedMemoryType* sharedMemory) {
  if (sharedMemory->state == SharedMemoryType::State_Mapped) {
    UnmapSharedMemory(sharedMemory);
  }

  sharedMemory->state = SharedMemoryType::State_NotInitialized;

  if (sharedMemory->isHandleManaged) {
    detail::SharedMemoryImplByHorizon::Close(sharedMemory->handle);
  }

  sharedMemory->isHandleManaged = false;
  sharedMemory->address = nullptr;
  sharedMemory->size = 0;
  sharedMemory->handle = 0;
  sharedMemory->lock.Finalize();
}

void UnmapSharedMemory(SharedMemoryType* sharedMemory) {
  sharedMemory->lock.Enter();
  UnmapSharedMemoryUnsafe(sharedMemory);
  sharedMemory->lock.Leave();
}

void* MapSharedMemory(SharedMemoryType* sharedMemory,
  MemoryPermission permission) {
  auto* threadLock = GetCurrentThreadLock();
  threadLock->Enter();
  sharedMemory->lock.Enter();

  void* address = nullptr;
  const Result result = detail::SharedMemoryImplByHorizon::Map(&address,
    sharedMemory->handle, sharedMemory->size, permission);

  if (result.IsFailure()) {
    address = nullptr;
  }
  else {
    sharedMemory->isAllocated = true;
    sharedMemory->state = SharedMemoryType::State_Mapped;
    sharedMemory->address = address;
  }

  sharedMemory->lock.Leave();
  threadLock->Leave();
  return address;
}

void* GetSharedMemoryAddress(const SharedMemoryType* sharedMemory) {
  return sharedMemory->address;
}

size_t GetSharedMemorySize(const SharedMemoryType* sharedMemory) {
  return sharedMemory->size;
}

uint32_t GetSharedMemoryHandle(const SharedMemoryType* sharedMemory) {
  return sharedMemory->handle;
}

}
