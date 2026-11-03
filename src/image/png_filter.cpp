/*
  Modified libpng source for the recovered SDK ABI.
  Copyright 1995-2019 The PNG Reference Library Authors.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#include "image/png_filter.hpp"

namespace {

enum class Filter {
  Sub,
  Average,
  Paeth
};

int Absolute(int value) {
  return value < 0 ? -value : value;
}

uint8_t Paeth(uint8_t left, uint8_t above, uint8_t corner) {
  int left_distance = Absolute(above - corner);
  int above_distance = Absolute(left - corner);
  int corner_distance = Absolute(left + above - 2 * corner);

  if (left_distance <= above_distance && left_distance <= corner_distance) {
    return left;
  }

  return above_distance <= corner_distance ? above : corner;
}

template<size_t Channels, Filter Mode>
void Reconstruct(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  if (info->row_bytes == 0) {
    return;
  }

  uint8_t left[4] = {};
  uint8_t corner[4] = {};
  uint8_t input[16];

  for (size_t i = 0; i < 16; ++i) {
    input[i] = row[i];
  }

  for (size_t block = 0; block < info->row_bytes; block += Channels * 4) {
    uint8_t next[16];

    // The RGB routine preloads the next block before its overlapping store.
    if constexpr (Channels == 3) {
      for (size_t i = 0; i < 16; ++i) {
        next[i] = row[block + 12 + i];
      }
    }
    else {
      for (size_t i = 0; i < 16; ++i) {
        input[i] = row[block + i];
      }
    }

    for (size_t pixel = 0; pixel < 4; ++pixel) {
      for (size_t lane = 0; lane < 4; ++lane) {
        size_t offset = pixel * Channels + lane;
        uint8_t predictor = left[lane];

        if constexpr (Mode != Filter::Sub) {
          uint8_t above = previous[block + offset];

          if constexpr (Mode == Filter::Average) {
            predictor = static_cast<uint8_t>((left[lane] + above) / 2);
          }
          else {
            predictor = Paeth(left[lane], above, corner[lane]);
          }

          corner[lane] = above;
        }

        left[lane] = static_cast<uint8_t>(input[offset] + predictor);
        row[block + offset] = left[lane];
      }
    }

    if constexpr (Channels == 3) {
      for (size_t i = 0; i < 16; ++i) {
        input[i] = next[i];
      }
    }
  }
}

}

extern "C" {

void nndetailImagePng_png_read_filter_row_up_neon(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  for (size_t block = 0; block < info->row_bytes; block += 16) {
    for (size_t lane = 0; lane < 16; ++lane) {
      row[block + lane] += previous[block + lane];
    }
  }
}

void nndetailImagePng_png_read_filter_row_sub3_neon(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  Reconstruct<3, Filter::Sub>(info, row, previous);
}

void nndetailImagePng_png_read_filter_row_sub4_neon(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  Reconstruct<4, Filter::Sub>(info, row, previous);
}

void nndetailImagePng_png_read_filter_row_avg3_neon(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  Reconstruct<3, Filter::Average>(info, row, previous);
}

void nndetailImagePng_png_read_filter_row_avg4_neon(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  Reconstruct<4, Filter::Average>(info, row, previous);
}

void nndetailImagePng_png_read_filter_row_paeth3_neon(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  Reconstruct<3, Filter::Paeth>(info, row, previous);
}

void nndetailImagePng_png_read_filter_row_paeth4_neon(
  fw::image::PngRowInfo* info, uint8_t* row, const uint8_t* previous
) {
  Reconstruct<4, Filter::Paeth>(info, row, previous);
}

}
