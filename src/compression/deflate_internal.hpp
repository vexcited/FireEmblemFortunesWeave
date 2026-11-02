#pragma once
#include "compression/checksums.hpp"
#include "compression/deflate.hpp"
using namespace fw::compression;
using AllocateFunction = void *(*)(void *, uint32_t, uint32_t);
using ReleaseFunction = void (*)(void *, void *);
extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);
extern "C" void Libz_SigloMiddlewareInfo();
constexpr int Z_NO_FLUSH = 0, Z_PARTIAL_FLUSH = 1, Z_SYNC_FLUSH = 2;
constexpr int Z_FULL_FLUSH = 3, Z_FINISH = 4, Z_BLOCK = 5;
constexpr int Z_OK = 0, Z_STREAM_END = 1, Z_NEED_DICT = 2;
constexpr int Z_STREAM_ERROR = -2, Z_DATA_ERROR = -3, Z_MEM_ERROR = -4;
constexpr int Z_BUF_ERROR = -5, Z_VERSION_ERROR = -6;
constexpr int Z_DEFAULT_COMPRESSION = -1, Z_DEFAULT_STRATEGY = 0;
constexpr int Z_FILTERED = 1, Z_HUFFMAN_ONLY = 2, Z_RLE = 3, Z_FIXED = 4;
constexpr int Z_DEFLATED = 8, Z_UNKNOWN = 2, Z_BINARY = 0, Z_TEXT = 1;
constexpr int DEF_MEM_LEVEL = 8, MAX_MEM_LEVEL = 9, MAX_WBITS = 15;
constexpr int DEF_WBITS = 15, MIN_MATCH = 3, MAX_MATCH = 258,
              PRESET_DICT = 0x20;
constexpr int STORED_BLOCK = 0, STATIC_TREES = 1, DYN_TREES = 2, OS_CODE = 3;
constexpr int TOO_FAR = 4096, LIT_BUFS = 4;
constexpr char ZLIB_VERSION[] = "1.3.1";
extern const char *const nnutilZlib_z_errmsg[10];
#define ERR_MSG(err) nnutilZlib_z_errmsg[Z_NEED_DICT - (err)]
#define ERR_RETURN(stream, err) return (stream->message = ERR_MSG(err), (err))
#define ZALLOC(stream, count, size)                                            \
  (stream)->allocate((stream)->opaque, (count), (size))
#define ZFREE(stream, address) (stream)->release((stream)->opaque, (address))
#define TRY_FREE(stream, address)                                              \
  if (address) {                                                               \
    ZFREE(stream, address);                                                    \
  }
#define zmemzero(destination, size) memset(destination, 0, size)
#define max_insert_length max_lazy_match
#define Freq fc.freq
#define Code fc.code
#define Dad dl.dad
#define Len dl.len

#define DEFLATE_H

#define GZIP

#define LENGTH_CODES 29

#define LITERALS 256

#define L_CODES (LITERALS + 1 + LENGTH_CODES)

#define D_CODES 30

#define BL_CODES 19

#define HEAP_SIZE (2 * L_CODES + 1)

#define MAX_BITS 15

#define Buf_size 16

#define INIT_STATE 42
#define GZIP_STATE 57
#define EXTRA_STATE 69
#define NAME_STATE 73
#define COMMENT_STATE 91
#define HCRC_STATE 103
#define BUSY_STATE 113
#define FINISH_STATE 666

#define put_byte(s, c)                                                         \
  {                                                                            \
    s->pending_buf[s->pending++] = (uint8_t)(c);                               \
  }

#define MIN_LOOKAHEAD (MAX_MATCH + MIN_MATCH + 1)

#define MAX_DIST(s) ((s)->w_size - MIN_LOOKAHEAD)

#define WIN_INIT MAX_MATCH

extern "C" void nnutilZlib__tr_init(DeflateState *s);
extern "C" int nnutilZlib__tr_tally(DeflateState *s, unsigned dist,
                                    unsigned lc);
extern "C" void nnutilZlib__tr_flush_block(DeflateState *s, char *buf,
                                           uint64_t stored_len, int last);
extern "C" void nnutilZlib__tr_flush_bits(DeflateState *s);
extern "C" void nnutilZlib__tr_align(DeflateState *s);
extern "C" void nnutilZlib__tr_stored_block(DeflateState *s, char *buf,
                                            uint64_t stored_len, int last);

#define d_code(dist)                                                           \
  ((dist) < 256 ? nnutilZlib__dist_code[dist]                                  \
                : nnutilZlib__dist_code[256 + ((dist) >> 7)])

extern "C" const uint8_t nnutilZlib__length_code[];
extern "C" const uint8_t nnutilZlib__dist_code[];

#define _tr_tally_lit(s, c, flush)                                             \
  {                                                                            \
    uint8_t cc = (c);                                                          \
    s->sym_buf[s->sym_next++] = 0;                                             \
    s->sym_buf[s->sym_next++] = 0;                                             \
    s->sym_buf[s->sym_next++] = cc;                                            \
    s->dyn_ltree[cc].Freq++;                                                   \
    flush = (s->sym_next == s->sym_end);                                       \
  }
#define _tr_tally_dist(s, distance, length, flush)                             \
  {                                                                            \
    uint8_t len = (uint8_t)(length);                                           \
    uint16_t dist = (uint16_t)(distance);                                      \
    s->sym_buf[s->sym_next++] = (uint8_t)dist;                                 \
    s->sym_buf[s->sym_next++] = (uint8_t)(dist >> 8);                          \
    s->sym_buf[s->sym_next++] = len;                                           \
    dist--;                                                                    \
    s->dyn_ltree[nnutilZlib__length_code[len] + LITERALS + 1].Freq++;          \
    s->dyn_dtree[d_code(dist)].Freq++;                                         \
    flush = (s->sym_next == s->sym_end);                                       \
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
