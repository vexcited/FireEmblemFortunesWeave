#pragma once

#include <stdint.h>

namespace nn::gsv::imgdesc::impl::user::ounce {

// Linear kinds keep the pitch in the first layout word, block linear kinds
// keep the width in blocks there and the block size in the second word.
struct CpuUserImagePlane {
  uint32_t offset;
  uint32_t size;
  uint32_t pitch;
  uint32_t blockLayout;
};

// Single plane kinds use the first plane, NV12 kinds two and YUV 4:4:0
// kinds three.
struct CpuUserImageDescriptor {
  uint8_t kind;
  uint8_t reserved0[7];
  CpuUserImagePlane planes[3];
  uint8_t reserved1[72];
};

static_assert(sizeof(CpuUserImageDescriptor) == 128);

// A GPU image is mappable when both kinds are 1 and it has a size. The offset
// and size locate it inside its native memory.
struct GpuOunceUserImageDescriptor {
  uint8_t kind;
  uint8_t reserved0[31];
  uint8_t memoryKind;
  uint8_t reserved1[7];
  uint32_t offset;
  uint32_t size;
  uint8_t reserved2[80];
};

static_assert(sizeof(GpuOunceUserImageDescriptor) == 128);

enum GpuOunceImagePixelFormat : uint32_t {};
enum GpuOunceImageBlockFormat : uint8_t {};
enum GpuOunceAlphaMode : uint32_t {};

// Block linear and pitch linear images share the size words, the rest of the
// layout is packed per kind.
struct GpuOunceUserImagePreference {
  struct BlockLayout {
    uint64_t levelCount : 8;
    uint64_t : 24;
    uint64_t layerCount : 32;
    uint64_t pixelFormat : 32;
    uint64_t blockFormat : 8;
    uint64_t flags : 16;
    uint64_t : 8;
  };

  struct PitchLayout {
    uint32_t pitch;
    uint32_t pixelFormat;
    uint64_t flags : 16;
    uint64_t alphaMode : 2;
    uint64_t : 46;
  };

  uint32_t reserved0;
  uint32_t layoutKind;
  uint16_t widthMinusOne;
  uint16_t heightMinusOne;
  uint32_t reserved0c;
  union {
    BlockLayout block;
    PitchLayout pitch;
  };
  uint64_t reserved20[4];
};

static_assert(sizeof(GpuOunceUserImagePreference) == 64);

}

namespace nn::gsv {

struct GpuOunceUserImageFlags {
  uint32_t value;
};

}
