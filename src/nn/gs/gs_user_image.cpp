#include <string.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/gsv/gsv_user_image.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/result.hpp"

namespace nn::gs::sdk {

using gsv::imgdesc::impl::user::ounce::CpuUserImageDescriptor;

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
};

void ReadBlockLinearUserImage(void* dst, size_t dstStride, const void* image,
  uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const UserImagePlane* plane, int bytesPerPixel);
void WriteBlockLinearUserImage(void* image, uint16_t x, uint16_t y,
  uint16_t width, uint16_t height, const UserImagePlane* plane,
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

detail::UserImagePlane MakePlane(const CpuUserImageDescriptor& descriptor,
  uint32_t bytesPerPixel) {
  return {descriptor.offset, bytesPerPixel, descriptor.pitch,
    descriptor.blockLayout};
}

// Row offsets wrap at 32 bits, rows at 16 bits.
template <size_t BytesPerPixel>
void ReadPitchLinear(void* dst, size_t dstStride,
  const CpuUserImageDescriptor& descriptor, const void* image, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height) {
  const uint32_t pitch = descriptor.pitch;
  const uint8_t* base = static_cast<const uint8_t*>(image) +
    descriptor.offset + BytesPerPixel * x;
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
void WritePitchLinear(const CpuUserImageDescriptor& descriptor, void* image,
  uint16_t x, uint16_t y, uint16_t width, uint16_t height, const void* src,
  size_t srcStride, UserImageTransform transform) {
  const uint32_t pitch = descriptor.pitch;
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

  uint8_t* base = static_cast<uint8_t*>(image) + descriptor.offset +
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
    ReadPitchLinear<4>(dst, dstStride, descriptor, image, x, y, width,
      height);
    return Result();
  }
  if (kind == ImageKind_Rgba8BlockLinear ||
    kind == ImageKind_Rgba8BlockLinear2 ||
    kind == ImageKind_Rgba8BlockLinear3) {
    const detail::UserImagePlane plane = MakePlane(descriptor, 4);
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
    const detail::UserImagePlane plane = MakePlane(descriptor, 4);
    detail::ReadBlockLinearUserImage(dst, dstStride, image, x, y, width,
      height, &plane, 4);
    return Result();
  }
  if (descriptor.kind != ImageKind_Bgra8Linear) {
    return ResultInvalidImageKind;
  }
  ReadPitchLinear<4>(dst, dstStride, descriptor, image, x, y, width, height);
  return Result();
}

Result ReadUserImageRgbaFloat(void* dst, size_t /* dstSize */,
  size_t dstStride, const CpuUserImageDescriptor& descriptor,
  const void* image, uint16_t x, uint16_t y, uint16_t width,
  uint16_t height) {
  if (descriptor.kind == ImageKind_Rgba16FloatBlockLinear) {
    const detail::UserImagePlane plane = MakePlane(descriptor, 8);
    detail::ReadBlockLinearUserImage(dst, dstStride, image, x, y, width,
      height, &plane, 8);
    return Result();
  }
  if (descriptor.kind != ImageKind_Rgba16FloatLinear) {
    return ResultInvalidImageKind;
  }
  ReadPitchLinear<8>(dst, dstStride, descriptor, image, x, y, width, height);
  return Result();
}

Result WriteUserImageRgba(const CpuUserImageDescriptor& descriptor,
  void* image, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const void* src, size_t /* srcSize */, size_t srcStride,
  UserImageTransform transform) {
  const uint8_t kind = descriptor.kind;
  if (kind == ImageKind_Rgba8Linear || kind == ImageKind_Rgba8Linear2) {
    WritePitchLinear<4>(descriptor, image, x, y, width, height, src,
      srcStride, transform);
    return Result();
  }
  if (kind == ImageKind_Rgba8BlockLinear ||
    kind == ImageKind_Rgba8BlockLinear2 ||
    kind == ImageKind_Rgba8BlockLinear3) {
    const detail::UserImagePlane plane = MakePlane(descriptor, 4);
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
    const detail::UserImagePlane plane = MakePlane(descriptor, 4);
    detail::WriteBlockLinearUserImage(image, x, y, width, height, &plane,
      src, srcStride, 4, transform);
    return Result();
  }
  if (descriptor.kind != ImageKind_Bgra8Linear) {
    return ResultInvalidImageKind;
  }
  WritePitchLinear<4>(descriptor, image, x, y, width, height, src, srcStride,
    transform);
  return Result();
}

Result WriteUserImageRgbaFloat(const CpuUserImageDescriptor& descriptor,
  void* image, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const void* src, size_t /* srcSize */, size_t srcStride,
  UserImageTransform transform) {
  if (descriptor.kind == ImageKind_Rgba16FloatBlockLinear) {
    const detail::UserImagePlane plane = MakePlane(descriptor, 8);
    detail::WriteBlockLinearUserImage(image, x, y, width, height, &plane,
      src, srcStride, 8, transform);
    return Result();
  }
  if (descriptor.kind != ImageKind_Rgba16FloatLinear) {
    return ResultInvalidImageKind;
  }
  WritePitchLinear<8>(descriptor, image, x, y, width, height, src, srcStride,
    transform);
  return Result();
}

}
