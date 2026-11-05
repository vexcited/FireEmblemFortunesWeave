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

void BufferedAllocationTableStorage::EnterHoldingCacheSection() {
  ++m_HoldingCacheSectionCount;
}

}
