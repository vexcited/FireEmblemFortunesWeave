#pragma once

#include <stdint.h>

#include "nn/fs/dbm/fs_dbm_allocation_table.hpp"
#include "nn/fs/dbm/fs_dbm_allocation_table_storage.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_ibuffer_manager.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::fs::dbm {

class BufferedAllocationTableStorage : public AllocationTableStorage {
public:
  struct CacheEntry {
    uintptr_t address;
    size_t size;
    int64_t offset;
    IBufferManager::CacheHandle handle;
  };

  static const int CacheEntryCountPerNode = 16;
  static const int CacheEntriesNodeCountMax = 8;

  struct CacheEntriesNode : public fs::detail::Newable,
    public util::IntrusiveListBaseNode<CacheEntriesNode> {
    CacheEntriesNode() {
      for (CacheEntry& entry : entries) {
        entry.address = 0;
        entry.size = 0;
        entry.offset = -1;
        entry.handle = 0;
      }
    }

    CacheEntry entries[CacheEntryCountPerNode];
  };

  typedef util::IntrusiveList<CacheEntriesNode,
    util::IntrusiveListBaseNodeTraits<CacheEntriesNode, CacheEntriesNode>>
    CacheEntriesList;

  class ScopedHoldingCacheSection {
  public:
    explicit ScopedHoldingCacheSection(BufferedAllocationTableStorage* storage)
      : m_pStorage(storage) {
      m_pStorage->EnterHoldingCacheSection();
    }

    ~ScopedHoldingCacheSection() {
      m_pStorage->LeaveHoldingCacheSection();
    }

  private:
    BufferedAllocationTableStorage* m_pStorage;
  };

  BufferedAllocationTableStorage();
  ~BufferedAllocationTableStorage() override;

  Result Read(int64_t offset, void* buffer, size_t size) override;
  Result Write(int64_t offset, const void* buffer, size_t size) override;
  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

  Result InitializeBuffered(AllocationTable* allocationTable,
    uint32_t startIndex, int64_t blockSize, SubStorage dataStorage,
    IBufferManager* bufferManager);
  void Finalize() override;

  void EnterHoldingCacheSection();
  void LeaveHoldingCacheSection();

private:
  CacheEntriesList::iterator AllocateCacheEntries();
  void DeallocateCache(CacheEntry* entry);
  void AcquireCacheBuffer(CacheEntry* entry);
  void ExtendCacheLife(const CacheEntriesList::iterator& iterator, int index);
  void UpdateCache(int64_t offset, const void* buffer, size_t size);
  void InvalidateCache(int64_t offset, int64_t size);

  [[gnu::always_inline]] void InvalidateCacheRange(int64_t offset,
    int64_t size) {
    const int64_t end = offset + size;
    const int64_t blockSize = int64_t{1} << m_BlockSizeShift;
    for (CacheEntriesNode& node : m_CacheEntriesList) {
      for (int i = CacheEntryCountPerNode - 1; i >= 0; --i) {
        CacheEntry* entry = &node.entries[i];
        if (entry->offset != -1 && offset < entry->offset + blockSize &&
          entry->offset < end) {
          DeallocateCache(entry);
        }
      }
    }
  }

  CacheEntriesList m_CacheEntriesList;
  int m_HoldingCacheSectionCount;
  IBufferManager* m_pBufferManager;
};

}
