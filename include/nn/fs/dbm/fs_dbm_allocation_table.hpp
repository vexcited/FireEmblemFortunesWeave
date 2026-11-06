#pragma once

#include <stdint.h>

#include "nn/fs/fs_substorage.hpp"

namespace nn::fs::dbm {

class AllocationTable {
public:
  struct TableElement {
    uint32_t prev;
    uint32_t next;
  };

  static const uint32_t IndexEnd = 0x80000000;

  AllocationTable();

  static int64_t QuerySize(uint32_t blockCount);
  static Result Format(SubStorage storage, uint32_t blockCount);
  static Result Expand(SubStorage storage, uint32_t oldBlockCount,
    uint32_t newBlockCount);

  void Initialize(SubStorage storage, uint32_t blockCount);
  void Finalize();

  Result Allocate(uint32_t* outIndex, uint32_t blockCount);
  Result Free(uint32_t index);
  Result ReadNext(uint32_t* outNext, uint32_t* outBlockCount,
    uint32_t index);
  Result ReadPrevious(uint32_t* outPrevious, uint32_t* outBlockCount,
    uint32_t index);
  Result CalcTotalBlockCount(uint32_t* outBlockCount, uint32_t index);
  Result LookupTailParentIndex(uint32_t* outIndex, uint32_t index);
  Result ReadFreeListHead(uint32_t* outIndex);
  Result CalcFreeListLength(uint32_t* outLength);
  Result Concat(uint32_t index, uint32_t otherIndex);
  Result Split(uint32_t* outIndex, uint32_t index, uint32_t blockCount);

  Result Invalidate() {
    return m_Storage.OperateRange(OperationId_Invalidate, 0, INT64_MAX);
  }

private:
  uint32_t ConvertSectorToIndex(uint32_t sector) const;
  uint32_t ConvertIndexToSector(uint32_t index) const;

  Result ReadBlock(TableElement* outElements, uint32_t sector,
    uint32_t count);
  Result WriteBlock(const TableElement* element, uint32_t sector);
  Result ReadFreeList(TableElement* outElement);
  Result UpdateFreeList(const TableElement* element);
  Result UpdatePrevious(uint32_t sector, uint32_t previous);
  Result UpdateNext(uint32_t sector, uint32_t next);
  Result UpdateChain(uint32_t headSector, uint32_t sector,
    uint32_t lastSector, uint32_t previousSector, uint32_t nextSector);
  Result AllocateFreeSector(uint32_t* outSector, uint32_t* outBlockCount,
    TableElement* freeList, uint32_t blockCount);

  SubStorage m_Storage;
  uint32_t m_BlockCount;
};

}
