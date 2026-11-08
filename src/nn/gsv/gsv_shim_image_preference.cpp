#include "nn/gsv/gsv_user_image.hpp"

namespace nn::gsv::imgdesc::impl::user::ounce {

enum InterModuleImagePixelFormat : uint8_t {};
enum InterModuleImageOunceBlockFormat : uint8_t {};

}

namespace nn::gsv::shim {

namespace {

using namespace imgdesc::impl::user::ounce;

constexpr uint32_t LayoutKindBlockLinear = 2;

}

GpuOunceUserImagePreference MakeInterModuleBlockUserImagePreference(
  uint16_t width, uint16_t height, uint32_t levelCount, uint32_t layerCount,
  InterModuleImagePixelFormat pixelFormat,
  InterModuleImageOunceBlockFormat blockFormat, uint16_t flags) {
  GpuOunceUserImagePreference preference = {};
  preference.layoutKind = LayoutKindBlockLinear;
  preference.widthMinusOne = static_cast<uint16_t>(width - 1);
  preference.heightMinusOne = static_cast<uint16_t>(height - 1);
  preference.block.levelCount = levelCount;
  preference.block.layerCount = layerCount;
  preference.block.pixelFormat = pixelFormat;
  preference.block.blockFormat = blockFormat;
  preference.block.flags = flags;
  return preference;
}

}
