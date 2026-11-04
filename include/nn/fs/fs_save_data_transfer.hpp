#pragma once

#include <stdint.h>

#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_types.hpp"

namespace nn::fs {

class SaveDataTransferSizeCalculator {
public:
  Result GetFreeSpaceSize(int64_t* outSize, SaveDataSpaceId spaceId);
};

class SizeCalculatorForSaveDataMover {
public:
  Result GetFreeSpaceSize(int64_t* outSize, SaveDataSpaceId spaceId);
};

}
