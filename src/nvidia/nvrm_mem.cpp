#include <stddef.h>
#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_InsufficientMemory = 6,
  NvError_BadValue = 10,
};

using NvRmMemHandle = uint32_t;

extern "C" NvError NvRmMemHandleFromId(int32_t id, NvRmMemHandle* pOutHandle);

[[gnu::visibility("hidden")]] NvError NvRmMemCacheSyncImpl(
  NvRmMemHandle handle, void* address, size_t size, uint32_t isForDevice,
  uint32_t isInvalidate);
[[gnu::visibility("hidden")]] NvError NvRmMemAccessImpl(NvRmMemHandle handle,
  uint64_t offset, size_t memoryStride, void* pBuffer, size_t bufferStride,
  size_t elementSize, size_t count, uint64_t isWrite);
[[gnu::visibility("hidden")]] extern int64_t g_NvRmMemVprHeapSize;

extern "C" NvError NvRmMemHandleFromFd(int32_t fd, NvRmMemHandle* pOutHandle) {
  return NvRmMemHandleFromId(fd, pOutHandle);
}

extern "C" NvError NvRmMemHandleDup(int32_t handle,
  NvRmMemHandle* pOutHandle) {
  if (handle == -1) {
    return NvError_InsufficientMemory;
  }

  return NvRmMemHandleFromId(handle, pOutHandle);
}

extern "C" NvError NvRmMemHandleDuplicate(int32_t handle, uint32_t,
  NvRmMemHandle* pOutHandle) {
  if (handle == -1) {
    return NvError_InsufficientMemory;
  }

  return NvRmMemHandleFromId(handle, pOutHandle);
}

extern "C" NvError NvRmMemCacheSyncForCpu(NvRmMemHandle handle,
  void* address, size_t size) {
  return NvRmMemCacheSyncImpl(handle, address, size, 0, 1);
}

extern "C" NvError NvRmMemCacheSyncForDevice(NvRmMemHandle handle,
  void* address, size_t size) {
  return NvRmMemCacheSyncImpl(handle, address, size, 1, 1);
}

extern "C" NvError NvRmMemWrite(NvRmMemHandle handle, uint64_t offset,
  const void* pSource, size_t size) {
  return NvRmMemAccessImpl(handle, offset, size, const_cast<void*>(pSource),
    size, size, 1, 1);
}

extern "C" NvError NvRmMemWriteStrided(NvRmMemHandle handle, uint64_t offset,
  size_t destinationStride, const void* pSource, size_t sourceStride,
  size_t elementSize, size_t count) {
  return NvRmMemAccessImpl(handle, offset, destinationStride,
    const_cast<void*>(pSource), sourceStride, elementSize, count, 1);
}

extern "C" NvError NvRmMemRead(NvRmMemHandle handle, uint64_t offset,
  void* pDestination, size_t size) {
  return NvRmMemAccessImpl(handle, offset, size, pDestination, size, size, 1,
    0);
}

extern "C" NvError NvRmMemReadStrided(NvRmMemHandle handle, uint64_t offset,
  size_t sourceStride, void* pDestination, size_t destinationStride,
  size_t elementSize, size_t count) {
  return NvRmMemAccessImpl(handle, offset, sourceStride, pDestination,
    destinationStride, elementSize, count, 0);
}

extern "C" NvError NvRmMemSetVprHeapSize(int64_t size) {
  if (size < 0) {
    return NvError_BadValue;
  }

  g_NvRmMemVprHeapSize = size;
  return NvSuccess;
}

extern "C" NvError NvRmMemEstablishVprHeap(uint64_t* pOutHeap) {
  if (pOutHeap != nullptr) {
    *pOutHeap = 0;
  }

  return NvSuccess;
}
