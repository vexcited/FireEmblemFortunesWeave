/*
  Modified libpng source for the recovered SDK ABI.
  Copyright 1995-2019 The PNG Reference Library Authors.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#pragma once

#include "image/png_read_setup.hpp"

extern "C" {
void nndetailImagePng_png_build_gamma_table(fw::image::PngReadSetupState*, int);
void nndetailImagePng_png_destroy_gamma_table(fw::image::PngReadSetupState*);
}
