#pragma once

#include <stdint.h>

#include "nn/result.hpp"

namespace nandroid {

class StreamSourceObserver {
public:
  virtual nn::Result StreamSourceReadData(void* buffer, int64_t* pOutSize,
    int64_t size) = 0;
  virtual nn::Result StreamSourceSeekTo(int64_t position) = 0;
  virtual ~StreamSourceObserver() {}
};

}
