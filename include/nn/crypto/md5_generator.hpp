#pragma once

#include <stddef.h>

#include "nn/crypto/detail/md5_impl.hpp"

namespace nn::crypto {

class Md5Generator {
public:
  static constexpr size_t HashSize = detail::Md5Impl::HashSize;
  static constexpr size_t BlockSize = detail::Md5Impl::BlockSize;

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
  detail::Md5Impl m_Impl;
};

void GenerateMd5(void* hash, size_t hashSize, const void* data, size_t size);
void GenerateMd5Hash(void* hash, size_t hashSize, const void* data,
  size_t size);

}
