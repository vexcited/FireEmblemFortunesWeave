#include "nn/gpu/gpu_impl_user.hpp"

namespace nn::gpu::sdk {

using impl::user::g_GpuAddressSpaceManager;

Result CreateGpuAddressSpace(GpuAddressSpaceType* addressSpace,
  const GraphicsDeviceType* device, GpuAddressSpaceCreationFlags /* flags */) {
  g_GpuAddressSpaceManager.mutex.Lock();
  uint32_t handle = 0;
  if (!g_GpuAddressSpaceManager.TryReuseAddressSpace(&handle, 0)) {
    const Result result =
      g_GpuAddressSpaceManager.CreateAddressSpace(&handle, 0);
    if (result.IsFailure()) {
      g_GpuAddressSpaceManager.mutex.Unlock();
      return result;
    }
  }
  g_GpuAddressSpaceManager.mutex.Unlock();

  const_cast<GraphicsDeviceType*>(device)->referenceCount.fetch_add(1,
    std::memory_order_relaxed);
  addressSpace->handle.value = 0;
  addressSpace->attachedCount = 0;
  addressSpace->pAttachment = nullptr;
  addressSpace->device = device;
  addressSpace->handle.value = handle;
  return Result{0};
}

uint64_t GetUserPartitionGpuAddressMin(
  const GpuAddressSpaceType* addressSpace) {
  const uint32_t handle = addressSpace->handle.value;
  g_GpuAddressSpaceManager.mutex.Lock();
  const int index = g_GpuAddressSpaceManager.FindIndex(handle);
  const uint64_t address =
    g_GpuAddressSpaceManager.userPartitions[index].min;
  g_GpuAddressSpaceManager.mutex.Unlock();
  return address;
}

uint64_t GetUserPartitionGpuAddressMax(
  const GpuAddressSpaceType* addressSpace) {
  const uint32_t handle = addressSpace->handle.value;
  g_GpuAddressSpaceManager.mutex.Lock();
  const int index = g_GpuAddressSpaceManager.FindIndex(handle);
  const uint64_t address =
    g_GpuAddressSpaceManager.userPartitions[index].max;
  g_GpuAddressSpaceManager.mutex.Unlock();
  return address;
}

uint64_t GetGsvPartitionGpuAddressMin(
  const GpuAddressSpaceType* addressSpace) {
  const uint32_t handle = addressSpace->handle.value;
  g_GpuAddressSpaceManager.mutex.Lock();
  const int index = g_GpuAddressSpaceManager.FindIndex(handle);
  const uint64_t address = g_GpuAddressSpaceManager.gsvPartitions[index].min;
  g_GpuAddressSpaceManager.mutex.Unlock();
  return address;
}

uint64_t GetGsvPartitionGpuAddressMax(
  const GpuAddressSpaceType* addressSpace) {
  const uint32_t handle = addressSpace->handle.value;
  g_GpuAddressSpaceManager.mutex.Lock();
  const int index = g_GpuAddressSpaceManager.FindIndex(handle);
  const uint64_t address = g_GpuAddressSpaceManager.gsvPartitions[index].max;
  g_GpuAddressSpaceManager.mutex.Unlock();
  return address;
}

Result QueryUserPartitionGpuAddressRangeList(size_t* outCount,
  const GpuAddressSpaceType* addressSpace, GpuAddressRange* ranges,
  size_t count) {
  const uint32_t handle = addressSpace->handle.value;
  g_GpuAddressSpaceManager.mutex.Lock();
  const int index = g_GpuAddressSpaceManager.FindIndex(handle);
  const GpuAddressRange range =
    g_GpuAddressSpaceManager.userPartitions[index];
  g_GpuAddressSpaceManager.mutex.Unlock();

  size_t rangeCount = 0;
  if (count != 0 && range.min <= range.max) {
    rangeCount = 1;
    ranges[0] = range;
  }
  *outCount = rangeCount;
  return Result{0};
}

void DestroyGpuAddressSpace(GpuAddressSpaceType* addressSpace) {
  const GraphicsDeviceType* device = addressSpace->device;
  NN_ABORT_UNLESS(addressSpace->pAttachment == nullptr &&
    addressSpace->attachedCount == 0);

  const uint32_t handle = addressSpace->handle.value;
  g_GpuAddressSpaceManager.mutex.Lock();
  const int index = g_GpuAddressSpaceManager.FindIndex(handle);
  g_GpuAddressSpaceManager.isUsed[index] = false;
  g_GpuAddressSpaceManager.mutex.Unlock();

  NN_ABORT_UNLESS(const_cast<GraphicsDeviceType*>(device)->referenceCount.
    fetch_sub(1, std::memory_order_relaxed) > 0);
}

}
