#include <string.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/gsv/gsv_user_image.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/result.hpp"

namespace nn::gs::sdk {

using gsv::imgdesc::impl::user::ounce::CpuUserImageDescriptor;
using gsv::imgdesc::impl::user::ounce::CpuUserImagePlane;

enum UserImageTransform : int {
  UserImageTransform_None,
  UserImageTransform_FlipVertical,
};

namespace detail {

struct UserImagePlane {
  uint32_t offset;
  uint32_t bytesPerPixel;
  uint32_t pitch;
  uint32_t blockLayout;

  uint16_t GetWidthInBlocks() const {
    return static_cast<uint16_t>(pitch);
  }

  uint16_t GetBlockWidth() const {
    return static_cast<uint16_t>(blockLayout);
  }

  uint16_t GetBlockHeight() const {
    return static_cast<uint16_t>(blockLayout >> 16);
  }
};

[[gnu::noinline]] void ReadBlockLinearUserImage(void* dst, size_t dstStride,
  const void* image, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const UserImagePlane* plane, int bytesPerPixel);
[[gnu::noinline]] void WriteBlockLinearUserImage(void* image, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height, const UserImagePlane* plane,
  const void* src, size_t srcStride, int bytesPerPixel,
  UserImageTransform transform);

}

namespace {

constexpr Result ResultInvalidImageKind = {0x100f3};

// Kinds 14, 15 and 22 are accepted as 4 byte RGBA too, their exact formats
// are unknown.
enum ImageKind : uint8_t {
  ImageKind_Rgba8Linear = 8,
  ImageKind_Bgra8Linear = 9,
  ImageKind_Rgba8BlockLinear = 11,
  ImageKind_Bgra8BlockLinear = 12,
  ImageKind_Rgba8Linear2 = 14,
  ImageKind_Rgba8BlockLinear2 = 15,
  ImageKind_Rgba16FloatLinear = 17,
  ImageKind_Rgba16FloatBlockLinear = 18,
  ImageKind_Rgba8BlockLinear3 = 22,
};

constexpr uint8_t LumaBlankValue = 16;
constexpr uint8_t ChromaBlankValue = 128;

// NV12 kinds 10 and 20 are pitch linear, 13 and 21 block linear. YUV 4:4:0
// kinds 16 and 19 are pitch linear.
enum YuvImageKind : uint8_t {
  YuvImageKind_Nv12Linear = 10,
  YuvImageKind_Nv12BlockLinear = 13,
  YuvImageKind_Yuv440Linear = 16,
  YuvImageKind_Yuv440Linear2 = 19,
  YuvImageKind_Nv12Linear2 = 20,
  YuvImageKind_Nv12BlockLinear2 = 21,
};

detail::UserImagePlane MakePlane(const CpuUserImagePlane& plane,
  uint32_t bytesPerPixel) {
  return {plane.offset, bytesPerPixel, plane.pitch, plane.blockLayout};
}

// Row offsets wrap at 32 bits, rows at 16 bits.
template <size_t BytesPerPixel>
void ReadPitchLinear(void* dst, size_t dstStride,
  const CpuUserImagePlane& plane, const void* image, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height) {
  const uint32_t pitch = plane.pitch;
  const uint8_t* base = static_cast<const uint8_t*>(image) +
    plane.offset + BytesPerPixel * x;
  const uint32_t top = pitch * y;
  os::FlushDataCache(base + top, BytesPerPixel * uint16_t(x + width - 1) +
    uint32_t(pitch * uint16_t(y + height - 1)) -
    (BytesPerPixel * x + top) + 1);

  uint8_t* output = static_cast<uint8_t*>(dst);
  for (uint32_t row = 0; row < height; ++row) {
    memcpy(output + static_cast<uint32_t>(row * dstStride),
      base + uint32_t(pitch * uint16_t(y + row)), BytesPerPixel * width);
  }
}

template <size_t BytesPerPixel>
void WritePitchLinear(const CpuUserImagePlane& plane, void* image,
  uint16_t x, uint16_t y, uint16_t width, uint16_t height, const void* src,
  size_t srcStride, UserImageTransform transform) {
  const uint32_t pitch = plane.pitch;
  int start;
  int step;
  switch (transform) {
    case UserImageTransform_None:
      start = 0;
      step = 1;
      break;
    case UserImageTransform_FlipVertical:
      start = height - 1;
      step = -1;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  uint8_t* base = static_cast<uint8_t*>(image) + plane.offset +
    BytesPerPixel * x;
  const uint8_t* input = static_cast<const uint8_t*>(src);
  for (uint32_t row = 0; row < height; ++row) {
    memcpy(base + uint32_t(pitch * uint16_t(y + row)),
      input + uint32_t(uint32_t(srcStride) * uint16_t(start + step * row)),
      BytesPerPixel * width);
  }

  const uint32_t top = pitch * y;
  os::FlushDataCache(base + top, uint32_t(pitch * uint16_t(height + y - 1)) +
    BytesPerPixel * uint16_t(x + width - 1) - (BytesPerPixel * x + top) + 1);
}

}

Result ReadUserImageRgba(void* dst, size_t /* dstSize */, size_t dstStride,
  const CpuUserImageDescriptor& descriptor, const void* image, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height) {
  const uint8_t kind = descriptor.kind;
  if (kind == ImageKind_Rgba8Linear || kind == ImageKind_Rgba8Linear2) {
    ReadPitchLinear<4>(dst, dstStride, descriptor.planes[0], image, x, y,
      width, height);
    return Result();
  }
  if (kind == ImageKind_Rgba8BlockLinear ||
    kind == ImageKind_Rgba8BlockLinear2 ||
    kind == ImageKind_Rgba8BlockLinear3) {
    const detail::UserImagePlane plane = MakePlane(descriptor.planes[0], 4);
    detail::ReadBlockLinearUserImage(dst, dstStride, image, x, y, width,
      height, &plane, 4);
    return Result();
  }
  return ResultInvalidImageKind;
}

Result ReadUserImageBgra(void* dst, size_t /* dstSize */, size_t dstStride,
  const CpuUserImageDescriptor& descriptor, const void* image, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height) {
  if (descriptor.kind == ImageKind_Bgra8BlockLinear) {
    const detail::UserImagePlane plane = MakePlane(descriptor.planes[0], 4);
    detail::ReadBlockLinearUserImage(dst, dstStride, image, x, y, width,
      height, &plane, 4);
    return Result();
  }
  if (descriptor.kind != ImageKind_Bgra8Linear) {
    return ResultInvalidImageKind;
  }
  ReadPitchLinear<4>(dst, dstStride, descriptor.planes[0], image, x, y,
    width, height);
  return Result();
}

Result ReadUserImageRgbaFloat(void* dst, size_t /* dstSize */,
  size_t dstStride, const CpuUserImageDescriptor& descriptor,
  const void* image, uint16_t x, uint16_t y, uint16_t width,
  uint16_t height) {
  if (descriptor.kind == ImageKind_Rgba16FloatBlockLinear) {
    const detail::UserImagePlane plane = MakePlane(descriptor.planes[0], 8);
    detail::ReadBlockLinearUserImage(dst, dstStride, image, x, y, width,
      height, &plane, 8);
    return Result();
  }
  if (descriptor.kind != ImageKind_Rgba16FloatLinear) {
    return ResultInvalidImageKind;
  }
  ReadPitchLinear<8>(dst, dstStride, descriptor.planes[0], image, x, y,
    width, height);
  return Result();
}

Result WriteUserImageRgba(const CpuUserImageDescriptor& descriptor,
  void* image, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const void* src, size_t /* srcSize */, size_t srcStride,
  UserImageTransform transform) {
  const uint8_t kind = descriptor.kind;
  if (kind == ImageKind_Rgba8Linear || kind == ImageKind_Rgba8Linear2) {
    WritePitchLinear<4>(descriptor.planes[0], image, x, y, width, height, src,
      srcStride, transform);
    return Result();
  }
  if (kind == ImageKind_Rgba8BlockLinear ||
    kind == ImageKind_Rgba8BlockLinear2 ||
    kind == ImageKind_Rgba8BlockLinear3) {
    const detail::UserImagePlane plane = MakePlane(descriptor.planes[0], 4);
    detail::WriteBlockLinearUserImage(image, x, y, width, height, &plane,
      src, srcStride, 4, transform);
    return Result();
  }
  return ResultInvalidImageKind;
}

Result WriteUserImageBgra(const CpuUserImageDescriptor& descriptor,
  void* image, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const void* src, size_t /* srcSize */, size_t srcStride,
  UserImageTransform transform) {
  if (descriptor.kind == ImageKind_Bgra8BlockLinear) {
    const detail::UserImagePlane plane = MakePlane(descriptor.planes[0], 4);
    detail::WriteBlockLinearUserImage(image, x, y, width, height, &plane,
      src, srcStride, 4, transform);
    return Result();
  }
  if (descriptor.kind != ImageKind_Bgra8Linear) {
    return ResultInvalidImageKind;
  }
  WritePitchLinear<4>(descriptor.planes[0], image, x, y, width, height, src,
    srcStride, transform);
  return Result();
}

Result WriteUserImageRgbaFloat(const CpuUserImageDescriptor& descriptor,
  void* image, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const void* src, size_t /* srcSize */, size_t srcStride,
  UserImageTransform transform) {
  if (descriptor.kind == ImageKind_Rgba16FloatBlockLinear) {
    const detail::UserImagePlane plane = MakePlane(descriptor.planes[0], 8);
    detail::WriteBlockLinearUserImage(image, x, y, width, height, &plane,
      src, srcStride, 8, transform);
    return Result();
  }
  if (descriptor.kind != ImageKind_Rgba16FloatLinear) {
    return ResultInvalidImageKind;
  }
  WritePitchLinear<8>(descriptor.planes[0], image, x, y, width, height, src,
    srcStride, transform);
  return Result();
}

namespace {

// Block linear planes are made of GOBs of 512 bytes, 64 bytes wide and 8
// rows high, stacked in blocks of the plane block size.
[[gnu::always_inline]] uint64_t GetBlockLinearOffset(
  const detail::UserImagePlane* plane, uint16_t x, uint16_t y) {
  const uint32_t bytesPerPixel = plane->bytesPerPixel;
  const uint32_t blockWidth = plane->GetBlockWidth();
  const uint32_t blockHeight = plane->GetBlockHeight();
  const uint32_t gobWidth = 64 / bytesPerPixel;
  const uint32_t halfGobWidth = gobWidth >> 1;
  const uint32_t quarterGobWidth = gobWidth >> 2;
  const uint16_t block = static_cast<uint16_t>(x / blockWidth +
    plane->GetWidthInBlocks() * (y / blockHeight));
  const uint16_t blockX = x % blockWidth;
  const uint32_t blockY = y % blockHeight;
  const uint32_t blockSize = bytesPerPixel * blockWidth * blockHeight;
  return plane->offset + static_cast<uint64_t>(block) * blockSize +
    (static_cast<uint64_t>(static_cast<uint8_t>(blockY >> 3)) << 9) +
    bytesPerPixel * (blockX % quarterGobWidth) +
    (((blockY << 5) & 0x80) | ((blockY & 3) << 4) |
      ((blockX % gobWidth / halfGobWidth) << 8)) +
    ((blockX % halfGobWidth / quarterGobWidth) << 6);
}

[[gnu::always_inline]] void FlushBlockLinear(const void* image,
  const detail::UserImagePlane* plane, uint16_t x, uint16_t y,
  uint16_t width, uint16_t height) {
  const uint64_t first = GetBlockLinearOffset(plane, x, y);
  const uint64_t last = GetBlockLinearOffset(plane,
    static_cast<uint16_t>(x + width - 1),
    static_cast<uint16_t>(y + height - 1));
  os::FlushDataCache(static_cast<const uint8_t*>(image) + first,
    last - first + 1);
}

}

namespace detail {

void ReadBlockLinearUserImage(void* dst, size_t dstStride, const void* image,
  uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const UserImagePlane* plane, int bytesPerPixel) {
  FlushBlockLinear(image, plane, x, y, width, height);
  const uint32_t pixelSize = plane->bytesPerPixel;
  const uint32_t pixelStep = bytesPerPixel;
  uint8_t* output = static_cast<uint8_t*>(dst);
  for (uint16_t row = 0; row != height; ++row) {
    uint8_t* pixel = output + static_cast<uint32_t>(row * dstStride);
    for (uint16_t column = 0; column != width; ++column) {
      memcpy(pixel, static_cast<const uint8_t*>(image) +
        GetBlockLinearOffset(plane, static_cast<uint16_t>(x + column),
          static_cast<uint16_t>(y + row)), pixelSize);
      pixel += pixelStep;
    }
  }
}

void WriteBlockLinearUserImage(void* image, uint16_t x, uint16_t y,
  uint16_t width, uint16_t height, const UserImagePlane* plane,
  const void* src, size_t srcStride, int bytesPerPixel,
  UserImageTransform transform) {
  int start;
  int step;
  switch (transform) {
    case UserImageTransform_None:
      start = 0;
      step = 1;
      break;
    case UserImageTransform_FlipVertical:
      start = height - 1;
      step = -1;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  const uint32_t pixelSize = bytesPerPixel;
  for (uint16_t row = 0; row != height; ++row) {
    const uint8_t* pixel = static_cast<const uint8_t*>(src) +
      static_cast<uint32_t>(srcStride) * static_cast<uint16_t>(start +
        step * row);
    for (uint16_t column = 0; column != width; ++column) {
      memcpy(static_cast<uint8_t*>(image) + GetBlockLinearOffset(plane,
        static_cast<uint16_t>(x + column), static_cast<uint16_t>(y + row)),
        pixel, pixelSize);
      pixel += pixelSize;
    }
  }
  FlushBlockLinear(image, plane, x, y, width, height);
}

}

Result ReadUserImageNv12(void* yDst, size_t /* ySize */, size_t yStride,
  void* uvDst, size_t /* uvSize */, size_t uvStride,
  const CpuUserImageDescriptor& descriptor, const void* image, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height) {
  switch (descriptor.kind) {
    case YuvImageKind_Nv12Linear:
    case YuvImageKind_Nv12Linear2:
      ReadPitchLinear<1>(yDst, yStride, descriptor.planes[0], image, x, y,
        width, height);
      ReadPitchLinear<2>(uvDst, uvStride, descriptor.planes[1], image, x >> 1,
        y >> 1, width >> 1, height >> 1);
      return Result();
    case YuvImageKind_Nv12BlockLinear: {
      const detail::UserImagePlane luma = MakePlane(descriptor.planes[0], 1);
      detail::ReadBlockLinearUserImage(yDst, yStride, image, x, y, width,
        height, &luma, 1);
      const detail::UserImagePlane chroma = MakePlane(descriptor.planes[1], 2);
      detail::ReadBlockLinearUserImage(uvDst, uvStride, image, x >> 1, y >> 1,
        width >> 1, height >> 1, &chroma, 2);
      return Result();
    }
    case YuvImageKind_Nv12BlockLinear2: {
      const detail::UserImagePlane luma = MakePlane(descriptor.planes[1], 1);
      detail::ReadBlockLinearUserImage(yDst, yStride, image, x, y, width,
        height, &luma, 1);
      const detail::UserImagePlane chroma = MakePlane(descriptor.planes[1], 2);
      detail::ReadBlockLinearUserImage(uvDst, uvStride, image, x >> 1, y >> 1,
        width >> 1, height >> 1, &chroma, 2);
      return Result();
    }
    default:
      return ResultInvalidImageKind;
  }
}

// Both chroma planes have half the rows but start at the luma row.
Result ReadUserImageYuv440(void* yDst, void* uDst, void* vDst,
  size_t /* ySize */, size_t yStride, size_t /* uSize */, size_t uStride,
  size_t /* vSize */, size_t vStride, const CpuUserImageDescriptor& descriptor,
  const void* image, uint16_t x, uint16_t y, uint16_t width,
  uint16_t height) {
  if (descriptor.kind != YuvImageKind_Yuv440Linear &&
    descriptor.kind != YuvImageKind_Yuv440Linear2) {
    return ResultInvalidImageKind;
  }
  ReadPitchLinear<1>(yDst, yStride, descriptor.planes[0], image, x, y, width,
    height);
  ReadPitchLinear<1>(uDst, uStride, descriptor.planes[1], image, x, y, width,
    height >> 1);
  ReadPitchLinear<1>(vDst, vStride, descriptor.planes[2], image, x, y, width,
    height >> 1);
  return Result();
}

Result WriteUserImageNv12(const CpuUserImageDescriptor& descriptor,
  void* image, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const void* ySrc, size_t /* ySize */, size_t yStride, const void* uvSrc,
  size_t /* uvSize */, size_t uvStride, UserImageTransform transform) {
  if (descriptor.kind == YuvImageKind_Nv12BlockLinear) {
    const detail::UserImagePlane luma = MakePlane(descriptor.planes[0], 1);
    detail::WriteBlockLinearUserImage(image, x, y, width, height, &luma, ySrc,
      yStride, 1, transform);
    const detail::UserImagePlane chroma = MakePlane(descriptor.planes[1], 2);
    detail::WriteBlockLinearUserImage(image, x >> 1, y >> 1, width >> 1,
      height >> 1, &chroma, uvSrc, uvStride, 2, transform);
    return Result();
  }
  if (descriptor.kind != YuvImageKind_Nv12Linear) {
    return ResultInvalidImageKind;
  }
  WritePitchLinear<1>(descriptor.planes[0], image, x, y, width, height, ySrc,
    yStride, transform);
  WritePitchLinear<2>(descriptor.planes[1], image, x >> 1, y >> 1, width >> 1,
    height >> 1, uvSrc, uvStride, transform);
  return Result();
}

Result BlankUserImage(const CpuUserImageDescriptor& descriptor, void* image,
  size_t /* size */) {
  auto blankYuv = [&image](CpuUserImageDescriptor yuvDescriptor)
    __attribute__((noinline)) {
    uint8_t* luma = static_cast<uint8_t*>(image) +
      yuvDescriptor.planes[0].offset;
    memset(luma, LumaBlankValue,
      static_cast<int32_t>(yuvDescriptor.planes[0].size));
    os::FlushDataCache(luma, yuvDescriptor.planes[0].size);
    uint8_t* chroma = static_cast<uint8_t*>(image) +
      yuvDescriptor.planes[1].offset;
    memset(chroma, ChromaBlankValue,
      static_cast<int32_t>(yuvDescriptor.planes[1].size));
    os::FlushDataCache(chroma, yuvDescriptor.planes[1].size);
  };

  switch (descriptor.kind) {
    case ImageKind_Rgba8Linear:
    case ImageKind_Bgra8Linear:
    case ImageKind_Rgba8BlockLinear:
    case ImageKind_Bgra8BlockLinear:
    case ImageKind_Rgba8Linear2:
    case ImageKind_Rgba8BlockLinear2:
    case ImageKind_Rgba16FloatLinear:
    case ImageKind_Rgba16FloatBlockLinear: {
      uint8_t* data = static_cast<uint8_t*>(image) +
        descriptor.planes[0].offset;
      memset(data, 0, static_cast<int32_t>(descriptor.planes[0].size));
      os::FlushDataCache(data, descriptor.planes[0].size);
      return Result();
    }
    case YuvImageKind_Nv12Linear:
    case YuvImageKind_Nv12BlockLinear:
      blankYuv(descriptor);
      return Result();
    default:
      return ResultInvalidImageKind;
  }
}

}
