#pragma once

#include <stddef.h>

#include "nn/result.hpp"

namespace nn::fs {

Result QueryMountAddOnContentCacheSize(size_t* outSize, int index);
Result MountAddOnContent(const char* name, int index, void* cacheBuffer,
  size_t cacheBufferSize);

}
