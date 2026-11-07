#pragma once

#include <stddef.h>
#include <stdint.h>

#include <atomic>

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/gs/gs_sdk_types.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/util/intrusive_list.hpp"
#include "nn/vi2/vi2_frontend.hpp"
#include "nn/vi2/vi2_service_functions.hpp"

namespace nn::vi2 {

namespace detail {

class FrontendImpl;

}

struct DisplayType {
  os::SdkMutexType mutex;
  uint32_t reserved4;
  detail::FrontendImpl* pFrontend;
  uint64_t id;
  uint32_t reserved18;
  std::atomic<uint32_t> vsyncEventCount;
  std::atomic<uint32_t> refreshRateEventCount;
  std::atomic<uint32_t> hdrStatusEventCount;
  std::atomic<uint32_t> hdrPaperWhiteEventCount;
  std::atomic<uint32_t> bufferMaxResolutionEventCount;
  std::atomic<uint32_t> modeCapabilityEventCount;
  std::atomic<uint32_t> availableRefreshRatesEventCount;
  util::IntrusiveListNode endpoints;
};

namespace detail {

// Links an object into the list of its owner, which it points back to.
template <typename Owner>
struct OwnerLink {
  std::atomic<Owner*> pOwner;
  util::IntrusiveListNode node;

  static OwnerLink* FromNode(util::IntrusiveListNode* node) {
    return reinterpret_cast<OwnerLink*>(
      reinterpret_cast<uint8_t*>(node) - offsetof(OwnerLink, node));
  }
};

}

struct EndpointType {
  uint64_t reserved0 = 0;
  detail::FrontendImpl* pFrontend = nullptr;
  uint64_t displayId = 0;
  uint64_t settings = 0;
  util::IntrusiveListNode layers;
  uint64_t reserved30 = 0;
  detail::OwnerLink<DisplayType> link = {nullptr, {}};
};

namespace detail {

// Display events share one layout: the display, the service event id and the
// system event holding the readable handle of the service event.
struct DisplayEventType {
  DisplayType* pDisplay;
  uint32_t id;
  os::SystemEventType systemEvent;
};

}

struct VsyncEventType : detail::DisplayEventType {};
struct RefreshRateEventType : detail::DisplayEventType {};
struct HdrStatusEventType : detail::DisplayEventType {};
struct HdrPaperWhiteEventType : detail::DisplayEventType {};
struct BufferMaxResolutionEventType : detail::DisplayEventType {};
struct ModeCapabilityEventType : detail::DisplayEventType {};
struct AvailableRefreshRatesEventType : detail::DisplayEventType {};

struct BufferPoolType {
  uint32_t memory;
  uint32_t image;
  uint64_t address;
  uint64_t size;
};

struct PanelIdentifier {
  uint64_t value[3];
};

// Timestamps of the checkpoints a layer recorded, one per set checkpoint bit,
// fetched from the service while some are still pending.
struct TimestampRecorderType {
  os::SdkMutexType mutex;
  uint32_t id;
  uint8_t hasPendingTimestamps;
  uint8_t isAttached;
  uint64_t releaseFence[2];
  uint64_t checkpoints;
  uint64_t timestamps[8];
  int64_t lastQueryTick;
};

namespace detail {

// The buffer queue of a layer, which starts at `+0x28` of the layer.
struct LayerQueue {
  Result Present(uint32_t index, const gs::NativeSyncHandle& sync);
  Result Release(const uint64_t (&fence)[2], uint32_t index, uint32_t flags);
};

}

struct LayerBufferSlot {
  uint8_t state;
  uint32_t image;
  uint64_t acquiredBits;
  uint64_t fence[2];
};

struct LayerType {
  uint8_t reserved0[0x58];
  uint16_t cropLeft;
  uint16_t cropTop;
  uint16_t cropRight;
  uint16_t cropBottom;
  uint64_t reserved60 : 1;
  uint64_t hasCrop : 1;
  uint64_t reserved62 : 14;
  uint64_t rotation : 3;
  uint64_t rotationResolveMode : 1;
  uint64_t reserved74 : 4;
  uint64_t rotationFlag : 1;
  uint64_t rotationValue : 7;
  uint64_t permission : 16;
  uint64_t permissionMask : 16;
  uint8_t reserved68[0x10];
  uint64_t hasExtendedLuminanceRange : 1;
  uint64_t hasStandardLuminanceRange : 1;
  uint64_t userDataType : 4;
  uint64_t hasContentGamut : 1;
  uint64_t hasToneMapping : 1;
  uint64_t reserved78 : 56;
  uint16_t extendedLuminanceMin;
  uint16_t extendedLuminanceMax;
  uint16_t standardLuminanceMin;
  uint16_t standardLuminanceMax;
  uint64_t reserved88 : 4;
  uint64_t contentGamut : 4;
  uint64_t toneMapping : 4;
  uint64_t reserved88b : 20;
  uint64_t content : 16;
  uint64_t contentMask : 16;
  uint64_t userData;
  bool hasExtendedSwapInterval;
  uint8_t swapInterval;
  uint16_t swapIntervalNumerator;
  uint16_t swapIntervalDenominator;
  bool isTimestampRecorderChanged;
  TimestampRecorderType* pTimestampRecorder;
  uint64_t timestampCheckpoints;
  bool isBezierMetadataChanged;
  uint8_t reservedb1[3];
  bool hasBezierMetadata;
  uint8_t reservedb5[3];
  float bezierKneeX;
  float bezierKneeY;
  float bezierAnchor;
  uint8_t reservedc4[0xc];
  uint64_t acquiredBits;
  LayerBufferSlot slots[15];
  uint32_t queueHead;
  uint32_t queueTail;
  uint32_t queue[16];
  uint64_t nextFrameNumber;
  uint8_t reserved308[0x18];
  uint8_t hasFixedSettings;
  uint8_t reserved321[0xf];
  uint64_t fixedSettings;
  uint16_t bufferWidth;
  uint16_t bufferHeight;
  uint32_t hdrColorEncoding;
  uint16_t hdrLinearUnitLuminance;
  void* nativeWindowHandle;

  detail::LayerQueue* GetQueue() {
    return reinterpret_cast<detail::LayerQueue*>(reserved0 + 0x28);
  }

  bool IsFixed(uint64_t setting) const {
    return hasFixedSettings == 1 && (fixedSettings & setting) != 0;
  }
};

namespace detail {

// Hands out the ids of the service events. A free id keeps the event handle
// the service gave for it, which is fetched again after the client
// reconnected.
class EventIdPool {
public:
  Result Allocate(uint32_t* pOutId, uint32_t* pOutHandle,
    FrontendImpl* pFrontend);

  void Free(uint32_t id) {
    std::atomic_thread_fence(std::memory_order_seq_cst);
    m_UsedBits[id / 64].fetch_and(~(uint64_t(1) << (id % 64)),
      std::memory_order_release);
  }

private:
  enum State : uint32_t {
    State_Empty,
    State_Ready,
    State_Stale,
  };

  uint64_t m_Count;
  uint64_t m_WordCount;
  std::atomic<uint64_t> m_UsedBits[1];
  std::atomic<uint32_t> m_States[8];
  std::atomic<uint32_t> m_Handles[8];
};

// Refreshes the timestamps at most every 100 microseconds while the service
// reports pending ones. Missing entries are cleared.
[[gnu::always_inline]] inline void UpdateTimestamps(
  TimestampRecorderType* pRecorder, ServiceFunctions* pFunctions) {
  uint64_t count = 0;
  bool isPending = false;
  const Result result = pFunctions->getRecordedTimestamps(
    pFunctions->context, &count, &isPending, pRecorder->id,
    pRecorder->checkpoints, pRecorder->timestamps, 8);
  pRecorder->lastQueryTick = os::GetSystemTick().value;

  if (result.IsSuccess()) {
    if (count <= 7) {
      __builtin_memset(&pRecorder->timestamps[count], 0,
        sizeof(pRecorder->timestamps) - count * sizeof(uint64_t));
    }

    if (!isPending) {
      pRecorder->hasPendingTimestamps = 0;
    }
  }
}

// Fetches the pending timestamps of a recorder once more before it is
// destroyed, they must be complete by then.
struct TimestampRecorderFlusher {
  TimestampRecorderType*& pRecorder;

  [[gnu::noinline]] Result operator()(FrontendImpl* pFrontend) const;
};

class FrontendImpl {
public:
  ServiceFunctions* GetFunctions() const {
    return m_pFunctions;
  }

  template <typename Event, typename Create>
  [[gnu::always_inline]] Result CreateDisplayEvent(Event* pEvent,
    const DisplayType* pDisplay, os::EventClearMode clearMode,
    std::atomic<uint32_t> DisplayType::* count, Create create) {
    uint32_t id = 0;
    uint32_t handle = 0;
    NN_RESULT_DO(m_EventIdPool.Allocate(&id, &handle, this));

    ServiceFunctions* functions = pDisplay->pFrontend->GetFunctions();
    const Result result = create(functions, pDisplay->id, id);

    if (result.IsFailure()) {
      m_EventIdPool.Free(id);
      return result;
    }

    DisplayType* display = const_cast<DisplayType*>(pDisplay);
    (display->*count).fetch_add(1, std::memory_order_relaxed);
    pEvent->pDisplay = display;
    pEvent->id = id;
    __builtin_memset(pEvent->systemEvent.storage, 0,
      sizeof(pEvent->systemEvent.storage));
    pEvent->systemEvent.state = 0;
    os::AttachReadableHandleToSystemEvent(&pEvent->systemEvent, handle,
      false, clearMode);
    return {0};
  }

  template <typename Event, typename Destroy>
  [[gnu::always_inline]] void DestroyDisplayEvent(Event* pEvent,
    std::atomic<uint32_t> DisplayType::* count, Destroy destroy) {
    DisplayType* display = pEvent->pDisplay;
    const uint32_t id = pEvent->id;

    // The readable handle is queried but not used.
    os::GetReadableHandleOfSystemEvent(&pEvent->systemEvent);
    os::DestroySystemEvent(&pEvent->systemEvent);
    destroy(display->pFrontend->GetFunctions(), display->id, id);
    m_EventIdPool.Free(id);
    (display->*count).fetch_sub(1, std::memory_order_relaxed);
  }

  template <typename Event>
  [[gnu::always_inline]] Result DuplicateDisplayEvent(
    os::SystemEventType* pOutEvent, const Event* pEvent,
    os::EventClearMode clearMode) {
    const uint32_t id = pEvent->id;
    gsdrv::UniqueNativeHandle handle;
    const Result result = m_pFunctions->duplicateEvent(m_pFunctions->context,
      &handle, id, os::GetReadableHandleOfSystemEvent(&pEvent->systemEvent));

    if (result.IsSuccess()) {
      os::AttachReadableHandleToSystemEvent(pOutEvent, handle.Release(),
        true, clearMode);
    }

    return result;
  }

  Result CreateBufferPool(BufferPoolType* pPool,
    const BufferDescriptor& descriptor, uint64_t count, void* address,
    uint64_t size, os::MemoryPermission permission);
  Result CreateBufferPoolForSystem(BufferPoolType* pPool,
    const BufferDescriptor& descriptor, uint64_t count, void* address,
    uint64_t size, os::MemoryPermission permission);
  Result CreateBufferPoolWithTransferMemory(BufferPoolType* pPool,
    const BufferPreference& preference, uint32_t count,
    gsdrv::UniqueNativeHandle* pHandle, uint64_t size,
    os::MemoryPermission permission);
  Result CreateBufferPoolWithProtectedMemory(BufferPoolType* pPool,
    const BufferPreference& preference, uint64_t count, uint64_t size);
  Result CreateAliasBufferPool(BufferPoolType* pPool,
    gs::NativeImageHandle image, uint64_t count);
  void DestroyBufferPool(BufferPoolType* pPool);

  Result CreateTimestampRecorder(TimestampRecorderType* pRecorder);
  void DestroyTimestampRecorder(TimestampRecorderType* pRecorder);
  uint64_t GetRecordedTimestamp(TimestampRecorderType* pRecorder,
    BufferCheckpointBits checkpoint);

  ServiceFunctions* m_pFunctions;
  void* m_pInitialBufferPermission;
  void* m_pInitialBufferContent;
  EventIdPool m_EventIdPool;
  uint8_t reserved70[0x220];
  os::SdkMutexType m_TimestampRecorderMutex;
  uint8_t m_IsTimestampRecorderInitialized;
  uint32_t m_TimestampRecorderCount;
  // Indexed by word, the recorder ids all fit the first one.
  std::atomic<uint32_t> m_TimestampRecorderUsedBits[1];
};

void SetUpFrontend(Frontend* pFrontend);

}

}

namespace nn::vi2 {

static_assert(offsetof(DisplayType, availableRefreshRatesEventCount) == 52);
static_assert(offsetof(detail::FrontendImpl, m_TimestampRecorderUsedBits) ==
  668);
static_assert(offsetof(TimestampRecorderType, lastQueryTick) == 104);
static_assert(offsetof(detail::DisplayEventType, systemEvent) == 16);
static_assert(offsetof(DisplayType, endpoints) == 56);
static_assert(offsetof(EndpointType, link) == 56);
static_assert(offsetof(LayerType, cropLeft) == 88);
static_assert(offsetof(LayerType, userData) == 144);
static_assert(offsetof(LayerType, pTimestampRecorder) == 160);
static_assert(offsetof(LayerType, hasBezierMetadata) == 180);
static_assert(offsetof(LayerType, acquiredBits) == 208);
static_assert(offsetof(LayerType, queueHead) == 696);
static_assert(offsetof(LayerType, nextFrameNumber) == 768);
static_assert(offsetof(LayerType, fixedSettings) == 816);
static_assert(offsetof(LayerType, nativeWindowHandle) == 840);

}
