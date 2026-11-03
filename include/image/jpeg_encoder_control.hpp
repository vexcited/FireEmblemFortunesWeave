/*
  Based in part on the work of the Independent JPEG Group.
  Modified libjpeg-turbo 1.5.0 source for the recovered SDK ABI.
  Copyright 1991-2016 Thomas G. Lane and Guido Vollbeding.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/README.ijg
  Full license text: include/image/jpeg_transform.hpp.
*/

#pragma once

#include "image/jpeg_entropy.hpp"
#include "image/jpeg_huffman_encode.hpp"

namespace jpeg_encoder_control {

struct Encoder;
using HuffmanTable = jpeg_entropy::HuffmanTable;
using DerivedTable = jpeg_huffman_encode::DerivedTable;
using SavedState = jpeg_huffman_encode::SavedState;
using Block = int16_t[64];
using BlockRows = Block **;

struct ErrorManager {
  void (*error_exit)(Encoder *);
  uint8_t unknown_008[0x20];
  int msg_code;
  union {
    int i[8];
    char s[80];
  } msg_parm;
};

struct MemoryManager {
  void *(*alloc_small)(Encoder *, int, size_t);
};

struct Destination {
  uint8_t *next_output_byte;
  size_t free_in_buffer;
  void (*init_destination)(Encoder *);
  int (*empty_output_buffer)(Encoder *);
  void (*term_destination)(Encoder *);
};

struct Component {
  uint8_t unknown_000[0x14];
  int dc_tbl_no;
  int ac_tbl_no;
  uint8_t unknown_01c[0x44];
};

struct PublicEntropy {
  void (*start_pass)(Encoder *, int);
  int (*encode_mcu)(Encoder *, BlockRows);
  void (*finish_pass)(Encoder *);
};

struct Entropy {
  PublicEntropy pub;
  SavedState saved;
  uint32_t restarts_to_go;
  int next_restart_num;
  DerivedTable *dc_derived_tbls[4];
  DerivedTable *ac_derived_tbls[4];
  int64_t *dc_count_ptrs[4];
  int64_t *ac_count_ptrs[4];
  int simd;
};

struct Encoder {
  ErrorManager *err;
  MemoryManager *mem;
  uint8_t unknown_010[0x20];
  Destination *dest;
  uint8_t unknown_038[0x70];
  HuffmanTable *dc_huff_tbl_ptrs[4];
  HuffmanTable *ac_huff_tbl_ptrs[4];
  uint8_t unknown_0e8[0x5c];
  uint32_t restart_interval;
  uint8_t unknown_148[0x30];
  int comps_in_scan;
  Component *cur_comp_info[4];
  uint8_t unknown_1a0[8];
  int blocks_in_MCU;
  int MCU_membership[10];
  uint8_t unknown_1d4[0x64];
  PublicEntropy *entropy;
  uint8_t unknown_240[0x10];
};

struct WorkingState {
  uint8_t *next_output_byte;
  size_t free_in_buffer;
  SavedState cur;
  Encoder *cinfo;
};

static_assert(sizeof(Encoder) == 0x250);
static_assert(sizeof(Component) == 0x60);
static_assert(sizeof(Entropy) == 200);
static_assert(sizeof(WorkingState) == 56);
static_assert(offsetof(Encoder, dest) == 0x30);
static_assert(offsetof(Encoder, dc_huff_tbl_ptrs) == 0xa8);
static_assert(offsetof(Encoder, restart_interval) == 0x144);
static_assert(offsetof(Encoder, comps_in_scan) == 0x178);
static_assert(offsetof(Encoder, cur_comp_info) == 0x180);
static_assert(offsetof(Encoder, blocks_in_MCU) == 0x1a8);
static_assert(offsetof(Encoder, entropy) == 0x238);
static_assert(offsetof(Entropy, saved) == 24);
static_assert(offsetof(Entropy, dc_derived_tbls) == 64);
static_assert(offsetof(Entropy, dc_count_ptrs) == 128);
static_assert(offsetof(Entropy, simd) == 192);

void make_derived_table(Encoder *, int, int, DerivedTable **) asm(
    "_Z41nndetailImageJpeg_jpeg_make_c_derived_tbl"
    "P20jpeg_compress_structiiPP13c_derived_tbl");
void generate_optimal_table(Encoder *, HuffmanTable *, int64_t *) asm(
    "_Z40nndetailImageJpeg_jpeg_gen_optimal_table"
    "P20jpeg_compress_structP9JHUFF_TBLPl");
extern "C" void nndetailImageJpeg_jinit_huff_encoder(Encoder *);

}
