#include <string.h>

#include "nn/fs/save/fs_save_data_file_system_core.hpp"

namespace nn::fs::dbm {

BufferedAllocationTableStorage::BufferedAllocationTableStorage()
  : AllocationTableStorage(), m_CacheEntriesList(),
    m_HoldingCacheSectionCount(0), m_pBufferManager(nullptr) {}

BufferedAllocationTableStorage::~BufferedAllocationTableStorage() {}

Result BufferedAllocationTableStorage::InitializeBuffered(
  AllocationTable* allocationTable, uint32_t startIndex, int64_t blockSize,
  SubStorage dataStorage, IBufferManager* bufferManager) {
  NN_FS_RESULT_DO(Initialize(allocationTable, startIndex, blockSize,
    dataStorage));
  m_pBufferManager = bufferManager;
  AllocateCacheEntries();
  return ResultSuccess();
}

BufferedAllocationTableStorage::CacheEntriesList::iterator
  BufferedAllocationTableStorage::AllocateCacheEntries() {
  int count = 0;
  for (CacheEntriesList::iterator it = m_CacheEntriesList.begin();
    it != m_CacheEntriesList.end(); ++it) {
    ++count;
  }
  if (count < CacheEntriesNodeCountMax) {
    CacheEntriesNode* node = new CacheEntriesNode();
    if (node != nullptr) {
      m_CacheEntriesList.push_front(*node);
      return m_CacheEntriesList.begin();
    }
  }
  return m_CacheEntriesList.end();
}

void BufferedAllocationTableStorage::Finalize() {
  while (!m_CacheEntriesList.empty()) {
    CacheEntriesNode& node = m_CacheEntriesList.front();
    for (CacheEntry& entry : node.entries) {
      DeallocateCache(&entry);
    }
    m_CacheEntriesList.pop_front();
    delete &node;
  }
  m_pBufferManager = nullptr;
  AllocationTableStorage::Finalize();
}

void BufferedAllocationTableStorage::DeallocateCache(CacheEntry* entry) {
  if (entry->address != 0) {
    m_pBufferManager->DeallocateBuffer(entry->address, entry->size);
  }
  else if (entry->handle != 0) {
    const IBufferManager::MemoryRange range =
      m_pBufferManager->AcquireCache(entry->handle);
    if (range.first != 0) {
      m_pBufferManager->DeallocateBuffer(range.first, range.second);
    }
  }
  entry->address = 0;
  entry->size = 0;
  entry->offset = -1;
  entry->handle = 0;
}

void BufferedAllocationTableStorage::AcquireCacheBuffer(CacheEntry* entry) {
  if (entry->address == 0) {
    const IBufferManager::MemoryRange range =
      m_pBufferManager->AcquireCache(entry->handle);
    if (range.first != 0) {
      entry->address = range.first;
      entry->size = range.second;
      entry->handle = 0;
    }
    else {
      entry->offset = -1;
      entry->handle = 0;
      entry->address = 0;
      entry->size = 0;
    }
  }
}

void BufferedAllocationTableStorage::ExtendCacheLife(
  const CacheEntriesList::iterator& iterator, int index) {
  CacheEntriesList::iterator current = iterator;
  if (current == m_CacheEntriesList.begin()) {
    return;
  }
  const CacheEntry entry = current->entries[index];
  do {
    CacheEntriesList::iterator next = current;
    --current;
    next->entries[index] = current->entries[index];
  } while (current != m_CacheEntriesList.begin());
  current->entries[index] = entry;
}

Result BufferedAllocationTableStorage::Write(int64_t offset,
  const void* buffer, size_t size) {
  if (!m_CacheEntriesList.empty()) {
    UpdateCache(offset, buffer, size);
  }
  const Result result = AllocationTableStorage::Write(offset, buffer, size);
  if (result.IsFailure()) {
    InvalidateCacheRange(offset, size);
  }
  return result;
}

// Copies the written range into the cached blocks it covers and keeps those
// blocks alive.
void BufferedAllocationTableStorage::UpdateCache(int64_t offset,
  const void* buffer, size_t size) {
  const int64_t end = offset + static_cast<int64_t>(size);
  if (offset >= end || m_CacheEntriesList.empty()) {
    return;
  }
  const uint32_t shift = m_BlockSizeShift;
  const int64_t blockSize = int64_t{1} << shift;
  const char* source = static_cast<const char*>(buffer) - offset;
  int64_t current = offset;
  do {
    const int64_t blockOffset = current & -blockSize;
    const int index = static_cast<int>((current >> shift) &
      (CacheEntryCountPerNode - 1));
    for (CacheEntriesList::iterator it = m_CacheEntriesList.begin();
      it != m_CacheEntriesList.end(); ++it) {
      CacheEntry* entry = &it->entries[index];
      if (entry->offset != blockOffset) {
        continue;
      }
      AcquireCacheBuffer(entry);
      if (entry->address != 0) {
        const int64_t copyEnd = blockOffset + blockSize < end ?
          blockOffset + blockSize : end;
        memcpy(reinterpret_cast<char*>(entry->address) + current -
          entry->offset, source + current, copyEnd - current);
        ExtendCacheLife(it, index);
      }
      break;
    }
    current = blockOffset + blockSize;
  } while (current < end);
}

void BufferedAllocationTableStorage::InvalidateCache(int64_t offset,
  int64_t size) {
  InvalidateCacheRange(offset, size);
}

Result BufferedAllocationTableStorage::OperateRange(void* outBuffer,
  size_t outBufferSize, OperationId operationId, int64_t offset,
  int64_t size, const void* inBuffer, size_t inBufferSize) {
  if (operationId == OperationId_Invalidate) {
    for (CacheEntriesNode& node : m_CacheEntriesList) {
      for (int i = CacheEntryCountPerNode - 1; i >= 0; --i) {
        CacheEntry* entry = &node.entries[i];
        if (entry->offset != -1) {
          DeallocateCache(entry);
        }
      }
    }
  }
  return AllocationTableStorage::OperateRange(outBuffer, outBufferSize,
    operationId, offset, size, inBuffer, inBufferSize);
}

void BufferedAllocationTableStorage::EnterHoldingCacheSection() {
  ++m_HoldingCacheSectionCount;
}

// Leaving the last section hands every held buffer back to the buffer
// manager as a cache that may be reclaimed.
void BufferedAllocationTableStorage::LeaveHoldingCacheSection() {
  if (--m_HoldingCacheSectionCount != 0) {
    return;
  }
  for (CacheEntriesNode& node : m_CacheEntriesList) {
    for (CacheEntry& entry : node.entries) {
      if (entry.address != 0) {
        entry.handle = m_pBufferManager->RegisterCache(entry.address,
          entry.size, IBufferManager::BufferAttribute());
        entry.address = 0;
        entry.size = 0;
      }
    }
  }
}

// Reads whole blocks through the cache. A block missing from the cache takes
// a free entry, a new node or else the entry of the oldest node, and is read
// directly when no buffer can be allocated for it.
Result BufferedAllocationTableStorage::Read(int64_t offset, void* buffer,
  size_t size) {
  if (m_CacheEntriesList.empty()) {
    return AllocationTableStorage::Read(offset, buffer, size);
  }
  const int64_t end = offset + static_cast<int64_t>(size);
  if (offset >= end) {
    return ResultSuccess();
  }
  const uint32_t shift = m_BlockSizeShift;
  const int64_t blockSize = int64_t{1} << shift;
  char* destination = static_cast<char*>(buffer) - offset;
  int64_t current = offset;
  do {
    const int64_t blockOffset = current & -blockSize;
    const size_t readSize = blockOffset + blockSize - current < end - current ?
      blockOffset + blockSize - current : end - current;
    const int index = static_cast<int>((blockOffset >> shift) &
      (CacheEntryCountPerNode - 1));

    bool isCached = false;
    CacheEntriesList::iterator it = m_CacheEntriesList.begin();
    for (; it != m_CacheEntriesList.end(); ++it) {
      if (it->entries[index].offset == blockOffset) {
        break;
      }
    }
    if (it != m_CacheEntriesList.end()) {
      AcquireCacheBuffer(&it->entries[index]);
      isCached = it->entries[index].address != 0;
    }
    else {
      for (it = m_CacheEntriesList.begin(); it != m_CacheEntriesList.end();
        ++it) {
        if (it->entries[index].offset == -1) {
          break;
        }
      }
      if (it == m_CacheEntriesList.end()) {
        it = AllocateCacheEntries();
        if (it == m_CacheEntriesList.end()) {
          --it;
          CacheEntry* entry = &it->entries[index];
          AcquireCacheBuffer(entry);
          if (entry->address != 0) {
            entry->offset = blockOffset;
          }
        }
      }
    }

    CacheEntry* entry = &it->entries[index];
    if (!isCached) {
      if (entry->address == 0) {
        const IBufferManager::MemoryRange range =
          m_pBufferManager->AllocateBuffer(blockSize,
            IBufferManager::BufferAttribute());
        if (range.first == 0) {
          NN_FS_RESULT_DO(AllocationTableStorage::Read(current,
            destination + current, readSize));
          current += readSize;
          continue;
        }
        entry->address = range.first;
        entry->size = range.second;
        entry->offset = blockOffset;
        entry->handle = 0;
      }
      const Result result = AllocationTableStorage::Read(blockOffset,
        reinterpret_cast<void*>(entry->address), blockSize);
      if (result.IsFailure()) {
        DeallocateCache(entry);
        return result;
      }
    }
    memcpy(destination + current, reinterpret_cast<char*>(entry->address) +
      current - blockOffset, readSize);
    ExtendCacheLife(it, index);
    current += readSize;
  } while (current < end);
  return ResultSuccess();
}

}
