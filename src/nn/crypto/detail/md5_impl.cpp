#include "nn/crypto/detail/md5_impl.hpp"

#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

namespace {

uint32_t RotateLeft(uint32_t value, int shift) {
  return (value << shift) | (value >> (32 - shift));
}

uint32_t F(uint32_t x, uint32_t y, uint32_t z) {
  return (x & y) | (~x & z);
}

uint32_t G(uint32_t x, uint32_t y, uint32_t z) {
  return (x & z) | (y & ~z);
}

uint32_t H(uint32_t x, uint32_t y, uint32_t z) {
  return x ^ y ^ z;
}

uint32_t I(uint32_t x, uint32_t y, uint32_t z) {
  return y ^ (x | ~z);
}

}

#define NN_MD5_STEP(f, a, b, c, d, word, shift, constant) \
  a = b + RotateLeft(a + f(b, c, d) + word + constant, shift)

Md5Impl::~Md5Impl() {
  ClearMemoryImpl(this, sizeof(*this));
}

void Md5Impl::Initialize() {
  m_Size = 0;
  m_State[0] = 0x67452301;
  m_State[1] = 0xefcdab89;
  m_State[2] = 0x98badcfe;
  m_State[3] = 0x10325476;
  m_ImplState = State_Initialized;
}

void Md5Impl::Update(const void* data, size_t size) {
  const uint8_t* current = static_cast<const uint8_t*>(data);
  size_t offset = m_Size % BlockSize;
  size_t space = BlockSize - offset;
  m_Size += size;

  if (size < space) {
    if (size > 0) {
      memcpy(m_Buffer + offset, current, size);
    }
    return;
  }

  memcpy(m_Buffer + offset, current, space);
  ProcessBlock();
  current += space;
  size -= space;

  int blockCount = static_cast<int>(size / BlockSize);
  for (int i = 0; i < blockCount; ++i) {
    memcpy(m_Buffer, current, BlockSize);
    ProcessBlock();
    current += BlockSize;
  }

  size_t rest = size % BlockSize;
  if (rest > 0) {
    memcpy(m_Buffer, current, rest);
  }
}

void Md5Impl::GetHash(void* hash, size_t hashSize) {
  (void)hashSize;
  if (m_ImplState == State_Initialized) {
    ProcessLastBlock();
    m_ImplState = State_Done;
  }
  memcpy(hash, m_State, HashSize);
}

void Md5Impl::ProcessBlock() {
  uint32_t x[16];
  memcpy(x, m_Buffer, sizeof(x));

  uint32_t a = m_State[0];
  uint32_t b = m_State[1];
  uint32_t c = m_State[2];
  uint32_t d = m_State[3];

  NN_MD5_STEP(F, a, b, c, d, x[0], 7, 0xd76aa478);
  NN_MD5_STEP(F, d, a, b, c, x[1], 12, 0xe8c7b756);
  NN_MD5_STEP(F, c, d, a, b, x[2], 17, 0x242070db);
  NN_MD5_STEP(F, b, c, d, a, x[3], 22, 0xc1bdceee);
  NN_MD5_STEP(F, a, b, c, d, x[4], 7, 0xf57c0faf);
  NN_MD5_STEP(F, d, a, b, c, x[5], 12, 0x4787c62a);
  NN_MD5_STEP(F, c, d, a, b, x[6], 17, 0xa8304613);
  NN_MD5_STEP(F, b, c, d, a, x[7], 22, 0xfd469501);
  NN_MD5_STEP(F, a, b, c, d, x[8], 7, 0x698098d8);
  NN_MD5_STEP(F, d, a, b, c, x[9], 12, 0x8b44f7af);
  NN_MD5_STEP(F, c, d, a, b, x[10], 17, 0xffff5bb1);
  NN_MD5_STEP(F, b, c, d, a, x[11], 22, 0x895cd7be);
  NN_MD5_STEP(F, a, b, c, d, x[12], 7, 0x6b901122);
  NN_MD5_STEP(F, d, a, b, c, x[13], 12, 0xfd987193);
  NN_MD5_STEP(F, c, d, a, b, x[14], 17, 0xa679438e);
  NN_MD5_STEP(F, b, c, d, a, x[15], 22, 0x49b40821);

  NN_MD5_STEP(G, a, b, c, d, x[1], 5, 0xf61e2562);
  NN_MD5_STEP(G, d, a, b, c, x[6], 9, 0xc040b340);
  NN_MD5_STEP(G, c, d, a, b, x[11], 14, 0x265e5a51);
  NN_MD5_STEP(G, b, c, d, a, x[0], 20, 0xe9b6c7aa);
  NN_MD5_STEP(G, a, b, c, d, x[5], 5, 0xd62f105d);
  NN_MD5_STEP(G, d, a, b, c, x[10], 9, 0x02441453);
  NN_MD5_STEP(G, c, d, a, b, x[15], 14, 0xd8a1e681);
  NN_MD5_STEP(G, b, c, d, a, x[4], 20, 0xe7d3fbc8);
  NN_MD5_STEP(G, a, b, c, d, x[9], 5, 0x21e1cde6);
  NN_MD5_STEP(G, d, a, b, c, x[14], 9, 0xc33707d6);
  NN_MD5_STEP(G, c, d, a, b, x[3], 14, 0xf4d50d87);
  NN_MD5_STEP(G, b, c, d, a, x[8], 20, 0x455a14ed);
  NN_MD5_STEP(G, a, b, c, d, x[13], 5, 0xa9e3e905);
  NN_MD5_STEP(G, d, a, b, c, x[2], 9, 0xfcefa3f8);
  NN_MD5_STEP(G, c, d, a, b, x[7], 14, 0x676f02d9);
  NN_MD5_STEP(G, b, c, d, a, x[12], 20, 0x8d2a4c8a);

  NN_MD5_STEP(H, a, b, c, d, x[5], 4, 0xfffa3942);
  NN_MD5_STEP(H, d, a, b, c, x[8], 11, 0x8771f681);
  NN_MD5_STEP(H, c, d, a, b, x[11], 16, 0x6d9d6122);
  NN_MD5_STEP(H, b, c, d, a, x[14], 23, 0xfde5380c);
  NN_MD5_STEP(H, a, b, c, d, x[1], 4, 0xa4beea44);
  NN_MD5_STEP(H, d, a, b, c, x[4], 11, 0x4bdecfa9);
  NN_MD5_STEP(H, c, d, a, b, x[7], 16, 0xf6bb4b60);
  NN_MD5_STEP(H, b, c, d, a, x[10], 23, 0xbebfbc70);
  NN_MD5_STEP(H, a, b, c, d, x[13], 4, 0x289b7ec6);
  NN_MD5_STEP(H, d, a, b, c, x[0], 11, 0xeaa127fa);
  NN_MD5_STEP(H, c, d, a, b, x[3], 16, 0xd4ef3085);
  NN_MD5_STEP(H, b, c, d, a, x[6], 23, 0x04881d05);
  NN_MD5_STEP(H, a, b, c, d, x[9], 4, 0xd9d4d039);
  NN_MD5_STEP(H, d, a, b, c, x[12], 11, 0xe6db99e5);
  NN_MD5_STEP(H, c, d, a, b, x[15], 16, 0x1fa27cf8);
  NN_MD5_STEP(H, b, c, d, a, x[2], 23, 0xc4ac5665);

  NN_MD5_STEP(I, a, b, c, d, x[0], 6, 0xf4292244);
  NN_MD5_STEP(I, d, a, b, c, x[7], 10, 0x432aff97);
  NN_MD5_STEP(I, c, d, a, b, x[14], 15, 0xab9423a7);
  NN_MD5_STEP(I, b, c, d, a, x[5], 21, 0xfc93a039);
  NN_MD5_STEP(I, a, b, c, d, x[12], 6, 0x655b59c3);
  NN_MD5_STEP(I, d, a, b, c, x[3], 10, 0x8f0ccc92);
  NN_MD5_STEP(I, c, d, a, b, x[10], 15, 0xffeff47d);
  NN_MD5_STEP(I, b, c, d, a, x[1], 21, 0x85845dd1);
  NN_MD5_STEP(I, a, b, c, d, x[8], 6, 0x6fa87e4f);
  NN_MD5_STEP(I, d, a, b, c, x[15], 10, 0xfe2ce6e0);
  NN_MD5_STEP(I, c, d, a, b, x[6], 15, 0xa3014314);
  NN_MD5_STEP(I, b, c, d, a, x[13], 21, 0x4e0811a1);
  NN_MD5_STEP(I, a, b, c, d, x[4], 6, 0xf7537e82);
  NN_MD5_STEP(I, d, a, b, c, x[11], 10, 0xbd3af235);
  NN_MD5_STEP(I, c, d, a, b, x[2], 15, 0x2ad7d2bb);
  NN_MD5_STEP(I, b, c, d, a, x[9], 21, 0xeb86d391);

  m_State[0] += a;
  m_State[1] += b;
  m_State[2] += c;
  m_State[3] += d;
}

void Md5Impl::ProcessLastBlock() {
  uint64_t size = m_Size++;
  m_Buffer[size % BlockSize] = 0x80;
  if (m_Size % BlockSize == 0) {
    ProcessBlock();
  }

  constexpr size_t LengthOffset = BlockSize - sizeof(uint64_t);
  size_t offset = m_Size % BlockSize;
  if (offset > LengthOffset) {
    memset(m_Buffer + offset, 0, BlockSize - offset);
    ProcessBlock();
    offset = 0;
  }
  if (offset < LengthOffset) {
    memset(m_Buffer + offset, 0, LengthOffset - offset);
  }

  uint64_t bits = size * 8;
  memcpy(m_Buffer + LengthOffset, &bits, sizeof(bits));
  ProcessBlock();
}

}
