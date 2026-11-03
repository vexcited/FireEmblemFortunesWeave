/*
  Based in part on the work of the Independent JPEG Group.
  Modified libjpeg-turbo 1.5.0 source for the recovered SDK ABI.
  Copyright 1991-2016 Thomas G. Lane and Guido Vollbeding.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/README.ijg
  Full license text: include/image/jpeg_transform.hpp.
*/

#pragma once

#include <stddef.h>
#include <stdint.h>

namespace jpeg_huffman_encode {

struct Encoder;

struct Destination {
  uint8_t *next_output_byte;
  size_t free_in_buffer;
  void (*init_destination)(Encoder *);
  int (*empty_output_buffer)(Encoder *);
  void (*term_destination)(Encoder *);
};

struct Encoder {
  uint8_t unknown_000[0x30];
  Destination *dest;
};

struct SavedState {
  uint64_t put_buffer;
  int put_bits;
  int last_dc_val[4];
};

struct WorkingState {
  uint8_t *next_output_byte;
  size_t free_in_buffer;
  SavedState cur;
  Encoder *cinfo;
};

struct DerivedTable {
  uint32_t ehufco[256];
  uint8_t ehufsi[256];
};

static_assert(sizeof(SavedState) == 32);
static_assert(sizeof(WorkingState) == 56);
static_assert(sizeof(DerivedTable) == 1280);
static_assert(offsetof(WorkingState, cur) == 16);
static_assert(offsetof(WorkingState, cinfo) == 48);
static_assert(offsetof(Encoder, dest) == 48);
static_assert(offsetof(Destination, empty_output_buffer) == 24);

int encode_one_block(WorkingState *state, const int16_t *block, int last_dc_val,
                     const DerivedTable *dc, const DerivedTable *ac);

}
