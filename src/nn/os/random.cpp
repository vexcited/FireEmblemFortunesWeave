#include "nn/os/random.hpp"

#include "nn/os/mutex.hpp"
#include "nn/util/tiny_mt.hpp"

namespace nn::os {

namespace detail {

void InitializeRandomImpl(util::TinyMt* generator);

}

namespace {

struct RandomGenerator {
  bool isInitialized;
  util::TinyMt generator;
};

MutexType g_RandomMutex = {};
RandomGenerator g_Random;

}

void GenerateRandomBytes(void* buffer, size_t size) {
  LockMutex(&g_RandomMutex);

  if (!g_Random.isInitialized) {
    detail::InitializeRandomImpl(&g_Random.generator);
    g_Random.isInitialized = true;
  }

  g_Random.generator.GenerateRandomBytes(buffer, size);
  UnlockMutex(&g_RandomMutex);
}

}
