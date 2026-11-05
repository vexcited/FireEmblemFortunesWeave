#pragma once

#include <stdint.h>

#include "nn/gs/gs_native_window.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::vi2 {

struct AvailableRefreshRate;
struct AvailableRefreshRatesEventType;
struct BufferDescriptor;
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

enum BufferCheckpointBits : int32_t {};
enum BufferContentBits : int32_t {};
enum BufferPermissionBits : int32_t {};
enum HdrColorEncoding : int32_t {};
enum HdrContentGamut : int32_t {};
enum HdrOutputFormat : int32_t {};
enum HdrOutputFormatCapability : int32_t {};
enum HdrToneMapping : int32_t {};
enum RefreshRate : int32_t {};
enum RefreshRateCapability : int32_t {};

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
  void* reserved20;
  void (*destroyDisplay)(void* context, DisplayType*);
  void* reserved30;
  void (*destroyEndpoint)(void* context, EndpointType*);
  void* reserved40;
  Result (*createLayer)(void* context, LayerType*, const EndpointType*);
  void (*destroyLayer)(void* context, LayerType*);
  uint32_t (*getLayerRegisteredBufferBits)(void* context, const LayerType*);
  gs::NativeImageHandle (*getLayerBufferNativeImageHandle)(void* context,
    const LayerType*, uint32_t);
  void* reserved68;
  Result (*registerLayerBuffer)(void* context, LayerType*, uint32_t,
    const BufferPoolType*, uint64_t);
  Result (*unregisterLayerBuffer)(void* context, LayerType*, uint32_t,
    uint32_t);
  Result (*acquireLayerBuffer)(void* context, uint32_t*, gs::NativeSyncHandle*,
    LayerType*);
  Result (*presentLayerBuffer)(void* context, LayerType*, uint32_t,
    const gs::NativeSyncHandle&);
  void* reserved90;
  Result (*setLayerNextSwapInterval)(void* context, LayerType*, int);
  Result (*setLayerNextCrop)(void* context, LayerType*, uint16_t, uint16_t,
    uint16_t, uint16_t);
  Result (*setLayerNextRotation)(void* context, LayerType*, uint8_t);
  void* reservedb0;
  void* (*getLayerNativeWindowHandle)(void* context, LayerType*);
  Result (*sdkCreateBufferPool)(void* context, BufferPoolType*,
    const BufferDescriptor&, uint64_t, void*, uint64_t, os::MemoryPermission);
  void* reservedc8;
  Result (*sdkCreateAliasBufferPool)(void* context, BufferPoolType*,
    gs::NativeImageHandle, uint64_t);
  void (*destroyBufferPool)(void* context, BufferPoolType*);
  gs::NativeImageHandle (*getBufferPoolNativeImageHandle)(void* context,
    const BufferPoolType*, uint64_t);
  void* reservede8;
  void* reservedf0;
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
  Result (*setLayerNextPermission)(void* context, LayerType*,
    BufferPermissionBits, bool);
  void (*clearLayerNextPermission)(void* context, LayerType*,
    BufferPermissionBits);
  Result (*setLayerNextContent)(void* context, LayerType*, BufferContentBits,
    bool);
  void (*clearLayerNextContent)(void* context, LayerType*, BufferContentBits);
  void* reserved160;
  Result (*sdkGetBufferPoolNativeMemoryHandle)(void* context,
    const BufferPoolType*);
  void* reserved170;
  Result (*glSetLayerBufferSize)(void* context, LayerType*, uint16_t, uint16_t);
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
  Result (*setLayerNextExtendedSwapInterval)(void* context, LayerType*, int,
    int);
  void (*clearLayerNextExtendedSwapInterval)(void* context, LayerType*);
  Result (*setDisplayHdrOutputFormatCapability)(void* context, DisplayType*,
    HdrOutputFormat, HdrOutputFormatCapability);
  Result (*queryDisplayHdrStatus)(void* context, HdrOutputFormat*, uint16_t*,
    const DisplayType*);
  Result (*queryDisplayHdrPaperWhite)(void* context, uint16_t*,
    const DisplayType*);
  Result (*setLayerNextHdrExtendedContentLuminanceRangeMetadata)(void* context,
    LayerType*, uint16_t, uint16_t);
  Result (*setLayerNextHdrStandardContentLuminanceRangeMetadata)(void* context,
    LayerType*, uint16_t, uint16_t);
  Result (*setLayerNextHdrContentGamutMetadata)(void* context, LayerType*,
    HdrContentGamut);
  void (*clearLayerNextHdrContentGamutMetadata)(void* context, LayerType*);
  Result (*setLayerNextHdrToSdrToneMappingMetadata)(void* context, LayerType*,
    HdrToneMapping);
  void (*clearLayerNextHdrToSdrToneMappingMetadata)(void* context, LayerType*);
  Result (*setLayerNextHdrAdjustableBezierMetadata)(void* context, LayerType*,
    float, float, float);
  void (*clearLayerNextHdrAdjustableBezierMetadata)(void* context, LayerType*);
  void* reserved238;
  Result (*setLayerNativeWindowHdrLinearColorEncoding)(void* context,
    LayerType*, HdrColorEncoding, uint16_t);
  Result (*createHdrStatusEvent)(void* context, HdrStatusEventType*,
    const DisplayType*, os::EventClearMode);
  void (*destroyHdrStatusEvent)(void* context, HdrStatusEventType*);
  void* reserved258;
  void* reserved260;
  bool (*tryWaitHdrStatusEvent)(void* context, HdrStatusEventType*);
  void (*clearHdrStatusEvent)(void* context, HdrStatusEventType*);
  void (*initializeMultiWaitHolderForHdrStatusEvent)(void* context,
    os::MultiWaitHolderType*, HdrStatusEventType*);
  Result (*sdkDuplicateHdrStatusEvent)(void* context, os::SystemEventType*,
    const HdrStatusEventType*, os::EventClearMode);
  Result (*createHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*,
    const DisplayType*, os::EventClearMode);
  void (*destroyHdrPaperWhiteEvent)(void* context, HdrPaperWhiteEventType*);
  void* reserved298;
  void* reserved2a0;
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
  Result (*getRecordedTimestamp)(void* context, const TimestampRecorderType*,
    BufferCheckpointBits);
  Result (*setLayerNextTimestampRecorder)(void* context, LayerType*,
    TimestampRecorderType*, BufferCheckpointBits);
  void (*clearLayerNextTimestampRecorder)(void* context, LayerType*);
  Result (*getLayerNextFrameNumber)(void* context, uint64_t*, const LayerType*);
  Result (*sdkSetLayerNextUserData)(void* context, LayerType*,
    sdk::LayerUserDataType, uint64_t);
  void (*sdkClearLayerNextUserData)(void* context, LayerType*);
  Result (*sdkSetLayerNextRotationResolveMode)(void* context, LayerType*,
    sdk::RotationResolveMode);
  void* reserved388;
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
};

extern Frontend g_Frontend;

}

}
