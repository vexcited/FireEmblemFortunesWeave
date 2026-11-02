#include "deflate_internal.hpp"

const char *const nnutilZlib_z_errmsg[10] = {"need dictionary",
                                             "stream end",
                                             "",
                                             "file error",
                                             "stream error",
                                             "data error",
                                             "insufficient memory",
                                             "buffer error",
                                             "incompatible version",
                                             ""};

extern "C" const char nnutilZlib_deflate_copyright[] =
    " deflate 1.3.1 Copyright 1995-2024 Jean-loup Gailly and Mark Adler ";

typedef enum { need_more, block_done, finish_started, finish_done } block_state;

typedef block_state (*compress_func)(DeflateState *s, int flush);

static block_state deflate_stored(DeflateState *s, int flush);
static block_state deflate_fast(DeflateState *s, int flush);
static block_state deflate_slow(DeflateState *s, int flush);
static block_state deflate_rle(DeflateState *s, int flush);
static block_state deflate_huff(DeflateState *s, int flush);

#define NIL 0

typedef struct config_s {
  uint16_t good_length;
  uint16_t max_lazy;
  uint16_t nice_length;
  uint16_t max_chain;
  compress_func func;
} config;

static const config configuration_table[10] = {

    {0, 0, 0, 0, deflate_stored},       {4, 4, 8, 4, deflate_fast},
    {4, 5, 16, 8, deflate_fast},        {4, 6, 32, 32, deflate_fast},

    {4, 4, 16, 16, deflate_slow},       {8, 16, 32, 32, deflate_slow},
    {8, 16, 128, 128, deflate_slow},    {8, 32, 128, 256, deflate_slow},
    {32, 128, 258, 1024, deflate_slow}, {32, 258, 258, 4096, deflate_slow}};

#define RANK(f) (((f) * 2) - ((f) > 4 ? 9 : 0))

#define UPDATE_HASH(s, h, c) (h = (((h) << s->hash_shift) ^ (c)) & s->hash_mask)

#define INSERT_STRING(s, str, match_head)                                      \
  (UPDATE_HASH(s, s->ins_h, s->window[(str) + (MIN_MATCH - 1)]),               \
   match_head = s->prev[(str) & s->w_mask] = s->head[s->ins_h],                \
   s->head[s->ins_h] = (uint16_t)(str))

#define CLEAR_HASH(s)                                                          \
  do {                                                                         \
    s->head[s->hash_size - 1] = NIL;                                           \
    zmemzero((uint8_t *)s->head,                                               \
             (unsigned)(s->hash_size - 1) * sizeof(*s->head));                 \
  } while (0)

static void slide_hash(DeflateState *s) {
  unsigned n, m;
  uint16_t *p;
  uint32_t wsize = s->w_size;

  n = s->hash_size;
  p = &s->head[n];
  do {
    m = *--p;
    *p = (uint16_t)(m >= wsize ? m - wsize : NIL);
  } while (--n);
  n = wsize;
  p = &s->prev[n];
  do {
    m = *--p;
    *p = (uint16_t)(m >= wsize ? m - wsize : NIL);

  } while (--n);
}

static unsigned read_buf(DeflateStream *stream, uint8_t *buf, unsigned size) {
  unsigned len = stream->input_available;

  if (len > size) {
    len = size;
  }
  if (len == 0) {
    return 0;
  }

  stream->input_available -= len;

  memcpy(buf, stream->next_input, len);
  if (stream->state->wrap == 1) {
    stream->checksum = nnutilZlib_adler32(stream->checksum, buf, len);
  }
  else if (stream->state->wrap == 2) {
    stream->checksum = nnutilZlib_crc32(stream->checksum, buf, len);
  }
  stream->next_input += len;
  stream->total_input += len;

  return len;
}

static void fill_window(DeflateState *s) {
  unsigned n;
  unsigned more;
  uint32_t wsize = s->w_size;

  do {
    more = (unsigned)(s->window_size - (uint64_t)s->lookahead -
                      (uint64_t)s->strstart);

    if (sizeof(int) <= 2) {
      if (more == 0 && s->strstart == 0 && s->lookahead == 0) {
        more = wsize;
      }
      else if (more == (unsigned)(-1)) {

        more--;
      }
    }

    if (s->strstart >= wsize + MAX_DIST(s)) {

      memcpy(s->window, s->window + wsize, (unsigned)wsize - more);
      s->match_start -= wsize;
      s->strstart -= wsize;
      s->block_start -= (long)wsize;
      if (s->insert > s->strstart) {
        s->insert = s->strstart;
      }
      slide_hash(s);
      more += wsize;
    }
    if (s->stream->input_available == 0) {
      break;
    }

    n = read_buf(s->stream, s->window + s->strstart + s->lookahead, more);
    s->lookahead += n;

    if (s->lookahead + s->insert >= MIN_MATCH) {
      uint32_t str = s->strstart - s->insert;
      s->ins_h = s->window[str];
      UPDATE_HASH(s, s->ins_h, s->window[str + 1]);
      while (s->insert) {
        UPDATE_HASH(s, s->ins_h, s->window[str + MIN_MATCH - 1]);
        s->prev[str & s->w_mask] = s->head[s->ins_h];
        s->head[s->ins_h] = (uint16_t)str;
        str++;
        s->insert--;
        if (s->lookahead + s->insert < MIN_MATCH) {
          break;
        }
      }
    }

  } while (s->lookahead < MIN_LOOKAHEAD && s->stream->input_available != 0);

  if (s->high_water < s->window_size) {
    uint64_t curr = s->strstart + (uint64_t)(s->lookahead);
    uint64_t init;

    if (s->high_water < curr) {

      init = s->window_size - curr;
      if (init > WIN_INIT) {
        init = WIN_INIT;
      }
      zmemzero(s->window + curr, (unsigned)init);
      s->high_water = curr + init;
    }
    else if (s->high_water < (uint64_t)curr + WIN_INIT) {

      init = (uint64_t)curr + WIN_INIT - s->high_water;
      if (init > s->window_size - s->high_water) {
        init = s->window_size - s->high_water;
      }
      zmemzero(s->window + s->high_water, (unsigned)init);
      s->high_water += init;
    }
  }
}

int nnutilZlib_deflateInit_(DeflateStream *stream, int level,
                            const char *version, int stream_size) {
  return nnutilZlib_deflateInit2_(stream, level, Z_DEFLATED, MAX_WBITS,
                                  DEF_MEM_LEVEL, Z_DEFAULT_STRATEGY, version,
                                  stream_size);
}

int nnutilZlib_deflateInit2_(DeflateStream *stream, int level, int method,
                             int windowBits, int memLevel, int strategy,
                             const char *version, int stream_size) {
  DeflateState *s;
  int wrap = 1;
  static const char my_version[] = "1.3.1";

  if (version == nullptr || version[0] != my_version[0] ||
      stream_size != sizeof(DeflateStream)) {
    return Z_VERSION_ERROR;
  }
  if (stream == nullptr) {
    return Z_STREAM_ERROR;
  }

  stream->message = nullptr;
  if (stream->allocate == (AllocateFunction)0) {
    stream->allocate = nnutilZlib_zcalloc;
    stream->opaque = (void *)0;
  }
  if (stream->release == (ReleaseFunction)0) {
    stream->release = nnutilZlib_zcfree;
  }

  if (level == Z_DEFAULT_COMPRESSION) {
    level = 6;
  }

  if (windowBits < 0) {
    wrap = 0;
    if (windowBits < -15) {
      return Z_STREAM_ERROR;
    }
    windowBits = -windowBits;
  }
  else if (windowBits > 15) {
    wrap = 2;
    windowBits -= 16;
  }
  if (memLevel < 1 || memLevel > MAX_MEM_LEVEL || method != Z_DEFLATED ||
      windowBits < 8 || windowBits > 15 || level < 0 || level > 9 ||
      strategy < 0 || strategy > Z_FIXED || (windowBits == 8 && wrap != 1)) {
    return Z_STREAM_ERROR;
  }
  if (windowBits == 8) {
    windowBits = 9;
  }
  s = (DeflateState *)ZALLOC(stream, 1, sizeof(DeflateState));
  if (s == nullptr) {
    return Z_MEM_ERROR;
  }
  stream->state = (struct DeflateState *)s;
  s->stream = stream;
  s->status = INIT_STATE;

  s->wrap = wrap;
  s->gzhead = nullptr;
  s->w_bits = (uint32_t)windowBits;
  s->w_size = 1 << s->w_bits;
  s->w_mask = s->w_size - 1;

  s->hash_bits = (uint32_t)memLevel + 7;
  s->hash_size = 1 << s->hash_bits;
  s->hash_mask = s->hash_size - 1;
  s->hash_shift = ((s->hash_bits + MIN_MATCH - 1) / MIN_MATCH);

  s->window = (uint8_t *)ZALLOC(stream, s->w_size, 2 * sizeof(uint8_t));
  s->prev = (uint16_t *)ZALLOC(stream, s->w_size, sizeof(uint16_t));
  s->head = (uint16_t *)ZALLOC(stream, s->hash_size, sizeof(uint16_t));

  s->high_water = 0;

  s->lit_bufsize = 1 << (memLevel + 6);

  s->pending_buf = (uint8_t *)ZALLOC(stream, s->lit_bufsize, LIT_BUFS);
  s->pending_buf_size = (uint64_t)s->lit_bufsize * 4;

  if (s->window == nullptr || s->prev == nullptr || s->head == nullptr ||
      s->pending_buf == nullptr) {
    s->status = FINISH_STATE;
    stream->message = ERR_MSG(Z_MEM_ERROR);
    nnutilZlib_deflateEnd(stream);
    return Z_MEM_ERROR;
  }
  s->sym_buf = s->pending_buf + s->lit_bufsize;
  s->sym_end = (s->lit_bufsize - 1) * 3;

  s->level = level;
  s->strategy = strategy;
  s->method = (uint8_t)method;

  return nnutilZlib_deflateReset(stream);
}

static int deflateStateCheck(DeflateStream *stream) {
  DeflateState *s;
  if (stream == nullptr || stream->allocate == (AllocateFunction)0 ||
      stream->release == (ReleaseFunction)0) {
    return 1;
  }
  s = stream->state;
  if (s == nullptr || s->stream != stream ||
      (s->status != INIT_STATE && s->status != GZIP_STATE &&
       s->status != EXTRA_STATE && s->status != NAME_STATE &&
       s->status != COMMENT_STATE && s->status != HCRC_STATE &&
       s->status != BUSY_STATE && s->status != FINISH_STATE)) {
    return 1;
  }
  return 0;
}

int nnutilZlib_deflateSetDictionary(DeflateStream *stream,
                                    const uint8_t *dictionary,
                                    uint32_t dictLength) {
  DeflateState *s;
  uint32_t str, n;
  int wrap;
  unsigned avail;
  const unsigned char *next;

  if (deflateStateCheck(stream) || dictionary == nullptr) {
    return Z_STREAM_ERROR;
  }
  s = stream->state;
  wrap = s->wrap;
  if (wrap == 2 || (wrap == 1 && s->status != INIT_STATE) || s->lookahead) {
    return Z_STREAM_ERROR;
  }

  if (wrap == 1) {
    stream->checksum =
        nnutilZlib_adler32(stream->checksum, dictionary, dictLength);
  }
  s->wrap = 0;

  if (dictLength >= s->w_size) {
    if (wrap == 0) {
      CLEAR_HASH(s);
      s->strstart = 0;
      s->block_start = 0L;
      s->insert = 0;
    }
    dictionary += dictLength - s->w_size;
    dictLength = s->w_size;
  }

  avail = stream->input_available;
  next = stream->next_input;
  stream->input_available = dictLength;
  stream->next_input = (const uint8_t *)dictionary;
  fill_window(s);
  while (s->lookahead >= MIN_MATCH) {
    str = s->strstart;
    n = s->lookahead - (MIN_MATCH - 1);
    do {
      UPDATE_HASH(s, s->ins_h, s->window[str + MIN_MATCH - 1]);
      s->prev[str & s->w_mask] = s->head[s->ins_h];
      s->head[s->ins_h] = (uint16_t)str;
      str++;
    } while (--n);
    s->strstart = str;
    s->lookahead = MIN_MATCH - 1;
    fill_window(s);
  }
  s->strstart += s->lookahead;
  s->block_start = (long)s->strstart;
  s->insert = s->lookahead;
  s->lookahead = 0;
  s->match_length = s->prev_length = MIN_MATCH - 1;
  s->match_available = 0;
  stream->next_input = next;
  stream->input_available = avail;
  s->wrap = wrap;
  return Z_OK;
}

int nnutilZlib_deflateGetDictionary(DeflateStream *stream, uint8_t *dictionary,
                                    uint32_t *dictLength) {
  DeflateState *s;
  uint32_t len;

  if (deflateStateCheck(stream)) {
    return Z_STREAM_ERROR;
  }
  s = stream->state;
  len = s->strstart + s->lookahead;
  if (len > s->w_size) {
    len = s->w_size;
  }
  if (dictionary != nullptr && len) {
    memcpy(dictionary, s->window + s->strstart + s->lookahead - len, len);
  }
  if (dictLength != nullptr) {
    *dictLength = len;
  }
  return Z_OK;
}

int nnutilZlib_deflateResetKeep(DeflateStream *stream) {
  DeflateState *s;

  if (deflateStateCheck(stream)) {
    return Z_STREAM_ERROR;
  }

  stream->total_input = stream->total_output = 0;
  stream->message = nullptr;
  stream->data_type = Z_UNKNOWN;

  s = (DeflateState *)stream->state;
  s->pending = 0;
  s->pending_out = s->pending_buf;

  if (s->wrap < 0) {
    s->wrap = -s->wrap;
  }
  s->status = s->wrap == 2 ? GZIP_STATE : INIT_STATE;
  stream->checksum = s->wrap == 2 ? nnutilZlib_crc32(0L, nullptr, 0)
                                  : nnutilZlib_adler32(0L, nullptr, 0);
  s->last_flush = -2;

  nnutilZlib__tr_init(s);

  return Z_OK;
}

static void lm_init(DeflateState *s) {
  s->window_size = (uint64_t)2L * s->w_size;

  CLEAR_HASH(s);

  s->max_lazy_match = configuration_table[s->level].max_lazy;
  s->good_match = configuration_table[s->level].good_length;
  s->nice_match = configuration_table[s->level].nice_length;
  s->max_chain_length = configuration_table[s->level].max_chain;

  s->strstart = 0;
  s->block_start = 0L;
  s->lookahead = 0;
  s->insert = 0;
  s->match_length = s->prev_length = MIN_MATCH - 1;
  s->match_available = 0;
  s->ins_h = 0;
}

int nnutilZlib_deflateReset(DeflateStream *stream) {
  int ret;

  ret = nnutilZlib_deflateResetKeep(stream);
  if (ret == Z_OK) {
    lm_init(stream->state);
  }
  return ret;
}

int nnutilZlib_deflateSetHeader(DeflateStream *stream, GzipHeader *head) {
  if (deflateStateCheck(stream) || stream->state->wrap != 2) {
    return Z_STREAM_ERROR;
  }
  stream->state->gzhead = head;
  return Z_OK;
}

int nnutilZlib_deflatePending(DeflateStream *stream, unsigned *pending,
                              int *bits) {
  if (deflateStateCheck(stream)) {
    return Z_STREAM_ERROR;
  }
  if (pending != nullptr) {
    *pending = stream->state->pending;
  }
  if (bits != nullptr) {
    *bits = stream->state->bi_valid;
  }
  return Z_OK;
}

int nnutilZlib_deflatePrime(DeflateStream *stream, int bits, int value) {
  DeflateState *s;
  int put;

  if (deflateStateCheck(stream)) {
    return Z_STREAM_ERROR;
  }
  s = stream->state;
  if (bits < 0 || bits > 16 ||
      s->sym_buf < s->pending_out + ((Buf_size + 7) >> 3)) {
    return Z_BUF_ERROR;
  }
  do {
    put = Buf_size - s->bi_valid;
    if (put > bits) {
      put = bits;
    }
    s->bi_buf |= (uint16_t)((value & ((1 << put) - 1)) << s->bi_valid);
    s->bi_valid += put;
    nnutilZlib__tr_flush_bits(s);
    value >>= put;
    bits -= put;
  } while (bits);
  return Z_OK;
}

int nnutilZlib_deflateParams(DeflateStream *stream, int level, int strategy) {
  DeflateState *s;
  compress_func func;

  if (deflateStateCheck(stream)) {
    return Z_STREAM_ERROR;
  }
  s = stream->state;

  if (level == Z_DEFAULT_COMPRESSION) {
    level = 6;
  }
  if (level < 0 || level > 9 || strategy < 0 || strategy > Z_FIXED) {
    return Z_STREAM_ERROR;
  }
  func = configuration_table[s->level].func;

  if ((strategy != s->strategy || func != configuration_table[level].func) &&
      s->last_flush != -2) {

    int err = nnutilZlib_deflate(stream, Z_BLOCK);
    if (err == Z_STREAM_ERROR) {
      return err;
    }
    if (stream->input_available ||
        (s->strstart - s->block_start) + s->lookahead) {
      return Z_BUF_ERROR;
    }
  }
  if (s->level != level) {
    if (s->level == 0 && s->matches != 0) {
      if (s->matches == 1) {
        slide_hash(s);
      }
      else {
        CLEAR_HASH(s);
      }
      s->matches = 0;
    }
    s->level = level;
    s->max_lazy_match = configuration_table[level].max_lazy;
    s->good_match = configuration_table[level].good_length;
    s->nice_match = configuration_table[level].nice_length;
    s->max_chain_length = configuration_table[level].max_chain;
  }
  s->strategy = strategy;
  return Z_OK;
}

int nnutilZlib_deflateTune(DeflateStream *stream, int good_length, int max_lazy,
                           int nice_length, int max_chain) {
  DeflateState *s;

  if (deflateStateCheck(stream)) {
    return Z_STREAM_ERROR;
  }
  s = stream->state;
  s->good_match = (uint32_t)good_length;
  s->max_lazy_match = (uint32_t)max_lazy;
  s->nice_match = nice_length;
  s->max_chain_length = (uint32_t)max_chain;
  return Z_OK;
}

uint64_t nnutilZlib_deflateBound(DeflateStream *stream, uint64_t sourceLen) {
  DeflateState *s;
  uint64_t fixedlen, storelen, wraplen;

  fixedlen =
      sourceLen + (sourceLen >> 3) + (sourceLen >> 8) + (sourceLen >> 9) + 4;

  storelen =
      sourceLen + (sourceLen >> 5) + (sourceLen >> 7) + (sourceLen >> 11) + 7;

  if (deflateStateCheck(stream)) {
    return (fixedlen > storelen ? fixedlen : storelen) + 6;
  }

  s = stream->state;
  switch (s->wrap) {
    case 0:
      wraplen = 0;
      break;
    case 1:
      wraplen = 6 + (s->strstart ? 4 : 0);
      break;
    case 2:
      wraplen = 18;
      if (s->gzhead != nullptr) {
        uint8_t *str;
        if (s->gzhead->extra != nullptr) {
          wraplen += 2 + s->gzhead->extra_length;
        }
        str = s->gzhead->name;
        if (str != nullptr) {
          do {
            wraplen++;
          } while (*str++);
        }
        str = s->gzhead->comment;
        if (str != nullptr) {
          do {
            wraplen++;
          } while (*str++);
        }
        if (s->gzhead->header_crc) {
          wraplen += 2;
        }
      }
      break;
    default:
      wraplen = 6;
  }

  if (s->w_bits != 15 || s->hash_bits != 8 + 7) {
    return (s->w_bits <= s->hash_bits && s->level ? fixedlen : storelen) +
           wraplen;
  }

  return sourceLen + (sourceLen >> 12) + (sourceLen >> 14) + (sourceLen >> 25) +
         13 - 6 + wraplen;
}

static void putShortMSB(DeflateState *s, uint32_t b) {
  put_byte(s, (uint8_t)(b >> 8));
  put_byte(s, (uint8_t)(b & 0xff));
}

static void flush_pending(DeflateStream *stream) {
  unsigned len;
  DeflateState *s = stream->state;

  nnutilZlib__tr_flush_bits(s);
  len = s->pending;
  if (len > stream->output_available) {
    len = stream->output_available;
  }
  if (len == 0) {
    return;
  }

  memcpy(stream->next_output, s->pending_out, len);
  stream->next_output += len;
  s->pending_out += len;
  stream->total_output += len;
  stream->output_available -= len;
  s->pending -= len;
  if (s->pending == 0) {
    s->pending_out = s->pending_buf;
  }
}

#define HCRC_UPDATE(beg)                                                       \
  do {                                                                         \
    if (s->gzhead->header_crc && s->pending > (beg))                           \
      stream->checksum = nnutilZlib_crc32(                                     \
          stream->checksum, s->pending_buf + (beg), s->pending - (beg));       \
  } while (0)

int nnutilZlib_deflate(DeflateStream *stream, int flush) {
  Libz_SigloMiddlewareInfo();
  int old_flush;
  DeflateState *s;

  if (deflateStateCheck(stream) || flush > Z_BLOCK || flush < 0) {
    return Z_STREAM_ERROR;
  }
  s = stream->state;

  if (stream->next_output == nullptr ||
      (stream->input_available != 0 && stream->next_input == nullptr) ||
      (s->status == FINISH_STATE && flush != Z_FINISH)) {
    ERR_RETURN(stream, Z_STREAM_ERROR);
  }
  if (stream->output_available == 0) {
    ERR_RETURN(stream, Z_BUF_ERROR);
  }

  old_flush = s->last_flush;
  s->last_flush = flush;

  if (s->pending != 0) {
    flush_pending(stream);
    if (stream->output_available == 0) {

      s->last_flush = -1;
      return Z_OK;
    }
  }
  else if (stream->input_available == 0 && RANK(flush) <= RANK(old_flush) &&
           flush != Z_FINISH) {
    ERR_RETURN(stream, Z_BUF_ERROR);
  }

  if (s->status == FINISH_STATE && stream->input_available != 0) {
    ERR_RETURN(stream, Z_BUF_ERROR);
  }

  if (s->status == INIT_STATE && s->wrap == 0) {
    s->status = BUSY_STATE;
  }
  if (s->status == INIT_STATE) {

    uint32_t header = (Z_DEFLATED + ((s->w_bits - 8) << 4)) << 8;
    uint32_t level_flags;

    if (s->strategy >= Z_HUFFMAN_ONLY || s->level < 2) {
      level_flags = 0;
    }
    else if (s->level < 6) {
      level_flags = 1;
    }
    else if (s->level == 6) {
      level_flags = 2;
    }
    else {
      level_flags = 3;
    }
    header |= (level_flags << 6);
    if (s->strstart != 0) {
      header |= PRESET_DICT;
    }
    header += 31 - (header % 31);

    putShortMSB(s, header);

    if (s->strstart != 0) {
      putShortMSB(s, (uint32_t)(stream->checksum >> 16));
      putShortMSB(s, (uint32_t)(stream->checksum & 0xffff));
    }
    stream->checksum = nnutilZlib_adler32(0L, nullptr, 0);
    s->status = BUSY_STATE;

    flush_pending(stream);
    if (s->pending != 0) {
      s->last_flush = -1;
      return Z_OK;
    }
  }
  if (s->status == GZIP_STATE) {

    stream->checksum = nnutilZlib_crc32(0L, nullptr, 0);
    put_byte(s, 31);
    put_byte(s, 139);
    put_byte(s, 8);
    if (s->gzhead == nullptr) {
      put_byte(s, 0);
      put_byte(s, 0);
      put_byte(s, 0);
      put_byte(s, 0);
      put_byte(s, 0);
      put_byte(s,
               s->level == 9
                   ? 2
                   : (s->strategy >= Z_HUFFMAN_ONLY || s->level < 2 ? 4 : 0));
      put_byte(s, OS_CODE);
      s->status = BUSY_STATE;

      flush_pending(stream);
      if (s->pending != 0) {
        s->last_flush = -1;
        return Z_OK;
      }
    }
    else {
      put_byte(s, (s->gzhead->text ? 1 : 0) + (s->gzhead->header_crc ? 2 : 0) +
                      (s->gzhead->extra == nullptr ? 0 : 4) +
                      (s->gzhead->name == nullptr ? 0 : 8) +
                      (s->gzhead->comment == nullptr ? 0 : 16));
      put_byte(s, (uint8_t)(s->gzhead->time & 0xff));
      put_byte(s, (uint8_t)((s->gzhead->time >> 8) & 0xff));
      put_byte(s, (uint8_t)((s->gzhead->time >> 16) & 0xff));
      put_byte(s, (uint8_t)((s->gzhead->time >> 24) & 0xff));
      put_byte(s,
               s->level == 9
                   ? 2
                   : (s->strategy >= Z_HUFFMAN_ONLY || s->level < 2 ? 4 : 0));
      put_byte(s, s->gzhead->operating_system & 0xff);
      if (s->gzhead->extra != nullptr) {
        put_byte(s, s->gzhead->extra_length & 0xff);
        put_byte(s, (s->gzhead->extra_length >> 8) & 0xff);
      }
      if (s->gzhead->header_crc) {
        stream->checksum =
            nnutilZlib_crc32(stream->checksum, s->pending_buf, s->pending);
      }
      s->gzindex = 0;
      s->status = EXTRA_STATE;
    }
  }
  if (s->status == EXTRA_STATE) {
    if (s->gzhead->extra != nullptr) {
      uint64_t beg = s->pending;
      uint32_t left = (s->gzhead->extra_length & 0xffff) - s->gzindex;
      while (s->pending + left > s->pending_buf_size) {
        uint32_t copy = s->pending_buf_size - s->pending;
        memcpy(s->pending_buf + s->pending, s->gzhead->extra + s->gzindex,
               copy);
        s->pending = s->pending_buf_size;
        HCRC_UPDATE(beg);
        s->gzindex += copy;
        flush_pending(stream);
        if (s->pending != 0) {
          s->last_flush = -1;
          return Z_OK;
        }
        beg = 0;
        left -= copy;
      }
      memcpy(s->pending_buf + s->pending, s->gzhead->extra + s->gzindex, left);
      s->pending += left;
      HCRC_UPDATE(beg);
      s->gzindex = 0;
    }
    s->status = NAME_STATE;
  }
  if (s->status == NAME_STATE) {
    if (s->gzhead->name != nullptr) {
      uint64_t beg = s->pending;
      int val;
      do {
        if (s->pending == s->pending_buf_size) {
          HCRC_UPDATE(beg);
          flush_pending(stream);
          if (s->pending != 0) {
            s->last_flush = -1;
            return Z_OK;
          }
          beg = 0;
        }
        val = s->gzhead->name[s->gzindex++];
        put_byte(s, val);
      } while (val != 0);
      HCRC_UPDATE(beg);
      s->gzindex = 0;
    }
    s->status = COMMENT_STATE;
  }
  if (s->status == COMMENT_STATE) {
    if (s->gzhead->comment != nullptr) {
      uint64_t beg = s->pending;
      int val;
      do {
        if (s->pending == s->pending_buf_size) {
          HCRC_UPDATE(beg);
          flush_pending(stream);
          if (s->pending != 0) {
            s->last_flush = -1;
            return Z_OK;
          }
          beg = 0;
        }
        val = s->gzhead->comment[s->gzindex++];
        put_byte(s, val);
      } while (val != 0);
      HCRC_UPDATE(beg);
    }
    s->status = HCRC_STATE;
  }
  if (s->status == HCRC_STATE) {
    if (s->gzhead->header_crc) {
      if (s->pending + 2 > s->pending_buf_size) {
        flush_pending(stream);
        if (s->pending != 0) {
          s->last_flush = -1;
          return Z_OK;
        }
      }
      put_byte(s, (uint8_t)(stream->checksum & 0xff));
      put_byte(s, (uint8_t)((stream->checksum >> 8) & 0xff));
      stream->checksum = nnutilZlib_crc32(0L, nullptr, 0);
    }
    s->status = BUSY_STATE;

    flush_pending(stream);
    if (s->pending != 0) {
      s->last_flush = -1;
      return Z_OK;
    }
  }

  if (stream->input_available != 0 || s->lookahead != 0 ||
      (flush != Z_NO_FLUSH && s->status != FINISH_STATE)) {
    block_state bstate;

    bstate = s->level == 0                   ? deflate_stored(s, flush)
             : s->strategy == Z_HUFFMAN_ONLY ? deflate_huff(s, flush)
             : s->strategy == Z_RLE
                 ? deflate_rle(s, flush)
                 : (*(configuration_table[s->level].func))(s, flush);

    if (bstate == finish_started || bstate == finish_done) {
      s->status = FINISH_STATE;
    }
    if (bstate == need_more || bstate == finish_started) {
      if (stream->output_available == 0) {
        s->last_flush = -1;
      }
      return Z_OK;
    }
    if (bstate == block_done) {
      if (flush == Z_PARTIAL_FLUSH) {
        nnutilZlib__tr_align(s);
      }
      else if (flush != Z_BLOCK) {
        nnutilZlib__tr_stored_block(s, (char *)0, 0L, 0);

        if (flush == Z_FULL_FLUSH) {
          CLEAR_HASH(s);
          if (s->lookahead == 0) {
            s->strstart = 0;
            s->block_start = 0L;
            s->insert = 0;
          }
        }
      }
      flush_pending(stream);
      if (stream->output_available == 0) {
        s->last_flush = -1;
        return Z_OK;
      }
    }
  }

  if (flush != Z_FINISH) {
    return Z_OK;
  }
  if (s->wrap <= 0) {
    return Z_STREAM_END;
  }

  if (s->wrap == 2) {
    put_byte(s, (uint8_t)(stream->checksum & 0xff));
    put_byte(s, (uint8_t)((stream->checksum >> 8) & 0xff));
    put_byte(s, (uint8_t)((stream->checksum >> 16) & 0xff));
    put_byte(s, (uint8_t)((stream->checksum >> 24) & 0xff));
    put_byte(s, (uint8_t)(stream->total_input & 0xff));
    put_byte(s, (uint8_t)((stream->total_input >> 8) & 0xff));
    put_byte(s, (uint8_t)((stream->total_input >> 16) & 0xff));
    put_byte(s, (uint8_t)((stream->total_input >> 24) & 0xff));
  }
  else {
    putShortMSB(s, (uint32_t)(stream->checksum >> 16));
    putShortMSB(s, (uint32_t)(stream->checksum & 0xffff));
  }
  flush_pending(stream);

  if (s->wrap > 0) {
    s->wrap = -s->wrap;
  }
  return s->pending != 0 ? Z_OK : Z_STREAM_END;
}

int nnutilZlib_deflateEnd(DeflateStream *stream) {
  int status;

  if (deflateStateCheck(stream)) {
    return Z_STREAM_ERROR;
  }

  status = stream->state->status;

  TRY_FREE(stream, stream->state->pending_buf);
  TRY_FREE(stream, stream->state->head);
  TRY_FREE(stream, stream->state->prev);
  TRY_FREE(stream, stream->state->window);

  ZFREE(stream, stream->state);
  stream->state = nullptr;

  return status == BUSY_STATE ? Z_DATA_ERROR : Z_OK;
}

int nnutilZlib_deflateCopy(DeflateStream *dest, DeflateStream *source) {
  DeflateState *ds;
  DeflateState *ss;

  if (deflateStateCheck(source) || dest == nullptr) {
    return Z_STREAM_ERROR;
  }

  ss = source->state;

  memcpy((void *)dest, (void *)source, sizeof(DeflateStream));

  ds = (DeflateState *)ZALLOC(dest, 1, sizeof(DeflateState));
  if (ds == nullptr) {
    return Z_MEM_ERROR;
  }
  dest->state = (struct DeflateState *)ds;
  memcpy((void *)ds, (void *)ss, sizeof(DeflateState));
  ds->stream = dest;

  ds->window = (uint8_t *)ZALLOC(dest, ds->w_size, 2 * sizeof(uint8_t));
  ds->prev = (uint16_t *)ZALLOC(dest, ds->w_size, sizeof(uint16_t));
  ds->head = (uint16_t *)ZALLOC(dest, ds->hash_size, sizeof(uint16_t));
  ds->pending_buf = (uint8_t *)ZALLOC(dest, ds->lit_bufsize, LIT_BUFS);

  if (ds->window == nullptr || ds->prev == nullptr || ds->head == nullptr ||
      ds->pending_buf == nullptr) {
    nnutilZlib_deflateEnd(dest);
    return Z_MEM_ERROR;
  }

  memcpy(ds->window, ss->window, ds->w_size * 2 * sizeof(uint8_t));
  memcpy((void *)ds->prev, (void *)ss->prev, ds->w_size * sizeof(uint16_t));
  memcpy((void *)ds->head, (void *)ss->head, ds->hash_size * sizeof(uint16_t));
  memcpy(ds->pending_buf, ss->pending_buf, ds->lit_bufsize * LIT_BUFS);

  ds->pending_out = ds->pending_buf + (ss->pending_out - ss->pending_buf);
  ds->sym_buf = ds->pending_buf + ds->lit_bufsize;

  ds->l_desc.dyn_tree = ds->dyn_ltree;
  ds->d_desc.dyn_tree = ds->dyn_dtree;
  ds->bl_desc.dyn_tree = ds->bl_tree;

  return Z_OK;
}

static uint32_t longest_match(DeflateState *s, uint32_t cur_match) {
  unsigned chain_length = s->max_chain_length;
  uint8_t *scan = s->window + s->strstart;
  uint8_t *match;
  int len;
  int best_len = (int)s->prev_length;
  int nice_match = s->nice_match;
  uint32_t limit = s->strstart > (uint32_t)MAX_DIST(s)
                       ? s->strstart - (uint32_t)MAX_DIST(s)
                       : NIL;

  uint16_t *prev = s->prev;
  uint32_t wmask = s->w_mask;

  uint8_t *strend = s->window + s->strstart + MAX_MATCH;
  uint8_t scan_end1 = scan[best_len - 1];
  uint8_t scan_end = scan[best_len];

  if (s->prev_length >= s->good_match) {
    chain_length >>= 2;
  }

  if ((uint32_t)nice_match > s->lookahead) {
    nice_match = (int)s->lookahead;
  }

  do {

    match = s->window + cur_match;

    if (match[best_len] != scan_end || match[best_len - 1] != scan_end1 ||
        *match != *scan || *++match != scan[1]) {
      continue;
    }

    scan += 2, match++;

    do {
    } while (*++scan == *++match && *++scan == *++match &&
             *++scan == *++match && *++scan == *++match &&
             *++scan == *++match && *++scan == *++match &&
             *++scan == *++match && *++scan == *++match && scan < strend);

    len = MAX_MATCH - (int)(strend - scan);
    scan = strend - MAX_MATCH;

    if (len > best_len) {
      s->match_start = cur_match;
      best_len = len;
      if (len >= nice_match) {
        break;
      }
      scan_end1 = scan[best_len - 1];
      scan_end = scan[best_len];
    }
  } while ((cur_match = prev[cur_match & wmask]) > limit &&
           --chain_length != 0);

  if ((uint32_t)best_len <= s->lookahead) {
    return (uint32_t)best_len;
  }
  return s->lookahead;
}

#define check_match(s, start, match, length)

#define FLUSH_BLOCK_ONLY(s, last)                                              \
  {                                                                            \
    nnutilZlib__tr_flush_block(                                                \
        s,                                                                     \
        (s->block_start >= 0L ? (char *)&s->window[(unsigned)s->block_start]   \
                              : (char *)nullptr),                              \
        (uint64_t)((long)s->strstart - s->block_start), (last));               \
    s->block_start = s->strstart;                                              \
    flush_pending(s->stream);                                                  \
  }

#define FLUSH_BLOCK(s, last)                                                   \
  {                                                                            \
    FLUSH_BLOCK_ONLY(s, last);                                                 \
    if (s->stream->output_available == 0)                                      \
      return (last) ? finish_started : need_more;                              \
  }

#define MAX_STORED 65535

#define MIN(a, b) ((a) > (b) ? (b) : (a))

static block_state deflate_stored(DeflateState *s, int flush) {

  unsigned min_block = MIN(s->pending_buf_size - 5, s->w_size);

  unsigned len, left, have, last = 0;
  unsigned used = s->stream->input_available;
  do {

    len = MAX_STORED;
    have = (s->bi_valid + 42) >> 3;
    if (s->stream->output_available < have) {
      break;
    }

    have = s->stream->output_available - have;
    left = s->strstart - s->block_start;
    if (len > (uint64_t)left + s->stream->input_available) {
      len = left + s->stream->input_available;
    }
    if (len > have) {
      len = have;
    }

    if (len < min_block &&
        ((len == 0 && flush != Z_FINISH) || flush == Z_NO_FLUSH ||
         len != left + s->stream->input_available)) {
      break;
    }

    last =
        flush == Z_FINISH && len == left + s->stream->input_available ? 1 : 0;
    nnutilZlib__tr_stored_block(s, (char *)0, 0L, last);

    s->pending_buf[s->pending - 4] = len;
    s->pending_buf[s->pending - 3] = len >> 8;
    s->pending_buf[s->pending - 2] = ~len;
    s->pending_buf[s->pending - 1] = ~len >> 8;

    flush_pending(s->stream);

    if (left) {
      if (left > len) {
        left = len;
      }
      memcpy(s->stream->next_output, s->window + s->block_start, left);
      s->stream->next_output += left;
      s->stream->output_available -= left;
      s->stream->total_output += left;
      s->block_start += left;
      len -= left;
    }

    if (len) {
      read_buf(s->stream, s->stream->next_output, len);
      s->stream->next_output += len;
      s->stream->output_available -= len;
      s->stream->total_output += len;
    }
  } while (last == 0);

  used -= s->stream->input_available;
  if (used) {

    if (used >= s->w_size) {
      s->matches = 2;
      memcpy(s->window, s->stream->next_input - s->w_size, s->w_size);
      s->strstart = s->w_size;
      s->insert = s->strstart;
    }
    else {
      if (s->window_size - s->strstart <= used) {

        s->strstart -= s->w_size;
        memcpy(s->window, s->window + s->w_size, s->strstart);
        if (s->matches < 2) {
          s->matches++;
        }
        if (s->insert > s->strstart) {
          s->insert = s->strstart;
        }
      }
      memcpy(s->window + s->strstart, s->stream->next_input - used, used);
      s->strstart += used;
      s->insert += MIN(used, s->w_size - s->insert);
    }
    s->block_start = s->strstart;
  }
  if (s->high_water < s->strstart) {
    s->high_water = s->strstart;
  }

  if (last) {
    return finish_done;
  }

  if (flush != Z_NO_FLUSH && flush != Z_FINISH &&
      s->stream->input_available == 0 && (long)s->strstart == s->block_start) {
    return block_done;
  }

  have = s->window_size - s->strstart;
  if (s->stream->input_available > have && s->block_start >= (long)s->w_size) {

    s->block_start -= s->w_size;
    s->strstart -= s->w_size;
    memcpy(s->window, s->window + s->w_size, s->strstart);
    if (s->matches < 2) {
      s->matches++;
    }
    have += s->w_size;
    if (s->insert > s->strstart) {
      s->insert = s->strstart;
    }
  }
  if (have > s->stream->input_available) {
    have = s->stream->input_available;
  }
  if (have) {
    read_buf(s->stream, s->window + s->strstart, have);
    s->strstart += have;
    s->insert += MIN(have, s->w_size - s->insert);
  }
  if (s->high_water < s->strstart) {
    s->high_water = s->strstart;
  }

  have = (s->bi_valid + 42) >> 3;

  have = MIN(s->pending_buf_size - have, MAX_STORED);
  min_block = MIN(have, s->w_size);
  left = s->strstart - s->block_start;
  if (left >= min_block ||
      ((left || flush == Z_FINISH) && flush != Z_NO_FLUSH &&
       s->stream->input_available == 0 && left <= have)) {
    len = MIN(left, have);
    last = flush == Z_FINISH && s->stream->input_available == 0 && len == left
               ? 1
               : 0;
    nnutilZlib__tr_stored_block(s, (char *)s->window + s->block_start, len,
                                last);
    s->block_start += len;
    flush_pending(s->stream);
  }

  return last ? finish_started : need_more;
}

static block_state deflate_fast(DeflateState *s, int flush) {
  uint32_t hash_head;
  int bflush;

  for (;;) {

    if (s->lookahead < MIN_LOOKAHEAD) {
      fill_window(s);
      if (s->lookahead < MIN_LOOKAHEAD && flush == Z_NO_FLUSH) {
        return need_more;
      }
      if (s->lookahead == 0) {
        break;
      }
    }

    hash_head = NIL;
    if (s->lookahead >= MIN_MATCH) {
      INSERT_STRING(s, s->strstart, hash_head);
    }

    if (hash_head != NIL && s->strstart - hash_head <= MAX_DIST(s)) {

      s->match_length = longest_match(s, hash_head);
    }
    if (s->match_length >= MIN_MATCH) {
      check_match(s, s->strstart, s->match_start, s->match_length);

      _tr_tally_dist(s, s->strstart - s->match_start,
                     s->match_length - MIN_MATCH, bflush);

      s->lookahead -= s->match_length;

      if (s->match_length <= s->max_insert_length &&
          s->lookahead >= MIN_MATCH) {
        s->match_length--;
        do {
          s->strstart++;
          INSERT_STRING(s, s->strstart, hash_head);

        } while (--s->match_length != 0);
        s->strstart++;
      }
      else {
        s->strstart += s->match_length;
        s->match_length = 0;
        s->ins_h = s->window[s->strstart];
        UPDATE_HASH(s, s->ins_h, s->window[s->strstart + 1]);
      }
    }
    else {

      _tr_tally_lit(s, s->window[s->strstart], bflush);
      s->lookahead--;
      s->strstart++;
    }
    if (bflush) {
      FLUSH_BLOCK(s, 0);
    }
  }
  s->insert = s->strstart < MIN_MATCH - 1 ? s->strstart : MIN_MATCH - 1;
  if (flush == Z_FINISH) {
    FLUSH_BLOCK(s, 1);
    return finish_done;
  }
  if (s->sym_next) {
    FLUSH_BLOCK(s, 0);
  }
  return block_done;
}

static block_state deflate_slow(DeflateState *s, int flush) {
  uint32_t hash_head;
  int bflush;

  for (;;) {

    if (s->lookahead < MIN_LOOKAHEAD) {
      fill_window(s);
      if (s->lookahead < MIN_LOOKAHEAD && flush == Z_NO_FLUSH) {
        return need_more;
      }
      if (s->lookahead == 0) {
        break;
      }
    }

    hash_head = NIL;
    if (s->lookahead >= MIN_MATCH) {
      INSERT_STRING(s, s->strstart, hash_head);
    }

    s->prev_length = s->match_length, s->prev_match = s->match_start;
    s->match_length = MIN_MATCH - 1;

    if (hash_head != NIL && s->prev_length < s->max_lazy_match &&
        s->strstart - hash_head <= MAX_DIST(s)) {

      s->match_length = longest_match(s, hash_head);

      if (s->match_length <= 5 && (s->strategy == Z_FILTERED ||
                                   (s->match_length == MIN_MATCH &&
                                    s->strstart - s->match_start > TOO_FAR))) {

        s->match_length = MIN_MATCH - 1;
      }
    }

    if (s->prev_length >= MIN_MATCH && s->match_length <= s->prev_length) {
      uint32_t max_insert = s->strstart + s->lookahead - MIN_MATCH;

      check_match(s, s->strstart - 1, s->prev_match, s->prev_length);

      _tr_tally_dist(s, s->strstart - 1 - s->prev_match,
                     s->prev_length - MIN_MATCH, bflush);

      s->lookahead -= s->prev_length - 1;
      s->prev_length -= 2;
      do {
        if (++s->strstart <= max_insert) {
          INSERT_STRING(s, s->strstart, hash_head);
        }
      } while (--s->prev_length != 0);
      s->match_available = 0;
      s->match_length = MIN_MATCH - 1;
      s->strstart++;

      if (bflush) {
        FLUSH_BLOCK(s, 0);
      }
    }
    else if (s->match_available) {

      _tr_tally_lit(s, s->window[s->strstart - 1], bflush);
      if (bflush) {
        FLUSH_BLOCK_ONLY(s, 0);
      }
      s->strstart++;
      s->lookahead--;
      if (s->stream->output_available == 0) {
        return need_more;
      }
    }
    else {

      s->match_available = 1;
      s->strstart++;
      s->lookahead--;
    }
  }

  if (s->match_available) {

    _tr_tally_lit(s, s->window[s->strstart - 1], bflush);
    s->match_available = 0;
  }
  s->insert = s->strstart < MIN_MATCH - 1 ? s->strstart : MIN_MATCH - 1;
  if (flush == Z_FINISH) {
    FLUSH_BLOCK(s, 1);
    return finish_done;
  }
  if (s->sym_next) {
    FLUSH_BLOCK(s, 0);
  }
  return block_done;
}

static block_state deflate_rle(DeflateState *s, int flush) {
  int bflush;
  uint32_t prev;
  uint8_t *scan, *strend;

  for (;;) {

    if (s->lookahead <= MAX_MATCH) {
      fill_window(s);
      if (s->lookahead <= MAX_MATCH && flush == Z_NO_FLUSH) {
        return need_more;
      }
      if (s->lookahead == 0) {
        break;
      }
    }

    s->match_length = 0;
    if (s->lookahead >= MIN_MATCH && s->strstart > 0) {
      scan = s->window + s->strstart - 1;
      prev = *scan;
      if (prev == *++scan && prev == *++scan && prev == *++scan) {
        strend = s->window + s->strstart + MAX_MATCH;
        do {
        } while (prev == *++scan && prev == *++scan && prev == *++scan &&
                 prev == *++scan && prev == *++scan && prev == *++scan &&
                 prev == *++scan && prev == *++scan && scan < strend);
        s->match_length = MAX_MATCH - (uint32_t)(strend - scan);
        if (s->match_length > s->lookahead) {
          s->match_length = s->lookahead;
        }
      }
    }

    if (s->match_length >= MIN_MATCH) {
      check_match(s, s->strstart, s->strstart - 1, s->match_length);

      _tr_tally_dist(s, 1, s->match_length - MIN_MATCH, bflush);

      s->lookahead -= s->match_length;
      s->strstart += s->match_length;
      s->match_length = 0;
    }
    else {

      _tr_tally_lit(s, s->window[s->strstart], bflush);
      s->lookahead--;
      s->strstart++;
    }
    if (bflush) {
      FLUSH_BLOCK(s, 0);
    }
  }
  s->insert = 0;
  if (flush == Z_FINISH) {
    FLUSH_BLOCK(s, 1);
    return finish_done;
  }
  if (s->sym_next) {
    FLUSH_BLOCK(s, 0);
  }
  return block_done;
}

static block_state deflate_huff(DeflateState *s, int flush) {
  int bflush;

  for (;;) {

    if (s->lookahead == 0) {
      fill_window(s);
      if (s->lookahead == 0) {
        if (flush == Z_NO_FLUSH) {
          return need_more;
        }
        break;
      }
    }

    s->match_length = 0;

    _tr_tally_lit(s, s->window[s->strstart], bflush);
    s->lookahead--;
    s->strstart++;
    if (bflush) {
      FLUSH_BLOCK(s, 0);
    }
  }
  s->insert = 0;
  if (flush == Z_FINISH) {
    FLUSH_BLOCK(s, 1);
    return finish_done;
  }
  if (s->sym_next) {
    FLUSH_BLOCK(s, 0);
  }
  return block_done;
}

/*
  Adapted from zlib 1.3.1 deflate.c and trees.c.
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
