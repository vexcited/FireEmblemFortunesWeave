#pragma once

#include <stddef.h>

namespace nn::nlibsdk::heap {

class TlsHeapCache;

class alignas(8) TlsHeapCentral {
public:
  void* CacheSmallMemory_(unsigned char index, size_t alignment, bool internal);
  size_t CacheSmallMemoryList_(TlsHeapCache* cache, unsigned char* index,
                               size_t count, void** output, int cpu,
                               size_t alignment);
  int UncacheSmallMemory_(void* address);

private:
  unsigned char storage[0xa40];
};

static_assert(sizeof(TlsHeapCentral) == 0xa40);

}
