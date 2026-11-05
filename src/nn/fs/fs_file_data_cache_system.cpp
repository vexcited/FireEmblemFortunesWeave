#include <string.h>

#include <mutex>
#include <utility>

#include "nn/diag/diag_abort.hpp"
#include "nn/fs/detail/fs_file_data_cache.hpp"

namespace nn::fs::detail {

namespace {

const size_t ReplacementListSizeMax = 72;
const size_t PrefetchSizeMax = 96;
const size_t PageRegionPoolSize = 0x1020;
const size_t PageCostSize = FileDataCacheSystem::PageSize + 0x68;
const size_t HashBucketSize = 16;
const size_t SmallPageCountMax = 16;

size_t GetHashBucketCount(size_t pageCount) {
  if (pageCount <= SmallPageCountMax) {
    return 1;
  }
  return (static_cast<size_t>(1) << (64 - __builtin_clzll(pageCount - 1))) /
    32;
}

}

[[gnu::noinline]] void FileDataCacheSystem::ReplacementList::Finalize() {
  m_EntryList.clear();
  m_FreeEntryList.clear();
  if (m_pBuckets != nullptr) {
    for (int i = 0; i < m_BucketCount; ++i) {
      m_pBuckets[i].clear();
    }
    m_BucketCount = 0;
    m_pBuckets = nullptr;
  }
  if (m_pEntries != nullptr) {
    m_EntryCount = 0;
    m_FreeEntryCount = 0;
    m_pEntries = nullptr;
  }
}

FileDataCacheSystem::FileDataCacheSystem()
  : m_pCacheBuffer(nullptr), m_pPages(nullptr), m_PageCount(0),
    m_FreePageCount(0), m_ReservedPageCount(0) {
  os::InitializeLightEvent(&m_Event, false, os::EventClearMode_AutoClear);
  os::InitializeReaderWriterLock(&m_Lock);
}

FileDataCacheSystem::~FileDataCacheSystem() {
  Finalize();
  os::FinalizeReaderWriterLock(&m_Lock);
  os::FinalizeLightEvent(&m_Event);
}

void FileDataCacheSystem::Finalize() {
  if (m_pCacheBuffer == nullptr) {
    return;
  }
  m_ReservedPageRegionList.clear();
  m_FreePageRegionList.clear();
  m_UnusedPageRegionList.clear();
  m_ReservedPageCount = 0;
  m_PageCount = 0;
  m_FreePageCount = 0;
  m_pPageRegions = nullptr;
  m_pCacheBuffer = nullptr;
  m_pPages = nullptr;
  m_pReplacementList->Finalize();
  m_pReplacementList = nullptr;
  if (m_pPrefetcher != nullptr) {
    m_pPrefetcher->Finalize();
    m_pPrefetcher = nullptr;
  }
}

Result FileDataCacheSystem::CalculateAvailableCount(size_t* outPageCount,
  size_t* outHashCount, size_t bufferSize) {
  NN_FS_RESULT_THROW_UNLESS(
    bufferSize >= ReplacementListSizeMax + PrefetchSizeMax,
    ResultFileDataCacheMemorySizeTooSmall());
  size_t restSize = bufferSize - ReplacementListSizeMax - PrefetchSizeMax;
  NN_FS_RESULT_THROW_UNLESS(restSize >= PageRegionPoolSize,
    ResultFileDataCacheMemorySizeTooSmall());
  restSize -= PageRegionPoolSize;
  const size_t estimatedPageCount = restSize / PageCostSize;
  restSize -= GetHashBucketCount(estimatedPageCount) * HashBucketSize;
  const size_t pageCount = restSize / PageCostSize;
  const size_t hashCount = GetHashBucketCount(pageCount);
  NN_FS_RESULT_THROW_UNLESS(pageCount > 0 && hashCount > 0,
    ResultFileDataCacheMemorySizeTooSmall());
  *outPageCount = pageCount;
  *outHashCount = hashCount;
  return ResultSuccess();
}

size_t FileDataCacheSystem::GetMaximumMemorySizeReplacementList() {
  return ReplacementListSizeMax;
}

size_t FileDataCacheSystem::GetMaximumMemorySizePrefetch() {
  return PrefetchSizeMax;
}

char* FileDataCacheSystem::GetCacheOfIndex(int index) const {
  return m_pCacheBuffer + static_cast<int64_t>(index) * PageSize;
}

FileDataCacheSystem::Page* FileDataCacheSystem::GetPageOfIndex(
  int index) const {
  return &m_pPages[index];
}

int FileDataCacheSystem::GetIndexOfCache(void* cache) const {
  return static_cast<int>((reinterpret_cast<uintptr_t>(cache) -
    reinterpret_cast<uintptr_t>(m_pCacheBuffer)) / PageSize);
}

int FileDataCacheSystem::GetIndexOfPage(Page* page) const {
  return static_cast<int>((reinterpret_cast<uintptr_t>(page) -
    reinterpret_cast<uintptr_t>(m_pPages)) / sizeof(Page));
}

FileDataCacheSystem::Page* FileDataCacheSystem::GetForwardPointer(
  Page* page) const {
  const int index = static_cast<int>(
    (reinterpret_cast<uintptr_t>(page->cache) -
      reinterpret_cast<uintptr_t>(m_pCacheBuffer)) / PageSize);
  return &m_pPages[index];
}

int FileDataCacheSystem::GetMaxAllocatableConsecutivePageCount() const {
  if (m_ReservedPageRegionList.empty()) {
    return m_PageCount;
  }
  int maxCount = 0;
  int nextIndex = 0;
  for (auto& region :
    const_cast<PageRegionList&>(m_ReservedPageRegionList)) {
    const int count = region.index - nextIndex;
    if (maxCount <= count) {
      maxCount = count;
    }
    nextIndex = region.index + region.count;
  }
  const int count = m_PageCount - nextIndex;
  return maxCount <= count ? count : maxCount;
}

inline void FileDataCacheSystem::GetMaxAllocatableConsecutivePageRegionImpl(
  int* outIndex, int* outCount) const {
  if (m_ReservedPageRegionList.empty()) {
    *outIndex = 0;
    *outCount = m_PageCount;
    return;
  }
  int maxIndex = 0;
  int maxCount = 0;
  int nextIndex = 0;
  for (auto& region :
    const_cast<PageRegionList&>(m_ReservedPageRegionList)) {
    const int count = region.index - nextIndex;
    if (maxCount < count) {
      maxCount = count;
      maxIndex = nextIndex;
    }
    nextIndex = region.index + region.count;
  }
  const int count = m_PageCount - nextIndex;
  if (maxCount < count) {
    *outIndex = nextIndex;
    *outCount = count;
  }
  else {
    *outIndex = maxIndex;
    *outCount = maxCount;
  }
}

void FileDataCacheSystem::GetMaxAllocatableConsecutivePageRegion(
  int* outIndex, int* outCount) const {
  GetMaxAllocatableConsecutivePageRegionImpl(outIndex, outCount);
}

char* FileDataCacheSystem::ReserveFreePages(IStorage* storage,
  int64_t offset, size_t size) {
  NN_ABORT_UNLESS(size <= static_cast<size_t>(static_cast<int64_t>(
    m_pReplacementList->GetTotalEntryCount()) * PageSize));
  if (size == 0) {
    return nullptr;
  }
  if (size == PageSize) {
    return ReserveFreePagesBySinglePageReservation(storage, offset, size);
  }
  return ReserveFreePagesByGatherCompaction(storage, offset, size);
}

void FileDataCacheSystem::ReturnBackReservedPages(void* cache, size_t size) {
  static_cast<void>(size);
  const int index = GetIndexOfCache(cache);
  auto it = m_ReservedPageRegionList.begin();
  for (; it != m_ReservedPageRegionList.end(); ++it) {
    if (it->index == index) {
      break;
    }
  }
  NN_ABORT_UNLESS(it != m_ReservedPageRegionList.end());
  PageRegion& region = *it;
  PageRegionList::erase(region);
  m_ReservedPageCount -= region.count;
  auto position = m_FreePageRegionList.begin();
  for (; position != m_FreePageRegionList.end(); ++position) {
    if (region.index < position->index) {
      break;
    }
  }
  m_FreePageRegionList.insert(position, region);
  m_FreePageCount += region.count;
}

void FileDataCacheSystem::AddPageRegionToSortedList(PageRegion& region,
  PageRegionList& list) {
  auto position = list.begin();
  for (; position != list.end(); ++position) {
    if (region.index < position->index) {
      break;
    }
  }
  list.insert(position, region);
}

void FileDataCacheSystem::MovePage(Page* destination, Page* source) {
  if (destination == source) {
    return;
  }
  memcpy(destination->cache, source->cache, PageSize);
  std::swap(destination->cache, source->cache);
  std::swap(GetForwardPointer(destination)->link,
    GetForwardPointer(source)->link);
}

void FileDataCacheSystem::Purge(IStorage* storage) {
  os::AcquireWriteLock(&m_Lock);
  ReplacementList* list = m_pReplacementList;
  auto& entries = list->GetEntryList();
  for (auto it = entries.begin(); it != entries.end();) {
    auto& entry = *it;
    ++it;
    if (entry.storage == storage) {
      AddFreePage(entry.page);
      list->Release(entry);
    }
  }
  os::ReleaseWriteLock(&m_Lock);
}

bool FileDataCacheSystem::ShouldPerformCoalescedRead(const FileRegion& region,
  const FileRegion& other) {
  const int64_t start = other.offset < region.offset
    ? other.offset : region.offset;
  const int64_t regionEnd = region.offset + region.size;
  const int64_t otherEnd = other.offset + other.size;
  const int64_t end = regionEnd > otherEnd ? regionEnd : otherEnd;
  const int64_t span = end - start;
  NN_ABORT_UNLESS(span >= 0);
  const int64_t totalSize = other.size + region.size;
  const int64_t gapSize = span - totalSize;
  int64_t thresholdSize;
  if (totalSize < 16 * 1024) {
    thresholdSize = totalSize * 2 / 3;
  }
  else if (totalSize < 64 * 1024) {
    thresholdSize = totalSize / 2;
  }
  else if (totalSize < 128 * 1024) {
    thresholdSize = totalSize * 2 / 5;
  }
  else {
    thresholdSize = totalSize / 10;
  }
  return gapSize < thresholdSize;
}

void FileDataCacheSystem::AddFreePage(Page* page) {
  const int index = GetIndexOfCache(page->cache);
  PageRegion* merged = nullptr;
  for (auto& region : m_FreePageRegionList) {
    if (region.index == index + 1) {
      region.index = index;
      ++region.count;
      ++m_FreePageCount;
      merged = &region;
      break;
    }
    if (region.index + region.count == index) {
      ++region.count;
      ++m_FreePageCount;
      merged = &region;
      break;
    }
  }

  if (merged == nullptr) {
    PageRegion& region = m_UnusedPageRegionList.front();
    m_UnusedPageRegionList.pop_front();
    region.index = index;
    region.count = 1;
    auto position = m_FreePageRegionList.begin();
    for (; position != m_FreePageRegionList.end(); ++position) {
      if (region.index < position->index) {
        break;
      }
    }
    m_FreePageRegionList.insert(position, region);
    ++m_FreePageCount;
    return;
  }

  while (merged != &m_FreePageRegionList.front()) {
    auto previous = m_FreePageRegionList.iterator_to(*merged);
    --previous;
    PageRegion& region = *previous;
    if (region.index + region.count != merged->index) {
      break;
    }
    merged->index = region.index;
    merged->count += region.count;
    if (previous != m_FreePageRegionList.end()) {
      PageRegionList::erase(region);
    }
    m_UnusedPageRegionList.push_front(region);
  }

  auto next = m_FreePageRegionList.iterator_to(*merged);
  ++next;
  while (next != m_FreePageRegionList.end()) {
    PageRegion& region = *next;
    if (merged->index + merged->count != region.index) {
      break;
    }
    merged->count += region.count;
    ++next;
    PageRegionList::erase(region);
    m_UnusedPageRegionList.push_front(region);
  }
}

void FileDataCacheSystem::DoCompaction() {
  int startIndex = 0;
  int count = 0;
  GetMaxAllocatableConsecutivePageRegionImpl(&startIndex, &count);

  PageRegion* largest = nullptr;
  PageRegion* largestInside = nullptr;
  for (auto& region : m_FreePageRegionList) {
    if (largest == nullptr || largest->count < region.count) {
      largest = &region;
    }
    if (startIndex <= region.index &&
      region.index + region.count <= startIndex + count &&
      (largestInside == nullptr || largestInside->count < region.count)) {
      largestInside = &region;
    }
  }
  if (largest == largestInside) {
    DoCompactionCore(largest, startIndex, startIndex + count);
    return;
  }

  int lowerIndex = 0;
  for (auto& region : m_ReservedPageRegionList) {
    if (region.index > largest->index) {
      break;
    }
    lowerIndex = region.index + region.count;
  }
  int upperIndex = m_PageCount;
  const int largestEnd = largest->index + largest->count;
  for (auto& region : m_ReservedPageRegionList) {
    if (region.index + region.count >= largestEnd) {
      upperIndex = region.index;
      break;
    }
  }
  if (m_FreePageCount > upperIndex - lowerIndex) {
    DoCompactionCore(largestInside, startIndex, startIndex + count);
  }
  else {
    DoCompactionCore(largest, lowerIndex, upperIndex);
  }
}

char* FileDataCacheSystem::ReserveFreePagesBySinglePageReservation(
  IStorage* storage, int64_t offset, size_t size) {
  const int pageCount = static_cast<int>(size / PageSize);
  while (true) {
    ReplacementList* list = m_pReplacementList;
    if (ReplacementList::Entry* entry = list->Find(storage, offset)) {
      list->Release(*entry);
      AddFreePage(entry->page);
    }
    if (m_FreePageCount < pageCount && !m_pReplacementList->IsEmpty()) {
      AddFreePage(m_pReplacementList->Evict());
    }
    if (m_FreePageCount >= pageCount) {
      break;
    }
    // Waits for pages committed or returned by other readers.
    os::ReleaseWriteLock(&m_Lock);
    os::WaitLightEvent(&m_Event);
    os::AcquireWriteLock(&m_Lock);
  }

  PageRegion& freeRegion = m_FreePageRegionList.front();
  const int index = freeRegion.index;
  ++freeRegion.index;
  --freeRegion.count;
  if (freeRegion.count == 0) {
    if (m_FreePageRegionList.iterator_to(freeRegion) !=
      m_FreePageRegionList.end()) {
      PageRegionList::erase(freeRegion);
    }
    m_UnusedPageRegionList.push_front(freeRegion);
  }
  --m_FreePageCount;

  PageRegion& region = m_UnusedPageRegionList.front();
  m_UnusedPageRegionList.pop_front();
  region.index = index;
  region.count = pageCount;
  auto position = m_ReservedPageRegionList.begin();
  for (; position != m_ReservedPageRegionList.end(); ++position) {
    if (region.index < position->index) {
      break;
    }
  }
  m_ReservedPageRegionList.insert(position, region);
  m_ReservedPageCount += pageCount;
  return GetCacheOfIndex(index);
}

void FileDataCacheSystem::CommitCachePages(IStorage* storage, void* cache,
  int64_t offset, size_t size) {
  const int64_t end = offset + static_cast<int64_t>(size);
  for (int64_t current = offset; current < end; current += PageSize) {
    ReplacementList* list = m_pReplacementList;
    Page* page = static_cast<Page*>(GetPageOfIndex(GetIndexOfCache(
      static_cast<char*>(cache) + (current - offset)))->link);
    if (ReplacementList::Entry* entry = list->Find(storage, current)) {
      list->Touch(entry);
      AddFreePage(page);
    }
    else {
      list->Register(storage, current, page);
    }
  }
  if (size == 0) {
    return;
  }
  const int index = GetIndexOfCache(cache);
  auto it = m_ReservedPageRegionList.begin();
  for (; it != m_ReservedPageRegionList.end(); ++it) {
    if (it->index == index) {
      break;
    }
  }
  NN_ABORT_UNLESS(it != m_ReservedPageRegionList.end());
  PageRegion& region = *it;
  PageRegionList::erase(region);
  m_ReservedPageCount -= region.count;
  m_UnusedPageRegionList.push_front(region);
  os::SignalLightEvent(&m_Event);
}

void FileDataCacheSystem::DoCopy(IStorage* storage, void* buffer,
  const FileRegion& cacheRegion, const FileRegion& bufferRegion,
  FileDataCacheSystemAccessResult* outResult) {
  static_cast<void>(outResult);
  const int64_t bufferStart = bufferRegion.offset;
  const int64_t bufferEnd = bufferRegion.offset + bufferRegion.size;
  for (int64_t offset = cacheRegion.offset;
    offset < cacheRegion.offset + cacheRegion.size; offset += PageSize) {
    ReplacementList::Entry* entry;
    {
      std::lock_guard<os::SdkMutex> lock(m_Mutex);
      entry = m_pReplacementList->Find(storage, offset);
    }
    const int64_t pageEnd = offset + static_cast<int64_t>(PageSize);
    if (bufferEnd >= offset && pageEnd >= bufferStart) {
      const int64_t copyStart = bufferStart > offset ? bufferStart : offset;
      const int64_t copyEnd = pageEnd < bufferEnd ? pageEnd : bufferEnd;
      NN_ABORT_UNLESS(copyEnd - copyStart >= 0);
      if (copyEnd != copyStart) {
        memcpy(static_cast<char*>(buffer) + (copyStart - bufferStart),
          entry->page->cache + (copyStart - offset), copyEnd - copyStart);
      }
    }
    {
      std::lock_guard<os::SdkMutex> lock(m_Mutex);
      m_pReplacementList->Touch(entry);
    }
  }
}

}
