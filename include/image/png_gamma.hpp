#pragma once

#include "image/png_read_setup.hpp"

extern "C" {
void nndetailImagePng_png_build_gamma_table(fw::image::PngReadSetupState*, int);
void nndetailImagePng_png_destroy_gamma_table(fw::image::PngReadSetupState*);
}
