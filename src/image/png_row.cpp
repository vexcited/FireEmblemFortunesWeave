/*
  Modified libpng source for the recovered SDK ABI.
  Copyright 1995-2019 The PNG Reference Library Authors.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#include "image/png_row.hpp"

using fw::image::PngRowInfo;

namespace {

constexpr uint32_t increments[] = {8, 8, 4, 4, 2, 2, 1};
constexpr uint32_t starts[] = {0, 4, 0, 2, 0, 1, 0};

uint8_t ReadPacked(const uint8_t* row, uint32_t pixel, unsigned depth,
                   bool reversed) {
  unsigned bit = pixel * depth;
  unsigned shift = reversed ? bit & 7 : 8 - depth - (bit & 7);
  return (row[bit >> 3] >> shift) & ((1U << depth) - 1);
}

void WritePacked(uint8_t* row, uint32_t pixel, unsigned depth,
                 bool reversed, uint8_t value) {
  unsigned bit = pixel * depth;
  unsigned shift = reversed ? bit & 7 : 8 - depth - (bit & 7);
  unsigned mask = ((1U << depth) - 1) << shift;
  row[bit >> 3] = (row[bit >> 3] & ~mask) | (value << shift);
}

size_t RowBytes(uint32_t width, unsigned depth) {
  return depth >= 8 ? size_t{width} * (depth >> 3)
                    : (size_t{width} * depth + 7) >> 3;
}

}

void nndetailImagePng_png_do_invert(PngRowInfo* info, uint8_t* row) {
  if (info->color_type == 0) {
    for (size_t i = 0; i < info->row_bytes; ++i) {
      row[i] = ~row[i];
    }
  }
  else if (info->color_type == 4) {
    if (info->bit_depth == 8) {
      for (size_t i = 0; i < info->row_bytes; i += 2) {
        row[i] = ~row[i];
      }
    }
    else if (info->bit_depth == 16) {
      for (size_t i = 0; i < info->row_bytes; i += 4) {
        row[i] = ~row[i];
        row[i + 1] = ~row[i + 1];
      }
    }
  }
}

void nndetailImagePng_png_do_swap(PngRowInfo* info, uint8_t* row) {
  if (info->bit_depth == 16) {
    uint32_t samples = info->width * info->channels;

    for (uint32_t i = 0; i < samples; ++i) {
      uint8_t value = row[2 * i];
      row[2 * i] = row[2 * i + 1];
      row[2 * i + 1] = value;
    }
  }
}

void nndetailImagePng_png_do_packswap(PngRowInfo* info, uint8_t* row) {
  unsigned depth = info->bit_depth;

  if (depth != 1 && depth != 2 && depth != 4) {
    return;
  }

  unsigned mask = (1U << depth) - 1;

  for (size_t i = 0; i < info->row_bytes; ++i) {
    unsigned input = row[i];
    unsigned output = 0;

    for (unsigned bit = 0; bit < 8; bit += depth) {
      output = (output << depth) | (input & mask);
      input >>= depth;
    }

    row[i] = output;
  }
}

void nndetailImagePng_png_do_strip_channel(
  PngRowInfo* info, uint8_t* row, int at_start
) {
  if ((info->channels != 2 && info->channels != 4) ||
      (info->bit_depth != 8 && info->bit_depth != 16)) {
    return;
  }

  size_t sample = info->bit_depth >> 3;
  size_t original_pixel = info->channels * sample;
  size_t remaining = original_pixel - sample;
  size_t source = at_start != 0 ? sample : original_pixel;
  size_t destination = at_start != 0 ? 0 : remaining;

  for (; source < info->row_bytes; source += original_pixel) {
    for (size_t i = 0; i < remaining; ++i) {
      row[destination + i] = row[source + i];
    }

    destination += remaining;
  }

  --info->channels;
  info->pixel_depth = info->channels * info->bit_depth;

  if ((info->channels == 1 && info->color_type == 4) ||
      (info->channels == 3 && info->color_type == 6)) {
    info->color_type -= 4;
  }

  info->row_bytes = destination;
}

void nndetailImagePng_png_do_bgr(PngRowInfo* info, uint8_t* row) {
  if ((info->color_type != 2 && info->color_type != 6) ||
      (info->bit_depth != 8 && info->bit_depth != 16)) {
    return;
  }

  unsigned sample = info->bit_depth >> 3;
  unsigned channels = info->color_type == 2 ? 3 : 4;

  for (uint32_t pixel = 0; pixel < info->width; ++pixel) {
    size_t offset = size_t{pixel} * channels * sample;

    for (unsigned byte = 0; byte < sample; ++byte) {
      uint8_t value = row[offset + byte];
      row[offset + byte] = row[offset + 2 * sample + byte];
      row[offset + 2 * sample + byte] = value;
    }
  }
}

void nndetailImagePng_png_do_read_interlace(
  PngRowInfo* info, uint8_t* row, int pass, uint32_t transformations
) {
  if (info == nullptr || row == nullptr) {
    return;
  }

  uint32_t repeat = increments[pass];
  uint32_t width = info->width * repeat;
  unsigned depth = info->pixel_depth;
  bool packed = depth == 1 || depth == 2 || depth == 4;
  bool reversed = (transformations & 0x10000) != 0;

  for (uint32_t pixel = info->width; pixel != 0;) {
    --pixel;

    if (packed) {
      uint8_t value = ReadPacked(row, pixel, depth, reversed);

      for (uint32_t copy = repeat; copy != 0; --copy) {
        WritePacked(row, pixel * repeat + copy - 1, depth, reversed, value);
      }
    }
    else {
      unsigned bytes = depth >> 3;
      uint8_t value[8];
      __builtin_memcpy(value, row + size_t{pixel} * bytes, bytes);

      for (uint32_t copy = repeat; copy != 0; --copy) {
        size_t destination = size_t{pixel * repeat + copy - 1} * bytes;
        __builtin_memcpy(row + destination, value, bytes);
      }
    }
  }

  info->width = width;
  info->row_bytes = RowBytes(width, info->pixel_depth);
}

void nndetailImagePng_png_do_write_interlace(
  PngRowInfo* info, uint8_t* row, int pass
) {
  if (pass > 5) {
    return;
  }

  uint32_t start = starts[pass];
  uint32_t increment = increments[pass];
  unsigned depth = info->pixel_depth;
  bool packed = depth == 1 || depth == 2 || depth == 4;
  uint32_t destination = 0;
  unsigned packed_value = 0;
  unsigned packed_bits = 0;

  for (uint32_t pixel = start; pixel < info->width; pixel += increment) {
    if (packed) {
      uint8_t value = ReadPacked(row, pixel, depth, false);

      packed_value |= value << (8 - depth - packed_bits);
      packed_bits += depth;

      if (packed_bits == 8) {
        row[destination * depth >> 3] = packed_value;
        packed_bits = 0;
        packed_value = 0;
      }
    }
    else {
      unsigned bytes = depth >> 3;

      if (destination != pixel) {
        __builtin_memcpy(row + size_t{destination} * bytes,
                         row + size_t{pixel} * bytes, bytes);
      }
    }

    ++destination;
  }

  if (packed_bits != 0) {
    row[destination * depth >> 3] = packed_value;
  }

  info->width = (info->width + ~start + increment) / increment;
  info->row_bytes = RowBytes(info->width, info->pixel_depth);
}
