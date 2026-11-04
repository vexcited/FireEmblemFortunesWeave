#include "nn/fs/dbm/fs_dbm_allocation_table.hpp"

namespace nn::fs::dbm {

namespace {

constexpr Result ResultAllocationTableFull() {
  return detail::MakeResult(6707);
}

constexpr Result ResultAllocationTableBroken() {
  return detail::MakeResult(4724);
}

const uint32_t FreeListSector = 0;
const uint32_t MultiBlockFlag = 0x80000000;
const uint32_t IndexMask = 0x7FFFFFFF;

int64_t GetSectorOffset(uint32_t sector) {
  return static_cast<int64_t>(sizeof(AllocationTable::TableElement)) *
    (sector & IndexMask);
}

}

AllocationTable::AllocationTable() : m_Storage(), m_BlockCount(0) {}

int64_t AllocationTable::QuerySize(uint32_t blockCount) {
  return sizeof(TableElement) * (blockCount + 1);
}

Result AllocationTable::Format(SubStorage storage, uint32_t blockCount) {
  TableElement element = {0, 1};
  NN_FS_RESULT_DO(storage.Write(GetSectorOffset(FreeListSector), &element,
    sizeof(element)));

  element.prev = IndexEnd;
  element.next = blockCount > 1 ? MultiBlockFlag : 0;
  NN_FS_RESULT_DO(storage.Write(GetSectorOffset(1), &element,
    sizeof(element)));

  if (blockCount >= 2) {
    element.prev = IndexEnd | 1;
    element.next = blockCount;
    NN_FS_RESULT_DO(storage.Write(GetSectorOffset(2), &element,
      sizeof(element)));
    NN_FS_RESULT_DO(storage.Write(GetSectorOffset(blockCount), &element,
      sizeof(element)));
  }
  return ResultSuccess();
}

void AllocationTable::Initialize(SubStorage storage, uint32_t blockCount) {
  m_Storage = storage;
  m_BlockCount = blockCount;
}

void AllocationTable::Finalize() {
  m_BlockCount = 0;
}

uint32_t AllocationTable::ConvertSectorToIndex(uint32_t sector) const {
  return sector - 1;
}

uint32_t AllocationTable::ConvertIndexToSector(uint32_t index) const {
  return index + 1;
}

Result AllocationTable::ReadBlock(TableElement* outElements, uint32_t sector,
  uint32_t count) {
  return m_Storage.Read(GetSectorOffset(sector), outElements,
    sizeof(TableElement) * count);
}

Result AllocationTable::WriteBlock(const TableElement* element,
  uint32_t sector) {
  return m_Storage.Write(GetSectorOffset(sector), element, sizeof(*element));
}

Result AllocationTable::ReadFreeList(TableElement* outElement) {
  return ReadBlock(outElement, FreeListSector, 1);
}

Result AllocationTable::UpdateFreeList(const TableElement* element) {
  return WriteBlock(element, FreeListSector);
}

Result AllocationTable::ReadFreeListHead(uint32_t* outIndex) {
  TableElement element;
  NN_FS_RESULT_DO(ReadFreeList(&element));
  *outIndex = element.next != 0 ? ConvertSectorToIndex(element.next) :
    IndexEnd;
  return ResultSuccess();
}

Result AllocationTable::ReadNext(uint32_t* outNext, uint32_t* outBlockCount,
  uint32_t index) {
  const uint32_t sector = ConvertIndexToSector(index);
  TableElement elements[2];
  NN_FS_RESULT_DO(ReadBlock(elements, sector,
    sector == m_BlockCount ? 1 : 2));

  if ((elements[0].next & MultiBlockFlag) != 0) {
    *outBlockCount = elements[1].next - index;
  }
  else {
    NN_FS_RESULT_THROW_UNLESS(elements[0].prev <= IndexEnd,
      ResultAllocationTableBroken());
    *outBlockCount = 1;
  }

  const uint32_t next = elements[0].next & IndexMask;
  *outNext = next != 0 ? ConvertSectorToIndex(next) : IndexEnd;
  return ResultSuccess();
}

Result AllocationTable::ReadPrevious(uint32_t* outPrevious,
  uint32_t* outBlockCount, uint32_t index) {
  const uint32_t sector = ConvertIndexToSector(index);
  TableElement elements[2];
  NN_FS_RESULT_DO(ReadBlock(elements, sector,
    sector == m_BlockCount ? 1 : 2));

  if ((elements[0].next & MultiBlockFlag) != 0) {
    *outBlockCount = elements[1].next - index;
    *outPrevious = elements[0].prev == IndexEnd ? IndexEnd :
      ConvertSectorToIndex(elements[0].prev & IndexMask);
  }
  else {
    if (elements[0].prev == IndexEnd) {
      *outBlockCount = 1;
      *outPrevious = IndexEnd;
    }
    else {
      NN_FS_RESULT_THROW_UNLESS((elements[0].prev & MultiBlockFlag) == 0,
        ResultAllocationTableBroken());
      *outBlockCount = 1;
      *outPrevious = ConvertSectorToIndex(elements[0].prev);
    }
  }
  return ResultSuccess();
}

Result AllocationTable::CalcTotalBlockCount(uint32_t* outBlockCount,
  uint32_t index) {
  uint32_t total = 0;
  uint32_t current = index;
  while (current != IndexEnd) {
    uint32_t next;
    uint32_t count;
    NN_FS_RESULT_DO(ReadNext(&next, &count, current));
    total += count;
    current = next;
  }
  *outBlockCount = total;
  return ResultSuccess();
}

Result AllocationTable::LookupTailParentIndex(uint32_t* outIndex,
  uint32_t index) {
  uint32_t current = index;
  for (;;) {
    uint32_t next;
    uint32_t count;
    NN_FS_RESULT_DO(ReadNext(&next, &count, current));
    if (next == IndexEnd) {
      *outIndex = current;
      return ResultSuccess();
    }
    current = next;
  }
}

Result AllocationTable::CalcFreeListLength(uint32_t* outLength) {
  uint32_t head;
  const Result result = ReadFreeListHead(&head);
  if (IsFailure(result)) {
    *outLength = 0;
    return result;
  }
  return CalcTotalBlockCount(outLength, head);
}

Result AllocationTable::UpdatePrevious(uint32_t sector, uint32_t previous) {
  TableElement element;
  NN_FS_RESULT_DO(ReadBlock(&element, sector, 1));
  element.prev = previous;
  return WriteBlock(&element, sector);
}

Result AllocationTable::UpdateNext(uint32_t sector, uint32_t next) {
  TableElement element;
  NN_FS_RESULT_DO(ReadBlock(&element, sector, 1));
  element.next = (element.next & MultiBlockFlag) | next;
  return WriteBlock(&element, sector);
}

Result AllocationTable::Free(uint32_t index) {
  TableElement freeList;
  NN_FS_RESULT_DO(ReadFreeList(&freeList));
  if (freeList.next != 0) {
    NN_FS_RESULT_DO(Concat(index, ConvertSectorToIndex(freeList.next)));
  }
  freeList.next = ConvertIndexToSector(index);
  return UpdateFreeList(&freeList);
}

Result AllocationTable::Concat(uint32_t index, uint32_t otherIndex) {
  const uint32_t otherSector = ConvertIndexToSector(otherIndex);
  TableElement otherHead;
  NN_FS_RESULT_DO(ReadBlock(&otherHead, otherSector, 1));

  const uint32_t headSector = ConvertIndexToSector(index);
  uint32_t tailSector = headSector;
  for (;;) {
    TableElement elements[2];
    NN_FS_RESULT_DO(ReadBlock(elements, tailSector,
      tailSector == m_BlockCount ? 1 : 2));
    NN_FS_RESULT_THROW_UNLESS((elements[0].next & MultiBlockFlag) != 0 ||
      elements[0].prev <= IndexEnd, ResultAllocationTableBroken());
    const uint32_t next = elements[0].next & IndexMask;
    if (next == 0) {
      break;
    }
    tailSector = next;
  }

  TableElement tail;
  NN_FS_RESULT_DO(ReadBlock(&tail, tailSector, 1));

  TableElement head;
  NN_FS_RESULT_DO(ReadBlock(&head, headSector, 1));
  head.prev = otherHead.prev;
  NN_FS_RESULT_DO(WriteBlock(&head, headSector));

  tail.next = (tail.next & MultiBlockFlag) | otherSector;
  NN_FS_RESULT_DO(WriteBlock(&tail, tailSector));

  otherHead.prev = tailSector;
  return WriteBlock(&otherHead, otherSector);
}

Result AllocationTable::UpdateChain(uint32_t headSector, uint32_t sector,
  uint32_t lastSector, uint32_t previousSector, uint32_t nextSector) {
  const bool isSingleBlock = lastSector == IndexEnd || sector == lastSector;

  TableElement element;
  element.prev = sector == headSector ? IndexEnd : previousSector;
  element.next = isSingleBlock ? nextSector : nextSector | MultiBlockFlag;
  NN_FS_RESULT_DO(WriteBlock(&element, sector));

  if ((nextSector & IndexMask) != 0) {
    NN_FS_RESULT_DO(UpdatePrevious(nextSector, sector));
  }

  if (isSingleBlock) {
    return ResultSuccess();
  }

  element.prev = sector | MultiBlockFlag;
  element.next = lastSector;
  NN_FS_RESULT_DO(WriteBlock(&element, sector + 1));
  if (sector + 1 == lastSector) {
    return ResultSuccess();
  }
  return WriteBlock(&element, lastSector);
}

Result AllocationTable::AllocateFreeSector(uint32_t* outSector,
  uint32_t* outBlockCount, TableElement* freeList, uint32_t blockCount) {
  const uint32_t sector = freeList->next;
  TableElement elements[2];
  NN_FS_RESULT_DO(ReadBlock(elements, sector,
    sector == m_BlockCount ? 1 : 2));

  const uint32_t next = elements[0].next;
  *outSector = freeList->next;
  if ((next & MultiBlockFlag) == 0) {
    *outBlockCount = 1;
    freeList->next = next;
  }
  else {
    const uint32_t count = elements[1].next - freeList->next + 1;
    if (count > blockCount) {
      *outBlockCount = blockCount;
      NN_FS_RESULT_DO(UpdateChain(freeList->next + blockCount,
        freeList->next + blockCount, elements[1].next, elements[0].prev,
        next & IndexMask));
      freeList->next += blockCount;
      return ResultSuccess();
    }
    *outBlockCount = count;
    *outSector = freeList->next;
    freeList->next = next & IndexMask;
  }

  if (freeList->next == 0) {
    return ResultSuccess();
  }
  return UpdatePrevious(freeList->next, IndexEnd);
}

Result AllocationTable::Allocate(uint32_t* outIndex, uint32_t blockCount) {
  TableElement freeList;
  NN_FS_RESULT_DO(ReadFreeList(&freeList));

  uint32_t headSector = IndexEnd;
  uint32_t tailSector = IndexEnd;
  uint32_t sector = IndexEnd;
  uint32_t previousSector = IndexEnd;
  uint32_t lastSector = IndexEnd;
  uint32_t remaining = blockCount;

  if (remaining != 0) {
    for (;;) {
      if (freeList.next == 0) {
        NN_FS_RESULT_DO(UpdateChain(headSector, sector, lastSector,
          previousSector, 0));
        NN_FS_RESULT_THROW_UNLESS(headSector != IndexEnd,
          ResultAllocationTableFull());
        freeList.next = headSector;
        NN_FS_RESULT_DO(UpdateFreeList(&freeList));
        return ResultAllocationTableFull();
      }

      uint32_t allocatedSector = 0;
      uint32_t count = 0;
      NN_FS_RESULT_DO(AllocateFreeSector(&allocatedSector, &count, &freeList,
        remaining));

      uint32_t current = allocatedSector;
      if (headSector == IndexEnd) {
        headSector = allocatedSector;
        tailSector = allocatedSector;
        previousSector = IndexEnd;
        lastSector = count > 1 ? allocatedSector + count - 1 : IndexEnd;
      }
      else if (allocatedSector - 1 == tailSector) {
        current = sector;
        lastSector = tailSector + count;
        tailSector += count;
      }
      else {
        NN_FS_RESULT_DO(UpdateChain(headSector, sector, lastSector,
          previousSector, allocatedSector));
        previousSector = sector;
        tailSector = allocatedSector;
        lastSector = count > 1 ? allocatedSector - 1 + count : IndexEnd;
      }
      sector = current;

      if (remaining <= count) {
        break;
      }
      remaining -= count;
    }
  }

  NN_FS_RESULT_DO(UpdateChain(headSector, sector, lastSector, previousSector,
    0));
  NN_FS_RESULT_DO(UpdateFreeList(&freeList));
  *outIndex = ConvertSectorToIndex(headSector);
  return ResultSuccess();
}

}
