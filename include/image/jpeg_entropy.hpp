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

namespace jpeg_entropy {

struct Decoder;
using Block = int16_t[64];
using BlockRow = Block *;

struct ErrorManager {
  void (*error_exit)(Decoder *);
  void (*emit_message)(Decoder *, int);
  uint8_t unknown_010[0x18];
  int msg_code;
  int msg_parm[20];
};

struct MemoryManager {
  void *(*alloc_small)(Decoder *, int, size_t);
};

struct Source {
  const uint8_t *next_input_byte;
  size_t bytes_in_buffer;
  void (*init_source)(Decoder *);
  int (*fill_input_buffer)(Decoder *);
  void (*skip_input_data)(Decoder *, long);
  int (*resync_to_restart)(Decoder *, int);
  void (*term_source)(Decoder *);
};

struct MarkerReader {
  void (*reset_marker_reader)(Decoder *);
  int (*read_markers)(Decoder *);
  int (*read_restart_marker)(Decoder *);
  int saw_SOI;
  int saw_SOF;
  int next_restart_num;
  uint32_t discarded_bytes;
};

struct HuffmanTable {
  uint8_t bits[17];
  uint8_t huffval[256];
  int sent_table;
};

struct DerivedTable {
  int64_t maxcode[18];
  int64_t valoffset[18];
  HuffmanTable *pub;
  int lookup[256];
};

struct BitState {
  uint64_t get_buffer;
  int bits_left;
};

struct BitWorking {
  const uint8_t *next_input_byte;
  size_t bytes_in_buffer;
  uint64_t get_buffer;
  int bits_left;
  Decoder *cinfo;
};

struct Entropy {
  void (*start_pass)(Decoder *);
  int (*decode_mcu)(Decoder *, BlockRow *);
  int insufficient_data;
};

struct Component {
  uint8_t unknown_000[0x14];
  int dc_tbl_no;
  int ac_tbl_no;
  uint8_t unknown_01c[8];
  int DCT_scaled_size;
  uint8_t unknown_028[0xc];
  int component_needed;
  uint8_t unknown_038[0x28];
};

struct Decoder {
  ErrorManager *err;
  MemoryManager *mem;
  uint8_t unknown_010[0x10];
  int is_decompressor;
  uint8_t unknown_024[0xc];
  Source *src;
  uint8_t unknown_038[0xb8];
  HuffmanTable *dc_huff_tbl_ptrs[4];
  HuffmanTable *ac_huff_tbl_ptrs[4];
  uint8_t unknown_130[0x4c];
  uint32_t restart_interval;
  uint8_t unknown_180[0x40];
  int comps_in_scan;
  Component *cur_comp_info[4];
  uint8_t unknown_1e8[8];
  int blocks_in_MCU;
  int MCU_membership[10];
  int Ss;
  int Se;
  int Ah;
  int Al;
  uint8_t unknown_22c[0x10];
  int unread_marker;
  uint8_t unknown_240[0x28];
  MarkerReader *marker;
  Entropy *entropy;
  uint8_t unknown_278[0x20];
};

static_assert(sizeof(Decoder) == 0x298);
static_assert(sizeof(Component) == 0x60);
static_assert(sizeof(HuffmanTable) == 280);
static_assert(sizeof(DerivedTable) == 1320);
static_assert(sizeof(BitWorking) == 40);
static_assert(sizeof(Entropy) == 24);
static_assert(offsetof(Decoder, dc_huff_tbl_ptrs) == 0xf0);
static_assert(offsetof(Decoder, restart_interval) == 0x17c);
static_assert(offsetof(Decoder, comps_in_scan) == 0x1c0);
static_assert(offsetof(Decoder, blocks_in_MCU) == 0x1f0);
static_assert(offsetof(Decoder, Ss) == 0x21c);
static_assert(offsetof(Decoder, unread_marker) == 0x23c);
static_assert(offsetof(Decoder, entropy) == 0x270);

void jpeg_make_d_derived_tbl(Decoder *, int, int, DerivedTable **) asm(
    "_Z41nndetailImageJpeg_jpeg_make_d_derived_tbl"
    "P22jpeg_decompress_structiiPP13d_derived_tbl");
int jpeg_fill_bit_buffer(BitWorking *, uint64_t, int, int) asm(
    "_Z38nndetailImageJpeg_jpeg_fill_bit_bufferP21bitread_working_statemii");
int jpeg_huff_decode(BitWorking *, uint64_t, int, DerivedTable *,
                     int) asm("_Z34nndetailImageJpeg_jpeg_huff_decode"
                              "P21bitread_working_statemiP13d_derived_tbli");

}

extern "C" void nndetailImageJpeg_jinit_huff_decoder(jpeg_entropy::Decoder *);
extern "C" jpeg_entropy::HuffmanTable *
nndetailImageJpeg_jpeg_alloc_huff_table(jpeg_entropy::Decoder *);
