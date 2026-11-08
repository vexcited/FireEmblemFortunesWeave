#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
  NvError_InsufficientMemory = 6,
  NvError_Overflow = 17,
};

enum NvRmSyncType : uint32_t {
  NvRmSyncType_Empty = 1,
  NvRmSyncType_Fd = 2,
  NvRmSyncType_Syncpoints = 3,
  NvRmSyncType_Semaphores = 4,
};

struct NvRmSync;

struct NvRmSyncInfo {
  uint32_t type;
  uint32_t reserved[3];
};

struct NvRmSyncOps {
  NvRmSync* (*dup)(NvRmSync* sync);
  void (*release)(NvRmSync* sync);
  NvRmSync* (*merge)(NvRmSync* first, NvRmSync* second);
  NvError (*mergeInto)(NvRmSync* destination, NvRmSync* source);
  NvError (*wait)(NvRmSync* sync, int32_t timeout);
  void* reserved28;
  NvError (*getInfo)(NvRmSync* sync, NvRmSyncInfo* pOutInfo);
};

struct NvRmSyncPoint {
  uint32_t id;
  uint32_t value;
};

struct NvRmSyncPointEntry {
  NvRmSyncPoint point;
  uint32_t reserved[4];
};

struct NvRmSync {
  const NvRmSyncOps* ops;
  NvRmSyncType type;
  uint32_t syncpointCount;
  uint32_t inlineSyncpointCount;
  uint8_t isAllocated;
  NvRmSyncPointEntry* pExtraSyncpoints;
  uint32_t extraSyncpointCount;
  NvRmSyncPointEntry inlineSyncpoints[1];
};

// A sync is built in the given object or buffer when there is one.
struct NvRmSyncAttributes {
  uint64_t reserved;
  void* buffer;
  uint32_t bufferSize;
  NvRmSync* sync;
};

struct NvRmSyncFdAttributes {
  uint8_t closeFd;
};

extern "C" {

void* NvOsAlloc(uint64_t size);
void* NvOsRealloc(void* pointer, uint64_t size);
void NvOsFree(void* pointer);
int32_t NvRmChipGetPlatform();
NvError NvRmFenceGetFromFile(int32_t fd, NvRmSyncPoint* pOutSyncpoints,
  uint32_t* pCount);
NvError NvRmFencePutToFile(const char* name, const NvRmSyncPoint* syncpoints,
  uint32_t count, int32_t* pOutFd);
void sync_close(int32_t fd);

extern const NvRmSyncOps g_NvRmSyncSyncpointOps;

}

namespace {

const int32_t NvRmChipPlatform_Silicon = 1;
const int32_t NvRmSyncTimeout_Infinite = -1;
const uint32_t NvRmSyncFdMaxSyncpoints = 8;

[[gnu::always_inline]] inline void AppendSyncpoint(NvRmSync* sync,
  NvRmSyncPoint point) {
  sync->ops = &g_NvRmSyncSyncpointOps;
  const uint32_t index = sync->syncpointCount;
  sync->type = NvRmSyncType_Syncpoints;
  sync->syncpointCount = index + 1;

  const uint32_t inlineCount = sync->inlineSyncpointCount;
  NvRmSyncPointEntry* entry = index < inlineCount ?
    &sync->inlineSyncpoints[index] :
    &sync->pExtraSyncpoints[index - inlineCount];
  entry->point = point;
}

bool IsEmpty(const NvRmSync* sync) {
  return sync == nullptr || sync->type == NvRmSyncType_Empty;
}

// Releases the backend state, then frees the object or leaves it empty.
[[gnu::always_inline]] inline void Release(NvRmSync* sync) {
  sync->ops->release(sync);
  sync->ops = nullptr;
  sync->syncpointCount = 0;

  if (sync->pExtraSyncpoints != nullptr) {
    NvOsFree(sync->pExtraSyncpoints);
    sync->pExtraSyncpoints = nullptr;
    sync->extraSyncpointCount = 0;
  }

  if (sync->isAllocated != 0) {
    sync->type = static_cast<NvRmSyncType>(0);
    NvOsFree(sync);
    return;
  }

  sync->type = NvRmSyncType_Empty;
}

}

extern "C" NvRmSync* NvRmSyncDup(NvRmSync* sync) {
  if (sync == nullptr || sync->type == NvRmSyncType_Empty) {
    return nullptr;
  }

  return sync->ops->dup(sync);
}

extern "C" NvError NvRmSyncMergeInto(NvRmSync* destination,
  NvRmSync* source) {
  if (source == nullptr || source->type == NvRmSyncType_Empty) {
    return NvSuccess;
  }

  return source->ops->mergeInto(destination, source);
}

extern "C" bool NvRmSyncIsFd(NvRmSync* sync) {
  if (sync == nullptr) {
    return true;
  }

  return sync->type == NvRmSyncType_Empty || sync->type == NvRmSyncType_Fd;
}

extern "C" bool NvRmSyncIsSyncpoints(NvRmSync* sync) {
  if (sync == nullptr) {
    return true;
  }

  return sync->type == NvRmSyncType_Empty ||
    sync->type == NvRmSyncType_Syncpoints;
}

extern "C" bool NvRmSyncIsSemaphores(NvRmSync* sync) {
  if (sync == nullptr) {
    return true;
  }

  return sync->type == NvRmSyncType_Empty ||
    sync->type == NvRmSyncType_Semaphores;
}

extern "C" NvError NvRmSyncGetInfo(NvRmSync* sync, NvRmSyncInfo* pOutInfo) {
  *pOutInfo = {};
  if (sync == nullptr || sync->type == NvRmSyncType_Empty) {
    pOutInfo->type = NvRmSyncType_Empty;
    return NvSuccess;
  }

  return sync->ops->getInfo(sync, pOutInfo);
}

extern "C" uint32_t NvRmSyncCalculateSizeForInplaceSyncpoints(uint32_t count) {
  return count * sizeof(NvRmSyncPointEntry) + 40;
}

extern "C" [[gnu::noinline]] void NvRmSyncFreeSyncpoints(void* syncpoints) {
  NvOsFree(syncpoints);
}

extern "C" NvError NvRmSyncGetNumSyncpoints(NvRmSync* sync,
  uint32_t* pOutCount) {
  if (sync == nullptr) {
    *pOutCount = 0;
    return NvSuccess;
  }

  *pOutCount = sync->syncpointCount;
  return NvSuccess;
}

extern "C" NvError NvRmSyncExtractSyncpoint(NvRmSync* sync, uint32_t index,
  NvRmSyncPoint* pOutSyncpoint) {
  if (index >= sync->syncpointCount) {
    return NvError_BadParameter;
  }

  const uint32_t inlineCount = sync->inlineSyncpointCount;
  *pOutSyncpoint = index < inlineCount ?
    sync->inlineSyncpoints[index].point :
    sync->pExtraSyncpoints[index - inlineCount].point;
  return NvSuccess;
}

extern "C" NvError NvRmSyncDupInto(NvRmSync* destination, NvRmSync* source) {
  if (destination->type != NvRmSyncType_Empty) {
    Release(destination);
  }

  if (IsEmpty(source)) {
    return NvSuccess;
  }

  return source->ops->mergeInto(destination, source);
}

namespace {

[[gnu::always_inline]] inline void Close(NvRmSync* sync) {
  if (IsEmpty(sync)) {
    return;
  }

  Release(sync);
}

[[gnu::always_inline]] inline NvRmSync* Merge(NvRmSync* first,
  NvRmSync* second) {
  if (IsEmpty(first)) {
    if (IsEmpty(second)) {
      return nullptr;
    }

    return second->ops->dup(second);
  }

  if (IsEmpty(second)) {
    return first->ops->dup(first);
  }

  return first->ops->merge(first, second);
}

}

extern "C" [[gnu::noinline]] void NvRmSyncClose(NvRmSync* sync) {
  Close(sync);
}

extern "C" NvRmSync* NvRmSyncMerge(NvRmSync* first, NvRmSync* second) {
  return Merge(first, second);
}

extern "C" NvRmSync* NvRmSyncMergeAndClose(NvRmSync* first,
  NvRmSync* second) {
  NvRmSync* merged = Merge(first, second);
  Close(first);
  Close(second);
  return merged;
}

// Timeouts only apply on silicon, other platforms wait forever.
extern "C" NvError NvRmSyncWait(NvRmSync* sync, int32_t timeout) {
  if (IsEmpty(sync)) {
    return NvSuccess;
  }

  if (NvRmChipGetPlatform() != NvRmChipPlatform_Silicon && timeout != 0) {
    timeout = NvRmSyncTimeout_Infinite;
  }

  return sync->ops->wait(sync, timeout);
}

extern "C" bool NvRmSyncSignalSemaphore(NvRmSync* sync) {
  if (!IsEmpty(sync)) {
    NvRmChipGetPlatform();
    sync->ops->wait(sync, NvRmSyncTimeout_Infinite);
  }

  return true;
}

extern "C" [[gnu::noinline]] NvRmSyncPoint* NvRmSyncGetSyncpoints(
  NvRmSync* sync, uint32_t* pOutCount) {
  *pOutCount = 0;
  if (sync == nullptr) {
    return nullptr;
  }

  auto* syncpoints = static_cast<NvRmSyncPoint*>(
    NvOsAlloc(sync->syncpointCount * sizeof(NvRmSyncPoint)));
  if (syncpoints == nullptr) {
    return nullptr;
  }

  *pOutCount = sync->syncpointCount;
  for (uint64_t i = 0; i < sync->syncpointCount; i++) {
    const uint32_t inlineCount = sync->inlineSyncpointCount;
    syncpoints[i] = i < inlineCount ? sync->inlineSyncpoints[i].point :
      sync->pExtraSyncpoints[i - inlineCount].point;
  }

  return syncpoints;
}

// The object keeps every syncpoint inline and is freed by the close.
extern "C" [[gnu::noinline]] NvRmSync* NvRmSyncCreateFromSyncpoints(
  const NvRmSyncPoint* syncpoints, uint32_t count) {
  if (count == 0) {
    return nullptr;
  }

  const int64_t entries = static_cast<int32_t>(count);
  auto* sync = static_cast<NvRmSync*>(NvOsAlloc(
    entries * sizeof(NvRmSyncPointEntry) + 40));
  if (sync == nullptr) {
    return nullptr;
  }

  sync->syncpointCount = 0;
  sync->inlineSyncpointCount = count;
  sync->pExtraSyncpoints = nullptr;
  sync->isAllocated = 1;
  sync->extraSyncpointCount = 0;

  for (uint64_t i = 0; i < count; i++) {
    AppendSyncpoint(sync, syncpoints[i]);
  }

  return sync;
}

extern "C" NvRmSync* NvRmSyncCreateFromFd(int32_t fd) {
  uint32_t count = NvRmSyncFdMaxSyncpoints;
  if (fd < 0) {
    return nullptr;
  }

  NvRmSyncPoint syncpoints[NvRmSyncFdMaxSyncpoints] = {};
  if (NvRmFenceGetFromFile(fd, syncpoints, &count) != NvSuccess) {
    return nullptr;
  }

  return NvRmSyncCreateFromSyncpoints(syncpoints, count);
}

extern "C" NvError NvRmSyncCreateFromFdWithAttr(int32_t* pFd,
  const NvRmSyncFdAttributes* attributes, NvRmSync** pOutSync) {
  uint32_t count = NvRmSyncFdMaxSyncpoints;
  NvRmSync* sync = nullptr;

  if (pFd != nullptr) {
    const int32_t fd = *pFd;
    if (fd >= 0) {
      NvRmSyncPoint syncpoints[NvRmSyncFdMaxSyncpoints] = {};
      const NvError result = NvRmFenceGetFromFile(fd, syncpoints, &count);
      if (result != NvSuccess) {
        return result;
      }

      sync = NvRmSyncCreateFromSyncpoints(syncpoints, count);
      if (attributes->closeFd != 0) {
        sync_close(fd);
        *pFd = -1;
      }
    }
    else if (attributes->closeFd != 0) {
      *pFd = -1;
    }
  }

  *pOutSync = sync;
  return NvSuccess;
}

extern "C" int32_t NvRmSyncGetFd(NvRmSync* sync) {
  int32_t fd = 0;
  uint32_t count = 0;

  NvRmSyncPoint* syncpoints = NvRmSyncGetSyncpoints(sync, &count);
  if (syncpoints == nullptr) {
    return -1;
  }

  const NvError result = NvRmFencePutToFile("NvRmSyncGetFd", syncpoints,
    count, &fd);
  NvRmSyncFreeSyncpoints(syncpoints);
  return result == NvSuccess ? fd : -1;
}

extern "C" NvError NvRmSyncCreateFromSyncpointsWithAttr(
  const NvRmSyncPoint* syncpoints, uint32_t count,
  const NvRmSyncAttributes* attributes, NvRmSync** pOutSync) {
  NvRmSync* sync = nullptr;

  if (count != 0) {
    sync = attributes->sync;
    if (sync != nullptr) {
      if (sync->type != NvRmSyncType_Empty) {
        NvRmSyncClose(sync);
      }

      const uint32_t inlineCount = sync->inlineSyncpointCount;
      if (count > inlineCount &&
        count > inlineCount + sync->extraSyncpointCount) {
        const uint32_t extra = count - inlineCount;
        sync->extraSyncpointCount = extra;

        const int64_t size = static_cast<int64_t>(static_cast<int32_t>(extra)) *
          static_cast<int64_t>(sizeof(NvRmSyncPointEntry));
        if (sync->pExtraSyncpoints != nullptr) {
          sync->pExtraSyncpoints = static_cast<NvRmSyncPointEntry*>(
            NvOsRealloc(sync->pExtraSyncpoints, size));
          if (sync->pExtraSyncpoints == nullptr) {
            return NvError_InsufficientMemory;
          }
        }
        else {
          sync->pExtraSyncpoints = static_cast<NvRmSyncPointEntry*>(
            NvOsAlloc(size));
        }
      }
    }
    else {
      const uint64_t size = static_cast<int64_t>(static_cast<int32_t>(count)) *
        static_cast<int64_t>(sizeof(NvRmSyncPointEntry)) + 40;
      uint32_t inlineCount;
      uint8_t isAllocated;

      if (attributes->buffer != nullptr) {
        if (size > attributes->bufferSize) {
          return NvError_Overflow;
        }

        sync = static_cast<NvRmSync*>(attributes->buffer);
        inlineCount = static_cast<uint32_t>(
          (static_cast<uint64_t>(attributes->bufferSize) - 40) /
          sizeof(NvRmSyncPointEntry));
        isAllocated = 0;
      }
      else {
        sync = static_cast<NvRmSync*>(NvOsAlloc(size));
        if (sync == nullptr) {
          return NvError_InsufficientMemory;
        }

        inlineCount = count;
        isAllocated = 1;
      }

      sync->inlineSyncpointCount = inlineCount;
      sync->isAllocated = isAllocated;
      sync->pExtraSyncpoints = nullptr;
      sync->extraSyncpointCount = 0;
      sync->ops = nullptr;
      sync->type = NvRmSyncType_Empty;
      sync->syncpointCount = 0;
    }

    for (uint64_t i = 0; i < count; i++) {
      AppendSyncpoint(sync, syncpoints[i]);
    }
  }

  *pOutSync = sync;
  return NvSuccess;
}
