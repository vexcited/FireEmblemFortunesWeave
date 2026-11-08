#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotSupported = 2,
  NvError_BadAddress = 3,
  NvError_BadParameter = 4,
  NvError_InsufficientMemory = 6,
};

struct NvRmHost1x {
  int32_t fd;
  uint32_t reserved;
  uint8_t isSyncpointAttachSupported;
  void* waitHolder;
};

struct NvRmHost1xChannel {
  NvRmHost1x* owner;
  int32_t fd;
  uint32_t moduleClass;
};

struct NvRmHost1xWaiter {
  NvRmHost1x* host;
  void* reserved;
};

struct NvRmHost1xTimestamp {
  uint64_t seconds;
  uint32_t nanoseconds;
  uint32_t reserved;
};

struct NvRmHost1xSyncpoint {
  NvRmHost1x* host;
  NvRmHost1xChannel* channel;
  uint32_t id;
};

struct NvRmChannel {
  void* owner;
  int32_t fd;
  const char* moduleName;
  uint32_t flags;
};

struct NvRmSyncPoint {
  uint32_t id;
  uint32_t value;
};

extern "C" void* NvOsAlloc(uint64_t size);
extern "C" void NvOsFree(void* pointer);
extern "C" uint64_t NvOsGetTimeNS();
extern "C" NvError NvOsDrvIoctl(int32_t fd, uint32_t request, void* argument,
  uint64_t size);
extern "C" int strcmp(const char* first, const char* second);
extern "C" int32_t sync_create_nvrm_mapping(const NvRmSyncPoint* syncpoints,
  uint32_t count);
extern "C" NvError NvRmHost1xChannelOpen(NvRmHost1xChannel** pOutChannel,
  NvRmHost1x* host, const char* moduleName, uint32_t flags);
extern "C" NvError NvRmChannelSyncPointWaitexTimeout(NvRmChannel* channel,
  uint32_t id, uint32_t threshold, void* semaphore, uint32_t timeout,
  void* pOutTimestamp);
extern "C" NvError NvRmChannelGetModuleClockRate(void* channel,
  uint32_t module, uint32_t* pOutRate);
extern "C" NvError NvRmChannelSetModuleClockRate(void* channel,
  uint32_t module, uint32_t rate);
extern "C" NvError NvRmChannelSetModulePixelRate(void* channel,
  uint32_t module, uint32_t rate);
extern "C" NvError NvRmChannelSetModuleBandwidth(void* channel,
  uint32_t module, uint32_t bandwidth);

[[gnu::visibility("hidden")]] void NvRmHost1xWaiterCancel(void* waiter);
[[gnu::visibility("hidden")]] void NvRmChannelCloseFd(int32_t fd);
[[gnu::visibility("hidden")]] int32_t NvRmChannelOpenFd(const char* path);
[[gnu::visibility("hidden")]] NvError NvRmChannelIoctl(int32_t fd,
  uint32_t request, void* argument, uint64_t size);
[[gnu::visibility("hidden")]] const char* NvRmChannelGetModuleName(
  uint32_t module);
[[gnu::visibility("hidden")]] NvError NvRmHost1xChannelPinAttached(
  NvRmHost1xChannel* channel, uint32_t handle);
[[gnu::visibility("hidden")]] NvError NvRmHost1xWaiterAttach(
  NvRmHost1xWaiter* waiter, NvRmHost1x* host);
[[gnu::visibility("hidden")]] NvError NvRmHost1xWaitSyncpoint(uint32_t id,
  uint32_t threshold, uint32_t timeoutMs);

// Attached syncpoints have no backend in this build, every operation on
// them was folded into these two empty functions.
[[gnu::visibility("hidden")]] void NvRmHost1xAttachedRelease(void* object);
[[gnu::visibility("hidden")]] void NvRmHost1xAttachedRelease(
  NvRmHost1xChannel* channel);
[[gnu::visibility("hidden")]] void NvRmHost1xAttachedRelease(
  NvRmHost1xSyncpoint* syncpoint);
[[gnu::visibility("hidden")]] NvError NvRmHost1xAttachedCall(
  NvRmHost1xSyncpoint* syncpoint);
[[gnu::visibility("hidden")]] NvError NvRmHost1xAttachedCall(NvRmHost1x* host,
  uint32_t id, uint32_t* pOutValue);

namespace {

const char NvRmHost1xControlPath[] = "/dev/nvhost-ctrl";

const uint32_t NvHostIoctlSyncptRead = 0xc0080014;
const uint32_t NvHostIoctlSyncptIncr = 0x40040015;
const uint32_t NvHostIoctlSyncptAlloc = 0xc0080027;
const uint32_t NvHostIoctlSyncptFree = 0x40040028;
const uint32_t NvHostIoctlChannelGetSyncpoint = 0xc0080002;
const uint32_t NvHostIoctlChannelSetTimeout = 0x40040007;

const uint64_t NvRmHost1xTimeoutInfinite = INT64_MAX / 1000;
const uint32_t NvRmChannelModuleCount = 121;

[[gnu::always_inline]] inline void FreeHost1x(NvRmHost1x* host) {
  if (host->isSyncpointAttachSupported == 1) {
    NvRmHost1xAttachedRelease(host->waitHolder);
  }

  NvOsFree(host);
}

}

extern "C" void NvRmChannelClose(NvRmChannel* channel) {
  if (channel == nullptr) {
    return;
  }

  NvRmChannelCloseFd(channel->fd);
  NvOsFree(channel);
}

extern "C" NvError NvRmChannelSyncPointWait(NvRmChannel* channel,
  uint32_t id, uint32_t threshold, void* semaphore) {
  return NvRmChannelSyncPointWaitexTimeout(channel, id, threshold, semaphore,
    0xffffffff, nullptr);
}

extern "C" NvError NvRmChannelSyncPointWaitTimeout(NvRmChannel* channel,
  uint32_t id, uint32_t threshold, void* semaphore, uint32_t timeout) {
  return NvRmChannelSyncPointWaitexTimeout(channel, id, threshold, semaphore,
    timeout, nullptr);
}

extern "C" NvError NvRmHost1xChannelIsValidSyncptPRIVATE(void*, uint32_t,
  uint8_t* pOutIsValid) {
  if (pOutIsValid == nullptr) {
    return NvError_BadParameter;
  }

  *pOutIsValid = 1;
  return NvSuccess;
}

extern "C" NvError NvRmHost1xChannelPinDataBuffer(uint64_t* pOutAddress,
  void*, uint32_t handle) {
  *pOutAddress = handle;
  return NvSuccess;
}

extern "C" NvError NvRmHost1xChannelGetPinAddressPRIVATE(void*, void*,
  uint64_t* pOutAddress) {
  *pOutAddress = 0xdeadbeef;
  return NvSuccess;
}

extern "C" uint32_t NvRmHost1xSyncpointGetId(NvRmHost1xSyncpoint* syncpoint) {
  return syncpoint->id;
}

extern "C" NvError NvRmHost1xSyncpointAttachChannel(
  NvRmHost1xSyncpoint* syncpoint, NvRmHost1xChannel* channel) {
  if (syncpoint->channel != nullptr) {
    return NvError_BadParameter;
  }

  if (syncpoint->host->isSyncpointAttachSupported == 0) {
    return NvError_NotSupported;
  }

  syncpoint->channel = channel;
  return NvSuccess;
}

extern "C" void NvRmHost1xSyncpointDetachChannel(
  NvRmHost1xSyncpoint* syncpoint) {
  if (syncpoint->channel != nullptr &&
    syncpoint->host->isSyncpointAttachSupported != 0) {
    syncpoint->channel = nullptr;
  }
}

extern "C" int32_t NvRmHost1xGetFdPRIVATE(NvRmHost1x* host) {
  return host->fd;
}

extern "C" int32_t NvRmHost1xChannelGetFdPRIVATE(NvRmHost1xChannel* channel) {
  return channel->fd;
}

extern "C" uint32_t NvRmHost1xChannelGetClassPRIVATE(
  NvRmHost1xChannel* channel) {
  return channel->moduleClass;
}

extern "C" NvError NvRmHost1xChannelCheckIsDeterministicPRIVATE(void*,
  uint8_t* pOutIsDeterministic) {
  if (pOutIsDeterministic == nullptr) {
    return NvError_BadParameter;
  }

  *pOutIsDeterministic = 0;
  return NvSuccess;
}

extern "C" void NvRmHost1xWaiterFree(NvRmHost1xSyncpoint* waiter) {
  if (waiter->host->isSyncpointAttachSupported == 1) {
    NvRmHost1xWaiterCancel(waiter);
  }

  NvOsFree(waiter);
}

extern "C" NvError NvRmHost1xChannelIsSyncpointAttachedPRIVATE(
  NvRmHost1xChannel* channel, NvRmHost1xSyncpoint* syncpoint,
  bool* pOutIsAttached) {
  if (channel == nullptr || syncpoint == nullptr ||
    pOutIsAttached == nullptr) {
    return NvError_BadParameter;
  }

  *pOutIsAttached = syncpoint->channel == channel;
  return NvSuccess;
}

extern "C" NvError NvRmHost1xChannelGetModuleClockRate(void* channel,
  uint32_t module, uint32_t* pOutRate) {
  return NvRmChannelGetModuleClockRate(channel, module, pOutRate);
}

extern "C" NvError NvRmHost1xChannelSetModuleClockRate(void* channel,
  uint32_t module, uint32_t rate) {
  return NvRmChannelSetModuleClockRate(channel, module, rate);
}

extern "C" NvError NvRmHost1xChannelSetModulePixelRate(void* channel,
  uint32_t module, uint32_t rate) {
  return NvRmChannelSetModulePixelRate(channel, module, rate);
}

extern "C" NvError NvRmHost1xChannelSetModuleBandwidth(void* channel,
  uint32_t module, uint32_t bandwidth) {
  return NvRmChannelSetModuleBandwidth(channel, module, bandwidth);
}

extern "C" NvError NvRmHost1xOpen(NvRmHost1x** pOutHost) {
  auto* host = static_cast<NvRmHost1x*>(NvOsAlloc(sizeof(NvRmHost1x)));
  if (host == nullptr) {
    return NvError_InsufficientMemory;
  }

  host->isSyncpointAttachSupported = 0;
  host->fd = -1;
  host->reserved = 1;
  host->fd = NvRmChannelOpenFd(NvRmHost1xControlPath);
  if (host->fd < 0) {
    FreeHost1x(host);
    return NvError_NotSupported;
  }

  *pOutHost = host;
  return NvSuccess;
}

extern "C" void NvRmHost1xClose(NvRmHost1x* host) {
  if (host->fd >= 0) {
    NvRmChannelCloseFd(host->fd);
    host->fd = -1;
  }

  FreeHost1x(host);
}

extern "C" void NvRmHost1xChannelClose(NvRmHost1xChannel* channel) {
  if (channel->owner->isSyncpointAttachSupported == 1) {
    NvRmHost1xAttachedRelease(channel);
  }

  NvRmChannelCloseFd(channel->fd);
  channel->fd = -1;
  NvOsFree(channel);
}

extern "C" NvError NvRmHost1xChannelPinCommandBufferPRIVATE(
  uint64_t* pOutAddress, NvRmHost1xChannel* channel, uint32_t handle) {
  if (channel->owner->isSyncpointAttachSupported != 0) {
    const NvError result = NvRmHost1xChannelPinAttached(channel, handle);
    if (result != NvSuccess) {
      return result;
    }
  }

  *pOutAddress = handle;
  return NvSuccess;
}

extern "C" NvError NvRmHost1xSyncpointAllocate(
  NvRmHost1xSyncpoint** pOutSyncpoint, NvRmHost1x* host) {
  uint32_t arguments[2] = {};
  auto* syncpoint = static_cast<NvRmHost1xSyncpoint*>(
    NvOsAlloc(sizeof(NvRmHost1xSyncpoint)));
  if (syncpoint == nullptr) {
    return NvError_InsufficientMemory;
  }

  syncpoint->host = host;
  syncpoint->channel = nullptr;

  NvError result;
  if (host->isSyncpointAttachSupported & 1) {
    result = NvRmHost1xAttachedCall(syncpoint);
  }
  else {
    result = NvOsDrvIoctl(host->fd, NvHostIoctlSyncptAlloc, arguments,
      sizeof(arguments));
    if (result == NvSuccess) {
      syncpoint->id = arguments[1];
    }
  }

  if (result != NvSuccess) {
    NvOsFree(syncpoint);
    return result;
  }

  *pOutSyncpoint = syncpoint;
  return NvSuccess;
}

extern "C" void NvRmHost1xSyncpointFree(NvRmHost1xSyncpoint* syncpoint) {
  NvRmHost1x* host = syncpoint->host;
  if (host->isSyncpointAttachSupported & 1) {
    NvRmHost1xAttachedRelease(syncpoint);
  }
  else {
    uint32_t id = syncpoint->id;
    NvOsDrvIoctl(host->fd, NvHostIoctlSyncptFree, &id, sizeof(id));
  }

  syncpoint->id = 0;
  NvOsFree(syncpoint);
}

extern "C" NvError NvRmHost1xSyncpointIncrement(
  NvRmHost1xSyncpoint* syncpoint, uint32_t count) {
  if (syncpoint->host->isSyncpointAttachSupported != 0) {
    for (; count != 0; count--) {
      const NvError result = NvRmHost1xAttachedCall(syncpoint);
      if (result != NvSuccess) {
        return result;
      }
    }

    return NvSuccess;
  }

  for (; count != 0; count--) {
    uint32_t id = syncpoint->id;
    const NvError result = NvOsDrvIoctl(syncpoint->host->fd,
      NvHostIoctlSyncptIncr, &id, sizeof(id));
    if (result != NvSuccess) {
      return result;
    }
  }

  return NvSuccess;
}

extern "C" NvError NvRmHost1xSyncpointRead(NvRmHost1x* host, uint32_t id,
  uint32_t* pOutValue) {
  uint32_t arguments[2] = {};
  if (host->isSyncpointAttachSupported == 1) {
    uint32_t value = 0;
    const NvError result = NvRmHost1xAttachedCall(host, id, &value);
    if (result == NvSuccess) {
      *pOutValue = value;
    }

    return result;
  }

  arguments[0] = id;
  const NvError result = NvOsDrvIoctl(host->fd, NvHostIoctlSyncptRead,
    arguments, sizeof(arguments));
  if (result == NvSuccess) {
    *pOutValue = arguments[1];
  }

  return result;
}

// The timeout is in microseconds, the wait itself takes milliseconds.
extern "C" NvError NvRmHost1xSyncpointWait(NvRmHost1x*, uint32_t id,
  uint32_t threshold, uint64_t timeout, NvRmHost1xTimestamp* pOutTimestamp) {
  uint32_t timeoutMs;
  if (timeout == 0) {
    timeoutMs = 0;
  }
  else if (timeout == NvRmHost1xTimeoutInfinite) {
    timeoutMs = UINT32_MAX;
  }
  else {
    timeoutMs = static_cast<uint32_t>(timeout / 1000);
    if (timeoutMs <= 1) {
      timeoutMs = 1;
    }
  }

  const NvError result = NvRmHost1xWaitSyncpoint(id, threshold, timeoutMs);
  if (pOutTimestamp != nullptr && result == NvSuccess) {
    const uint64_t now = NvOsGetTimeNS();
    const uint64_t seconds = now / 1000000000;
    pOutTimestamp->seconds = seconds;
    pOutTimestamp->nanoseconds =
      static_cast<uint32_t>(now - seconds * 1000000000);
    pOutTimestamp->reserved = 0;
  }

  return result;
}

extern "C" NvRmHost1xChannel* NvRmChannelGetHost1xHandlePRIVATE(
  NvRmChannel* channel) {
  NvRmHost1xChannel* host1xChannel = nullptr;
  NvRmHost1x* host;
  if (NvRmHost1xOpen(&host) != NvSuccess) {
    return nullptr;
  }

  NvRmHost1xChannelOpen(&host1xChannel, host, channel->moduleName, 0);
  return host1xChannel;
}

extern "C" NvError NvRmHost1xWaiterAllocate(NvRmHost1xWaiter** pOutWaiter,
  NvRmHost1x* host) {
  auto* waiter = static_cast<NvRmHost1xWaiter*>(
    NvOsAlloc(sizeof(NvRmHost1xWaiter)));
  if (waiter == nullptr) {
    return NvError_InsufficientMemory;
  }

  waiter->host = host;
  if (host->isSyncpointAttachSupported == 1) {
    const NvError result = NvRmHost1xWaiterAttach(waiter, host);
    if (result != NvSuccess) {
      NvOsFree(waiter);
      return result;
    }
  }

  *pOutWaiter = waiter;
  return NvSuccess;
}

// Module 4 interleaves two syncpoints per index, the instance sits in the
// upper half of the module id.
extern "C" NvError NvRmChannelGetModuleSyncPoint(NvRmChannel* channel,
  uint32_t module, uint32_t index, uint32_t* pOutSyncpoint) {
  uint32_t arguments[2] = {};
  if ((module & 0xffff) == 4) {
    index = index * 2 + static_cast<uint8_t>(module >> 16);
  }

  arguments[0] = index;
  const NvError result = NvRmChannelIoctl(channel->fd,
    NvHostIoctlChannelGetSyncpoint, arguments, sizeof(arguments));
  if (result == NvSuccess) {
    *pOutSyncpoint = arguments[1];
  }

  return result;
}

extern "C" NvError NvRmChannelSetSubmitTimeout(NvRmChannel* channel,
  uint32_t timeout) {
  if (channel == nullptr) {
    return NvError_BadAddress;
  }

  return NvRmChannelIoctl(channel->fd, NvHostIoctlChannelSetTimeout,
    &timeout, sizeof(timeout));
}

extern "C" NvError NvRmChannelSetSubmitTimeoutEx(NvRmChannel* channel,
  uint32_t timeout) {
  if (channel == nullptr) {
    return NvError_BadAddress;
  }

  return NvRmChannelIoctl(channel->fd, NvHostIoctlChannelSetTimeout,
    &timeout, sizeof(timeout));
}

extern "C" NvError NvRmChannelSetModuleHighPriority(NvRmChannel* channel,
  uint32_t module, uint8_t isHighPriority) {
  if (channel == nullptr || module < 1 || module > NvRmChannelModuleCount) {
    return NvError_BadParameter;
  }

  const char* name = NvRmChannelGetModuleName(module);
  if (name == nullptr || strcmp(channel->moduleName, name) != 0) {
    return NvError_BadParameter;
  }

  channel->flags = (channel->flags & ~1u) | (isHighPriority != 0 ? 1 : 0);
  return NvSuccess;
}

extern "C" NvError NvRmFencePutToFile(const char*,
  const NvRmSyncPoint* syncpoints, uint32_t count, int32_t* pOutFd) {
  if (count == 0) {
    *pOutFd = -1;
    return NvSuccess;
  }

  const int32_t fd = sync_create_nvrm_mapping(syncpoints, count);
  *pOutFd = fd;
  return fd < 0 ? NvError_InsufficientMemory : NvSuccess;
}
