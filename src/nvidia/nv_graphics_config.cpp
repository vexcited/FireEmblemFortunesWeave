#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"

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

[[gnu::visibility("hidden")]] void EnableGraphicsMemoryTracingImpl();
[[gnu::visibility("hidden")]] void EnablePreemptionGFXPImpl();
[[gnu::visibility("hidden")]] void DisableGpuSemaAcquireTimeoutImpl();

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
