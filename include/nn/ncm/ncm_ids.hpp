#pragma once

#include <stdint.h>

namespace nn::ncm {

struct ProgramId {
  uint64_t value;
};

struct ApplicationId {
  uint64_t value;
};

struct DataId {
  uint64_t value;
};

struct SystemDataId {
  uint64_t value;
};

enum class StorageId : uint8_t {
  None = 0,
  Host = 1,
  GameCard = 2,
  BuiltInSystem = 3,
  BuiltInUser = 4,
  SdCard = 5,
  Any = 6,
};

}

namespace nn {

struct ApplicationId {
  uint64_t value;
};

}
