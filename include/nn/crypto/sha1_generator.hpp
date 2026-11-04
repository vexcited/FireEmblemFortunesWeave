#pragma once

#include <stddef.h>

#include "nn/crypto/detail/sha1_impl.hpp"

namespace nn::crypto {

class Sha1Generator {
public:
  static constexpr size_t HashSize = detail::Sha1Impl::HashSize;
  static constexpr size_t BlockSize = detail::Sha1Impl::BlockSize;

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
  detail::Sha1Impl m_Impl;
};

void GenerateSha1(void* hash, size_t hashSize, const void* data, size_t size);
void GenerateSha1Hash(void* hash, size_t hashSize, const void* data,
  size_t size);

}
