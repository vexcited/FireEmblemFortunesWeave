#include "nn/crypto/hmac_generator.hpp"

#include "nn/crypto/sha1_generator.hpp"
#include "nn/crypto/sha256_generator.hpp"

namespace nn::crypto {

template <typename HashFunction>
static void GenerateHmac(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize) {
  HmacGenerator<HashFunction> generator;
  generator.Initialize(key, keySize);
  generator.Update(data, size);
  generator.GetMac(mac, macSize);
}

void GenerateHmacSha1(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize) {
  GenerateHmac<Sha1Generator>(mac, macSize, data, size, key, keySize);
}

void GenerateHmacSha1Mac(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize) {
  GenerateHmac<Sha1Generator>(mac, macSize, data, size, key, keySize);
}

void GenerateHmacSha256(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize) {
  GenerateHmac<Sha256Generator>(mac, macSize, data, size, key, keySize);
}

void GenerateHmacSha256Mac(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize) {
  GenerateHmac<Sha256Generator>(mac, macSize, data, size, key, keySize);
}

}
