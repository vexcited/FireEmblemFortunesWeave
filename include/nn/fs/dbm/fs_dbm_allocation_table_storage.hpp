#pragma once

#include <stdint.h>

#include "nn/fs/dbm/fs_dbm_allocation_table.hpp"
#include "nn/fs/fs_substorage.hpp"

namespace nn::fs::dbm {

class AllocationTableStorage : public IStorage {
public:
  static const uint32_t InvalidIndex = 0xFFFFFFFF;

  AllocationTableStorage();
  ~AllocationTableStorage() override {}

  Result Initialize(AllocationTable* allocationTable, uint32_t startIndex,
    int64_t blockSize, SubStorage dataStorage);
  virtual void Finalize();

  Result Read(int64_t offset, void* buffer, size_t size) override;
  Result Write(int64_t offset, const void* buffer, size_t size) override;

  Result Flush() override {
    return m_DataStorage.Flush();
  }

  Result SetSize(int64_t size) override;
  Result GetSize(int64_t* outSize) override;
  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

  using IStorage::OperateRange;

  Result AllocateBlock(uint32_t blockCount);

protected:
  Result SeekToTop() const;
  Result SeekTo(uint32_t* outIndex, uint32_t* outBlockCount,
    int64_t* outOffset, int64_t offset) const;

  AllocationTable* m_pAllocationTable;
  SubStorage m_DataStorage;
  uint32_t m_StartIndex;
  uint32_t m_BlockSizeShift;
  mutable uint32_t m_SeekBlockOffset;
  mutable uint32_t m_SeekIndex;
  mutable uint32_t m_SeekBlockCount;
  mutable uint32_t m_SeekNextIndex;
};

}
