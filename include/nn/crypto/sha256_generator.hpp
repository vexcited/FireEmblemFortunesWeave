#pragma once

#include <stddef.h>

#include "nn/crypto/detail/sha256_impl.hpp"
#include "nn/crypto/sha256_context.hpp"

namespace nn::crypto {

class Sha256Generator {
public:
  static constexpr size_t HashSize = detail::Sha256Impl::HashSize;
  static constexpr size_t BlockSize = detail::Sha256Impl::BlockSize;

  void Initialize() {
    m_Impl.Initialize();
  }

  void Update(const void* data, size_t size) {
    m_Impl.Update(data, size);
  }

  void GetHash(void* hash, size_t hashSize) {
    m_Impl.GetHash(hash, hashSize);
  }

private:
  detail::Sha256Impl m_Impl;
};

class Sha224Generator {
public:
  static constexpr size_t HashSize = 28;
  static constexpr size_t BlockSize = detail::Sha256Impl::BlockSize;

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);
  void InitializeWithContext(const Sha256Context* context);
  void GetContext(Sha256Context* context) const;
  size_t GetBufferedDataSize() const;
  void GetBufferedData(void* buffer, size_t bufferSize) const;

private:
  detail::Sha256Impl m_Impl;
};

void GenerateSha224(void* hash, size_t hashSize, const void* data,
  size_t size);
void GenerateSha256(void* hash, size_t hashSize, const void* data,
  size_t size);
void GenerateSha256Hash(void* hash, size_t hashSize, const void* data,
  size_t size);

}
