#include "deflate_internal.hpp"

#define MAX_BL_BITS 7

#define END_BLOCK 256

#define REP_3_6 16

#define REPZ_3_10 17

#define REPZ_11_138 18

static const int extra_lbits[LENGTH_CODES] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
                                              1, 1, 2, 2, 2, 2, 3, 3, 3, 3,
                                              4, 4, 4, 4, 5, 5, 5, 5, 0};

static const int extra_dbits[D_CODES] = {0, 0, 0,  0,  1,  1,  2,  2,  3,  3,
                                         4, 4, 5,  5,  6,  6,  7,  7,  8,  8,
                                         9, 9, 10, 10, 11, 11, 12, 12, 13, 13};

static const int extra_blbits[BL_CODES] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                           0, 0, 0, 0, 0, 0, 2, 3, 7};

static const uint8_t bl_order[BL_CODES] = {16, 17, 18, 0, 8,  7, 9,  6, 10, 5,
                                           11, 4,  12, 3, 13, 2, 14, 1, 15};

#define DIST_CODE_LEN 512

static const DeflateCode static_ltree[L_CODES + 2] = {
    {{12}, {8}},  {{140}, {8}}, {{76}, {8}},  {{204}, {8}}, {{44}, {8}},
    {{172}, {8}}, {{108}, {8}}, {{236}, {8}}, {{28}, {8}},  {{156}, {8}},
    {{92}, {8}},  {{220}, {8}}, {{60}, {8}},  {{188}, {8}}, {{124}, {8}},
    {{252}, {8}}, {{2}, {8}},   {{130}, {8}}, {{66}, {8}},  {{194}, {8}},
    {{34}, {8}},  {{162}, {8}}, {{98}, {8}},  {{226}, {8}}, {{18}, {8}},
    {{146}, {8}}, {{82}, {8}},  {{210}, {8}}, {{50}, {8}},  {{178}, {8}},
    {{114}, {8}}, {{242}, {8}}, {{10}, {8}},  {{138}, {8}}, {{74}, {8}},
    {{202}, {8}}, {{42}, {8}},  {{170}, {8}}, {{106}, {8}}, {{234}, {8}},
    {{26}, {8}},  {{154}, {8}}, {{90}, {8}},  {{218}, {8}}, {{58}, {8}},
    {{186}, {8}}, {{122}, {8}}, {{250}, {8}}, {{6}, {8}},   {{134}, {8}},
    {{70}, {8}},  {{198}, {8}}, {{38}, {8}},  {{166}, {8}}, {{102}, {8}},
    {{230}, {8}}, {{22}, {8}},  {{150}, {8}}, {{86}, {8}},  {{214}, {8}},
    {{54}, {8}},  {{182}, {8}}, {{118}, {8}}, {{246}, {8}}, {{14}, {8}},
    {{142}, {8}}, {{78}, {8}},  {{206}, {8}}, {{46}, {8}},  {{174}, {8}},
    {{110}, {8}}, {{238}, {8}}, {{30}, {8}},  {{158}, {8}}, {{94}, {8}},
    {{222}, {8}}, {{62}, {8}},  {{190}, {8}}, {{126}, {8}}, {{254}, {8}},
    {{1}, {8}},   {{129}, {8}}, {{65}, {8}},  {{193}, {8}}, {{33}, {8}},
    {{161}, {8}}, {{97}, {8}},  {{225}, {8}}, {{17}, {8}},  {{145}, {8}},
    {{81}, {8}},  {{209}, {8}}, {{49}, {8}},  {{177}, {8}}, {{113}, {8}},
    {{241}, {8}}, {{9}, {8}},   {{137}, {8}}, {{73}, {8}},  {{201}, {8}},
    {{41}, {8}},  {{169}, {8}}, {{105}, {8}}, {{233}, {8}}, {{25}, {8}},
    {{153}, {8}}, {{89}, {8}},  {{217}, {8}}, {{57}, {8}},  {{185}, {8}},
    {{121}, {8}}, {{249}, {8}}, {{5}, {8}},   {{133}, {8}}, {{69}, {8}},
    {{197}, {8}}, {{37}, {8}},  {{165}, {8}}, {{101}, {8}}, {{229}, {8}},
    {{21}, {8}},  {{149}, {8}}, {{85}, {8}},  {{213}, {8}}, {{53}, {8}},
    {{181}, {8}}, {{117}, {8}}, {{245}, {8}}, {{13}, {8}},  {{141}, {8}},
    {{77}, {8}},  {{205}, {8}}, {{45}, {8}},  {{173}, {8}}, {{109}, {8}},
    {{237}, {8}}, {{29}, {8}},  {{157}, {8}}, {{93}, {8}},  {{221}, {8}},
    {{61}, {8}},  {{189}, {8}}, {{125}, {8}}, {{253}, {8}}, {{19}, {9}},
    {{275}, {9}}, {{147}, {9}}, {{403}, {9}}, {{83}, {9}},  {{339}, {9}},
    {{211}, {9}}, {{467}, {9}}, {{51}, {9}},  {{307}, {9}}, {{179}, {9}},
    {{435}, {9}}, {{115}, {9}}, {{371}, {9}}, {{243}, {9}}, {{499}, {9}},
    {{11}, {9}},  {{267}, {9}}, {{139}, {9}}, {{395}, {9}}, {{75}, {9}},
    {{331}, {9}}, {{203}, {9}}, {{459}, {9}}, {{43}, {9}},  {{299}, {9}},
    {{171}, {9}}, {{427}, {9}}, {{107}, {9}}, {{363}, {9}}, {{235}, {9}},
    {{491}, {9}}, {{27}, {9}},  {{283}, {9}}, {{155}, {9}}, {{411}, {9}},
    {{91}, {9}},  {{347}, {9}}, {{219}, {9}}, {{475}, {9}}, {{59}, {9}},
    {{315}, {9}}, {{187}, {9}}, {{443}, {9}}, {{123}, {9}}, {{379}, {9}},
    {{251}, {9}}, {{507}, {9}}, {{7}, {9}},   {{263}, {9}}, {{135}, {9}},
    {{391}, {9}}, {{71}, {9}},  {{327}, {9}}, {{199}, {9}}, {{455}, {9}},
    {{39}, {9}},  {{295}, {9}}, {{167}, {9}}, {{423}, {9}}, {{103}, {9}},
    {{359}, {9}}, {{231}, {9}}, {{487}, {9}}, {{23}, {9}},  {{279}, {9}},
    {{151}, {9}}, {{407}, {9}}, {{87}, {9}},  {{343}, {9}}, {{215}, {9}},
    {{471}, {9}}, {{55}, {9}},  {{311}, {9}}, {{183}, {9}}, {{439}, {9}},
    {{119}, {9}}, {{375}, {9}}, {{247}, {9}}, {{503}, {9}}, {{15}, {9}},
    {{271}, {9}}, {{143}, {9}}, {{399}, {9}}, {{79}, {9}},  {{335}, {9}},
    {{207}, {9}}, {{463}, {9}}, {{47}, {9}},  {{303}, {9}}, {{175}, {9}},
    {{431}, {9}}, {{111}, {9}}, {{367}, {9}}, {{239}, {9}}, {{495}, {9}},
    {{31}, {9}},  {{287}, {9}}, {{159}, {9}}, {{415}, {9}}, {{95}, {9}},
    {{351}, {9}}, {{223}, {9}}, {{479}, {9}}, {{63}, {9}},  {{319}, {9}},
    {{191}, {9}}, {{447}, {9}}, {{127}, {9}}, {{383}, {9}}, {{255}, {9}},
    {{511}, {9}}, {{0}, {7}},   {{64}, {7}},  {{32}, {7}},  {{96}, {7}},
    {{16}, {7}},  {{80}, {7}},  {{48}, {7}},  {{112}, {7}}, {{8}, {7}},
    {{72}, {7}},  {{40}, {7}},  {{104}, {7}}, {{24}, {7}},  {{88}, {7}},
    {{56}, {7}},  {{120}, {7}}, {{4}, {7}},   {{68}, {7}},  {{36}, {7}},
    {{100}, {7}}, {{20}, {7}},  {{84}, {7}},  {{52}, {7}},  {{116}, {7}},
    {{3}, {8}},   {{131}, {8}}, {{67}, {8}},  {{195}, {8}}, {{35}, {8}},
    {{163}, {8}}, {{99}, {8}},  {{227}, {8}}};

static const DeflateCode static_dtree[D_CODES] = {
    {{0}, {5}},  {{16}, {5}}, {{8}, {5}},  {{24}, {5}}, {{4}, {5}},
    {{20}, {5}}, {{12}, {5}}, {{28}, {5}}, {{2}, {5}},  {{18}, {5}},
    {{10}, {5}}, {{26}, {5}}, {{6}, {5}},  {{22}, {5}}, {{14}, {5}},
    {{30}, {5}}, {{1}, {5}},  {{17}, {5}}, {{9}, {5}},  {{25}, {5}},
    {{5}, {5}},  {{21}, {5}}, {{13}, {5}}, {{29}, {5}}, {{3}, {5}},
    {{19}, {5}}, {{11}, {5}}, {{27}, {5}}, {{7}, {5}},  {{23}, {5}}};

const uint8_t nnutilZlib__dist_code[DIST_CODE_LEN] = {
    0,  1,  2,  3,  4,  4,  5,  5,  6,  6,  6,  6,  7,  7,  7,  7,  8,  8,  8,
    8,  8,  8,  8,  8,  9,  9,  9,  9,  9,  9,  9,  9,  10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11,
    11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
    15, 15, 15, 15, 15, 15, 15, 15, 15, 0,  0,  16, 17, 18, 18, 19, 19, 20, 20,
    20, 20, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23,
    23, 23, 23, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};

const uint8_t nnutilZlib__length_code[MAX_MATCH - MIN_MATCH + 1] = {
    0,  1,  2,  3,  4,  5,  6,  7,  8,  8,  9,  9,  10, 10, 11, 11, 12, 12, 12,
    12, 13, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 16, 16, 16, 16, 16, 16,
    16, 16, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 18, 19,
    19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
    20, 20, 20, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
    21, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 23, 23,
    23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
    25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25,
    25, 25, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
    26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 28};

static const int base_length[LENGTH_CODES] = {
    0,  1,  2,  3,  4,  5,  6,  7,  8,   10,  12,  14,  16,  20, 24,
    28, 32, 40, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 0};

static const int base_dist[D_CODES] = {
    0,    1,    2,    3,    4,    6,    8,    12,    16,    24,
    32,   48,   64,   96,   128,  192,  256,  384,   512,   768,
    1024, 1536, 2048, 3072, 4096, 6144, 8192, 12288, 16384, 24576};

struct fw::compression::StaticTreeDescription {
  const DeflateCode *static_tree;
  const int *extra_bits;
  int extra_base;
  int elems;
  int max_length;
};

#define TCONST const

static TCONST StaticTreeDescription static_l_desc = {
    static_ltree, extra_lbits, LITERALS + 1, L_CODES, MAX_BITS};

static TCONST StaticTreeDescription static_d_desc = {static_dtree, extra_dbits,
                                                     0, D_CODES, MAX_BITS};

static TCONST StaticTreeDescription static_bl_desc = {
    (const DeflateCode *)0, extra_blbits, 0, BL_CODES, MAX_BL_BITS};

#define put_short(s, w)                                                        \
  {                                                                            \
    put_byte(s, (uint8_t)((w) & 0xff));                                        \
    put_byte(s, (uint8_t)((uint16_t)(w) >> 8));                                \
  }

static unsigned bi_reverse(unsigned code, int len) {
  unsigned res = 0;
  do {
    res |= code & 1;
    code >>= 1, res <<= 1;
  } while (--len > 0);
  return res >> 1;
}

static void bi_flush(DeflateState *s) {
  if (s->bi_valid == 16) {
    put_short(s, s->bi_buf);
    s->bi_buf = 0;
    s->bi_valid = 0;
  }
  else if (s->bi_valid >= 8) {
    put_byte(s, (uint8_t)s->bi_buf);
    s->bi_buf >>= 8;
    s->bi_valid -= 8;
  }
}

static void bi_windup(DeflateState *s) {
  if (s->bi_valid > 8) {
    put_short(s, s->bi_buf);
  }
  else if (s->bi_valid > 0) {
    put_byte(s, (uint8_t)s->bi_buf);
  }
  s->bi_buf = 0;
  s->bi_valid = 0;
}

static void gen_codes(DeflateCode *tree, int max_code, uint16_t *bl_count) {
  uint16_t next_code[MAX_BITS + 1];
  unsigned code = 0;
  int bits;
  int n;

  for (bits = 1; bits <= MAX_BITS; bits++) {
    code = (code + bl_count[bits - 1]) << 1;
    next_code[bits] = (uint16_t)code;
  }

  for (n = 0; n <= max_code; n++) {
    int len = tree[n].Len;
    if (len == 0) {
      continue;
    }

    tree[n].Code = (uint16_t)bi_reverse(next_code[len]++, len);
  }
}

#define send_code(s, c, tree) send_bits(s, tree[c].Code, tree[c].Len)

#define send_bits(s, value, length)                                            \
  {                                                                            \
    int len = length;                                                          \
    if (s->bi_valid > (int)Buf_size - len) {                                   \
      int val = (int)value;                                                    \
      s->bi_buf |= (uint16_t)val << s->bi_valid;                               \
      put_short(s, s->bi_buf);                                                 \
      s->bi_buf = (uint16_t)val >> (Buf_size - s->bi_valid);                   \
      s->bi_valid += len - Buf_size;                                           \
    }                                                                          \
    else {                                                                     \
      s->bi_buf |= (uint16_t)(value) << s->bi_valid;                           \
      s->bi_valid += len;                                                      \
    }                                                                          \
  }

static void tr_static_init(void) {
}

static void init_block(DeflateState *s) {
  int n;

  for (n = 0; n < L_CODES; n++) {
    s->dyn_ltree[n].Freq = 0;
  }
  for (n = 0; n < D_CODES; n++) {
    s->dyn_dtree[n].Freq = 0;
  }
  for (n = 0; n < BL_CODES; n++) {
    s->bl_tree[n].Freq = 0;
  }

  s->dyn_ltree[END_BLOCK].Freq = 1;
  s->opt_len = s->static_len = 0L;
  s->sym_next = s->matches = 0;
}

void nnutilZlib__tr_init(DeflateState *s) {
  tr_static_init();

  s->l_desc.dyn_tree = s->dyn_ltree;
  s->l_desc.stat_desc = &static_l_desc;

  s->d_desc.dyn_tree = s->dyn_dtree;
  s->d_desc.stat_desc = &static_d_desc;

  s->bl_desc.dyn_tree = s->bl_tree;
  s->bl_desc.stat_desc = &static_bl_desc;

  s->bi_buf = 0;
  s->bi_valid = 0;

  init_block(s);
}

#define SMALLEST 1

#define pqremove(s, tree, top)                                                 \
  {                                                                            \
    top = s->heap[SMALLEST];                                                   \
    s->heap[SMALLEST] = s->heap[s->heap_len--];                                \
    pqdownheap(s, tree, SMALLEST);                                             \
  }

#define smaller(tree, n, m, depth)                                             \
  (tree[n].Freq < tree[m].Freq ||                                              \
   (tree[n].Freq == tree[m].Freq && depth[n] <= depth[m]))

static void pqdownheap(DeflateState *s, DeflateCode *tree, int k) {
  int v = s->heap[k];
  int j = k << 1;
  while (j <= s->heap_len) {

    if (j < s->heap_len &&
        smaller(tree, s->heap[j + 1], s->heap[j], s->depth)) {
      j++;
    }

    if (smaller(tree, v, s->heap[j], s->depth)) {
      break;
    }

    s->heap[k] = s->heap[j];
    k = j;

    j <<= 1;
  }
  s->heap[k] = v;
}

static void gen_bitlen(DeflateState *s, TreeDescription *desc) {
  DeflateCode *tree = desc->dyn_tree;
  int max_code = desc->max_code;
  const DeflateCode *stree = desc->stat_desc->static_tree;
  const int *extra = desc->stat_desc->extra_bits;
  int base = desc->stat_desc->extra_base;
  int max_length = desc->stat_desc->max_length;
  int h;
  int n, m;
  int bits;
  int xbits;
  uint16_t f;
  int overflow = 0;

  for (bits = 0; bits <= MAX_BITS; bits++) {
    s->bl_count[bits] = 0;
  }

  tree[s->heap[s->heap_max]].Len = 0;

  for (h = s->heap_max + 1; h < HEAP_SIZE; h++) {
    n = s->heap[h];
    bits = tree[tree[n].Dad].Len + 1;
    if (bits > max_length) {
      bits = max_length, overflow++;
    }
    tree[n].Len = (uint16_t)bits;

    if (n > max_code) {
      continue;
    }

    s->bl_count[bits]++;
    xbits = 0;
    if (n >= base) {
      xbits = extra[n - base];
    }
    f = tree[n].Freq;
    s->opt_len += (uint64_t)f * (unsigned)(bits + xbits);
    if (stree) {
      s->static_len += (uint64_t)f * (unsigned)(stree[n].Len + xbits);
    }
  }
  if (overflow == 0) {
    return;
  }

  do {
    bits = max_length - 1;
    while (s->bl_count[bits] == 0) {
      bits--;
    }
    s->bl_count[bits]--;
    s->bl_count[bits + 1] += 2;
    s->bl_count[max_length]--;

    overflow -= 2;
  } while (overflow > 0);

  for (bits = max_length; bits != 0; bits--) {
    n = s->bl_count[bits];
    while (n != 0) {
      m = s->heap[--h];
      if (m > max_code) {
        continue;
      }
      if ((unsigned)tree[m].Len != (unsigned)bits) {

        s->opt_len += ((uint64_t)bits - tree[m].Len) * tree[m].Freq;
        tree[m].Len = (uint16_t)bits;
      }
      n--;
    }
  }
}

#ifdef DUMP_BL_TREE
#include <stdio.h>
#endif

static void build_tree(DeflateState *s, TreeDescription *desc) {
  DeflateCode *tree = desc->dyn_tree;
  const DeflateCode *stree = desc->stat_desc->static_tree;
  int elems = desc->stat_desc->elems;
  int n, m;
  int max_code = -1;
  int node;

  s->heap_len = 0, s->heap_max = HEAP_SIZE;

  for (n = 0; n < elems; n++) {
    if (tree[n].Freq != 0) {
      s->heap[++(s->heap_len)] = max_code = n;
      s->depth[n] = 0;
    }
    else {
      tree[n].Len = 0;
    }
  }

  while (s->heap_len < 2) {
    node = s->heap[++(s->heap_len)] = (max_code < 2 ? ++max_code : 0);
    tree[node].Freq = 1;
    s->depth[node] = 0;
    s->opt_len--;
    if (stree) {
      s->static_len -= stree[node].Len;
    }
  }
  desc->max_code = max_code;

  for (n = s->heap_len / 2; n >= 1; n--) {
    pqdownheap(s, tree, n);
  }

  node = elems;
  do {
    pqremove(s, tree, n);
    m = s->heap[SMALLEST];

    s->heap[--(s->heap_max)] = n;
    s->heap[--(s->heap_max)] = m;

    tree[node].Freq = tree[n].Freq + tree[m].Freq;
    s->depth[node] =
        (uint8_t)((s->depth[n] >= s->depth[m] ? s->depth[n] : s->depth[m]) + 1);
    tree[n].Dad = tree[m].Dad = (uint16_t)node;
#ifdef DUMP_BL_TREE
    if (tree == s->bl_tree) {
      fprintf(stderr, "\nnode %d(%d), sons %d(%d) %d(%d)", node,
              tree[node].Freq, n, tree[n].Freq, m, tree[m].Freq);
    }
#endif

    s->heap[SMALLEST] = node++;
    pqdownheap(s, tree, SMALLEST);

  } while (s->heap_len >= 2);

  s->heap[--(s->heap_max)] = s->heap[SMALLEST];

  gen_bitlen(s, (TreeDescription *)desc);

  gen_codes((DeflateCode *)tree, max_code, s->bl_count);
}

static void scan_tree(DeflateState *s, DeflateCode *tree, int max_code) {
  int n;
  int prevlen = -1;
  int curlen;
  int nextlen = tree[0].Len;
  int count = 0;
  int max_count = 7;
  int min_count = 4;

  if (nextlen == 0) {
    max_count = 138, min_count = 3;
  }
  tree[max_code + 1].Len = (uint16_t)0xffff;

  for (n = 0; n <= max_code; n++) {
    curlen = nextlen;
    nextlen = tree[n + 1].Len;
    if (++count < max_count && curlen == nextlen) {
      continue;
    }
    else if (count < min_count) {
      s->bl_tree[curlen].Freq += count;
    }
    else if (curlen != 0) {
      if (curlen != prevlen) {
        s->bl_tree[curlen].Freq++;
      }
      s->bl_tree[REP_3_6].Freq++;
    }
    else if (count <= 10) {
      s->bl_tree[REPZ_3_10].Freq++;
    }
    else {
      s->bl_tree[REPZ_11_138].Freq++;
    }
    count = 0;
    prevlen = curlen;
    if (nextlen == 0) {
      max_count = 138, min_count = 3;
    }
    else if (curlen == nextlen) {
      max_count = 6, min_count = 3;
    }
    else {
      max_count = 7, min_count = 4;
    }
  }
}

static void send_tree(DeflateState *s, DeflateCode *tree, int max_code) {
  int n;
  int prevlen = -1;
  int curlen;
  int nextlen = tree[0].Len;
  int count = 0;
  int max_count = 7;
  int min_count = 4;

  if (nextlen == 0) {
    max_count = 138, min_count = 3;
  }

  for (n = 0; n <= max_code; n++) {
    curlen = nextlen;
    nextlen = tree[n + 1].Len;
    if (++count < max_count && curlen == nextlen) {
      continue;
    }
    else if (count < min_count) {
      do {
        send_code(s, curlen, s->bl_tree);
      } while (--count != 0);
    }
    else if (curlen != 0) {
      if (curlen != prevlen) {
        send_code(s, curlen, s->bl_tree);
        count--;
      }

      send_code(s, REP_3_6, s->bl_tree);
      send_bits(s, count - 3, 2);
    }
    else if (count <= 10) {
      send_code(s, REPZ_3_10, s->bl_tree);
      send_bits(s, count - 3, 3);
    }
    else {
      send_code(s, REPZ_11_138, s->bl_tree);
      send_bits(s, count - 11, 7);
    }
    count = 0;
    prevlen = curlen;
    if (nextlen == 0) {
      max_count = 138, min_count = 3;
    }
    else if (curlen == nextlen) {
      max_count = 6, min_count = 3;
    }
    else {
      max_count = 7, min_count = 4;
    }
  }
}

static int build_bl_tree(DeflateState *s) {
  int max_blindex;

  scan_tree(s, (DeflateCode *)s->dyn_ltree, s->l_desc.max_code);
  scan_tree(s, (DeflateCode *)s->dyn_dtree, s->d_desc.max_code);

  build_tree(s, (TreeDescription *)(&(s->bl_desc)));

  for (max_blindex = BL_CODES - 1; max_blindex >= 3; max_blindex--) {
    if (s->bl_tree[bl_order[max_blindex]].Len != 0) {
      break;
    }
  }

  s->opt_len += 3 * ((uint64_t)max_blindex + 1) + 5 + 5 + 4;

  return max_blindex;
}

static void send_all_trees(DeflateState *s, int lcodes, int dcodes,
                           int blcodes) {
  int rank;

  send_bits(s, lcodes - 257, 5);
  send_bits(s, dcodes - 1, 5);
  send_bits(s, blcodes - 4, 4);
  for (rank = 0; rank < blcodes; rank++) {

    send_bits(s, s->bl_tree[bl_order[rank]].Len, 3);
  }

  send_tree(s, (DeflateCode *)s->dyn_ltree, lcodes - 1);

  send_tree(s, (DeflateCode *)s->dyn_dtree, dcodes - 1);
}

void nnutilZlib__tr_stored_block(DeflateState *s, char *buf,
                                 uint64_t stored_len, int last) {
  send_bits(s, (STORED_BLOCK << 1) + last, 3);
  bi_windup(s);
  put_short(s, (uint16_t)stored_len);
  put_short(s, (uint16_t)~stored_len);
  if (stored_len) {
    memcpy(s->pending_buf + s->pending, (uint8_t *)buf, stored_len);
  }
  s->pending += stored_len;
}

void nnutilZlib__tr_flush_bits(DeflateState *s) {
  bi_flush(s);
}

void nnutilZlib__tr_align(DeflateState *s) {
  send_bits(s, STATIC_TREES << 1, 3);
  send_code(s, END_BLOCK, static_ltree);
  bi_flush(s);
}

static void compress_block(DeflateState *s, const DeflateCode *ltree,
                           const DeflateCode *dtree) {
  unsigned dist;
  int lc;
  unsigned sx = 0;
  unsigned code;
  int extra;

  if (s->sym_next != 0) {
    do {
      dist = s->sym_buf[sx++] & 0xff;
      dist += (unsigned)(s->sym_buf[sx++] & 0xff) << 8;
      lc = s->sym_buf[sx++];
      if (dist == 0) {
        send_code(s, lc, ltree);
      }
      else {

        code = nnutilZlib__length_code[lc];
        send_code(s, code + LITERALS + 1, ltree);
        extra = extra_lbits[code];
        if (extra != 0) {
          lc -= base_length[code];
          send_bits(s, lc, extra);
        }
        dist--;
        code = d_code(dist);

        send_code(s, code, dtree);
        extra = extra_dbits[code];
        if (extra != 0) {
          dist -= (unsigned)base_dist[code];
          send_bits(s, dist, extra);
        }
      }

    } while (sx < s->sym_next);
  }

  send_code(s, END_BLOCK, ltree);
}

static int detect_data_type(DeflateState *s) {

  unsigned long block_mask = 0xf3ffc07fUL;
  int n;

  for (n = 0; n <= 31; n++, block_mask >>= 1) {
    if ((block_mask & 1) && (s->dyn_ltree[n].Freq != 0)) {
      return Z_BINARY;
    }
  }

  if (s->dyn_ltree[9].Freq != 0 || s->dyn_ltree[10].Freq != 0 ||
      s->dyn_ltree[13].Freq != 0) {
    return Z_TEXT;
  }
  for (n = 32; n < LITERALS; n++) {
    if (s->dyn_ltree[n].Freq != 0) {
      return Z_TEXT;
    }
  }

  return Z_BINARY;
}

void nnutilZlib__tr_flush_block(DeflateState *s, char *buf, uint64_t stored_len,
                                int last) {
  uint64_t opt_lenb, static_lenb;
  int max_blindex = 0;

  if (s->level > 0) {

    if (s->stream->data_type == Z_UNKNOWN) {
      s->stream->data_type = detect_data_type(s);
    }

    build_tree(s, (TreeDescription *)(&(s->l_desc)));

    build_tree(s, (TreeDescription *)(&(s->d_desc)));

    max_blindex = build_bl_tree(s);

    opt_lenb = (s->opt_len + 3 + 7) >> 3;
    static_lenb = (s->static_len + 3 + 7) >> 3;

#ifndef FORCE_STATIC
    if (static_lenb <= opt_lenb || s->strategy == Z_FIXED)
#endif
      opt_lenb = static_lenb;
  }
  else {

    opt_lenb = static_lenb = stored_len + 5;
  }

#ifdef FORCE_STORED
  if (buf != (char *)0) {
#else
  if (stored_len + 4 <= opt_lenb && buf != (char *)0) {

#endif

    nnutilZlib__tr_stored_block(s, buf, stored_len, last);
  }
  else if (static_lenb == opt_lenb) {
    send_bits(s, (STATIC_TREES << 1) + last, 3);
    compress_block(s, (const DeflateCode *)static_ltree,
                   (const DeflateCode *)static_dtree);
  }
  else {
    send_bits(s, (DYN_TREES << 1) + last, 3);
    send_all_trees(s, s->l_desc.max_code + 1, s->d_desc.max_code + 1,
                   max_blindex + 1);
    compress_block(s, (const DeflateCode *)s->dyn_ltree,
                   (const DeflateCode *)s->dyn_dtree);
  }

  init_block(s);

  if (last) {
    bi_windup(s);
  }
}

int nnutilZlib__tr_tally(DeflateState *s, unsigned dist, unsigned lc) {
  s->sym_buf[s->sym_next++] = (uint8_t)dist;
  s->sym_buf[s->sym_next++] = (uint8_t)(dist >> 8);
  s->sym_buf[s->sym_next++] = (uint8_t)lc;
  if (dist == 0) {

    s->dyn_ltree[lc].Freq++;
  }
  else {
    s->matches++;

    dist--;

    s->dyn_ltree[nnutilZlib__length_code[lc] + LITERALS + 1].Freq++;
    s->dyn_dtree[d_code(dist)].Freq++;
  }
  return (s->sym_next == s->sym_end);
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
