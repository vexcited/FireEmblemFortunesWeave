#pragma once

#include "compression/inflate.hpp"

namespace fw::compression {

struct DeflateStream;
struct DeflateState;

typedef struct DeflateCode {
  union {
    uint16_t freq;
    uint16_t code;
  } fc;
  union {
    uint16_t dad;
    uint16_t len;
  } dl;
} DeflateCode;

struct StaticTreeDescription;

typedef struct TreeDescription {
  DeflateCode *dyn_tree;
  int max_code;
  const StaticTreeDescription *stat_desc;
} TreeDescription;

typedef struct DeflateState {
  DeflateStream *stream;
  int status;
  uint8_t *pending_buf;
  uint64_t pending_buf_size;
  uint8_t *pending_out;
  uint64_t pending;
  int wrap;
  GzipHeader *gzhead;
  uint64_t gzindex;
  uint8_t method;
  int last_flush;

  uint32_t w_size;
  uint32_t w_bits;
  uint32_t w_mask;

  uint8_t *window;

  uint64_t window_size;

  uint16_t *prev;

  uint16_t *head;

  uint32_t ins_h;
  uint32_t hash_size;
  uint32_t hash_bits;
  uint32_t hash_mask;

  uint32_t hash_shift;

  int64_t block_start;

  uint32_t match_length;
  uint32_t prev_match;
  int match_available;
  uint32_t strstart;
  uint32_t match_start;
  uint32_t lookahead;

  uint32_t prev_length;

  uint32_t max_chain_length;

  uint32_t max_lazy_match;

  int level;
  int strategy;

  uint32_t good_match;

  int nice_match;

  struct DeflateCode dyn_ltree[573];
  struct DeflateCode dyn_dtree[2 * 30 + 1];
  struct DeflateCode bl_tree[2 * 19 + 1];

  struct TreeDescription l_desc;
  struct TreeDescription d_desc;
  struct TreeDescription bl_desc;

  uint16_t bl_count[15 + 1];

  int heap[2 * 286 + 1];
  int heap_len;
  int heap_max;

  uint8_t depth[2 * 286 + 1];

  uint8_t *sym_buf;

  uint32_t lit_bufsize;

  uint32_t sym_next;
  uint32_t sym_end;

  uint64_t opt_len;
  uint64_t static_len;
  uint32_t matches;
  uint32_t insert;

  uint16_t bi_buf;

  int bi_valid;

  uint64_t high_water;

} DeflateState;
struct DeflateStream {
  const uint8_t *next_input;
  uint32_t input_available;
  uint64_t total_input;
  uint8_t *next_output;
  uint32_t output_available;
  uint64_t total_output;
  const char *message;
  DeflateState *state;
  void *(*allocate)(void *opaque, uint32_t count, uint32_t size);
  void (*release)(void *opaque, void *address);
  void *opaque;
  int32_t data_type;
  uint64_t checksum;
  uint64_t reserved;
};
static_assert(sizeof(DeflateState) == 0x1740);
static_assert(sizeof(DeflateStream) == 0x70);
static_assert(offsetof(DeflateState, window) == 0x60);
static_assert(offsetof(DeflateState, dyn_ltree) == 0xd4);
static_assert(offsetof(DeflateState, l_desc) == 0xb58);
static_assert(offsetof(DeflateState, sym_buf) == 0x1700);
static_assert(offsetof(DeflateState, bi_buf) == 0x1730);
static_assert(offsetof(DeflateState, high_water) == 0x1738);
} // namespace fw::compression

extern "C" {
int nnutilZlib_deflateInit_(fw::compression::DeflateStream *, int, const char *,
                            int);
int nnutilZlib_deflateInit2_(fw::compression::DeflateStream *, int, int, int,
                             int, int, const char *, int);
int nnutilZlib_deflateEnd(fw::compression::DeflateStream *);
int nnutilZlib_deflateReset(fw::compression::DeflateStream *);
int nnutilZlib_deflateResetKeep(fw::compression::DeflateStream *);
int nnutilZlib_deflateSetDictionary(fw::compression::DeflateStream *,
                                    const uint8_t *, uint32_t);
int nnutilZlib_deflateGetDictionary(fw::compression::DeflateStream *, uint8_t *,
                                    uint32_t *);
int nnutilZlib_deflateSetHeader(fw::compression::DeflateStream *,
                                fw::compression::GzipHeader *);
int nnutilZlib_deflatePending(fw::compression::DeflateStream *, uint32_t *,
                              int *);
int nnutilZlib_deflatePrime(fw::compression::DeflateStream *, int, int);
int nnutilZlib_deflateParams(fw::compression::DeflateStream *, int, int);
int nnutilZlib_deflate(fw::compression::DeflateStream *, int);
int nnutilZlib_deflateTune(fw::compression::DeflateStream *, int, int, int,
                           int);
uint64_t nnutilZlib_deflateBound(fw::compression::DeflateStream *, uint64_t);
int nnutilZlib_deflateCopy(fw::compression::DeflateStream *,
                           fw::compression::DeflateStream *);
}

/*
  Adapted from zlib 1.3.1 deflate.h.
  This altered reconstruction uses SDK exports, callbacks, and C++ ABI types.
  https://github.com/madler/zlib/blob/v1.3.1/deflate.c

  Copyright (C) 1995-2024 Jean-loup Gailly and Mark Adler

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.
  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:
  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
  Jean-loup Gailly        Mark Adler
  jloup@gzip.org          madler@alumni.caltech.edu
*/
