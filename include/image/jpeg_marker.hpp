#pragma once

#include "image/jpeg_entropy.hpp"

namespace jpeg_marker {

struct Decoder;
using HuffmanTable = jpeg_entropy::HuffmanTable;
using Parser = int (*)(Decoder *);

struct ErrorManager {
  void (*error_exit)(Decoder *);
  void (*emit_message)(Decoder *, int);
  uint8_t unknown_010[0x18];
  int msg_code;
  union {
    int i[8];
    char s[80];
  } msg_parm;
  int trace_level;
  uint8_t unknown_080[0x28];
};

struct MemoryManager {
  void *(*alloc_small)(Decoder *, int, size_t);
  void *(*alloc_large)(Decoder *, int, size_t);
  uint8_t unknown_010[0x50];
  int64_t max_alloc_chunk;
};

struct Source {
  const uint8_t *next_input_byte;
  size_t bytes_in_buffer;
  void (*init_source)(Decoder *);
  int (*fill_input_buffer)(Decoder *);
  void (*skip_input_data)(Decoder *, int64_t);
  int (*resync_to_restart)(Decoder *, int);
  void (*term_source)(Decoder *);
};

struct Reader {
  void (*reset_marker_reader)(Decoder *);
  int (*read_markers)(Decoder *);
  Parser read_restart_marker;
  int saw_SOI;
  int saw_SOF;
  int next_restart_num;
  uint32_t discarded_bytes;
};

struct SavedMarker {
  SavedMarker *next;
  uint8_t marker;
  uint32_t original_length;
  uint32_t data_length;
  uint8_t *data;
};

struct QuantizationTable {
  uint16_t quantval[64];
  int sent_table;
};

struct Component {
  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;
  int dc_tbl_no;
  int ac_tbl_no;
  uint8_t unknown_01c[0x44];
};

struct Decoder {
  ErrorManager *err;
  MemoryManager *mem;
  uint8_t unknown_010[0x20];
  Source *src;
  uint32_t image_width;
  uint32_t image_height;
  int num_components;
  int jpeg_color_space;
  uint8_t unknown_048[0x6c];
  int input_scan_number;
  uint8_t unknown_0b8[0x18];
  QuantizationTable *quant_tbl_ptrs[4];
  HuffmanTable *dc_huff_tbl_ptrs[4];
  HuffmanTable *ac_huff_tbl_ptrs[4];
  int data_precision;
  Component *comp_info;
  uint8_t unknown_140[4];
  int progressive_mode;
  int arith_code;
  uint8_t arith_dc_L[16];
  uint8_t arith_dc_U[16];
  uint8_t arith_ac_K[16];
  uint32_t restart_interval;
  int saw_JFIF_marker;
  uint8_t JFIF_major_version;
  uint8_t JFIF_minor_version;
  uint8_t density_unit;
  uint16_t X_density;
  uint16_t Y_density;
  int saw_Adobe_marker;
  uint8_t Adobe_transform;
  int CCIR601_sampling;
  SavedMarker *marker_list;
  uint8_t unknown_1a0[0x20];
  int comps_in_scan;
  Component *cur_comp_info[4];
  uint8_t unknown_1e8[0x34];
  int Ss;
  int Se;
  int Ah;
  int Al;
  uint8_t unknown_22c[0x10];
  int unread_marker;
  uint8_t unknown_240[0x28];
  Reader *marker;
  uint8_t unknown_270[0x28];
};

static_assert(sizeof(Decoder) == 0x298);
static_assert(sizeof(Component) == 0x60);
static_assert(sizeof(QuantizationTable) == 132);
static_assert(sizeof(SavedMarker) == 32);
static_assert(offsetof(Decoder, src) == 0x30);
static_assert(offsetof(Decoder, quant_tbl_ptrs) == 0xd0);
static_assert(offsetof(Decoder, comp_info) == 0x138);
static_assert(offsetof(Decoder, restart_interval) == 0x17c);
static_assert(offsetof(Decoder, marker_list) == 0x198);
static_assert(offsetof(Decoder, Ss) == 0x21c);
static_assert(offsetof(Decoder, marker) == 0x268);

}

extern "C" void nndetailImageJpeg_jinit_marker_reader(jpeg_marker::Decoder *);
extern "C" int nndetailImageJpeg_jpeg_resync_to_restart(jpeg_marker::Decoder *,
                                                        int desired);
extern "C" void nndetailImageJpeg_jpeg_save_markers(jpeg_marker::Decoder *,
                                                    int code,
                                                    uint32_t length_limit);
extern "C" void
nndetailImageJpeg_jpeg_set_marker_processor(jpeg_marker::Decoder *, int code,
                                            jpeg_marker::Parser);
extern "C" jpeg_marker::QuantizationTable *
nndetailImageJpeg_jpeg_alloc_quant_table(jpeg_marker::Decoder *);
