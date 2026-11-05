#include "nn/fs/dbm/fs_dbm_allocation_table_storage.hpp"

namespace nn::fs::dbm {

namespace {

constexpr Result ResultInvalidAllocationTableOffset() {
  return fs::detail::MakeResult(4722);
}

constexpr Result ResultAllocationTableIteratedRangeEntry() {
  return fs::detail::MakeResult(4725);
}

constexpr Result ResultUnsupportedSetSizeForAllocationTableStorage() {
  return fs::detail::MakeResult(6347);
}

inline bool IsRangeIncluded(int64_t offset, int64_t size, int64_t totalSize) {
  return offset >= 0 && size <= totalSize && offset <= totalSize - size;
}

}

AllocationTableStorage::AllocationTableStorage()
  : m_pAllocationTable(nullptr), m_DataStorage(), m_StartIndex(InvalidIndex),
    m_BlockSizeShift(0), m_SeekBlockOffset(0), m_SeekIndex(0),
    m_SeekBlockCount(0), m_SeekNextIndex(0) {}

Result AllocationTableStorage::Initialize(AllocationTable* allocationTable,
  uint32_t startIndex, int64_t blockSize, SubStorage dataStorage) {
  NN_FS_RESULT_THROW_UNLESS(dataStorage.IsValid(), ResultNotInitialized());
  m_pAllocationTable = allocationTable;
  m_StartIndex = startIndex;
  m_BlockSizeShift = __builtin_ctzll(blockSize);
  m_DataStorage = dataStorage;
  return SeekToTop();
}

Result AllocationTableStorage::SeekToTop() const {
  m_SeekBlockOffset = 0;
  m_SeekIndex = m_StartIndex;
  return m_pAllocationTable->ReadNext(&m_SeekNextIndex, &m_SeekBlockCount,
    m_SeekIndex);
}

void AllocationTableStorage::Finalize() {
  m_pAllocationTable = nullptr;
  m_StartIndex = InvalidIndex;
  m_BlockSizeShift = 0;
}

Result AllocationTableStorage::GetSize(int64_t* outSize) {
  uint32_t index = m_StartIndex;
  uint32_t totalBlockCount = 0;
  uint32_t blockCount = 0;
  while (index != AllocationTable::IndexEnd) {
    NN_FS_RESULT_DO(m_pAllocationTable->ReadNext(&index, &blockCount,
      index));
    totalBlockCount += blockCount;
  }
  *outSize = static_cast<int64_t>(totalBlockCount) << m_BlockSizeShift;
  return ResultSuccess();
}

Result AllocationTableStorage::SetSize(int64_t size) {
  return ResultUnsupportedSetSizeForAllocationTableStorage();
}

Result AllocationTableStorage::Read(int64_t offset, void* buffer,
  size_t size) {
  if (size == 0) {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(m_StartIndex != InvalidIndex,
    ResultNotInitialized());
  int64_t storageSize = 0;
  NN_FS_RESULT_DO(m_DataStorage.GetSize(&storageSize));

  char* current = static_cast<char*>(buffer);
  int64_t restSize = size;
  while (restSize != 0) {
    uint32_t index = 0;
    uint32_t blockCount = 0;
    int64_t offsetInBlock = 0;
    NN_FS_RESULT_DO(SeekTo(&index, &blockCount, &offsetInBlock, offset));

    const int64_t storageOffset =
      (static_cast<int64_t>(index) << m_BlockSizeShift) + offsetInBlock;
    const int64_t availableSize =
      (static_cast<int64_t>(blockCount) << m_BlockSizeShift) - offsetInBlock;
    const int64_t readSize =
      availableSize < restSize ? availableSize : restSize;
    NN_FS_RESULT_THROW_UNLESS(
      IsRangeIncluded(storageOffset, readSize, storageSize),
      ResultInvalidAllocationTableOffset());
    NN_FS_RESULT_DO(m_DataStorage.Read(storageOffset, current, readSize));

    restSize -= readSize;
    current += readSize;
    offset += readSize;
  }
  return ResultSuccess();
}

Result AllocationTableStorage::SeekTo(uint32_t* outIndex,
  uint32_t* outBlockCount, int64_t* outOffset, int64_t offset) const {
  while (true) {
    const int64_t start =
      static_cast<int64_t>(m_SeekBlockOffset) << m_BlockSizeShift;
    const int64_t end = static_cast<int64_t>(
      m_SeekBlockOffset + m_SeekBlockCount) << m_BlockSizeShift;
    if (offset >= end && m_SeekNextIndex == AllocationTable::IndexEnd) {
      return ResultAllocationTableIteratedRangeEntry();
    }
    if (start <= offset && offset < end) {
      break;
    }

    if (offset >= end) {
      m_SeekBlockOffset += m_SeekBlockCount;
      m_SeekIndex = m_SeekNextIndex;
      NN_FS_RESULT_DO(m_pAllocationTable->ReadNext(&m_SeekNextIndex,
        &m_SeekBlockCount, m_SeekIndex));
    }
    else {
      NN_FS_RESULT_DO(SeekToTop());
    }
  }
  *outIndex = m_SeekIndex;
  *outBlockCount = m_SeekBlockCount;
  *outOffset =
    offset - (static_cast<int64_t>(m_SeekBlockOffset) << m_BlockSizeShift);
  return ResultSuccess();
}

Result AllocationTableStorage::Write(int64_t offset, const void* buffer,
  size_t size) {
  if (size == 0) {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(m_StartIndex != InvalidIndex,
    ResultNotInitialized());
  int64_t storageSize = 0;
  NN_FS_RESULT_DO(m_DataStorage.GetSize(&storageSize));

  const char* current = static_cast<const char*>(buffer);
  int64_t restSize = size;
  while (restSize != 0) {
    uint32_t index = 0;
    uint32_t blockCount = 0;
    int64_t offsetInBlock = 0;
    NN_FS_RESULT_DO(SeekTo(&index, &blockCount, &offsetInBlock, offset));

    const int64_t storageOffset =
      (static_cast<int64_t>(index) << m_BlockSizeShift) + offsetInBlock;
    const int64_t availableSize =
      (static_cast<int64_t>(blockCount) << m_BlockSizeShift) - offsetInBlock;
    const int64_t writeSize =
      availableSize < restSize ? availableSize : restSize;
    NN_FS_RESULT_THROW_UNLESS(
      IsRangeIncluded(storageOffset, writeSize, storageSize),
      ResultInvalidAllocationTableOffset());
    NN_FS_RESULT_DO(m_DataStorage.Write(storageOffset, current, writeSize));

    restSize -= writeSize;
    current += writeSize;
    offset += writeSize;
  }
  return ResultSuccess();
}

Result AllocationTableStorage::OperateRange(void* outBuffer,
  size_t outBufferSize, OperationId operationId, int64_t offset, int64_t size,
  const void* inBuffer, size_t inBufferSize) {
  if (operationId == OperationId_Invalidate) {
    NN_FS_RESULT_THROW_UNLESS(m_StartIndex != InvalidIndex,
      ResultNotInitialized());
    return m_DataStorage.OperateRange(OperationId_Invalidate, 0, INT64_MAX);
  }

  NN_FS_RESULT_THROW_UNLESS(m_StartIndex != InvalidIndex,
    ResultNotInitialized());
  int64_t storageSize = 0;
  NN_FS_RESULT_DO(m_DataStorage.GetSize(&storageSize));

  QueryRangeInfo* outInfo = static_cast<QueryRangeInfo*>(outBuffer);
  if (operationId == OperationId_QueryRange) {
    NN_FS_RESULT_THROW_UNLESS(outBuffer != nullptr, ResultNullptrArgument());
    outInfo->Clear();
  }

  int64_t restSize = size;
  while (restSize != 0) {
    uint32_t index = 0;
    uint32_t blockCount = 0;
    int64_t offsetInBlock = 0;
    NN_FS_RESULT_DO(SeekTo(&index, &blockCount, &offsetInBlock, offset));

    const int64_t storageOffset =
      (static_cast<int64_t>(index) << m_BlockSizeShift) + offsetInBlock;
    const int64_t availableSize =
      (static_cast<int64_t>(blockCount) << m_BlockSizeShift) - offsetInBlock;
    const int64_t operateSize =
      availableSize < restSize ? availableSize : restSize;
    NN_FS_RESULT_THROW_UNLESS(
      IsRangeIncluded(storageOffset, operateSize, storageSize),
      ResultInvalidAllocationTableOffset());

    QueryRangeInfo info = {};
    NN_FS_RESULT_DO(m_DataStorage.OperateRange(
      operationId == OperationId_QueryRange ? &info : outBuffer,
      outBufferSize, operationId, storageOffset, operateSize, inBuffer,
      inBufferSize));
    if (operationId == OperationId_QueryRange) {
      outInfo->aesCtrKeyTypeFlag |= info.aesCtrKeyTypeFlag;
      outInfo->speedEmulationTypeFlag |= info.speedEmulationTypeFlag;
    }

    restSize -= operateSize;
    offset += operateSize;
  }
  return ResultSuccess();
}

Result AllocationTableStorage::AllocateBlock(uint32_t blockCount) {
  uint32_t index = 0;
  NN_FS_RESULT_DO(m_pAllocationTable->Allocate(&index, blockCount));
  if (m_StartIndex == InvalidIndex) {
    m_StartIndex = index;
    return ResultSuccess();
  }
  NN_FS_RESULT_DO(m_pAllocationTable->Concat(m_StartIndex, index));
  if (m_SeekNextIndex == AllocationTable::IndexEnd) {
    m_SeekNextIndex = index;
  }
  return ResultSuccess();
}

}
