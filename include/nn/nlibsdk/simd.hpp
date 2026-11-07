#pragma once

#include <arm_acle.h>
#include <arm_neon.h>
#include <stddef.h>
#include <stdint.h>

namespace nn::nlibsdk::simd {

class I128 {
public:
  // The lane masks are loaded from a 32 byte table at an offset.
  static uint8x16_t SetMask8LowerLanes(size_t count) {
    static const uint8_t kMask[32] = {
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    };
    return vld1q_u8(kMask + 16 - count);
  }

  static uint8x16_t SetMask8HigherLanes(size_t count) {
    static const uint8_t kMask[32] = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    };
    return vld1q_u8(kMask + count);
  }

  static bool IsZero(uint8x16_t value) {
    return vmaxvq_u32(vreinterpretq_u32_u8(value)) == 0;
  }

  // Four bits per lane, as the narrowing shift packs them.
  static uint64_t MoveMask(uint8x16_t value) {
    return vget_lane_u64(vreinterpret_u64_u8(vshrn_n_u16(
      vreinterpretq_u16_u8(value), 4)), 0);
  }

  static size_t FindFirstLane(uint8x16_t value) {
    return __clzll(__rbitll(MoveMask(value))) >> 2;
  }

  static size_t CountLanesAfterLast(uint8x16_t value) {
    return __clzll(MoveMask(value)) >> 2;
  }
};

}
