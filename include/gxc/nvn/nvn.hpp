#pragma once

#include <cstddef>
#include <cstdint>

// The NVN objects are opaque storage, their sizes come from the members of
// the gxc wrappers. The entry points are the function pointers that the
// procedure loader fills.
extern "C" {

struct NVNdevice {
  char reserved[0x3000];
};

struct NVNdeviceBuilder {
  char reserved[0x40];
};

struct NVNqueue {
  char reserved[0x3000];
};

struct NVNqueueBuilder {
  char reserved[0x50];
};

struct NVNcommandBuffer {
  char reserved[0xc0];
};

struct NVNmemoryPool {
  char reserved[0x100];
};

struct NVNmemoryPoolBuilder {
  char reserved[0x40];
};

struct NVNbuffer {
  char reserved[0x30];
};

struct NVNbufferBuilder {
  char reserved[0x40];
};

struct NVNtexture {
  char reserved[0x80];
};

struct NVNtextureBuilder {
  char reserved[0x80];
};

struct NVNtextureView {
  char reserved[0x10];
};

struct NVNtexturePool {
  char reserved[0x20];
};

struct NVNsamplerPool {
  char reserved[0x20];
};

struct NVNsync {
  char reserved[0x40];
};

struct NVNwindow {
  char reserved[0x280];
};

struct NVNdepthStencilState {
  uint64_t reserved;
};

struct NVNblendState {
  uint64_t reserved;
};

struct NVNcolorState {
  uint32_t reserved;
};

struct NVNchannelMaskState {
  uint32_t reserved;
};

struct NVNpolygonState {
  uint32_t reserved;
};

struct NVNmultisampleState {
  uint64_t reserved[3];
};

struct NVNprogram;
struct NVNvertexAttribState;
struct NVNvertexStreamState;

struct NVNbufferRange {
  uint64_t address;
  uint64_t size;
};

using NVNboolean = uint8_t;
using NVNbufferAddress = uint64_t;
using NVNcommandHandle = uint64_t;
using NVNtextureHandle = uint64_t;
using NVNimageHandle = uint64_t;

using NVNcommandBufferMemoryCallback = void (*)(NVNcommandBuffer* buffer,
  int event, size_t minSize, void* userData);

extern void (*pfnc_nvnDeviceGetInteger)(const NVNdevice* device, int name,
  int* value);
extern void (*pfnc_nvnDeviceFinalizeCommandHandle)(NVNdevice* device,
  NVNcommandHandle handle);
extern NVNtextureHandle (*pfnc_nvnDeviceGetTextureHandle)(
  const NVNdevice* device, int textureId, int samplerId);
extern NVNtextureHandle (*pfnc_nvnDeviceGetTexelFetchHandle)(
  const NVNdevice* device, int textureId);
extern NVNimageHandle (*pfnc_nvnDeviceGetImageHandle)(const NVNdevice* device,
  int imageId);

extern void (*pfnc_nvnCommandBufferInitialize)(NVNcommandBuffer* buffer,
  NVNdevice* device);
extern void (*pfnc_nvnCommandBufferSetMemoryCallback)(
  NVNcommandBuffer* buffer, NVNcommandBufferMemoryCallback callback);
extern void (*pfnc_nvnCommandBufferSetMemoryCallbackData)(
  NVNcommandBuffer* buffer, void* data);
extern void (*pfnc_nvnCommandBufferSetRecordingMode)(NVNcommandBuffer* buffer,
  int mode);
extern void (*pfnc_nvnCommandBufferFinalize)(NVNcommandBuffer* buffer);
extern void (*pfnc_nvnCommandBufferAddCommandMemory)(NVNcommandBuffer* buffer,
  const NVNmemoryPool* pool, ptrdiff_t offset, size_t size);
extern void (*pfnc_nvnCommandBufferAddControlMemory)(NVNcommandBuffer* buffer,
  void* memory, size_t size);
extern size_t (*pfnc_nvnCommandBufferGetCommandMemoryUsed)(
  const NVNcommandBuffer* buffer);
extern size_t (*pfnc_nvnCommandBufferGetControlMemoryUsed)(
  const NVNcommandBuffer* buffer);
extern void (*pfnc_nvnCommandBufferBeginRecording)(NVNcommandBuffer* buffer);
extern NVNcommandHandle (*pfnc_nvnCommandBufferEndRecording)(
  NVNcommandBuffer* buffer);
extern void (*pfnc_nvnCommandBufferCallCommands)(NVNcommandBuffer* buffer,
  int count, const NVNcommandHandle* handles);
extern void (*pfnc_nvnCommandBufferBarrier)(NVNcommandBuffer* buffer,
  int barrier);
extern void (*pfnc_nvnCommandBufferSetViewport)(NVNcommandBuffer* buffer,
  int x, int y, int w, int h);
extern void (*pfnc_nvnCommandBufferSetDepthRange)(NVNcommandBuffer* buffer,
  float n, float f);
extern void (*pfnc_nvnCommandBufferSetScissor)(NVNcommandBuffer* buffer,
  int x, int y, int w, int h);
extern void (*pfnc_nvnCommandBufferSetRenderTargets)(NVNcommandBuffer* buffer,
  int count, const NVNtexture* const* colors,
  const NVNtextureView* const* colorViews, const NVNtexture* depth,
  const NVNtextureView* depthView);
extern void (*pfnc_nvnCommandBufferClearColor)(NVNcommandBuffer* buffer,
  int index, const float* color, int mask);
extern void (*pfnc_nvnCommandBufferClearDepthStencil)(NVNcommandBuffer* buffer,
  float depth, NVNboolean depthMask, int stencil, int stencilMask);
extern void (*pfnc_nvnCommandBufferSetTexturePool)(NVNcommandBuffer* buffer,
  const NVNtexturePool* pool);
extern void (*pfnc_nvnCommandBufferSetSamplerPool)(NVNcommandBuffer* buffer,
  const NVNsamplerPool* pool);
extern void (*pfnc_nvnCommandBufferSetDepthClamp)(NVNcommandBuffer* buffer,
  NVNboolean enable);
extern void (*pfnc_nvnCommandBufferBindVertexBuffer)(NVNcommandBuffer* buffer,
  int index, NVNbufferAddress address, size_t size);
extern void (*pfnc_nvnCommandBufferBindVertexBuffers)(
  NVNcommandBuffer* buffer, int first, int count,
  const NVNbufferRange* ranges);
extern void (*pfnc_nvnCommandBufferBindProgram)(NVNcommandBuffer* buffer,
  const NVNprogram* program, int stages);
extern void (*pfnc_nvnCommandBufferBindVertexAttribState)(
  NVNcommandBuffer* buffer, int count, const NVNvertexAttribState* attribs);
extern void (*pfnc_nvnCommandBufferBindVertexStreamState)(
  NVNcommandBuffer* buffer, int count, const NVNvertexStreamState* streams);
extern void (*pfnc_nvnCommandBufferBindUniformBuffer)(NVNcommandBuffer* buffer,
  int stage, int index, NVNbufferAddress address, size_t size);
extern void (*pfnc_nvnCommandBufferBindStorageBuffer)(NVNcommandBuffer* buffer,
  int stage, int index, NVNbufferAddress address, size_t size);
extern void (*pfnc_nvnCommandBufferBindTexture)(NVNcommandBuffer* buffer,
  int stage, int index, NVNtextureHandle handle);
extern void (*pfnc_nvnCommandBufferBindImage)(NVNcommandBuffer* buffer,
  int stage, int index, NVNimageHandle handle);
extern void (*pfnc_nvnCommandBufferDrawArrays)(NVNcommandBuffer* buffer,
  int mode, int first, int count);
extern void (*pfnc_nvnCommandBufferDrawArraysInstanced)(
  NVNcommandBuffer* buffer, int mode, int first, int count, int baseInstance,
  int instanceCount);
extern void (*pfnc_nvnCommandBufferDrawElements)(NVNcommandBuffer* buffer,
  int mode, int type, int count, NVNbufferAddress indexBuffer);
extern void (*pfnc_nvnCommandBufferDispatchCompute)(NVNcommandBuffer* buffer,
  int x, int y, int z);
extern void (*pfnc_nvnCommandBufferFenceSync)(NVNcommandBuffer* buffer,
  NVNsync* sync, int condition, int flags);
extern void (*pfnc_nvnCommandBufferWaitSync)(NVNcommandBuffer* buffer,
  const NVNsync* sync);
extern void (*pfnc_nvnCommandBufferPushDebugGroup)(NVNcommandBuffer* buffer,
  uint32_t domain, const char* description);
extern void (*pfnc_nvnCommandBufferPopDebugGroup)(NVNcommandBuffer* buffer,
  uint32_t domain);

extern void (*pfnc_nvnSyncInitialize)(NVNsync* sync, NVNdevice* device);
extern void (*pfnc_nvnSyncFinalize)(NVNsync* sync);
extern int (*pfnc_nvnSyncWait)(const NVNsync* sync, uint64_t timeout);

extern NVNboolean (*pfnc_nvnTexturePoolInitialize)(NVNtexturePool* pool,
  const NVNmemoryPool* memoryPool, ptrdiff_t offset, int count);
extern void (*pfnc_nvnTexturePoolFinalize)(NVNtexturePool* pool);
extern void (*pfnc_nvnTexturePoolRegisterTexture)(const NVNtexturePool* pool,
  int id, const NVNtexture* texture, const NVNtextureView* view);
extern NVNboolean (*pfnc_nvnSamplerPoolInitialize)(NVNsamplerPool* pool,
  const NVNmemoryPool* memoryPool, ptrdiff_t offset, int count);
extern void (*pfnc_nvnSamplerPoolFinalize)(NVNsamplerPool* pool);

extern void (*pfnc_nvnTextureFinalize)(NVNtexture* texture);
extern void (*pfnc_nvnTextureSetDebugLabel)(NVNtexture* texture,
  const char* label);

using NVNdebugCallback = void (*)(int source, int type, int id, int severity,
  const char* message, void* userData);

void* nvnBootstrapLoader(const char* name);

extern void (*pfnc_nvnDeviceBuilderSetDefaults)(NVNdeviceBuilder* builder);
extern void (*pfnc_nvnDeviceBuilderSetFlags)(NVNdeviceBuilder* builder,
  int flags);
extern NVNboolean (*pfnc_nvnDeviceInitialize)(NVNdevice* device,
  const NVNdeviceBuilder* builder);
extern void (*pfnc_nvnDeviceFinalize)(NVNdevice* device);
extern void (*pfnc_nvnDeviceInstallDebugCallback)(NVNdevice* device,
  NVNdebugCallback callback, void* userData, NVNboolean enable);

extern int (*pfnc_nvnWindowGetPresentInterval)(const NVNwindow* window);
extern void (*pfnc_nvnWindowSetPresentInterval)(NVNwindow* window,
  int interval);
extern void (*pfnc_nvnQueuePresentTexture)(NVNqueue* queue, NVNwindow* window,
  int index);

extern void (*pfnc_nvnMemoryPoolBuilderSetDefaults)(
  NVNmemoryPoolBuilder* builder);
extern void (*pfnc_nvnMemoryPoolBuilderSetDevice)(
  NVNmemoryPoolBuilder* builder, NVNdevice* device);
extern void (*pfnc_nvnMemoryPoolBuilderSetFlags)(NVNmemoryPoolBuilder* builder,
  int flags);
extern void (*pfnc_nvnMemoryPoolBuilderSetStorage)(
  NVNmemoryPoolBuilder* builder, void* memory, size_t size);
extern NVNboolean (*pfnc_nvnMemoryPoolInitialize)(NVNmemoryPool* pool,
  const NVNmemoryPoolBuilder* builder);
extern void (*pfnc_nvnMemoryPoolFinalize)(NVNmemoryPool* pool);

extern void (*pfnc_nvnBufferBuilderSetDefaults)(NVNbufferBuilder* builder);
extern void (*pfnc_nvnBufferBuilderSetDevice)(NVNbufferBuilder* builder,
  NVNdevice* device);
extern void (*pfnc_nvnBufferBuilderSetStorage)(NVNbufferBuilder* builder,
  const NVNmemoryPool* pool, ptrdiff_t offset, size_t size);
extern NVNboolean (*pfnc_nvnBufferInitialize)(NVNbuffer* buffer,
  const NVNbufferBuilder* builder);
extern void (*pfnc_nvnBufferFinalize)(NVNbuffer* buffer);
extern NVNbufferAddress (*pfnc_nvnBufferGetAddress)(const NVNbuffer* buffer);
extern void* (*pfnc_nvnBufferMap)(const NVNbuffer* buffer);

extern void (*pfnc_nvnQueueBuilderSetDefaults)(NVNqueueBuilder* builder);
extern void (*pfnc_nvnQueueBuilderSetDevice)(NVNqueueBuilder* builder,
  NVNdevice* device);
extern void (*pfnc_nvnQueueBuilderSetFlags)(NVNqueueBuilder* builder,
  int flags);
extern void (*pfnc_nvnQueueBuilderSetCommandMemorySize)(
  NVNqueueBuilder* builder, size_t size);
extern void (*pfnc_nvnQueueBuilderSetComputeMemorySize)(
  NVNqueueBuilder* builder, size_t size);
extern void (*pfnc_nvnQueueBuilderSetControlMemorySize)(
  NVNqueueBuilder* builder, size_t size);
extern size_t (*pfnc_nvnQueueBuilderGetQueueMemorySize)(
  const NVNqueueBuilder* builder);
extern void (*pfnc_nvnQueueBuilderSetQueueMemory)(NVNqueueBuilder* builder,
  void* memory, size_t size);
extern void (*pfnc_nvnQueueBuilderSetCommandFlushThreshold)(
  NVNqueueBuilder* builder, size_t threshold);
extern void (*pfnc_nvnQueueBuilderSetPrimaryQueue)(NVNqueueBuilder* builder,
  NVNqueue* queue);
extern NVNboolean (*pfnc_nvnQueueInitialize)(NVNqueue* queue,
  const NVNqueueBuilder* builder);
extern void (*pfnc_nvnQueueFinalize)(NVNqueue* queue);
extern void (*pfnc_nvnQueueSubmitCommands)(NVNqueue* queue, int count,
  const NVNcommandHandle* handles);
extern void (*pfnc_nvnQueueFlush)(NVNqueue* queue);
extern void (*pfnc_nvnQueueFenceSync)(NVNqueue* queue, NVNsync* sync,
  int condition, int flags);
extern void (*pfnc_nvnQueueWaitSync)(NVNqueue* queue, const NVNsync* sync);

extern void (*pfnc_nvnWindowFinalize)(NVNwindow* window);
extern int (*pfnc_nvnWindowAcquireTexture)(NVNwindow* window, NVNsync* sync,
  int* index);

extern void (*pfnc_nvnCommandBufferBindDepthStencilState)(
  NVNcommandBuffer* buffer, const NVNdepthStencilState* state);
extern void (*pfnc_nvnCommandBufferBindBlendState)(NVNcommandBuffer* buffer,
  const NVNblendState* state);
extern void (*pfnc_nvnCommandBufferBindChannelMaskState)(
  NVNcommandBuffer* buffer, const NVNchannelMaskState* state);
extern void (*pfnc_nvnCommandBufferBindColorState)(NVNcommandBuffer* buffer,
  const NVNcolorState* state);
extern void (*pfnc_nvnCommandBufferBindPolygonState)(NVNcommandBuffer* buffer,
  const NVNpolygonState* state);
extern void (*pfnc_nvnCommandBufferBindMultisampleState)(
  NVNcommandBuffer* buffer, const NVNmultisampleState* state);

}

// Inline entry points.

inline void nvnDeviceGetInteger(const NVNdevice* device, int name, int* value) {
  pfnc_nvnDeviceGetInteger(device, name, value);
}

inline void nvnDeviceFinalizeCommandHandle(NVNdevice* device,
  NVNcommandHandle handle) {
  pfnc_nvnDeviceFinalizeCommandHandle(device, handle);
}

inline NVNtextureHandle nvnDeviceGetTextureHandle(const NVNdevice* device,
  int textureId, int samplerId) {
  return pfnc_nvnDeviceGetTextureHandle(device, textureId, samplerId);
}

inline NVNtextureHandle nvnDeviceGetTexelFetchHandle(const NVNdevice* device,
  int textureId) {
  return pfnc_nvnDeviceGetTexelFetchHandle(device, textureId);
}

inline NVNimageHandle nvnDeviceGetImageHandle(const NVNdevice* device,
  int imageId) {
  return pfnc_nvnDeviceGetImageHandle(device, imageId);
}

inline void nvnCommandBufferInitialize(NVNcommandBuffer* buffer,
  NVNdevice* device) {
  pfnc_nvnCommandBufferInitialize(buffer, device);
}

inline void nvnCommandBufferSetMemoryCallback(NVNcommandBuffer* buffer,
  NVNcommandBufferMemoryCallback callback) {
  pfnc_nvnCommandBufferSetMemoryCallback(buffer, callback);
}

inline void nvnCommandBufferSetMemoryCallbackData(NVNcommandBuffer* buffer,
  void* data) {
  pfnc_nvnCommandBufferSetMemoryCallbackData(buffer, data);
}

inline void nvnCommandBufferSetRecordingMode(NVNcommandBuffer* buffer,
  int mode) {
  pfnc_nvnCommandBufferSetRecordingMode(buffer, mode);
}

inline void nvnCommandBufferFinalize(NVNcommandBuffer* buffer) {
  pfnc_nvnCommandBufferFinalize(buffer);
}

inline void nvnCommandBufferAddCommandMemory(NVNcommandBuffer* buffer,
  const NVNmemoryPool* pool, ptrdiff_t offset, size_t size) {
  pfnc_nvnCommandBufferAddCommandMemory(buffer, pool, offset, size);
}

inline void nvnCommandBufferAddControlMemory(NVNcommandBuffer* buffer,
  void* memory, size_t size) {
  pfnc_nvnCommandBufferAddControlMemory(buffer, memory, size);
}

inline size_t nvnCommandBufferGetCommandMemoryUsed(
  const NVNcommandBuffer* buffer) {
  return pfnc_nvnCommandBufferGetCommandMemoryUsed(buffer);
}

inline size_t nvnCommandBufferGetControlMemoryUsed(
  const NVNcommandBuffer* buffer) {
  return pfnc_nvnCommandBufferGetControlMemoryUsed(buffer);
}

inline void nvnCommandBufferBeginRecording(NVNcommandBuffer* buffer) {
  pfnc_nvnCommandBufferBeginRecording(buffer);
}

inline NVNcommandHandle nvnCommandBufferEndRecording(NVNcommandBuffer* buffer) {
  return pfnc_nvnCommandBufferEndRecording(buffer);
}

inline void nvnCommandBufferCallCommands(NVNcommandBuffer* buffer, int count,
  const NVNcommandHandle* handles) {
  pfnc_nvnCommandBufferCallCommands(buffer, count, handles);
}

inline void nvnCommandBufferBarrier(NVNcommandBuffer* buffer, int barrier) {
  pfnc_nvnCommandBufferBarrier(buffer, barrier);
}

inline void nvnCommandBufferSetViewport(NVNcommandBuffer* buffer, int x, int y,
  int w, int h) {
  pfnc_nvnCommandBufferSetViewport(buffer, x, y, w, h);
}

inline void nvnCommandBufferSetDepthRange(NVNcommandBuffer* buffer, float n,
  float f) {
  pfnc_nvnCommandBufferSetDepthRange(buffer, n, f);
}

inline void nvnCommandBufferSetScissor(NVNcommandBuffer* buffer, int x, int y,
  int w, int h) {
  pfnc_nvnCommandBufferSetScissor(buffer, x, y, w, h);
}

inline void nvnCommandBufferSetRenderTargets(NVNcommandBuffer* buffer,
  int count, const NVNtexture* const* colors,
  const NVNtextureView* const* colorViews, const NVNtexture* depth,
  const NVNtextureView* depthView) {
  pfnc_nvnCommandBufferSetRenderTargets(
    buffer, count, colors, colorViews, depth, depthView);
}

inline void nvnCommandBufferClearColor(NVNcommandBuffer* buffer, int index,
  const float* color, int mask) {
  pfnc_nvnCommandBufferClearColor(buffer, index, color, mask);
}

inline void nvnCommandBufferClearDepthStencil(NVNcommandBuffer* buffer,
  float depth, NVNboolean depthMask, int stencil, int stencilMask) {
  pfnc_nvnCommandBufferClearDepthStencil(
    buffer, depth, depthMask, stencil, stencilMask);
}

inline void nvnCommandBufferSetTexturePool(NVNcommandBuffer* buffer,
  const NVNtexturePool* pool) {
  pfnc_nvnCommandBufferSetTexturePool(buffer, pool);
}

inline void nvnCommandBufferSetSamplerPool(NVNcommandBuffer* buffer,
  const NVNsamplerPool* pool) {
  pfnc_nvnCommandBufferSetSamplerPool(buffer, pool);
}

inline void nvnCommandBufferSetDepthClamp(NVNcommandBuffer* buffer,
  NVNboolean enable) {
  pfnc_nvnCommandBufferSetDepthClamp(buffer, enable);
}

inline void nvnCommandBufferBindVertexBuffer(NVNcommandBuffer* buffer,
  int index, NVNbufferAddress address, size_t size) {
  pfnc_nvnCommandBufferBindVertexBuffer(buffer, index, address, size);
}

inline void nvnCommandBufferBindVertexBuffers(NVNcommandBuffer* buffer,
  int first, int count, const NVNbufferRange* ranges) {
  pfnc_nvnCommandBufferBindVertexBuffers(buffer, first, count, ranges);
}

inline void nvnCommandBufferBindProgram(NVNcommandBuffer* buffer,
  const NVNprogram* program, int stages) {
  pfnc_nvnCommandBufferBindProgram(buffer, program, stages);
}

inline void nvnCommandBufferBindVertexAttribState(NVNcommandBuffer* buffer,
  int count, const NVNvertexAttribState* attribs) {
  pfnc_nvnCommandBufferBindVertexAttribState(buffer, count, attribs);
}

inline void nvnCommandBufferBindVertexStreamState(NVNcommandBuffer* buffer,
  int count, const NVNvertexStreamState* streams) {
  pfnc_nvnCommandBufferBindVertexStreamState(buffer, count, streams);
}

inline void nvnCommandBufferBindUniformBuffer(NVNcommandBuffer* buffer,
  int stage, int index, NVNbufferAddress address, size_t size) {
  pfnc_nvnCommandBufferBindUniformBuffer(buffer, stage, index, address, size);
}

inline void nvnCommandBufferBindStorageBuffer(NVNcommandBuffer* buffer,
  int stage, int index, NVNbufferAddress address, size_t size) {
  pfnc_nvnCommandBufferBindStorageBuffer(buffer, stage, index, address, size);
}

inline void nvnCommandBufferBindTexture(NVNcommandBuffer* buffer, int stage,
  int index, NVNtextureHandle handle) {
  pfnc_nvnCommandBufferBindTexture(buffer, stage, index, handle);
}

inline void nvnCommandBufferBindImage(NVNcommandBuffer* buffer, int stage,
  int index, NVNimageHandle handle) {
  pfnc_nvnCommandBufferBindImage(buffer, stage, index, handle);
}

inline void nvnCommandBufferDrawArrays(NVNcommandBuffer* buffer, int mode,
  int first, int count) {
  pfnc_nvnCommandBufferDrawArrays(buffer, mode, first, count);
}

inline void nvnCommandBufferDrawArraysInstanced(NVNcommandBuffer* buffer,
  int mode, int first, int count, int baseInstance, int instanceCount) {
  pfnc_nvnCommandBufferDrawArraysInstanced(
    buffer, mode, first, count, baseInstance, instanceCount);
}

inline void nvnCommandBufferDrawElements(NVNcommandBuffer* buffer, int mode,
  int type, int count, NVNbufferAddress indexBuffer) {
  pfnc_nvnCommandBufferDrawElements(buffer, mode, type, count, indexBuffer);
}

inline void nvnCommandBufferDispatchCompute(NVNcommandBuffer* buffer, int x,
  int y, int z) {
  pfnc_nvnCommandBufferDispatchCompute(buffer, x, y, z);
}

inline void nvnCommandBufferFenceSync(NVNcommandBuffer* buffer, NVNsync* sync,
  int condition, int flags) {
  pfnc_nvnCommandBufferFenceSync(buffer, sync, condition, flags);
}

inline void nvnCommandBufferWaitSync(NVNcommandBuffer* buffer,
  const NVNsync* sync) {
  pfnc_nvnCommandBufferWaitSync(buffer, sync);
}

inline void nvnCommandBufferPushDebugGroup(NVNcommandBuffer* buffer,
  uint32_t domain, const char* description) {
  pfnc_nvnCommandBufferPushDebugGroup(buffer, domain, description);
}

inline void nvnCommandBufferPopDebugGroup(NVNcommandBuffer* buffer,
  uint32_t domain) {
  pfnc_nvnCommandBufferPopDebugGroup(buffer, domain);
}

inline void nvnSyncInitialize(NVNsync* sync, NVNdevice* device) {
  pfnc_nvnSyncInitialize(sync, device);
}

inline void nvnSyncFinalize(NVNsync* sync) {
  pfnc_nvnSyncFinalize(sync);
}

inline int nvnSyncWait(const NVNsync* sync, uint64_t timeout) {
  return pfnc_nvnSyncWait(sync, timeout);
}

inline NVNboolean nvnTexturePoolInitialize(NVNtexturePool* pool,
  const NVNmemoryPool* memoryPool, ptrdiff_t offset, int count) {
  return pfnc_nvnTexturePoolInitialize(pool, memoryPool, offset, count);
}

inline void nvnTexturePoolFinalize(NVNtexturePool* pool) {
  pfnc_nvnTexturePoolFinalize(pool);
}

inline void nvnTexturePoolRegisterTexture(const NVNtexturePool* pool, int id,
  const NVNtexture* texture, const NVNtextureView* view) {
  pfnc_nvnTexturePoolRegisterTexture(pool, id, texture, view);
}

inline NVNboolean nvnSamplerPoolInitialize(NVNsamplerPool* pool,
  const NVNmemoryPool* memoryPool, ptrdiff_t offset, int count) {
  return pfnc_nvnSamplerPoolInitialize(pool, memoryPool, offset, count);
}

inline void nvnSamplerPoolFinalize(NVNsamplerPool* pool) {
  pfnc_nvnSamplerPoolFinalize(pool);
}

inline void nvnTextureFinalize(NVNtexture* texture) {
  pfnc_nvnTextureFinalize(texture);
}

inline void nvnTextureSetDebugLabel(NVNtexture* texture, const char* label) {
  pfnc_nvnTextureSetDebugLabel(texture, label);
}

inline void nvnDeviceBuilderSetDefaults(NVNdeviceBuilder* builder) {
  pfnc_nvnDeviceBuilderSetDefaults(builder);
}

inline void nvnDeviceBuilderSetFlags(NVNdeviceBuilder* builder, int flags) {
  pfnc_nvnDeviceBuilderSetFlags(builder, flags);
}

inline NVNboolean nvnDeviceInitialize(NVNdevice* device,
  const NVNdeviceBuilder* builder) {
  return pfnc_nvnDeviceInitialize(device, builder);
}

inline void nvnDeviceFinalize(NVNdevice* device) {
  pfnc_nvnDeviceFinalize(device);
}

inline void nvnDeviceInstallDebugCallback(NVNdevice* device,
  NVNdebugCallback callback, void* userData, NVNboolean enable) {
  pfnc_nvnDeviceInstallDebugCallback(device, callback, userData, enable);
}

inline int nvnWindowGetPresentInterval(const NVNwindow* window) {
  return pfnc_nvnWindowGetPresentInterval(window);
}

inline void nvnWindowSetPresentInterval(NVNwindow* window, int interval) {
  pfnc_nvnWindowSetPresentInterval(window, interval);
}

inline void nvnQueuePresentTexture(NVNqueue* queue, NVNwindow* window,
  int index) {
  pfnc_nvnQueuePresentTexture(queue, window, index);
}

inline void nvnMemoryPoolBuilderSetDefaults(NVNmemoryPoolBuilder* builder) {
  pfnc_nvnMemoryPoolBuilderSetDefaults(builder);
}

inline void nvnMemoryPoolBuilderSetDevice(NVNmemoryPoolBuilder* builder,
  NVNdevice* device) {
  pfnc_nvnMemoryPoolBuilderSetDevice(builder, device);
}

inline void nvnMemoryPoolBuilderSetFlags(NVNmemoryPoolBuilder* builder,
  int flags) {
  pfnc_nvnMemoryPoolBuilderSetFlags(builder, flags);
}

inline void nvnMemoryPoolBuilderSetStorage(NVNmemoryPoolBuilder* builder,
  void* memory, size_t size) {
  pfnc_nvnMemoryPoolBuilderSetStorage(builder, memory, size);
}

inline NVNboolean nvnMemoryPoolInitialize(NVNmemoryPool* pool,
  const NVNmemoryPoolBuilder* builder) {
  return pfnc_nvnMemoryPoolInitialize(pool, builder);
}

inline void nvnMemoryPoolFinalize(NVNmemoryPool* pool) {
  pfnc_nvnMemoryPoolFinalize(pool);
}

inline void nvnBufferBuilderSetDefaults(NVNbufferBuilder* builder) {
  pfnc_nvnBufferBuilderSetDefaults(builder);
}

inline void nvnBufferBuilderSetDevice(NVNbufferBuilder* builder,
  NVNdevice* device) {
  pfnc_nvnBufferBuilderSetDevice(builder, device);
}

inline void nvnBufferBuilderSetStorage(NVNbufferBuilder* builder,
  const NVNmemoryPool* pool, ptrdiff_t offset, size_t size) {
  pfnc_nvnBufferBuilderSetStorage(builder, pool, offset, size);
}

inline NVNboolean nvnBufferInitialize(NVNbuffer* buffer,
  const NVNbufferBuilder* builder) {
  return pfnc_nvnBufferInitialize(buffer, builder);
}

inline void nvnBufferFinalize(NVNbuffer* buffer) {
  pfnc_nvnBufferFinalize(buffer);
}

inline NVNbufferAddress nvnBufferGetAddress(const NVNbuffer* buffer) {
  return pfnc_nvnBufferGetAddress(buffer);
}

inline void* nvnBufferMap(const NVNbuffer* buffer) {
  return pfnc_nvnBufferMap(buffer);
}

inline void nvnQueueBuilderSetDefaults(NVNqueueBuilder* builder) {
  pfnc_nvnQueueBuilderSetDefaults(builder);
}

inline void nvnQueueBuilderSetDevice(NVNqueueBuilder* builder,
  NVNdevice* device) {
  pfnc_nvnQueueBuilderSetDevice(builder, device);
}

inline void nvnQueueBuilderSetFlags(NVNqueueBuilder* builder, int flags) {
  pfnc_nvnQueueBuilderSetFlags(builder, flags);
}

inline void nvnQueueBuilderSetCommandMemorySize(NVNqueueBuilder* builder,
  size_t size) {
  pfnc_nvnQueueBuilderSetCommandMemorySize(builder, size);
}

inline void nvnQueueBuilderSetComputeMemorySize(NVNqueueBuilder* builder,
  size_t size) {
  pfnc_nvnQueueBuilderSetComputeMemorySize(builder, size);
}

inline void nvnQueueBuilderSetControlMemorySize(NVNqueueBuilder* builder,
  size_t size) {
  pfnc_nvnQueueBuilderSetControlMemorySize(builder, size);
}

inline size_t nvnQueueBuilderGetQueueMemorySize(
  const NVNqueueBuilder* builder) {
  return pfnc_nvnQueueBuilderGetQueueMemorySize(builder);
}

inline void nvnQueueBuilderSetQueueMemory(NVNqueueBuilder* builder,
  void* memory, size_t size) {
  pfnc_nvnQueueBuilderSetQueueMemory(builder, memory, size);
}

inline void nvnQueueBuilderSetCommandFlushThreshold(NVNqueueBuilder* builder,
  size_t threshold) {
  pfnc_nvnQueueBuilderSetCommandFlushThreshold(builder, threshold);
}

inline void nvnQueueBuilderSetPrimaryQueue(NVNqueueBuilder* builder,
  NVNqueue* queue) {
  pfnc_nvnQueueBuilderSetPrimaryQueue(builder, queue);
}

inline NVNboolean nvnQueueInitialize(NVNqueue* queue,
  const NVNqueueBuilder* builder) {
  return pfnc_nvnQueueInitialize(queue, builder);
}

inline void nvnQueueFinalize(NVNqueue* queue) {
  pfnc_nvnQueueFinalize(queue);
}

inline void nvnQueueSubmitCommands(NVNqueue* queue, int count,
  const NVNcommandHandle* handles) {
  pfnc_nvnQueueSubmitCommands(queue, count, handles);
}

inline void nvnQueueFlush(NVNqueue* queue) {
  pfnc_nvnQueueFlush(queue);
}

inline void nvnQueueFenceSync(NVNqueue* queue, NVNsync* sync, int condition,
  int flags) {
  pfnc_nvnQueueFenceSync(queue, sync, condition, flags);
}

inline void nvnQueueWaitSync(NVNqueue* queue, const NVNsync* sync) {
  pfnc_nvnQueueWaitSync(queue, sync);
}

inline void nvnWindowFinalize(NVNwindow* window) {
  pfnc_nvnWindowFinalize(window);
}

inline int nvnWindowAcquireTexture(NVNwindow* window, NVNsync* sync,
  int* index) {
  return pfnc_nvnWindowAcquireTexture(window, sync, index);
}

inline void nvnCommandBufferBindDepthStencilState(NVNcommandBuffer* buffer,
  const NVNdepthStencilState* state) {
  pfnc_nvnCommandBufferBindDepthStencilState(buffer, state);
}

inline void nvnCommandBufferBindBlendState(NVNcommandBuffer* buffer,
  const NVNblendState* state) {
  pfnc_nvnCommandBufferBindBlendState(buffer, state);
}

inline void nvnCommandBufferBindChannelMaskState(NVNcommandBuffer* buffer,
  const NVNchannelMaskState* state) {
  pfnc_nvnCommandBufferBindChannelMaskState(buffer, state);
}

inline void nvnCommandBufferBindColorState(NVNcommandBuffer* buffer,
  const NVNcolorState* state) {
  pfnc_nvnCommandBufferBindColorState(buffer, state);
}

inline void nvnCommandBufferBindPolygonState(NVNcommandBuffer* buffer,
  const NVNpolygonState* state) {
  pfnc_nvnCommandBufferBindPolygonState(buffer, state);
}

inline void nvnCommandBufferBindMultisampleState(NVNcommandBuffer* buffer,
  const NVNmultisampleState* state) {
  pfnc_nvnCommandBufferBindMultisampleState(buffer, state);
}
