#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/syncpt/syncpt_sdk.hpp"

namespace nn::gs::sdk {

using AllocateFunction = void* (*)(size_t size, size_t alignment,
  void* userData);
using FreeFunction = void (*)(void* address, void* userData);
using ReallocateFunction = void* (*)(void* address, size_t size,
  void* userData);

struct GraphicsAllocatorType;

[[gnu::visibility("hidden")]] extern std::atomic<int32_t>
  g_GraphicsSystemState;
[[gnu::visibility("hidden")]] extern GraphicsAllocatorType
  g_GraphicsAllocator;

[[gnu::visibility("hidden")]] void InitializeGraphicsAllocatorImpl(
  GraphicsAllocatorType* allocator, AllocateFunction allocate,
  FreeFunction free, ReallocateFunction reallocate, void* userData);
[[gnu::visibility("hidden")]] void ShutdownGraphicsAllocatorImpl(
  GraphicsAllocatorType* allocator);
[[gnu::visibility("hidden")]] void* DefaultAllocate(size_t size,
  size_t alignment, void* userData);
[[gnu::visibility("hidden")]] void DefaultFree(void* address,
  void* userData);
[[gnu::visibility("hidden")]] void* DefaultReallocate(void* address,
  size_t size, void* userData);

void CheckGraphicsSystemInitialized(const char*, size_t) {
  if (g_GraphicsSystemState.load(std::memory_order_acquire) != 1) {
    diag::detail::AbortImpl();
  }
}

void InitializeGraphicsAllocator(AllocateFunction allocate,
  FreeFunction free, ReallocateFunction reallocate, void* userData) {
  InitializeGraphicsAllocatorImpl(&g_GraphicsAllocator, allocate, free,
    reallocate, userData);
}

void ShutdownGraphicsAllocator() {
  ShutdownGraphicsAllocatorImpl(&g_GraphicsAllocator);
}

void GetGraphicsAllocator(AllocateFunction* pOutAllocate,
  FreeFunction* pOutFree, ReallocateFunction* pOutReallocate) {
  *pOutAllocate = DefaultAllocate;
  *pOutFree = DefaultFree;
  *pOutReallocate = DefaultReallocate;
}

}

namespace nn::gs::external {

struct NvRmFenceRec {
  uint32_t id;
  uint32_t value;
};

syncpt::sdk::SyncPointHandle GetNativeSyncHandleFromNvRmFence(
  const NvRmFenceRec& fence) {
  return syncpt::sdk::MakeSyncPointHandleFromNvRmFence(fence.id,
    fence.value);
}

}

namespace nn::gsv {

namespace boards {

struct MemoryDonationTable;

}

struct UserSession {
  uint64_t reserved;
  uint64_t resourceUserId;
};

[[gnu::visibility("hidden")]] extern bool g_IsInitialized;
[[gnu::visibility("hidden")]] extern UserSession g_UserSession;

bool IsInitialized() {
  return g_IsInitialized;
}

uint64_t GetGraphicsResourceUserId() {
  return g_UserSession.resourceUserId;
}

UserSession* GetUserSession() {
  return g_UserSession.resourceUserId != 0 ? &g_UserSession : nullptr;
}

bool TryGetBuiltinDonateMemory(boards::MemoryDonationTable*) {
  return false;
}

}

namespace nn::gpu::impl::user {

struct KEventPool;

[[gnu::visibility("hidden")]] extern KEventPool g_KEventPool;

KEventPool* GetKEventPool() {
  return &g_KEventPool;
}

}
