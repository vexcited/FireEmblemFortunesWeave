#pragma once

#include <stddef.h>

#include "nn/crypto/detail/sha512_impl.hpp"
#include "nn/crypto/sha512_context.hpp"

namespace nn::crypto {

class Sha512Generator {
public:
  static constexpr size_t HashSize = detail::Sha512Impl::HashSize;
  static constexpr size_t BlockSize = detail::Sha512Impl::BlockSize;

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
  detail::Sha512Impl m_Impl;
};

class Sha384Generator {
public:
  static constexpr size_t HashSize = 48;
  static constexpr size_t BlockSize = detail::Sha512Impl::BlockSize;

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);
  void InitializeWithContext(const Sha512Context* context);
  void GetContext(Sha512Context* context) const;
  size_t GetBufferedDataSize() const;
  void GetBufferedData(void* buffer, size_t bufferSize) const;

private:
  detail::Sha512Impl m_Impl;
};

class Sha512224Generator {
public:
  static constexpr size_t HashSize = 28;
  static constexpr size_t BlockSize = detail::Sha512Impl::BlockSize;

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);
  void InitializeWithContext(const Sha512Context* context);
  void GetContext(Sha512Context* context) const;
  size_t GetBufferedDataSize() const;
  void GetBufferedData(void* buffer, size_t bufferSize) const;

private:
  detail::Sha512Impl m_Impl;
};

class Sha512256Generator {
public:
  static constexpr size_t HashSize = 32;
  static constexpr size_t BlockSize = detail::Sha512Impl::BlockSize;

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);
  void InitializeWithContext(const Sha512Context* context);
  void GetContext(Sha512Context* context) const;
  size_t GetBufferedDataSize() const;
  void GetBufferedData(void* buffer, size_t bufferSize) const;

private:
  detail::Sha512Impl m_Impl;
};

void GenerateSha384(void* hash, size_t hashSize, const void* data,
  size_t size);
void GenerateSha512224(void* hash, size_t hashSize, const void* data,
  size_t size);
void GenerateSha512256(void* hash, size_t hashSize, const void* data,
  size_t size);
void GenerateSha512(void* hash, size_t hashSize, const void* data,
  size_t size);
void GenerateSha512Hash(void* hash, size_t hashSize, const void* data,
  size_t size);

}
