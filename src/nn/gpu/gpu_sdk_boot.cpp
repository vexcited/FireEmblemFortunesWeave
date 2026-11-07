#include <utility>

#include "nn/codec/video_server_context.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_impl_user.hpp"
#include "nn/os/time.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/svc/svc_api.hpp"

namespace nn::os {

enum MemoryAttribute {
  MemoryAttribute_Normal,
  MemoryAttribute_Uncached,
};

void SetMemoryAttribute(uintptr_t address, size_t size,
  MemoryAttribute attribute);

}

namespace nn::gpu::sdk {

enum class ComptagAllocMode : uint8_t {};

}

namespace nn::gsv {

enum MemoryRegion : uint8_t {
  MemoryRegion_Remote = 1,
};

}

namespace nn::gpu::impl::user {

using gpuk::impl::kuser::KUserWorkerSession;

// Accessible memory is registered with the worker session while the CPU
// mapping is uncached, the requested attribute is applied afterwards.
class GpuMemoryManager {
public:
  Result Create(uint32_t* pOutHandle, KUserWorkerSession* workerSession,
    JobEventPool* eventPool, void* address, size_t size,
    os::MemoryAttribute attribute, uint8_t deviceId) {
    static_cast<void>(eventPool);
    const uintptr_t start = reinterpret_cast<uintptr_t>(address);
    NN_RESULT_DO(svc::SetMemoryAttribute(start, size, 0x20, 0x20));
    const uintptr_t last = start + size - 1;
    NN_ABORT_UNLESS(last >= start && size != 0);

    uint32_t handle;
    const Result result = workerSession->Invoke(0x600000075, 0x200000075,
      [&](uint8_t* message) {
        tipc::WriteMessage<uint64_t>(message, 8, start);
        tipc::WriteMessage<uint64_t>(message, 16, last);
        tipc::WriteMessage<uint8_t>(message, 24, 0);
        tipc::WriteMessage<uint8_t>(message, 28, deviceId);
      },
      [&](const uint8_t* message) {
        handle = tipc::ReadMessage<uint32_t>(message, 12);
      });
    if (result.IsFailure()) {
      svc::SetMemoryAttribute(start, size, 0x20, 0);
      return result;
    }
    if (attribute != os::MemoryAttribute_Normal) {
      os::SetMemoryAttribute(start, size, attribute);
    }
    *pOutHandle = handle;
    return Result{0};
  }

  void Destroy(KUserWorkerSession* workerSession, JobEventPool* eventPool,
    uint32_t handle, void* address, size_t size,
    os::MemoryAttribute attribute);
};

// The boot state is internal to the library, so it is addressed directly.
#pragma GCC visibility push(hidden)

GpuMemoryManager g_GpuMemoryManager;
KUserWorkerSession g_DeviceSession;
KUserWorkerSession g_WorkerSession;
gsv::UserSession* g_pGsvUserSession;
GpuAddressSpaceManager g_GpuAddressSpaceManager;
JobEventPool g_JobEventPool;

#pragma GCC visibility pop

class UserBootFunction {
public:
  static constexpr uint64_t MyUserVersion = 4;

  static void BootWithTransferMemory(KUserWorkerSession* deviceSession,
    JobEventPool* eventPool, KUserWorkerSession* workerSession,
    GpuAddressSpaceManager* addressSpaceManager, gsv::UserSession* session,
    void* address, size_t size, gsv::MemoryRegion region) {
    InitializeDeviceSession(deviceSession, session, address, size, region);
    InitializeGsvSession(session);
    eventPool->Initialize(deviceSession);
    InitializeWorkerSession(workerSession, deviceSession, eventPool);
    addressSpaceManager->pDeviceSession = deviceSession;
  }

  static void BootWithRemoteMemory(KUserWorkerSession* deviceSession,
    JobEventPool* eventPool, KUserWorkerSession* workerSession,
    GpuAddressSpaceManager* addressSpaceManager, gsv::UserSession* session,
    gsv::MemoryRegion region) {
    NN_ABORT_UNLESS(region == gsv::MemoryRegion_Remote);
    gsdrv::UniqueNativeHandle sessionHandle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(session->OpenGpuDeviceSession(
      gsv::OutNativeHandle{&sessionHandle}, MyUserVersion));
    AttachSession(deviceSession, &sessionHandle);
    InitializeGsvSession(session);
    eventPool->Initialize(deviceSession);
    InitializeWorkerSession(workerSession, deviceSession, eventPool);
    addressSpaceManager->pDeviceSession = deviceSession;
  }

private:
  static void AttachSession(KUserWorkerSession* workerSession,
    gsdrv::UniqueNativeHandle* handle) {
    std::swap(workerSession->session.handle, handle->value);
  }

  static void InitializeDeviceSession(KUserWorkerSession* deviceSession,
    gsv::UserSession* session, void* address, size_t size,
    gsv::MemoryRegion region) {
    static_cast<void>(region);
    os::TransferMemoryType transferMemory;
    NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(&transferMemory,
      address, size, os::MemoryPermission_None));
    gsdrv::UniqueNativeHandle transferMemoryHandle;
    transferMemoryHandle = os::DetachTransferMemory(&transferMemory);
    os::DestroyTransferMemory(&transferMemory);

    gsdrv::UniqueNativeHandle sessionHandle;
    const gsdrv::WeakNativeHandle weakHandle = {
      transferMemoryHandle.GetHandle()};
    const uint64_t memorySize = size;
    NN_ABORT_UNLESS_RESULT_SUCCESS(session->OpenGpuDeviceSession(
      gsv::OutNativeHandle{&sessionHandle}, MyUserVersion, weakHandle,
      memorySize));
    AttachSession(deviceSession, &sessionHandle);
  }

  static void InitializeGsvSession(gsv::UserSession* session) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x1a1, 0x1000001a1,
      [](uint8_t*) {}, [](const uint8_t*) {}));
    NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x1a2, 0x1000001a2,
      [](uint8_t*) {}, [](const uint8_t*) {}));
  }

  static void InitializeWorkerSession(KUserWorkerSession* workerSession,
    KUserWorkerSession* deviceSession, JobEventPool* eventPool) {
    int index = 0;
    NN_ABORT_UNLESS(eventPool->TryAcquire(&index, os::GetSystemTickOrdered()));
    NN_ABORT_UNLESS_RESULT_SUCCESS(deviceSession->Invoke(0x100000025,
      0x100000025,
      [&](uint8_t* message) {
        tipc::WriteMessage<uint32_t>(message, 8, index);
      },
      [](const uint8_t*) {}));
    eventPool->Wait(index);

    gsdrv::UniqueNativeHandle sessionHandle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(deviceSession->OpenWorkerSession(
      gsv::OutNativeHandle{&sessionHandle}));
    AttachSession(workerSession, &sessionHandle);
  }
};

namespace {

// The pool passes the address of its context, the device session pointer.
Result CreateJobEvent(void* context, gsdrv::UniqueNativeHandle* pOutHandle,
  int index) {
  KUserWorkerSession* session = *static_cast<KUserWorkerSession**>(context);
  return session->OpenJobEvent(gsv::OutNativeHandle{pOutHandle}, index);
}

}

// The server reports the first usable event and the event count. Every
// event outside that range is marked as used.
void JobEventPool::Initialize(KUserWorkerSession* session) {
  uint32_t first;
  uint32_t count;
  NN_ABORT_UNLESS_RESULT_SUCCESS(session->Invoke(0x1b, 0x30000001b,
    [](uint8_t*) {},
    [&](const uint8_t* message) {
      first = tipc::ReadMessage<uint32_t>(message, 12);
      count = tipc::ReadMessage<uint32_t>(message, 16);
    }));
  const uint32_t last = count < EventCountMax ? count : EventCountMax;
  NN_ABORT_UNLESS(first <= last);
  usedMask.store(~MakeLowMask(first) ^ MakeLowMask(last + 1),
    std::memory_order_relaxed);
  createEvent = CreateJobEvent;
  context = session;
}

}

namespace nn::gpu::sdk {

using impl::user::UserBootFunction;

void BootWithTransferMemory(void* address, size_t size,
  gsv::MemoryRegion region) {
  gsv::UserSession* session = gsv::GetUserSession();
  NN_ABORT_UNLESS(session != nullptr);
  UserBootFunction::BootWithTransferMemory(&impl::user::g_DeviceSession,
    &impl::user::g_JobEventPool, &impl::user::g_WorkerSession,
    &impl::user::g_GpuAddressSpaceManager, session, address, size, region);
  impl::user::g_pGsvUserSession = session;
}

void BootWithRemoteMemory(gsv::MemoryRegion region) {
  gsv::UserSession* session = gsv::GetUserSession();
  NN_ABORT_UNLESS(session != nullptr);
  UserBootFunction::BootWithRemoteMemory(&impl::user::g_DeviceSession,
    &impl::user::g_JobEventPool, &impl::user::g_WorkerSession,
    &impl::user::g_GpuAddressSpaceManager, session, region);
  impl::user::g_pGsvUserSession = session;
}

using impl::user::g_GpuMemoryManager;

Result CreateGpuAccessibleMemory(GpuMemoryHandle* pOutHandle,
  const GraphicsDeviceType* device, void* address, size_t size,
  ComptagAllocMode mode, os::MemoryAttribute attribute) {
  static_cast<void>(mode);
  uint32_t handle = 0;
  NN_RESULT_DO(g_GpuMemoryManager.Create(&handle,
    &impl::user::g_WorkerSession, &impl::user::g_JobEventPool, address, size,
    attribute, device->id));
  const_cast<GraphicsDeviceType*>(device)->referenceCount.fetch_add(1,
    std::memory_order_relaxed);
  pOutHandle->value = handle;
  return Result{0};
}

void DestroyGpuAccessibleMemory(const GraphicsDeviceType* device,
  GpuMemoryHandle handle, void* address, size_t size,
  os::MemoryAttribute attribute) {
  g_GpuMemoryManager.Destroy(&impl::user::g_WorkerSession,
    &impl::user::g_JobEventPool, handle.value, address, size, attribute);
  const int32_t referenceCount = static_cast<int32_t>(
    const_cast<GraphicsDeviceType*>(device)->referenceCount.fetch_sub(1,
      std::memory_order_relaxed));
  NN_ABORT_UNLESS(referenceCount > 0);
}

bool TryQueryDonatedTransferMemoryUsage(size_t* pOutTotalSize,
  size_t* pOutUsedSize, size_t* pOutPeakUsedSize) {
  gsv::UserSession* session = gsv::GetUserSession();
  NN_ABORT_UNLESS(session != nullptr);
  uint64_t totalSize;
  uint64_t usedSize;
  uint64_t peakUsedSize;
  const Result result = session->Invoke(0x202, 0x700000202,
    [](uint8_t*) {},
    [&](const uint8_t* message) {
      totalSize = tipc::ReadMessage<uint64_t>(message, 12);
      usedSize = tipc::ReadMessage<uint64_t>(message, 20);
      peakUsedSize = tipc::ReadMessage<uint64_t>(message, 28);
    });
  if (result.IsFailure()) {
    return false;
  }
  *pOutTotalSize = totalSize;
  *pOutUsedSize = usedSize;
  *pOutPeakUsedSize = peakUsedSize;
  return true;
}

}
