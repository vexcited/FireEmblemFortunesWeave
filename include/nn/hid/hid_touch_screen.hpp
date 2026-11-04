#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct TouchState {
  int64_t deltaTime;
  uint32_t attributes;
  int32_t fingerId;
  int32_t x;
  int32_t y;
  int32_t diameterX;
  int32_t diameterY;
  int32_t rotationAngle;
  int32_t reserved;
};

constexpr int TouchStateCountMax = 16;

template <size_t N>
struct TouchScreenState {
  int64_t samplingNumber;
  int32_t count;
  int32_t reserved;
  TouchState touches[N];
};

}
