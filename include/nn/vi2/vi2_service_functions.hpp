#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/gsdrv/gsdrv_unique_native_handle.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/result.hpp"

namespace nn::gs {

struct NativeMemoryHandle {
  uint32_t value;
};

namespace cpu {

enum MemoryCacheability : uint8_t {};

}

namespace sdk {

Result CreateNativeMemory(NativeMemoryHandle* pOutHandle, void* address,
  size_t size, os::MemoryPermission permission,
  cpu::MemoryCacheability cacheability);
void DestroyNativeMemory(NativeMemoryHandle handle);
Result CreateNativeMemoryWithTransferMemory(NativeMemoryHandle* pOutHandle,
  gsdrv::UniqueNativeHandle&& handle, size_t size,
  os::MemoryPermission permission);
Result CreateNativeMemoryWithProtectedMemory(NativeMemoryHandle* pOutHandle,
  size_t size);

}

}

namespace nn::vi2::detail {

// Raw 64 byte image description sent with the buffer creation requests.
struct ImageDescriptor {
  uint64_t value[8];
};

struct Uuid {
  uint64_t value[2];
};

struct PanelIdentifierData {
  uint64_t value[3];
};

class ServiceClient;

// The service functions the frontend reaches through its backend table at
// 0xea3ab8, each taking the client as its context.
struct ServiceFunctions {
  uint64_t majorVersion;
  uint64_t minorVersion;
  uint64_t count;
  void* context;
  void* pInitialBufferPermission;
  void* pInitialBufferContent;
  void* reserved30;
  Result (*initialize)(void* context);
  void (*finalize)(void* context);
  Result (*getMaxDisplayIndex)(void* context, uint32_t* pOutIndex);
  Result (*getDisplayEvent)(void* context,
    gsdrv::UniqueNativeHandle* pOutHandle, uint32_t eventId);
  Result (*duplicateEvent)(void* context,
    gsdrv::UniqueNativeHandle* pOutHandle, uint32_t eventId,
    uint32_t handle);
  Result (*getMaxLayerIndex)(void* context, uint32_t* pOutIndex);
  Result (*getLayerEvent)(void* context,
    gsdrv::UniqueNativeHandle* pOutHandle, uint32_t eventId);
  void (*releaseEvent)(void* context, uint32_t eventId);
  Result (*readSharedData)(void* context, void* buffer, size_t size);
  Result (*createNativeMemory)(void* context, gs::NativeMemoryHandle*,
    void* address, size_t size, os::MemoryPermission permission,
    gs::cpu::MemoryCacheability cacheability);
  void (*destroyNativeMemory)(void* context, gs::NativeMemoryHandle handle);
  Result (*createNativeImage)(void* context, uint32_t* pOutHandle,
    const ImageDescriptor& descriptor, uint32_t count, uint32_t memory);
  Result (*createNativeImageForSystem)(void* context, uint32_t* pOutHandle,
    const ImageDescriptor& descriptor, uint32_t count, uint32_t memory);
  void (*destroyNativeImage)(void* context, uint32_t image);
  Result (*createAliasImage)(void* context, uint32_t image, uint32_t count);
  void (*destroyAliasImage)(void* context, uint32_t image);
  Result (*openDisplay)(void* context, uint64_t display, uint32_t index);
  void (*closeDisplay)(void* context, uint64_t display);
  Result (*createEndpoint)(void* context, uint64_t endpoint,
    uint64_t display, uint64_t settings);
  Result (*createLayer)(void* context, uint64_t layer, uint64_t endpoint);
  void (*destroyLayer)(void* context, uint64_t layer, uint64_t endpoint);
  Result (*createVsyncEvent)(void* context, uint64_t display,
    uint32_t eventId);
  void (*destroyVsyncEvent)(void* context, uint64_t display,
    uint32_t eventId);
  Result (*registerLayerBuffer)(void* context, uint64_t layer,
    uint64_t pool);
  void (*unregisterLayerBuffer)(void* context, uint64_t layer);
  Result (*setLayerSwapInterval)(void* context, uint64_t layer,
    uint32_t interval, uint32_t extended);
  void (*clearLayerSwapInterval)(void* context, uint64_t layer);
  Result (*getLayerFrameNumber)(void* context, uint64_t* pOutValue,
    uint64_t layer);
  Result (*presentLayerBuffer)(void* context, uint64_t* pOutFrame,
    Uuid* pOutFence, uint64_t layer, uint8_t slot, uint32_t flags,
    const ImageDescriptor& descriptor, const Uuid& sync);
  Result (*acquireLayerBuffer)(void* context, uint64_t* pOutFrame,
    Uuid* pOutFence, uint64_t layer, uint8_t slot,
    const ImageDescriptor& descriptor);
  Result (*createNativeMemoryWithTransferMemory)(void* context,
    gs::NativeMemoryHandle* pOutHandle, gsdrv::UniqueNativeHandle&& handle,
    size_t size, os::MemoryPermission permission);
  Result (*setDisplayRefreshRateCapability)(void* context, uint64_t display,
    uint64_t rate, uint64_t capability);
  Result (*queryDisplayRefreshRate)(void* context, uint64_t* pOutValue,
    uint64_t display);
  Result (*createRefreshRateEvent)(void* context, uint64_t display,
    uint32_t eventId);
  void (*destroyRefreshRateEvent)(void* context, uint64_t display,
    uint32_t eventId);
  Result (*setDisplayHdrOutputFormatCapability)(void* context,
    uint64_t display, uint64_t format, uint64_t capability);
  Result (*queryDisplayHdrStatus)(void* context, uint64_t* pOutFormat,
    uint16_t* pOutLuminance, uint64_t display);
  Result (*createHdrStatusEvent)(void* context, uint64_t display,
    uint32_t eventId);
  void (*destroyHdrStatusEvent)(void* context, uint64_t display,
    uint32_t eventId);
  Result (*queryDisplayHdrPaperWhite)(void* context, uint16_t* pOutValue,
    uint64_t display);
  Result (*createHdrPaperWhiteEvent)(void* context, uint64_t display,
    uint32_t eventId);
  void (*destroyHdrPaperWhiteEvent)(void* context, uint64_t display,
    uint32_t eventId);
  Result (*queryDisplayBufferMaxResolution)(void* context,
    uint64_t* pOutValue, uint64_t display);
  Result (*createBufferMaxResolutionEvent)(void* context, uint64_t display,
    uint32_t eventId);
  void (*destroyBufferMaxResolutionEvent)(void* context, uint64_t display,
    uint32_t eventId);
  Result (*queryDisplayModeCapability)(void* context,
    uint64_t* pOutRefreshRates, uint64_t* pOutHdrOutputFormats,
    uint64_t* pOutVrrRefreshRates, uint64_t display);
  Result (*createModeCapabilityEvent)(void* context, uint64_t display,
    uint32_t eventId);
  void (*destroyModeCapabilityEvent)(void* context, uint64_t display,
    uint32_t eventId);
  Result (*getMaxTimestampRecorderIndex)(void* context, uint32_t* pOutIndex);
  Result (*initializeTimestampRecorders)(void* context, uint32_t maxIndex);
  Result (*getRecordedTimestamps)(void* context, uint64_t* pOutCount,
    bool* pOutIsValid, uint32_t index, uint64_t checkpoints,
    uint64_t* buffer, size_t count);
  Result (*setLayerHdrMetadata)(void* context, uint64_t layer,
    uint64_t metadata);
  Result (*setLayerHdrBezierMetadata)(void* context, uint64_t layer,
    float kneeX, float kneeY, float anchor);
  Result (*clearLayerHdrMetadata)(void* context, uint64_t layer);
  Result (*createNativeMemoryWithProtectedMemory)(void* context,
    gs::NativeMemoryHandle* pOutHandle, size_t size);
  Result (*queryDisplayPanelIdentifier)(void* context,
    PanelIdentifierData* pOutValue, uint64_t display);
  Result (*queryAvailableRefreshRates)(void* context, void* buffer,
    uint32_t count, uint8_t* pOutCount, uint64_t display);
  Result (*createAvailableRefreshRatesEvent)(void* context,
    uint64_t display, uint32_t eventId);
  void (*destroyAvailableRefreshRatesEvent)(void* context, uint64_t display,
    uint32_t eventId);
};

void SetUpServiceFunctions(ServiceFunctions* pFunctions,
  ServiceClient* pClient);

}
