#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_file.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"
#include "nn/os/light_event.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::fs {

enum ReplacementAlgorithm {
  ReplacementAlgorithm_Default,
};

enum PrefetchAlgorithm {
  PrefetchAlgorithm_Default,
};

constexpr Result ResultFileDataCacheMemorySizeTooSmall() {
  return detail::MakeResult(6102);
}

constexpr Result ResultGlobalFileDataCacheAlreadyEnabled() {
  return detail::MakeResult(6462);
}

constexpr Result ResultDefaultGlobalFileDataCacheEnabled() {
  return detail::MakeResult(6466);
}

}

namespace nn::fs::detail {

struct FileDataCacheAccessResult {
  char reserved[136];
  bool isReadSkipped;
};

class IFileDataCache {
public:
  virtual ~IFileDataCache() {}

  virtual void Purge(IStorage* storage) = 0;
  virtual void Finalize() = 0;

  Result Read(fsa::IFile* file, size_t* outSize, int64_t offset,
    void* buffer, size_t size, const ReadOption& option,
    FileDataCacheAccessResult* outResult) {
    return DoRead(file, outSize, offset, buffer, size, option, outResult);
  }

private:
  virtual Result DoRead(fsa::IFile* file, size_t* outSize, int64_t offset,
    void* buffer, size_t size, const ReadOption& option,
    FileDataCacheAccessResult* outResult) = 0;
};

struct FileRegion {
  int64_t offset;
  int64_t size;
};

class FileDataCacheSystem {
public:
  static const size_t PageSize = 0x4000;

  struct Page {
    char* cache;
    void* link;
  };

  struct PageRegion : public util::IntrusiveListBaseNode<PageRegion> {
    int index;
    int count;
  };

  using PageRegionList = util::IntrusiveList<PageRegion,
    util::IntrusiveListBaseNodeTraits<PageRegion>>;

  class ReplacementList {
  public:
    struct HashTag {};

    struct Entry : public util::IntrusiveListBaseNode<Entry>,
      public util::IntrusiveListBaseNode<HashTag> {
      IStorage* storage;
      int64_t offset;
      Page* page;
    };

    using EntryList = util::IntrusiveList<Entry,
      util::IntrusiveListBaseNodeTraits<Entry>>;
    using HashBucket = util::IntrusiveList<Entry,
      util::IntrusiveListBaseNodeTraits<Entry, HashTag>>;

    virtual void Reserved0() = 0;
    virtual void Reserved1() = 0;
    virtual void Register(IStorage* storage, int64_t offset, Page* page) = 0;
    virtual void Touch(Entry* entry) = 0;
    virtual Page* Evict() = 0;

    void Finalize();

    bool IsEmpty() const {
      return m_EntryCount == 0;
    }

    Entry* Find(IStorage* storage, int64_t offset) {
      for (auto& entry : GetBucket(offset)) {
        if (entry.storage == storage && entry.offset == offset) {
          return &entry;
        }
      }
      return nullptr;
    }

    int GetTotalEntryCount() const {
      return m_EntryCount + m_FreeEntryCount;
    }

    HashBucket& GetBucket(int64_t offset) {
      return m_pBuckets[static_cast<int>(
        static_cast<uint64_t>(offset) / PageSize) & (m_BucketCount - 1)];
    }

    EntryList& GetEntryList() {
      return m_EntryList;
    }

    void Release(Entry& entry) {
      if (m_EntryList.iterator_to(entry) != m_EntryList.end()) {
        EntryList::erase(entry);
      }
      --m_EntryCount;
      m_FreeEntryList.push_front(entry);
      ++m_FreeEntryCount;
      HashBucket& bucket = GetBucket(entry.offset);
      auto it = bucket.iterator_to(entry);
      if (it != bucket.end()) {
        HashBucket::erase(*it);
      }
    }

  private:
    int m_EntryCount;
    int m_FreeEntryCount;
    int m_BucketCount;
    Entry* m_pEntries;
    EntryList m_EntryList;
    EntryList m_FreeEntryList;
    HashBucket* m_pBuckets;
  };

  struct FileDataCacheSystemAccessResult;

  class Prefetcher {
  public:
    virtual void Reserved0() = 0;
    virtual void Reserved1() = 0;
    virtual void Reserved2() = 0;
    virtual void Finalize() = 0;
  };

  FileDataCacheSystem();
  ~FileDataCacheSystem();

  Result Initialize(void* buffer, size_t bufferSize,
    ReplacementAlgorithm replacementAlgorithm,
    PrefetchAlgorithm prefetchAlgorithm);
  void Finalize();
  Result Read(IStorage* storage, int64_t offset, void* buffer, size_t size,
    int64_t fileStart, int64_t fileEnd,
    FileDataCacheAccessResult* outResult);
  void Purge(IStorage* storage);

  static Result CalculateAvailableCount(size_t* outPageCount,
    size_t* outHashCount, size_t bufferSize);
  static size_t GetMaximumMemorySizeReplacementList();
  static size_t GetMaximumMemorySizePrefetch();

  char* GetCacheOfIndex(int index) const;
  Page* GetPageOfIndex(int index) const;
  int GetIndexOfCache(void* cache) const;
  int GetIndexOfPage(Page* page) const;
  Page* GetForwardPointer(Page* page) const;
  int GetMaxAllocatableConsecutivePageCount() const;
  void GetMaxAllocatableConsecutivePageRegion(int* outIndex,
    int* outCount) const;

  char* ReserveFreePages(IStorage* storage, int64_t offset, size_t size);
  char* ReserveFreePagesBySinglePageReservation(IStorage* storage,
    int64_t offset, size_t size);
  char* ReserveFreePagesByGatherCompaction(IStorage* storage,
    int64_t offset, size_t size);
  void CommitCachePages(IStorage* storage, void* cache, int64_t offset,
    size_t size);
  void ReturnBackReservedPages(void* cache, size_t size);
  void AddPageRegionToSortedList(PageRegion& region, PageRegionList& list);
  void MovePage(Page* destination, Page* source);
  void AddFreePage(Page* page);
  void DoCopy(IStorage* storage, void* buffer, const FileRegion& cacheRegion,
    const FileRegion& bufferRegion,
    FileDataCacheSystemAccessResult* outResult);
  void DoCompaction();
  void DoCompactionCore(PageRegion* region, int startIndex, int endIndex);
  bool ShouldPerformCoalescedRead(const FileRegion& region,
    const FileRegion& other);

private:
  void GetMaxAllocatableConsecutivePageRegionImpl(int* outIndex,
    int* outCount) const;

  char* m_pCacheBuffer;
  Page* m_pPages;
  ReplacementList* m_pReplacementList;
  Prefetcher* m_pPrefetcher;
  int m_PageCount;
  int m_FreePageCount;
  int m_ReservedPageCount;
  PageRegion* m_pPageRegions;
  PageRegionList m_UnusedPageRegionList;
  PageRegionList m_FreePageRegionList;
  PageRegionList m_ReservedPageRegionList;
  os::LightEventType m_Event;
  uint32_t m_EventReserved;
  os::SdkMutex m_Mutex;
  os::ReaderWriterLockType m_Lock;
};

static_assert(sizeof(FileDataCacheSystem) == 168);

class FileDataCacheAccessor {
public:
  explicit FileDataCacheAccessor(IFileDataCache* cache);

  Result Read(fsa::IFile* file, size_t* outSize, int64_t offset,
    void* buffer, size_t size, const ReadOption& option,
    FileDataCacheAccessResult* outResult);
  void Purge(IStorage* storage);

private:
  IFileDataCache* m_pCache;
};

}
