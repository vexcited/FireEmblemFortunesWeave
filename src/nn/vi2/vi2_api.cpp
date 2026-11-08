#include <string.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/vi2/vi2_frontend.hpp"

namespace nn::vi2 {

namespace detail {

extern char g_DefaultDisplayName[8];

}

using detail::g_Frontend;

namespace {

constexpr uint32_t BufferFormatRgba8 = 1;
constexpr uint32_t BufferFormatHdr = 0x11;
constexpr HdrColorEncoding HdrColorEncodingNone = HdrColorEncoding{0};
constexpr HdrColorEncoding HdrColorEncodingPq = HdrColorEncoding{1};
constexpr HdrColorEncoding HdrColorEncodingLinear = HdrColorEncoding{0x40};

// The linear encoding also takes its reference level in nits.
constexpr uint16_t HdrLinearReferenceLevel = 0x50;

// Names are packed in eight bytes and stop at the first terminator.
uint64_t MakeName(const char* pName) {
  char buffer[8] = {};
  if (pName != nullptr) {
    for (int i = 0; i < 8 && pName[i] != '\0'; ++i) {
      buffer[i] = pName[i];
    }
  }
  uint64_t name;
  memcpy(&name, buffer, sizeof(name));
  return name;
}

uint64_t GetDefaultDisplayName() {
  uint64_t name;
  memcpy(&name, detail::g_DefaultDisplayName, sizeof(name));
  return name;
}

}

// The default display may be renamed, so its literal name maps to the
// current one.
Result CreateDisplay(DisplayType* pDisplay, const char* pName) {
  uint64_t name = MakeName(pName);
  if (name == MakeName("default")) {
    name = GetDefaultDisplayName();
  }
  return g_Frontend.createDisplay(g_Frontend.context, pDisplay, name);
}

Result CreateDefaultDisplay(DisplayType* pDisplay) {
  return g_Frontend.createDisplay(g_Frontend.context, pDisplay,
    GetDefaultDisplayName());
}

Result CreateEndpoint(EndpointType* pEndpoint, const char* pName,
  const DisplayType* pDisplay) {
  return g_Frontend.createEndpoint(g_Frontend.context, pEndpoint,
    MakeName(pName), const_cast<DisplayType*>(pDisplay));
}

uint64_t GetLayerBufferImageIndex(const LayerType* pLayer, uint32_t index) {
  return g_Frontend.getLayerBufferNativeImageIndex(g_Frontend.context, pLayer,
    index);
}

void SetLayerNativeWindowHdrColorEncoding(LayerType* pLayer,
  HdrColorEncoding encoding) {
  if (encoding == HdrColorEncodingLinear) {
    g_Frontend.setLayerNativeWindowHdrLinearColorEncoding(g_Frontend.context,
      pLayer, encoding, HdrLinearReferenceLevel);
    return;
  }
  g_Frontend.setLayerNativeWindowHdrColorEncoding(g_Frontend.context, pLayer,
    encoding);
}

Result CreateBufferPool(BufferPoolType* pPool,
  const BufferPreference& preference, uint64_t count, void* pMemory,
  uint64_t memorySize, os::MemoryPermission permission) {
  static_assert(sizeof(BufferDescriptor) == sizeof(BufferPreference));
  BufferDescriptor descriptor;
  memcpy(&descriptor, &preference, sizeof(descriptor));
  return g_Frontend.sdkCreateBufferPool(g_Frontend.context, pPool, descriptor,
    count, pMemory, memorySize, permission);
}

Result ReadBufferPoolImage(void* pBuffer, uint64_t bufferSize,
  const BufferPoolType* pPool, uint64_t index, uint16_t x, uint16_t y,
  uint16_t width, uint16_t height) {
  return g_Frontend.readBufferPoolImage(g_Frontend.context, pBuffer,
    bufferSize, pPool, index, x, y, width, height);
}

Result WriteBufferPoolImage(BufferPoolType* pPool, uint64_t index, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height, const void* pBuffer,
  uint64_t bufferSize, ImageTransform transform) {
  return g_Frontend.writeBufferPoolImage(g_Frontend.context, pPool, index, x,
    y, width, height, pBuffer, bufferSize, transform);
}

BufferPreference MakeBufferPreference(uint16_t width, uint16_t height) {
  BufferPreference preference = {};
  preference.format = BufferFormatRgba8;
  preference.widthMinusOne = uint16_t(width - 1);
  preference.heightMinusOne = uint16_t(height - 1);
  return preference;
}

BufferPreference MakeBufferPreference(uint16_t width, uint16_t height,
  HdrColorEncoding encoding) {
  switch (encoding) {
    case HdrColorEncodingNone:
      return MakeBufferPreference(width, height);
    case HdrColorEncodingPq:
    case HdrColorEncodingLinear: {
      BufferPreference preference = {};
      preference.format = BufferFormatHdr;
      preference.widthMinusOne = uint16_t(width - 1);
      preference.heightMinusOne = uint16_t(height - 1);
      preference.colorEncoding = encoding;
      return preference;
    }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

namespace sdk {

void SetLayerNextUserData(LayerType* a0, sdk::LayerUserDataType a1,
  uint64_t a2) {
  g_Frontend.sdkSetLayerNextUserData(g_Frontend.context, a0, a1, a2);
}

void ClearLayerNextUserData(LayerType* a0) {
  g_Frontend.sdkClearLayerNextUserData(g_Frontend.context, a0);
}

void SetLayerNextRotationResolveMode(LayerType* a0,
  sdk::RotationResolveMode a1) {
  g_Frontend.sdkSetLayerNextRotationResolveMode(g_Frontend.context, a0,
    a1);
}

}

void DestroyDisplay(DisplayType* a0) {
  g_Frontend.destroyDisplay(g_Frontend.context, a0);
}

Result SetDisplayRefreshRateCapability(DisplayType* a0, RefreshRate a1,
  RefreshRateCapability a2) {
  return g_Frontend.setDisplayRefreshRateCapability(g_Frontend.context, a0, a1,
    a2);
}

Result QueryDisplayRefreshRate(RefreshRate* a0, bool* a1,
  const DisplayType* a2) {
  return g_Frontend.queryDisplayRefreshRate(g_Frontend.context, a0, a1, a2);
}

Result SetDisplayHdrOutputFormatCapability(DisplayType* a0, HdrOutputFormat a1,
  HdrOutputFormatCapability a2) {
  return g_Frontend.setDisplayHdrOutputFormatCapability(g_Frontend.context, a0,
    a1, a2);
}

Result QueryDisplayHdrStatus(HdrOutputFormat* a0, uint16_t* a1,
  const DisplayType* a2) {
  return g_Frontend.queryDisplayHdrStatus(g_Frontend.context, a0, a1, a2);
}

Result QueryDisplayHdrPaperWhite(uint16_t* a0, const DisplayType* a1) {
  return g_Frontend.queryDisplayHdrPaperWhite(g_Frontend.context, a0, a1);
}

Result QueryDisplayBufferMaxResolution(BufferMaxResolution* a0,
  const DisplayType* a1) {
  return g_Frontend.queryDisplayBufferMaxResolution(g_Frontend.context, a0, a1);
}

Result QueryDisplayModeCapability(
  util::BitFlagSet<64, SupportedRefreshRateBit>* a0,
  util::BitFlagSet<64, SupportedHdrOutputFormatBit>* a1,
  util::BitFlagSet<64, SupportedRefreshRateBit>* a2, const DisplayType* a3) {
  return g_Frontend.queryDisplayModeCapability(g_Frontend.context, a0, a1, a2,
    a3);
}

Result QueryDisplayPanelIdentifier(PanelIdentifier* a0, const DisplayType* a1) {
  return g_Frontend.queryDisplayPanelIdentifier(g_Frontend.context, a0, a1);
}

void DestroyEndpoint(EndpointType* a0) {
  g_Frontend.destroyEndpoint(g_Frontend.context, a0);
}

Result CreateLayer(LayerType* a0, const EndpointType* a1) {
  return g_Frontend.createLayer(g_Frontend.context, a0, a1);
}

void DestroyLayer(LayerType* a0) {
  g_Frontend.destroyLayer(g_Frontend.context, a0);
}

uint32_t GetLayerRegisteredBufferBits(const LayerType* a0) {
  return g_Frontend.getLayerRegisteredBufferBits(g_Frontend.context, a0);
}

gs::NativeImageHandle GetLayerBufferNativeImageHandle(const LayerType* a0,
  uint32_t a1) {
  return g_Frontend.getLayerBufferNativeImageHandle(g_Frontend.context, a0, a1);
}

Result RegisterLayerBuffer(LayerType* a0, uint32_t a1, const BufferPoolType* a2,
  uint64_t a3) {
  return g_Frontend.registerLayerBuffer(g_Frontend.context, a0, a1, a2, a3);
}

Result UnregisterLayerBuffer(LayerType* a0, uint32_t a1, uint32_t a2) {
  return g_Frontend.unregisterLayerBuffer(g_Frontend.context, a0, a1, a2);
}

Result AcquireLayerBuffer(uint32_t* a0, gs::NativeSyncHandle* a1,
  LayerType* a2) {
  return g_Frontend.acquireLayerBuffer(g_Frontend.context, a0, a1, a2);
}

Result PresentLayerBuffer(LayerType* a0, uint32_t a1,
  const gs::NativeSyncHandle& a2) {
  return g_Frontend.presentLayerBuffer(g_Frontend.context, a0, a1, a2);
}

void SetLayerNextSwapInterval(LayerType* a0, int a1) {
  g_Frontend.setLayerNextSwapInterval(g_Frontend.context, a0, a1);
}

void SetLayerNextExtendedSwapInterval(LayerType* a0, int a1, int a2) {
  g_Frontend.setLayerNextExtendedSwapInterval(g_Frontend.context, a0, a1,
    a2);
}

void ClearLayerNextExtendedSwapInterval(LayerType* a0) {
  g_Frontend.clearLayerNextExtendedSwapInterval(g_Frontend.context, a0);
}

void SetLayerNextCrop(LayerType* a0, uint16_t a1, uint16_t a2, uint16_t a3,
  uint16_t a4) {
  g_Frontend.setLayerNextCrop(g_Frontend.context, a0, a1, a2, a3, a4);
}

void SetLayerNextRotation(LayerType* a0, uint8_t a1) {
  g_Frontend.setLayerNextRotation(g_Frontend.context, a0, a1);
}

void SetLayerNextPermission(LayerType* a0, BufferPermissionBits a1, bool a2) {
  g_Frontend.setLayerNextPermission(g_Frontend.context, a0, a1, a2);
}

void ClearLayerNextPermission(LayerType* a0, BufferPermissionBits a1) {
  g_Frontend.clearLayerNextPermission(g_Frontend.context, a0, a1);
}

void SetLayerNextContent(LayerType* a0, BufferContentBits a1, bool a2) {
  g_Frontend.setLayerNextContent(g_Frontend.context, a0, a1, a2);
}

void ClearLayerNextContent(LayerType* a0, BufferContentBits a1) {
  g_Frontend.clearLayerNextContent(g_Frontend.context, a0, a1);
}

void SetLayerNextHdrExtendedContentLuminanceRangeMetadata(LayerType* a0,
  uint16_t a1, uint16_t a2) {
  g_Frontend.setLayerNextHdrExtendedContentLuminanceRangeMetadata(
    g_Frontend.context, a0, a1, a2);
}

void SetLayerNextHdrStandardContentLuminanceRangeMetadata(LayerType* a0,
  uint16_t a1, uint16_t a2) {
  g_Frontend.setLayerNextHdrStandardContentLuminanceRangeMetadata(
    g_Frontend.context, a0, a1, a2);
}

void SetLayerNextHdrContentGamutMetadata(LayerType* a0, HdrContentGamut a1) {
  g_Frontend.setLayerNextHdrContentGamutMetadata(g_Frontend.context, a0,
    a1);
}

void ClearLayerNextHdrContentGamutMetadata(LayerType* a0) {
  g_Frontend.clearLayerNextHdrContentGamutMetadata(g_Frontend.context, a0);
}

void SetLayerNextHdrToSdrToneMappingMetadata(LayerType* a0,
  HdrToneMapping a1) {
  g_Frontend.setLayerNextHdrToSdrToneMappingMetadata(g_Frontend.context,
    a0, a1);
}

void ClearLayerNextHdrToSdrToneMappingMetadata(LayerType* a0) {
  g_Frontend.clearLayerNextHdrToSdrToneMappingMetadata(g_Frontend.context, a0);
}

void SetLayerNextHdrAdjustableBezierMetadata(LayerType* a0, float a1,
  float a2, float a3) {
  g_Frontend.setLayerNextHdrAdjustableBezierMetadata(g_Frontend.context,
    a0, a1, a2, a3);
}

void ClearLayerNextHdrAdjustableBezierMetadata(LayerType* a0) {
  g_Frontend.clearLayerNextHdrAdjustableBezierMetadata(g_Frontend.context, a0);
}

void* GetLayerNativeWindowHandle(LayerType* a0) {
  return g_Frontend.getLayerNativeWindowHandle(g_Frontend.context, a0);
}

void SetLayerNativeWindowHdrLinearColorEncoding(LayerType* a0,
  HdrColorEncoding a1, uint16_t a2) {
  g_Frontend.setLayerNativeWindowHdrLinearColorEncoding(
    g_Frontend.context, a0, a1, a2);
}

void SetLayerNextTimestampRecorder(LayerType* a0, TimestampRecorderType* a1,
  BufferCheckpointBits a2) {
  g_Frontend.setLayerNextTimestampRecorder(g_Frontend.context, a0, a1,
    a2);
}

void ClearLayerNextTimestampRecorder(LayerType* a0) {
  g_Frontend.clearLayerNextTimestampRecorder(g_Frontend.context, a0);
}

namespace gl {

void SetLayerBufferSize(LayerType* a0, uint16_t a1, uint16_t a2) {
  g_Frontend.glSetLayerBufferSize(g_Frontend.context, a0, a1, a2);
}

}

namespace vulkan {

void SetLayerBufferSize(LayerType* a0, uint16_t a1, uint16_t a2) {
  g_Frontend.glSetLayerBufferSize(g_Frontend.context, a0, a1, a2);
}

}

void DestroyBufferPool(BufferPoolType* a0) {
  g_Frontend.destroyBufferPool(g_Frontend.context, a0);
}

gs::NativeImageHandle GetBufferPoolNativeImageHandle(const BufferPoolType* a0,
  uint64_t a1) {
  return g_Frontend.getBufferPoolNativeImageHandle(g_Frontend.context, a0, a1);
}

Result BlankBufferPoolImage(BufferPoolType* a0, uint64_t a1) {
  return g_Frontend.blankBufferPoolImage(g_Frontend.context, a0, a1);
}

Result CreateVsyncEvent(VsyncEventType* a0, const DisplayType* a1,
  os::EventClearMode a2) {
  return g_Frontend.createVsyncEvent(g_Frontend.context, a0, a1, a2);
}

void DestroyVsyncEvent(VsyncEventType* a0) {
  g_Frontend.destroyVsyncEvent(g_Frontend.context, a0);
}

void WaitVsyncEvent(VsyncEventType* a0) {
  g_Frontend.waitVsyncEvent(g_Frontend.context, a0);
}

bool TimedWaitVsyncEvent(VsyncEventType* a0, TimeSpan a1) {
  return g_Frontend.timedWaitVsyncEvent(g_Frontend.context, a0, a1);
}

bool TryWaitVsyncEvent(VsyncEventType* a0) {
  return g_Frontend.tryWaitVsyncEvent(g_Frontend.context, a0);
}

void ClearVsyncEvent(VsyncEventType* a0) {
  g_Frontend.clearVsyncEvent(g_Frontend.context, a0);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* a0,
  VsyncEventType* a1) {
  g_Frontend.initializeMultiWaitHolderForVsyncEvent(g_Frontend.context, a0, a1);
}

namespace sdk {

Result DuplicateVsyncEvent(os::SystemEventType* a0, const VsyncEventType* a1,
  os::EventClearMode a2) {
  return g_Frontend.sdkDuplicateVsyncEvent(g_Frontend.context, a0, a1, a2);
}

}

Result CreateRefreshRateEvent(RefreshRateEventType* a0, const DisplayType* a1,
  os::EventClearMode a2) {
  return g_Frontend.createRefreshRateEvent(g_Frontend.context, a0, a1, a2);
}

void DestroyRefreshRateEvent(RefreshRateEventType* a0) {
  g_Frontend.destroyRefreshRateEvent(g_Frontend.context, a0);
}

void WaitRefreshRateEvent(RefreshRateEventType* a0) {
  g_Frontend.waitRefreshRateEvent(g_Frontend.context, a0);
}

bool TimedWaitRefreshRateEvent(RefreshRateEventType* a0, TimeSpan a1) {
  return g_Frontend.timedWaitRefreshRateEvent(g_Frontend.context, a0, a1);
}

bool TryWaitRefreshRateEvent(RefreshRateEventType* a0) {
  return g_Frontend.tryWaitRefreshRateEvent(g_Frontend.context, a0);
}

void ClearRefreshRateEvent(RefreshRateEventType* a0) {
  g_Frontend.clearRefreshRateEvent(g_Frontend.context, a0);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* a0,
  RefreshRateEventType* a1) {
  g_Frontend.initializeMultiWaitHolderForRefreshRateEvent(g_Frontend.context,
    a0, a1);
}

namespace sdk {

Result DuplicateRefreshRateEvent(os::SystemEventType* a0,
  const RefreshRateEventType* a1, os::EventClearMode a2) {
  return g_Frontend.sdkDuplicateRefreshRateEvent(g_Frontend.context, a0, a1,
    a2);
}

}

Result CreateHdrStatusEvent(HdrStatusEventType* a0, const DisplayType* a1,
  os::EventClearMode a2) {
  return g_Frontend.createHdrStatusEvent(g_Frontend.context, a0, a1, a2);
}

void DestroyHdrStatusEvent(HdrStatusEventType* a0) {
  g_Frontend.destroyHdrStatusEvent(g_Frontend.context, a0);
}

bool TryWaitHdrStatusEvent(HdrStatusEventType* a0) {
  return g_Frontend.tryWaitHdrStatusEvent(g_Frontend.context, a0);
}

void ClearHdrStatusEvent(HdrStatusEventType* a0) {
  g_Frontend.clearHdrStatusEvent(g_Frontend.context, a0);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* a0,
  HdrStatusEventType* a1) {
  g_Frontend.initializeMultiWaitHolderForHdrStatusEvent(g_Frontend.context, a0,
    a1);
}

namespace sdk {

Result DuplicateHdrStatusEvent(os::SystemEventType* a0,
  const HdrStatusEventType* a1, os::EventClearMode a2) {
  return g_Frontend.sdkDuplicateHdrStatusEvent(g_Frontend.context, a0, a1, a2);
}

}

Result CreateHdrPaperWhiteEvent(HdrPaperWhiteEventType* a0,
  const DisplayType* a1, os::EventClearMode a2) {
  return g_Frontend.createHdrPaperWhiteEvent(g_Frontend.context, a0, a1, a2);
}

void DestroyHdrPaperWhiteEvent(HdrPaperWhiteEventType* a0) {
  g_Frontend.destroyHdrPaperWhiteEvent(g_Frontend.context, a0);
}

bool TryWaitHdrPaperWhiteEvent(HdrPaperWhiteEventType* a0) {
  return g_Frontend.tryWaitHdrPaperWhiteEvent(g_Frontend.context, a0);
}

void ClearHdrPaperWhiteEvent(HdrPaperWhiteEventType* a0) {
  g_Frontend.clearHdrPaperWhiteEvent(g_Frontend.context, a0);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* a0,
  HdrPaperWhiteEventType* a1) {
  g_Frontend.initializeMultiWaitHolderForHdrPaperWhiteEvent(g_Frontend.context,
    a0, a1);
}

namespace sdk {

Result DuplicateHdrPaperWhiteEvent(os::SystemEventType* a0,
  const HdrPaperWhiteEventType* a1, os::EventClearMode a2) {
  return g_Frontend.sdkDuplicateHdrPaperWhiteEvent(g_Frontend.context, a0, a1,
    a2);
}

}

Result CreateBufferMaxResolutionEvent(BufferMaxResolutionEventType* a0,
  const DisplayType* a1, os::EventClearMode a2) {
  return g_Frontend.createBufferMaxResolutionEvent(g_Frontend.context, a0, a1,
    a2);
}

void DestroyBufferMaxResolutionEvent(BufferMaxResolutionEventType* a0) {
  g_Frontend.destroyBufferMaxResolutionEvent(g_Frontend.context, a0);
}

bool TryWaitBufferMaxResolutionEvent(BufferMaxResolutionEventType* a0) {
  return g_Frontend.tryWaitBufferMaxResolutionEvent(g_Frontend.context, a0);
}

void ClearBufferMaxResolutionEvent(BufferMaxResolutionEventType* a0) {
  g_Frontend.clearBufferMaxResolutionEvent(g_Frontend.context, a0);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* a0,
  BufferMaxResolutionEventType* a1) {
  g_Frontend.initializeMultiWaitHolderForBufferMaxResolutionEvent(
    g_Frontend.context, a0, a1);
}

namespace sdk {

Result DuplicateBufferMaxResolutionEvent(os::SystemEventType* a0,
  const BufferMaxResolutionEventType* a1, os::EventClearMode a2) {
  return g_Frontend.sdkDuplicateBufferMaxResolutionEvent(g_Frontend.context, a0,
    a1, a2);
}

}

Result CreateModeCapabilityEvent(ModeCapabilityEventType* a0,
  const DisplayType* a1, os::EventClearMode a2) {
  return g_Frontend.createModeCapabilityEvent(g_Frontend.context, a0, a1, a2);
}

void DestroyModeCapabilityEvent(ModeCapabilityEventType* a0) {
  g_Frontend.destroyModeCapabilityEvent(g_Frontend.context, a0);
}

bool TryWaitModeCapabilityEvent(ModeCapabilityEventType* a0) {
  return g_Frontend.tryWaitModeCapabilityEvent(g_Frontend.context, a0);
}

void ClearModeCapabilityEvent(ModeCapabilityEventType* a0) {
  g_Frontend.clearModeCapabilityEvent(g_Frontend.context, a0);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* a0,
  ModeCapabilityEventType* a1) {
  g_Frontend.initializeMultiWaitHolderForModeCapabilityEvent(g_Frontend.context,
    a0, a1);
}

namespace sdk {

Result DuplicateModeCapabilityEvent(os::SystemEventType* a0,
  const ModeCapabilityEventType* a1, os::EventClearMode a2) {
  return g_Frontend.sdkDuplicateModeCapabilityEvent(g_Frontend.context, a0, a1,
    a2);
}

}

Result QueryAvailableRefreshRates(Span<AvailableRefreshRate> a0, uint8_t* a1,
  const DisplayType* a2) {
  return g_Frontend.queryAvailableRefreshRates(g_Frontend.context, a0, a1, a2);
}

Result CreateAvailableRefreshRatesEvent(AvailableRefreshRatesEventType* a0,
  const DisplayType* a1) {
  return g_Frontend.createAvailableRefreshRatesEvent(g_Frontend.context, a0,
    a1);
}

void DestroyAvailableRefreshRatesEvent(AvailableRefreshRatesEventType* a0) {
  g_Frontend.destroyAvailableRefreshRatesEvent(g_Frontend.context, a0);
}

bool TryWaitAvailableRefreshRatesEvent(AvailableRefreshRatesEventType* a0) {
  return g_Frontend.tryWaitAvailableRefreshRatesEvent(g_Frontend.context, a0);
}

Result CreateTimestampRecorder(TimestampRecorderType* a0) {
  return g_Frontend.createTimestampRecorder(g_Frontend.context, a0);
}

void DestroyTimestampRecorder(TimestampRecorderType* a0) {
  g_Frontend.destroyTimestampRecorder(g_Frontend.context, a0);
}

Result GetTimestampRecorderReleaseFence(const TimestampRecorderType* a0) {
  return g_Frontend.getTimestampRecorderReleaseFence(g_Frontend.context, a0);
}

uint64_t GetRecordedTimestamp(const TimestampRecorderType* a0,
  BufferCheckpointBits a1) {
  return g_Frontend.getRecordedTimestamp(g_Frontend.context, a0, a1);
}

Result GetLayerNextFrameNumber(uint64_t* a0, const LayerType* a1) {
  return g_Frontend.getLayerNextFrameNumber(g_Frontend.context, a0, a1);
}

namespace sdk {

Result CreateBufferPool(BufferPoolType* a0, const BufferDescriptor& a1,
  uint64_t a2, void* a3, uint64_t a4, os::MemoryPermission a5) {
  return g_Frontend.sdkCreateBufferPool(g_Frontend.context, a0, a1, a2, a3, a4,
    a5);
}

Result CreateAliasBufferPool(BufferPoolType* a0, gs::NativeImageHandle a1,
  uint64_t a2) {
  return g_Frontend.sdkCreateAliasBufferPool(g_Frontend.context, a0, a1, a2);
}

Result GetBufferPoolNativeMemoryHandle(const BufferPoolType* a0) {
  return g_Frontend.sdkGetBufferPoolNativeMemoryHandle(g_Frontend.context, a0);
}

}

}
