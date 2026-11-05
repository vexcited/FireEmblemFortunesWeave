#pragma once

#include <stdint.h>

namespace nn::fssystem {

struct NcaHeader {
  enum class ContentType : uint8_t {
    Program,
    Meta,
    Control,
    Manual,
    Data,
    PublicData,
  };
};

}
