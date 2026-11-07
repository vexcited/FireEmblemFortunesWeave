#include "nn/diag/diag_abort.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/util/bit_flag_set.hpp"
#include "nn/vi/vi_layer.hpp"

namespace nn::vi2 {

enum RefreshRate : int32_t {};
enum HdrOutputFormat : int32_t {};
enum BufferMaxResolution : int32_t {};

struct SupportedRefreshRateBit;
struct SupportedHdrOutputFormatBit;

Result CreateDisplay(DisplayType* pDisplay, const char* pName);
void DestroyDisplay(DisplayType* pDisplay);

Result CreateVsyncEvent(VsyncEventType* pEvent, const DisplayType* pDisplay,
  os::EventClearMode clearMode);
void DestroyVsyncEvent(VsyncEventType* pEvent);

Result CreateRefreshRateEvent(RefreshRateEventType* pEvent,
  const DisplayType* pDisplay, os::EventClearMode clearMode);
void DestroyRefreshRateEvent(RefreshRateEventType* pEvent);
bool TryWaitRefreshRateEvent(RefreshRateEventType* pEvent);
Result QueryDisplayRefreshRate(RefreshRate* pOutRate, bool* pOutIsVariable,
  const DisplayType* pDisplay);

Result CreateHdrStatusEvent(HdrStatusEventType* pEvent,
  const DisplayType* pDisplay, os::EventClearMode clearMode);
void DestroyHdrStatusEvent(HdrStatusEventType* pEvent);
bool TryWaitHdrStatusEvent(HdrStatusEventType* pEvent);
Result QueryDisplayHdrStatus(HdrOutputFormat* pOutFormat,
  uint16_t* pOutLuminance, const DisplayType* pDisplay);

Result CreateHdrPaperWhiteEvent(HdrPaperWhiteEventType* pEvent,
  const DisplayType* pDisplay, os::EventClearMode clearMode);
void DestroyHdrPaperWhiteEvent(HdrPaperWhiteEventType* pEvent);
bool TryWaitHdrPaperWhiteEvent(HdrPaperWhiteEventType* pEvent);
Result QueryDisplayHdrPaperWhite(uint16_t* pOutLuminance,
  const DisplayType* pDisplay);

Result CreateBufferMaxResolutionEvent(BufferMaxResolutionEventType* pEvent,
  const DisplayType* pDisplay, os::EventClearMode clearMode);
void DestroyBufferMaxResolutionEvent(BufferMaxResolutionEventType* pEvent);
bool TryWaitBufferMaxResolutionEvent(BufferMaxResolutionEventType* pEvent);
Result QueryDisplayBufferMaxResolution(BufferMaxResolution* pOutResolution,
  const DisplayType* pDisplay);

Result CreateModeCapabilityEvent(ModeCapabilityEventType* pEvent,
  const DisplayType* pDisplay, os::EventClearMode clearMode);
void DestroyModeCapabilityEvent(ModeCapabilityEventType* pEvent);
bool TryWaitModeCapabilityEvent(ModeCapabilityEventType* pEvent);
Result QueryDisplayModeCapability(
  util::BitFlagSet<64, SupportedRefreshRateBit>* pOutRefreshRates,
  util::BitFlagSet<64, SupportedHdrOutputFormatBit>* pOutHdrFormats,
  util::BitFlagSet<64, SupportedHdrOutputFormatBit>* pOutHdrPrivateFormats,
  const DisplayType* pDisplay);

Result CreateAvailableRefreshRatesEvent(
  AvailableRefreshRatesEventType* pEvent, const DisplayType* pDisplay);
void DestroyAvailableRefreshRatesEvent(
  AvailableRefreshRatesEventType* pEvent);
bool TryWaitAvailableRefreshRatesEvent(
  AvailableRefreshRatesEventType* pEvent);
Result QueryAvailableRefreshRates(Span<AvailableRefreshRate> outRates,
  uint8_t* pOutCount, const DisplayType* pDisplay);

namespace sdk {

Result DuplicateVsyncEvent(os::SystemEventType* pOutEvent,
  const VsyncEventType* pEvent, os::EventClearMode clearMode);
Result DuplicateRefreshRateEvent(os::SystemEventType* pOutEvent,
  const RefreshRateEventType* pEvent, os::EventClearMode clearMode);
Result DuplicateHdrStatusEvent(os::SystemEventType* pOutEvent,
  const HdrStatusEventType* pEvent, os::EventClearMode clearMode);

}

}

namespace nn::vi::detail {

namespace {

constexpr Result ResultInvalidValue = {0x272};
constexpr Result ResultAlreadyCreated = {0xa72};
constexpr int DefaultRefreshRate = 60;
constexpr int HighRefreshRate = 120;
constexpr HdrOutputFormat DefaultHdrOutputFormat = HdrOutputFormat(1);
constexpr int BufferMaxResolutionCount = 4;
constexpr int VrrSupportedBit = 63;

[[gnu::always_inline]] bool IsSupportedRefreshRate(int rate) {
  return rate == HighRefreshRate || rate == DefaultRefreshRate;
}

// The query paths make sure the internal event exists under the lock they
// already hold, the mutex being recursive.
template <typename Event, typename Create>
[[gnu::always_inline]] Result EnsureInternalEvent(os::MutexType* pMutex,
  bool* pIsInitialized, Event* pEvent, Create create) {
  os::LockMutex(pMutex);
  if (*pIsInitialized == true) {
    os::UnlockMutex(pMutex);
    return Result();
  }
  const Result result = create(pEvent);
  *pIsInitialized = result.IsSuccess();
  os::UnlockMutex(pMutex);
  return result;
}

template <typename Event, typename Create>
[[gnu::always_inline]] bool TryEnsureInternalEvent(os::MutexType* pMutex,
  bool* pIsInitialized, Event* pEvent, Create create) {
  os::LockMutex(pMutex);
  bool isInitialized = true;
  if (!*pIsInitialized) {
    isInitialized = create(pEvent).IsSuccess();
    *pIsInitialized = isInitialized;
  }
  os::UnlockMutex(pMutex);
  return isInitialized;
}

}

Result DefaultDisplay::OnOpen(const char* pName) {
  NN_RESULT_DO(vi2::CreateDisplay(&m_Display, pName));
  m_IsHdrEnabled = false;
  m_HdrLuminance = 0;
  m_HdrPaperWhite = 0;
  m_RefreshRate.value = DefaultRefreshRate;
  m_HdrOutputFormat = DefaultHdrOutputFormat;
  return Result();
}

void DefaultDisplay::OnClose() {
  if (m_IsVsyncEventInitialized == true) {
    vi2::DestroyVsyncEvent(&m_VsyncEvent);
    m_IsVsyncEventInitialized = false;
  }
  if (m_IsRefreshRateEventInitialized == true) {
    vi2::DestroyRefreshRateEvent(&m_RefreshRateEvent);
    m_IsRefreshRateEventInitialized = false;
  }
  if (m_IsHdrStatusEventInitialized == true) {
    vi2::DestroyHdrStatusEvent(&m_HdrStatusEvent);
    m_IsHdrStatusEventInitialized = false;
  }
  if (m_IsInternalRefreshRateEventInitialized == true) {
    vi2::DestroyRefreshRateEvent(&m_InternalRefreshRateEvent);
  }
  m_IsInternalRefreshRateEventInitialized = false;
  if (m_IsInternalHdrStatusEventInitialized == true) {
    vi2::DestroyHdrStatusEvent(&m_InternalHdrStatusEvent);
  }
  m_IsInternalHdrStatusEventInitialized = false;
  if (m_IsInternalHdrPaperWhiteEventInitialized == true) {
    vi2::DestroyHdrPaperWhiteEvent(&m_InternalHdrPaperWhiteEvent);
  }
  m_IsInternalHdrPaperWhiteEventInitialized = false;
  if (m_IsInternalBufferMaxResolutionEventInitialized == true) {
    vi2::DestroyBufferMaxResolutionEvent(&m_InternalBufferMaxResolutionEvent);
  }
  m_IsInternalBufferMaxResolutionEventInitialized = false;
  if (m_IsInternalModeCapabilityEventInitialized == true) {
    vi2::DestroyModeCapabilityEvent(&m_InternalModeCapabilityEvent);
  }
  m_IsInternalModeCapabilityEventInitialized = false;
  if (m_IsInternalAvailableRefreshRatesEventInitialized == true) {
    vi2::DestroyAvailableRefreshRatesEvent(
      &m_InternalAvailableRefreshRatesEvent);
  }
  m_IsInternalAvailableRefreshRatesEventInitialized = false;
  vi2::DestroyDisplay(&m_Display);
}

vi2::DisplayType* DefaultDisplay::Get() {
  return &m_Display;
}

const vi2::DisplayType* DefaultDisplay::Get() const {
  return &m_Display;
}

bool DefaultDisplay::TryEnsureInternalRefreshRateEventInitialized() const {
  return TryEnsureInternalEvent(&m_Mutex,
    &m_IsInternalRefreshRateEventInitialized, &m_InternalRefreshRateEvent,
    [this](vi2::RefreshRateEventType* pEvent) {
      return vi2::CreateRefreshRateEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
}

bool DefaultDisplay::TryEnsureInternalHdrStatusEventInitialized() const {
  return TryEnsureInternalEvent(&m_Mutex,
    &m_IsInternalHdrStatusEventInitialized, &m_InternalHdrStatusEvent,
    [this](vi2::HdrStatusEventType* pEvent) {
      return vi2::CreateHdrStatusEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
}

bool DefaultDisplay::TryEnsureInternalHdrPaperWhiteEventInitialized() const {
  return TryEnsureInternalEvent(&m_Mutex,
    &m_IsInternalHdrPaperWhiteEventInitialized, &m_InternalHdrPaperWhiteEvent,
    [this](vi2::HdrPaperWhiteEventType* pEvent) {
      return vi2::CreateHdrPaperWhiteEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
}

Result DefaultDisplay::QueryRefreshRate(RefreshRate* pOutRate,
  bool* pOutIsVariable) const {
  os::LockMutex(&m_Mutex);
  Result result = EnsureInternalEvent(&m_Mutex,
    &m_IsInternalRefreshRateEventInitialized, &m_InternalRefreshRateEvent,
    [this](vi2::RefreshRateEventType* pEvent) {
      return vi2::CreateRefreshRateEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
  if (result.IsFailure()) {
    result = ResultInvalidValue;
  }
  else if (vi2::TryWaitRefreshRateEvent(&m_InternalRefreshRateEvent)) {
    vi2::RefreshRate rate = {};
    bool isVariable = false;
    result = vi2::QueryDisplayRefreshRate(&rate, &isVariable, &m_Display);
    if (result.IsSuccess()) {
      if (IsSupportedRefreshRate(rate)) {
        m_RefreshRate.value = rate;
        m_IsVariableRefreshRate = isVariable;
        *pOutRate = m_RefreshRate;
        *pOutIsVariable = m_IsVariableRefreshRate;
      }
      else {
        result = ResultInvalidValue;
      }
    }
  }
  else {
    *pOutRate = m_RefreshRate;
    *pOutIsVariable = m_IsVariableRefreshRate;
  }
  os::UnlockMutex(&m_Mutex);
  return result;
}

// The cached values are read back from the outputs the caller passed.
Result DefaultDisplay::QueryHdrStatus(bool* pOutIsEnabled,
  HdrOutputFormat* pOutFormat, uint16_t* pOutLuminance) const {
  os::LockMutex(&m_Mutex);
  Result result = EnsureInternalEvent(&m_Mutex,
    &m_IsInternalHdrStatusEventInitialized, &m_InternalHdrStatusEvent,
    [this](vi2::HdrStatusEventType* pEvent) {
      return vi2::CreateHdrStatusEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
  if (result.IsFailure()) {
    result = ResultInvalidValue;
  }
  else if (vi2::TryWaitHdrStatusEvent(&m_InternalHdrStatusEvent)) {
    vi2::HdrOutputFormat format = {};
    uint16_t luminance = 0;
    result = vi2::QueryDisplayHdrStatus(&format, &luminance, &m_Display);
    if (result.IsSuccess()) {
      *pOutIsEnabled = format == 1;
      if (static_cast<uint32_t>(format) > 1) {
        result = ResultInvalidValue;
      }
      else {
        *pOutFormat = HdrOutputFormat(format);
        *pOutLuminance = luminance;
        m_IsHdrEnabled = *pOutIsEnabled;
        m_HdrOutputFormat = *pOutFormat;
        m_HdrLuminance = *pOutLuminance;
      }
    }
  }
  else {
    *pOutIsEnabled = m_IsHdrEnabled;
    *pOutFormat = m_HdrOutputFormat;
    *pOutLuminance = m_HdrLuminance;
  }
  os::UnlockMutex(&m_Mutex);
  return result;
}

Result DefaultDisplay::QueryHdrPaperWhite(uint16_t* pOutLuminance) const {
  os::LockMutex(&m_Mutex);
  Result result = EnsureInternalEvent(&m_Mutex,
    &m_IsInternalHdrPaperWhiteEventInitialized, &m_InternalHdrPaperWhiteEvent,
    [this](vi2::HdrPaperWhiteEventType* pEvent) {
      return vi2::CreateHdrPaperWhiteEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
  if (result.IsFailure()) {
    result = ResultInvalidValue;
  }
  else if (vi2::TryWaitHdrPaperWhiteEvent(&m_InternalHdrPaperWhiteEvent)) {
    uint16_t luminance = 0;
    result = vi2::QueryDisplayHdrPaperWhite(&luminance, &m_Display);
    if (result.IsSuccess()) {
      *pOutLuminance = luminance;
      m_HdrPaperWhite = luminance;
    }
  }
  else {
    *pOutLuminance = m_HdrPaperWhite;
  }
  os::UnlockMutex(&m_Mutex);
  return result;
}

bool DefaultDisplay::TryEnsureInternalBufferMaxResolutionEventInitialized()
  const {
  return TryEnsureInternalEvent(&m_Mutex,
    &m_IsInternalBufferMaxResolutionEventInitialized,
    &m_InternalBufferMaxResolutionEvent,
    [this](vi2::BufferMaxResolutionEventType* pEvent) {
      return vi2::CreateBufferMaxResolutionEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
}

Result DefaultDisplay::QueryBufferMaxResolution(
  BufferMaxResolution* pOutResolution) const {
  os::LockMutex(&m_Mutex);
  Result result = EnsureInternalEvent(&m_Mutex,
    &m_IsInternalBufferMaxResolutionEventInitialized,
    &m_InternalBufferMaxResolutionEvent,
    [this](vi2::BufferMaxResolutionEventType* pEvent) {
      return vi2::CreateBufferMaxResolutionEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
  if (result.IsFailure()) {
    result = ResultInvalidValue;
  }
  else if (vi2::TryWaitBufferMaxResolutionEvent(
             &m_InternalBufferMaxResolutionEvent)) {
    vi2::BufferMaxResolution resolution = {};
    result = vi2::QueryDisplayBufferMaxResolution(&resolution, &m_Display);
    if (result.IsSuccess()) {
      if (static_cast<uint32_t>(resolution) >= BufferMaxResolutionCount) {
        result = ResultInvalidValue;
      }
      else {
        pOutResolution->value = resolution;
        m_BufferMaxResolution.value = resolution;
      }
    }
  }
  else {
    *pOutResolution = m_BufferMaxResolution;
  }
  os::UnlockMutex(&m_Mutex);
  return result;
}

bool DefaultDisplay::TryEnsureInternalModeCapabilityEventInitialized() const {
  return TryEnsureInternalEvent(&m_Mutex,
    &m_IsInternalModeCapabilityEventInitialized,
    &m_InternalModeCapabilityEvent,
    [this](vi2::ModeCapabilityEventType* pEvent) {
      return vi2::CreateModeCapabilityEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
}

Result DefaultDisplay::QueryVrrSupported(bool* pOutIsSupported) const {
  os::LockMutex(&m_Mutex);
  Result result = EnsureInternalEvent(&m_Mutex,
    &m_IsInternalModeCapabilityEventInitialized,
    &m_InternalModeCapabilityEvent,
    [this](vi2::ModeCapabilityEventType* pEvent) {
      return vi2::CreateModeCapabilityEvent(pEvent, &m_Display,
        os::EventClearMode_AutoClear);
    });
  if (result.IsFailure()) {
    result = ResultInvalidValue;
  }
  else if (vi2::TryWaitModeCapabilityEvent(&m_InternalModeCapabilityEvent)) {
    util::BitFlagSet<64, vi2::SupportedRefreshRateBit> refreshRates = {};
    util::BitFlagSet<64, vi2::SupportedHdrOutputFormatBit> hdrFormats = {};
    util::BitFlagSet<64, vi2::SupportedHdrOutputFormatBit> privateFormats =
      {};
    result = vi2::QueryDisplayModeCapability(&refreshRates, &hdrFormats,
      &privateFormats, &m_Display);
    if (result.IsSuccess()) {
      const bool isSupported =
        (refreshRates._storage[1] >> (VrrSupportedBit - 32)) & 1;
      *pOutIsSupported = isSupported;
      m_IsVrrSupported = isSupported;
    }
  }
  else {
    *pOutIsSupported = m_IsVrrSupported;
  }
  os::UnlockMutex(&m_Mutex);
  return result;
}

bool DefaultDisplay::TryEnsureInternalAvailableRefreshRatesEventInitialized() {
  return TryEnsureInternalEvent(&m_Mutex,
    &m_IsInternalAvailableRefreshRatesEventInitialized,
    &m_InternalAvailableRefreshRatesEvent,
    [this](vi2::AvailableRefreshRatesEventType* pEvent) {
      return vi2::CreateAvailableRefreshRatesEvent(pEvent, &m_Display);
    });
}

// Only 60 and 120 Hz entries are passed on, anything else fails midway.
Result DefaultDisplay::QueryAvailableRefreshRates(
  Span<AvailableRefreshRate> outRates, int* pOutCount) {
  os::LockMutex(&m_Mutex);
  Result result = EnsureInternalEvent(&m_Mutex,
    &m_IsInternalAvailableRefreshRatesEventInitialized,
    &m_InternalAvailableRefreshRatesEvent,
    [this](vi2::AvailableRefreshRatesEventType* pEvent) {
      return vi2::CreateAvailableRefreshRatesEvent(pEvent, &m_Display);
    });
  if (result.IsFailure()) {
    os::UnlockMutex(&m_Mutex);
    return ResultInvalidValue;
  }
  if (vi2::TryWaitAvailableRefreshRatesEvent(
        &m_InternalAvailableRefreshRatesEvent)) {
    result = vi2::QueryAvailableRefreshRates(
      {m_AvailableRefreshRates, AvailableRefreshRateCountMax},
      &m_AvailableRefreshRateCount, &m_Display);
    if (result.IsFailure()) {
      m_AvailableRefreshRateCount = 0;
    }
    else if (m_AvailableRefreshRateCount >= AvailableRefreshRateCountMax) {
      m_AvailableRefreshRateCount = AvailableRefreshRateCountMax;
    }
  }
  const size_t count = m_AvailableRefreshRateCount;
  const size_t copied = outRates.size < count ? outRates.size : count;
  for (size_t i = 0; i < copied; i++) {
    const vi2::AvailableRefreshRate& rate = m_AvailableRefreshRates[i];
    if (!IsSupportedRefreshRate(rate.rate)) {
      os::UnlockMutex(&m_Mutex);
      return ResultInvalidValue;
    }
    AvailableRefreshRate& out = outRates.data[i];
    out.rate.value = rate.rate;
    for (int j = 0; j < 13; j++) {
      out.data[j] = rate.data[j];
    }
  }
  *pOutCount = m_AvailableRefreshRateCount;
  os::UnlockMutex(&m_Mutex);
  return result;
}

Result DefaultDisplay::DuplicateVsyncEvent(os::SystemEventType* pOutEvent) {
  if (m_IsVsyncEventInitialized) {
    return ResultAlreadyCreated;
  }
  NN_RESULT_DO(vi2::CreateVsyncEvent(&m_VsyncEvent, &m_Display,
    os::EventClearMode_AutoClear));
  m_IsVsyncEventInitialized = true;
  return vi2::sdk::DuplicateVsyncEvent(pOutEvent, &m_VsyncEvent,
    os::EventClearMode_AutoClear);
}

Result DefaultDisplay::DuplicateRefreshRateEvent(
  os::SystemEventType* pOutEvent) {
  if (!m_IsRefreshRateEventInitialized) {
    NN_RESULT_DO(vi2::CreateRefreshRateEvent(&m_RefreshRateEvent, &m_Display,
      os::EventClearMode_AutoClear));
    m_IsRefreshRateEventInitialized = true;
  }
  return vi2::sdk::DuplicateRefreshRateEvent(pOutEvent, &m_RefreshRateEvent,
    os::EventClearMode_AutoClear);
}

Result DefaultDisplay::DuplicateHdrStatusEvent(
  os::SystemEventType* pOutEvent) {
  if (!m_IsHdrStatusEventInitialized) {
    NN_RESULT_DO(vi2::CreateHdrStatusEvent(&m_HdrStatusEvent, &m_Display,
      os::EventClearMode_AutoClear));
    m_IsHdrStatusEventInitialized = true;
  }
  return vi2::sdk::DuplicateHdrStatusEvent(pOutEvent, &m_HdrStatusEvent,
    os::EventClearMode_AutoClear);
}

}
