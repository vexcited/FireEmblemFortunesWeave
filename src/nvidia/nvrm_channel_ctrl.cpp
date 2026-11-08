#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
};

struct NvRmFence {
  uint32_t id;
  uint32_t value;
};

struct NvRmFenceFileInfo {
  uint32_t count;
  NvRmFence fences[4];
};

// Host1x characteristics, the driver fills them once through the control fd.
struct NvRmHostCharacteristics {
  uint64_t flags;
  uint32_t isValid;
  uint32_t reserved[4];
  uint32_t syncpointCount;
};

extern "C" {

void nnosLockMutex(void* mutex);
void nnosUnlockMutex(void* mutex);
void NvOsRegisterExitHandler(void (*handler)(void*), void* context,
  uint32_t flags);
int32_t sync_get_nvrm_mapping(int32_t fd, NvRmFenceFileInfo* pOutInfo);
void* memcpy(void* destination, const void* source, uint64_t size);

}

// The wait reaches NvRmChannelSyncPointRead through the PLT and hands it the
// zero wait result in the device register.
uint32_t NvRmChannelSyncPointReadAfterWait(NvError result, uint32_t id);

[[gnu::visibility("hidden")]] extern int32_t g_NvRmControlFd;
[[gnu::visibility("hidden")]] extern uint8_t g_NvRmControlMutex[];
[[gnu::visibility("hidden")]] extern uint8_t g_NvRmControlExitContext[];
[[gnu::visibility("hidden")]] extern NvRmHostCharacteristics
  g_NvRmHostCharacteristics;

[[gnu::visibility("hidden")]] int32_t NvRmChannelOpenFd(const char* path);
[[gnu::visibility("hidden")]] void NvRmControlClose(void* context);
[[gnu::visibility("hidden")]] NvError NvRmChannelIoctl(int32_t fd,
  uint32_t request, void* argument, uint64_t size);
[[gnu::visibility("hidden")]] NvError NvRmChannelIoctlOut(int32_t fd,
  uint32_t request, void* argument, uint64_t size, void* output,
  uint64_t outputSize);
[[gnu::visibility("hidden")]] NvError NvRmHostSyncPointWait(uint32_t id,
  uint32_t threshold, uint32_t timeout);

namespace {

const char NvRmControlPath[] = "/dev/nvhost-ctrl";

const uint32_t NvHostIoctlGetCharacteristics = 0xc010002a;
const uint32_t NvHostIoctlSyncptRead = 0xc0080014;
const uint32_t NvHostIoctlSyncptIncr = 0x40040015;

struct NvHostCharacteristicsArguments {
  uint64_t size;
  uint64_t version;
};

// Opens the control device once per process and loads the host1x
// characteristics the first time they are needed.
[[gnu::always_inline]] inline void OpenControl() {
  if (g_NvRmControlFd < 0) {
    nnosLockMutex(g_NvRmControlMutex);
    if (g_NvRmControlFd < 0) {
      g_NvRmControlFd = NvRmChannelOpenFd(NvRmControlPath);
      NvOsRegisterExitHandler(NvRmControlClose, g_NvRmControlExitContext,
        0);
    }

    nnosUnlockMutex(g_NvRmControlMutex);
  }

  if (g_NvRmHostCharacteristics.isValid == 0 && g_NvRmControlFd >= 0) {
    NvHostCharacteristicsArguments arguments = {
      sizeof(NvRmHostCharacteristics), 1};
    NvRmChannelIoctlOut(g_NvRmControlFd, NvHostIoctlGetCharacteristics,
      &arguments, sizeof(arguments), &g_NvRmHostCharacteristics,
      sizeof(NvRmHostCharacteristics));
  }
}

}

extern "C" NvError NvRmChannelNumSyncPoints(uint32_t* pOutCount) {
  OpenControl();
  *pOutCount = g_NvRmHostCharacteristics.syncpointCount;
  return NvSuccess;
}

// Returns the syncpoint value, or the error when the read fails.
extern "C" uint32_t NvRmChannelSyncPointRead(void*, uint32_t id) {
  uint32_t arguments[2] = {};
  OpenControl();

  arguments[0] = id;
  const NvError result = NvRmChannelIoctl(g_NvRmControlFd,
    NvHostIoctlSyncptRead, arguments, sizeof(arguments));
  return result == NvSuccess ? arguments[1] : result;
}

extern "C" NvError NvRmChannelSyncPointIncr(void*, uint32_t id) {
  OpenControl();

  uint32_t argument = id;
  return NvRmChannelIoctl(g_NvRmControlFd, NvHostIoctlSyncptIncr, &argument,
    sizeof(argument));
}

extern "C" NvError NvRmChannelSyncPointWaitexTimeout(void*, uint32_t id,
  uint32_t threshold, void*, uint32_t timeout, uint32_t* pOutValue) {
  OpenControl();

  const NvError result = NvRmHostSyncPointWait(id, threshold, timeout);
  if (pOutValue != nullptr && result == NvSuccess) {
    *pOutValue = NvRmChannelSyncPointReadAfterWait(result, id);
  }

  return result;
}

extern "C" NvError NvRmFenceWait(void*, const NvRmFence* fence,
  uint32_t timeout) {
  OpenControl();
  return NvRmHostSyncPointWait(fence->id, fence->value, timeout);
}

extern "C" NvError NvRmFenceGetFromFile(int32_t fd, NvRmFence* pOutFences,
  uint32_t* pCount) {
  NvRmFenceFileInfo info = {};
  if (sync_get_nvrm_mapping(fd, &info) != 0) {
    return NvError_BadParameter;
  }

  if (pOutFences == nullptr) {
    *pCount = info.count;
    return NvSuccess;
  }

  if (*pCount < info.count) {
    return NvError_BadParameter;
  }

  *pCount = info.count;
  memcpy(pOutFences, info.fences, info.count * sizeof(NvRmFence));
  return NvSuccess;
}
