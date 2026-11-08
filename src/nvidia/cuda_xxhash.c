#include <stddef.h>
#include <stdint.h>
#include <string.h>

/* XXH32 from xxHash 0.7, BSD licensed. */

#define PRIME32_1 0x9e3779b1u
#define PRIME32_2 0x85ebca77u
#define PRIME32_3 0xc2b2ae3du
#define PRIME32_4 0x27d4eb2fu
#define PRIME32_5 0x165667b1u

typedef struct {
  uint32_t total_len_32;
  uint32_t large_len;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t mem32[4];
  uint32_t memsize;
  uint32_t reserved;
} XXH32_state_t;

static inline uint32_t XXH_rotl32(uint32_t x, int r) {
  return (x << r) | (x >> (32 - r));
}

static inline uint32_t XXH_read32(const void* ptr) {
  uint32_t value;
  memcpy(&value, ptr, sizeof(value));
  return value;
}

static inline uint32_t XXH32_round(uint32_t acc, uint32_t input) {
  acc += input * PRIME32_2;
  acc = XXH_rotl32(acc, 13);
  acc *= PRIME32_1;
  return acc;
}

static inline uint32_t XXH32_avalanche(uint32_t h32) {
  h32 ^= h32 >> 15;
  h32 *= PRIME32_2;
  h32 ^= h32 >> 13;
  h32 *= PRIME32_3;
  h32 ^= h32 >> 16;
  return h32;
}

#define PROCESS1 \
  do { \
    h32 += (*ptr++) * PRIME32_5; \
    h32 = XXH_rotl32(h32, 11) * PRIME32_1; \
  } while (0)
#define PROCESS4 \
  do { \
    h32 += XXH_read32(ptr) * PRIME32_3; \
    ptr += 4; \
    h32 = XXH_rotl32(h32, 17) * PRIME32_4; \
  } while (0)

static inline __attribute__((always_inline)) uint32_t XXH32_finalize(
  uint32_t h32, const uint8_t* ptr, size_t len) {
  switch (len & 15) {
    case 12:
      PROCESS4;
      /* fallthrough */
    case 8:
      PROCESS4;
      /* fallthrough */
    case 4:
      PROCESS4;
      return XXH32_avalanche(h32);
    case 13:
      PROCESS4;
      /* fallthrough */
    case 9:
      PROCESS4;
      /* fallthrough */
    case 5:
      PROCESS4;
      PROCESS1;
      return XXH32_avalanche(h32);
    case 14:
      PROCESS4;
      /* fallthrough */
    case 10:
      PROCESS4;
      /* fallthrough */
    case 6:
      PROCESS4;
      PROCESS1;
      PROCESS1;
      return XXH32_avalanche(h32);
    case 15:
      PROCESS4;
      /* fallthrough */
    case 11:
      PROCESS4;
      /* fallthrough */
    case 7:
      PROCESS4;
      /* fallthrough */
    case 3:
      PROCESS1;
      /* fallthrough */
    case 2:
      PROCESS1;
      /* fallthrough */
    case 1:
      PROCESS1;
      /* fallthrough */
    case 0:
      return XXH32_avalanche(h32);
  }

  return h32;
}

/* The one shot hash branches into the tail of the digest. */
__attribute__((noinline)) uint32_t XXH32_finalize_tail(uint32_t h32,
  const uint8_t* ptr, size_t len) {
  return XXH32_finalize(h32, ptr, len);
}

static inline uint32_t XXH32_endian_align(const uint8_t* input, size_t len,
  uint32_t seed) {
  const uint8_t* bEnd = input + len;
  uint32_t h32;

  if (len >= 16) {
    const uint8_t* const limit = bEnd - 15;
    uint32_t v1 = seed + PRIME32_1 + PRIME32_2;
    uint32_t v2 = seed + PRIME32_2;
    uint32_t v3 = seed + 0;
    uint32_t v4 = seed - PRIME32_1;
    do {
      v1 = XXH32_round(v1, XXH_read32(input));
      input += 4;
      v2 = XXH32_round(v2, XXH_read32(input));
      input += 4;
      v3 = XXH32_round(v3, XXH_read32(input));
      input += 4;
      v4 = XXH32_round(v4, XXH_read32(input));
      input += 4;
    } while (input < limit);
    h32 = XXH_rotl32(v1, 1) + XXH_rotl32(v2, 7) + XXH_rotl32(v3, 12) +
      XXH_rotl32(v4, 18);
  }
  else {
    h32 = seed + PRIME32_5;
  }

  h32 += (uint32_t)len;
  return XXH32_finalize_tail(h32, input, len & 15);
}

/* Aligned and unaligned input take the same path on this target. */
uint32_t XXH32(const void* input, size_t len, uint32_t seed) {
  if ((((size_t)input) & 3) == 0) {
    return XXH32_endian_align((const uint8_t*)input, len, seed);
  }

  return XXH32_endian_align((const uint8_t*)input, len, seed);
}

int XXH32_reset(XXH32_state_t* statePtr, uint32_t seed) {
  XXH32_state_t state;
  memset(&state, 0, sizeof(state));
  state.v1 = seed + PRIME32_1 + PRIME32_2;
  state.v2 = seed + PRIME32_2;
  state.v3 = seed + 0;
  state.v4 = seed - PRIME32_1;
  memcpy(statePtr, &state, sizeof(state) - sizeof(state.reserved));
  return 0;
}

int XXH32_update(XXH32_state_t* state, const void* input, size_t len) {
  if (input == NULL) {
    return 1;
  }

  const uint8_t* p = (const uint8_t*)input;
  const uint8_t* const bEnd = p + len;

  state->total_len_32 += (uint32_t)len;
  state->large_len |= (uint32_t)((len >= 16) | (state->total_len_32 >= 16));

  if (state->memsize + len < 16) {
    memcpy((uint8_t*)(state->mem32) + state->memsize, input, len);
    state->memsize += (uint32_t)len;
    return 0;
  }

  if (state->memsize) {
    memcpy((uint8_t*)(state->mem32) + state->memsize, input,
      16 - state->memsize);
    const uint32_t* p32 = state->mem32;
    state->v1 = XXH32_round(state->v1, p32[0]);
    state->v2 = XXH32_round(state->v2, p32[1]);
    state->v3 = XXH32_round(state->v3, p32[2]);
    state->v4 = XXH32_round(state->v4, p32[3]);
    p += 16 - state->memsize;
    state->memsize = 0;
  }

  if (p <= bEnd - 16) {
    const uint8_t* const limit = bEnd - 16;
    uint32_t v1 = state->v1;
    uint32_t v2 = state->v2;
    uint32_t v3 = state->v3;
    uint32_t v4 = state->v4;
    do {
      v1 = XXH32_round(v1, XXH_read32(p));
      p += 4;
      v2 = XXH32_round(v2, XXH_read32(p));
      p += 4;
      v3 = XXH32_round(v3, XXH_read32(p));
      p += 4;
      v4 = XXH32_round(v4, XXH_read32(p));
      p += 4;
    } while (p <= limit);
    state->v1 = v1;
    state->v2 = v2;
    state->v3 = v3;
    state->v4 = v4;
  }

  if (p < bEnd) {
    memcpy(state->mem32, p, (size_t)(bEnd - p));
    state->memsize = (unsigned)(bEnd - p);
  }

  return 0;
}

uint32_t XXH32_digest(const XXH32_state_t* state) {
  uint32_t h32;
  if (state->large_len) {
    h32 = XXH_rotl32(state->v1, 1) + XXH_rotl32(state->v2, 7) +
      XXH_rotl32(state->v3, 12) + XXH_rotl32(state->v4, 18);
  }
  else {
    h32 = state->v3 + PRIME32_5;
  }

  h32 += state->total_len_32;
  return XXH32_finalize(h32, (const uint8_t*)state->mem32, state->memsize);
}
