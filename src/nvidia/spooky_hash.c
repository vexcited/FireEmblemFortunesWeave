#include <stddef.h>
#include <stdint.h>
#include <string.h>

/* Bob Jenkins' SpookyHash V2, public domain. */

struct NvSpookyHash128 {
  uint64_t hash1;
  uint64_t hash2;
};

#define SC_CONST 0xdeadbeefdeadbeefull

static inline uint64_t Rot64(uint64_t x, int k) {
  return (x << k) | (x >> (64 - k));
}

#define SHORT_MIX(h0, h1, h2, h3) \
  do { \
    h2 = Rot64(h2, 50); h2 += h3; h0 ^= h2; \
    h3 = Rot64(h3, 52); h3 += h0; h1 ^= h3; \
    h0 = Rot64(h0, 30); h0 += h1; h2 ^= h0; \
    h1 = Rot64(h1, 41); h1 += h2; h3 ^= h1; \
    h2 = Rot64(h2, 54); h2 += h3; h0 ^= h2; \
    h3 = Rot64(h3, 48); h3 += h0; h1 ^= h3; \
    h0 = Rot64(h0, 38); h0 += h1; h2 ^= h0; \
    h1 = Rot64(h1, 37); h1 += h2; h3 ^= h1; \
    h2 = Rot64(h2, 62); h2 += h3; h0 ^= h2; \
    h3 = Rot64(h3, 34); h3 += h0; h1 ^= h3; \
    h0 = Rot64(h0, 5); h0 += h1; h2 ^= h0; \
    h1 = Rot64(h1, 36); h1 += h2; h3 ^= h1; \
  } while (0)

#define SHORT_END(h0, h1, h2, h3) \
  do { \
    h3 ^= h2; h2 = Rot64(h2, 15); h3 += h2; \
    h0 ^= h3; h3 = Rot64(h3, 52); h0 += h3; \
    h1 ^= h0; h0 = Rot64(h0, 26); h1 += h0; \
    h2 ^= h1; h1 = Rot64(h1, 51); h2 += h1; \
    h3 ^= h2; h2 = Rot64(h2, 28); h3 += h2; \
    h0 ^= h3; h3 = Rot64(h3, 9); h0 += h3; \
    h1 ^= h0; h0 = Rot64(h0, 47); h1 += h0; \
    h2 ^= h1; h1 = Rot64(h1, 54); h2 += h1; \
    h3 ^= h2; h2 = Rot64(h2, 32); h3 += h2; \
    h0 ^= h3; h3 = Rot64(h3, 25); h0 += h3; \
    h1 ^= h0; h0 = Rot64(h0, 63); h1 += h0; \
  } while (0)

#define MIX(data, s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11) \
  do { \
    s0 += data[0]; s2 ^= s10; s11 ^= s0; s0 = Rot64(s0, 11); s11 += s1; \
    s1 += data[1]; s3 ^= s11; s0 ^= s1; s1 = Rot64(s1, 32); s0 += s2; \
    s2 += data[2]; s4 ^= s0; s1 ^= s2; s2 = Rot64(s2, 43); s1 += s3; \
    s3 += data[3]; s5 ^= s1; s2 ^= s3; s3 = Rot64(s3, 31); s2 += s4; \
    s4 += data[4]; s6 ^= s2; s3 ^= s4; s4 = Rot64(s4, 17); s3 += s5; \
    s5 += data[5]; s7 ^= s3; s4 ^= s5; s5 = Rot64(s5, 28); s4 += s6; \
    s6 += data[6]; s8 ^= s4; s5 ^= s6; s6 = Rot64(s6, 39); s5 += s7; \
    s7 += data[7]; s9 ^= s5; s6 ^= s7; s7 = Rot64(s7, 57); s6 += s8; \
    s8 += data[8]; s10 ^= s6; s7 ^= s8; s8 = Rot64(s8, 55); s7 += s9; \
    s9 += data[9]; s11 ^= s7; s8 ^= s9; s9 = Rot64(s9, 54); s8 += s10; \
    s10 += data[10]; s0 ^= s8; s9 ^= s10; s10 = Rot64(s10, 22); s9 += s11; \
    s11 += data[11]; s1 ^= s9; s10 ^= s11; s11 = Rot64(s11, 46); \
    s10 += s0; \
  } while (0)

#define END_PARTIAL(h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11) \
  do { \
    h11 += h1; h2 ^= h11; h1 = Rot64(h1, 44); \
    h0 += h2; h3 ^= h0; h2 = Rot64(h2, 15); \
    h1 += h3; h4 ^= h1; h3 = Rot64(h3, 34); \
    h2 += h4; h5 ^= h2; h4 = Rot64(h4, 21); \
    h3 += h5; h6 ^= h3; h5 = Rot64(h5, 38); \
    h4 += h6; h7 ^= h4; h6 = Rot64(h6, 33); \
    h5 += h7; h8 ^= h5; h7 = Rot64(h7, 10); \
    h6 += h8; h9 ^= h6; h8 = Rot64(h8, 13); \
    h7 += h9; h10 ^= h7; h9 = Rot64(h9, 38); \
    h8 += h10; h11 ^= h8; h10 = Rot64(h10, 53); \
    h9 += h11; h0 ^= h9; h11 = Rot64(h11, 42); \
    h10 += h0; h1 ^= h10; h0 = Rot64(h0, 54); \
  } while (0)

__attribute__((noinline)) struct NvSpookyHash128 NvSpookyHashEnd(
  const uint64_t* data, uint64_t h0, uint64_t h1, uint64_t h2, uint64_t h3,
  uint64_t h4, uint64_t h5, uint64_t h6, uint64_t h7, uint64_t h8,
  uint64_t h9, uint64_t h10, uint64_t h11) {
  h0 += data[0];
  h1 += data[1];
  h2 += data[2];
  h3 += data[3];
  h4 += data[4];
  h5 += data[5];
  h6 += data[6];
  h7 += data[7];
  h8 += data[8];
  h9 += data[9];
  h10 += data[10];
  h11 += data[11];
  END_PARTIAL(h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
  END_PARTIAL(h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
  END_PARTIAL(h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
  struct NvSpookyHash128 result = {h0, h1};
  return result;
}

/* Long messages go through whole blocks of twelve words, the last partial
   block is padded with zeros and ends with its length. */
struct NvSpookyHash128 NvSpookyHashLong(const void* message, size_t length,
  uint64_t seed1, uint64_t seed2) {
  uint64_t h0 = seed1;
  uint64_t h3 = seed1;
  uint64_t h6 = seed1;
  uint64_t h9 = seed1;
  uint64_t h1 = seed2;
  uint64_t h4 = seed2;
  uint64_t h7 = seed2;
  uint64_t h10 = seed2;
  uint64_t h2 = SC_CONST;
  uint64_t h5 = SC_CONST;
  uint64_t h8 = SC_CONST;
  uint64_t h11 = SC_CONST;

  const uint64_t* p = (const uint64_t*)message;
  const uint64_t* end = p + (length / 96) * 12;
  while (p < end) {
    MIX(p, h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
    p += 12;
  }

  const size_t remainder =
    length - ((const uint8_t*)end - (const uint8_t*)message);
  uint64_t buf[12];
  memcpy(buf, end, remainder);
  memset((uint8_t*)buf + remainder, 0, 95 - remainder);
  ((uint8_t*)buf)[95] = (uint8_t)remainder;
  return NvSpookyHashEnd(buf, h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10,
    h11);
}

/* The last bytes are read one by one, so the message needs no alignment. */
struct NvSpookyHash128 NvSpookyHashShort(const void* message, size_t length,
  uint64_t seed1, uint64_t seed2) {
  const uint8_t* p = (const uint8_t*)message;
  const uint64_t* words = (const uint64_t*)message;
  size_t remainder = length;
  uint64_t a = seed1;
  uint64_t b = seed2;
  uint64_t c = SC_CONST;
  uint64_t d = SC_CONST;

  while (remainder >= 32) {
    c += words[0];
    d += words[1];
    SHORT_MIX(a, b, c, d);
    a += words[2];
    b += words[3];
    words += 4;
    remainder -= 32;
  }

  if (remainder >= 16) {
    c += words[0];
    d += words[1];
    SHORT_MIX(a, b, c, d);
    words += 2;
    remainder -= 16;
  }

  d += (uint64_t)length << 56;
  if (remainder == 0) {
    c += SC_CONST;
    d += SC_CONST;
  }
  else {
    p = (const uint8_t*)words;
    uint64_t low = 0;
    uint64_t high = 0;
    for (size_t i = 0; i < remainder; i++) {
      if (i < 8) {
        low |= (uint64_t)p[i] << (8 * i);
      }
      else {
        high |= (uint64_t)p[i] << (8 * (i - 8));
      }
    }
    c += low;
    d += high;
  }

  SHORT_END(a, b, c, d);
  struct NvSpookyHash128 result = {a, b};
  return result;
}
