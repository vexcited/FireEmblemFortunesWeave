#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotSupported = 2,
};

using NvRmMemHandle = uint32_t;

struct NvRmSurface {
  uint32_t width;
  uint32_t height;
  uint64_t colorFormat;
  uint32_t layout;
  uint32_t pitch;
  NvRmMemHandle hMem;
  uint32_t offset;
  uint64_t reserved20;
  uint32_t reserved28;
  uint32_t secondFieldOffset;
  uint8_t compressionFlags;
  uint8_t reserved31[31];
  void* pBase;
};

extern "C" void NvOsFree(void* pointer);
extern "C" int32_t NvOsAtomicExchange32(int32_t* pTarget, int32_t value);
extern "C" void NvRmMemHandleFree(NvRmMemHandle handle);
extern "C" NvError NvRmSurfaceGetAlignment(NvRmSurface* surface,
  uint32_t* pOutAlignment);
extern "C" NvError NvRmSurfaceGetCoordOffset(NvRmSurface* surface,
  uint32_t x, uint32_t y, uint32_t* pOutOffset);

[[gnu::visibility("hidden")]] uint32_t NvRmSurfaceSetupImpl(void* surfaces,
  uint32_t count, uint32_t width, uint32_t height, void* pAttributes,
  uint32_t version);
[[gnu::visibility("hidden")]] uint32_t NvRmSurfaceComputeFieldOffsets(
  NvRmSurface* surface, uint32_t fields);
[[gnu::visibility("hidden")]] uint32_t NvRmSurfaceComputePitchImpl(
  NvRmSurface* surface);
[[gnu::visibility("hidden")]] extern int32_t g_NvRmSurfaceDecompressionPolicy;

extern "C" uint32_t NvRmSurfaceSetup(void* surfaces, uint32_t count,
  uint32_t width, uint32_t height, void* pAttributes) {
  return NvRmSurfaceSetupImpl(surfaces, count, width, height, pAttributes, 4);
}

extern "C" void NvRmSurfaceInitNonRmPitch(NvRmSurface* surface,
  uint32_t width, uint32_t height, uint64_t colorFormat, uint32_t pitch,
  void* pBase) {
  *surface = {};
  surface->width = width;
  surface->height = height;
  surface->colorFormat = colorFormat;
  surface->layout = 1;
  surface->pitch = pitch;
  surface->pBase = pBase;
}

extern "C" void NvRmSurfaceInitRmPitch(NvRmSurface* surface, uint32_t width,
  uint32_t height, uint64_t colorFormat, uint32_t pitch, NvRmMemHandle hMem,
  uint32_t offset) {
  *surface = {};
  surface->width = width;
  surface->height = height;
  surface->colorFormat = colorFormat;
  surface->layout = 1;
  surface->pitch = pitch;
  surface->hMem = hMem;
  surface->offset = offset;
}

extern "C" void NvRmSurfaceFree(NvRmSurface* surface) {
  if (surface->hMem != 0) {
    NvRmMemHandleFree(surface->hMem);
    surface->hMem = 0;
    return;
  }

  NvOsFree(surface->pBase);
  surface->pBase = nullptr;
}

extern "C" NvError NvRmSurfacePrepareCompressibleRead(void*, NvRmSurface*,
  void*, uint64_t* pOutCompressionState, uint64_t fence, uint64_t* pOutFence) {
  *pOutFence = fence;
  *pOutCompressionState = 0;
  return NvSuccess;
}

extern "C" uint32_t NvRmSurfaceComputeAlignment(void*, NvRmSurface* surface) {
  if (surface == nullptr) {
    return 0;
  }

  uint32_t alignment = 0;
  const NvError error = NvRmSurfaceGetAlignment(surface, &alignment);
  return error == NvSuccess ? alignment : 0;
}

extern "C" void NvRmSurfaceComputeSecondFieldOffset(void*,
  NvRmSurface* surface) {
  if (surface == nullptr) {
    return;
  }

  if (NvRmSurfaceComputeFieldOffsets(surface, 0xff) != 0) {
    surface->secondFieldOffset = 0;
  }
}

extern "C" uint32_t NvRmSurfaceComputeOffset(NvRmSurface* surface, uint32_t x,
  uint32_t y) {
  uint32_t offset = 0;
  const NvError error = NvRmSurfaceGetCoordOffset(surface, x, y, &offset);
  return error == NvSuccess ? offset : 0;
}

extern "C" void NvRmSurfaceComputePitch(void*, uint32_t,
  NvRmSurface* surface) {
  if (surface == nullptr) {
    return;
  }

  if (NvRmSurfaceComputePitchImpl(surface) != 0) {
    surface->pitch = 0;
  }
}

extern "C" NvError NvRmSurfaceMarkCompressibleWrite(void*,
  NvRmSurface* surface, void*, uint32_t* pCompressionState, uint64_t fence,
  uint64_t* pOutFence) {
  if ((surface->compressionFlags & 2) == 0) {
    *pCompressionState = 0;
  }
  else if (*pCompressionState != 0) {
    return NvError_NotSupported;
  }

  *pOutFence = fence;
  return NvSuccess;
}

extern "C" void NvRmSurfaceSetDecompressionPolicy(int32_t policy) {
  NvOsAtomicExchange32(&g_NvRmSurfaceDecompressionPolicy, policy);
}
