#pragma once

#include <stdint.h>

#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::gs::sdk {

enum GraphicsFrameLengthMode : int32_t {
  GraphicsFrameLengthMode_Auto,
  GraphicsFrameLengthMode_30,
  GraphicsFrameLengthMode_60,
  GraphicsFrameLengthMode_120,
};

void SetGraphicsFrameLengthMode(GraphicsFrameLengthMode mode);
Result QueryApplicationGpuTimeSpan(TimeSpan* pOutTimeSpan, uint64_t begin,
  uint64_t end);

}
