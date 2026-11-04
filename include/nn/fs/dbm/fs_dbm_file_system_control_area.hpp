#pragma once

#include <stdint.h>

#include "nn/fs/fs_substorage.hpp"

namespace nn::fs::dbm {

class FileSystemControlArea {
public:
  FileSystemControlArea();

  void Initialize(SubStorage storage);
  void Finalize();

  Result ExpandAllocationTableInfo(uint32_t blockCount);
  Result WriteStorageInfo(int64_t offset, uint32_t size, uint32_t position);
  Result ReadStorageInfo(int64_t* outOffset, uint32_t* outSize,
    uint32_t position);
  Result WriteAllocationInfo(uint32_t index, uint32_t position);
  Result ReadAllocationInfo(uint32_t* outIndex, uint32_t position);

private:
  struct StorageInfo {
    int64_t offset;
    uint32_t size;
    uint32_t reserved;
  };

  static const int64_t BlockSizePosition = 0;
  static const int64_t AllocationTableInfoPosition = 8;
  static const int64_t DataInfoPosition = 24;

  SubStorage m_Storage;
};

}
