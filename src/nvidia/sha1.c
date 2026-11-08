#include <stddef.h>
#include <stdint.h>
#include <string.h>

/* The block buffer comes first and only a 32 bit byte count is kept. */
struct NvSha1Context {
  unsigned char buffer[64];
  uint32_t state[5];
  uint32_t count;
};

#define rol(value, bits) (((value) << (bits)) | ((value) >> (32 - (bits))))

/* The message schedule is kept in the block itself, as in Steve Reid's
   public domain implementation. */
#define blk0(i) (block[i] = (rol(block[i], 24) & 0xff00ff00) | \
  (rol(block[i], 8) & 0x00ff00ff))
#define blk(i) (block[i & 15] = rol(block[(i + 13) & 15] ^ \
  block[(i + 8) & 15] ^ block[(i + 2) & 15] ^ block[i & 15], 1))

#define R0(v, w, x, y, z, i) \
  z += ((w & (x ^ y)) ^ y) + blk0(i) + 0x5a827999 + rol(v, 5); \
  w = rol(w, 30);
#define R1(v, w, x, y, z, i) \
  z += ((w & (x ^ y)) ^ y) + blk(i) + 0x5a827999 + rol(v, 5); \
  w = rol(w, 30);
#define R2(v, w, x, y, z, i) \
  z += (w ^ x ^ y) + blk(i) + 0x6ed9eba1 + rol(v, 5); \
  w = rol(w, 30);
#define R3(v, w, x, y, z, i) \
  z += (((w | x) & y) | (w & x)) + blk(i) + 0x8f1bbcdc + rol(v, 5); \
  w = rol(w, 30);
#define R4(v, w, x, y, z, i) \
  z += (w ^ x ^ y) + blk(i) + 0xca62c1d6 + rol(v, 5); \
  w = rol(w, 30);

__attribute__((noinline)) void NvSha1Transform(uint32_t state[5],
  unsigned char buffer[64]) {
  uint32_t* block = (uint32_t*)buffer;
  uint32_t a = state[0];
  uint32_t b = state[1];
  uint32_t c = state[2];
  uint32_t d = state[3];
  uint32_t e = state[4];

  R0(a, b, c, d, e, 0); R0(e, a, b, c, d, 1); R0(d, e, a, b, c, 2);
  R0(c, d, e, a, b, 3); R0(b, c, d, e, a, 4); R0(a, b, c, d, e, 5);
  R0(e, a, b, c, d, 6); R0(d, e, a, b, c, 7); R0(c, d, e, a, b, 8);
  R0(b, c, d, e, a, 9); R0(a, b, c, d, e, 10); R0(e, a, b, c, d, 11);
  R0(d, e, a, b, c, 12); R0(c, d, e, a, b, 13); R0(b, c, d, e, a, 14);
  R0(a, b, c, d, e, 15); R1(e, a, b, c, d, 16); R1(d, e, a, b, c, 17);
  R1(c, d, e, a, b, 18); R1(b, c, d, e, a, 19); R2(a, b, c, d, e, 20);
  R2(e, a, b, c, d, 21); R2(d, e, a, b, c, 22); R2(c, d, e, a, b, 23);
  R2(b, c, d, e, a, 24); R2(a, b, c, d, e, 25); R2(e, a, b, c, d, 26);
  R2(d, e, a, b, c, 27); R2(c, d, e, a, b, 28); R2(b, c, d, e, a, 29);
  R2(a, b, c, d, e, 30); R2(e, a, b, c, d, 31); R2(d, e, a, b, c, 32);
  R2(c, d, e, a, b, 33); R2(b, c, d, e, a, 34); R2(a, b, c, d, e, 35);
  R2(e, a, b, c, d, 36); R2(d, e, a, b, c, 37); R2(c, d, e, a, b, 38);
  R2(b, c, d, e, a, 39); R3(a, b, c, d, e, 40); R3(e, a, b, c, d, 41);
  R3(d, e, a, b, c, 42); R3(c, d, e, a, b, 43); R3(b, c, d, e, a, 44);
  R3(a, b, c, d, e, 45); R3(e, a, b, c, d, 46); R3(d, e, a, b, c, 47);
  R3(c, d, e, a, b, 48); R3(b, c, d, e, a, 49); R3(a, b, c, d, e, 50);
  R3(e, a, b, c, d, 51); R3(d, e, a, b, c, 52); R3(c, d, e, a, b, 53);
  R3(b, c, d, e, a, 54); R3(a, b, c, d, e, 55); R3(e, a, b, c, d, 56);
  R3(d, e, a, b, c, 57); R3(c, d, e, a, b, 58); R3(b, c, d, e, a, 59);
  R4(a, b, c, d, e, 60); R4(e, a, b, c, d, 61); R4(d, e, a, b, c, 62);
  R4(c, d, e, a, b, 63); R4(b, c, d, e, a, 64); R4(a, b, c, d, e, 65);
  R4(e, a, b, c, d, 66); R4(d, e, a, b, c, 67); R4(c, d, e, a, b, 68);
  R4(b, c, d, e, a, 69); R4(a, b, c, d, e, 70); R4(e, a, b, c, d, 71);
  R4(d, e, a, b, c, 72); R4(c, d, e, a, b, 73); R4(b, c, d, e, a, 74);
  R4(a, b, c, d, e, 75); R4(e, a, b, c, d, 76); R4(d, e, a, b, c, 77);
  R4(c, d, e, a, b, 78); R4(b, c, d, e, a, 79);

  state[0] += a;
  state[1] += b;
  state[2] += c;
  state[3] += d;
  state[4] += e;
}

/* Only the low 32 bits of the bit count are stored. */
__attribute__((noinline)) void NvSha1Final(struct NvSha1Context* ctx,
  unsigned char digest[20]) {
  unsigned index = ctx->count & 0x3f;
  ctx->buffer[index] = 0x80;
  index++;
  if (index > 56) {
    memset(ctx->buffer + index, 0, 64 - index);
    NvSha1Transform(ctx->state, ctx->buffer);
    index = 0;
  }

  memset(ctx->buffer + index, 0, 60 - index);
  ((uint32_t*)ctx->buffer)[15] = __builtin_bswap32(ctx->count << 3);
  NvSha1Transform(ctx->state, ctx->buffer);

  for (unsigned i = 0; i < 20; i++) {
    digest[i] = (unsigned char)(ctx->state[i >> 2] >> ((3 - (i & 3)) * 8));
  }
}

void NvSha1Digest(const unsigned char* data, size_t size,
  unsigned char digest[20]) {
  struct NvSha1Context ctx;
  ctx.state[0] = 0x67452301;
  ctx.state[1] = 0xefcdab89;
  ctx.state[2] = 0x98badcfe;
  ctx.state[3] = 0x10325476;
  ctx.state[4] = 0xc3d2e1f0;
  ctx.count = 0;

  size_t offset = 0;
  for (; offset + 64 <= size; offset += 64) {
    memcpy(ctx.buffer, data + offset, 64);
    NvSha1Transform(ctx.state, ctx.buffer);
  }

  memcpy(ctx.buffer, data + offset, size - offset);
  ctx.count += size;
  NvSha1Final(&ctx, digest);
}
