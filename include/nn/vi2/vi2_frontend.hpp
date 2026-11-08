#pragma once

#include <stdint.h>

#include "nn/gs/gs_native_window.hpp"
#include "nn/gs/gs_sdk_types.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::gsdrv {

class UniqueNativeHandle;

}

namespace nn::vi2 {

struct AvailableRefreshRate;
struct AvailableRefreshRatesEventType;
struct BufferMaxResolution;
struct BufferMaxResolutionEventType;
struct BufferPoolType;
struct DisplayType;
struct EndpointType;
struct HdrPaperWhiteEventType;
struct HdrStatusEventType;
struct LayerType;
struct ModeCapabilityEventType;
struct PanelIdentifier;
struct RefreshRateEventType;
struct SupportedHdrOutputFormatBit;
struct SupportedRefreshRateBit;
struct TimestampRecorderType;
struct VsyncEventType;

enum BufferCheckpointBits : int64_t {};
enum BufferContentBits : int32_t {};
enum BufferPermissionBits : int32_t {};
enum HdrColorEncoding : int32_t {};
enum HdrContentGamut : int32_t {};
enum HdrOutputFormat : int32_t {};
enum HdrOutputFormatCapability : int32_t {};
enum HdrToneMapping : int32_t {};
enum ImageTransform : int32_t {};
enum RefreshRate : int32_t {};
enum RefreshRateCapability : int32_t {};

struct BufferDescriptor {
  gs::sdk::NativeImageFormatDescriptor format;
};

// A display buffer request: the format, the size minus one and the alpha mode.
struct BufferPreference {
  uint32_t reserved0;
  uint32_t format;
  uint16_t widthMinusOne;
  uint16_t heightMinusOne;
  union {
    struct {
      uint32_t alphaMode : 2;
      uint32_t reserved0c : 30;
    };
    HdrColorEncoding colorEncoding;
  };
  uint64_t reserved10[6];
};

namespace sdk {

enum LayerUserDataType : int32_t {};
enum RotationResolveMode : int32_t {};

}

namespace detail {

// The frontend dispatch table every vi2 call forwards to with its context.
struct Frontend {
  void* context;
  void* reserved8;
  void* reserved10;
  void* reserved18;
  Result (*createDisplay)(void* context, DisplayType*, uint64_t);
  void (*destroyDisplay)(void* context, DisplayType*);
  Result (*createEndpoint)(void* context, EndpointType*, uint64_t,
    DisplayType*);
  void (*destroyEndpoint)(void* context, EndpointType*);
  void (*reserved40)(void* context);
  Result (*createLayer)(void* context, LayerType*, const EndpointType*);
  void (*destroyLayer)(void* context, LayerType*);
  uint32_t (*getLayerRegisteredBufferBits)(void* context, const LayerType*);
  gs::NativeImageHandle (*getLayerBufferNativeImageHandle)(void* context,
    const LayerType*, uint32_t);
  uint32_t (*getLayerBufferNativeImageIndex)(void* context, const LayerType*,
    uint32_t);
  Result (*registerLayerBuffer)(void* context, LayerType*, uint32_t,
    const BufferPoolType*, uint64_t);
  Result (*unregisterLayerBuffer)(void* context, LayerType*, uint32_t,
    uint32_t);
  Result (*acquireLayerBuffer)(void* context, uint32_t*, gs::NativeSyncHandle*,
    LayerType*);
  Result (*presentLayerBuffer)(void* context, LayerType*, uint32_t,
    const gs::NativeSyncHandle&);
  uint32_t (*setLayerBufferNativeImageHandle)(void* context, LayerType*,
    uint32_t, const BufferPoolType*, uint32_t);
  void (*setLayerNextSwapInterval)(void* context, LayerType*, int);
  void (*setLayerNextCrop)(void* context, LayerType*, uint16_t, uint16_t,
    uint16_t, uint16_t);
  void (*setLayerNextRotation)(void* context, LayerType*, uint8_t);
  void (*setLayerNextRotationFlags)(void* context, LayerType*, bool, int);
  void* (*getLayerNativeWindowHandle)(void* context, LayerType*);
  Result (*sdkCreateBufferPool)(void* context, BufferPoolType*,
    const BufferDescriptor&, uint64_t, void*, uint64_t, os::MemoryPermission);
  Result (*sdkCreateBufferPoolForSystem)(void* context, BufferPoolType*,
    const BufferDescriptor&, uint64_t, void*, uint64_t, os::MemoryPermission);
  Result (*sdkCreateAliasBufferPool)(void* context, BufferPoolType*,
    gs::NativeImageHandle, uint64_t);
  void (*destroyBufferPool)(void* context, BufferPoolType*);
  gs::NativeImageHandle (*getBufferPoolNativeImageHandle)(void* context,
    const BufferPoolType*, uint64_t);
  Result (*readBufferPoolImage)(void* context, void*, uint64_t,
    const BufferPoolType*, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t);
  Result (*writeBufferPoolImage)(void* context, BufferPoolType*, uint64_t,
    uint16_t, uint16_t, uint16_t, uint16_t, const void*, uint64_t,
    ImageTransform);
  Result (*blankBufferPoolImage)(void* context, BufferPoolType*, uint64_t);
  Result (*createVsyncEvent)(void* context, VsyncEventType*,
    const DisplayType*, os::EventClearMode);
  void (*destroyVsyncEvent)(void* context, VsyncEventType*);
  void (*waitVsyncEvent)(void* context, VsyncEventType*);
  bool (*timedWaitVsyncEvent)(void* context, VsyncEventType*, TimeSpan);
  bool (*tryWaitVsyncEvent)(void* context, VsyncEventType*);
  void (*clearVsyncEvent)(void* context, VsyncEventType*);
  void (*initializeMultiWaitHolderForVsyncEvent)(void* context,
    os::MultiWaitHolderType*, VsyncEventType*);
  Result (*sdkDuplicateVsyncEvent)(void* context, os::SystemEventType*,
    const VsyncEventType*, os::EventClearMode);
  void (*setLayerNextPermission)(void* context, LayerType*,
    BufferPermissionBits, bool);
  void (*clearLayerNextPermission)(void* context, LayerType*,
    BufferPermissionBits);
  void (*setLayerNextContent)(void* context, LayerType*, BufferContentBits,
    bool);
  void (*clearLayerNextContent)(void* context, LayerType*, BufferContentBits);
  const BufferPoolType* (*reserved160)(void* context, const BufferPoolType*);
  Result (*sdkGetBufferPoolNativeMemoryHandle)(void* context,
    const BufferPoolType*);
  Result (*sdkCreateBufferPoolWithTransferMemory)(void* context,
    BufferPoolType*, BufferPreference, uint32_t,
    gsdrv::UniqueNativeHandle*, uint64_t, os::MemoryPermission);
  void (*glSetLayerBufferSize)(void* context, LayerType*, uint16_t, uint16_t);
  Result (*setDisplayRefreshRateCapability)(void* context, DisplayType*,
    RefreshRate, RefreshRateCapability);
  Result (*queryDisplayRefreshRate)(void* context, RefreshRate*, bool*,
    const DisplayType*);
  Result (*createRefreshRateEvent)(void* context, RefreshRateEventType*,
    const DisplayType*, os::EventClearMode);
  void (*destroyRefreshRateEvent)(void* context, RefreshRateEventType*);
  void (*waitRefreshRateEvent)(void* context, RefreshRateEventType*);
  bool (*timedWaitRefreshRateEvent)(void* context, RefreshRateEventType*,
    TimeSpan);
  bool (*tryWaitRefreshRateEvent)(void* context, RefreshRateEventType*);
  void (*clearRefreshRateEvent)(void* context, RefreshRateEventType*);
  void (*initializeMultiWaitHolderForRefreshRateEvent)(void* context,
    os::MultiWaitHolderType*, RefreshRateEventType*);
  Result (*sdkDuplicateRefreshRateEvent)(void* context, os::SystemEventType*,
    const RefreshRateEventType*, os::EventClearMode);
  void (*setLayerNextExtendedSwapInterval)(void* context, LayerType*, int,
    int);
  void (*clearLayerNextExtendedSwapInterval)(void* context, LayerType*);
  Result (*setDisplayHdrOutputFormatCapability)(void* context, DisplayType*,
    HdrOutputFormat, HdrOutputFormatCapability);
  Result (*queryDisplayHdrStatus)(void* context, HdrOutputFormat*, uint16_t*,
    const DisplayType*);
  Result (*queryDisplayHdrPaperWhite)(void* context, uint16_t*,
    const DisplayType*);
  void (*setLayerNextHdrExtendedContentLuminanceRangeMetadata)(void* context,
    LayerType*, uint16_t, uint16_t);
  void (*setLayerNextHdrStandardContentLuminanceRangeMetadata)(void* context,
    LayerType*, uint16_t, uint16_t);
  void (*setLayerNextHdrContentGamutMetadata)(void* context, LayerType*,
    HdrContentGamut);
  void (*clearLayerNextHdrContentGamutMetadata)(void* context, LayerType*);
  void (*setLayerNextHdrToSdrToneMappingMetadata)(void* context, LayerType*,
    HdrToneMapping);
  void (*clearLayerNextHdrToSdrToneMappingMetadata)(void* context, LayerType*);
  void (*setLayerNextHdrAdjustableBezierMetadata)(void* context, LayerType*,
    float, float, float);
  void (*clearLayerNextHdrAdjustableBezierMetadata)(void* context, LayerType*);
  void (*setLayerNativeWindowHdrColorEncoding)(void* context, LayerType*,
    HdrColorEncoding);
  void (*setLayerNativeWindowHdrLinearColorEncoding)(void* context,
    LayerType*, HdrColorEncoding, uint16_t);
  Result (*createHdrStatusEvent)(void* context, HdrStatusEventType*,
    const DisplayType*, os::EventClearMode);
  void (*destroyHdrStatusEvent)(void* context, HdrStatusEventType*);
  void (*waitHdrStatusEvent)(void* context, HdrStatusEventType*);
  bool (*timedWaitHdrStatusEvent)(void* context, HdrStatusEventType*,
    TimeSpan);
  bool (*tryWaitHdrStatusEvent)(void* context, HdrStatusEventType*);
  void (*clearHdrStatusEvent)(void* context, HdrStatusEventType*);
  void (*initializeMultiWaitHolderForHdrStatusEvent)(void* context,
    os::MultiWaitHolderType*, HdrStatusEventType*);
  Result (*sdkDuplicateHdrStatusEvent)(void* context, os::SystemEventType*,
    const HdrStatusEventType*, os::EventClearMode);
  Result (*createHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*,
    const DisplayType*, os::EventClearMode);
  void (*destroyHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*);
  void (*waitHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*);
  bool (*timedWaitHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*,
    TimeSpan);
  bool (*tryWaitHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*);
  void (*clearHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*);
  void (*initializeMultiWaitHolderForHdrPaperWhiteEvent)(void* context,
    os::MultiWaitHolderType*, HdrPaperWhiteEventType*);
  Result (*sdkDuplicateHdrPaperWhiteEvent)(void* context, os::SystemEventType*,
    const HdrPaperWhiteEventType*, os::EventClearMode);
  Result (*queryDisplayBufferMaxResolution)(void* context,
    BufferMaxResolution*, const DisplayType*);
  Result (*createBufferMaxResolutionEvent)(void* context,
    BufferMaxResolutionEventType*, const DisplayType*, os::EventClearMode);
  void (*destroyBufferMaxResolutionEvent)(void* context,
    BufferMaxResolutionEventType*);
  bool (*tryWaitBufferMaxResolutionEvent)(void* context,
    BufferMaxResolutionEventType*);
  void (*clearBufferMaxResolutionEvent)(void* context,
    BufferMaxResolutionEventType*);
  void (*initializeMultiWaitHolderForBufferMaxResolutionEvent)(void* context,
    os::MultiWaitHolderType*, BufferMaxResolutionEventType*);
  Result (*sdkDuplicateBufferMaxResolutionEvent)(void* context,
    os::SystemEventType*, const BufferMaxResolutionEventType*,
    os::EventClearMode);
  Result (*queryDisplayModeCapability)(void* context,
    util::BitFlagSet<64, SupportedRefreshRateBit>*,
    util::BitFlagSet<64, SupportedHdrOutputFormatBit>*,
    util::BitFlagSet<64, SupportedRefreshRateBit>*, const DisplayType*);
  Result (*createModeCapabilityEvent)(void* context, ModeCapabilityEventType*,
    const DisplayType*, os::EventClearMode);
  void (*destroyModeCapabilityEvent)(void* context, ModeCapabilityEventType*);
  bool (*tryWaitModeCapabilityEvent)(void* context, ModeCapabilityEventType*);
  void (*clearModeCapabilityEvent)(void* context, ModeCapabilityEventType*);
  void (*initializeMultiWaitHolderForModeCapabilityEvent)(void* context,
    os::MultiWaitHolderType*, ModeCapabilityEventType*);
  Result (*sdkDuplicateModeCapabilityEvent)(void* context,
    os::SystemEventType*, const ModeCapabilityEventType*, os::EventClearMode);
  Result (*createTimestampRecorder)(void* context, TimestampRecorderType*);
  void (*destroyTimestampRecorder)(void* context, TimestampRecorderType*);
  Result (*getTimestampRecorderReleaseFence)(void* context,
    const TimestampRecorderType*);
  uint64_t (*getRecordedTimestamp)(void* context, const TimestampRecorderType*,
    BufferCheckpointBits);
  void (*setLayerNextTimestampRecorder)(void* context, LayerType*,
    TimestampRecorderType*, BufferCheckpointBits);
  void (*clearLayerNextTimestampRecorder)(void* context, LayerType*);
  Result (*getLayerNextFrameNumber)(void* context, uint64_t*, const LayerType*);
  void (*sdkSetLayerNextUserData)(void* context, LayerType*,
    sdk::LayerUserDataType, uint64_t);
  void (*sdkClearLayerNextUserData)(void* context, LayerType*);
  void (*sdkSetLayerNextRotationResolveMode)(void* context, LayerType*,
    sdk::RotationResolveMode);
  Result (*sdkCreateBufferPoolWithProtectedMemory)(void* context,
    BufferPoolType*, BufferPreference, uint64_t, uint64_t);
  Result (*queryDisplayPanelIdentifier)(void* context, PanelIdentifier*,
    const DisplayType*);
  Result (*queryAvailableRefreshRates)(void* context,
    Span<AvailableRefreshRate>, uint8_t*, const DisplayType*);
  Result (*createAvailableRefreshRatesEvent)(void* context,
    AvailableRefreshRatesEventType*, const DisplayType*);
  void (*destroyAvailableRefreshRatesEvent)(void* context,
    AvailableRefreshRatesEventType*);
  bool (*tryWaitAvailableRefreshRatesEvent)(void* context,
    AvailableRefreshRatesEventType*);
  void (*initializeMultiWaitHolderForAvailableRefreshRatesEvent)(
    void* context, os::MultiWaitHolderType*, AvailableRefreshRatesEventType*);
};

extern Frontend g_Frontend;

}

}
