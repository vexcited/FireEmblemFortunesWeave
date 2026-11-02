#include "image/jpeg_encoder_control.hpp"

namespace jpeg_encoder_control {

using JLONG = int64_t;
using UINT8 = uint8_t;
using JOCTET = uint8_t;
using boolean = int;
using JCOEFPTR = int16_t *;
using JBLOCKROW = int16_t (*)[64];
using JHUFF_TBL = HuffmanTable;
using c_derived_tbl = DerivedTable;
using j_compress_ptr = Encoder *;
using j_common_ptr = Encoder *;
using savable_state = SavedState;
using huff_entropy_encoder = Entropy;
using huff_entropy_ptr = Entropy *;
using working_state = WorkingState;

extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);

int jsimd_can_huff_encode_one_block() asm(
    "_Z49nndetailImageJpeg_jsimd_can_huff_encode_one_blockv");
uint8_t *jsimd_huff_encode_one_block(
    WorkingState *, uint8_t *, int16_t *, int, DerivedTable *,
    DerivedTable *) asm("_Z45nndetailImageJpeg_jsimd_huff_encode_one_block"
                        "PvPhPsiP13c_derived_tblS3_");

static HuffmanTable *allocate_huffman_table(Encoder *encoder) {
  return nndetailImageJpeg_jpeg_alloc_huff_table(
      reinterpret_cast<jpeg_entropy::Decoder *>(encoder));
}

enum {
  JERR_BAD_DCT_COEF = 6,
  JERR_BAD_HUFF_TABLE = 9,
  JERR_CANT_SUSPEND = 25,
  JERR_HUFF_CLEN_OVERFLOW = 40,
  JERR_NO_HUFF_TABLE = 52,
};
const int jpeg_natural_order[64 + 16] = {
    0,  1,  8,  16, 9,  2,  3,  10, 17, 24, 32, 25, 18, 11, 4,  5,
    12, 19, 26, 33, 40, 48, 41, 34, 27, 20, 13, 6,  7,  14, 21, 28,
    35, 42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51,
    58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63,
    63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63};

static boolean encode_mcu_huff(j_compress_ptr cinfo, JBLOCKROW *MCU_data);
static void finish_pass_huff(j_compress_ptr cinfo);
static boolean encode_mcu_gather(j_compress_ptr cinfo, JBLOCKROW *MCU_data);
static void finish_pass_gather(j_compress_ptr cinfo);
static void start_pass_huff(j_compress_ptr cinfo, boolean gather_statistics) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  int ci, dctbl, actbl;
  Component *compptr;
  if (gather_statistics) {
    entropy->pub.encode_mcu = encode_mcu_gather;
    entropy->pub.finish_pass = finish_pass_gather;
  }
  else {
    entropy->pub.encode_mcu = encode_mcu_huff;
    entropy->pub.finish_pass = finish_pass_huff;
  }
  entropy->simd = jsimd_can_huff_encode_one_block();
  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    compptr = cinfo->cur_comp_info[ci];
    dctbl = compptr->dc_tbl_no;
    actbl = compptr->ac_tbl_no;
    if (gather_statistics) {
      if (dctbl < 0 || dctbl >= 4) {
        ((cinfo)->err->msg_code = (JERR_NO_HUFF_TABLE),
         (cinfo)->err->msg_parm.i[0] = (dctbl),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      }
      if (actbl < 0 || actbl >= 4) {
        ((cinfo)->err->msg_code = (JERR_NO_HUFF_TABLE),
         (cinfo)->err->msg_parm.i[0] = (actbl),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      }
      if (entropy->dc_count_ptrs[dctbl] == nullptr) {
        entropy->dc_count_ptrs[dctbl] = (long *)(*cinfo->mem->alloc_small)(
            (j_common_ptr)cinfo, 1, 257 * sizeof(long));
      }
      memset(entropy->dc_count_ptrs[dctbl], 0, 257 * sizeof(long));
      if (entropy->ac_count_ptrs[actbl] == nullptr) {
        entropy->ac_count_ptrs[actbl] = (long *)(*cinfo->mem->alloc_small)(
            (j_common_ptr)cinfo, 1, 257 * sizeof(long));
      }
      memset(entropy->ac_count_ptrs[actbl], 0, 257 * sizeof(long));
    }
    else {
      make_derived_table(cinfo, 1, dctbl, &entropy->dc_derived_tbls[dctbl]);
      make_derived_table(cinfo, 0, actbl, &entropy->ac_derived_tbls[actbl]);
    }
    entropy->saved.last_dc_val[ci] = 0;
  }
  entropy->saved.put_buffer = 0;
  entropy->saved.put_bits = 0;
  entropy->restarts_to_go = cinfo->restart_interval;
  entropy->next_restart_num = 0;
}
void make_derived_table(j_compress_ptr cinfo, boolean isDC, int tblno,
                        c_derived_tbl **pdtbl) {
  JHUFF_TBL *htbl;
  c_derived_tbl *dtbl;
  int p, i, l, lastp, si, maxsymbol;
  char huffsize[257] = {};
  unsigned int huffcode[257];
  unsigned int code;
  if (tblno < 0 || tblno >= 4) {
    ((cinfo)->err->msg_code = (JERR_NO_HUFF_TABLE),
     (cinfo)->err->msg_parm.i[0] = (tblno),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  htbl = isDC ? cinfo->dc_huff_tbl_ptrs[tblno] : cinfo->ac_huff_tbl_ptrs[tblno];
  if (htbl == nullptr) {
    ((cinfo)->err->msg_code = (JERR_NO_HUFF_TABLE),
     (cinfo)->err->msg_parm.i[0] = (tblno),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  if (*pdtbl == nullptr) {
    *pdtbl = (c_derived_tbl *)(*cinfo->mem->alloc_small)((j_common_ptr)cinfo, 1,
                                                         sizeof(c_derived_tbl));
  }
  dtbl = *pdtbl;
  p = 0;
  for (l = 1; l <= 16; l++) {
    i = (int)htbl->bits[l];
    if (i < 0 || p + i > 256) {
      ((cinfo)->err->msg_code = (JERR_BAD_HUFF_TABLE),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
    }
    while (i--) {
      huffsize[p++] = (char)l;
    }
  }
  huffsize[p] = 0;
  lastp = p;
  code = 0;
  si = huffsize[0];
  p = 0;
  while (huffsize[p]) {
    while (((int)huffsize[p]) == si) {
      huffcode[p++] = code;
      code++;
    }
    if (((JLONG)code) >= (((JLONG)1) << si)) {
      ((cinfo)->err->msg_code = (JERR_BAD_HUFF_TABLE),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
    }
    code <<= 1;
    si++;
  }
  memset(dtbl->ehufsi, 0, sizeof(dtbl->ehufsi));
  maxsymbol = isDC ? 15 : 255;
  for (p = 0; p < lastp; p++) {
    i = htbl->huffval[p];
    if (i < 0 || i > maxsymbol || dtbl->ehufsi[i]) {
      ((cinfo)->err->msg_code = (JERR_BAD_HUFF_TABLE),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
    }
    dtbl->ehufco[i] = huffcode[p];
    dtbl->ehufsi[i] = huffsize[p];
  }
}
static boolean dump_buffer(working_state *state) {
  Destination *dest = state->cinfo->dest;
  if (!(*dest->empty_output_buffer)(state->cinfo)) {
    return 0;
  }
  state->next_output_byte = dest->next_output_byte;
  state->free_in_buffer = dest->free_in_buffer;
  return 1;
}
static boolean flush_bits(working_state *state) {
  JOCTET _buffer[(64 * 8)] = {}, *buffer;
  size_t put_buffer;
  int put_bits;
  size_t bytes, bytestocopy;
  int localbuf = 0;
  put_buffer = state->cur.put_buffer;
  put_bits = state->cur.put_bits;
  {
    if (state->free_in_buffer < (64 * 8)) {
      localbuf = 1;
      buffer = _buffer;
    }
    else {
      buffer = state->next_output_byte;
    }
  }
  {
    put_bits += 7;
    put_buffer = (put_buffer << 7) | 0x7F;
  }
  while (put_bits >= 8) {
    JOCTET c;
    put_bits -= 8;
    c = (JOCTET) static_cast<int>(put_buffer >> put_bits);
    *buffer++ = c;
    if (c == 0xFF) {
      *buffer++ = 0;
    }
  }
  state->cur.put_buffer = 0;
  state->cur.put_bits = 0;
  {
    if (localbuf) {
      bytes = buffer - _buffer;
      buffer = _buffer;
      while (bytes > 0) {
        bytestocopy =
            ((bytes) < (state->free_in_buffer) ? (bytes)
                                               : (state->free_in_buffer));
        memcpy(state->next_output_byte, buffer, bytestocopy);
        state->next_output_byte += bytestocopy;
        buffer += bytestocopy;
        state->free_in_buffer -= bytestocopy;
        if (state->free_in_buffer == 0) {
          if (!dump_buffer(state)) {
            return 0;
          }
        }
        bytes -= bytestocopy;
      }
    }
    else {
      state->free_in_buffer -= (buffer - state->next_output_byte);
      state->next_output_byte = buffer;
    }
  }
  return 1;
}
static boolean encode_one_block_simd(working_state *state, JCOEFPTR block,
                                     int last_dc_val, c_derived_tbl *dctbl,
                                     c_derived_tbl *actbl) {
  JOCTET _buffer[(64 * 8)] = {}, *buffer;
  size_t bytes, bytestocopy;
  int localbuf = 0;
  {
    if (state->free_in_buffer < (64 * 8)) {
      localbuf = 1;
      buffer = _buffer;
    }
    else {
      buffer = state->next_output_byte;
    }
  }
  buffer = jsimd_huff_encode_one_block(state, buffer, block, last_dc_val, dctbl,
                                       actbl);
  {
    if (localbuf) {
      bytes = buffer - _buffer;
      buffer = _buffer;
      while (bytes > 0) {
        bytestocopy =
            ((bytes) < (state->free_in_buffer) ? (bytes)
                                               : (state->free_in_buffer));
        memcpy(state->next_output_byte, buffer, bytestocopy);
        state->next_output_byte += bytestocopy;
        buffer += bytestocopy;
        state->free_in_buffer -= bytestocopy;
        if (state->free_in_buffer == 0) {
          if (!dump_buffer(state)) {
            return 0;
          }
        }
        bytes -= bytestocopy;
      }
    }
    else {
      state->free_in_buffer -= (buffer - state->next_output_byte);
      state->next_output_byte = buffer;
    }
  }
  return 1;
}
static boolean encode_one_block(working_state *state, JCOEFPTR block,
                                int previous, c_derived_tbl *dc,
                                c_derived_tbl *ac) {
  return jpeg_huffman_encode::encode_one_block(
      reinterpret_cast<jpeg_huffman_encode::WorkingState *>(state), block,
      previous, dc, ac);
}
static boolean emit_restart(working_state *state, int restart_num) {
  int ci;
  if (!flush_bits(state)) {
    return 0;
  }
  {
    *(state)->next_output_byte++ = (JOCTET)(0xFF);
    if (--(state)->free_in_buffer == 0) {
      if (!dump_buffer(state)) {
        return 0;
      }
    }
  };
  {
    *(state)->next_output_byte++ = (JOCTET)(0xd0 + restart_num);
    if (--(state)->free_in_buffer == 0) {
      if (!dump_buffer(state)) {
        return 0;
      }
    }
  };
  for (ci = 0; ci < state->cinfo->comps_in_scan; ci++) {
    state->cur.last_dc_val[ci] = 0;
  }
  return 1;
}
static boolean encode_mcu_huff(j_compress_ptr cinfo, JBLOCKROW *MCU_data) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  working_state state;
  int blkn, ci;
  Component *compptr;
  state.next_output_byte = cinfo->dest->next_output_byte;
  state.free_in_buffer = cinfo->dest->free_in_buffer;
  ((state.cur) = (entropy->saved));
  state.cinfo = cinfo;
  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0) {
      if (!emit_restart(&state, entropy->next_restart_num)) {
        return 0;
      }
    }
  }
  if (entropy->simd) {
    for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
      ci = cinfo->MCU_membership[blkn];
      compptr = cinfo->cur_comp_info[ci];
      if (!encode_one_block_simd(
              &state, MCU_data[blkn][0], state.cur.last_dc_val[ci],
              entropy->dc_derived_tbls[compptr->dc_tbl_no],
              entropy->ac_derived_tbls[compptr->ac_tbl_no])) {
        return 0;
      }
      state.cur.last_dc_val[ci] = MCU_data[blkn][0][0];
    }
  }
  else {
    for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
      ci = cinfo->MCU_membership[blkn];
      compptr = cinfo->cur_comp_info[ci];
      if (!encode_one_block(&state, MCU_data[blkn][0],
                            state.cur.last_dc_val[ci],
                            entropy->dc_derived_tbls[compptr->dc_tbl_no],
                            entropy->ac_derived_tbls[compptr->ac_tbl_no])) {
        return 0;
      }
      state.cur.last_dc_val[ci] = MCU_data[blkn][0][0];
    }
  }
  cinfo->dest->next_output_byte = state.next_output_byte;
  cinfo->dest->free_in_buffer = state.free_in_buffer;
  ((entropy->saved) = (state.cur));
  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0) {
      entropy->restarts_to_go = cinfo->restart_interval;
      entropy->next_restart_num++;
      entropy->next_restart_num &= 7;
    }
    entropy->restarts_to_go--;
  }
  return 1;
}
static void finish_pass_huff(j_compress_ptr cinfo) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  working_state state;
  state.next_output_byte = cinfo->dest->next_output_byte;
  state.free_in_buffer = cinfo->dest->free_in_buffer;
  ((state.cur) = (entropy->saved));
  state.cinfo = cinfo;
  if (!flush_bits(&state)) {
    ((cinfo)->err->msg_code = (JERR_CANT_SUSPEND),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  cinfo->dest->next_output_byte = state.next_output_byte;
  cinfo->dest->free_in_buffer = state.free_in_buffer;
  ((entropy->saved) = (state.cur));
}
static void htest_one_block(j_compress_ptr cinfo, JCOEFPTR block,
                            int last_dc_val, long dc_counts[],
                            long ac_counts[]) {
  int temp;
  int nbits;
  int k, r;
  temp = block[0] - last_dc_val;
  if (temp < 0) {
    temp = -temp;
  }
  nbits = 0;
  while (temp) {
    nbits++;
    temp >>= 1;
  }
  if (nbits > 10 + 1) {
    ((cinfo)->err->msg_code = (JERR_BAD_DCT_COEF),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  dc_counts[nbits]++;
  r = 0;
  for (k = 1; k < 64; k++) {
    if ((temp = block[jpeg_natural_order[k]]) == 0) {
      r++;
    }
    else {
      while (r > 15) {
        ac_counts[0xF0]++;
        r -= 16;
      }
      if (temp < 0) {
        temp = -temp;
      }
      nbits = 1;
      while ((temp >>= 1)) {
        nbits++;
      }
      if (nbits > 10) {
        ((cinfo)->err->msg_code = (JERR_BAD_DCT_COEF),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      }
      ac_counts[(r << 4) + nbits]++;
      r = 0;
    }
  }
  if (r > 0) {
    ac_counts[0]++;
  }
}
static boolean encode_mcu_gather(j_compress_ptr cinfo, JBLOCKROW *MCU_data) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  int blkn, ci;
  Component *compptr;
  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0) {
      for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
        entropy->saved.last_dc_val[ci] = 0;
      }
      entropy->restarts_to_go = cinfo->restart_interval;
    }
    entropy->restarts_to_go--;
  }
  for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
    ci = cinfo->MCU_membership[blkn];
    compptr = cinfo->cur_comp_info[ci];
    htest_one_block(cinfo, MCU_data[blkn][0], entropy->saved.last_dc_val[ci],
                    entropy->dc_count_ptrs[compptr->dc_tbl_no],
                    entropy->ac_count_ptrs[compptr->ac_tbl_no]);
    entropy->saved.last_dc_val[ci] = MCU_data[blkn][0][0];
  }
  return 1;
}
void generate_optimal_table(j_compress_ptr cinfo, JHUFF_TBL *htbl,
                            long freq[]) {
  UINT8 bits[32 + 1];
  int codesize[257];
  int others[257];
  int c1, c2;
  int p, i, j;
  long v;
  memset(bits, 0, sizeof(bits));
  memset(codesize, 0, sizeof(codesize));
  for (i = 0; i < 257; i++) {
    others[i] = -1;
  }
  freq[256] = 1;
  for (;;) {
    c1 = -1;
    v = 1000000000L;
    for (i = 0; i <= 256; i++) {
      if (freq[i] && freq[i] <= v) {
        v = freq[i];
        c1 = i;
      }
    }
    c2 = -1;
    v = 1000000000L;
    for (i = 0; i <= 256; i++) {
      if (freq[i] && freq[i] <= v && i != c1) {
        v = freq[i];
        c2 = i;
      }
    }
    if (c2 < 0) {
      break;
    }
    freq[c1] += freq[c2];
    freq[c2] = 0;
    codesize[c1]++;
    while (others[c1] >= 0) {
      c1 = others[c1];
      codesize[c1]++;
    }
    others[c1] = c2;
    codesize[c2]++;
    while (others[c2] >= 0) {
      c2 = others[c2];
      codesize[c2]++;
    }
  }
  for (i = 0; i <= 256; i++) {
    if (codesize[i]) {
      if (codesize[i] > 32) {
        ((cinfo)->err->msg_code = (JERR_HUFF_CLEN_OVERFLOW),
         (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
      }
      bits[codesize[i]]++;
    }
  }
  for (i = 32; i > 16; i--) {
    while (bits[i] > 0) {
      j = i - 2;
      while (bits[j] == 0) {
        j--;
      }
      bits[i] -= 2;
      bits[i - 1]++;
      bits[j + 1] += 2;
      bits[j]--;
    }
  }
  while (bits[i] == 0) {
    i--;
  }
  bits[i]--;
  memcpy(htbl->bits, bits, sizeof(htbl->bits));
  p = 0;
  for (i = 1; i <= 32; i++) {
    for (j = 0; j <= 255; j++) {
      if (codesize[j] == i) {
        htbl->huffval[p] = (UINT8)j;
        p++;
      }
    }
  }
  htbl->sent_table = 0;
}
static void finish_pass_gather(j_compress_ptr cinfo) {
  huff_entropy_ptr entropy = (huff_entropy_ptr)cinfo->entropy;
  int ci, dctbl, actbl;
  Component *compptr;
  JHUFF_TBL **htblptr;
  boolean did_dc[4];
  boolean did_ac[4];
  memset(did_dc, 0, sizeof(did_dc));
  memset(did_ac, 0, sizeof(did_ac));
  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    compptr = cinfo->cur_comp_info[ci];
    dctbl = compptr->dc_tbl_no;
    actbl = compptr->ac_tbl_no;
    if (!did_dc[dctbl]) {
      htblptr = &cinfo->dc_huff_tbl_ptrs[dctbl];
      if (*htblptr == nullptr) {
        *htblptr = allocate_huffman_table((j_common_ptr)cinfo);
      }
      generate_optimal_table(cinfo, *htblptr, entropy->dc_count_ptrs[dctbl]);
      did_dc[dctbl] = 1;
    }
    if (!did_ac[actbl]) {
      htblptr = &cinfo->ac_huff_tbl_ptrs[actbl];
      if (*htblptr == nullptr) {
        *htblptr = allocate_huffman_table((j_common_ptr)cinfo);
      }
      generate_optimal_table(cinfo, *htblptr, entropy->ac_count_ptrs[actbl]);
      did_ac[actbl] = 1;
    }
  }
}
void nndetailImageJpeg_jinit_huff_encoder(j_compress_ptr cinfo) {
  huff_entropy_ptr entropy;
  int i;
  entropy = (huff_entropy_ptr)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, sizeof(huff_entropy_encoder));
  cinfo->entropy = (PublicEntropy *)entropy;
  entropy->pub.start_pass = start_pass_huff;
  for (i = 0; i < 4; i++) {
    entropy->dc_derived_tbls[i] = entropy->ac_derived_tbls[i] = nullptr;
    entropy->dc_count_ptrs[i] = entropy->ac_count_ptrs[i] = nullptr;
  }
}

}

/*
  Adapted from libjpeg-turbo 1.5.0 jchuff.c and jerror.h,
  with the natural-order table from jutils.c.
  SDK ABI views and observed buffer initialization replace upstream details.
  The block encoder is supplied by the recovered Huffman component.
  See licenses/libjpeg-turbo/README.ijg and ENCODER_CONTROL_CHANGES.md.

  Copyright (C) 1991-1997, Thomas G. Lane.
  Copyright (C) 2009-2011, 2014-2016, D. R. Commander.
  Copyright (C) 2015, Matthieu Darbois.
  Copyright (C) 1994-1997, Thomas G. Lane.
  Modified 1997-2009 by Guido Vollbeding.
  Copyright (C) 2014, D. R. Commander.
  Copyright (C) 1991-1996, Thomas G. Lane.
*/
