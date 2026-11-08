#include <stddef.h>
#include <stdint.h>
#include <string.h>

/* XXH64 from the xxHash 0.7 copy bundled with zstd. The update results
   are never read, so the update returns nothing. */

static inline uint32_t XXH_read32(const void* ptr) {
  uint32_t value;
  memcpy(&value, ptr, sizeof(value));
  return value;
}

#define PRIME64_1 0x9e3779b185ebca87ull
#define PRIME64_2 0xc2b2ae3d27d4eb4full
#define PRIME64_3 0x165667b19e3779f9ull
#define PRIME64_4 0x85ebca77c2b2ae63ull
#define PRIME64_5 0x27d4eb2f165667c5ull

typedef struct {
  uint64_t total_len;
  uint64_t v1;
  uint64_t v2;
  uint64_t v3;
  uint64_t v4;
  uint64_t mem64[4];
  uint32_t memsize;
  uint32_t reserved32;
  uint64_t reserved64;
} XXH64_state_t;

static inline uint64_t XXH_rotl64(uint64_t x, int r) {
  return (x << r) | (x >> (64 - r));
}

static inline uint64_t XXH_read64(const void* ptr) {
  uint64_t value;
  memcpy(&value, ptr, sizeof(value));
  return value;
}

static inline uint64_t XXH64_round(uint64_t acc, uint64_t input) {
  acc += input * PRIME64_2;
  acc = XXH_rotl64(acc, 31);
  acc *= PRIME64_1;
  return acc;
}

static inline uint64_t XXH64_mergeRound(uint64_t acc, uint64_t val) {
  val = XXH64_round(0, val);
  acc ^= val;
  acc = acc * PRIME64_1 + PRIME64_4;
  return acc;
}

static inline uint64_t XXH64_avalanche(uint64_t h64) {
  h64 ^= h64 >> 33;
  h64 *= PRIME64_2;
  h64 ^= h64 >> 29;
  h64 *= PRIME64_3;
  h64 ^= h64 >> 32;
  return h64;
}

#define PROCESS1_64 \
  do { \
    h64 ^= (*ptr++) * PRIME64_5; \
    h64 = XXH_rotl64(h64, 11) * PRIME64_1; \
  } while (0)
#define PROCESS4_64 \
  do { \
    h64 ^= (uint64_t)XXH_read32(ptr) * PRIME64_1; \
    ptr += 4; \
    h64 = XXH_rotl64(h64, 23) * PRIME64_2 + PRIME64_3; \
  } while (0)
#define PROCESS8_64 \
  do { \
    const uint64_t k1 = XXH64_round(0, XXH_read64(ptr)); \
    ptr += 8; \
    h64 ^= k1; \
    h64 = XXH_rotl64(h64, 27) * PRIME64_1 + PRIME64_4; \
  } while (0)

static inline uint64_t XXH64_finalize(uint64_t h64, const uint8_t* ptr,
  size_t len) {
  switch (len & 31) {
    case 24:
      PROCESS8_64;
      /* fallthrough */
    case 16:
      PROCESS8_64;
      /* fallthrough */
    case 8:
      PROCESS8_64;
      return XXH64_avalanche(h64);
    case 28:
      PROCESS8_64;
      /* fallthrough */
    case 20:
      PROCESS8_64;
      /* fallthrough */
    case 12:
      PROCESS8_64;
      /* fallthrough */
    case 4:
      PROCESS4_64;
      return XXH64_avalanche(h64);
    case 25:
      PROCESS8_64;
      /* fallthrough */
    case 17:
      PROCESS8_64;
      /* fallthrough */
    case 9:
      PROCESS8_64;
      PROCESS1_64;
      return XXH64_avalanche(h64);
    case 29:
      PROCESS8_64;
      /* fallthrough */
    case 21:
      PROCESS8_64;
      /* fallthrough */
    case 13:
      PROCESS8_64;
      /* fallthrough */
    case 5:
      PROCESS4_64;
      PROCESS1_64;
      return XXH64_avalanche(h64);
    case 26:
      PROCESS8_64;
      /* fallthrough */
    case 18:
      PROCESS8_64;
      /* fallthrough */
    case 10:
      PROCESS8_64;
      PROCESS1_64;
      PROCESS1_64;
      return XXH64_avalanche(h64);
    case 30:
      PROCESS8_64;
      /* fallthrough */
    case 22:
      PROCESS8_64;
      /* fallthrough */
    case 14:
      PROCESS8_64;
      /* fallthrough */
    case 6:
      PROCESS4_64;
      PROCESS1_64;
      PROCESS1_64;
      return XXH64_avalanche(h64);
    case 27:
      PROCESS8_64;
      /* fallthrough */
    case 19:
      PROCESS8_64;
      /* fallthrough */
    case 11:
      PROCESS8_64;
      PROCESS1_64;
      PROCESS1_64;
      PROCESS1_64;
      return XXH64_avalanche(h64);
    case 31:
      PROCESS8_64;
      /* fallthrough */
    case 23:
      PROCESS8_64;
      /* fallthrough */
    case 15:
      PROCESS8_64;
      /* fallthrough */
    case 7:
      PROCESS4_64;
      /* fallthrough */
    case 3:
      PROCESS1_64;
      /* fallthrough */
    case 2:
      PROCESS1_64;
      /* fallthrough */
    case 1:
      PROCESS1_64;
      /* fallthrough */
    case 0:
      return XXH64_avalanche(h64);
  }

  return 0;
}

void XXH64_update(XXH64_state_t* state, const void* input, size_t len) {
  if (input == NULL) {
    return;
  }

  const uint8_t* p = (const uint8_t*)input;
  const uint8_t* const bEnd = p + len;

  state->total_len += len;

  if (state->memsize + len < 32) {
    memcpy(((uint8_t*)state->mem64) + state->memsize, input, len);
    state->memsize += (uint32_t)len;
    return;
  }

  if (state->memsize) {
    memcpy(((uint8_t*)state->mem64) + state->memsize, input,
      32 - state->memsize);
    state->v1 = XXH64_round(state->v1, state->mem64[0]);
    state->v2 = XXH64_round(state->v2, state->mem64[1]);
    state->v3 = XXH64_round(state->v3, state->mem64[2]);
    state->v4 = XXH64_round(state->v4, state->mem64[3]);
    p += 32 - state->memsize;
    state->memsize = 0;
  }

  if (p + 32 <= bEnd) {
    const uint8_t* const limit = bEnd - 32;
    uint64_t v1 = state->v1;
    uint64_t v2 = state->v2;
    uint64_t v3 = state->v3;
    uint64_t v4 = state->v4;
    do {
      v1 = XXH64_round(v1, XXH_read64(p));
      p += 8;
      v2 = XXH64_round(v2, XXH_read64(p));
      p += 8;
      v3 = XXH64_round(v3, XXH_read64(p));
      p += 8;
      v4 = XXH64_round(v4, XXH_read64(p));
      p += 8;
    } while (p <= limit);
    state->v1 = v1;
    state->v2 = v2;
    state->v3 = v3;
    state->v4 = v4;
  }

  if (p < bEnd) {
    memcpy(state->mem64, p, (size_t)(bEnd - p));
    state->memsize = (unsigned)(bEnd - p);
  }
}

uint64_t XXH64_digest(const XXH64_state_t* state) {
  uint64_t h64;
  if (state->total_len >= 32) {
    const uint64_t v1 = state->v1;
    const uint64_t v2 = state->v2;
    const uint64_t v3 = state->v3;
    const uint64_t v4 = state->v4;
    h64 = XXH_rotl64(v1, 1) + XXH_rotl64(v2, 7) + XXH_rotl64(v3, 12) +
      XXH_rotl64(v4, 18);
    h64 = XXH64_mergeRound(h64, v1);
    h64 = XXH64_mergeRound(h64, v2);
    h64 = XXH64_mergeRound(h64, v3);
    h64 = XXH64_mergeRound(h64, v4);
  }
  else {
    h64 = state->v3 + PRIME64_5;
  }

  h64 += state->total_len;
  return XXH64_finalize(h64, (const uint8_t*)state->mem64,
    (size_t)state->total_len);
}
