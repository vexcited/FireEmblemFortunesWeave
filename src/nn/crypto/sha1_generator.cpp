#include "nn/crypto/sha1_generator.hpp"

namespace nn::crypto {

void GenerateSha1(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Sha1Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

void GenerateSha1Hash(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Sha1Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

}
