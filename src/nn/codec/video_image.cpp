#include "nn/codec/video_image.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::codec {

VideoDecoderImagePreference MakeDecodeImagePreference(uint16_t width,
  uint16_t height, VideoDecoderOutputFormat format, ImageTilingMode tiling) {
  const uint32_t index = uint32_t(format) - 2;
  const uint32_t mode = uint32_t(tiling);

  if ((mode != 1 && mode != 2) || index >= 4) {
    nn::detail::UnexpectedDefaultImpl();
  }

  constexpr uint32_t formats[2][4] = {{2, 1, 10, 11}, {5, 4, 12, 13}};
  VideoDecoderImagePreference preference{};
  preference.format = formats[mode - 1][index];
  preference.width_minus_one = width - 1;
  preference.height_minus_one = height - 1;
  return preference;
}

VideoEncoderImagePreference MakeEncodeImagePreference(uint16_t width,
  uint16_t height, VideoEncoderInputFormat format, ImageTilingMode tiling) {
  const uint32_t mode = uint32_t(tiling);
  uint32_t selected;

  switch (uint32_t(format)) {
    case 1:
      if (mode == 2) {
        nn::diag::detail::AbortImpl();
      }

      if (mode != 1) {
        nn::detail::UnexpectedDefaultImpl();
      }

      selected = 2;
      break;
    case 2:
      if (mode != 1 && mode != 2) {
        nn::detail::UnexpectedDefaultImpl();
      }

      selected = mode == 1 ? 4 : 1;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  VideoEncoderImagePreference preference{};
  preference.format = selected;
  preference.width_minus_one = width - 1;
  preference.height_minus_one = height - 1;
  return preference;
}

}
