#pragma once

#include <stdint.h>

namespace nn::gsv::imgdesc::impl::user::ounce {

// Linear kinds keep the pitch in the first layout word, block linear kinds
// keep the whole layout for the block copy helpers.
struct CpuUserImageDescriptor {
  uint8_t kind;
  uint8_t reserved0[7];
  uint32_t offset;
  uint32_t size;
  uint32_t pitch;
  uint32_t blockLayout;
  uint8_t reserved1[104];
};

static_assert(sizeof(CpuUserImageDescriptor) == 128);

}
