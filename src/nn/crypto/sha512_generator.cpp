#include "nn/crypto/sha512_generator.hpp"

#include <string.h>

namespace nn::crypto {

void Sha384Generator::Initialize() {
  Sha512Context context;
  context.intermediateHash[0] = 0xcbbb9d5dc1059ed8;
  context.intermediateHash[1] = 0x629a292a367cd507;
  context.intermediateHash[2] = 0x9159015a3070dd17;
  context.intermediateHash[3] = 0x152fecd8f70e5939;
  context.intermediateHash[4] = 0x67332667ffc00b31;
  context.intermediateHash[5] = 0x8eb44a8768581511;
  context.intermediateHash[6] = 0xdb0c2e0d64f98fa7;
  context.intermediateHash[7] = 0x47b5481dbefa4fa4;
  context.bitsConsumed[0] = 0;
  context.bitsConsumed[1] = 0;
  m_Impl.InitializeWithContext(&context);
}

void Sha512224Generator::Initialize() {
  Sha512Context context;
  context.intermediateHash[0] = 0x8c3d37c819544da2;
  context.intermediateHash[1] = 0x73e1996689dcd4d6;
  context.intermediateHash[2] = 0x1dfab7ae32ff9c82;
  context.intermediateHash[3] = 0x679dd514582f9fcf;
  context.intermediateHash[4] = 0x0f6d2b697bd44da8;
  context.intermediateHash[5] = 0x77e36f7304c48942;
  context.intermediateHash[6] = 0x3f9d85a86a1d36c8;
  context.intermediateHash[7] = 0x1112e6ad91d692a1;
  context.bitsConsumed[0] = 0;
  context.bitsConsumed[1] = 0;
  m_Impl.InitializeWithContext(&context);
}

void Sha512256Generator::Initialize() {
  Sha512Context context;
  context.intermediateHash[0] = 0x22312194fc2bf72c;
  context.intermediateHash[1] = 0x9f555fa3c84c64c2;
  context.intermediateHash[2] = 0x2393b86b6f53b151;
  context.intermediateHash[3] = 0x963877195940eabd;
  context.intermediateHash[4] = 0x96283ee2a88effe3;
  context.intermediateHash[5] = 0xbe5e1e2553863992;
  context.intermediateHash[6] = 0x2b0199fc2c85b8aa;
  context.intermediateHash[7] = 0x0eb72ddc81c52ca2;
  context.bitsConsumed[0] = 0;
  context.bitsConsumed[1] = 0;
  m_Impl.InitializeWithContext(&context);
}

#define NN_CRYPTO_DEFINE_SHA512_VARIANT(name)                                \
  void name::Update(const void* data, size_t size) {                         \
    m_Impl.Update(data, size);                                               \
  }                                                                          \
                                                                             \
  void name::GetHash(void* hash, size_t size) {                              \
    (void)size;                                                              \
    uint8_t fullHash[detail::Sha512Impl::HashSize] = {};                     \
    m_Impl.GetHash(fullHash, sizeof(fullHash));                              \
    memcpy(hash, fullHash, HashSize);                                        \
  }                                                                          \
                                                                             \
  void name::InitializeWithContext(const Sha512Context* context) {           \
    m_Impl.InitializeWithContext(context);                                   \
  }                                                                          \
                                                                             \
  void name::GetContext(Sha512Context* context) const {                      \
    m_Impl.GetContext(context);                                              \
  }                                                                          \
                                                                             \
  size_t name::GetBufferedDataSize() const {                                 \
    return m_Impl.GetBufferedDataSize();                                     \
  }                                                                          \
                                                                             \
  void name::GetBufferedData(void* buffer, size_t bufferSize) const {        \
    (void)bufferSize;                                                        \
    memcpy(buffer, m_Impl.GetBufferedData(), m_Impl.GetBufferedDataSize());  \
  }

NN_CRYPTO_DEFINE_SHA512_VARIANT(Sha384Generator)
NN_CRYPTO_DEFINE_SHA512_VARIANT(Sha512224Generator)
NN_CRYPTO_DEFINE_SHA512_VARIANT(Sha512256Generator)

#undef NN_CRYPTO_DEFINE_SHA512_VARIANT

template <typename Generator>
static void Generate(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

void GenerateSha384(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Generate<Sha384Generator>(hash, hashSize, data, size);
}

void GenerateSha512224(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Generate<Sha512224Generator>(hash, hashSize, data, size);
}

void GenerateSha512256(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Generate<Sha512256Generator>(hash, hashSize, data, size);
}

void GenerateSha512(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Generate<Sha512Generator>(hash, hashSize, data, size);
}

void GenerateSha512Hash(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Generate<Sha512Generator>(hash, hashSize, data, size);
}

}
