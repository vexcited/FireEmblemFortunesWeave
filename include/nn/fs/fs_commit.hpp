#pragma once

#include <stdint.h>

#include "nn/result.hpp"

namespace nn::fs {

enum CommitOptionFlag {
  CommitOptionFlag_None = 0,
  CommitOptionFlag_ClearRestoreFlag = 1 << 0,
  CommitOptionFlag_SetRestoreFlag = 1 << 1,
};

struct CommitOption {
  uint32_t flags;
};

Result Commit(const char* name, const CommitOption& option);

}
