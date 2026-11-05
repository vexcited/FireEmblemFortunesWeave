#include "nn/gpu/gpu_impl_dbg.hpp"

namespace nn::gpu::impl::dbg {

template <typename Session>
Result QuerySdkLibraryInfo(size_t* outCount, Session& session,
  uint8_t indexMin, uint8_t indexMax, sdk::SdkLibraryInfo* infos,
  size_t count) {
  if (indexMin > indexMax) {
    *outCount = 0;
    return Result{0};
  }

  return session.Invoke(0x40100227a, 0x30000227a,
    [&](uint8_t* message) {
      WriteQueryBuffer(message, infos, count);
      tipc::WriteMessage<uint8_t>(message, 20, indexMin);
      tipc::WriteMessage<uint8_t>(message, 24, indexMax);
      tipc::WriteMessage<uint64_t>(message, 28, sizeof(sdk::SdkLibraryInfo));
    },
    [&](const uint8_t* message) {
      ReadQueryCount<sdk::SdkLibraryInfo>(outCount, message);
    });
}

template <typename Session>
Result QueryGpuMemoryInfo(size_t* outCount, Session& session,
  sdk::GpuMemoryHandle handleMin, sdk::GpuMemoryHandle handleMax,
  sdk::GpuMemoryInfo* infos, size_t count) {
  if (handleMin.value > handleMax.value) {
    *outCount = 0;
    return Result{0};
  }

  return session.Invoke(0x401002273, 0x300002273,
    [&](uint8_t* message) {
      WriteQueryBuffer(message, infos, count);
      tipc::WriteMessage<uint32_t>(message, 20, handleMin.value);
      tipc::WriteMessage<uint32_t>(message, 24, handleMax.value);
      tipc::WriteMessage<uint64_t>(message, 28, sizeof(sdk::GpuMemoryInfo));
    },
    [&](const uint8_t* message) {
      ReadQueryCount<sdk::GpuMemoryInfo>(outCount, message);
    });
}

template <typename Session>
Result QueryGpuSegmentInfo(size_t* outCount, Session& session,
  gpuk::impl::InstanceHandle instance, uint64_t addressMin,
  uint64_t addressMax, sdk::GpuSegmentInfo* infos, size_t count) {
  if (addressMin > addressMax) {
    *outCount = 0;
    return Result{0};
  }

  return session.Invoke(0x701002272, 0x300002272,
    [&](uint8_t* message) {
      WriteQueryBuffer(message, infos, count);
      tipc::WriteMessage<uint32_t>(message, 20, instance.value);
      tipc::WriteMessage<uint64_t>(message, 24, addressMin);
      tipc::WriteMessage<uint64_t>(message, 32, addressMax);
      tipc::WriteMessage<uint64_t>(message, 40, sizeof(sdk::GpuSegmentInfo));
    },
    [&](const uint8_t* message) {
      ReadQueryCount<sdk::GpuSegmentInfo>(outCount, message);
    });
}

template <typename Session>
Result QueryMemoryMap(size_t* outCount, Session& session,
  gpuk::impl::InstanceHandle instance, uint64_t addressMin,
  uint64_t addressMax, sdk::GpuPageInfo* infos, size_t count) {
  if (addressMin > addressMax) {
    *outCount = 0;
    return Result{0};
  }

  return session.Invoke(0x701002270, 0x300002270,
    [&](uint8_t* message) {
      WriteQueryBuffer(message, infos, count);
      tipc::WriteMessage<uint32_t>(message, 20, instance.value);
      tipc::WriteMessage<uint64_t>(message, 24, addressMin);
      tipc::WriteMessage<uint64_t>(message, 32, addressMax);
      tipc::WriteMessage<uint64_t>(message, 40, sizeof(sdk::GpuPageInfo));
    },
    [&](const uint8_t* message) {
      ReadQueryCount<sdk::GpuPageInfo>(outCount, message);
    });
}

using gpuk::impl::kuser::KUserWorkerSession;

template Result QuerySdkLibraryInfo<KUserWorkerSession>(size_t*,
  KUserWorkerSession&, uint8_t, uint8_t, sdk::SdkLibraryInfo*, size_t);
template Result QueryGpuMemoryInfo<KUserWorkerSession>(size_t*,
  KUserWorkerSession&, sdk::GpuMemoryHandle, sdk::GpuMemoryHandle,
  sdk::GpuMemoryInfo*, size_t);
template Result QueryGpuSegmentInfo<KUserWorkerSession>(size_t*,
  KUserWorkerSession&, gpuk::impl::InstanceHandle, uint64_t, uint64_t,
  sdk::GpuSegmentInfo*, size_t);
template Result QueryMemoryMap<KUserWorkerSession>(size_t*,
  KUserWorkerSession&, gpuk::impl::InstanceHandle, uint64_t, uint64_t,
  sdk::GpuPageInfo*, size_t);

}
