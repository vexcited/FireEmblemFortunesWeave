#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotSupported = 2,
  NvError_BadParameter = 4,
};

struct NvRmHost1x {
  int32_t fd;
  uint32_t reserved;
  uint8_t isSyncpointAttachSupported;
};

struct NvRmHost1xChannel {
  void* owner;
  int32_t fd;
  uint32_t moduleClass;
};

struct NvRmHost1xSyncpoint {
  NvRmHost1x* host;
  NvRmHost1xChannel* channel;
  uint32_t id;
};

struct NvRmChannel {
  void* owner;
  int32_t fd;
};

extern "C" void NvOsFree(void* pointer);
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
