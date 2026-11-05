#include <stdint.h>
#include <stdlib.h>

#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_memory_management.hpp"
#include "nn/memory_resource.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::fs {

namespace {

bool g_IsDefaultAllocatorUsed = false;
os::SdkMutexType g_AllocateMutex = {};

void* DefaultAllocate(size_t size) {
  g_IsDefaultAllocatorUsed = true;
  return malloc(size);
}

void DefaultDeallocate(void* pointer, size_t) {
  free(pointer);
}

inline void* AllocateWithoutLock(AllocateFunction allocate, size_t size) {
  void* pointer = allocate(size);
  if ((reinterpret_cast<uintptr_t>(pointer) & (alignof(uint64_t) - 1)) !=
    0) {
    const Result result = ResultAllocatorAlignmentViolation();
    diag::detail::AbortImpl(&result);
  }
  return pointer;
}

class FileSystemMemoryResource : public MemoryResource {
protected:
  void* do_allocate(size_t bytes, size_t) override;
  void do_deallocate(void* pointer, size_t bytes, size_t) override;
};

FileSystemMemoryResource g_MemoryResource;
AllocateFunction g_AllocateFunction = DefaultAllocate;
DeallocateFunction g_DeallocateFunction = DefaultDeallocate;

void* FileSystemMemoryResource::do_allocate(size_t bytes, size_t) {
  g_AllocateMutex.Lock();
  void* pointer = AllocateWithoutLock(g_AllocateFunction, bytes);
  g_AllocateMutex.Unlock();
  return pointer;
}

void FileSystemMemoryResource::do_deallocate(void* pointer, size_t bytes,
  size_t) {
  if (pointer == nullptr) {
    return;
  }
  g_AllocateMutex.Lock();
  g_DeallocateFunction(pointer, bytes);
  g_AllocateMutex.Unlock();
}

}

void SetAllocator(AllocateFunction allocator, DeallocateFunction deallocator) {
  auto setAllocator = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(g_AllocateFunction == DefaultAllocate &&
      g_DeallocateFunction == DefaultDeallocate,
      ResultAllocatorAlreadyRegistered());
    NN_FS_RESULT_THROW_UNLESS(allocator != nullptr && deallocator != nullptr,
      ResultNullptrArgument());
    NN_FS_RESULT_THROW_UNLESS(!g_IsDefaultAllocatorUsed,
      ResultDefaultAllocatorUsed());
    g_AllocateFunction = allocator;
    g_DeallocateFunction = deallocator;
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, setAllocator(), "");
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

namespace detail {

void LockAllocateMutex() {
  g_AllocateMutex.Lock();
}

void UnlockAllocateMutex() {
  g_AllocateMutex.Unlock();
}

void* AllocateUnsafe(size_t size) {
  return AllocateWithoutLock(g_AllocateFunction, size);
}

void DeallocateUnsafe(void* pointer, size_t size) {
  g_DeallocateFunction(pointer, size);
}

void* Allocate(size_t size) {
  g_AllocateMutex.Lock();
  void* pointer = AllocateWithoutLock(g_AllocateFunction, size);
  g_AllocateMutex.Unlock();
  return pointer;
}

void Deallocate(void* pointer, size_t size) {
  if (pointer == nullptr) {
    return;
  }
  g_AllocateMutex.Lock();
  g_DeallocateFunction(pointer, size);
  g_AllocateMutex.Unlock();
}

MemoryResource* GetMemoryResource() {
  return &g_MemoryResource;
}

}

}
