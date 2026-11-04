#include "nn/crypto/sha256_generator.hpp"

#include <string.h>

namespace nn::crypto {

void Sha224Generator::Initialize() {
  Sha256Context context;
  context.intermediateHash[0] = 0xc1059ed8;
  context.intermediateHash[1] = 0x367cd507;
  context.intermediateHash[2] = 0x3070dd17;
  context.intermediateHash[3] = 0xf70e5939;
  context.intermediateHash[4] = 0xffc00b31;
  context.intermediateHash[5] = 0x68581511;
  context.intermediateHash[6] = 0x64f98fa7;
  context.intermediateHash[7] = 0xbefa4fa4;
  context.bitsConsumed = 0;
  m_Impl.InitializeWithContext(&context);
}

void Sha224Generator::Update(const void* data, size_t size) {
  m_Impl.Update(data, size);
}

void Sha224Generator::GetHash(void* hash, size_t hashSize) {
  (void)hashSize;
  uint8_t fullHash[detail::Sha256Impl::HashSize] = {};
  m_Impl.GetHash(fullHash, sizeof(fullHash));
  memcpy(hash, fullHash, HashSize);
}

void Sha224Generator::InitializeWithContext(const Sha256Context* context) {
  m_Impl.InitializeWithContext(context);
}

void Sha224Generator::GetContext(Sha256Context* context) const {
  m_Impl.GetContext(context);
}

size_t Sha224Generator::GetBufferedDataSize() const {
  return m_Impl.GetBufferedDataSize();
}

void Sha224Generator::GetBufferedData(void* buffer, size_t bufferSize) const {
  (void)bufferSize;
  memcpy(buffer, m_Impl.GetBufferedData(), m_Impl.GetBufferedDataSize());
}

void GenerateSha224(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Sha224Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

void GenerateSha256(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Sha256Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

void GenerateSha256Hash(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Sha256Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

}
