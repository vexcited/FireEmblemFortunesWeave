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

}

namespace nn {

struct ApplicationId {
  uint64_t value;
};

}
