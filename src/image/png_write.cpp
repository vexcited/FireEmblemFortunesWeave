/*
  Modified libpng source for the recovered SDK ABI.
  Copyright 1995-2019 The PNG Reference Library Authors.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#include "image/png_write.hpp"

using fw::image::PngRowInfo;
using fw::image::PngWriteState;

namespace {

void Pack(PngRowInfo* info, uint8_t* row, unsigned depth) {
  if (info->bit_depth != 8 || info->channels != 1) {
    return;
  }

  if (depth == 1 || depth == 2 || depth == 4) {
    unsigned value = 0;
    unsigned bits = 0;
    size_t destination = 0;

    for (uint32_t pixel = 0; pixel < info->width; ++pixel) {
      unsigned sample = depth == 1 ? row[pixel] != 0
                                    : row[pixel] & ((1U << depth) - 1);
      value |= sample << (8 - depth - bits);
      bits += depth;

      if (bits == 8) {
        row[destination++] = value;
        bits = 0;
        value = 0;
      }
    }

    if (bits != 0) {
      row[destination] = value;
    }
  }

  info->bit_depth = depth;
  info->pixel_depth = info->channels * depth;
  unsigned pixel_depth = info->pixel_depth;
  info->row_bytes = pixel_depth >= 8
    ? size_t{info->width} * (pixel_depth >> 3)
    : (size_t{info->width} * pixel_depth + 7) >> 3;
}

void Shift(PngWriteState* state, PngRowInfo* info, uint8_t* row) {
  unsigned color = info->color_type;

  if (color == 3) {
    return;
  }

  unsigned significant[4] = {};
  unsigned channels;

  if ((color & 2) != 0) {
    significant[0] = state->significant_red;
    significant[1] = state->significant_green;
    significant[2] = state->significant_blue;
    channels = 3;
  }
  else {
    significant[0] = state->significant_gray;
    channels = 1;
  }

  if ((color & 4) != 0) {
    significant[channels++] = state->significant_alpha;
  }

  unsigned depth = info->bit_depth;

  if (depth < 8) {
    unsigned bits = significant[0];
    unsigned mask = state->significant_gray == 1 && depth == 2 ? 0x55
      : state->significant_gray == 3 && depth == 4 ? 0x11 : 0xff;

    for (size_t i = 0; i < info->row_bytes; ++i) {
      unsigned value = row[i];
      unsigned result = 0;
      int shift = depth;

      while (shift > 0) {
        shift -= bits;
        result |= shift > 0 ? value << (shift & 31)
                            : (value >> (-shift & 31)) & mask;
      }

      row[i] = result;
    }
  }
  else {
    uint32_t samples = info->width * channels;
    unsigned bytes = depth == 8 ? 1 : 2;

    for (uint32_t i = 0; i < samples; ++i) {
      unsigned bits = significant[i % channels];
      unsigned value = row[size_t{i} * bytes];

      if (bytes == 2) {
        value = (value << 8) | row[size_t{i} * 2 + 1];
      }

      unsigned result = 0;
      int shift = static_cast<int>(depth) - bits;

      for (;;) {
        result |= shift > 0 ? value << (shift & 31)
                            : value >> (-shift & 31);

        if (shift <= 0) {
          break;
        }

        shift -= bits;
      }

      if (bytes == 2) {
        row[size_t{i} * 2] = result >> 8;
        row[size_t{i} * 2 + 1] = result;
      }
      else {
        row[i] = result;
      }
    }
  }
}

void SwapAlpha(PngRowInfo* info, uint8_t* row) {
  if (info->color_type != 4 && info->color_type != 6) {
    return;
  }

  unsigned sample = info->bit_depth == 8 ? 1 : 2;
  unsigned channels = info->color_type == 4 ? 2 : 4;
  unsigned pixel_bytes = sample * channels;

  for (uint32_t i = 0; i < info->width; ++i) {
    uint8_t* pixel = row + size_t{i} * pixel_bytes;
    uint8_t alpha[2] = {pixel[0], sample == 2 ? pixel[1] : uint8_t{0}};

    for (unsigned j = 0; j < pixel_bytes - sample; ++j) {
      pixel[j] = pixel[j + sample];
    }

    for (unsigned j = 0; j < sample; ++j) {
      pixel[pixel_bytes - sample + j] = alpha[j];
    }
  }
}

void InvertAlpha(PngRowInfo* info, uint8_t* row) {
  if (info->color_type != 4 && info->color_type != 6) {
    return;
  }

  unsigned sample = info->bit_depth == 8 ? 1 : 2;
  unsigned channels = info->color_type == 4 ? 2 : 4;

  for (uint32_t i = 0; i < info->width; ++i) {
    size_t offset = (size_t{i} * channels + channels - 1) * sample;

    for (unsigned byte = 0; byte < sample; ++byte) {
      row[offset + byte] = ~row[offset + byte];
    }
  }
}

}

void nndetailImagePng_png_do_write_transformations(
  PngWriteState* state, PngRowInfo* info
) {
  if (state == nullptr) {
    return;
  }

  if ((state->transformations & 0x100000) != 0 &&
      state->user_transform != nullptr) {
    state->user_transform(state, info, state->row_buffer + 1);
  }

  if ((state->transformations & 0x8000) != 0) {
    nndetailImagePng_png_do_strip_channel(
      info, state->row_buffer + 1, (state->flags & 0x80) == 0
    );
  }

  if ((state->transformations & 0x10000) != 0) {
    nndetailImagePng_png_do_packswap(info, state->row_buffer + 1);
  }

  if ((state->transformations & 4) != 0) {
    Pack(info, state->row_buffer + 1, state->bit_depth);
  }

  if ((state->transformations & 0x10) != 0) {
    nndetailImagePng_png_do_swap(info, state->row_buffer + 1);
  }

  if ((state->transformations & 8) != 0) {
    Shift(state, info, state->row_buffer + 1);
  }

  if ((state->transformations & 0x20000) != 0) {
    SwapAlpha(info, state->row_buffer + 1);
  }

  if ((state->transformations & 0x80000) != 0) {
    InvertAlpha(info, state->row_buffer + 1);
  }

  if ((state->transformations & 1) != 0) {
    nndetailImagePng_png_do_bgr(info, state->row_buffer + 1);
  }

  if ((state->transformations & 0x20) != 0) {
    nndetailImagePng_png_do_invert(info, state->row_buffer + 1);
  }
}
