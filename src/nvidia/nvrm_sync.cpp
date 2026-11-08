#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
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
  void* reserved08[2];
  NvError (*mergeInto)(NvRmSync* destination, NvRmSync* source);
  void* reserved20[2];
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
  NvRmSyncPointEntry* pExtraSyncpoints;
  uint32_t reserved20;
  NvRmSyncPointEntry inlineSyncpoints[1];
};

extern "C" void NvOsFree(void* pointer);

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

extern "C" void NvRmSyncFreeSyncpoints(void* syncpoints) {
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
