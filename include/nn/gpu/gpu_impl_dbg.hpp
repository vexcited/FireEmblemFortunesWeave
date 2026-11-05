#pragma once

#include "nn/gpu/gpu_sdk_types.hpp"
#include "nn/gpuk/gpuk_kuser.hpp"

namespace nn::gpu::impl::dbg {

// Query replies report the written size in bytes, the request carries the
// size of one entry.
template <typename Info>
inline void WriteQueryBuffer(uint8_t* message, Info* infos, size_t count) {
  tipc::WriteBufferDescriptor(message, 8, infos, count * sizeof(Info));
}

template <typename Info>
inline void ReadQueryCount(size_t* outCount, const uint8_t* message) {
  *outCount = tipc::ReadMessage<uint64_t>(message, 12) / sizeof(Info);
}

template <typename Session>
Result QuerySdkLibraryInfo(size_t* outCount, Session& session,
  uint8_t indexMin, uint8_t indexMax, sdk::SdkLibraryInfo* infos,
  size_t count);

template <typename Session>
Result QueryGpuMemoryInfo(size_t* outCount, Session& session,
  sdk::GpuMemoryHandle handleMin, sdk::GpuMemoryHandle handleMax,
  sdk::GpuMemoryInfo* infos, size_t count);

template <typename Session>
Result QueryGpuSegmentInfo(size_t* outCount, Session& session,
  gpuk::impl::InstanceHandle instance, uint64_t addressMin,
  uint64_t addressMax, sdk::GpuSegmentInfo* infos, size_t count);

template <typename Session>
Result QueryMemoryMap(size_t* outCount, Session& session,
  gpuk::impl::InstanceHandle instance, uint64_t addressMin,
  uint64_t addressMax, sdk::GpuPageInfo* infos, size_t count);

}
