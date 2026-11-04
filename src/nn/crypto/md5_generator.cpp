#include "nn/crypto/md5_generator.hpp"

namespace nn::crypto {

void GenerateMd5(void* hash, size_t hashSize, const void* data, size_t size) {
  Md5Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

void GenerateMd5Hash(void* hash, size_t hashSize, const void* data,
  size_t size) {
  Md5Generator generator;
  generator.Initialize();
  generator.Update(data, size);
  generator.GetHash(hash, hashSize);
}

}
