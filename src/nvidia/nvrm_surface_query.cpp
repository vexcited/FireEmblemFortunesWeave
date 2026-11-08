#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotImplemented = 2,
  NvError_BadParameter = 4,
  NvError_BadValue = 11,
  NvError_NotSupported = 0x10002,
};

enum NvRmSurfaceLayout : uint32_t {
  NvRmSurfaceLayout_Pitch = 1,
  NvRmSurfaceLayout_Tiled = 2,
  NvRmSurfaceLayout_Blocklinear = 3,
};

struct NvRmSurface {
  uint32_t width;
  uint32_t height;
  uint64_t colorFormat;
  uint32_t layout;
  uint32_t pitch;
  uint32_t hMem;
  uint32_t offset;
  uint32_t kind;
  uint32_t blockHeightLog2;
  uint32_t scanFormat;
  uint32_t secondFieldOffset;
  uint64_t flags;
  uint64_t size;
  uint32_t planeOffsets[3];
  uint32_t reserved4c;
  void* pBase;
};

static_assert(sizeof(NvRmSurface) == 0x58);

struct NvRmSurfaceContainer {
  NvRmSurface surfaces[3];
  int32_t planeKind;
};

[[gnu::visibility("hidden")]] NvError NvRmSurfaceComputeSizeImpl(
  NvRmSurface* surface, uint32_t plane, uint32_t isTotal, uint32_t* pOutSize);
[[gnu::visibility("hidden")]] void NvRmSurfaceRebasePlanes(
  NvRmSurface* surface, uint32_t offset);
[[gnu::visibility("hidden")]] extern const uint64_t
  g_NvRmSurfacePlaneCounts[];

namespace {

const uint32_t NvRmSurfaceScan_Interlaced = 1;
const uint64_t NvRmSurfaceFlag_Compressible = 1 << 1;
const uint64_t NvRmSurfaceFlag_SizeValid = 1ull << 63;
const uint32_t NvRmSurfaceMaxBlockHeightLog2 = 5;

}

extern "C" [[gnu::noinline]] NvError NvRmSurfaceGetAlignment(
  const NvRmSurface* surface, uint32_t* pOutAlignment) {
  if (surface == nullptr || pOutAlignment == nullptr) {
    return NvError_BadParameter;
  }

  uint32_t alignment;
  switch (surface->layout) {
    case NvRmSurfaceLayout_Pitch:
      alignment = 0x400;
      break;
    case NvRmSurfaceLayout_Tiled:
      alignment = 0x100;
      break;
    case NvRmSurfaceLayout_Blocklinear:
      alignment = (surface->flags & NvRmSurfaceFlag_Compressible) != 0 ?
        0x20000 : 0x2000;
      break;
    default:
      return NvError_NotSupported;
  }

  *pOutAlignment = alignment;
  return NvSuccess;
}

extern "C" NvError NvRmSurfaceGetPitchAlignment(uint32_t layout,
  uint32_t attributes, uint32_t* pOutAlignment) {
  if (attributes > 0xff || pOutAlignment == nullptr) {
    return NvError_BadParameter;
  }

  uint32_t alignment;
  if (layout == NvRmSurfaceLayout_Tiled ||
    layout == NvRmSurfaceLayout_Blocklinear) {
    alignment = 64;
  }
  else if (layout == NvRmSurfaceLayout_Pitch) {
    alignment = (attributes & 0x1f) != 0 || attributes == 0 ? 256 : 64;
    if (attributes == 4) {
      alignment = 128;
    }
  }
  else {
    return NvError_BadParameter;
  }

  *pOutAlignment = alignment;
  return NvSuccess;
}

// Offsets become absolute addresses in the given system memory.
extern "C" NvError NvRmSurfaceSetSystemMemory(NvRmSurface* surface,
  void* pBase) {
  if (surface == nullptr) {
    return NvError_BadParameter;
  }

  if (surface->scanFormat == NvRmSurfaceScan_Interlaced) {
    surface->secondFieldOffset -= surface->offset;
  }

  if ((surface->planeOffsets[0] | surface->planeOffsets[1]) != 0) {
    surface->planeOffsets[0] -= surface->offset;
    surface->planeOffsets[1] -= surface->offset;
    surface->planeOffsets[2] -= surface->offset;
  }

  surface->hMem = 0;
  surface->offset = 0;
  surface->pBase = pBase;
  return NvSuccess;
}

extern "C" uint32_t NvRmSurfaceComputeSize(NvRmSurface* surface) {
  surface->flags &= ~NvRmSurfaceFlag_SizeValid;
  if (surface->layout == NvRmSurfaceLayout_Blocklinear &&
    surface->blockHeightLog2 > NvRmSurfaceMaxBlockHeightLog2) {
    return 0;
  }

  uint32_t size = 0;
  if (NvRmSurfaceComputeSizeImpl(surface, 0xff, 1, &size) != NvSuccess) {
    surface->size = 0;
    return 0;
  }

  surface->size = size;
  if (size != 0) {
    surface->flags |= NvRmSurfaceFlag_SizeValid;
  }

  return size;
}

// Planes must follow each other, the size ends with the last one.
extern "C" NvError NvRmSurfaceContainerGetSize(
  const NvRmSurfaceContainer* container, uint64_t* pOutSize) {
  if (container == nullptr || pOutSize == nullptr) {
    return NvError_BadParameter;
  }

  uint32_t last;
  switch (container->planeKind) {
    case 0:
      last = 0;
      break;
    case 1:
    case 3:
      last = 1;
      break;
    case 2:
      last = 2;
      break;
    default:
      return NvError_NotImplemented;
  }

  const NvRmSurface* surfaces = container->surfaces;
  if (last >= 1 &&
    surfaces[0].offset + surfaces[0].size > surfaces[1].offset) {
    return NvError_BadValue;
  }

  if (last >= 2 &&
    surfaces[1].offset + surfaces[1].size > surfaces[2].offset) {
    return NvError_BadValue;
  }

  *pOutSize = surfaces[last].offset + surfaces[last].size;
  return NvSuccess;
}

extern "C" NvError NvRmSurfaceContainerGetAlignment(
  const NvRmSurfaceContainer* container, uint32_t* pOutAlignment) {
  if (container == nullptr || pOutAlignment == nullptr) {
    return NvError_BadParameter;
  }

  if (static_cast<uint32_t>(container->planeKind) > 3) {
    return NvError_NotImplemented;
  }

  const uint64_t count = g_NvRmSurfacePlaneCounts[container->planeKind];
  *pOutAlignment = 0;

  for (uint64_t i = 0; i < count; i++) {
    uint32_t alignment = 0;
    const NvError result = NvRmSurfaceGetAlignment(&container->surfaces[i],
      &alignment);
    if (result != NvSuccess) {
      return result;
    }

    if (*pOutAlignment < alignment) {
      *pOutAlignment = alignment;
    }
  }

  return NvSuccess;
}

extern "C" NvError NvRmSurfaceSetDeviceMemory(NvRmSurface* surface,
  uint32_t hMem, uint32_t offset, void* pBase) {
  if (surface == nullptr) {
    return NvError_BadParameter;
  }

  if (hMem == 0 && (offset != 0 || pBase != nullptr)) {
    return NvError_BadParameter;
  }

  const uint64_t size = surface->size;
  if ((size >> 32) != 0) {
    return NvError_NotSupported;
  }

  uint32_t end;
  if (__builtin_add_overflow(offset, static_cast<uint32_t>(size), &end)) {
    return NvError_BadParameter;
  }

  uint32_t mask;
  switch (surface->layout) {
    case NvRmSurfaceLayout_Pitch:
      mask = 0x3ff;
      break;
    case NvRmSurfaceLayout_Tiled:
      mask = 0xff;
      break;
    case NvRmSurfaceLayout_Blocklinear:
      mask = (surface->flags & NvRmSurfaceFlag_Compressible) != 0 ?
        0x1ffff : 0x1fff;
      break;
    default:
      return NvError_NotSupported;
  }

  if ((offset & mask) != 0) {
    return NvError_BadParameter;
  }

  if (surface->scanFormat == NvRmSurfaceScan_Interlaced) {
    if (surface->secondFieldOffset <= surface->offset) {
      return NvError_NotSupported;
    }

    surface->secondFieldOffset =
      surface->secondFieldOffset + offset - surface->offset;
  }
  else if (surface->secondFieldOffset != 0) {
    return NvError_NotSupported;
  }

  NvRmSurfaceRebasePlanes(surface, offset);
  surface->hMem = hMem;
  surface->offset = offset;
  surface->pBase = pBase;
  return NvSuccess;
}
