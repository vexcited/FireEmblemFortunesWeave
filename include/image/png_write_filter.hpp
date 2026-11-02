#pragma once

#include "image/png_read.hpp"

namespace fw::image {

struct PngWriteFilterState {
  uint8_t unknown_000[656];
  uint8_t* prev_row;
  uint8_t* row_buf;
  uint8_t* try_row;
  uint8_t* tst_row;
  uint8_t unknown_2b0[38];
  uint8_t do_filter;
  uint8_t unknown_2d7[49];
  uint32_t flush_dist;
  uint32_t flush_rows;
};

static_assert(sizeof(PngWriteFilterState) == 784);
static_assert(offsetof(PngWriteFilterState, prev_row) == 656);
static_assert(offsetof(PngWriteFilterState, row_buf) == 664);
static_assert(offsetof(PngWriteFilterState, try_row) == 672);
static_assert(offsetof(PngWriteFilterState, tst_row) == 680);
static_assert(offsetof(PngWriteFilterState, do_filter) == 726);
static_assert(offsetof(PngWriteFilterState, flush_dist) == 776);
static_assert(offsetof(PngWriteFilterState, flush_rows) == 780);

}

extern "C" void nndetailImagePng_png_write_find_filter(
  fw::image::PngWriteFilterState*, fw::image::PngRowInfo*
);
