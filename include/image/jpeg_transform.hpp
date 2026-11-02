#pragma once

#include <stddef.h>
#include <stdint.h>

struct jpeg_decompress_struct {
  uint8_t unknown_000[0x1b8];
  uint8_t *sample_range_limit;
  uint8_t unknown_1c0[0xd8];
};

struct jpeg_component_info {
  uint8_t unknown_00[0x58];
  void *dct_table;
};

static_assert(sizeof(jpeg_decompress_struct) == 0x298);
static_assert(offsetof(jpeg_decompress_struct, sample_range_limit) == 0x1b8);
static_assert(offsetof(jpeg_component_info, dct_table) == 0x58);

void nndetailImageJpeg_jpeg_fdct_islow(int16_t *data);
void nndetailImageJpeg_jpeg_fdct_ifast(int16_t *data);
void nndetailImageJpeg_jpeg_fdct_float(float *data);

void nndetailImageJpeg_jpeg_idct_islow(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_ifast(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_float(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_1x1(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_2x2(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_3x3(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_4x4(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_5x5(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_6x6(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_7x7(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_9x9(jpeg_decompress_struct *decoder,
                                     jpeg_component_info *component,
                                     int16_t *coefficients, uint8_t **output,
                                     uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_10x10(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_11x11(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_12x12(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_13x13(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_14x14(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_15x15(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);

void nndetailImageJpeg_jpeg_idct_16x16(jpeg_decompress_struct *decoder,
                                       jpeg_component_info *component,
                                       int16_t *coefficients, uint8_t **output,
                                       uint32_t output_column);
