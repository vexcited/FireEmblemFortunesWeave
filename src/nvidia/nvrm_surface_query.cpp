#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotImplemented = 2,
  NvError_BadParameter = 4,
  NvError_InsufficientMemory = 6,
  NvError_BadValue = 11,
  NvError_NotSupported = 0x10002,
  NvError_AccessDenied = 0x30010,
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

struct NvOsStatType {
  uint64_t size;
  uint64_t type;
  uint64_t mtime;
};

extern "C" {

int snprintf(char* buffer, unsigned long size, const char* format, ...);
int strcmp(const char* first, const char* second);
const char* NvColorFormatToString(uint64_t colorFormat);
NvError NvOsGetConfigString(const char* name, char* value, uint32_t size);
int32_t NvOsAtomicCompareExchange32(int32_t* target, int32_t expected,
  int32_t value);
NvError NvOsStat(const char* path, NvOsStatType* pOutStat);
NvError NvOsFopen(const char* path, uint32_t flags, void** pOutFile);
NvError NvOsFread(void* file, void* buffer, uint64_t size,
  uint64_t* pOutRead);
void NvOsFcloseEx(void* file);
void NvOsFwrite(void* file, const void* buffer, uint64_t size);
void* NvOsAlloc(uint64_t size);
void NvOsFree(void* pointer);
NvError NvRmSurfaceFromJson(void* surfaces, void* count, void* attributes,
  const char* json, uint32_t length);

struct NvRmChipId {
  uint32_t id;
  uint32_t revision;
};

NvRmChipId NvRmPrivGetChipIdLimited();

}

[[gnu::visibility("hidden")]] extern int32_t g_NvRmSurfaceDecompressionPolicy;
[[gnu::visibility("hidden")]] extern const uint32_t g_NvRmYuvWidthAlignment[5];
[[gnu::visibility("hidden")]] extern const uint32_t
  g_NvRmYuvHeightAlignment[5];

[[gnu::visibility("hidden")]] NvError NvRmSurfaceSetupPlane(
  NvRmSurface* surface, uint32_t width, uint32_t height, uint64_t colorFormat,
  const void* attributes, uint32_t layoutHint);

[[gnu::visibility("hidden")]] NvError NvRmSurfaceComputeSizeImpl(
  NvRmSurface* surface, uint32_t plane, uint32_t isTotal, uint32_t* pOutSize);
[[gnu::visibility("hidden")]] void NvRmSurfaceRebasePlanes(
  NvRmSurface* surface, uint32_t offset);
[[gnu::visibility("hidden")]] extern const uint64_t
  g_NvRmSurfacePlaneCounts[];

[[gnu::visibility("hidden")]] NvError NvRmSurfaceCheckRect(
  const NvRmSurface* surface, uint32_t x, uint32_t y, uint32_t width,
  uint32_t height);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceWritePitch(
  NvRmSurface* surface, uint32_t x, uint32_t y, uint32_t width,
  uint32_t height, const void* data);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceWriteTiled(
  NvRmSurface* surface, uint32_t x, uint32_t y, uint32_t width,
  uint32_t height, const void* data);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceWriteBlocklinear(
  NvRmSurface* surface, uint32_t x, uint32_t y, uint32_t width,
  uint32_t height, const void* data);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceReadPitch(
  NvRmSurface* surface, uint32_t x, uint32_t y, uint32_t width,
  uint32_t height, void* data);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceReadTiled(
  NvRmSurface* surface, uint32_t x, uint32_t y, uint32_t width,
  uint32_t height, void* data);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceReadBlocklinear(
  NvRmSurface* surface, uint32_t x, uint32_t y, uint32_t width,
  uint32_t height, void* data);
[[gnu::visibility("hidden")]] uint32_t NvRmSurfaceTiledOffset(
  const NvRmSurface* surface, uint32_t x, uint32_t y);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceBlocklinearGobs(
  uint32_t* pOutGobs, uint32_t x, uint32_t y, uint32_t* pOutOffset);
[[gnu::visibility("hidden")]] NvError NvRmSurfaceBlocklinearOffset(
  const NvRmSurface* surface, uint32_t x, uint32_t y, void* reserved,
  uint32_t gobs, uint32_t* pOutOffset);

namespace {

const uint32_t NvRmSurfaceScan_Interlaced = 1;
const uint64_t NvRmSurfaceFlag_Protected = 1 << 0;
const uint64_t NvRmSurfaceFlag_Compressible = 1 << 1;
const uint64_t NvRmSurfaceFlag_SizeValid = 1ull << 63;
const uint32_t NvRmSurfaceMaxBlockHeightLog2 = 5;

// The low byte of a color format is its bits per pixel.
[[gnu::always_inline]] inline uint32_t BitsPerPixel(uint64_t colorFormat) {
  return colorFormat & 0xff;
}

[[gnu::always_inline]] inline bool MultiplyFits(uint32_t a, uint32_t b) {
  return (static_cast<uint64_t>(a) * b >> 32) == 0;
}

enum NvYuvColorFormat : uint32_t {
  NvYuvColorFormat_Unknown,
  NvYuvColorFormat_YUV420,
  NvYuvColorFormat_YUV422,
  NvYuvColorFormat_YUV422R,
  NvYuvColorFormat_YUV444,
};

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

// Planar formats compare the chroma plane against the luma plane, packed
// formats are told apart by their color format bits.
extern "C" NvYuvColorFormat NvRmSurfaceGetYuvColorFormat(
  NvRmSurface* const* surfaces, uint32_t planes) {
  if (surfaces == nullptr) {
    return NvYuvColorFormat_Unknown;
  }

  const NvRmSurface* luma = surfaces[0];
  const uint64_t colorFormat = luma->colorFormat;
  if (((colorFormat >> 32) & 0x3f) - 15 > 7) {
    return NvYuvColorFormat_Unknown;
  }

  if ((planes & ~1u) == 2) {
    const NvRmSurface* chroma = surfaces[1];
    const int32_t chromaWidth = chroma->width;
    if (chromaWidth < 0) {
      return NvYuvColorFormat_Unknown;
    }

    const int32_t chromaHeight = chroma->height;
    if (chromaHeight < 0) {
      return NvYuvColorFormat_Unknown;
    }

    const int32_t width = luma->width;
    const int32_t height = luma->height;
    if (width == chromaWidth * 2 && height == chromaHeight * 2) {
      return NvYuvColorFormat_YUV420;
    }

    if (width == chromaWidth * 2 && height == chromaHeight) {
      return NvYuvColorFormat_YUV422;
    }

    if (height == chromaHeight * 2 && width == chromaWidth) {
      return NvYuvColorFormat_YUV422R;
    }

    return width == chromaWidth && height == chromaHeight ?
      NvYuvColorFormat_YUV444 : NvYuvColorFormat_Unknown;
  }

  if (planes != 1) {
    return NvYuvColorFormat_Unknown;
  }

  const uint32_t bits = static_cast<uint32_t>(colorFormat);
  if ((bits & 0x3800000) == 0x2000000 || (bits & 0xe0000) == 0x80000 ||
    (bits & 0x700000) == 0x400000) {
    return NvYuvColorFormat_Unknown;
  }

  return (bits & 0x3eff) == 0x810 ? NvYuvColorFormat_YUV422 :
    NvYuvColorFormat_YUV444;
}

extern "C" int32_t NvRmSurfaceComputeName(char* buffer, int32_t size,
  const NvRmSurface* surfaces, uint32_t count) {
  if (count == 0) {
    return 0;
  }

  int32_t length = snprintf(buffer, size < 0 ? 0 : size, "%s%dx%dx%s", "",
    surfaces[0].width, surfaces[0].height,
    NvColorFormatToString(surfaces[0].colorFormat));

  for (uint32_t i = 1; i < count; i++) {
    const int32_t left = size - length;
    length += snprintf(buffer + length, left < 0 ? 0 : left, "%s%dx%dx%s",
      "-", surfaces[i].width, surfaces[i].height,
      NvColorFormatToString(surfaces[i].colorFormat));
  }

  return length;
}

extern "C" NvError NvRmSurfaceWrite(NvRmSurface* surface, uint32_t x,
  uint32_t y, uint32_t width, uint32_t height, const void* data) {
  NvError result = NvRmSurfaceCheckRect(surface, x, y, width, height);
  if (result != NvSuccess) {
    return result;
  }

  const uint32_t bpp = BitsPerPixel(surface->colorFormat);
  if (!MultiplyFits(bpp, x) || !MultiplyFits(bpp, width)) {
    return NvError_BadParameter;
  }

  const uint32_t xBytes = bpp * x >> 3;
  const uint32_t widthBytes = bpp * width >> 3;

  switch (surface->layout) {
    case NvRmSurfaceLayout_Pitch:
      result = NvRmSurfaceWritePitch(surface, xBytes, y, widthBytes, height,
        data);
      break;
    case NvRmSurfaceLayout_Tiled:
      NvRmSurfaceWriteTiled(surface, xBytes, y, widthBytes, height, data);
      return NvSuccess;
    case NvRmSurfaceLayout_Blocklinear:
      result = NvRmSurfaceWriteBlocklinear(surface, xBytes, y, widthBytes,
        height, data);
      break;
    default:
      return NvError_NotSupported;
  }

  return result;
}

extern "C" [[gnu::noinline]] NvError NvRmSurfaceRead(NvRmSurface* surface,
  uint32_t x, uint32_t y, uint32_t width, uint32_t height, void* data) {
  NvError result = NvRmSurfaceCheckRect(surface, x, y, width, height);
  if (result != NvSuccess) {
    return result;
  }

  const uint32_t bpp = BitsPerPixel(surface->colorFormat);
  if (!MultiplyFits(bpp, x) || !MultiplyFits(bpp, width)) {
    return NvError_BadParameter;
  }

  if ((surface->flags & NvRmSurfaceFlag_Protected) != 0) {
    return NvError_AccessDenied;
  }

  const uint32_t xBytes = bpp * x >> 3;
  const uint32_t widthBytes = bpp * width >> 3;

  switch (surface->layout) {
    case NvRmSurfaceLayout_Pitch:
      result = NvRmSurfaceReadPitch(surface, xBytes, y, widthBytes, height,
        data);
      break;
    case NvRmSurfaceLayout_Tiled:
      NvRmSurfaceReadTiled(surface, xBytes, y, widthBytes, height, data);
      return NvSuccess;
    case NvRmSurfaceLayout_Blocklinear:
      result = NvRmSurfaceReadBlocklinear(surface, xBytes, y, widthBytes,
        height, data);
      break;
    default:
      return NvError_NotSupported;
  }

  return result;
}

// Packed 422 formats share one sample between two pixels.
extern "C" NvError NvRmSurfaceGetCoordOffset(const NvRmSurface* surface,
  uint32_t x, uint32_t y, uint32_t* pOutOffset) {
  if (surface == nullptr || pOutOffset == nullptr) {
    return NvError_BadParameter;
  }

  if (x >= surface->width || y >= surface->height) {
    return NvError_BadParameter;
  }

  const uint32_t pitch = surface->pitch;
  if (pitch == 0) {
    return NvError_NotSupported;
  }

  const uint64_t colorFormat = surface->colorFormat;
  uint32_t bpp = BitsPerPixel(colorFormat);
  if (bpp == 0) {
    return NvError_NotSupported;
  }

  const uint32_t shift = (colorFormat & 0x3eff) == 0x810 ? 1 : 0;
  const uint32_t column = x >> shift;
  bpp <<= shift;
  if (!MultiplyFits(bpp, column)) {
    return NvError_BadParameter;
  }

  const uint32_t bits = column * bpp;
  if ((bits & 7) != 0) {
    return NvError_BadParameter;
  }

  const uint32_t xBytes = bits >> 3;

  switch (surface->layout) {
    case NvRmSurfaceLayout_Pitch: {
      if (!MultiplyFits(pitch, y)) {
        return NvError_BadParameter;
      }

      uint32_t offset;
      if (__builtin_add_overflow(xBytes, pitch * y, &offset)) {
        return NvError_BadParameter;
      }

      *pOutOffset = offset;
      return NvSuccess;
    }
    case NvRmSurfaceLayout_Tiled:
      *pOutOffset = NvRmSurfaceTiledOffset(surface, xBytes, y);
      return NvSuccess;
    case NvRmSurfaceLayout_Blocklinear: {
      if (surface->blockHeightLog2 > NvRmSurfaceMaxBlockHeightLog2) {
        return NvError_NotSupported;
      }

      uint32_t gobs;
      const NvError result = NvRmSurfaceBlocklinearGobs(&gobs, xBytes, y,
        pOutOffset);
      if (result != NvSuccess) {
        return result;
      }

      return NvRmSurfaceBlocklinearOffset(surface, xBytes, y, nullptr, gobs,
        pOutOffset);
    }
    default:
      return NvError_NotSupported;
  }
}

// The policy is read from NV_DECOMPRESSION once, the default is producer
// decompression.
extern "C" int32_t NvRmSurfaceGetDecompressionPolicy() {
  if (g_NvRmSurfaceDecompressionPolicy != -1) {
    return g_NvRmSurfaceDecompressionPolicy;
  }

  char value[20] = {};
  int32_t policy = 1;
  if (NvOsGetConfigString("NV_DECOMPRESSION", value, sizeof(value)) ==
    NvSuccess && value[0] != '\0') {
    if (strcmp(value, "disabled") == 0) {
      policy = 0;
    }
    else if (strcmp(value, "consumer-decompression") == 0 ||
      strcmp(value, "lazy") == 0) {
      policy = 2;
    }
    else if (strcmp(value, "producer-decompression") == 0 ||
      strcmp(value, "client") == 0) {
      policy = 1;
    }
    else if (strcmp(value, "producer-compbits-conversion") == 0 ||
      strcmp(value, "cde-client") == 0) {
      policy = 3;
    }
    else if (strcmp(value, "consumer-compbits-conversion") == 0 ||
      strcmp(value, "cde-lazy") == 0) {
      policy = 4;
    }
  }

  NvOsAtomicCompareExchange32(&g_NvRmSurfaceDecompressionPolicy, -1, policy);
  return g_NvRmSurfaceDecompressionPolicy;
}

extern "C" NvError NvRmSurfaceLoadJson(void* surfaces, void* count,
  void* attributes, const char* path) {
  if (count == nullptr || attributes == nullptr || path == nullptr) {
    return NvError_BadParameter;
  }

  void* file = nullptr;
  NvOsStatType stat = {};
  NvError result = NvOsStat(path, &stat);
  if (result != NvSuccess) {
    return result;
  }

  result = NvOsFopen(path, 1, &file);
  if (result != NvSuccess) {
    return result;
  }

  auto* json = static_cast<char*>(NvOsAlloc(stat.size));
  if (json == nullptr) {
    result = NvError_InsufficientMemory;
  }
  else {
    result = NvOsFread(file, json, stat.size, nullptr);
    if (result == NvSuccess) {
      result = NvRmSurfaceFromJson(surfaces, count, attributes, json,
        static_cast<uint32_t>(stat.size));
    }
  }

  NvOsFcloseEx(file);
  NvOsFree(json);
  return result;
}

// Chroma planes are subsampled by the alignment of the yuv format and share
// the block height of the last plane.
extern "C" NvError NvRmMultiplanarSurfaceSetup(NvRmSurface* surfaces,
  uint32_t planeCount, uint32_t width, uint32_t height, uint32_t yuvFormat,
  const uint64_t* colorFormats, const void* attributes) {
  const uint32_t layoutHint = NvRmPrivGetChipIdLimited().id == 0x21 ? 1 : 4;

  if (yuvFormat > 4) {
    return NvError_BadParameter;
  }

  const uint32_t widthAlignment = g_NvRmYuvWidthAlignment[yuvFormat];
  if (((widthAlignment - 1) & width) != 0) {
    return NvError_BadParameter;
  }

  if (planeCount - 4 < static_cast<uint32_t>(-3)) {
    return NvError_BadParameter;
  }

  const uint32_t heightAlignment = g_NvRmYuvHeightAlignment[yuvFormat];
  if (((heightAlignment - 1) & height) != 0) {
    return NvError_BadParameter;
  }

  if (colorFormats == nullptr || surfaces == nullptr ||
    (planeCount == 1 && yuvFormat != 0)) {
    return NvError_BadParameter;
  }

  NvError result = NvRmSurfaceSetupPlane(&surfaces[0], width, height,
    *colorFormats++, attributes, layoutHint);
  if (result != NvSuccess) {
    return result;
  }

  if (planeCount == 1) {
    return NvSuccess;
  }

  const uint32_t chromaWidth = width >> __builtin_ctz(widthAlignment);
  const uint32_t chromaHeight = height >> __builtin_ctz(heightAlignment);
  for (uint64_t i = 1; i < planeCount; i++) {
    result = NvRmSurfaceSetupPlane(&surfaces[i], chromaWidth, chromaHeight,
      *colorFormats++, attributes, layoutHint);
    if (result != NvSuccess) {
      return result;
    }
  }

  const uint32_t last = planeCount - 1;
  const uint32_t blockHeightLog2 = surfaces[last].blockHeightLog2;
  for (uint64_t i = 0; i < last; i++) {
    surfaces[i].blockHeightLog2 = blockHeightLog2;
  }

  return NvSuccess;
}

// Writes every surface after the other, each read in pitch order.
extern "C" NvError NvRmSurfaceDump(NvRmSurface* surfaces, uint32_t count,
  const char* path) {
  if (surfaces == nullptr || count == 0 || path == nullptr) {
    return NvError_BadParameter;
  }

  void* file = nullptr;
  NvError result = NvOsFopen(path, 6, &file);
  if (result != NvSuccess) {
    return result;
  }

  uint32_t maxSize = 0;
  for (uint64_t i = 0; i < count; i++) {
    const NvRmSurface& surface = surfaces[i];
    const uint32_t size = (BitsPerPixel(surface.colorFormat) * surface.width >>
      3) * surface.height;
    if (maxSize <= size) {
      maxSize = size;
    }
  }

  if (maxSize == 0) {
    result = NvError_BadParameter;
  }
  else {
    void* buffer = NvOsAlloc(maxSize);
    if (buffer == nullptr) {
      result = NvError_InsufficientMemory;
    }
    else {
      for (uint64_t i = 0; i < count; i++) {
        NvRmSurface& surface = surfaces[i];
        NvRmSurfaceRead(&surface, 0, 0, surface.width, surface.height,
          buffer);
        NvOsFwrite(file, buffer, (BitsPerPixel(surface.colorFormat) *
          surface.width >> 3) * surface.height);
      }

      NvOsFree(buffer);
      result = NvSuccess;
    }
  }

  NvOsFcloseEx(file);
  return result;
}
