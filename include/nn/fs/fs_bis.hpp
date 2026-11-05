#pragma once

#include <memory>

#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"

namespace nn::fs {

class IWiper {
public:
  virtual ~IWiper() {}

  virtual Result Startup() = 0;
  virtual Result Process() = 0;
};

const char* GetBisMountName(BisPartitionId id);
Result MountBis(const char* name, BisPartitionId id);
Result MountBis(BisPartitionId id, const char* rootPath);
Result OpenBisPartition(std::unique_ptr<IStorage>* outStorage,
  BisPartitionId id);
Result OpenBisWiper(std::unique_ptr<IWiper>* outWiper,
  nn::sf::NativeHandle&& transferMemoryHandle, size_t transferMemorySize);

namespace detail {

Result OpenBisPartition(std::unique_ptr<IStorage>* outStorage,
  BisPartitionId id);

}

}
