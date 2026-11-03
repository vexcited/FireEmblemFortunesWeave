/*
  Adapted from libjpeg-turbo 1.5.0 jdhuff.c, jdhuff.h,
  jstdhuff.c, and the natural-order table in jutils.c.
  ABI declarations, SDK names, and workspace clearing changed.
  Copyright (C) 1991-1997, Thomas G. Lane.
  Copyright (C) 2009-2011, 2016, D. R. Commander.
  Copyright (C) 2010-2011, 2015-2016, D. R. Commander.
  Copyright (C) 1991-1998, Thomas G. Lane.
  Copyright (C) 2013, D. R. Commander.
  Copyright (C) 1991-1996, Thomas G. Lane.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/README.ijg
  Full license text: include/image/jpeg_transform.hpp.
*/

#include "image/jpeg_entropy.hpp"

namespace jpeg_entropy {

using JLONG = int64_t;
using JCOEF = int16_t;
using JBLOCKROW = BlockRow;
using JOCTET = uint8_t;
using UINT8 = uint8_t;
using boolean = int;
using JHUFF_TBL = HuffmanTable;
using d_derived_tbl = DerivedTable;
using bit_buf_type = uint64_t;
using bitread_perm_state = BitState;
using bitread_working_state = BitWorking;
using j_decompress_ptr = Decoder *;
using j_common_ptr = Decoder *;

struct CompressorView {
  uint8_t unknown_000[0xa8];
  HuffmanTable *dc_huff_tbl_ptrs[4];
  HuffmanTable *ac_huff_tbl_ptrs[4];
};

using j_compress_ptr = CompressorView *;

extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);

extern "C" HuffmanTable *
nndetailImageJpeg_jpeg_alloc_huff_table(Decoder *decoder) {
  auto *table = static_cast<HuffmanTable *>(
      decoder->mem->alloc_small(decoder, 0, sizeof(HuffmanTable)));
  table->sent_table = 0;
  return table;
}

const int jpeg_natural_order[64 + 16] = {
    0,  1,  8,  16, 9,  2,  3,  10, 17, 24, 32, 25, 18, 11, 4,  5,
    12, 19, 26, 33, 40, 48, 41, 34, 27, 20, 13, 6,  7,  14, 21, 28,
    35, 42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51,
    58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63,
    63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63};
void jpeg_make_d_derived_tbl(j_decompress_ptr cinfo, boolean isDC, int tblno,
                             d_derived_tbl **pdtbl);
boolean jpeg_fill_bit_buffer(bitread_working_state *state,
                             bit_buf_type get_buffer, int bits_left, int nbits);
int jpeg_huff_decode(bitread_working_state *state, bit_buf_type get_buffer,
                     int bits_left, d_derived_tbl *htbl, int min_bits);
static void add_huff_table(j_common_ptr cinfo, JHUFF_TBL **htblptr,
                           const UINT8 *bits, const UINT8 *val) {
  int nsymbols, len;
  if (*htblptr == nullptr) {
    *htblptr = nndetailImageJpeg_jpeg_alloc_huff_table(cinfo);
  }
  else {
    return;
  }
  memcpy((*htblptr)->bits, bits, sizeof((*htblptr)->bits));
  nsymbols = 0;
  for (len = 1; len <= 16; len++) {
    nsymbols += bits[len];
  }
  if (nsymbols < 1 || nsymbols > 256) {
    ((cinfo)->err->msg_code = (9), (cinfo)->err->error_exit(cinfo));
  }
  memcpy((*htblptr)->huffval, val, nsymbols * sizeof(UINT8));
  memset(&((*htblptr)->huffval[nsymbols]), 0, (256 - nsymbols) * sizeof(UINT8));
  (*htblptr)->sent_table = 0;
}
static void std_huff_tables(j_common_ptr cinfo) {
  JHUFF_TBL **dc_huff_tbl_ptrs, **ac_huff_tbl_ptrs;
  static const UINT8 bits_dc_luminance[17] = {0, 0, 1, 5, 1, 1, 1, 1, 1,
                                              1, 0, 0, 0, 0, 0, 0, 0};
  static const UINT8 val_dc_luminance[] = {0, 1, 2, 3, 4,  5,
                                           6, 7, 8, 9, 10, 11};
  static const UINT8 bits_dc_chrominance[17] = {0, 0, 3, 1, 1, 1, 1, 1, 1,
                                                1, 1, 1, 0, 0, 0, 0, 0};
  static const UINT8 val_dc_chrominance[] = {0, 1, 2, 3, 4,  5,
                                             6, 7, 8, 9, 10, 11};
  static const UINT8 bits_ac_luminance[17] = {0, 0, 2, 1, 3, 3, 2, 4,   3,
                                              5, 5, 4, 4, 0, 0, 1, 0x7d};
  static const UINT8 val_ac_luminance[] = {
      0x01, 0x02, 0x03, 0x00, 0x04, 0x11, 0x05, 0x12, 0x21, 0x31, 0x41, 0x06,
      0x13, 0x51, 0x61, 0x07, 0x22, 0x71, 0x14, 0x32, 0x81, 0x91, 0xa1, 0x08,
      0x23, 0x42, 0xb1, 0xc1, 0x15, 0x52, 0xd1, 0xf0, 0x24, 0x33, 0x62, 0x72,
      0x82, 0x09, 0x0a, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x25, 0x26, 0x27, 0x28,
      0x29, 0x2a, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x43, 0x44, 0x45,
      0x46, 0x47, 0x48, 0x49, 0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59,
      0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x73, 0x74, 0x75,
      0x76, 0x77, 0x78, 0x79, 0x7a, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89,
      0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0xa2, 0xa3,
      0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6,
      0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9,
      0xca, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe1, 0xe2,
      0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xf1, 0xf2, 0xf3, 0xf4,
      0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa};
  static const UINT8 bits_ac_chrominance[17] = {0, 0, 2, 1, 2, 4, 4, 3,   4,
                                                7, 5, 4, 4, 0, 1, 2, 0x77};
  static const UINT8 val_ac_chrominance[] = {
      0x00, 0x01, 0x02, 0x03, 0x11, 0x04, 0x05, 0x21, 0x31, 0x06, 0x12, 0x41,
      0x51, 0x07, 0x61, 0x71, 0x13, 0x22, 0x32, 0x81, 0x08, 0x14, 0x42, 0x91,
      0xa1, 0xb1, 0xc1, 0x09, 0x23, 0x33, 0x52, 0xf0, 0x15, 0x62, 0x72, 0xd1,
      0x0a, 0x16, 0x24, 0x34, 0xe1, 0x25, 0xf1, 0x17, 0x18, 0x19, 0x1a, 0x26,
      0x27, 0x28, 0x29, 0x2a, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x43, 0x44,
      0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58,
      0x59, 0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x73, 0x74,
      0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
      0x88, 0x89, 0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a,
      0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4,
      0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7,
      0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda,
      0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xf2, 0xf3, 0xf4,
      0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa};
  if (cinfo->is_decompressor) {
    dc_huff_tbl_ptrs = ((j_decompress_ptr)cinfo)->dc_huff_tbl_ptrs;
    ac_huff_tbl_ptrs = ((j_decompress_ptr)cinfo)->ac_huff_tbl_ptrs;
  }
  else {
    dc_huff_tbl_ptrs = ((j_compress_ptr)cinfo)->dc_huff_tbl_ptrs;
    ac_huff_tbl_ptrs = ((j_compress_ptr)cinfo)->ac_huff_tbl_ptrs;
  }
  add_huff_table(cinfo, &dc_huff_tbl_ptrs[0], bits_dc_luminance,
                 val_dc_luminance);
  add_huff_table(cinfo, &ac_huff_tbl_ptrs[0], bits_ac_luminance,
                 val_ac_luminance);
  add_huff_table(cinfo, &dc_huff_tbl_ptrs[1], bits_dc_chrominance,
                 val_dc_chrominance);
  add_huff_table(cinfo, &ac_huff_tbl_ptrs[1], bits_ac_chrominance,
                 val_ac_chrominance);
}
typedef struct {
  int last_dc_val[4];
} savable_state;
typedef struct {
  Entropy pub;
  bitread_perm_state bitstate;
  savable_state saved;
  unsigned int restarts_to_go;
  d_derived_tbl *dc_derived_tbls[4];
  d_derived_tbl *ac_derived_tbls[4];
  d_derived_tbl *dc_cur_tbls[10];
  d_derived_tbl *ac_cur_tbls[10];
  boolean dc_needed[10];
  boolean ac_needed[10];
} huff_entropy_decoder;
typedef huff_entropy_decoder *huff_entropy_ptr;
static void start_pass_huff_decoder(j_decompress_ptr cinfo) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  int ci, blkn, dctbl, actbl;
  d_derived_tbl **pdtbl;
  Component *compptr;
  if (cinfo->Ss != 0 || cinfo->Se != 64 - 1 || cinfo->Ah != 0 ||
      cinfo->Al != 0) {
    ((cinfo)->err->msg_code = (125), (cinfo)->err->emit_message(cinfo, -1));
  }
  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    compptr = cinfo->cur_comp_info[ci];
    dctbl = compptr->dc_tbl_no;
    actbl = compptr->ac_tbl_no;
    pdtbl = entropy->dc_derived_tbls + dctbl;
    jpeg_make_d_derived_tbl(cinfo, 1, dctbl, pdtbl);
    pdtbl = entropy->ac_derived_tbls + actbl;
    jpeg_make_d_derived_tbl(cinfo, 0, actbl, pdtbl);
    entropy->saved.last_dc_val[ci] = 0;
  }
  for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
    ci = cinfo->MCU_membership[blkn];
    compptr = cinfo->cur_comp_info[ci];
    entropy->dc_cur_tbls[blkn] = entropy->dc_derived_tbls[compptr->dc_tbl_no];
    entropy->ac_cur_tbls[blkn] = entropy->ac_derived_tbls[compptr->ac_tbl_no];
    if (compptr->component_needed) {
      entropy->dc_needed[blkn] = 1;
      entropy->ac_needed[blkn] = (compptr->DCT_scaled_size > 1);
    }
    else {
      entropy->dc_needed[blkn] = entropy->ac_needed[blkn] = 0;
    }
  }
  entropy->bitstate.bits_left = 0;
  entropy->bitstate.get_buffer = 0;
  entropy->pub.insufficient_data = 0;
  entropy->restarts_to_go = cinfo->restart_interval;
}
void jpeg_make_d_derived_tbl(j_decompress_ptr cinfo, boolean isDC, int tblno,
                             d_derived_tbl **pdtbl) {
  JHUFF_TBL *htbl;
  d_derived_tbl *dtbl;
  int p, i, l, si, numsymbols;
  int lookbits, ctr;
  char huffsize[257] = {};
  unsigned int huffcode[257] = {};
  unsigned int code;
  if (tblno < 0 || tblno >= 4) {
    ((cinfo)->err->msg_code = (52), (cinfo)->err->msg_parm[0] = (tblno),
     (cinfo)->err->error_exit(cinfo));
  }
  htbl = isDC ? cinfo->dc_huff_tbl_ptrs[tblno] : cinfo->ac_huff_tbl_ptrs[tblno];
  if (htbl == nullptr) {
    ((cinfo)->err->msg_code = (52), (cinfo)->err->msg_parm[0] = (tblno),
     (cinfo)->err->error_exit(cinfo));
  }
  if (*pdtbl == nullptr) {
    *pdtbl = (d_derived_tbl *)(*cinfo->mem->alloc_small)((j_common_ptr)cinfo, 1,
                                                         sizeof(d_derived_tbl));
  }
  dtbl = *pdtbl;
  dtbl->pub = htbl;
  p = 0;
  for (l = 1; l <= 16; l++) {
    i = (int)htbl->bits[l];
    if (i < 0 || p + i > 256) {
      ((cinfo)->err->msg_code = (9), (cinfo)->err->error_exit(cinfo));
    }
    while (i--) {
      huffsize[p++] = (char)l;
    }
  }
  huffsize[p] = 0;
  numsymbols = p;
  code = 0;
  si = huffsize[0];
  p = 0;
  while (huffsize[p]) {
    while (((int)huffsize[p]) == si) {
      huffcode[p++] = code;
      code++;
    }
    if (((JLONG)code) >= (((JLONG)1) << si)) {
      ((cinfo)->err->msg_code = (9), (cinfo)->err->error_exit(cinfo));
    }
    code <<= 1;
    si++;
  }
  p = 0;
  for (l = 1; l <= 16; l++) {
    if (htbl->bits[l]) {
      dtbl->valoffset[l] = (JLONG)p - (JLONG)huffcode[p];
      p += htbl->bits[l];
      dtbl->maxcode[l] = huffcode[p - 1];
    }
    else {
      dtbl->maxcode[l] = -1;
    }
  }
  dtbl->valoffset[17] = 0;
  dtbl->maxcode[17] = 0xFFFFFL;
  for (i = 0; i < (1 << 8); i++) {
    dtbl->lookup[i] = (8 + 1) << 8;
  }
  p = 0;
  for (l = 1; l <= 8; l++) {
    for (i = 1; i <= (int)htbl->bits[l]; i++, p++) {
      lookbits = huffcode[p] << (8 - l);
      for (ctr = 1 << (8 - l); ctr > 0; ctr--) {
        dtbl->lookup[lookbits] = (l << 8) | htbl->huffval[p];
        lookbits++;
      }
    }
  }
  if (isDC) {
    for (i = 0; i < numsymbols; i++) {
      int sym = htbl->huffval[i];
      if (sym < 0 || sym > 15) {
        ((cinfo)->err->msg_code = (9), (cinfo)->err->error_exit(cinfo));
      }
    }
  }
}
boolean jpeg_fill_bit_buffer(bitread_working_state *state,
                             bit_buf_type get_buffer, int bits_left,
                             int nbits) {
  const JOCTET *next_input_byte = state->next_input_byte;
  size_t bytes_in_buffer = state->bytes_in_buffer;
  j_decompress_ptr cinfo = state->cinfo;
  if (cinfo->unread_marker == 0) {
    while (bits_left < (64 - 7)) {
      int c;
      if (bytes_in_buffer == 0) {
        if (!(*cinfo->src->fill_input_buffer)(cinfo)) {
          return 0;
        }
        next_input_byte = cinfo->src->next_input_byte;
        bytes_in_buffer = cinfo->src->bytes_in_buffer;
      }
      bytes_in_buffer--;
      c = static_cast<int>(*next_input_byte++);
      if (c == 0xFF) {
        do {
          if (bytes_in_buffer == 0) {
            if (!(*cinfo->src->fill_input_buffer)(cinfo)) {
              return 0;
            }
            next_input_byte = cinfo->src->next_input_byte;
            bytes_in_buffer = cinfo->src->bytes_in_buffer;
          }
          bytes_in_buffer--;
          c = static_cast<int>(*next_input_byte++);
        } while (c == 0xFF);
        if (c == 0) {
          c = 0xFF;
        }
        else {
          cinfo->unread_marker = c;
          goto no_more_bytes;
        }
      }
      get_buffer = (get_buffer << 8) | c;
      bits_left += 8;
    }
  }
  else {
  no_more_bytes:
    if (nbits > bits_left) {
      if (!cinfo->entropy->insufficient_data) {
        ((cinfo)->err->msg_code = (120), (cinfo)->err->emit_message(cinfo, -1));
        cinfo->entropy->insufficient_data = 1;
      }
      get_buffer <<= (64 - 7) - bits_left;
      bits_left = (64 - 7);
    }
  }
  state->next_input_byte = next_input_byte;
  state->bytes_in_buffer = bytes_in_buffer;
  state->get_buffer = get_buffer;
  state->bits_left = bits_left;
  return 1;
}
int jpeg_huff_decode(bitread_working_state *state, bit_buf_type get_buffer,
                     int bits_left, d_derived_tbl *htbl, int min_bits) {
  int l = min_bits;
  JLONG code;
  {
    if (bits_left < (l)) {
      if (!jpeg_fill_bit_buffer(&(*state), get_buffer, bits_left, l)) {
        return -1;
      }
      get_buffer = (*state).get_buffer;
      bits_left = (*state).bits_left;
    }
  };
  code = (((int)(get_buffer >> (bits_left -= (l)))) & ((1 << (l)) - 1));
  while (code > htbl->maxcode[l]) {
    code <<= 1;
    {
      if (bits_left < (1)) {
        if (!jpeg_fill_bit_buffer(&(*state), get_buffer, bits_left, 1)) {
          return -1;
        }
        get_buffer = (*state).get_buffer;
        bits_left = (*state).bits_left;
      }
    };
    code |= (((int)(get_buffer >> (bits_left -= (1)))) & ((1 << (1)) - 1));
    l++;
  }
  state->get_buffer = get_buffer;
  state->bits_left = bits_left;
  if (l > 16) {
    ((state->cinfo)->err->msg_code = (121),
     (state->cinfo)->err->emit_message(state->cinfo, -1));
    return 0;
  }
  return htbl->pub->huffval[(int)(code + htbl->valoffset[l])];
}
static boolean process_restart(j_decompress_ptr cinfo) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  int ci;
  cinfo->marker->discarded_bytes += entropy->bitstate.bits_left / 8;
  entropy->bitstate.bits_left = 0;
  if (!(*cinfo->marker->read_restart_marker)(cinfo)) {
    return 0;
  }
  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    entropy->saved.last_dc_val[ci] = 0;
  }
  entropy->restarts_to_go = cinfo->restart_interval;
  if (cinfo->unread_marker == 0) {
    entropy->pub.insufficient_data = 0;
  }
  return 1;
}
static boolean decode_mcu_slow(j_decompress_ptr cinfo, JBLOCKROW *MCU_data) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  bit_buf_type get_buffer;
  int bits_left;
  bitread_working_state br_state;
  int blkn;
  savable_state state;
  br_state.cinfo = cinfo;
  br_state.next_input_byte = cinfo->src->next_input_byte;
  br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer;
  get_buffer = entropy->bitstate.get_buffer;
  bits_left = entropy->bitstate.bits_left;
  ;
  ((state) = (entropy->saved));
  for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
    JBLOCKROW block = MCU_data ? MCU_data[blkn] : nullptr;
    d_derived_tbl *dctbl = entropy->dc_cur_tbls[blkn];
    d_derived_tbl *actbl = entropy->ac_cur_tbls[blkn];
    int s, k, r;
    {
      int nb, look;
      if (bits_left < 8) {
        if (!jpeg_fill_bit_buffer(&br_state, get_buffer, bits_left, 0)) {
          return 0;
        }
        get_buffer = br_state.get_buffer;
        bits_left = br_state.bits_left;
        if (bits_left < 8) {
          nb = 1;
          goto label1;
        }
      }
      look = (((int)(get_buffer >> (bits_left - (8)))) & ((1 << (8)) - 1));
      if ((nb = (dctbl->lookup[look] >> 8)) <= 8) {
        (bits_left -= (nb));
        s = dctbl->lookup[look] & ((1 << 8) - 1);
      }
      else {
      label1:
        if ((s = jpeg_huff_decode(&br_state, get_buffer, bits_left, dctbl,
                                  nb)) < 0) {
          return 0;
        }
        get_buffer = br_state.get_buffer;
        bits_left = br_state.bits_left;
      }
    };
    if (s) {
      {
        if (bits_left < (s)) {
          if (!jpeg_fill_bit_buffer(&(br_state), get_buffer, bits_left, s)) {
            return 0;
          }
          get_buffer = (br_state).get_buffer;
          bits_left = (br_state).bits_left;
        }
      };
      r = (((int)(get_buffer >> (bits_left -= (s)))) & ((1 << (s)) - 1));
      s = ((r) + ((((r) - (1 << ((s)-1))) >> 31) &
                  (((((unsigned int)-1)) << (s)) + 1)));
    }
    if (entropy->dc_needed[blkn]) {
      int ci = cinfo->MCU_membership[blkn];
      s += state.last_dc_val[ci];
      state.last_dc_val[ci] = s;
      if (block) {
        (*block)[0] = (JCOEF)s;
      }
    }
    if (entropy->ac_needed[blkn] && block) {
      for (k = 1; k < 64; k++) {
        {
          int nb, look;
          if (bits_left < 8) {
            if (!jpeg_fill_bit_buffer(&br_state, get_buffer, bits_left, 0)) {
              return 0;
            }
            get_buffer = br_state.get_buffer;
            bits_left = br_state.bits_left;
            if (bits_left < 8) {
              nb = 1;
              goto label2;
            }
          }
          look = (((int)(get_buffer >> (bits_left - (8)))) & ((1 << (8)) - 1));
          if ((nb = (actbl->lookup[look] >> 8)) <= 8) {
            (bits_left -= (nb));
            s = actbl->lookup[look] & ((1 << 8) - 1);
          }
          else {
          label2:
            if ((s = jpeg_huff_decode(&br_state, get_buffer, bits_left, actbl,
                                      nb)) < 0) {
              return 0;
            }
            get_buffer = br_state.get_buffer;
            bits_left = br_state.bits_left;
          }
        };
        r = s >> 4;
        s &= 15;
        if (s) {
          k += r;
          {
            if (bits_left < (s)) {
              if (!jpeg_fill_bit_buffer(&(br_state), get_buffer, bits_left,
                                        s)) {
                return 0;
              }
              get_buffer = (br_state).get_buffer;
              bits_left = (br_state).bits_left;
            }
          };
          r = (((int)(get_buffer >> (bits_left -= (s)))) & ((1 << (s)) - 1));
          s = ((r) + ((((r) - (1 << ((s)-1))) >> 31) &
                      (((((unsigned int)-1)) << (s)) + 1)));
          (*block)[jpeg_natural_order[k]] = (JCOEF)s;
        }
        else {
          if (r != 15) {
            break;
          }
          k += 15;
        }
      }
    }
    else {
      for (k = 1; k < 64; k++) {
        {
          int nb, look;
          if (bits_left < 8) {
            if (!jpeg_fill_bit_buffer(&br_state, get_buffer, bits_left, 0)) {
              return 0;
            }
            get_buffer = br_state.get_buffer;
            bits_left = br_state.bits_left;
            if (bits_left < 8) {
              nb = 1;
              goto label3;
            }
          }
          look = (((int)(get_buffer >> (bits_left - (8)))) & ((1 << (8)) - 1));
          if ((nb = (actbl->lookup[look] >> 8)) <= 8) {
            (bits_left -= (nb));
            s = actbl->lookup[look] & ((1 << 8) - 1);
          }
          else {
          label3:
            if ((s = jpeg_huff_decode(&br_state, get_buffer, bits_left, actbl,
                                      nb)) < 0) {
              return 0;
            }
            get_buffer = br_state.get_buffer;
            bits_left = br_state.bits_left;
          }
        };
        r = s >> 4;
        s &= 15;
        if (s) {
          k += r;
          {
            if (bits_left < (s)) {
              if (!jpeg_fill_bit_buffer(&(br_state), get_buffer, bits_left,
                                        s)) {
                return 0;
              }
              get_buffer = (br_state).get_buffer;
              bits_left = (br_state).bits_left;
            }
          };
          (bits_left -= (s));
        }
        else {
          if (r != 15) {
            break;
          }
          k += 15;
        }
      }
    }
  }
  cinfo->src->next_input_byte = br_state.next_input_byte;
  cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer;
  entropy->bitstate.get_buffer = get_buffer;
  entropy->bitstate.bits_left = bits_left;
  ((entropy->saved) = (state));
  return 1;
}
static boolean decode_mcu_fast(j_decompress_ptr cinfo, JBLOCKROW *MCU_data) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  bit_buf_type get_buffer;
  int bits_left;
  bitread_working_state br_state;
  JOCTET *buffer;
  int blkn;
  savable_state state;
  br_state.cinfo = cinfo;
  br_state.next_input_byte = cinfo->src->next_input_byte;
  br_state.bytes_in_buffer = cinfo->src->bytes_in_buffer;
  get_buffer = entropy->bitstate.get_buffer;
  bits_left = entropy->bitstate.bits_left;
  ;
  buffer = (JOCTET *)br_state.next_input_byte;
  ((state) = (entropy->saved));
  for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
    JBLOCKROW block = MCU_data ? MCU_data[blkn] : nullptr;
    d_derived_tbl *dctbl = entropy->dc_cur_tbls[blkn];
    d_derived_tbl *actbl = entropy->ac_cur_tbls[blkn];
    int s, k, r, l;
    if (bits_left <= 16) {
      {
        int c0, c1;
        c0 = static_cast<int>(*buffer++);
        c1 = static_cast<int>(*buffer);
        get_buffer = (get_buffer << 8) | c0;
        bits_left += 8;
        if (c0 == 0xFF) {
          buffer++;
          if (c1 != 0) {
            cinfo->unread_marker = c1;
            buffer -= 2;
            get_buffer &= ~0xFF;
          }
        }
      }
      {
        int c0, c1;
        c0 = static_cast<int>(*buffer++);
        c1 = static_cast<int>(*buffer);
        get_buffer = (get_buffer << 8) | c0;
        bits_left += 8;
        if (c0 == 0xFF) {
          buffer++;
          if (c1 != 0) {
            cinfo->unread_marker = c1;
            buffer -= 2;
            get_buffer &= ~0xFF;
          }
        }
      }
      {
        int c0, c1;
        c0 = static_cast<int>(*buffer++);
        c1 = static_cast<int>(*buffer);
        get_buffer = (get_buffer << 8) | c0;
        bits_left += 8;
        if (c0 == 0xFF) {
          buffer++;
          if (c1 != 0) {
            cinfo->unread_marker = c1;
            buffer -= 2;
            get_buffer &= ~0xFF;
          }
        }
      }
      {
        int c0, c1;
        c0 = static_cast<int>(*buffer++);
        c1 = static_cast<int>(*buffer);
        get_buffer = (get_buffer << 8) | c0;
        bits_left += 8;
        if (c0 == 0xFF) {
          buffer++;
          if (c1 != 0) {
            cinfo->unread_marker = c1;
            buffer -= 2;
            get_buffer &= ~0xFF;
          }
        }
      }
      {
        int c0, c1;
        c0 = static_cast<int>(*buffer++);
        c1 = static_cast<int>(*buffer);
        get_buffer = (get_buffer << 8) | c0;
        bits_left += 8;
        if (c0 == 0xFF) {
          buffer++;
          if (c1 != 0) {
            cinfo->unread_marker = c1;
            buffer -= 2;
            get_buffer &= ~0xFF;
          }
        }
      }
      {
        int c0, c1;
        c0 = static_cast<int>(*buffer++);
        c1 = static_cast<int>(*buffer);
        get_buffer = (get_buffer << 8) | c0;
        bits_left += 8;
        if (c0 == 0xFF) {
          buffer++;
          if (c1 != 0) {
            cinfo->unread_marker = c1;
            buffer -= 2;
            get_buffer &= ~0xFF;
          }
        }
      }
    };
    s = (((int)(get_buffer >> (bits_left - (8)))) & ((1 << (8)) - 1));
    s = dctbl->lookup[s];
    l = s >> 8;
    (bits_left -= (l));
    s = s & ((1 << 8) - 1);
    if (l > 8) {
      s = (get_buffer >> bits_left) & ((1 << (l)) - 1);
      while (s > dctbl->maxcode[l]) {
        s <<= 1;
        s |= (((int)(get_buffer >> (bits_left -= (1)))) & ((1 << (1)) - 1));
        l++;
      }
      s = dctbl->pub->huffval[(int)(s + dctbl->valoffset[l]) & 0xFF];
    };
    if (s) {
      if (bits_left <= 16) {
        {
          int c0, c1;
          c0 = static_cast<int>(*buffer++);
          c1 = static_cast<int>(*buffer);
          get_buffer = (get_buffer << 8) | c0;
          bits_left += 8;
          if (c0 == 0xFF) {
            buffer++;
            if (c1 != 0) {
              cinfo->unread_marker = c1;
              buffer -= 2;
              get_buffer &= ~0xFF;
            }
          }
        }
        {
          int c0, c1;
          c0 = static_cast<int>(*buffer++);
          c1 = static_cast<int>(*buffer);
          get_buffer = (get_buffer << 8) | c0;
          bits_left += 8;
          if (c0 == 0xFF) {
            buffer++;
            if (c1 != 0) {
              cinfo->unread_marker = c1;
              buffer -= 2;
              get_buffer &= ~0xFF;
            }
          }
        }
        {
          int c0, c1;
          c0 = static_cast<int>(*buffer++);
          c1 = static_cast<int>(*buffer);
          get_buffer = (get_buffer << 8) | c0;
          bits_left += 8;
          if (c0 == 0xFF) {
            buffer++;
            if (c1 != 0) {
              cinfo->unread_marker = c1;
              buffer -= 2;
              get_buffer &= ~0xFF;
            }
          }
        }
        {
          int c0, c1;
          c0 = static_cast<int>(*buffer++);
          c1 = static_cast<int>(*buffer);
          get_buffer = (get_buffer << 8) | c0;
          bits_left += 8;
          if (c0 == 0xFF) {
            buffer++;
            if (c1 != 0) {
              cinfo->unread_marker = c1;
              buffer -= 2;
              get_buffer &= ~0xFF;
            }
          }
        }
        {
          int c0, c1;
          c0 = static_cast<int>(*buffer++);
          c1 = static_cast<int>(*buffer);
          get_buffer = (get_buffer << 8) | c0;
          bits_left += 8;
          if (c0 == 0xFF) {
            buffer++;
            if (c1 != 0) {
              cinfo->unread_marker = c1;
              buffer -= 2;
              get_buffer &= ~0xFF;
            }
          }
        }
        {
          int c0, c1;
          c0 = static_cast<int>(*buffer++);
          c1 = static_cast<int>(*buffer);
          get_buffer = (get_buffer << 8) | c0;
          bits_left += 8;
          if (c0 == 0xFF) {
            buffer++;
            if (c1 != 0) {
              cinfo->unread_marker = c1;
              buffer -= 2;
              get_buffer &= ~0xFF;
            }
          }
        }
      }
      r = (((int)(get_buffer >> (bits_left -= (s)))) & ((1 << (s)) - 1));
      s = ((r) + ((((r) - (1 << ((s)-1))) >> 31) &
                  (((((unsigned int)-1)) << (s)) + 1)));
    }
    if (entropy->dc_needed[blkn]) {
      int ci = cinfo->MCU_membership[blkn];
      s += state.last_dc_val[ci];
      state.last_dc_val[ci] = s;
      if (block) {
        (*block)[0] = (JCOEF)s;
      }
    }
    if (entropy->ac_needed[blkn] && block) {
      for (k = 1; k < 64; k++) {
        if (bits_left <= 16) {
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
        };
        s = (((int)(get_buffer >> (bits_left - (8)))) & ((1 << (8)) - 1));
        s = actbl->lookup[s];
        l = s >> 8;
        (bits_left -= (l));
        s = s & ((1 << 8) - 1);
        if (l > 8) {
          s = (get_buffer >> bits_left) & ((1 << (l)) - 1);
          while (s > actbl->maxcode[l]) {
            s <<= 1;
            s |= (((int)(get_buffer >> (bits_left -= (1)))) & ((1 << (1)) - 1));
            l++;
          }
          s = actbl->pub->huffval[(int)(s + actbl->valoffset[l]) & 0xFF];
        };
        r = s >> 4;
        s &= 15;
        if (s) {
          k += r;
          if (bits_left <= 16) {
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
          }
          r = (((int)(get_buffer >> (bits_left -= (s)))) & ((1 << (s)) - 1));
          s = ((r) + ((((r) - (1 << ((s)-1))) >> 31) &
                      (((((unsigned int)-1)) << (s)) + 1)));
          (*block)[jpeg_natural_order[k]] = (JCOEF)s;
        }
        else {
          if (r != 15) {
            break;
          }
          k += 15;
        }
      }
    }
    else {
      for (k = 1; k < 64; k++) {
        if (bits_left <= 16) {
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
          {
            int c0, c1;
            c0 = static_cast<int>(*buffer++);
            c1 = static_cast<int>(*buffer);
            get_buffer = (get_buffer << 8) | c0;
            bits_left += 8;
            if (c0 == 0xFF) {
              buffer++;
              if (c1 != 0) {
                cinfo->unread_marker = c1;
                buffer -= 2;
                get_buffer &= ~0xFF;
              }
            }
          }
        };
        s = (((int)(get_buffer >> (bits_left - (8)))) & ((1 << (8)) - 1));
        s = actbl->lookup[s];
        l = s >> 8;
        (bits_left -= (l));
        s = s & ((1 << 8) - 1);
        if (l > 8) {
          s = (get_buffer >> bits_left) & ((1 << (l)) - 1);
          while (s > actbl->maxcode[l]) {
            s <<= 1;
            s |= (((int)(get_buffer >> (bits_left -= (1)))) & ((1 << (1)) - 1));
            l++;
          }
          s = actbl->pub->huffval[(int)(s + actbl->valoffset[l]) & 0xFF];
        };
        r = s >> 4;
        s &= 15;
        if (s) {
          k += r;
          if (bits_left <= 16) {
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
            {
              int c0, c1;
              c0 = static_cast<int>(*buffer++);
              c1 = static_cast<int>(*buffer);
              get_buffer = (get_buffer << 8) | c0;
              bits_left += 8;
              if (c0 == 0xFF) {
                buffer++;
                if (c1 != 0) {
                  cinfo->unread_marker = c1;
                  buffer -= 2;
                  get_buffer &= ~0xFF;
                }
              }
            }
          }
          (bits_left -= (s));
        }
        else {
          if (r != 15) {
            break;
          }
          k += 15;
        }
      }
    }
  }
  if (cinfo->unread_marker != 0) {
    cinfo->unread_marker = 0;
    return 0;
  }
  br_state.bytes_in_buffer -= (buffer - br_state.next_input_byte);
  br_state.next_input_byte = buffer;
  cinfo->src->next_input_byte = br_state.next_input_byte;
  cinfo->src->bytes_in_buffer = br_state.bytes_in_buffer;
  entropy->bitstate.get_buffer = get_buffer;
  entropy->bitstate.bits_left = bits_left;
  ((entropy->saved) = (state));
  return 1;
}
static boolean decode_mcu(j_decompress_ptr cinfo, JBLOCKROW *MCU_data) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  int usefast = 1;
  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0) {
      if (!process_restart(cinfo)) {
        return 0;
      }
    }
    usefast = 0;
  }
  if (cinfo->src->bytes_in_buffer < (64 * 8) * (size_t)cinfo->blocks_in_MCU ||
      cinfo->unread_marker != 0) {
    usefast = 0;
  }
  if (!entropy->pub.insufficient_data) {
    if (usefast) {
      if (!decode_mcu_fast(cinfo, MCU_data)) {
        goto use_slow;
      }
    }
    else {
    use_slow:
      if (!decode_mcu_slow(cinfo, MCU_data)) {
        return 0;
      }
    }
  }
  entropy->restarts_to_go--;
  return 1;
}
extern "C" void nndetailImageJpeg_jinit_huff_decoder(j_decompress_ptr cinfo) {
  huff_entropy_ptr entropy;
  int i;
  std_huff_tables((j_common_ptr)cinfo);
  entropy = (huff_entropy_ptr)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, sizeof(huff_entropy_decoder));
  cinfo->entropy = (Entropy *)entropy;
  entropy->pub.start_pass = start_pass_huff_decoder;
  entropy->pub.decode_mcu = decode_mcu;
  for (i = 0; i < 4; i++) {
    entropy->dc_derived_tbls[i] = entropy->ac_derived_tbls[i] = nullptr;
  }
}

}
