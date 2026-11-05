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

enum GraphicsFrameRestartMode : int32_t {};
enum GraphicsFrameGpuTimesliceMode : int32_t {};

void BootGraphicsFrameManagement();
void SetGraphicsFrameLengthMode(GraphicsFrameLengthMode mode);
void SetGraphicsFrameRestartMode(GraphicsFrameRestartMode mode);
void SetGraphicsFrameGpuTimesliceMode(GraphicsFrameGpuTimesliceMode mode);
Result QueryApplicationGpuTimeSpan(TimeSpan* pOutTimeSpan, uint64_t begin,
  uint64_t end);

}
