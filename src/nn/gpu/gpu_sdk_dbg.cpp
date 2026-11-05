#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_impl_dbg.hpp"

namespace nn::gpu::impl::dbg {

struct KEventPool;

// The debugger session caches the ranges the kernel driver reports when it
// connects.
class [[gnu::visibility("hidden")]] DebuggerSession
  : public gpuk::impl::kuser::KUserWorkerSession {
 public:
  DebuggerSession();
  ~DebuggerSession();

  KEventPool* m_pEventPool;
  uint8_t m_SdkLibraryIndexMin;
  uint8_t m_SdkLibraryIndexMax;
  sdk::GpuMemoryHandle m_GpuMemoryHandleMin;
  sdk::GpuMemoryHandle m_GpuMemoryHandleMax;
  uint64_t m_ComptagBackingStoreSize;
};

namespace {

DebuggerSession& GetDebuggerSession() {
  static DebuggerSession s_Session;
  return s_Session;
}

}

struct GpuAddressRange {
  uint64_t min;
  uint64_t max;
  uint64_t granularity;
};

[[gnu::always_inline]] GpuAddressRange GetQueryableGpuAddressRange(
  sdk::GpuAddressSpaceHandle handle) {
  GpuAddressRange range;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetDebuggerSession().Invoke(0x100002271,
    0x700002271,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle.value);
    },
    [&](const uint8_t* message) {
      range = tipc::ReadMessage<GpuAddressRange>(message, 12);
    }));
  return range;
}

}

namespace nn::gpu::sdk {

using impl::dbg::GetDebuggerSession;

uint8_t GetSdkLibraryIndexMin() {
  return GetDebuggerSession().m_SdkLibraryIndexMin;
}

uint8_t GetSdkLibraryIndexMax() {
  return GetDebuggerSession().m_SdkLibraryIndexMax;
}

Result QuerySdkLibraryInfo(size_t* outCount, uint8_t indexMin,
  uint8_t indexMax, SdkLibraryInfo* infos, size_t count) {
  return impl::dbg::QuerySdkLibraryInfo(outCount, GetDebuggerSession(),
    indexMin, indexMax, infos, count);
}

GpuMemoryHandle GetGpuMemoryHandleMin() {
  return GetDebuggerSession().m_GpuMemoryHandleMin;
}

GpuMemoryHandle GetGpuMemoryHandleMax() {
  return GetDebuggerSession().m_GpuMemoryHandleMax;
}

Result QueryGpuMemoryInfo(size_t* outCount, GpuMemoryHandle handleMin,
  GpuMemoryHandle handleMax, GpuMemoryInfo* infos, size_t count) {
  return impl::dbg::QueryGpuMemoryInfo(outCount, GetDebuggerSession(),
    handleMin, handleMax, infos, count);
}

size_t GetGpuAddressSpaceCountMax() {
  uint64_t count;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetDebuggerSession().Invoke(0x227b,
    0x30000227b, [](uint8_t*) {},
    [&](const uint8_t* message) {
      count = tipc::ReadMessage<uint64_t>(message, 12);
    }));
  return count + 1;
}

Result QueryGpuAddressSpaceHandleList(size_t* outCount,
  GpuAddressSpaceHandle* handles, size_t count) {
  return GetDebuggerSession().Invoke(0x20100227c, 0x30000227c,
    [&](uint8_t* message) {
      impl::dbg::WriteQueryBuffer(message, handles, count);
      tipc::WriteMessage<uint64_t>(message, 20,
        sizeof(GpuAddressSpaceHandle));
    },
    [&](const uint8_t* message) {
      impl::dbg::ReadQueryCount<GpuAddressSpaceHandle>(outCount, message);
    });
}

uint64_t GetQueryableGpuAddressMin(GpuAddressSpaceHandle handle) {
  return impl::dbg::GetQueryableGpuAddressRange(handle).min;
}

uint64_t GetQueryableGpuAddressMax(GpuAddressSpaceHandle handle) {
  return impl::dbg::GetQueryableGpuAddressRange(handle).max;
}

uint64_t GetGpuAddressQueryGranularity(GpuAddressSpaceHandle handle) {
  return impl::dbg::GetQueryableGpuAddressRange(handle).granularity;
}

Result QueryGpuSegmentInfo(size_t* outCount, GpuAddressSpaceHandle handle,
  uint64_t addressMin, uint64_t addressMax, GpuSegmentInfo* infos,
  size_t count) {
  return impl::dbg::QueryGpuSegmentInfo(outCount, GetDebuggerSession(),
    {handle.value}, addressMin, addressMax, infos, count);
}

Result QueryGpuPageInfo(size_t* outCount, GpuAddressSpaceHandle handle,
  uint64_t addressMin, uint64_t addressMax, GpuPageInfo* infos,
  size_t count) {
  return impl::dbg::QueryMemoryMap(outCount, GetDebuggerSession(),
    {handle.value}, addressMin, addressMax, infos, count);
}

uint64_t GetComptagBackingStoreSize() {
  return GetDebuggerSession().m_ComptagBackingStoreSize;
}

}
