#include <stddef.h>
#include <stdint.h>

struct NvOsAllocator {
  void* (*alloc)(NvOsAllocator* allocator, size_t size);
  void* (*allocAlign)(NvOsAllocator* allocator, size_t alignment,
    size_t size);
  void* (*realloc)(NvOsAllocator* allocator, void* pointer, size_t size);
  void (*free)(NvOsAllocator* allocator, void* pointer);
};

[[gnu::visibility("hidden")]] extern NvOsAllocator g_NvOsAllocator;
[[gnu::visibility("hidden")]] extern NvOsAllocator g_GlslcAllocator;
[[gnu::visibility("hidden")]] extern NvOsAllocator g_MultimediaAllocator;
[[gnu::visibility("hidden")]] extern NvOsAllocator g_CudaAllocator;

// Cuda allocates from this pool until its allocator is set up.
[[gnu::visibility("hidden")]] extern uint8_t g_CudaEarlyPool[0x4000];

[[gnu::visibility("hidden")]] void* NvOsAllocImpl(size_t size);
[[gnu::visibility("hidden")]] void* NvOsAllocAlignImpl(size_t alignment,
  size_t size);
[[gnu::visibility("hidden")]] void* NvOsReallocImpl(void* pointer,
  size_t size);
[[gnu::visibility("hidden")]] void NvOsFreeImpl(void* pointer);

extern "C" void* NvOsAlloc(size_t size) {
  return NvOsAllocImpl(size);
}

extern "C" void* NvOsAllocAlign(size_t alignment, size_t size) {
  return NvOsAllocAlignImpl(alignment, size);
}

extern "C" void* NvOsRealloc(void* pointer, size_t size) {
  return NvOsReallocImpl(pointer, size);
}

extern "C" void NvOsFree(void* pointer) {
  NvOsFreeImpl(pointer);
}

extern "C" NvOsAllocator* NvOsGetCurrentAllocator() {
  return &g_NvOsAllocator;
}

extern "C" void* glslc_AllocAlign(size_t alignment, size_t size) {
  return g_GlslcAllocator.allocAlign(&g_GlslcAllocator, alignment, size);
}

extern "C" void* glslc_Alloc(size_t size) {
  return g_GlslcAllocator.alloc(&g_GlslcAllocator, size);
}

extern "C" void* glslc_Realloc(void* pointer, size_t size) {
  return g_GlslcAllocator.realloc(&g_GlslcAllocator, pointer, size);
}

extern "C" void glslc_Free(void* pointer) {
  g_GlslcAllocator.free(&g_GlslcAllocator, pointer);
}

extern "C" NvOsAllocator* glslc_GetAllocator() {
  return &g_GlslcAllocator;
}

extern "C" void* multimedia_AllocAlign(size_t alignment, size_t size) {
  return g_MultimediaAllocator.allocAlign(&g_MultimediaAllocator, alignment,
    size);
}

extern "C" void* multimedia_Alloc(size_t size) {
  return g_MultimediaAllocator.alloc(&g_MultimediaAllocator, size);
}

extern "C" void* multimedia_Realloc(void* pointer, size_t size) {
  return g_MultimediaAllocator.realloc(&g_MultimediaAllocator, pointer, size);
}

extern "C" void multimedia_Free(void* pointer) {
  g_MultimediaAllocator.free(&g_MultimediaAllocator, pointer);
}

extern "C" NvOsAllocator* multimedia_GetAllocator() {
  return &g_MultimediaAllocator;
}

extern "C" void* cuda_AllocAlign(size_t alignment, size_t size) {
  return g_CudaAllocator.allocAlign(&g_CudaAllocator, alignment, size);
}

extern "C" void* cuda_Alloc(size_t size) {
  return g_CudaAllocator.alloc(&g_CudaAllocator, size);
}

extern "C" void cuda_Free(void* pointer) {
  uint8_t* bytes = static_cast<uint8_t*>(pointer);
  if (bytes >= g_CudaEarlyPool &&
    bytes < g_CudaEarlyPool + sizeof(g_CudaEarlyPool)) {
    return;
  }

  g_CudaAllocator.free(&g_CudaAllocator, pointer);
}

extern "C" NvOsAllocator* cuda_GetAllocator() {
  return &g_CudaAllocator;
}

extern "C" void* NvOsAtomicCompareExchangePtr(void** pTarget, void* expected,
  void* desired) {
  __atomic_compare_exchange_n(pTarget, &expected, desired, false,
    __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
  return expected;
}

extern "C" int32_t NvOsAtomicCompareExchange32(int32_t* pTarget,
  int32_t expected, int32_t desired) {
  __atomic_compare_exchange_n(pTarget, &expected, desired, false,
    __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
  return expected;
}

extern "C" int32_t NvOsAtomicExchange32(int32_t* pTarget, int32_t value) {
  return __atomic_exchange_n(pTarget, value, __ATOMIC_SEQ_CST);
}

extern "C" int32_t NvOsAtomicExchangeAdd32(int32_t* pTarget, int32_t value) {
  return __atomic_fetch_add(pTarget, value, __ATOMIC_SEQ_CST);
}
