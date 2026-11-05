#pragma once

#include <stdint.h>

#include "nn/hid/hid_device_states.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct NpadAttribute;

struct NpadStateBase {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t reserved;
};

struct NpadFullKeyState : NpadStateBase {};
struct NpadHandheldState : NpadStateBase {};
struct NpadJoyDualState : NpadStateBase {};
struct NpadJoyLeftState : NpadStateBase {};
struct NpadJoyRightState : NpadStateBase {};

}
