#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/mutex.hpp"

struct NvOsExitHandler {
  void (*handler)();
  NvOsExitHandler* next;
};

// NvOs routes its default allocations through these tables, the graphics
// allocator takes them over once it is set.
struct NvOsAllocatorTable {
  void* functions[4];
  uint8_t reserved20[0x10];
  uint8_t isLocked;
  uint8_t reserved31[0x4f];
  uint8_t isSet;
  uint8_t reserved81[7];
};

static_assert(sizeof(NvOsAllocatorTable) == 0x88);

extern "C" [[gnu::visibility("hidden")]] void* NvOsHeapAllocatorAlloc(
  void* allocator, size_t size);

[[gnu::visibility("hidden")]] extern NvOsAllocatorTable g_NvOsAllocators[2];
[[gnu::visibility("hidden")]] extern NvOsExitHandler* g_NvOsExitHandlersFirst;
[[gnu::visibility("hidden")]] extern nn::os::MutexType g_NvOsExitMutex;
[[gnu::visibility("hidden")]] extern bool g_NvOsExitRunning;

namespace nn::gs::sdk {

bool CanBootWithRemoteMemory();
void BootGraphicsSystem(void* memory, size_t size);
void InitializeGraphicsAllocator(void* (*allocate)(size_t, size_t, void*),
  void (*free)(void*, void*), void* (*reallocate)(void*, size_t, void*),
  void* userData);
void GetGraphicsAllocator(void* (**pOutAllocate)(size_t, size_t, void*),
  void (**pOutFree)(void*, void*),
  void* (**pOutReallocate)(void*, size_t, void*));
void ShutdownGraphicsAllocator();

}

namespace nv {

using AllocateFunction = void* (*)(size_t size, size_t alignment,
  void* userData);
using FreeFunction = void (*)(void* address, void* userData);
using ReallocateFunction = void* (*)(void* address, size_t size,
  void* userData);

struct GraphicsAllocator {
  AllocateFunction allocate;
  FreeFunction free;
  ReallocateFunction reallocate;
};

[[gnu::visibility("hidden")]] extern GraphicsAllocator g_GraphicsAllocator;
[[gnu::visibility("hidden")]] extern bool g_IsGraphicsInitialized;
[[gnu::visibility("hidden")]] extern void* g_pGraphicsDevice;

[[gnu::visibility("hidden")]] extern size_t g_GraphicsMemorySize;
[[gnu::visibility("hidden")]] extern uint64_t g_GraphicsRemoteMemory;
[[gnu::visibility("hidden")]] extern void* g_pGraphicsDevtoolsMemory;
[[gnu::visibility("hidden")]] extern size_t g_GraphicsDevtoolsMemorySize;
[[gnu::visibility("hidden")]] extern const char* g_pGraphicsServiceName;

struct MemoryInfo {
  int64_t values[8];
};

[[gnu::visibility("hidden")]] void* GraphicsOsAllocate(void*, size_t);
[[gnu::visibility("hidden")]] void* GraphicsOsAllocateAligned(void*, size_t,
  size_t);
[[gnu::visibility("hidden")]] void* GraphicsOsReallocate(void*, void*,
  size_t);
[[gnu::visibility("hidden")]] void GraphicsOsFree(void*, void*);
[[gnu::visibility("hidden")]] void* DefaultOsAllocate(void*, size_t);
[[gnu::visibility("hidden")]] void* DefaultOsAllocateAligned(void*, size_t,
  size_t);
[[gnu::visibility("hidden")]] void* DefaultOsReallocate(void*, void*, size_t);
[[gnu::visibility("hidden")]] void DefaultOsFree(void*, void*);
[[gnu::visibility("hidden")]] void ResetGraphicsService(const char* name);
[[gnu::visibility("hidden")]] void InitializeDevtoolsImpl(void* memory,
  size_t size);
[[gnu::visibility("hidden")]] void QueryGraphicsMemory(int32_t* pOutValues);

[[gnu::visibility("hidden")]] void EnableGraphicsMemoryTracingImpl();
[[gnu::visibility("hidden")]] void EnablePreemptionGFXPImpl();
[[gnu::visibility("hidden")]] void DisableGpuSemaAcquireTimeoutImpl();

namespace {

[[gnu::always_inline]] inline void SetOsFunctions(NvOsAllocatorTable& table,
  void* allocate, void* allocateAligned, void* reallocate, void* free) {
  table.functions[0] = allocate;
  table.functions[1] = allocateAligned;
  table.functions[2] = reallocate;
  table.functions[3] = free;
}

}

void SetGraphicsAllocator(AllocateFunction allocate, FreeFunction free,
  ReallocateFunction reallocate, void* userData) {
  if (g_GraphicsAllocator.allocate != nullptr ||
    g_GraphicsAllocator.free != nullptr ||
    g_GraphicsAllocator.reallocate != nullptr) {
    nn::diag::detail::AbortImpl();
  }

  if (allocate == nullptr || free == nullptr || reallocate == nullptr) {
    nn::diag::detail::AbortImpl();
  }

  if (g_NvOsAllocators[0].isLocked == 1) {
    nn::diag::detail::AbortImpl();
  }

  nn::gs::sdk::InitializeGraphicsAllocator(allocate, free, reallocate,
    userData);
  nn::gs::sdk::GetGraphicsAllocator(&g_GraphicsAllocator.allocate,
    &g_GraphicsAllocator.free, &g_GraphicsAllocator.reallocate);
  g_IsGraphicsInitialized = true;

  SetOsFunctions(g_NvOsAllocators[0], reinterpret_cast<void*>(
    GraphicsOsAllocate), reinterpret_cast<void*>(GraphicsOsAllocateAligned),
    reinterpret_cast<void*>(GraphicsOsReallocate),
    reinterpret_cast<void*>(GraphicsOsFree));
  g_NvOsAllocators[0].isSet = 1;

  if (g_NvOsAllocators[1].functions[0] ==
    reinterpret_cast<void*>(NvOsHeapAllocatorAlloc)) {
    SetOsFunctions(g_NvOsAllocators[1], reinterpret_cast<void*>(
      GraphicsOsAllocate), reinterpret_cast<void*>(GraphicsOsAllocateAligned),
      reinterpret_cast<void*>(GraphicsOsReallocate),
      reinterpret_cast<void*>(GraphicsOsFree));
    g_NvOsAllocators[1].isSet = 1;
  }
}

void SetGraphicsServiceName(const char* name) {
  if (g_pGraphicsDevice != nullptr || g_GraphicsMemorySize != 0) {
    nn::diag::detail::AbortImpl();
  }

  ResetGraphicsService(name);
  g_pGraphicsServiceName = name;
}

// Remote memory boots the graphics system with a placeholder of 8 bytes.
void InitializeGraphics(void* memory, size_t size) {
  const bool canBootWithRemoteMemory =
    nn::gs::sdk::CanBootWithRemoteMemory();
  if (g_pGraphicsDevice != nullptr || g_GraphicsMemorySize != 0) {
    nn::diag::detail::AbortImpl();
  }

  if (canBootWithRemoteMemory) {
    g_pGraphicsDevice = &g_GraphicsRemoteMemory;
    g_GraphicsMemorySize = 8;
  }
  else {
    if (memory == nullptr || size == 0) {
      nn::diag::detail::AbortImpl();
    }

    if ((size >> 15) == 0) {
      nn::diag::detail::AbortImpl();
    }

    if (((reinterpret_cast<uintptr_t>(memory) | size) & 0xfff) != 0) {
      nn::diag::detail::AbortImpl();
    }

    g_pGraphicsDevice = memory;
    g_GraphicsMemorySize = size;
  }

  nn::gs::sdk::BootGraphicsSystem(memory, size);
}

void InitializeGraphics() {
  const bool canBootWithRemoteMemory =
    nn::gs::sdk::CanBootWithRemoteMemory();
  if (g_pGraphicsDevice != nullptr || g_GraphicsMemorySize != 0) {
    nn::diag::detail::AbortImpl();
  }

  if (!canBootWithRemoteMemory) {
    nn::diag::detail::AbortImpl();
  }

  g_pGraphicsDevice = &g_GraphicsRemoteMemory;
  g_GraphicsMemorySize = 8;
  nn::gs::sdk::BootGraphicsSystem(nullptr, 0);
}

// Runs the NvOs exit handlers without holding the lock during each call.
void FinalizeGraphics() {
  nn::os::LockMutex(&g_NvOsExitMutex);
  g_NvOsExitRunning = true;

  while (NvOsExitHandler* node = g_NvOsExitHandlersFirst) {
    void (*handler)() = node->handler;
    NvOsExitHandler* next = node->next;
    node->next = nullptr;
    g_NvOsExitHandlersFirst = next;

    nn::os::UnlockMutex(&g_NvOsExitMutex);
    handler();
    nn::os::LockMutex(&g_NvOsExitMutex);
  }

  g_NvOsExitRunning = false;
  nn::os::UnlockMutex(&g_NvOsExitMutex);

  if (g_IsGraphicsInitialized) {
    nn::gs::sdk::ShutdownGraphicsAllocator();
  }
}

void InitializeGraphicsDevtools(void* memory, size_t size) {
  if (g_pGraphicsDevtoolsMemory != nullptr ||
    g_GraphicsDevtoolsMemorySize != 0) {
    nn::diag::detail::AbortImpl();
  }

  if (g_pGraphicsDevice == nullptr || g_GraphicsMemorySize == 0) {
    nn::diag::detail::AbortImpl();
  }

  if (memory == nullptr || size == 0) {
    nn::diag::detail::AbortImpl();
  }

  g_pGraphicsDevtoolsMemory = memory;
  g_GraphicsDevtoolsMemorySize = size;
  InitializeDevtoolsImpl(memory, size);
}

void GetGraphicsMemoryInfo(MemoryInfo* pOutInfo) {
  if (!g_IsGraphicsInitialized || g_pGraphicsDevice == nullptr) {
    *pOutInfo = {};
    return;
  }

  int32_t values[8] = {};
  QueryGraphicsMemory(values);
  for (int32_t i = 0; i < 4; i++) {
    pOutInfo->values[i] = values[i];
  }
}

// Without a graphics allocator NvOs keeps its default functions.
void InitCheck() {
  if (!g_IsGraphicsInitialized) {
    SetOsFunctions(g_NvOsAllocators[0], reinterpret_cast<void*>(
      DefaultOsAllocate), reinterpret_cast<void*>(DefaultOsAllocateAligned),
      reinterpret_cast<void*>(DefaultOsReallocate),
      reinterpret_cast<void*>(DefaultOsFree));
  }

  if (g_pGraphicsDevice == nullptr) {
    nn::diag::detail::AbortImpl();
  }
}

void GetGraphicsAllocator(AllocateFunction* pOutAllocate,
  FreeFunction* pOutFree, ReallocateFunction* pOutReallocate,
  void** pOutUserData) {
  *pOutAllocate = g_GraphicsAllocator.allocate;
  *pOutFree = g_GraphicsAllocator.free;
  *pOutReallocate = g_GraphicsAllocator.reallocate;
  *pOutUserData = nullptr;
}

// These settings only apply before the graphics system starts.
#define NV_GRAPHICS_SETTING(Name)                                            \
  void Name() {                                                              \
    if (g_IsGraphicsInitialized || g_pGraphicsDevice != nullptr) {          \
      nn::diag::detail::AbortImpl();                                        \
    }                                                                        \
                                                                             \
    Name##Impl();                                                            \
  }

NV_GRAPHICS_SETTING(EnableGraphicsMemoryTracing)
NV_GRAPHICS_SETTING(EnablePreemptionGFXP)
NV_GRAPHICS_SETTING(DisableGpuSemaAcquireTimeout)

#undef NV_GRAPHICS_SETTING

}
