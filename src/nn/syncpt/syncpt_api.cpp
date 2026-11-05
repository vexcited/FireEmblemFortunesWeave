#include "nn/diag/diag_abort.hpp"
#include "nn/gs/gs_native_window.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/syncpt/syncpt_sdk.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::syncpt {

namespace detail {

using sdk::SyncCounterId;
using sdk::SyncPointEventType;
using sdk::SyncPointHandle;
using sdk::SyncReportRequest;
using sdk::SyncValueMode;

// The backend copies every handle it is given, so handles are passed by
// pointer to a local copy.
struct Library {
  void* reserved0[3];
  void* context;
  void* reserved20;
  SyncPointHandle (*makeSyncPointHandle)(void* context, SyncCounterId id,
    uint64_t value, SyncValueMode mode);
  SyncReportRequest (*makeSyncReportRequest)(void* context, SyncCounterId id,
    uint64_t value, SyncValueMode mode);
  void (*extractSyncPointHandle)(void* context, SyncCounterId* pOutId,
    uint64_t* pOutValue, SyncValueMode* pOutMode,
    const SyncPointHandle* pHandle);
  void (*extractSyncReportRequest)(void* context, SyncCounterId* pOutId,
    uint64_t* pOutValue, SyncValueMode* pOutMode,
    const SyncReportRequest* pRequest);
  Result (*querySyncCounterValue)(void* context, uint64_t* pOutValue,
    SyncValueMode* pOutMode, SyncCounterId id);
  void (*waitSyncPoint)(void* context, const SyncPointHandle* pHandle);
  bool (*tryWaitSyncPoint)(void* context, const SyncPointHandle* pHandle);
  bool (*timedWaitSyncPoint)(void* context, const SyncPointHandle* pHandle,
    TimeSpan timeout);
  Result (*createSyncPointEvent)(void* context, SyncPointEventType* pEvent);
  void (*destroySyncPointEvent)(void* context, SyncPointEventType* pEvent);
  bool (*tryWaitSyncPointEvent)(void* context,
    const SyncPointEventType* pEvent);
  void (*requestSyncPointEvent)(void* context, SyncPointEventType* pEvent,
    const SyncPointHandle* pHandle);
  void (*cancelSyncPointEvent)(void* context, SyncPointEventType* pEvent);
  void (*initializeMultiWaitHolder)(void* context,
    os::MultiWaitHolderType* pHolder, SyncPointEventType* pEvent);
  void* reserved98[21];
  void (*makeNvRmFenceFromSyncPointHandle)(void* context, uint32_t* pOutId,
    uint32_t* pOutValue, const SyncPointHandle* pHandle);
  SyncPointHandle (*makeSyncPointHandleFromNvRmFence)(void* context,
    uint32_t id, uint32_t value);
  uint32_t (*makeNvRmSyncPointId)(void* context, SyncCounterId id);
  SyncCounterId (*makeCounterId)(void* context, uint32_t id);
};

static_assert(__builtin_offsetof(Library, makeSyncPointHandle) == 0x28);
static_assert(__builtin_offsetof(Library, initializeMultiWaitHolder) == 0x90);
static_assert(__builtin_offsetof(Library, makeNvRmFenceFromSyncPointHandle) ==
  0x140);

}

const detail::Library* GetLibraryVersion();

}

namespace nn::syncpt::sdk {

namespace detail {

void Initialize(void* pBuffer, size_t bufferSize, LibraryOptions options);

}

void Initialize() {
  detail::Initialize(nullptr, 0, LibraryOptions());
}

void InitializeEx(void* pBuffer, size_t bufferSize, LibraryOptions options) {
  detail::Initialize(pBuffer, bufferSize, options);
}

void MakeNvRmFenceFromSyncPointHandle(uint32_t* pOutId, uint32_t* pOutValue,
  const SyncPointHandle& handle) {
  const auto function = GetLibraryVersion()->makeNvRmFenceFromSyncPointHandle;
  const SyncPointHandle copy = handle;
  function(GetLibraryVersion()->context, pOutId, pOutValue, &copy);
}

SyncPointHandle MakeSyncPointHandleFromNvRmFence(uint32_t id, uint32_t value) {
  const auto function = GetLibraryVersion()->makeSyncPointHandleFromNvRmFence;
  return function(GetLibraryVersion()->context, id, value);
}

uint32_t MakeNvRmSyncPointId(SyncCounterId id) {
  const auto function = GetLibraryVersion()->makeNvRmSyncPointId;
  return function(GetLibraryVersion()->context, id);
}

SyncCounterId MakeCounterId(uint32_t id) {
  const auto function = GetLibraryVersion()->makeCounterId;
  return function(GetLibraryVersion()->context, id);
}

SyncPointHandle MakeSyncPointHandle(SyncCounterId id, uint64_t value,
  SyncValueMode mode) {
  const auto function = GetLibraryVersion()->makeSyncPointHandle;
  return function(GetLibraryVersion()->context, id, value, mode);
}

void ExtractSyncPointHandle(SyncCounterId* pOutId, uint64_t* pOutValue,
  SyncValueMode* pOutMode, const SyncPointHandle& handle) {
  SyncCounterId id = {};
  uint64_t value = 0;
  SyncValueMode mode = {};
  const auto function = GetLibraryVersion()->extractSyncPointHandle;
  const SyncPointHandle copy = handle;
  function(GetLibraryVersion()->context, &id, &value, &mode, &copy);
  *pOutId = id;
  *pOutValue = value;
  *pOutMode = mode;
}

SyncReportRequest MakeSyncReportRequest(SyncCounterId id, uint64_t value,
  SyncValueMode mode) {
  const auto function = GetLibraryVersion()->makeSyncReportRequest;
  return function(GetLibraryVersion()->context, id, value, mode);
}

void ExtractSyncReportRequest(SyncCounterId* pOutId, uint64_t* pOutValue,
  SyncValueMode* pOutMode, const SyncReportRequest& request) {
  SyncCounterId id = {};
  uint64_t value = 0;
  SyncValueMode mode = {};
  const auto function = GetLibraryVersion()->extractSyncReportRequest;
  const SyncReportRequest copy = request;
  function(GetLibraryVersion()->context, &id, &value, &mode, &copy);
  *pOutId = id;
  *pOutValue = value;
  *pOutMode = mode;
}

SyncPointHandle MakeSyncPointHandleFromNativeSyncHandle(
  const gs::NativeSyncHandle& sync) {
  return {{sync.value[0], sync.value[1]}};
}

void WaitSyncPoint(const SyncPointHandle& handle) {
  const auto function = GetLibraryVersion()->waitSyncPoint;
  const SyncPointHandle copy = handle;
  function(GetLibraryVersion()->context, &copy);
}

bool TryWaitSyncPoint(const SyncPointHandle& handle) {
  const auto function = GetLibraryVersion()->tryWaitSyncPoint;
  const SyncPointHandle copy = handle;
  return function(GetLibraryVersion()->context, &copy);
}

bool TimedWaitSyncPoint(const SyncPointHandle& handle, TimeSpan timeout) {
  const auto function = GetLibraryVersion()->timedWaitSyncPoint;
  const SyncPointHandle copy = handle;
  return function(GetLibraryVersion()->context, &copy, timeout);
}

Result CreateSyncPointEvent(SyncPointEventType* pEvent) {
  const auto function = GetLibraryVersion()->createSyncPointEvent;
  return function(GetLibraryVersion()->context, pEvent);
}

void DestroySyncPointEvent(SyncPointEventType* pEvent) {
  const auto function = GetLibraryVersion()->destroySyncPointEvent;
  function(GetLibraryVersion()->context, pEvent);
}

bool TryWaitSyncPointEvent(const SyncPointEventType* pEvent) {
  const auto function = GetLibraryVersion()->tryWaitSyncPointEvent;
  return function(GetLibraryVersion()->context, pEvent);
}

void RequestSyncPointEvent(SyncPointEventType* pEvent,
  const SyncPointHandle& handle) {
  const auto function = GetLibraryVersion()->requestSyncPointEvent;
  const SyncPointHandle copy = handle;
  function(GetLibraryVersion()->context, pEvent, &copy);
}

void CancelSyncPointEvent(SyncPointEventType* pEvent) {
  const auto function = GetLibraryVersion()->cancelSyncPointEvent;
  function(GetLibraryVersion()->context, pEvent);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* pHolder,
  SyncPointEventType* pEvent) {
  const auto function = GetLibraryVersion()->initializeMultiWaitHolder;
  function(GetLibraryVersion()->context, pHolder, pEvent);
}

Result QuerySyncCounterValue(uint64_t* pOutValue, SyncValueMode* pOutMode,
  SyncCounterId id) {
  uint64_t value = 0;
  SyncValueMode mode = {};
  const auto function = GetLibraryVersion()->querySyncCounterValue;
  NN_RESULT_DO(function(GetLibraryVersion()->context, &value, &mode, id));
  *pOutValue = value;
  switch (mode) {
    case SyncValueMode_Absolute:
    case SyncValueMode_Relative:
      *pOutMode = mode;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  return Result();
}

}
