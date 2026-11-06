#include "nn/gsv/gsv_user_image.hpp"

namespace nn::gpu::sdk {

using gsv::imgdesc::impl::user::ounce::GpuOunceAlphaMode;
using gsv::imgdesc::impl::user::ounce::GpuOunceImageBlockFormat;
using gsv::imgdesc::impl::user::ounce::GpuOunceImagePixelFormat;
using gsv::imgdesc::impl::user::ounce::GpuOunceUserImagePreference;

namespace {

constexpr uint32_t LayoutKindBlockLinear = 1;
constexpr uint32_t LayoutKindPitchLinear = 2;

}

GpuOunceUserImagePreference MakeRgbaBlockImagePreference(int width,
  int height, int levelCount, int layerCount,
  GpuOunceImagePixelFormat pixelFormat, uint16_t flags,
  GpuOunceImageBlockFormat blockFormat) {
  GpuOunceUserImagePreference preference = {};
  preference.layoutKind = LayoutKindBlockLinear;
  preference.widthMinusOne = static_cast<uint16_t>(width - 1);
  preference.heightMinusOne = static_cast<uint16_t>(height - 1);
  preference.block.levelCount = static_cast<uint8_t>(levelCount);
  preference.block.layerCount = static_cast<uint32_t>(layerCount);
  preference.block.pixelFormat = pixelFormat;
  preference.block.blockFormat = blockFormat;
  preference.block.flags = flags;
  return preference;
}

GpuOunceUserImagePreference MakeRgbaPitchImagePreference(int width,
  int height, int pitch, GpuOunceImagePixelFormat pixelFormat,
  GpuOunceAlphaMode alphaMode, uint16_t flags) {
  GpuOunceUserImagePreference preference = {};
  preference.layoutKind = LayoutKindPitchLinear;
  preference.widthMinusOne = static_cast<uint16_t>(width - 1);
  preference.heightMinusOne = static_cast<uint16_t>(height - 1);
  preference.pitch.pitch = static_cast<uint32_t>(pitch);
  preference.pitch.pixelFormat = pixelFormat;
  preference.pitch.flags = flags;
  preference.pitch.alphaMode = alphaMode;
  return preference;
}

}
