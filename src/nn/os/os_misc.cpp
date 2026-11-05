#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/startup.hpp"
#include "nn/os/thread_info.hpp"

namespace nn::os {

struct UserExceptionInfo;
struct SdkLastThreadContext;

enum MemoryAttribute {
  MemoryAttribute_Normal,
  MemoryAttribute_Uncached,
};

using SdkUserExceptionHandler = bool (*)(UserExceptionInfo*);
using ThreadLocalAllocator = void* (*)(size_t, size_t);
using ThreadLocalDeallocator = void (*)(void*, size_t);

namespace detail {

extern bool g_UserExceptionHandlerValidityOnDebugging;
extern SdkUserExceptionHandler g_SdkUserExceptionHandler;
extern void* g_SdkUserExceptionStackTop;
extern void* g_SdkUserExceptionStackBottom;
extern UserExceptionInfo* g_SdkUserExceptionInfo;

struct MemoryHeapManager {
  uintptr_t heapAddress;
  size_t heapSize;

  Result SetHeapSize(size_t size);
  Result AllocateFromHeap(uintptr_t* address, size_t size);
  void ReleaseToHeap(uintptr_t address, size_t size);
};

Result SetMemoryPermissionImpl(uintptr_t address, size_t size,
  MemoryPermission permission);
Result SetMemoryAttributeImpl(uintptr_t address, size_t size,
  MemoryAttribute attribute);
bool ExamineWholeAddressSpaceHasNoAttribute(uintptr_t address, size_t size);

[[noreturn]] void NotImplemented(const char* function, int line);

}

namespace {

struct ThreadLocalAllocatorPair {
  ThreadLocalAllocator allocate;
  ThreadLocalDeallocator deallocate;
};

ThreadLocalAllocatorPair g_ThreadLocalAllocator;

detail::MemoryHeapManager* GetMemoryHeapManager() {
  return reinterpret_cast<detail::MemoryHeapManager*>(
    detail::g_OsResourceManagerStorage + 0x420);
}

}

namespace detail {

void NotImplemented(const char*, int) {
  NN_ABORT_UNLESS(false);
}

}

int64_t GetSystemTickFrequency() {
  return 31250000;
}

Result SetMemoryPermission(uintptr_t address, size_t size,
  MemoryPermission permission) {
  return detail::SetMemoryPermissionImpl(address, size, permission);
}

Result SetMemoryAttribute(uintptr_t address, size_t size,
  MemoryAttribute attribute) {
  return detail::SetMemoryAttributeImpl(address, size, attribute);
}

uint32_t GetCurrentProcessHandle() {
  return 0xffff8001;
}

bool IsMemoryLocked(uintptr_t address, size_t size) {
  return !detail::ExamineWholeAddressSpaceHasNoAttribute(address, size);
}

bool IsMemoryLocked(void* address, size_t size) {
  return !detail::ExamineWholeAddressSpaceHasNoAttribute(
    reinterpret_cast<uintptr_t>(address), size);
}

Result SetMemoryHeapSize(size_t size) {
  return GetMemoryHeapManager()->SetHeapSize(size);
}

Result AllocateMemoryBlock(uintptr_t* address, size_t size) {
  return GetMemoryHeapManager()->AllocateFromHeap(address, size);
}

void FreeMemoryBlock(uintptr_t address, size_t size) {
  detail::MemoryHeapManager* manager = GetMemoryHeapManager();
  const uintptr_t heapStart = manager->heapAddress;
  NN_ABORT_UNLESS(address >= heapStart &&
    address + size <= heapStart + manager->heapSize);
  manager->ReleaseToHeap(address, size);
}

void EnableUserExceptionHandlerOnDebugging(bool isEnabled) {
  detail::g_UserExceptionHandlerValidityOnDebugging = isEnabled;
}

void SetSdkUserExceptionHandler(SdkUserExceptionHandler handler, void* stack,
  size_t stackSize, UserExceptionInfo* info) {
  detail::g_SdkUserExceptionHandler = handler;
  detail::g_SdkUserExceptionStackTop = handler ? stack : nullptr;
  detail::g_SdkUserExceptionStackBottom = handler ?
    static_cast<uint8_t*>(stack) + stackSize : nullptr;
  detail::g_SdkUserExceptionInfo = handler ? info : nullptr;
}

void DefaultUserExceptionHandler(UserExceptionInfo*) {
}

void SetMemoryAllocatorForThreadLocal(ThreadLocalAllocator allocate,
  ThreadLocalDeallocator deallocate) {
  NN_ABORT_UNLESS(allocate != nullptr &&
    g_ThreadLocalAllocator.allocate == nullptr);
  NN_ABORT_UNLESS(deallocate != nullptr &&
    g_ThreadLocalAllocator.deallocate == nullptr);
  g_ThreadLocalAllocator.allocate = allocate;
  g_ThreadLocalAllocator.deallocate = deallocate;
}

bool MemoryAllocatorForThreadLocalInitialized() {
  return g_ThreadLocalAllocator.allocate != nullptr;
}

Result GetLastThreadInfo(ThreadType**, SdkLastThreadContext*, uint32_t*) {
  return {0x3f603};
}

void FinalizeMultiWait(MultiWaitType* wait) {
  wait->initialized = 0;
  wait->implementation.lock.Finalize();
}

FiberType* GetCurrentFiber() {
  uintptr_t tls;
  asm("mrs %0, tpidrro_el0" : "=r"(tls));
  auto* thread = *reinterpret_cast<ThreadType**>(tls + 0x1f8);
  return static_cast<FiberType*>(thread->current_fiber);
}

}
