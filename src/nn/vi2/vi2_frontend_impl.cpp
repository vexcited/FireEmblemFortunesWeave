#include <math.h>

#include <new>

#include "nn/vi2/vi2_frontend_impl.hpp"

namespace nn::vi2::detail {

namespace {

constexpr Result ResultInvalidDisplayState = {0x1472};
constexpr Result ResultNoBufferAvailable = {0xe72};
constexpr Result ResultNoFrameNumber = {0x1672};
constexpr Result ResultOutOfEvents = {0x1872};
constexpr Result ResultAlreadyLinked = {0x272};

constexpr uint64_t FixedSetting_SwapInterval = 1 << 0;
constexpr uint64_t FixedSetting_Crop = 1 << 1;
constexpr uint64_t FixedSetting_CropOverride = 1 << 2;
constexpr uint64_t FixedSetting_HdrMetadata = 1 << 3;

FrontendImpl* GetImpl(void* context) {
  return static_cast<FrontendImpl*>(context);
}

ServiceFunctions* GetFunctions(const DisplayType* pDisplay) {
  return pDisplay->pFrontend->GetFunctions();
}

template <typename Tag>
void UpdateBits(util::BitFlagSet<64, Tag>* pSet, uint64_t value,
  uint64_t mask) {
  uint64_t bits;
  __builtin_memcpy(&bits, pSet->_storage, sizeof(bits));
  bits = (bits & ~mask) | (value & mask);
  __builtin_memcpy(pSet->_storage, &bits, sizeof(bits));
}

}

Result EventIdPool::Allocate(uint32_t* pOutId, uint32_t* pOutHandle,
  FrontendImpl* pFrontend) {
  uint32_t id;

  for (uint64_t word = 0;; ++word) {
    if (word == m_WordCount) {
      return ResultOutOfEvents;
    }

    uint64_t bits = m_UsedBits[word].load(std::memory_order_relaxed);
    bool isFound = false;

    while (bits != ~uint64_t(0)) {
      const uint32_t bit = __builtin_ctzll(~bits);

      if (m_UsedBits[word].compare_exchange_strong(bits,
        bits | (uint64_t(1) << bit), std::memory_order_acquire)) {
        id = bit | uint32_t(word << 6);
        isFound = true;
        break;
      }
    }

    if (isFound) {
      break;
    }
  }

  switch (m_States[id].load(std::memory_order_relaxed)) {
    case State_Ready:
      break;
    case State_Stale:
    case State_Empty: {
      if (m_States[id].load(std::memory_order_relaxed) == State_Stale) {
        const uint32_t stale =
          m_Handles[id].exchange(0, std::memory_order_relaxed);

        if (stale != 0) {
          os::CloseNativeHandle(stale);
        }

        m_States[id].store(State_Empty, std::memory_order_relaxed);
      }

      gsdrv::UniqueNativeHandle handle;
      ServiceFunctions* functions = pFrontend->GetFunctions();
      const Result result =
        functions->getDisplayEvent(functions->context, &handle, id);

      if (result.IsSuccess()) {
        uint32_t expected = 0;
        NN_ABORT_UNLESS(m_Handles[id].compare_exchange_strong(expected,
          handle.GetHandle(), std::memory_order_relaxed));
        handle.Release();
        uint32_t state = State_Empty;
        m_States[id].compare_exchange_strong(state, State_Ready,
          std::memory_order_release, std::memory_order_relaxed);
      }
      else {
        m_UsedBits[id / 64].fetch_and(~(uint64_t(1) << (id % 64)),
          std::memory_order_release);
        return result;
      }

      break;
    }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  *pOutId = id;
  *pOutHandle = m_Handles[id].load(std::memory_order_relaxed);
  return {0};
}

Result FrontendImpl::CreateBufferPool(BufferPoolType* pPool,
  const BufferDescriptor& descriptor, uint64_t count, void* address,
  uint64_t size, os::MemoryPermission permission) {
  pPool->address = 0;
  pPool->size = 0;
  pPool->memory = 0;
  pPool->image = 0;

  gs::NativeMemoryHandle memory = {0};
  NN_RESULT_DO(m_pFunctions->createNativeMemory(m_pFunctions->context,
    &memory, address, size, permission, gs::cpu::MemoryCacheability{}));

  uint32_t image = 0;
  const Result result = m_pFunctions->createNativeImage(
    m_pFunctions->context, &image,
    reinterpret_cast<const ImageDescriptor&>(descriptor), uint32_t(count),
    memory.value);

  if (result.IsFailure()) {
    m_pFunctions->destroyNativeMemory(m_pFunctions->context, memory);
    return result;
  }

  pPool->memory = memory.value;
  pPool->image = image;
  return {0};
}

Result FrontendImpl::CreateBufferPoolForSystem(BufferPoolType* pPool,
  const BufferDescriptor& descriptor, uint64_t count, void* address,
  uint64_t size, os::MemoryPermission permission) {
  pPool->address = 0;
  pPool->size = 0;
  pPool->memory = 0;
  pPool->image = 0;

  gs::NativeMemoryHandle memory = {0};
  NN_RESULT_DO(m_pFunctions->createNativeMemory(m_pFunctions->context,
    &memory, address, size, permission, gs::cpu::MemoryCacheability{}));

  uint32_t image = 0;
  const Result result = m_pFunctions->createNativeImageForSystem(
    m_pFunctions->context, &image,
    reinterpret_cast<const ImageDescriptor&>(descriptor), uint32_t(count),
    memory.value);

  if (result.IsFailure()) {
    m_pFunctions->destroyNativeMemory(m_pFunctions->context, memory);
    return result;
  }

  pPool->address = reinterpret_cast<uint64_t>(address);
  pPool->size = size;
  pPool->memory = memory.value;
  pPool->image = image;
  return {0};
}

Result FrontendImpl::CreateBufferPoolWithTransferMemory(BufferPoolType* pPool,
  const BufferPreference& preference, uint32_t count,
  gsdrv::UniqueNativeHandle* pHandle, uint64_t size,
  os::MemoryPermission permission) {
  pPool->address = 0;
  pPool->size = 0;
  pPool->memory = 0;
  pPool->image = 0;

  gs::NativeMemoryHandle memory = {0};
  NN_RESULT_DO(m_pFunctions->createNativeMemoryWithTransferMemory(
    m_pFunctions->context, &memory,
    static_cast<gsdrv::UniqueNativeHandle&&>(*pHandle), size, permission));

  uint32_t image = 0;
  const Result result = m_pFunctions->createNativeImageForSystem(
    m_pFunctions->context, &image,
    reinterpret_cast<const ImageDescriptor&>(preference), uint32_t(count),
    memory.value);

  if (result.IsFailure()) {
    m_pFunctions->destroyNativeMemory(m_pFunctions->context, memory);
    return result;
  }

  pPool->address = 0;
  pPool->memory = memory.value;
  pPool->image = image;
  return {0};
}

Result FrontendImpl::CreateBufferPoolWithProtectedMemory(
  BufferPoolType* pPool, const BufferPreference& preference, uint64_t count,
  uint64_t size) {
  pPool->address = 0;
  pPool->size = 0;
  pPool->memory = 0;
  pPool->image = 0;

  gs::NativeMemoryHandle memory = {0};
  NN_RESULT_DO(m_pFunctions->createNativeMemoryWithProtectedMemory(
    m_pFunctions->context, &memory, size));

  uint32_t image = 0;
  const Result result = m_pFunctions->createNativeImageForSystem(
    m_pFunctions->context, &image,
    reinterpret_cast<const ImageDescriptor&>(preference), uint32_t(count),
    memory.value);

  if (result.IsFailure()) {
    m_pFunctions->destroyNativeMemory(m_pFunctions->context, memory);
    return result;
  }

  pPool->address = 0;
  pPool->memory = memory.value;
  pPool->image = image;
  return {0};
}

Result FrontendImpl::CreateAliasBufferPool(BufferPoolType* pPool,
  gs::NativeImageHandle image, uint64_t count) {
  pPool->address = 0;
  pPool->size = 0;
  pPool->memory = 0;
  pPool->image = 0;
  NN_RESULT_DO(m_pFunctions->createAliasImage(m_pFunctions->context,
    image.value, uint32_t(count)));
  pPool->image = image.value;
  return {0};
}

void FrontendImpl::DestroyBufferPool(BufferPoolType* pPool) {
  ServiceFunctions* functions = m_pFunctions;
  const uint32_t memory = pPool->memory;
  const uint32_t image = pPool->image;

  if (memory != 0) {
    functions->destroyNativeImage(functions->context, image);
    m_pFunctions->destroyNativeMemory(m_pFunctions->context,
      gs::NativeMemoryHandle{pPool->memory});
  }
  else {
    functions->destroyAliasImage(functions->context, image);
  }

  pPool->memory = 0;
  pPool->image = 0;
}

Result FrontendImpl::CreateTimestampRecorder(
  TimestampRecorderType* pRecorder) {
  m_TimestampRecorderMutex.Lock();

  if ((m_IsTimestampRecorderInitialized & 1) == 0) {
    uint32_t maxIndex = 0;
    Result result = m_pFunctions->getMaxTimestampRecorderIndex(
      m_pFunctions->context, &maxIndex);

    if (result.IsSuccess()) {
      maxIndex = maxIndex >= 7 ? 7 : maxIndex;
      result = m_pFunctions->initializeTimestampRecorders(
        m_pFunctions->context, maxIndex);
    }

    if (result.IsFailure()) {
      m_TimestampRecorderMutex.Unlock();
      return result;
    }

    m_TimestampRecorderUsedBits.fetch_and(~1u << maxIndex,
      std::memory_order_release);
    m_IsTimestampRecorderInitialized = 1;
  }

  ++m_TimestampRecorderCount;
  uint32_t bits = m_TimestampRecorderUsedBits.load(std::memory_order_relaxed);
  uint32_t id;

  for (;;) {
    if (bits == ~0u) {
      --m_TimestampRecorderCount;
      m_TimestampRecorderMutex.Unlock();
      return ResultOutOfEvents;
    }

    id = __builtin_ctz(~bits);

    if (m_TimestampRecorderUsedBits.compare_exchange_strong(bits,
      bits | (1u << id), std::memory_order_acquire)) {
      break;
    }
  }

  m_TimestampRecorderMutex.Unlock();
  pRecorder->mutex = {};
  pRecorder->id = id;
  pRecorder->hasPendingTimestamps = 0;
  pRecorder->isAttached = 0;
  pRecorder->releaseFence[0] = 0;
  pRecorder->releaseFence[1] = 0;
  pRecorder->checkpoints = 0;

  for (uint64_t& timestamp : pRecorder->timestamps) {
    timestamp = 0;
  }

  pRecorder->lastQueryTick = 0;
  return {0};
}

void FrontendImpl::DestroyTimestampRecorder(
  TimestampRecorderType* pRecorder) {
  const uint32_t id = pRecorder->id;
  TimestampRecorderType* recorder = pRecorder;
  const TimestampRecorderFlusher flush = {recorder};
  NN_ABORT_UNLESS_RESULT_SUCCESS(flush(this));
  m_TimestampRecorderMutex.Lock();
  m_TimestampRecorderUsedBits.fetch_and(~(1u << id),
    std::memory_order_release);
  --m_TimestampRecorderCount;
  m_TimestampRecorderMutex.Unlock();
}

uint64_t FrontendImpl::GetRecordedTimestamp(TimestampRecorderType* pRecorder,
  BufferCheckpointBits checkpoint) {
  const uint64_t bit = uint64_t(checkpoint) & 0x1f;
  pRecorder->mutex.Lock();
  uint64_t timestamp = 0;

  if ((bit ^ (bit - 1)) > bit - 1 && pRecorder->checkpoints != 0) {
    const uint64_t index =
      __builtin_popcountll(pRecorder->checkpoints & (bit - 1));

    if (index <= 7) {
      timestamp = pRecorder->timestamps[index];

      if (timestamp == 0) {
        if (pRecorder->hasPendingTimestamps == 1) {
          const int64_t elapsed = os::ConvertToTimeSpan(
            {os::GetSystemTick().value - pRecorder->lastQueryTick})
            .nanoseconds;

          if (elapsed >= 100000) {
            UpdateTimestamps(pRecorder, m_pFunctions);
          }
        }

        timestamp = pRecorder->timestamps[index];
      }
    }
  }

  pRecorder->mutex.Unlock();
  return timestamp;
}

namespace {

// Picks the closest fraction with terms up to 0xffff from the continued
// fraction of the ratio, checking the last semiconvergent.
void SetExtendedSwapInterval(LayerType* pLayer, uint32_t numerator,
  int denominator) {
  NN_ABORT_UNLESS(denominator > 0);
  pLayer->hasExtendedSwapInterval = true;

  if (int32_t(numerator) < 0) {
    pLayer->swapIntervalNumerator = 0;
    pLayer->swapIntervalDenominator = 1;
    return;
  }

  const uint32_t divisor = uint32_t(denominator);
  const uint32_t quotient = numerator / divisor;

  if ((quotient >> 16) != 0) {
    pLayer->swapIntervalNumerator = 1;
    pLayer->swapIntervalDenominator = 1;
    return;
  }

  uint32_t h = quotient;
  uint32_t k = 1;
  uint32_t previousH = 1;
  uint32_t previousK = 0;
  uint32_t remainder = numerator - quotient * divisor;
  uint32_t current = divisor;

  while (remainder != 0) {
    const uint32_t term = current / remainder;
    uint32_t limitH = term;

    if (h != 0) {
      limitH = (0xffff - previousH) / h;
      limitH = term < limitH ? term : limitH;
    }

    uint32_t limitK = (0xffff - previousK) / k;
    limitK = term < limitK ? term : limitK;
    const uint32_t step = limitH < limitK ? limitH : limitK;

    if (step == 0) {
      break;
    }

    const uint32_t nextH = previousH + step * h;
    const uint32_t nextK = previousK + step * k;
    previousH = h;
    previousK = k;
    const uint32_t nextRemainder = current - term * remainder;
    current = remainder;
    remainder = nextRemainder;

    if (step >= term) {
      h = nextH;
      k = nextK;
      continue;
    }

    const uint32_t half = term >> 1;
    bool isNextCloser;

    if ((term & 1) == 0 && step == half) {
      const double ratio = double(numerator) / double(divisor);
      isNextCloser = fabs(double(h) / double(k) - ratio) >
        fabs(double(nextH) / double(nextK) - ratio);
    }
    else {
      isNextCloser = step > half;
    }

    if (isNextCloser) {
      h = nextH;
      k = nextK;
    }

    break;
  }

  if (h > k) {
    h = 1;
    k = 1;
  }

  pLayer->swapIntervalNumerator = uint16_t(h);
  pLayer->swapIntervalDenominator = uint16_t(k);
}

Result SetDisplayRefreshRateCapability(DisplayType* pDisplay,
  RefreshRate rate, RefreshRateCapability capability) {
  const uint8_t isEnabled = uint8_t(capability);
  NN_ABORT_UNLESS(rate != 60 || isEnabled != 0);

  if (int(rate) != 90) {
    uint64_t mask;

    switch (int(rate)) {
      case -1:
        mask = uint64_t(1) << 63;
        break;
      case 60:
        mask = 1;
        break;
      case 120:
        mask = 2;
        break;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }

    uint64_t value;

    switch (isEnabled) {
      case 0:
        value = 0;
        break;
      case 1:
        value = mask;
        break;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }

    ServiceFunctions* functions = GetFunctions(pDisplay);
    return functions->setDisplayRefreshRateCapability(functions->context,
      pDisplay->id, value, mask);
  }

  // A rate of 90 is accepted without a request and without a result.
}

Result SetDisplayHdrOutputFormatCapability(DisplayType* pDisplay,
  HdrOutputFormat format, HdrOutputFormatCapability capability) {
  const uint8_t isEnabled = uint8_t(capability);
  NN_ABORT_UNLESS(format != 0 || isEnabled != 0);
  uint64_t mask;

  switch (int(format)) {
    case 0:
      mask = 1;
      break;
    case 1:
      mask = 2;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  uint64_t value;

  switch (isEnabled) {
    case 0:
      value = 0;
      break;
    case 1:
      value = mask;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  ServiceFunctions* functions = GetFunctions(pDisplay);
  return functions->setDisplayHdrOutputFormatCapability(functions->context,
    pDisplay->id, value, mask);
}

Result QueryDisplayRefreshRate(RefreshRate* pOutRate, bool* pOutIsVariable,
  const DisplayType* pDisplay) {
  ServiceFunctions* functions = GetFunctions(pDisplay);
  uint64_t value = 0;
  NN_RESULT_DO(functions->queryDisplayRefreshRate(functions->context, &value,
    pDisplay->id));

  *pOutIsVariable = int64_t(value) < 0;

  if ((value & 1) != 0) {
    *pOutRate = RefreshRate(60);
  }
  else if ((value & 2) != 0) {
    *pOutRate = RefreshRate(120);
  }
  else {
    return ResultInvalidDisplayState;
  }

  return {0};
}

Result QueryDisplayHdrStatus(HdrOutputFormat* pOutFormat,
  uint16_t* pOutLuminance, const DisplayType* pDisplay) {
  ServiceFunctions* functions = GetFunctions(pDisplay);
  uint64_t format = 0;
  uint16_t luminance = 0;
  NN_RESULT_DO(functions->queryDisplayHdrStatus(functions->context, &format,
    &luminance, pDisplay->id));

  switch (format) {
    case 1:
      *pOutFormat = HdrOutputFormat(0);
      break;
    case 2:
      *pOutFormat = HdrOutputFormat(1);
      break;
    default:
      return ResultInvalidDisplayState;
  }

  *pOutLuminance = luminance;
  return {0};
}

Result QueryDisplayHdrPaperWhite(uint16_t* pOutValue,
  const DisplayType* pDisplay) {
  ServiceFunctions* functions = GetFunctions(pDisplay);
  uint16_t value = 0;
  NN_RESULT_DO(functions->queryDisplayHdrPaperWhite(functions->context,
    &value, pDisplay->id));
  *pOutValue = value;
  return {0};
}

Result QueryDisplayBufferMaxResolution(BufferMaxResolution* pOutValue,
  const DisplayType* pDisplay) {
  ServiceFunctions* functions = GetFunctions(pDisplay);
  uint64_t value = 0;
  NN_RESULT_DO(functions->queryDisplayBufferMaxResolution(functions->context,
    &value, pDisplay->id));
  uint32_t resolution;

  switch (value) {
    case 1:
      resolution = 0;
      break;
    case 2:
      resolution = 1;
      break;
    case 4:
      resolution = 2;
      break;
    case 8:
      resolution = 3;
      break;
    default:
      return ResultInvalidDisplayState;
  }

  *reinterpret_cast<uint32_t*>(pOutValue) = resolution;
  return {0};
}

Result QueryDisplayModeCapability(
  util::BitFlagSet<64, SupportedRefreshRateBit>* pOutRefreshRates,
  util::BitFlagSet<64, SupportedHdrOutputFormatBit>* pOutHdrOutputFormats,
  util::BitFlagSet<64, SupportedRefreshRateBit>* pOutVrrRefreshRates,
  const DisplayType* pDisplay) {
  ServiceFunctions* functions = GetFunctions(pDisplay);
  uint64_t refreshRates = 0;
  uint64_t hdrOutputFormats = 0;
  uint64_t vrrRefreshRates = 0;
  NN_RESULT_DO(functions->queryDisplayModeCapability(functions->context,
    &refreshRates, &hdrOutputFormats, &vrrRefreshRates, pDisplay->id));

  constexpr uint64_t RefreshRateBits = 0x8000000000000003;
  UpdateBits(pOutRefreshRates, refreshRates, RefreshRateBits);
  UpdateBits(pOutHdrOutputFormats, hdrOutputFormats, 3);
  UpdateBits(pOutVrrRefreshRates, vrrRefreshRates, RefreshRateBits);
  return {0};
}

Result QueryDisplayPanelIdentifier(PanelIdentifier* pOutValue,
  const DisplayType* pDisplay) {
  ServiceFunctions* functions = GetFunctions(pDisplay);
  PanelIdentifierData value = {};
  NN_RESULT_DO(functions->queryDisplayPanelIdentifier(functions->context,
    &value, pDisplay->id));
  __builtin_memcpy(pOutValue, &value, sizeof(*pOutValue));
  return {0};
}

// Every layer still on the endpoint is detached from it.
void DetachLayers(EndpointType* pEndpoint) {
  util::IntrusiveListNode* node;

  while ((node = pEndpoint->layers.GetNext()) != &pEndpoint->layers) {
    node->Unlink();
    OwnerLink<EndpointType>::FromNode(node)->pOwner.store(nullptr,
      std::memory_order_release);
  }
}

Result CreateEndpoint(FrontendImpl* pFrontend, EndpointType* pEndpoint,
  uint64_t settings, DisplayType* pDisplay) {
  new (pEndpoint) EndpointType;
  pEndpoint->settings = settings;
  pEndpoint->pFrontend = pFrontend;
  pEndpoint->displayId = pDisplay->id;
  pDisplay->mutex.Lock();
  DisplayType* expected = nullptr;

  if (!pEndpoint->link.pOwner.compare_exchange_strong(expected, pDisplay,
    std::memory_order_acquire)) {
    pDisplay->mutex.Unlock();
    DetachLayers(pEndpoint);
    pEndpoint->pFrontend = nullptr;
    pEndpoint->settings = 0;
    return ResultAlreadyLinked;
  }

  pDisplay->endpoints.LinkPrev(&pEndpoint->link.node);
  pDisplay->mutex.Unlock();
  return {0};
}

void DestroyEndpoint(EndpointType* pEndpoint) {
  if (DisplayType* display =
    pEndpoint->link.pOwner.load(std::memory_order_relaxed)) {
    display->mutex.Lock();

    if (display == pEndpoint->link.pOwner.load(std::memory_order_relaxed)) {
      if (&pEndpoint->link.node != &display->endpoints) {
        pEndpoint->link.node.Unlink();
      }

      pEndpoint->link.pOwner.store(nullptr, std::memory_order_release);
    }

    display->mutex.Unlock();
  }

  DetachLayers(pEndpoint);
  pEndpoint->pFrontend = nullptr;
  pEndpoint->settings = 0;
}

uint32_t GetLayerRegisteredBufferBits(const LayerType* pLayer) {
  uint32_t bits = 0;

  for (int i = 0; i < 15; ++i) {
    if (pLayer->slots[i].state != 0) {
      bits |= 1u << i;
    }
  }

  return bits;
}

Result RegisterLayerBuffer(LayerType* pLayer, uint32_t index,
  const BufferPoolType* pPool, uint32_t arrayIndex) {
  const gs::NativeImageHandle image =
    gs::sdk::CalculateNativeImageHandle({pPool->image}, arrayIndex);
  NN_ABORT_UNLESS(index < 15);
  LayerBufferSlot& slot = pLayer->slots[index];
  NN_ABORT_UNLESS(slot.state == 0);
  slot.image = image.value;
  slot.fence[0] = 0;
  slot.fence[1] = 0;
  slot.state = 1;

  const uint32_t tail = pLayer->queueTail;
  const uint32_t next = (tail + 1) % 16;
  NN_ABORT_UNLESS(next != pLayer->queueHead);
  pLayer->queueTail = next;
  pLayer->queue[tail] = index;
  return {0};
}

void SetLayerNextSwapInterval(LayerType* pLayer, int interval) {
  if (pLayer->IsFixed(FixedSetting_SwapInterval)) {
    return;
  }

  uint32_t value = uint32_t(interval) >= 60 ? 60 : uint32_t(interval);

  if (interval < 1) {
    value = 1;
  }

  pLayer->swapInterval = uint8_t(value);
}

void SetLayerNextCrop(LayerType* pLayer, uint16_t x, uint16_t y,
  uint16_t width, uint16_t height) {
  NN_ABORT_UNLESS(pLayer->IsFixed(FixedSetting_CropOverride) ||
    !pLayer->IsFixed(FixedSetting_Crop));

  if (width != 0 && height != 0) {
    pLayer->cropLeft = x;
    pLayer->cropTop = y;
    pLayer->cropRight = uint16_t(x + width - 1);
    pLayer->cropBottom = uint16_t(y + height - 1);
    pLayer->hasCrop = 1;
  }
  else {
    pLayer->cropLeft = 0;
    pLayer->cropTop = 0;
    pLayer->cropRight = 0;
    pLayer->cropBottom = 0;
    pLayer->hasCrop = 0;
  }
}

void SetLayerNextHdrExtendedLuminance(LayerType* pLayer, uint16_t minimum,
  uint16_t maximum) {
  if (pLayer->IsFixed(FixedSetting_HdrMetadata)) {
    return;
  }

  pLayer->extendedLuminanceMin = minimum;
  pLayer->extendedLuminanceMax = maximum;
  pLayer->hasExtendedLuminanceRange = 1;
}

void SetLayerNextHdrStandardLuminance(LayerType* pLayer, uint16_t minimum,
  uint16_t maximum) {
  if (pLayer->IsFixed(FixedSetting_HdrMetadata)) {
    return;
  }

  pLayer->standardLuminanceMin = minimum;
  pLayer->standardLuminanceMax = maximum;
  pLayer->hasStandardLuminanceRange = 1;
}

void SetLayerNextHdrBezier(LayerType* pLayer, float kneeX, float kneeY,
  float anchor) {
  if (pLayer->IsFixed(FixedSetting_HdrMetadata)) {
    return;
  }

  if (pLayer->hasBezierMetadata && pLayer->bezierKneeX == kneeX &&
    pLayer->bezierKneeY == kneeY && pLayer->bezierAnchor == anchor) {
    return;
  }

  pLayer->reservedb5[0] = 0;
  pLayer->reservedb5[1] = 0;
  pLayer->reservedb5[2] = 0;
  pLayer->bezierKneeX = kneeX;
  pLayer->bezierKneeY = kneeY;
  pLayer->bezierAnchor = anchor;
  pLayer->isBezierMetadataChanged = true;
  pLayer->hasBezierMetadata = true;
}

void ClearLayerNextHdrBezier(LayerType* pLayer) {
  if (pLayer->IsFixed(FixedSetting_HdrMetadata)) {
    return;
  }

  if (!pLayer->hasBezierMetadata && pLayer->bezierKneeX == 0.0f &&
    pLayer->bezierKneeY == 0.0f && pLayer->bezierAnchor == 0.0f) {
    return;
  }

  pLayer->hasBezierMetadata = false;
  pLayer->reservedb5[0] = 0;
  pLayer->reservedb5[1] = 0;
  pLayer->reservedb5[2] = 0;
  pLayer->bezierKneeX = 0.0f;
  pLayer->bezierKneeY = 0.0f;
  pLayer->bezierAnchor = 0.0f;
  pLayer->isBezierMetadataChanged = true;
}

// Linear encoding is passed as 64 and stored as 2.
uint32_t ToHdrColorEncoding(HdrColorEncoding encoding) {
  const uint32_t value = uint32_t(encoding);

  if (value < 2) {
    return value;
  }

  if (value != 64) {
    nn::detail::UnexpectedDefaultImpl();
  }

  return 2;
}

void SetLayerNextTimestampRecorder(LayerType* pLayer,
  TimestampRecorderType* pRecorder, BufferCheckpointBits checkpoints) {
  if (TimestampRecorderType* previous = pLayer->pTimestampRecorder) {
    previous->mutex.Lock();
    previous->isAttached = 0;
    previous->mutex.Unlock();
  }

  if (pRecorder != nullptr) {
    pRecorder->mutex.Lock();
    NN_ABORT_UNLESS(pRecorder->isAttached == 0);
    pRecorder->isAttached = 1;
    pRecorder->mutex.Unlock();
  }

  const uint64_t bits = uint64_t(checkpoints) & 0x1f;
  pLayer->pTimestampRecorder = pRecorder;

  if (pLayer->timestampCheckpoints != bits) {
    pLayer->timestampCheckpoints = bits;
    pLayer->isTimestampRecorderChanged = true;
  }
}

void ClearLayerNextTimestampRecorder(LayerType* pLayer) {
  if (TimestampRecorderType* previous = pLayer->pTimestampRecorder) {
    previous->mutex.Lock();
    previous->isAttached = 0;
    previous->mutex.Unlock();
  }

  pLayer->pTimestampRecorder = nullptr;
}

}

void SetUpFrontend(Frontend* pFrontend) {
  Frontend& f = *pFrontend;

  f.createEndpoint = [](void* context, EndpointType* endpoint,
    uint64_t settings, DisplayType* display) {
    return CreateEndpoint(GetImpl(context), endpoint, settings, display);
  };
  f.destroyEndpoint = [](void*, EndpointType* endpoint) {
    DestroyEndpoint(endpoint);
  };
  f.reserved40 = [](void*) {
    NN_ABORT_UNLESS(false);
  };
  f.unregisterLayerBuffer = [](void*, LayerType* layer, uint32_t index,
    uint32_t flags) {
    const uint64_t fence[2] = {};
    return layer->GetQueue()->Release(fence, index, flags);
  };
  f.presentLayerBuffer = [](void*, LayerType* layer, uint32_t index,
    const gs::NativeSyncHandle& sync) {
    return layer->GetQueue()->Present(index, sync);
  };
  f.reserved160 = [](void*, const BufferPoolType* pool) {
    return pool;
  };
  f.getLayerRegisteredBufferBits = [](void*, const LayerType* layer) {
    return GetLayerRegisteredBufferBits(layer);
  };
  f.getLayerBufferNativeImageHandle = [](void*, const LayerType* layer,
    uint32_t index) {
    return gs::NativeImageHandle{layer->slots[index].image & ~0x1fu};
  };
  f.getLayerBufferNativeImageIndex = [](void*, const LayerType* layer,
    uint32_t index) {
    return layer->slots[index].image & 0x1fu;
  };
  f.registerLayerBuffer = [](void*, LayerType* layer, uint32_t index,
    const BufferPoolType* pool, uint64_t arrayIndex) {
    return RegisterLayerBuffer(layer, index, pool, uint32_t(arrayIndex));
  };
  f.setLayerBufferNativeImageHandle = [](void*, LayerType* layer,
    uint32_t index, const BufferPoolType* pool, uint32_t arrayIndex) {
    const gs::NativeImageHandle image =
      gs::sdk::CalculateNativeImageHandle({pool->image}, arrayIndex);
    layer->slots[index].image = image.value;
    return image.value;
  };
  f.setLayerNextSwapInterval = [](void*, LayerType* layer, int interval) {
    SetLayerNextSwapInterval(layer, interval);
  };
  f.setLayerNextCrop = [](void*, LayerType* layer, uint16_t x, uint16_t y,
    uint16_t width, uint16_t height) {
    SetLayerNextCrop(layer, x, y, width, height);
  };
  f.setLayerNextRotation = [](void*, LayerType* layer, uint8_t rotation) {
    layer->rotation = rotation & 7;
  };
  f.setLayerNextRotationFlags = [](void*, LayerType* layer, bool flag,
    int value) {
    layer->rotationFlag = flag;
    layer->rotationValue = uint32_t(value);
  };
  f.getLayerNativeWindowHandle = [](void*, LayerType* layer) {
    return layer->nativeWindowHandle;
  };
  f.sdkCreateBufferPool = [](void* context, BufferPoolType* pool,
    const BufferDescriptor& descriptor, uint64_t count, void* address,
    uint64_t size, os::MemoryPermission permission) {
    return GetImpl(context)->CreateBufferPool(pool, descriptor, count,
      address, size, permission);
  };
  f.sdkCreateBufferPoolForSystem = [](void* context, BufferPoolType* pool,
    const BufferDescriptor& descriptor, uint64_t count, void* address,
    uint64_t size, os::MemoryPermission permission) {
    return GetImpl(context)->CreateBufferPoolForSystem(pool, descriptor,
      count, address, size, permission);
  };
  f.sdkCreateAliasBufferPool = [](void* context, BufferPoolType* pool,
    gs::NativeImageHandle image, uint64_t count) {
    return GetImpl(context)->CreateAliasBufferPool(pool, image, count);
  };
  f.destroyBufferPool = [](void* context, BufferPoolType* pool) {
    GetImpl(context)->DestroyBufferPool(pool);
  };
  f.getBufferPoolNativeImageHandle = [](void*, const BufferPoolType* pool,
    uint64_t index) {
    return gs::sdk::CalculateNativeImageHandle({pool->image},
      uint32_t(index));
  };
  f.createVsyncEvent = [](void* context, VsyncEventType* event,
    const DisplayType* display, os::EventClearMode clearMode) {
    return GetImpl(context)->CreateDisplayEvent(event, display, clearMode,
      &DisplayType::vsyncEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        return s->createVsyncEvent(s->context, id, eventId);
      });
  };
  f.destroyVsyncEvent = [](void* context, VsyncEventType* event) {
    GetImpl(context)->DestroyDisplayEvent(event,
      &DisplayType::vsyncEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        s->destroyVsyncEvent(s->context, id, eventId);
      });
  };
  f.waitVsyncEvent = [](void*, VsyncEventType* event) {
    os::WaitSystemEvent(&event->systemEvent);
  };
  f.timedWaitVsyncEvent = [](void*, VsyncEventType* event, TimeSpan time) {
    return os::TimedWaitSystemEvent(&event->systemEvent, time);
  };
  f.tryWaitVsyncEvent = [](void*, VsyncEventType* event) {
    return os::TryWaitSystemEvent(&event->systemEvent);
  };
  f.clearVsyncEvent = [](void*, VsyncEventType* event) {
    os::ClearSystemEvent(&event->systemEvent);
  };
  f.initializeMultiWaitHolderForVsyncEvent = [](void*,
    os::MultiWaitHolderType* holder, VsyncEventType* event) {
    os::InitializeMultiWaitHolder(holder, &event->systemEvent);
  };
  f.sdkDuplicateVsyncEvent = [](void* context, os::SystemEventType* out,
    const VsyncEventType* event, os::EventClearMode clearMode) {
    return GetImpl(context)->DuplicateDisplayEvent(out, event, clearMode);
  };
  f.setLayerNextPermission = [](void*, LayerType* layer,
    BufferPermissionBits bits, bool isEnabled) {
    const uint32_t value = uint32_t(bits);
    layer->permission = isEnabled ? layer->permission | value :
      layer->permission & ~value;
    layer->permissionMask = layer->permissionMask | value;
  };
  f.clearLayerNextPermission = [](void*, LayerType* layer,
    BufferPermissionBits bits) {
    layer->permissionMask = layer->permissionMask & ~uint32_t(bits);
  };
  f.setLayerNextContent = [](void*, LayerType* layer, BufferContentBits bits,
    bool isEnabled) {
    const uint32_t value = uint32_t(bits);
    layer->content = isEnabled ? layer->content | value :
      layer->content & ~value;
    layer->contentMask = layer->contentMask | value;
  };
  f.clearLayerNextContent = [](void*, LayerType* layer,
    BufferContentBits bits) {
    layer->contentMask = layer->contentMask & ~uint32_t(bits);
  };
  f.sdkGetBufferPoolNativeMemoryHandle = [](void*,
    const BufferPoolType* pool) {
    return Result{pool->memory};
  };
  f.sdkCreateBufferPoolWithTransferMemory = [](void* context,
    BufferPoolType* pool, BufferPreference preference, uint32_t count,
    gsdrv::UniqueNativeHandle* handle, uint64_t size,
    os::MemoryPermission permission) {
    return GetImpl(context)->CreateBufferPoolWithTransferMemory(pool,
      preference, count, handle, size, permission);
  };
  f.glSetLayerBufferSize = [](void*, LayerType* layer, uint16_t width,
    uint16_t height) {
    layer->bufferWidth = width;
    layer->bufferHeight = height;
  };
  f.setDisplayRefreshRateCapability = [](void*, DisplayType* display,
    RefreshRate rate, RefreshRateCapability capability) {
    return SetDisplayRefreshRateCapability(display, rate, capability);
  };
  f.queryDisplayRefreshRate = [](void*, RefreshRate* rate, bool* isVariable,
    const DisplayType* display) {
    return QueryDisplayRefreshRate(rate, isVariable, display);
  };
  f.createRefreshRateEvent = [](void* context, RefreshRateEventType* event,
    const DisplayType* display, os::EventClearMode clearMode) {
    return GetImpl(context)->CreateDisplayEvent(event, display, clearMode,
      &DisplayType::refreshRateEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        return s->createRefreshRateEvent(s->context, id, eventId);
      });
  };
  f.destroyRefreshRateEvent = [](void* context, RefreshRateEventType* event) {
    GetImpl(context)->DestroyDisplayEvent(event,
      &DisplayType::refreshRateEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        s->destroyRefreshRateEvent(s->context, id, eventId);
      });
  };
  f.waitRefreshRateEvent = [](void*, RefreshRateEventType* event) {
    os::WaitSystemEvent(&event->systemEvent);
  };
  f.timedWaitRefreshRateEvent = [](void*, RefreshRateEventType* event,
    TimeSpan time) {
    return os::TimedWaitSystemEvent(&event->systemEvent, time);
  };
  f.tryWaitRefreshRateEvent = [](void*, RefreshRateEventType* event) {
    return os::TryWaitSystemEvent(&event->systemEvent);
  };
  f.clearRefreshRateEvent = [](void*, RefreshRateEventType* event) {
    os::ClearSystemEvent(&event->systemEvent);
  };
  f.initializeMultiWaitHolderForRefreshRateEvent = [](void*,
    os::MultiWaitHolderType* holder, RefreshRateEventType* event) {
    os::InitializeMultiWaitHolder(holder, &event->systemEvent);
  };
  f.sdkDuplicateRefreshRateEvent = [](void* context, os::SystemEventType* out,
    const RefreshRateEventType* event, os::EventClearMode clearMode) {
    return GetImpl(context)->DuplicateDisplayEvent(out, event, clearMode);
  };
  f.setLayerNextExtendedSwapInterval = [](void*, LayerType* layer,
    int numerator, int denominator) {
    SetExtendedSwapInterval(layer, uint32_t(numerator), denominator);
  };
  f.clearLayerNextExtendedSwapInterval = [](void*, LayerType* layer) {
    layer->hasExtendedSwapInterval = false;
    layer->swapIntervalNumerator = 0;
    layer->swapIntervalDenominator = 0;
  };
  f.setDisplayHdrOutputFormatCapability = [](void*, DisplayType* display,
    HdrOutputFormat format, HdrOutputFormatCapability capability) {
    return SetDisplayHdrOutputFormatCapability(display, format, capability);
  };
  f.queryDisplayHdrStatus = [](void*, HdrOutputFormat* format,
    uint16_t* luminance, const DisplayType* display) {
    return QueryDisplayHdrStatus(format, luminance, display);
  };
  f.queryDisplayHdrPaperWhite = [](void*, uint16_t* value,
    const DisplayType* display) {
    return QueryDisplayHdrPaperWhite(value, display);
  };
  f.setLayerNextHdrExtendedContentLuminanceRangeMetadata = [](void*,
    LayerType* layer, uint16_t minimum, uint16_t maximum) {
    SetLayerNextHdrExtendedLuminance(layer, minimum, maximum);
  };
  f.setLayerNextHdrStandardContentLuminanceRangeMetadata = [](void*,
    LayerType* layer, uint16_t minimum, uint16_t maximum) {
    SetLayerNextHdrStandardLuminance(layer, minimum, maximum);
  };
  f.setLayerNextHdrContentGamutMetadata = [](void*, LayerType* layer,
    HdrContentGamut gamut) {
    if (!layer->IsFixed(FixedSetting_HdrMetadata)) {
      layer->contentGamut = uint32_t(gamut) & 0xf;
      layer->hasContentGamut = 1;
    }
  };
  f.clearLayerNextHdrContentGamutMetadata = [](void*, LayerType* layer) {
    if (!layer->IsFixed(FixedSetting_HdrMetadata)) {
      layer->hasContentGamut = 0;
    }
  };
  f.setLayerNextHdrToSdrToneMappingMetadata = [](void*, LayerType* layer,
    HdrToneMapping toneMapping) {
    if (!layer->IsFixed(FixedSetting_HdrMetadata)) {
      layer->toneMapping = uint32_t(toneMapping) & 0xf;
      layer->hasToneMapping = 1;
    }
  };
  f.clearLayerNextHdrToSdrToneMappingMetadata = [](void*, LayerType* layer) {
    if (!layer->IsFixed(FixedSetting_HdrMetadata)) {
      layer->hasToneMapping = 0;
    }
  };
  f.setLayerNextHdrAdjustableBezierMetadata = [](void*, LayerType* layer,
    float kneeX, float kneeY, float anchor) {
    SetLayerNextHdrBezier(layer, kneeX, kneeY, anchor);
  };
  f.clearLayerNextHdrAdjustableBezierMetadata = [](void*, LayerType* layer) {
    ClearLayerNextHdrBezier(layer);
  };
  f.setLayerNativeWindowHdrColorEncoding = [](void*, LayerType* layer,
    HdrColorEncoding encoding) {
    layer->hdrColorEncoding = ToHdrColorEncoding(encoding);
  };
  f.setLayerNativeWindowHdrLinearColorEncoding = [](void*, LayerType* layer,
    HdrColorEncoding encoding, uint16_t luminance) {
    layer->hdrColorEncoding = ToHdrColorEncoding(encoding);
    layer->hdrLinearUnitLuminance = luminance;
  };
  f.createHdrStatusEvent = [](void* context, HdrStatusEventType* event,
    const DisplayType* display, os::EventClearMode clearMode) {
    return GetImpl(context)->CreateDisplayEvent(event, display, clearMode,
      &DisplayType::hdrStatusEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        return s->createHdrStatusEvent(s->context, id, eventId);
      });
  };
  f.destroyHdrStatusEvent = [](void* context, HdrStatusEventType* event) {
    GetImpl(context)->DestroyDisplayEvent(event,
      &DisplayType::hdrStatusEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        s->destroyHdrStatusEvent(s->context, id, eventId);
      });
  };
  f.waitHdrStatusEvent = [](void*, HdrStatusEventType* event) {
    os::WaitSystemEvent(&event->systemEvent);
  };
  f.timedWaitHdrStatusEvent = [](void*, HdrStatusEventType* event,
    TimeSpan time) {
    return os::TimedWaitSystemEvent(&event->systemEvent, time);
  };
  f.tryWaitHdrStatusEvent = [](void*, HdrStatusEventType* event) {
    return os::TryWaitSystemEvent(&event->systemEvent);
  };
  f.clearHdrStatusEvent = [](void*, HdrStatusEventType* event) {
    os::ClearSystemEvent(&event->systemEvent);
  };
  f.initializeMultiWaitHolderForHdrStatusEvent = [](void*,
    os::MultiWaitHolderType* holder, HdrStatusEventType* event) {
    os::InitializeMultiWaitHolder(holder, &event->systemEvent);
  };
  f.sdkDuplicateHdrStatusEvent = [](void* context, os::SystemEventType* out,
    const HdrStatusEventType* event, os::EventClearMode clearMode) {
    return GetImpl(context)->DuplicateDisplayEvent(out, event, clearMode);
  };
  f.createHdrPaperWhiteEvent = [](void* context, HdrPaperWhiteEventType* event,
    const DisplayType* display, os::EventClearMode clearMode) {
    return GetImpl(context)->CreateDisplayEvent(event, display, clearMode,
      &DisplayType::hdrPaperWhiteEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        return s->createHdrPaperWhiteEvent(s->context, id, eventId);
      });
  };
  f.destroyHdrPaperWhiteEvent = [](void* context,
    HdrPaperWhiteEventType* event) {
    GetImpl(context)->DestroyDisplayEvent(event,
      &DisplayType::hdrPaperWhiteEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        s->destroyHdrPaperWhiteEvent(s->context, id, eventId);
      });
  };
  f.waitHdrPaperWhiteEvent = [](void*, HdrPaperWhiteEventType* event) {
    os::WaitSystemEvent(&event->systemEvent);
  };
  f.timedWaitHdrPaperWhiteEvent = [](void*, HdrPaperWhiteEventType* event,
    TimeSpan time) {
    return os::TimedWaitSystemEvent(&event->systemEvent, time);
  };
  f.tryWaitHdrPaperWhiteEvent = [](void*, HdrPaperWhiteEventType* event) {
    return os::TryWaitSystemEvent(&event->systemEvent);
  };
  f.clearHdrPaperWhiteEvent = [](void*, HdrPaperWhiteEventType* event) {
    os::ClearSystemEvent(&event->systemEvent);
  };
  f.initializeMultiWaitHolderForHdrPaperWhiteEvent = [](void*,
    os::MultiWaitHolderType* holder, HdrPaperWhiteEventType* event) {
    os::InitializeMultiWaitHolder(holder, &event->systemEvent);
  };
  f.sdkDuplicateHdrPaperWhiteEvent = [](void* context,
    os::SystemEventType* out, const HdrPaperWhiteEventType* event,
    os::EventClearMode clearMode) {
    return GetImpl(context)->DuplicateDisplayEvent(out, event, clearMode);
  };
  f.queryDisplayBufferMaxResolution = [](void*, BufferMaxResolution* value,
    const DisplayType* display) {
    return QueryDisplayBufferMaxResolution(value, display);
  };
  f.createBufferMaxResolutionEvent = [](void* context,
    BufferMaxResolutionEventType* event, const DisplayType* display,
    os::EventClearMode clearMode) {
    return GetImpl(context)->CreateDisplayEvent(event, display, clearMode,
      &DisplayType::bufferMaxResolutionEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        return s->createBufferMaxResolutionEvent(s->context, id, eventId);
      });
  };
  f.destroyBufferMaxResolutionEvent = [](void* context,
    BufferMaxResolutionEventType* event) {
    GetImpl(context)->DestroyDisplayEvent(event,
      &DisplayType::bufferMaxResolutionEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        s->destroyBufferMaxResolutionEvent(s->context, id, eventId);
      });
  };
  f.tryWaitBufferMaxResolutionEvent = [](void*,
    BufferMaxResolutionEventType* event) {
    return os::TryWaitSystemEvent(&event->systemEvent);
  };
  f.clearBufferMaxResolutionEvent = [](void*,
    BufferMaxResolutionEventType* event) {
    os::ClearSystemEvent(&event->systemEvent);
  };
  f.initializeMultiWaitHolderForBufferMaxResolutionEvent = [](void*,
    os::MultiWaitHolderType* holder, BufferMaxResolutionEventType* event) {
    os::InitializeMultiWaitHolder(holder, &event->systemEvent);
  };
  f.sdkDuplicateBufferMaxResolutionEvent = [](void* context,
    os::SystemEventType* out, const BufferMaxResolutionEventType* event,
    os::EventClearMode clearMode) {
    return GetImpl(context)->DuplicateDisplayEvent(out, event, clearMode);
  };
  f.queryDisplayModeCapability = [](void*,
    util::BitFlagSet<64, SupportedRefreshRateBit>* refreshRates,
    util::BitFlagSet<64, SupportedHdrOutputFormatBit>* hdrOutputFormats,
    util::BitFlagSet<64, SupportedRefreshRateBit>* vrrRefreshRates,
    const DisplayType* display) {
    return QueryDisplayModeCapability(refreshRates, hdrOutputFormats,
      vrrRefreshRates, display);
  };
  f.createModeCapabilityEvent = [](void* context,
    ModeCapabilityEventType* event, const DisplayType* display,
    os::EventClearMode clearMode) {
    return GetImpl(context)->CreateDisplayEvent(event, display, clearMode,
      &DisplayType::modeCapabilityEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        return s->createModeCapabilityEvent(s->context, id, eventId);
      });
  };
  f.destroyModeCapabilityEvent = [](void* context,
    ModeCapabilityEventType* event) {
    GetImpl(context)->DestroyDisplayEvent(event,
      &DisplayType::modeCapabilityEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        s->destroyModeCapabilityEvent(s->context, id, eventId);
      });
  };
  f.tryWaitModeCapabilityEvent = [](void*, ModeCapabilityEventType* event) {
    return os::TryWaitSystemEvent(&event->systemEvent);
  };
  f.clearModeCapabilityEvent = [](void*, ModeCapabilityEventType* event) {
    os::ClearSystemEvent(&event->systemEvent);
  };
  f.initializeMultiWaitHolderForModeCapabilityEvent = [](void*,
    os::MultiWaitHolderType* holder, ModeCapabilityEventType* event) {
    os::InitializeMultiWaitHolder(holder, &event->systemEvent);
  };
  f.sdkDuplicateModeCapabilityEvent = [](void* context,
    os::SystemEventType* out, const ModeCapabilityEventType* event,
    os::EventClearMode clearMode) {
    return GetImpl(context)->DuplicateDisplayEvent(out, event, clearMode);
  };
  f.createTimestampRecorder = [](void* context,
    TimestampRecorderType* recorder) {
    return GetImpl(context)->CreateTimestampRecorder(recorder);
  };
  f.destroyTimestampRecorder = [](void* context,
    TimestampRecorderType* recorder) {
    GetImpl(context)->DestroyTimestampRecorder(recorder);
  };
  f.getRecordedTimestamp = [](void* context,
    const TimestampRecorderType* recorder, BufferCheckpointBits checkpoint) {
    return GetImpl(context)->GetRecordedTimestamp(
      const_cast<TimestampRecorderType*>(recorder), checkpoint);
  };
  f.setLayerNextTimestampRecorder = [](void*, LayerType* layer,
    TimestampRecorderType* recorder, BufferCheckpointBits checkpoints) {
    SetLayerNextTimestampRecorder(layer, recorder, checkpoints);
  };
  f.clearLayerNextTimestampRecorder = [](void*, LayerType* layer) {
    ClearLayerNextTimestampRecorder(layer);
  };
  f.getLayerNextFrameNumber = [](void*, uint64_t* value,
    const LayerType* layer) {
    const uint64_t frame = layer->nextFrameNumber;

    if (frame == 0) {
      return ResultNoFrameNumber;
    }

    *value = frame;
    return Result{0};
  };
  f.sdkSetLayerNextUserData = [](void*, LayerType* layer,
    sdk::LayerUserDataType type, uint64_t data) {
    layer->userData = data;
    layer->userDataType = uint32_t(type) & 0xf;
  };
  f.sdkClearLayerNextUserData = [](void*, LayerType* layer) {
    layer->userData = 0;
    layer->userDataType = 0;
  };
  f.sdkSetLayerNextRotationResolveMode = [](void*, LayerType* layer,
    sdk::RotationResolveMode mode) {
    layer->rotationResolveMode = uint32_t(mode) & 1;
  };
  f.sdkCreateBufferPoolWithProtectedMemory = [](void* context,
    BufferPoolType* pool, BufferPreference preference, uint64_t count,
    uint64_t size) {
    return GetImpl(context)->CreateBufferPoolWithProtectedMemory(pool,
      preference, count, size);
  };
  f.queryDisplayPanelIdentifier = [](void*, PanelIdentifier* value,
    const DisplayType* display) {
    return QueryDisplayPanelIdentifier(value, display);
  };
  f.createAvailableRefreshRatesEvent = [](void* context,
    AvailableRefreshRatesEventType* event, const DisplayType* display) {
    return GetImpl(context)->CreateDisplayEvent(event, display,
      os::EventClearMode_AutoClear,
      &DisplayType::availableRefreshRatesEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        return s->createAvailableRefreshRatesEvent(s->context, id, eventId);
      });
  };
  f.destroyAvailableRefreshRatesEvent = [](void* context,
    AvailableRefreshRatesEventType* event) {
    GetImpl(context)->DestroyDisplayEvent(event,
      &DisplayType::availableRefreshRatesEventCount,
      [](ServiceFunctions* s, uint64_t id, uint32_t eventId) {
        s->destroyAvailableRefreshRatesEvent(s->context, id, eventId);
      });
  };
  f.tryWaitAvailableRefreshRatesEvent = [](void*,
    AvailableRefreshRatesEventType* event) {
    return os::TryWaitSystemEvent(&event->systemEvent);
  };
  f.initializeMultiWaitHolderForAvailableRefreshRatesEvent = [](void*,
    os::MultiWaitHolderType* holder, AvailableRefreshRatesEventType* event) {
    os::InitializeMultiWaitHolder(holder, &event->systemEvent);
  };
}

}
